// This is a generated file, modify: generate/templates/ActionShell.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/ActionShell.h"
#include "../include/Error.h"

#include "tool_mutex.h"

Napi::Object ActionShell::Init(Napi::Env env, Napi::Object exports) {
    Napi::Object object = Napi::Object::New(env);

    object.Set("ExtensionShell", Napi::Function::New<&ActionShell::ExtensionShell>(env));
    object.Set("ExtensionShell_async", Napi::Function::New<&ActionShell::ExtensionShell_async>(env));
    object.Set("OffsetShell", Napi::Function::New<&ActionShell::OffsetShell>(env));
    object.Set("OffsetShell_async", Napi::Function::New<&ActionShell::OffsetShell_async>(env));

    exports.Set("ActionShell", object);

    return exports;
}

        Napi::Value ActionShell::ExtensionShell(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Solid::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Solid solid is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    Napi::Error::New(env, "CopyMode sameShell is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 2 || !(
              (info[2].IsObject() && info[2].ToObject().InstanceOf(Face::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Face face is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 3 || !(
              info[3].IsArray()
)) {
                    Napi::Error::New(env, "Array edges is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 4 || !(
              (info[4].IsObject() && info[4].ToObject().InstanceOf(_ExtensionValues::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "ExtensionValues params is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 5 || !(
              (info[5].IsObject() && info[5].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "SNameMaker operNames is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                     MbSolid * result = NULL;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'solid'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Solid *solid_ = Solid::Unwrap(info[0].ToObject());
        
         MbSolid & solid =*solid_->_underlying;
        

            const MbeCopyMode sameShell = static_cast<MbeCopyMode>(info[1].ToNumber().Uint32Value());

                if (info[2].IsNull() || info[2].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'face'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Face *face_ = Face::Unwrap(info[2].ToObject());
        
         MbFace & face =*face_->_underlying;
        

                RPArray<MbCurveEdge>  edges;
if (!(info[3].IsNull() || info[3].IsUndefined())) {
    const Napi::Array edges_ = Napi::Array(env, info[3]);
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


                if (info[4].IsNull() || info[4].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'params'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class _ExtensionValues *params_ = _ExtensionValues::Unwrap(info[4].ToObject());
        
        const ExtensionValues & params =*params_->_underlying;
        

                if (info[5].IsNull() || info[5].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'operNames'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class SNameMaker *operNames_ = SNameMaker::Unwrap(info[5].ToObject());
        
        const MbSNameMaker & operNames =*operNames_->_underlying;
        



 MbResultType  _result = ::ExtensionShell
(
        solid
,        sameShell
,        face
,        edges
,        params
,        operNames
,        result

);


if (_result == rt_Success) {

    Napi::Value _to;

            if (result != NULL) {
        _to = Solid::NewInstance(env, (MbSolid *)result);
    } else {
        _to = env.Null();
    }

            return _to;

} else {
    std::ostringstream msg;
    msg << "Operation ExtensionShell failed with error: " << Error::GetSolidErrorResId(_result);
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("code", Napi::Number::New(env, _result));
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value ActionShell::ExtensionShell_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Solid::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Solid solid is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "CopyMode sameShell is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 2 || !(
              (info[2].IsObject() && info[2].ToObject().InstanceOf(Face::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Face face is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 3 || !(
              info[3].IsArray()
)) {
                    deferred.Reject(Napi::String::New(env, "Array edges is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 4 || !(
              (info[4].IsObject() && info[4].ToObject().InstanceOf(_ExtensionValues::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "ExtensionValues params is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 5 || !(
              (info[5].IsObject() && info[5].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "SNameMaker operNames is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'solid'"));
                return deferred.Promise();
        }
        const class Solid *solid_ = Solid::Unwrap(info[0].ToObject());
        
         MbSolid & solid =*solid_->_underlying;
        

                    const MbeCopyMode sameShell = static_cast<MbeCopyMode>(info[1].ToNumber().Uint32Value());

                        if (info[2].IsNull() || info[2].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'face'"));
                return deferred.Promise();
        }
        const class Face *face_ = Face::Unwrap(info[2].ToObject());
        
         MbFace & face =*face_->_underlying;
        

                        RPArray<MbCurveEdge> * edges;
if (!(info[3].IsNull() || info[3].IsUndefined())) {
    const Napi::Array edges_ = Napi::Array(env, info[3]);
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


                        if (info[4].IsNull() || info[4].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'params'"));
                return deferred.Promise();
        }
        const class _ExtensionValues *params_ = _ExtensionValues::Unwrap(info[4].ToObject());
        
        const ExtensionValues & params =*params_->_underlying;
        

                        if (info[5].IsNull() || info[5].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'operNames'"));
                return deferred.Promise();
        }
        const class SNameMaker *operNames_ = SNameMaker::Unwrap(info[5].ToObject());
        
        const MbSNameMaker & operNames =*operNames_->_underlying;
        

        ActionShell_ExtensionShell_AsyncWorker* asyncWorker = new ActionShell_ExtensionShell_AsyncWorker(
            deferred
,
                
                solid,
                
                sameShell,
                
                face,
                                *edges                ,
                
                params,
                
                operNames        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ActionShell::OffsetShell(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Solid::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Solid solid is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    Napi::Error::New(env, "CopyMode sameShell is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 2 || !(
              info[2].IsArray()
)) {
                    Napi::Error::New(env, "Array initFaces is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 3 || !(
              info[3].IsBoolean()
)) {
                    Napi::Error::New(env, "boolean checkFacesConnection is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 4 || !(
              (info[4].IsObject() && info[4].ToObject().InstanceOf(_SweptValues::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "SweptValues p is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 5 || !(
              (info[5].IsObject() && info[5].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "SNameMaker operNames is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 6 || !(
              info[6].IsBoolean()
)) {
                    Napi::Error::New(env, "boolean copyFaceAttrs is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                     MbSolid * result = NULL;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'solid'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Solid *solid_ = Solid::Unwrap(info[0].ToObject());
        
         MbSolid & solid =*solid_->_underlying;
        

            const MbeCopyMode sameShell = static_cast<MbeCopyMode>(info[1].ToNumber().Uint32Value());

                RPArray<MbFace>  initFaces;
if (!(info[2].IsNull() || info[2].IsUndefined())) {
    const Napi::Array initFaces_ = Napi::Array(env, info[2]);
        initFaces =  RPArray<MbFace>(initFaces_.Length(), 1);

    for (size_t i = 0; i < initFaces_.Length(); i++) {
        if (initFaces_[i].IsNull() || initFaces_[i].IsUndefined()) {
            std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i << "]. This is probably a mistake, so skipping\n";
            continue;
        }
            if (!initFaces_[i].IsObject() || !initFaces_[i].ToObject().InstanceOf(Face::GetConstructor(env))) {
                    Napi::Error::New(env, "Face initFaces is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            } else {
                initFaces.Add(Face::Unwrap(initFaces_[i].ToObject())->_underlying);
            }
    }
}


             bool checkFacesConnection = info[3].ToBoolean();

                if (info[4].IsNull() || info[4].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'p'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class _SweptValues *p_ = _SweptValues::Unwrap(info[4].ToObject());
        
         SweptValues & p =*p_->_underlying;
        

                if (info[5].IsNull() || info[5].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'operNames'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class SNameMaker *operNames_ = SNameMaker::Unwrap(info[5].ToObject());
        
        const MbSNameMaker & operNames =*operNames_->_underlying;
        

             bool copyFaceAttrs = info[6].ToBoolean();



 MbResultType  _result = ::OffsetShell
(
        solid
,        sameShell
,        initFaces
,        checkFacesConnection
,        p
,        operNames
,        copyFaceAttrs
,        result

);


if (_result == rt_Success) {

    Napi::Value _to;

            if (result != NULL) {
        _to = Solid::NewInstance(env, (MbSolid *)result);
    } else {
        _to = env.Null();
    }

            return _to;

} else {
    std::ostringstream msg;
    msg << "Operation OffsetShell failed with error: " << Error::GetSolidErrorResId(_result);
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("code", Napi::Number::New(env, _result));
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value ActionShell::OffsetShell_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Solid::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Solid solid is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "CopyMode sameShell is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 2 || !(
              info[2].IsArray()
)) {
                    deferred.Reject(Napi::String::New(env, "Array initFaces is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 3 || !(
              info[3].IsBoolean()
)) {
                    deferred.Reject(Napi::String::New(env, "boolean checkFacesConnection is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 4 || !(
              (info[4].IsObject() && info[4].ToObject().InstanceOf(_SweptValues::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "SweptValues p is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 5 || !(
              (info[5].IsObject() && info[5].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "SNameMaker operNames is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 6 || !(
              info[6].IsBoolean()
)) {
                    deferred.Reject(Napi::String::New(env, "boolean copyFaceAttrs is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'solid'"));
                return deferred.Promise();
        }
        const class Solid *solid_ = Solid::Unwrap(info[0].ToObject());
        
         MbSolid & solid =*solid_->_underlying;
        

                    const MbeCopyMode sameShell = static_cast<MbeCopyMode>(info[1].ToNumber().Uint32Value());

                        RPArray<MbFace> * initFaces;
if (!(info[2].IsNull() || info[2].IsUndefined())) {
    const Napi::Array initFaces_ = Napi::Array(env, info[2]);
        initFaces = new RPArray<MbFace>(initFaces_.Length(), 1);

    for (size_t i = 0; i < initFaces_.Length(); i++) {
        if (initFaces_[i].IsNull() || initFaces_[i].IsUndefined()) {
            std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i << "]. This is probably a mistake, so skipping\n";
            continue;
        }
            if (!initFaces_[i].IsObject() || !initFaces_[i].ToObject().InstanceOf(Face::GetConstructor(env))) {
                    deferred.Reject(Napi::String::New(env, "Face initFaces is required."));
                    return deferred.Promise();
            } else {
                initFaces->Add(Face::Unwrap(initFaces_[i].ToObject())->_underlying);
            }
    }
}


                     bool checkFacesConnection = info[3].ToBoolean();

                        if (info[4].IsNull() || info[4].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'p'"));
                return deferred.Promise();
        }
        const class _SweptValues *p_ = _SweptValues::Unwrap(info[4].ToObject());
        
         SweptValues & p =*p_->_underlying;
        

                        if (info[5].IsNull() || info[5].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'operNames'"));
                return deferred.Promise();
        }
        const class SNameMaker *operNames_ = SNameMaker::Unwrap(info[5].ToObject());
        
        const MbSNameMaker & operNames =*operNames_->_underlying;
        

                     bool copyFaceAttrs = info[6].ToBoolean();

        ActionShell_OffsetShell_AsyncWorker* asyncWorker = new ActionShell_OffsetShell_AsyncWorker(
            deferred
,
                
                solid,
                
                sameShell,
                                *initFaces                ,
                
                checkFacesConnection,
                
                p,
                
                operNames,
                
                copyFaceAttrs        );
        asyncWorker->Queue();
        return deferred.Promise();
    }


    ActionShell_ExtensionShell_AsyncWorker::ActionShell_ExtensionShell_AsyncWorker(
        Napi::Promise::Deferred const &d
,
                         MbSolid & solid,
                         MbeCopyMode  sameShell,
                         MbFace & face,
                        const RPArray<MbCurveEdge> & edges,
                        const ExtensionValues & params,
                        const MbSNameMaker & operNames    )
        :PromiseWorker(d),
                        solid(solid)
,
                        sameShell(sameShell)
,
                        face(face)
,
                        edges(edges)
,
                        params(params)
,
                        operNames(operNames)
{};

    void ActionShell_ExtensionShell_AsyncWorker::Execute() {
        EnterParallelRegion();

                 MbSolid * result = NULL;


        
         MbResultType  _result = ::ExtensionShell(
                        solid
,                        sameShell
,                        face
,                        edges
,                        params
,                        operNames
,                        result
        );

        this->resultType = _result;
        if (_result == rt_Success) {

                this->result = result;

                } else {
            std::ostringstream msg;
            msg << "Operation ExtensionShell failed with error: " << Error::GetSolidErrorResId(_result);
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void ActionShell_ExtensionShell_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbSolid * result = this->result;
                if (result != NULL) {
        _to = Solid::NewInstance(env, (MbSolid *)result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void ActionShell_ExtensionShell_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ActionShell_OffsetShell_AsyncWorker::ActionShell_OffsetShell_AsyncWorker(
        Napi::Promise::Deferred const &d
,
                         MbSolid & solid,
                         MbeCopyMode  sameShell,
                         RPArray<MbFace> & initFaces,
                         bool  checkFacesConnection,
                         SweptValues & p,
                        const MbSNameMaker & operNames,
                         bool  copyFaceAttrs    )
        :PromiseWorker(d),
                        solid(solid)
,
                        sameShell(sameShell)
,
                        initFaces(initFaces)
,
                        checkFacesConnection(checkFacesConnection)
,
                        p(p)
,
                        operNames(operNames)
,
                        copyFaceAttrs(copyFaceAttrs)
{};

    void ActionShell_OffsetShell_AsyncWorker::Execute() {
        EnterParallelRegion();

                 MbSolid * result = NULL;


        
         MbResultType  _result = ::OffsetShell(
                        solid
,                        sameShell
,                        initFaces
,                        checkFacesConnection
,                        p
,                        operNames
,                        copyFaceAttrs
,                        result
        );

        this->resultType = _result;
        if (_result == rt_Success) {

                this->result = result;

                } else {
            std::ostringstream msg;
            msg << "Operation OffsetShell failed with error: " << Error::GetSolidErrorResId(_result);
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void ActionShell_OffsetShell_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbSolid * result = this->result;
                if (result != NULL) {
        _to = Solid::NewInstance(env, (MbSolid *)result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void ActionShell_OffsetShell_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

