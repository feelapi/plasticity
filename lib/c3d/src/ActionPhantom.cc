// This is a generated file, modify: generate/templates/ActionPhantom.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/ActionPhantom.h"
#include "../include/Error.h"

#include "tool_mutex.h"

Napi::Object ActionPhantom::Init(Napi::Env env, Napi::Object exports) {
    Napi::Object object = Napi::Object::New(env);

    object.Set("SmoothPhantom", Napi::Function::New<&ActionPhantom::SmoothPhantom>(env));
    object.Set("SmoothPhantom_async", Napi::Function::New<&ActionPhantom::SmoothPhantom_async>(env));
    object.Set("SmoothSequence", Napi::Function::New<&ActionPhantom::SmoothSequence>(env));
    object.Set("SmoothSequence_async", Napi::Function::New<&ActionPhantom::SmoothSequence_async>(env));

    exports.Set("ActionPhantom", object);

    return exports;
}

        Napi::Value ActionPhantom::SmoothPhantom(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Solid::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Solid solid is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsArray()
)) {
                    Napi::Error::New(env, "Array edges is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 2 || !(
              (info[2].IsObject() && info[2].ToObject().InstanceOf(_SmoothValues::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "SmoothValues params is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    RPArray<MbSurface> *result = new RPArray<MbSurface>;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'solid'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Solid *solid_ = Solid::Unwrap(info[0].ToObject());
        
         MbSolid & solid =*solid_->_underlying;
        

                SArray<MbEdgeFunction>  edges;
if (!(info[1].IsNull() || info[1].IsUndefined())) {
    const Napi::Array edges_ = Napi::Array(env, info[1]);
        edges =  SArray<MbEdgeFunction>(edges_.Length(), 1);

    for (size_t i = 0; i < edges_.Length(); i++) {
        if (edges_[i].IsNull() || edges_[i].IsUndefined()) {
            std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i << "]. This is probably a mistake, so skipping\n";
            continue;
        }
            if (!edges_[i].IsObject() || !edges_[i].ToObject().InstanceOf(EdgeFunction::GetConstructor(env))) {
                    Napi::Error::New(env, "EdgeFunction edges is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            } else {
                edges.Add(*EdgeFunction::Unwrap(edges_[i].ToObject())->_underlying);
            }
    }
}


                if (info[2].IsNull() || info[2].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'params'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class _SmoothValues *params_ = _SmoothValues::Unwrap(info[2].ToObject());
        
        const SmoothValues & params =*params_->_underlying;
        



 MbResultType  _result = ::SmoothPhantom
(
        solid
,        edges
,        params
,        *result

);


if (_result == rt_Success) {

    Napi::Value _to;

            Napi::Array arr_result = Napi::Array::New(env);
    for (size_t i = 0; i < result->Count(); i++) {
            arr_result[i] = Surface::NewInstance(env,
                
                    (*result)[i]
                
            );
    }
    _to = arr_result;

            return _to;

} else {
    std::ostringstream msg;
    msg << "Operation SmoothPhantom failed with error: " << Error::GetSolidErrorResId(_result);
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("code", Napi::Number::New(env, _result));
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value ActionPhantom::SmoothPhantom_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Solid::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Solid solid is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsArray()
)) {
                    deferred.Reject(Napi::String::New(env, "Array edges is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 2 || !(
              (info[2].IsObject() && info[2].ToObject().InstanceOf(_SmoothValues::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "SmoothValues params is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'solid'"));
                return deferred.Promise();
        }
        const class Solid *solid_ = Solid::Unwrap(info[0].ToObject());
        
         MbSolid & solid =*solid_->_underlying;
        

                        SArray<MbEdgeFunction> * edges;
if (!(info[1].IsNull() || info[1].IsUndefined())) {
    const Napi::Array edges_ = Napi::Array(env, info[1]);
        edges = new SArray<MbEdgeFunction>(edges_.Length(), 1);

    for (size_t i = 0; i < edges_.Length(); i++) {
        if (edges_[i].IsNull() || edges_[i].IsUndefined()) {
            std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i << "]. This is probably a mistake, so skipping\n";
            continue;
        }
            if (!edges_[i].IsObject() || !edges_[i].ToObject().InstanceOf(EdgeFunction::GetConstructor(env))) {
                    deferred.Reject(Napi::String::New(env, "EdgeFunction edges is required."));
                    return deferred.Promise();
            } else {
                edges->Add(*EdgeFunction::Unwrap(edges_[i].ToObject())->_underlying);
            }
    }
}


                        if (info[2].IsNull() || info[2].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'params'"));
                return deferred.Promise();
        }
        const class _SmoothValues *params_ = _SmoothValues::Unwrap(info[2].ToObject());
        
        const SmoothValues & params =*params_->_underlying;
        

        ActionPhantom_SmoothPhantom_AsyncWorker* asyncWorker = new ActionPhantom_SmoothPhantom_AsyncWorker(
            deferred
,
                
                solid,
                                *edges                ,
                
                params        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ActionPhantom::SmoothSequence(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Solid::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Solid solid is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsArray()
)) {
                    Napi::Error::New(env, "Array edges is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 2 || !(
              (info[2].IsObject() && info[2].ToObject().InstanceOf(_SmoothValues::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "SmoothValues params is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 3 || !(
              info[3].IsBoolean()
)) {
                    Napi::Error::New(env, "boolean createSurfaces is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    RPArray<MbEdgeSequence> *sequences = new RPArray<MbEdgeSequence>;
        RPArray<MbSurface> *result = new RPArray<MbSurface>;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'solid'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Solid *solid_ = Solid::Unwrap(info[0].ToObject());
        
        const MbSolid & solid =*solid_->_underlying;
        

                RPArray<MbCurveEdge>  edges;
if (!(info[1].IsNull() || info[1].IsUndefined())) {
    const Napi::Array edges_ = Napi::Array(env, info[1]);
        edges =  RPArray<MbCurveEdge>(edges_.Length(), 1);

    for (size_t i = 0; i < edges_.Length(); i++) {
        if (edges_[i].IsNull() || edges_[i].IsUndefined()) {
            std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i << "]. This is probably a mistake, so skipping\n";
            continue;
        }
            if (!edges_[i].IsObject() || !edges_[i].ToObject().InstanceOf(CurveEdge::GetConstructor(env))) {
                    Napi::Error::New(env, "CurveEdge edges is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            } else {
                edges.Add(CurveEdge::Unwrap(edges_[i].ToObject())->_underlying);
            }
    }
}


                if (info[2].IsNull() || info[2].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'params'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class _SmoothValues *params_ = _SmoothValues::Unwrap(info[2].ToObject());
        
        const SmoothValues & params =*params_->_underlying;
        

             bool createSurfaces = info[3].ToBoolean();



 MbResultType  _result = ::SmoothSequence
(
        solid
,        edges
,        params
,        createSurfaces
,        *sequences
,        *result

);


if (_result == rt_Success) {

        Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

            Napi::Array arr_sequences = Napi::Array::New(env);
    for (size_t i = 0; i < sequences->Count(); i++) {
            arr_sequences[i] = EdgeSequence::NewInstance(env,
                
                    (*sequences)[i]
                
            );
    }
    _to = arr_sequences;

        _toReturn.Set(Napi::String::New(env, "sequences"), _to);
            Napi::Array arr_result = Napi::Array::New(env);
    for (size_t i = 0; i < result->Count(); i++) {
            arr_result[i] = Surface::NewInstance(env,
                
                    (*result)[i]
                
            );
    }
    _to = arr_result;

        _toReturn.Set(Napi::String::New(env, "result"), _to);
            return _toReturn;

} else {
    std::ostringstream msg;
    msg << "Operation SmoothSequence failed with error: " << Error::GetSolidErrorResId(_result);
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("code", Napi::Number::New(env, _result));
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value ActionPhantom::SmoothSequence_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Solid::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Solid solid is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsArray()
)) {
                    deferred.Reject(Napi::String::New(env, "Array edges is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 2 || !(
              (info[2].IsObject() && info[2].ToObject().InstanceOf(_SmoothValues::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "SmoothValues params is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 3 || !(
              info[3].IsBoolean()
)) {
                    deferred.Reject(Napi::String::New(env, "boolean createSurfaces is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'solid'"));
                return deferred.Promise();
        }
        const class Solid *solid_ = Solid::Unwrap(info[0].ToObject());
        
        const MbSolid & solid =*solid_->_underlying;
        

                        RPArray<MbCurveEdge> * edges;
if (!(info[1].IsNull() || info[1].IsUndefined())) {
    const Napi::Array edges_ = Napi::Array(env, info[1]);
        edges = new RPArray<MbCurveEdge>(edges_.Length(), 1);

    for (size_t i = 0; i < edges_.Length(); i++) {
        if (edges_[i].IsNull() || edges_[i].IsUndefined()) {
            std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i << "]. This is probably a mistake, so skipping\n";
            continue;
        }
            if (!edges_[i].IsObject() || !edges_[i].ToObject().InstanceOf(CurveEdge::GetConstructor(env))) {
                    deferred.Reject(Napi::String::New(env, "CurveEdge edges is required."));
                    return deferred.Promise();
            } else {
                edges->Add(CurveEdge::Unwrap(edges_[i].ToObject())->_underlying);
            }
    }
}


                        if (info[2].IsNull() || info[2].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'params'"));
                return deferred.Promise();
        }
        const class _SmoothValues *params_ = _SmoothValues::Unwrap(info[2].ToObject());
        
        const SmoothValues & params =*params_->_underlying;
        

                     bool createSurfaces = info[3].ToBoolean();

        ActionPhantom_SmoothSequence_AsyncWorker* asyncWorker = new ActionPhantom_SmoothSequence_AsyncWorker(
            deferred
,
                
                solid,
                                *edges                ,
                
                params,
                
                createSurfaces        );
        asyncWorker->Queue();
        return deferred.Promise();
    }


    ActionPhantom_SmoothPhantom_AsyncWorker::ActionPhantom_SmoothPhantom_AsyncWorker(
        Napi::Promise::Deferred const &d
,
                         MbSolid & solid,
                         SArray<MbEdgeFunction> & edges,
                        const SmoothValues & params    )
        :PromiseWorker(d),
                        solid(solid)
,
                        edges(edges)
,
                        params(params)
{};

    void ActionPhantom_SmoothPhantom_AsyncWorker::Execute() {
        EnterParallelRegion();

                RPArray<MbSurface> *result = new RPArray<MbSurface>;


        
         MbResultType  _result = ::SmoothPhantom(
                        solid
,                        edges
,                        params
,                        *result
        );

        this->resultType = _result;
        if (_result == rt_Success) {

                this->result = result;

                } else {
            std::ostringstream msg;
            msg << "Operation SmoothPhantom failed with error: " << Error::GetSolidErrorResId(_result);
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void ActionPhantom_SmoothPhantom_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             RPArray<MbSurface> * result = this->result;
                Napi::Array arr_result = Napi::Array::New(env);
    for (size_t i = 0; i < result->Count(); i++) {
            arr_result[i] = Surface::NewInstance(env,
                
                    (*result)[i]
                
            );
    }
    _to = arr_result;

            deferred.Resolve(_to);
    }

    void ActionPhantom_SmoothPhantom_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ActionPhantom_SmoothSequence_AsyncWorker::ActionPhantom_SmoothSequence_AsyncWorker(
        Napi::Promise::Deferred const &d
,
                        const MbSolid & solid,
                         RPArray<MbCurveEdge> & edges,
                        const SmoothValues & params,
                         bool  createSurfaces    )
        :PromiseWorker(d),
                        solid(solid)
,
                        edges(edges)
,
                        params(params)
,
                        createSurfaces(createSurfaces)
{};

    void ActionPhantom_SmoothSequence_AsyncWorker::Execute() {
        EnterParallelRegion();

                RPArray<MbEdgeSequence> *sequences = new RPArray<MbEdgeSequence>;
        RPArray<MbSurface> *result = new RPArray<MbSurface>;


        
         MbResultType  _result = ::SmoothSequence(
                        solid
,                        edges
,                        params
,                        createSurfaces
,                        *sequences
,                        *result
        );

        this->resultType = _result;
        if (_result == rt_Success) {

                this->sequences = sequences;
                this->result = result;

                } else {
            std::ostringstream msg;
            msg << "Operation SmoothSequence failed with error: " << Error::GetSolidErrorResId(_result);
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void ActionPhantom_SmoothSequence_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            Napi::Object _toReturn = Napi::Object::New(env);

                 RPArray<MbEdgeSequence> * sequences = this->sequences;
                    Napi::Array arr_sequences = Napi::Array::New(env);
    for (size_t i = 0; i < sequences->Count(); i++) {
            arr_sequences[i] = EdgeSequence::NewInstance(env,
                
                    (*sequences)[i]
                
            );
    }
    _to = arr_sequences;

                _toReturn.Set(Napi::String::New(env, "sequences"), _to);
                 RPArray<MbSurface> * result = this->result;
                    Napi::Array arr_result = Napi::Array::New(env);
    for (size_t i = 0; i < result->Count(); i++) {
            arr_result[i] = Surface::NewInstance(env,
                
                    (*result)[i]
                
            );
    }
    _to = arr_result;

                _toReturn.Set(Napi::String::New(env, "result"), _to);

            deferred.Resolve(_toReturn);
    }

    void ActionPhantom_SmoothSequence_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

