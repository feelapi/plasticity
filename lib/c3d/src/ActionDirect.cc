// This is a generated file, modify: generate/templates/ActionDirect.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/ActionDirect.h"
#include "../include/Error.h"

#include "tool_mutex.h"

Napi::Object ActionDirect::Init(Napi::Env env, Napi::Object exports)
{
    Napi::Object object = Napi::Object::New(env);

    object.Set("CollectFacesForModification", Napi::Function::New<&ActionDirect::CollectFacesForModification>(env));
    object.Set("CollectFacesForModification_async",
               Napi::Function::New<&ActionDirect::CollectFacesForModification_async>(env));
    object.Set("FaceModifiedSolid", Napi::Function::New<&ActionDirect::FaceModifiedSolid>(env));
    object.Set("FaceModifiedSolid_async", Napi::Function::New<&ActionDirect::FaceModifiedSolid_async>(env));
    object.Set("TransformedSolid", Napi::Function::New<&ActionDirect::TransformedSolid>(env));
    object.Set("TransformedSolid_async", Napi::Function::New<&ActionDirect::TransformedSolid_async>(env));
    object.Set("EdgeModifiedSolid", Napi::Function::New<&ActionDirect::EdgeModifiedSolid>(env));
    object.Set("EdgeModifiedSolid_async", Napi::Function::New<&ActionDirect::EdgeModifiedSolid_async>(env));

    exports.Set("ActionDirect", object);

    return exports;
}

Napi::Value ActionDirect::CollectFacesForModification(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(FaceShell::GetConstructor(env)))))
    {
        Napi::Error::New(env, "FaceShell shell is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        Napi::Error::New(env, "ModifyingType way is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 || !(info[2].IsNumber()))
    {
        Napi::Error::New(env, "number radius is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    RPArray<MbFace> *faces = new RPArray<MbFace>;

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'shell'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class FaceShell *shell_ = FaceShell::Unwrap(info[0].ToObject());

    MbFaceShell *shell = shell_->_underlying;

    const MbeModifyingType way = static_cast<MbeModifyingType>(info[1].ToNumber().Uint32Value());

    double radius = info[2].ToNumber().DoubleValue();

    MbResultType _result = ::CollectFacesForModification(shell, way, radius, *faces

    );

    if (_result == rt_Success)
    {

        Napi::Value _to;

        Napi::Array arr_faces = Napi::Array::New(env);
        for (size_t i = 0; i < faces->Count(); i++)
        {
            arr_faces[i] = Face::NewInstance(env,

                                             (*faces)[i]

            );
        }
        _to = arr_faces;

        return _to;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation CollectFacesForModification failed with error: " << Error::GetSolidErrorResId(_result);
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("code", Napi::Number::New(env, _result));
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ActionDirect::CollectFacesForModification_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(FaceShell::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "FaceShell shell is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "ModifyingType way is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 || !(info[2].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number radius is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'shell'"));
        return deferred.Promise();
    }
    const class FaceShell *shell_ = FaceShell::Unwrap(info[0].ToObject());

    MbFaceShell *shell = shell_->_underlying;

    const MbeModifyingType way = static_cast<MbeModifyingType>(info[1].ToNumber().Uint32Value());

    double radius = info[2].ToNumber().DoubleValue();

    ActionDirect_CollectFacesForModification_AsyncWorker *asyncWorker =
        new ActionDirect_CollectFacesForModification_AsyncWorker(deferred,

                                                                 shell,

                                                                 way,

                                                                 radius);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionDirect::FaceModifiedSolid(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Solid::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Solid solid is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        Napi::Error::New(env, "CopyMode sameShell is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 ||
        !((info[2].IsObject() && info[2].ToObject().InstanceOf(_ModifyValues::GetConstructor(env)))))
    {
        Napi::Error::New(env, "ModifyValues params is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 3 || !(info[3].IsArray()))
    {
        Napi::Error::New(env, "Array faces is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 4 || !((info[4].IsObject() && info[4].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
    {
        Napi::Error::New(env, "SNameMaker names is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbSolid *result = NULL;

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'solid'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Solid *solid_ = Solid::Unwrap(info[0].ToObject());

    MbSolid &solid = *solid_->_underlying;

    const MbeCopyMode sameShell = static_cast<MbeCopyMode>(info[1].ToNumber().Uint32Value());

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'params'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class _ModifyValues *params_ = _ModifyValues::Unwrap(info[2].ToObject());

    const ModifyValues &params = *params_->_underlying;

    RPArray<MbFace> faces;
    if (!(info[3].IsNull() || info[3].IsUndefined()))
    {
        const Napi::Array faces_ = Napi::Array(env, info[3]);
        faces = RPArray<MbFace>(faces_.Length(), 1);

        for (size_t i = 0; i < faces_.Length(); i++)
        {
            if (faces_[i].IsNull() || faces_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!faces_[i].IsObject() || !faces_[i].ToObject().InstanceOf(Face::GetConstructor(env)))
            {
                Napi::Error::New(env, "Face faces is required.").ThrowAsJavaScriptException();
                return env.Undefined();
            }
            else
            {
                faces.Add(Face::Unwrap(faces_[i].ToObject())->_underlying);
            }
        }
    }

    if (info[4].IsNull() || info[4].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'names'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class SNameMaker *names_ = SNameMaker::Unwrap(info[4].ToObject());

    const MbSNameMaker &names = *names_->_underlying;

    MbResultType _result = ::FaceModifiedSolid(solid, sameShell, params, faces, names, result

    );

    if (_result == rt_Success)
    {

        Napi::Value _to;

        if (result != NULL)
        {
            _to = Solid::NewInstance(env, (MbSolid *)result);
        }
        else
        {
            _to = env.Null();
        }

        return _to;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation FaceModifiedSolid failed with error: " << Error::GetSolidErrorResId(_result);
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("code", Napi::Number::New(env, _result));
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ActionDirect::FaceModifiedSolid_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Solid::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Solid solid is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "CopyMode sameShell is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 ||
        !((info[2].IsObject() && info[2].ToObject().InstanceOf(_ModifyValues::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "ModifyValues params is required."));
        return deferred.Promise();
    }
    if (info.Length() == 3 || !(info[3].IsArray()))
    {
        deferred.Reject(Napi::String::New(env, "Array faces is required."));
        return deferred.Promise();
    }
    if (info.Length() == 4 || !((info[4].IsObject() && info[4].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "SNameMaker names is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'solid'"));
        return deferred.Promise();
    }
    const class Solid *solid_ = Solid::Unwrap(info[0].ToObject());

    MbSolid &solid = *solid_->_underlying;

    const MbeCopyMode sameShell = static_cast<MbeCopyMode>(info[1].ToNumber().Uint32Value());

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'params'"));
        return deferred.Promise();
    }
    const class _ModifyValues *params_ = _ModifyValues::Unwrap(info[2].ToObject());

    const ModifyValues &params = *params_->_underlying;

    RPArray<MbFace> *faces;
    if (!(info[3].IsNull() || info[3].IsUndefined()))
    {
        const Napi::Array faces_ = Napi::Array(env, info[3]);
        faces = new RPArray<MbFace>(faces_.Length(), 1);

        for (size_t i = 0; i < faces_.Length(); i++)
        {
            if (faces_[i].IsNull() || faces_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!faces_[i].IsObject() || !faces_[i].ToObject().InstanceOf(Face::GetConstructor(env)))
            {
                deferred.Reject(Napi::String::New(env, "Face faces is required."));
                return deferred.Promise();
            }
            else
            {
                faces->Add(Face::Unwrap(faces_[i].ToObject())->_underlying);
            }
        }
    }

    if (info[4].IsNull() || info[4].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'names'"));
        return deferred.Promise();
    }
    const class SNameMaker *names_ = SNameMaker::Unwrap(info[4].ToObject());

    const MbSNameMaker &names = *names_->_underlying;

    ActionDirect_FaceModifiedSolid_AsyncWorker *asyncWorker =
        new ActionDirect_FaceModifiedSolid_AsyncWorker(deferred,

                                                       solid,

                                                       sameShell,

                                                       params, *faces,

                                                       names);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionDirect::TransformedSolid(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Solid::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Solid solid is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        Napi::Error::New(env, "CopyMode sameShell is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 ||
        !((info[2].IsObject() && info[2].ToObject().InstanceOf(_TransformValues::GetConstructor(env)))))
    {
        Napi::Error::New(env, "TransformValues params is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 3 || !((info[3].IsObject() && info[3].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
    {
        Napi::Error::New(env, "SNameMaker names is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbSolid *result = NULL;

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'solid'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Solid *solid_ = Solid::Unwrap(info[0].ToObject());

    MbSolid &solid = *solid_->_underlying;

    const MbeCopyMode sameShell = static_cast<MbeCopyMode>(info[1].ToNumber().Uint32Value());

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'params'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class _TransformValues *params_ = _TransformValues::Unwrap(info[2].ToObject());

    const TransformValues &params = *params_->_underlying;

    if (info[3].IsNull() || info[3].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'names'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class SNameMaker *names_ = SNameMaker::Unwrap(info[3].ToObject());

    const MbSNameMaker &names = *names_->_underlying;

    MbResultType _result = ::TransformedSolid(solid, sameShell, params, names, result

    );

    if (_result == rt_Success)
    {

        Napi::Value _to;

        if (result != NULL)
        {
            _to = Solid::NewInstance(env, (MbSolid *)result);
        }
        else
        {
            _to = env.Null();
        }

        return _to;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation TransformedSolid failed with error: " << Error::GetSolidErrorResId(_result);
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("code", Napi::Number::New(env, _result));
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ActionDirect::TransformedSolid_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Solid::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Solid solid is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "CopyMode sameShell is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 ||
        !((info[2].IsObject() && info[2].ToObject().InstanceOf(_TransformValues::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "TransformValues params is required."));
        return deferred.Promise();
    }
    if (info.Length() == 3 || !((info[3].IsObject() && info[3].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "SNameMaker names is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'solid'"));
        return deferred.Promise();
    }
    const class Solid *solid_ = Solid::Unwrap(info[0].ToObject());

    MbSolid &solid = *solid_->_underlying;

    const MbeCopyMode sameShell = static_cast<MbeCopyMode>(info[1].ToNumber().Uint32Value());

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'params'"));
        return deferred.Promise();
    }
    const class _TransformValues *params_ = _TransformValues::Unwrap(info[2].ToObject());

    const TransformValues &params = *params_->_underlying;

    if (info[3].IsNull() || info[3].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'names'"));
        return deferred.Promise();
    }
    const class SNameMaker *names_ = SNameMaker::Unwrap(info[3].ToObject());

    const MbSNameMaker &names = *names_->_underlying;

    ActionDirect_TransformedSolid_AsyncWorker *asyncWorker = new ActionDirect_TransformedSolid_AsyncWorker(deferred,

                                                                                                           solid,

                                                                                                           sameShell,

                                                                                                           params,

                                                                                                           names);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionDirect::EdgeModifiedSolid(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Solid::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Solid solid is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        Napi::Error::New(env, "CopyMode sameShell is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 ||
        !((info[2].IsObject() && info[2].ToObject().InstanceOf(_ModifyValues::GetConstructor(env)))))
    {
        Napi::Error::New(env, "ModifyValues params is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 3 || !(info[3].IsArray()))
    {
        Napi::Error::New(env, "Array edges is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 4 || !((info[4].IsObject() && info[4].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
    {
        Napi::Error::New(env, "SNameMaker names is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbSolid *result = NULL;

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'solid'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Solid *solid_ = Solid::Unwrap(info[0].ToObject());

    MbSolid &solid = *solid_->_underlying;

    const MbeCopyMode sameShell = static_cast<MbeCopyMode>(info[1].ToNumber().Uint32Value());

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'params'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class _ModifyValues *params_ = _ModifyValues::Unwrap(info[2].ToObject());

    const ModifyValues &params = *params_->_underlying;

    RPArray<MbCurveEdge> edges;
    if (!(info[3].IsNull() || info[3].IsUndefined()))
    {
        const Napi::Array edges_ = Napi::Array(env, info[3]);
        edges = RPArray<MbCurveEdge>(edges_.Length(), 1);

        for (size_t i = 0; i < edges_.Length(); i++)
        {
            if (edges_[i].IsNull() || edges_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!edges_[i].IsObject() || !edges_[i].ToObject().InstanceOf(CurveEdge::GetConstructor(env)))
            {
                Napi::Error::New(env, "CurveEdge edges is required.").ThrowAsJavaScriptException();
                return env.Undefined();
            }
            else
            {
                edges.Add(CurveEdge::Unwrap(edges_[i].ToObject())->_underlying);
            }
        }
    }

    if (info[4].IsNull() || info[4].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'names'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class SNameMaker *names_ = SNameMaker::Unwrap(info[4].ToObject());

    const MbSNameMaker &names = *names_->_underlying;

    MbResultType _result = ::EdgeModifiedSolid(solid, sameShell, params, edges, names, result

    );

    if (_result == rt_Success)
    {

        Napi::Value _to;

        if (result != NULL)
        {
            _to = Solid::NewInstance(env, (MbSolid *)result);
        }
        else
        {
            _to = env.Null();
        }

        return _to;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation EdgeModifiedSolid failed with error: " << Error::GetSolidErrorResId(_result);
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("code", Napi::Number::New(env, _result));
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ActionDirect::EdgeModifiedSolid_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Solid::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Solid solid is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "CopyMode sameShell is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 ||
        !((info[2].IsObject() && info[2].ToObject().InstanceOf(_ModifyValues::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "ModifyValues params is required."));
        return deferred.Promise();
    }
    if (info.Length() == 3 || !(info[3].IsArray()))
    {
        deferred.Reject(Napi::String::New(env, "Array edges is required."));
        return deferred.Promise();
    }
    if (info.Length() == 4 || !((info[4].IsObject() && info[4].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "SNameMaker names is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'solid'"));
        return deferred.Promise();
    }
    const class Solid *solid_ = Solid::Unwrap(info[0].ToObject());

    MbSolid &solid = *solid_->_underlying;

    const MbeCopyMode sameShell = static_cast<MbeCopyMode>(info[1].ToNumber().Uint32Value());

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'params'"));
        return deferred.Promise();
    }
    const class _ModifyValues *params_ = _ModifyValues::Unwrap(info[2].ToObject());

    const ModifyValues &params = *params_->_underlying;

    RPArray<MbCurveEdge> *edges;
    if (!(info[3].IsNull() || info[3].IsUndefined()))
    {
        const Napi::Array edges_ = Napi::Array(env, info[3]);
        edges = new RPArray<MbCurveEdge>(edges_.Length(), 1);

        for (size_t i = 0; i < edges_.Length(); i++)
        {
            if (edges_[i].IsNull() || edges_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!edges_[i].IsObject() || !edges_[i].ToObject().InstanceOf(CurveEdge::GetConstructor(env)))
            {
                deferred.Reject(Napi::String::New(env, "CurveEdge edges is required."));
                return deferred.Promise();
            }
            else
            {
                edges->Add(CurveEdge::Unwrap(edges_[i].ToObject())->_underlying);
            }
        }
    }

    if (info[4].IsNull() || info[4].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'names'"));
        return deferred.Promise();
    }
    const class SNameMaker *names_ = SNameMaker::Unwrap(info[4].ToObject());

    const MbSNameMaker &names = *names_->_underlying;

    ActionDirect_EdgeModifiedSolid_AsyncWorker *asyncWorker =
        new ActionDirect_EdgeModifiedSolid_AsyncWorker(deferred,

                                                       solid,

                                                       sameShell,

                                                       params, *edges,

                                                       names);
    asyncWorker->Queue();
    return deferred.Promise();
}

ActionDirect_CollectFacesForModification_AsyncWorker::ActionDirect_CollectFacesForModification_AsyncWorker(
    Napi::Promise::Deferred const &d, MbFaceShell *shell, MbeModifyingType way, double radius)
    : PromiseWorker(d), shell(shell), way(way), radius(radius){};

void ActionDirect_CollectFacesForModification_AsyncWorker::Execute()
{
    EnterParallelRegion();

    RPArray<MbFace> *faces = new RPArray<MbFace>;

    MbResultType _result = ::CollectFacesForModification(shell, way, radius, *faces);

    this->resultType = _result;
    if (_result == rt_Success)
    {

        this->faces = faces;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation CollectFacesForModification failed with error: " << Error::GetSolidErrorResId(_result);
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ActionDirect_CollectFacesForModification_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    RPArray<MbFace> *faces = this->faces;
    Napi::Array arr_faces = Napi::Array::New(env);
    for (size_t i = 0; i < faces->Count(); i++)
    {
        arr_faces[i] = Face::NewInstance(env,

                                         (*faces)[i]

        );
    }
    _to = arr_faces;

    deferred.Resolve(_to);
}

void ActionDirect_CollectFacesForModification_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                                  Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionDirect_FaceModifiedSolid_AsyncWorker::ActionDirect_FaceModifiedSolid_AsyncWorker(
    Napi::Promise::Deferred const &d, MbSolid &solid, MbeCopyMode sameShell, const ModifyValues &params,
    const RPArray<MbFace> &faces, const MbSNameMaker &names)
    : PromiseWorker(d), solid(solid), sameShell(sameShell), params(params), faces(faces), names(names){};

void ActionDirect_FaceModifiedSolid_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbSolid *result = NULL;

    MbResultType _result = ::FaceModifiedSolid(solid, sameShell, params, faces, names, result);

    this->resultType = _result;
    if (_result == rt_Success)
    {

        this->result = result;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation FaceModifiedSolid failed with error: " << Error::GetSolidErrorResId(_result);
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ActionDirect_FaceModifiedSolid_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbSolid *result = this->result;
    if (result != NULL)
    {
        _to = Solid::NewInstance(env, (MbSolid *)result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void ActionDirect_FaceModifiedSolid_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                        Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionDirect_TransformedSolid_AsyncWorker::ActionDirect_TransformedSolid_AsyncWorker(Napi::Promise::Deferred const &d,
                                                                                     MbSolid &solid,
                                                                                     MbeCopyMode sameShell,
                                                                                     const TransformValues &params,
                                                                                     const MbSNameMaker &names)
    : PromiseWorker(d), solid(solid), sameShell(sameShell), params(params), names(names){};

void ActionDirect_TransformedSolid_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbSolid *result = NULL;

    MbResultType _result = ::TransformedSolid(solid, sameShell, params, names, result);

    this->resultType = _result;
    if (_result == rt_Success)
    {

        this->result = result;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation TransformedSolid failed with error: " << Error::GetSolidErrorResId(_result);
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ActionDirect_TransformedSolid_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbSolid *result = this->result;
    if (result != NULL)
    {
        _to = Solid::NewInstance(env, (MbSolid *)result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void ActionDirect_TransformedSolid_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                       Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionDirect_EdgeModifiedSolid_AsyncWorker::ActionDirect_EdgeModifiedSolid_AsyncWorker(
    Napi::Promise::Deferred const &d, MbSolid &solid, MbeCopyMode sameShell, const ModifyValues &params,
    const RPArray<MbCurveEdge> &edges, const MbSNameMaker &names)
    : PromiseWorker(d), solid(solid), sameShell(sameShell), params(params), edges(edges), names(names){};

void ActionDirect_EdgeModifiedSolid_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbSolid *result = NULL;

    MbResultType _result = ::EdgeModifiedSolid(solid, sameShell, params, edges, names, result);

    this->resultType = _result;
    if (_result == rt_Success)
    {

        this->result = result;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation EdgeModifiedSolid failed with error: " << Error::GetSolidErrorResId(_result);
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ActionDirect_EdgeModifiedSolid_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbSolid *result = this->result;
    if (result != NULL)
    {
        _to = Solid::NewInstance(env, (MbSolid *)result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void ActionDirect_EdgeModifiedSolid_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                        Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
