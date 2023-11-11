// This is a generated file, modify: generate/templates/ActionSolid.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/ActionSolid.h"
#include "../include/Error.h"

#include "tool_mutex.h"

Napi::Object ActionSolid::Init(Napi::Env env, Napi::Object exports)
{
    Napi::Object object = Napi::Object::New(env);

    object.Set("ElementarySolid", Napi::Function::New<&ActionSolid::ElementarySolid>(env));
    object.Set("ElementarySolid_async", Napi::Function::New<&ActionSolid::ElementarySolid_async>(env));
    object.Set("FilletSolid", Napi::Function::New<&ActionSolid::FilletSolid>(env));
    object.Set("FilletSolid_async", Napi::Function::New<&ActionSolid::FilletSolid_async>(env));
    object.Set("ChamferSolid", Napi::Function::New<&ActionSolid::ChamferSolid>(env));
    object.Set("ChamferSolid_async", Napi::Function::New<&ActionSolid::ChamferSolid_async>(env));
    object.Set("BooleanResult", Napi::Function::New<&ActionSolid::BooleanResult>(env));
    object.Set("BooleanResult_async", Napi::Function::New<&ActionSolid::BooleanResult_async>(env));
    object.Set("UnionResult", Napi::Function::New<&ActionSolid::UnionResult>(env));
    object.Set("UnionResult_async", Napi::Function::New<&ActionSolid::UnionResult_async>(env));
    object.Set("DraftSolid", Napi::Function::New<&ActionSolid::DraftSolid>(env));
    object.Set("DraftSolid_async", Napi::Function::New<&ActionSolid::DraftSolid_async>(env));
    object.Set("SolidCutting", Napi::Function::New<&ActionSolid::SolidCutting>(env));
    object.Set("SolidCutting_async", Napi::Function::New<&ActionSolid::SolidCutting_async>(env));
    object.Set("SplitSolid", Napi::Function::New<&ActionSolid::SplitSolid>(env));
    object.Set("SplitSolid_async", Napi::Function::New<&ActionSolid::SplitSolid_async>(env));
    object.Set("SplitSolidBySpaceItem", Napi::Function::New<&ActionSolid::SplitSolidBySpaceItem>(env));
    object.Set("SplitSolidBySpaceItem_async", Napi::Function::New<&ActionSolid::SplitSolidBySpaceItem_async>(env));
    object.Set("DetachParts", Napi::Function::New<&ActionSolid::DetachParts>(env));
    object.Set("DetachParts_async", Napi::Function::New<&ActionSolid::DetachParts_async>(env));
    object.Set("LoftedSolid", Napi::Function::New<&ActionSolid::LoftedSolid>(env));
    object.Set("LoftedSolid_async", Napi::Function::New<&ActionSolid::LoftedSolid_async>(env));
    object.Set("ExtrusionSolid", Napi::Function::New<&ActionSolid::ExtrusionSolid>(env));
    object.Set("ExtrusionSolid_async", Napi::Function::New<&ActionSolid::ExtrusionSolid_async>(env));
    object.Set("ExtrusionResult", Napi::Function::New<&ActionSolid::ExtrusionResult>(env));
    object.Set("ExtrusionResult_async", Napi::Function::New<&ActionSolid::ExtrusionResult_async>(env));
    object.Set("SymmetrySolid", Napi::Function::New<&ActionSolid::SymmetrySolid>(env));
    object.Set("SymmetrySolid_async", Napi::Function::New<&ActionSolid::SymmetrySolid_async>(env));
    object.Set("MirrorSolid", Napi::Function::New<&ActionSolid::MirrorSolid>(env));
    object.Set("MirrorSolid_async", Napi::Function::New<&ActionSolid::MirrorSolid_async>(env));
    object.Set("ThinSolid", Napi::Function::New<&ActionSolid::ThinSolid>(env));
    object.Set("ThinSolid_async", Napi::Function::New<&ActionSolid::ThinSolid_async>(env));
    object.Set("RevolutionSolid", Napi::Function::New<&ActionSolid::RevolutionSolid>(env));
    object.Set("RevolutionSolid_async", Napi::Function::New<&ActionSolid::RevolutionSolid_async>(env));
    object.Set("EvolutionSolid", Napi::Function::New<&ActionSolid::EvolutionSolid>(env));
    object.Set("EvolutionSolid_async", Napi::Function::New<&ActionSolid::EvolutionSolid_async>(env));
    object.Set("DuplicationSolid", Napi::Function::New<&ActionSolid::DuplicationSolid>(env));
    object.Set("DuplicationSolid_async", Napi::Function::New<&ActionSolid::DuplicationSolid_async>(env));
    object.Set("HoleSolid", Napi::Function::New<&ActionSolid::HoleSolid>(env));
    object.Set("HoleSolid_async", Napi::Function::New<&ActionSolid::HoleSolid_async>(env));

    exports.Set("ActionSolid", object);

    return exports;
}

Napi::Value ActionSolid::ElementarySolid(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsArray()))
    {
        Napi::Error::New(env, "Array points is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        Napi::Error::New(env, "ElementaryShellType solidType is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 || !((info[2].IsObject() && info[2].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
    {
        Napi::Error::New(env, "SNameMaker names is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbSolid *result = NULL;

    SArray<MbCartPoint3D> points;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        const Napi::Array points_ = Napi::Array(env, info[0]);
        points = SArray<MbCartPoint3D>(points_.Length(), 1);

        for (size_t i = 0; i < points_.Length(); i++)
        {
            if (points_[i].IsNull() || points_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!points_[i].IsObject() || !points_[i].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))
            {
                Napi::Error::New(env, "CartPoint3D points is required.").ThrowAsJavaScriptException();
                return env.Undefined();
            }
            else
            {
                points.Add(*CartPoint3D::Unwrap(points_[i].ToObject())->_underlying);
            }
        }
    }

    const ElementaryShellType solidType = static_cast<ElementaryShellType>(info[1].ToNumber().Uint32Value());

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'names'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class SNameMaker *names_ = SNameMaker::Unwrap(info[2].ToObject());

    const MbSNameMaker &names = *names_->_underlying;

    MbResultType _result = ::ElementarySolid(points, solidType, names, result

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
        msg << "Operation ElementarySolid failed with error: " << Error::GetSolidErrorResId(_result);
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("code", Napi::Number::New(env, _result));
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ActionSolid::ElementarySolid_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsArray()))
    {
        deferred.Reject(Napi::String::New(env, "Array points is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "ElementaryShellType solidType is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 || !((info[2].IsObject() && info[2].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "SNameMaker names is required."));
        return deferred.Promise();
    }

    SArray<MbCartPoint3D> *points;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        const Napi::Array points_ = Napi::Array(env, info[0]);
        points = new SArray<MbCartPoint3D>(points_.Length(), 1);

        for (size_t i = 0; i < points_.Length(); i++)
        {
            if (points_[i].IsNull() || points_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!points_[i].IsObject() || !points_[i].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))
            {
                deferred.Reject(Napi::String::New(env, "CartPoint3D points is required."));
                return deferred.Promise();
            }
            else
            {
                points->Add(*CartPoint3D::Unwrap(points_[i].ToObject())->_underlying);
            }
        }
    }

    const ElementaryShellType solidType = static_cast<ElementaryShellType>(info[1].ToNumber().Uint32Value());

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'names'"));
        return deferred.Promise();
    }
    const class SNameMaker *names_ = SNameMaker::Unwrap(info[2].ToObject());

    const MbSNameMaker &names = *names_->_underlying;

    ActionSolid_ElementarySolid_AsyncWorker *asyncWorker =
        new ActionSolid_ElementarySolid_AsyncWorker(deferred, *points,

                                                    solidType,

                                                    names);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionSolid::FilletSolid(const Napi::CallbackInfo &info)
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
    if (info.Length() == 2 || !(info[2].IsArray()))
    {
        Napi::Error::New(env, "Array initCurves is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 3 || !(info[3].IsArray()))
    {
        Napi::Error::New(env, "Array initBounds is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 4 ||
        !((info[4].IsObject() && info[4].ToObject().InstanceOf(_SmoothValues::GetConstructor(env)))))
    {
        Napi::Error::New(env, "SmoothValues params is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 5 || !((info[5].IsObject() && info[5].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
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

    SArray<MbEdgeFunction> initCurves;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        const Napi::Array initCurves_ = Napi::Array(env, info[2]);
        initCurves = SArray<MbEdgeFunction>(initCurves_.Length(), 1);

        for (size_t i = 0; i < initCurves_.Length(); i++)
        {
            if (initCurves_[i].IsNull() || initCurves_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!initCurves_[i].IsObject() || !initCurves_[i].ToObject().InstanceOf(EdgeFunction::GetConstructor(env)))
            {
                Napi::Error::New(env, "EdgeFunction initCurves is required.").ThrowAsJavaScriptException();
                return env.Undefined();
            }
            else
            {
                initCurves.Add(*EdgeFunction::Unwrap(initCurves_[i].ToObject())->_underlying);
            }
        }
    }

    RPArray<MbFace> initBounds;
    if (!(info[3].IsNull() || info[3].IsUndefined()))
    {
        const Napi::Array initBounds_ = Napi::Array(env, info[3]);
        initBounds = RPArray<MbFace>(initBounds_.Length(), 1);

        for (size_t i = 0; i < initBounds_.Length(); i++)
        {
            if (initBounds_[i].IsNull() || initBounds_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!initBounds_[i].IsObject() || !initBounds_[i].ToObject().InstanceOf(Face::GetConstructor(env)))
            {
                Napi::Error::New(env, "Face initBounds is required.").ThrowAsJavaScriptException();
                return env.Undefined();
            }
            else
            {
                initBounds.Add(Face::Unwrap(initBounds_[i].ToObject())->_underlying);
            }
        }
    }

    if (info[4].IsNull() || info[4].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'params'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class _SmoothValues *params_ = _SmoothValues::Unwrap(info[4].ToObject());

    const SmoothValues &params = *params_->_underlying;

    if (info[5].IsNull() || info[5].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'names'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class SNameMaker *names_ = SNameMaker::Unwrap(info[5].ToObject());

    const MbSNameMaker &names = *names_->_underlying;

    MbResultType _result = ::FilletSolid(solid, sameShell, initCurves, initBounds, params, names, result

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
        msg << "Operation FilletSolid failed with error: " << Error::GetSolidErrorResId(_result);
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("code", Napi::Number::New(env, _result));
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ActionSolid::FilletSolid_async(const Napi::CallbackInfo &info)
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
    if (info.Length() == 2 || !(info[2].IsArray()))
    {
        deferred.Reject(Napi::String::New(env, "Array initCurves is required."));
        return deferred.Promise();
    }
    if (info.Length() == 3 || !(info[3].IsArray()))
    {
        deferred.Reject(Napi::String::New(env, "Array initBounds is required."));
        return deferred.Promise();
    }
    if (info.Length() == 4 ||
        !((info[4].IsObject() && info[4].ToObject().InstanceOf(_SmoothValues::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "SmoothValues params is required."));
        return deferred.Promise();
    }
    if (info.Length() == 5 || !((info[5].IsObject() && info[5].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
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

    SArray<MbEdgeFunction> *initCurves;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        const Napi::Array initCurves_ = Napi::Array(env, info[2]);
        initCurves = new SArray<MbEdgeFunction>(initCurves_.Length(), 1);

        for (size_t i = 0; i < initCurves_.Length(); i++)
        {
            if (initCurves_[i].IsNull() || initCurves_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!initCurves_[i].IsObject() || !initCurves_[i].ToObject().InstanceOf(EdgeFunction::GetConstructor(env)))
            {
                deferred.Reject(Napi::String::New(env, "EdgeFunction initCurves is required."));
                return deferred.Promise();
            }
            else
            {
                initCurves->Add(*EdgeFunction::Unwrap(initCurves_[i].ToObject())->_underlying);
            }
        }
    }

    RPArray<MbFace> *initBounds;
    if (!(info[3].IsNull() || info[3].IsUndefined()))
    {
        const Napi::Array initBounds_ = Napi::Array(env, info[3]);
        initBounds = new RPArray<MbFace>(initBounds_.Length(), 1);

        for (size_t i = 0; i < initBounds_.Length(); i++)
        {
            if (initBounds_[i].IsNull() || initBounds_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!initBounds_[i].IsObject() || !initBounds_[i].ToObject().InstanceOf(Face::GetConstructor(env)))
            {
                deferred.Reject(Napi::String::New(env, "Face initBounds is required."));
                return deferred.Promise();
            }
            else
            {
                initBounds->Add(Face::Unwrap(initBounds_[i].ToObject())->_underlying);
            }
        }
    }

    if (info[4].IsNull() || info[4].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'params'"));
        return deferred.Promise();
    }
    const class _SmoothValues *params_ = _SmoothValues::Unwrap(info[4].ToObject());

    const SmoothValues &params = *params_->_underlying;

    if (info[5].IsNull() || info[5].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'names'"));
        return deferred.Promise();
    }
    const class SNameMaker *names_ = SNameMaker::Unwrap(info[5].ToObject());

    const MbSNameMaker &names = *names_->_underlying;

    ActionSolid_FilletSolid_AsyncWorker *asyncWorker =
        new ActionSolid_FilletSolid_AsyncWorker(deferred,

                                                solid,

                                                sameShell, *initCurves, *initBounds,

                                                params,

                                                names);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionSolid::ChamferSolid(const Napi::CallbackInfo &info)
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
    if (info.Length() == 2 || !(info[2].IsArray()))
    {
        Napi::Error::New(env, "Array edges is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 3 ||
        !((info[3].IsObject() && info[3].ToObject().InstanceOf(_SmoothValues::GetConstructor(env)))))
    {
        Napi::Error::New(env, "SmoothValues params is required.").ThrowAsJavaScriptException();
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

    RPArray<MbCurveEdge> edges;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        const Napi::Array edges_ = Napi::Array(env, info[2]);
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

    if (info[3].IsNull() || info[3].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'params'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class _SmoothValues *params_ = _SmoothValues::Unwrap(info[3].ToObject());

    const SmoothValues &params = *params_->_underlying;

    if (info[4].IsNull() || info[4].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'names'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class SNameMaker *names_ = SNameMaker::Unwrap(info[4].ToObject());

    const MbSNameMaker &names = *names_->_underlying;

    MbResultType _result = ::ChamferSolid(solid, sameShell, edges, params, names, result

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
        msg << "Operation ChamferSolid failed with error: " << Error::GetSolidErrorResId(_result);
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("code", Napi::Number::New(env, _result));
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ActionSolid::ChamferSolid_async(const Napi::CallbackInfo &info)
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
    if (info.Length() == 2 || !(info[2].IsArray()))
    {
        deferred.Reject(Napi::String::New(env, "Array edges is required."));
        return deferred.Promise();
    }
    if (info.Length() == 3 ||
        !((info[3].IsObject() && info[3].ToObject().InstanceOf(_SmoothValues::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "SmoothValues params is required."));
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

    RPArray<MbCurveEdge> *edges;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        const Napi::Array edges_ = Napi::Array(env, info[2]);
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

    if (info[3].IsNull() || info[3].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'params'"));
        return deferred.Promise();
    }
    const class _SmoothValues *params_ = _SmoothValues::Unwrap(info[3].ToObject());

    const SmoothValues &params = *params_->_underlying;

    if (info[4].IsNull() || info[4].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'names'"));
        return deferred.Promise();
    }
    const class SNameMaker *names_ = SNameMaker::Unwrap(info[4].ToObject());

    const MbSNameMaker &names = *names_->_underlying;

    ActionSolid_ChamferSolid_AsyncWorker *asyncWorker = new ActionSolid_ChamferSolid_AsyncWorker(deferred,

                                                                                                 solid,

                                                                                                 sameShell, *edges,

                                                                                                 params,

                                                                                                 names);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionSolid::BooleanResult(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Solid::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Solid solid1 is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        Napi::Error::New(env, "CopyMode sameShell1 is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 || !((info[2].IsObject() && info[2].ToObject().InstanceOf(Solid::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Solid solid2 is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 3 || !(info[3].IsNumber()))
    {
        Napi::Error::New(env, "CopyMode sameShell2 is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 4 || !(info[4].IsNumber()))
    {
        Napi::Error::New(env, "OperationType oType is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 5 ||
        !((info[5].IsObject() && info[5].ToObject().InstanceOf(BooleanFlags::GetConstructor(env)))))
    {
        Napi::Error::New(env, "BooleanFlags flags is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 6 || !((info[6].IsObject() && info[6].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
    {
        Napi::Error::New(env, "SNameMaker operNames is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbSolid *result = NULL;

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'solid1'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Solid *solid1_ = Solid::Unwrap(info[0].ToObject());

    MbSolid &solid1 = *solid1_->_underlying;

    const MbeCopyMode sameShell1 = static_cast<MbeCopyMode>(info[1].ToNumber().Uint32Value());

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'solid2'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Solid *solid2_ = Solid::Unwrap(info[2].ToObject());

    MbSolid &solid2 = *solid2_->_underlying;

    const MbeCopyMode sameShell2 = static_cast<MbeCopyMode>(info[3].ToNumber().Uint32Value());

    const OperationType oType = static_cast<OperationType>(info[4].ToNumber().Uint32Value());

    if (info[5].IsNull() || info[5].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'flags'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class BooleanFlags *flags_ = BooleanFlags::Unwrap(info[5].ToObject());

    const MbBooleanFlags &flags = *flags_->_underlying;

    if (info[6].IsNull() || info[6].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'operNames'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class SNameMaker *operNames_ = SNameMaker::Unwrap(info[6].ToObject());

    const MbSNameMaker &operNames = *operNames_->_underlying;

    MbResultType _result = ::BooleanResult(solid1, sameShell1, solid2, sameShell2, oType, flags, operNames, result

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
        msg << "Operation BooleanResult failed with error: " << Error::GetSolidErrorResId(_result);
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("code", Napi::Number::New(env, _result));
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ActionSolid::BooleanResult_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Solid::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Solid solid1 is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "CopyMode sameShell1 is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 || !((info[2].IsObject() && info[2].ToObject().InstanceOf(Solid::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Solid solid2 is required."));
        return deferred.Promise();
    }
    if (info.Length() == 3 || !(info[3].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "CopyMode sameShell2 is required."));
        return deferred.Promise();
    }
    if (info.Length() == 4 || !(info[4].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "OperationType oType is required."));
        return deferred.Promise();
    }
    if (info.Length() == 5 ||
        !((info[5].IsObject() && info[5].ToObject().InstanceOf(BooleanFlags::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "BooleanFlags flags is required."));
        return deferred.Promise();
    }
    if (info.Length() == 6 || !((info[6].IsObject() && info[6].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "SNameMaker operNames is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'solid1'"));
        return deferred.Promise();
    }
    const class Solid *solid1_ = Solid::Unwrap(info[0].ToObject());

    MbSolid &solid1 = *solid1_->_underlying;

    const MbeCopyMode sameShell1 = static_cast<MbeCopyMode>(info[1].ToNumber().Uint32Value());

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'solid2'"));
        return deferred.Promise();
    }
    const class Solid *solid2_ = Solid::Unwrap(info[2].ToObject());

    MbSolid &solid2 = *solid2_->_underlying;

    const MbeCopyMode sameShell2 = static_cast<MbeCopyMode>(info[3].ToNumber().Uint32Value());

    const OperationType oType = static_cast<OperationType>(info[4].ToNumber().Uint32Value());

    if (info[5].IsNull() || info[5].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'flags'"));
        return deferred.Promise();
    }
    const class BooleanFlags *flags_ = BooleanFlags::Unwrap(info[5].ToObject());

    const MbBooleanFlags &flags = *flags_->_underlying;

    if (info[6].IsNull() || info[6].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'operNames'"));
        return deferred.Promise();
    }
    const class SNameMaker *operNames_ = SNameMaker::Unwrap(info[6].ToObject());

    const MbSNameMaker &operNames = *operNames_->_underlying;

    ActionSolid_BooleanResult_AsyncWorker *asyncWorker = new ActionSolid_BooleanResult_AsyncWorker(deferred,

                                                                                                   solid1,

                                                                                                   sameShell1,

                                                                                                   solid2,

                                                                                                   sameShell2,

                                                                                                   oType,

                                                                                                   flags,

                                                                                                   operNames);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionSolid::UnionResult(const Napi::CallbackInfo &info)
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
    if (info.Length() == 2 || !(info[2].IsArray()))
    {
        Napi::Error::New(env, "Array solids is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 3 || !(info[3].IsNumber()))
    {
        Napi::Error::New(env, "CopyMode sameShells is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 4 || !(info[4].IsNumber()))
    {
        Napi::Error::New(env, "OperationType oType is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 5 || !(info[5].IsBoolean()))
    {
        Napi::Error::New(env, "boolean checkIntersect is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 6 ||
        !((info[6].IsObject() && info[6].ToObject().InstanceOf(MergingFlags::GetConstructor(env)))))
    {
        Napi::Error::New(env, "MergingFlags mergeFlags is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 7 || !((info[7].IsObject() && info[7].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
    {
        Napi::Error::New(env, "SNameMaker names is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 8 || !(info[8].IsBoolean()))
    {
        Napi::Error::New(env, "boolean isArray is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbSolid *result = NULL;
    RPArray<MbSolid> *notGluedSolids = new RPArray<MbSolid>;

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'solid'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Solid *solid_ = Solid::Unwrap(info[0].ToObject());

    MbSolid *solid = solid_->_underlying;

    const MbeCopyMode sameShell = static_cast<MbeCopyMode>(info[1].ToNumber().Uint32Value());

    RPArray<MbSolid> solids;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        const Napi::Array solids_ = Napi::Array(env, info[2]);
        solids = RPArray<MbSolid>(solids_.Length(), 1);

        for (size_t i = 0; i < solids_.Length(); i++)
        {
            if (solids_[i].IsNull() || solids_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!solids_[i].IsObject() || !solids_[i].ToObject().InstanceOf(Solid::GetConstructor(env)))
            {
                Napi::Error::New(env, "Solid solids is required.").ThrowAsJavaScriptException();
                return env.Undefined();
            }
            else
            {
                solids.Add(Solid::Unwrap(solids_[i].ToObject())->_underlying);
            }
        }
    }

    const MbeCopyMode sameShells = static_cast<MbeCopyMode>(info[3].ToNumber().Uint32Value());

    const OperationType oType = static_cast<OperationType>(info[4].ToNumber().Uint32Value());

    bool checkIntersect = info[5].ToBoolean();

    if (info[6].IsNull() || info[6].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'mergeFlags'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class MergingFlags *mergeFlags_ = MergingFlags::Unwrap(info[6].ToObject());

    const MbMergingFlags &mergeFlags = *mergeFlags_->_underlying;

    if (info[7].IsNull() || info[7].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'names'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class SNameMaker *names_ = SNameMaker::Unwrap(info[7].ToObject());

    const MbSNameMaker &names = *names_->_underlying;

    bool isArray = info[8].ToBoolean();

    MbResultType _result = ::UnionResult(solid, sameShell, solids, sameShells, oType, checkIntersect, mergeFlags, names,
                                         isArray, result, notGluedSolids

    );

    if (_result == rt_Success)
    {

        Napi::Object _toReturn = Napi::Object::New(env);
        Napi::Value _to;

        if (result != NULL)
        {
            _to = Solid::NewInstance(env, (MbSolid *)result);
        }
        else
        {
            _to = env.Null();
        }

        _toReturn.Set(Napi::String::New(env, "result"), _to);
        Napi::Array arr_notGluedSolids = Napi::Array::New(env);
        for (size_t i = 0; i < notGluedSolids->Count(); i++)
        {
            arr_notGluedSolids[i] = Solid::NewInstance(env,

                                                       (*notGluedSolids)[i]

            );
        }
        _to = arr_notGluedSolids;

        _toReturn.Set(Napi::String::New(env, "notGluedSolids"), _to);
        return _toReturn;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation UnionResult failed with error: " << Error::GetSolidErrorResId(_result);
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("code", Napi::Number::New(env, _result));
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ActionSolid::UnionResult_async(const Napi::CallbackInfo &info)
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
    if (info.Length() == 2 || !(info[2].IsArray()))
    {
        deferred.Reject(Napi::String::New(env, "Array solids is required."));
        return deferred.Promise();
    }
    if (info.Length() == 3 || !(info[3].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "CopyMode sameShells is required."));
        return deferred.Promise();
    }
    if (info.Length() == 4 || !(info[4].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "OperationType oType is required."));
        return deferred.Promise();
    }
    if (info.Length() == 5 || !(info[5].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean checkIntersect is required."));
        return deferred.Promise();
    }
    if (info.Length() == 6 ||
        !((info[6].IsObject() && info[6].ToObject().InstanceOf(MergingFlags::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "MergingFlags mergeFlags is required."));
        return deferred.Promise();
    }
    if (info.Length() == 7 || !((info[7].IsObject() && info[7].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "SNameMaker names is required."));
        return deferred.Promise();
    }
    if (info.Length() == 8 || !(info[8].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean isArray is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'solid'"));
        return deferred.Promise();
    }
    const class Solid *solid_ = Solid::Unwrap(info[0].ToObject());

    MbSolid *solid = solid_->_underlying;

    const MbeCopyMode sameShell = static_cast<MbeCopyMode>(info[1].ToNumber().Uint32Value());

    RPArray<MbSolid> *solids;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        const Napi::Array solids_ = Napi::Array(env, info[2]);
        solids = new RPArray<MbSolid>(solids_.Length(), 1);

        for (size_t i = 0; i < solids_.Length(); i++)
        {
            if (solids_[i].IsNull() || solids_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!solids_[i].IsObject() || !solids_[i].ToObject().InstanceOf(Solid::GetConstructor(env)))
            {
                deferred.Reject(Napi::String::New(env, "Solid solids is required."));
                return deferred.Promise();
            }
            else
            {
                solids->Add(Solid::Unwrap(solids_[i].ToObject())->_underlying);
            }
        }
    }

    const MbeCopyMode sameShells = static_cast<MbeCopyMode>(info[3].ToNumber().Uint32Value());

    const OperationType oType = static_cast<OperationType>(info[4].ToNumber().Uint32Value());

    bool checkIntersect = info[5].ToBoolean();

    if (info[6].IsNull() || info[6].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'mergeFlags'"));
        return deferred.Promise();
    }
    const class MergingFlags *mergeFlags_ = MergingFlags::Unwrap(info[6].ToObject());

    const MbMergingFlags &mergeFlags = *mergeFlags_->_underlying;

    if (info[7].IsNull() || info[7].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'names'"));
        return deferred.Promise();
    }
    const class SNameMaker *names_ = SNameMaker::Unwrap(info[7].ToObject());

    const MbSNameMaker &names = *names_->_underlying;

    bool isArray = info[8].ToBoolean();

    ActionSolid_UnionResult_AsyncWorker *asyncWorker = new ActionSolid_UnionResult_AsyncWorker(deferred,

                                                                                               solid,

                                                                                               sameShell, *solids,

                                                                                               sameShells,

                                                                                               oType,

                                                                                               checkIntersect,

                                                                                               mergeFlags,

                                                                                               names,

                                                                                               isArray);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionSolid::DraftSolid(const Napi::CallbackInfo &info)
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
        !((info[2].IsObject() && info[2].ToObject().InstanceOf(Placement3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Placement3D neutralPlace is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 3 || !(info[3].IsNumber()))
    {
        Napi::Error::New(env, "number angle is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 4 || !(info[4].IsArray()))
    {
        Napi::Error::New(env, "Array faces is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 5 || !(info[5].IsNumber()))
    {
        Napi::Error::New(env, "FacePropagation fp is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 6 || !(info[6].IsBoolean()))
    {
        Napi::Error::New(env, "boolean reverse is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 7 || !((info[7].IsObject() && info[7].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
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
        Napi::Error::New(env, "Passed null for non-optional parameter 'neutralPlace'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Placement3D *neutralPlace_ = Placement3D::Unwrap(info[2].ToObject());

    const MbPlacement3D &neutralPlace = *neutralPlace_->_underlying;

    double angle = info[3].ToNumber().DoubleValue();

    RPArray<MbFace> faces;
    if (!(info[4].IsNull() || info[4].IsUndefined()))
    {
        const Napi::Array faces_ = Napi::Array(env, info[4]);
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

    const MbeFacePropagation fp = static_cast<MbeFacePropagation>(info[5].ToNumber().Uint32Value());

    bool reverse = info[6].ToBoolean();

    if (info[7].IsNull() || info[7].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'names'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class SNameMaker *names_ = SNameMaker::Unwrap(info[7].ToObject());

    const MbSNameMaker &names = *names_->_underlying;

    MbResultType _result = ::DraftSolid(solid, sameShell, neutralPlace, angle, faces, fp, reverse, names, result

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
        msg << "Operation DraftSolid failed with error: " << Error::GetSolidErrorResId(_result);
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("code", Napi::Number::New(env, _result));
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ActionSolid::DraftSolid_async(const Napi::CallbackInfo &info)
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
        !((info[2].IsObject() && info[2].ToObject().InstanceOf(Placement3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Placement3D neutralPlace is required."));
        return deferred.Promise();
    }
    if (info.Length() == 3 || !(info[3].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number angle is required."));
        return deferred.Promise();
    }
    if (info.Length() == 4 || !(info[4].IsArray()))
    {
        deferred.Reject(Napi::String::New(env, "Array faces is required."));
        return deferred.Promise();
    }
    if (info.Length() == 5 || !(info[5].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "FacePropagation fp is required."));
        return deferred.Promise();
    }
    if (info.Length() == 6 || !(info[6].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean reverse is required."));
        return deferred.Promise();
    }
    if (info.Length() == 7 || !((info[7].IsObject() && info[7].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
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
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'neutralPlace'"));
        return deferred.Promise();
    }
    const class Placement3D *neutralPlace_ = Placement3D::Unwrap(info[2].ToObject());

    const MbPlacement3D &neutralPlace = *neutralPlace_->_underlying;

    double angle = info[3].ToNumber().DoubleValue();

    RPArray<MbFace> *faces;
    if (!(info[4].IsNull() || info[4].IsUndefined()))
    {
        const Napi::Array faces_ = Napi::Array(env, info[4]);
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

    const MbeFacePropagation fp = static_cast<MbeFacePropagation>(info[5].ToNumber().Uint32Value());

    bool reverse = info[6].ToBoolean();

    if (info[7].IsNull() || info[7].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'names'"));
        return deferred.Promise();
    }
    const class SNameMaker *names_ = SNameMaker::Unwrap(info[7].ToObject());

    const MbSNameMaker &names = *names_->_underlying;

    ActionSolid_DraftSolid_AsyncWorker *asyncWorker = new ActionSolid_DraftSolid_AsyncWorker(deferred,

                                                                                             solid,

                                                                                             sameShell,

                                                                                             neutralPlace,

                                                                                             angle, *faces,

                                                                                             fp,

                                                                                             reverse,

                                                                                             names);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionSolid::SolidCutting(const Napi::CallbackInfo &info)
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
        !((info[2].IsObject() && info[2].ToObject().InstanceOf(ShellCuttingParams::GetConstructor(env)))))
    {
        Napi::Error::New(env, "ShellCuttingParams cuttingParams is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    RPArray<MbSolid> *results = new RPArray<MbSolid>;

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
        Napi::Error::New(env, "Passed null for non-optional parameter 'cuttingParams'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class ShellCuttingParams *cuttingParams_ = ShellCuttingParams::Unwrap(info[2].ToObject());

    const MbShellCuttingParams &cuttingParams = *cuttingParams_->_underlying;

    MbResultType _result = ::SolidCutting(solid, sameShell, cuttingParams, *results

    );

    if (_result == rt_Success)
    {

        Napi::Value _to;

        Napi::Array arr_results = Napi::Array::New(env);
        for (size_t i = 0; i < results->Count(); i++)
        {
            arr_results[i] = Solid::NewInstance(env,

                                                (*results)[i]

            );
        }
        _to = arr_results;

        return _to;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation SolidCutting failed with error: " << Error::GetSolidErrorResId(_result);
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("code", Napi::Number::New(env, _result));
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ActionSolid::SolidCutting_async(const Napi::CallbackInfo &info)
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
        !((info[2].IsObject() && info[2].ToObject().InstanceOf(ShellCuttingParams::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "ShellCuttingParams cuttingParams is required."));
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
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'cuttingParams'"));
        return deferred.Promise();
    }
    const class ShellCuttingParams *cuttingParams_ = ShellCuttingParams::Unwrap(info[2].ToObject());

    const MbShellCuttingParams &cuttingParams = *cuttingParams_->_underlying;

    ActionSolid_SolidCutting_AsyncWorker *asyncWorker = new ActionSolid_SolidCutting_AsyncWorker(deferred,

                                                                                                 solid,

                                                                                                 sameShell,

                                                                                                 cuttingParams);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionSolid::SplitSolid(const Napi::CallbackInfo &info)
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
        !((info[2].IsObject() && info[2].ToObject().InstanceOf(Placement3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Placement3D spPlace is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 3 || !(info[3].IsNumber()))
    {
        Napi::Error::New(env, "SenseValue spType is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 4 || !(info[4].IsArray()))
    {
        Napi::Error::New(env, "Array spContours is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 5 || !(info[5].IsBoolean()))
    {
        Napi::Error::New(env, "boolean spSame is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 6 || !(info[6].IsArray()))
    {
        Napi::Error::New(env, "Array selFaces is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 7 ||
        !((info[7].IsObject() && info[7].ToObject().InstanceOf(MergingFlags::GetConstructor(env)))))
    {
        Napi::Error::New(env, "MergingFlags flags is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 8 || !((info[8].IsObject() && info[8].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
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
        Napi::Error::New(env, "Passed null for non-optional parameter 'spPlace'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Placement3D *spPlace_ = Placement3D::Unwrap(info[2].ToObject());

    const MbPlacement3D &spPlace = *spPlace_->_underlying;

    const MbeSenseValue spType = static_cast<MbeSenseValue>(info[3].ToNumber().Uint32Value());

    RPArray<MbContour> spContours;
    if (!(info[4].IsNull() || info[4].IsUndefined()))
    {
        const Napi::Array spContours_ = Napi::Array(env, info[4]);
        spContours = RPArray<MbContour>(spContours_.Length(), 1);

        for (size_t i = 0; i < spContours_.Length(); i++)
        {
            if (spContours_[i].IsNull() || spContours_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!spContours_[i].IsObject() || !spContours_[i].ToObject().InstanceOf(Contour::GetConstructor(env)))
            {
                Napi::Error::New(env, "Contour spContours is required.").ThrowAsJavaScriptException();
                return env.Undefined();
            }
            else
            {
                spContours.Add(Contour::Unwrap(spContours_[i].ToObject())->_underlying);
            }
        }
    }

    bool spSame = info[5].ToBoolean();

    RPArray<MbFace> selFaces;
    if (!(info[6].IsNull() || info[6].IsUndefined()))
    {
        const Napi::Array selFaces_ = Napi::Array(env, info[6]);
        selFaces = RPArray<MbFace>(selFaces_.Length(), 1);

        for (size_t i = 0; i < selFaces_.Length(); i++)
        {
            if (selFaces_[i].IsNull() || selFaces_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!selFaces_[i].IsObject() || !selFaces_[i].ToObject().InstanceOf(Face::GetConstructor(env)))
            {
                Napi::Error::New(env, "Face selFaces is required.").ThrowAsJavaScriptException();
                return env.Undefined();
            }
            else
            {
                selFaces.Add(Face::Unwrap(selFaces_[i].ToObject())->_underlying);
            }
        }
    }

    if (info[7].IsNull() || info[7].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'flags'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class MergingFlags *flags_ = MergingFlags::Unwrap(info[7].ToObject());

    const MbMergingFlags &flags = *flags_->_underlying;

    if (info[8].IsNull() || info[8].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'names'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class SNameMaker *names_ = SNameMaker::Unwrap(info[8].ToObject());

    const MbSNameMaker &names = *names_->_underlying;

    MbResultType _result =
        ::SplitSolid(solid, sameShell, spPlace, spType, spContours, spSame, selFaces, flags, names, result

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
        msg << "Operation SplitSolid failed with error: " << Error::GetSolidErrorResId(_result);
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("code", Napi::Number::New(env, _result));
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ActionSolid::SplitSolid_async(const Napi::CallbackInfo &info)
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
        !((info[2].IsObject() && info[2].ToObject().InstanceOf(Placement3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Placement3D spPlace is required."));
        return deferred.Promise();
    }
    if (info.Length() == 3 || !(info[3].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "SenseValue spType is required."));
        return deferred.Promise();
    }
    if (info.Length() == 4 || !(info[4].IsArray()))
    {
        deferred.Reject(Napi::String::New(env, "Array spContours is required."));
        return deferred.Promise();
    }
    if (info.Length() == 5 || !(info[5].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean spSame is required."));
        return deferred.Promise();
    }
    if (info.Length() == 6 || !(info[6].IsArray()))
    {
        deferred.Reject(Napi::String::New(env, "Array selFaces is required."));
        return deferred.Promise();
    }
    if (info.Length() == 7 ||
        !((info[7].IsObject() && info[7].ToObject().InstanceOf(MergingFlags::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "MergingFlags flags is required."));
        return deferred.Promise();
    }
    if (info.Length() == 8 || !((info[8].IsObject() && info[8].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
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
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'spPlace'"));
        return deferred.Promise();
    }
    const class Placement3D *spPlace_ = Placement3D::Unwrap(info[2].ToObject());

    const MbPlacement3D &spPlace = *spPlace_->_underlying;

    const MbeSenseValue spType = static_cast<MbeSenseValue>(info[3].ToNumber().Uint32Value());

    RPArray<MbContour> *spContours;
    if (!(info[4].IsNull() || info[4].IsUndefined()))
    {
        const Napi::Array spContours_ = Napi::Array(env, info[4]);
        spContours = new RPArray<MbContour>(spContours_.Length(), 1);

        for (size_t i = 0; i < spContours_.Length(); i++)
        {
            if (spContours_[i].IsNull() || spContours_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!spContours_[i].IsObject() || !spContours_[i].ToObject().InstanceOf(Contour::GetConstructor(env)))
            {
                deferred.Reject(Napi::String::New(env, "Contour spContours is required."));
                return deferred.Promise();
            }
            else
            {
                spContours->Add(Contour::Unwrap(spContours_[i].ToObject())->_underlying);
            }
        }
    }

    bool spSame = info[5].ToBoolean();

    RPArray<MbFace> *selFaces;
    if (!(info[6].IsNull() || info[6].IsUndefined()))
    {
        const Napi::Array selFaces_ = Napi::Array(env, info[6]);
        selFaces = new RPArray<MbFace>(selFaces_.Length(), 1);

        for (size_t i = 0; i < selFaces_.Length(); i++)
        {
            if (selFaces_[i].IsNull() || selFaces_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!selFaces_[i].IsObject() || !selFaces_[i].ToObject().InstanceOf(Face::GetConstructor(env)))
            {
                deferred.Reject(Napi::String::New(env, "Face selFaces is required."));
                return deferred.Promise();
            }
            else
            {
                selFaces->Add(Face::Unwrap(selFaces_[i].ToObject())->_underlying);
            }
        }
    }

    if (info[7].IsNull() || info[7].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'flags'"));
        return deferred.Promise();
    }
    const class MergingFlags *flags_ = MergingFlags::Unwrap(info[7].ToObject());

    const MbMergingFlags &flags = *flags_->_underlying;

    if (info[8].IsNull() || info[8].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'names'"));
        return deferred.Promise();
    }
    const class SNameMaker *names_ = SNameMaker::Unwrap(info[8].ToObject());

    const MbSNameMaker &names = *names_->_underlying;

    ActionSolid_SplitSolid_AsyncWorker *asyncWorker = new ActionSolid_SplitSolid_AsyncWorker(deferred,

                                                                                             solid,

                                                                                             sameShell,

                                                                                             spPlace,

                                                                                             spType, *spContours,

                                                                                             spSame, *selFaces,

                                                                                             flags,

                                                                                             names);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionSolid::SplitSolidBySpaceItem(const Napi::CallbackInfo &info)
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
    if (info.Length() == 2 || !(info[2].IsArray()))
    {
        Napi::Error::New(env, "Array spItems is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 3 || !(info[3].IsBoolean()))
    {
        Napi::Error::New(env, "boolean spSame is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 4 || !(info[4].IsArray()))
    {
        Napi::Error::New(env, "Array selFaces is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 5 ||
        !((info[5].IsObject() && info[5].ToObject().InstanceOf(MergingFlags::GetConstructor(env)))))
    {
        Napi::Error::New(env, "MergingFlags flags is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 6 || !((info[6].IsObject() && info[6].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
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

    RPArray<MbSpaceItem> spItems;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        const Napi::Array spItems_ = Napi::Array(env, info[2]);
        spItems = RPArray<MbSpaceItem>(spItems_.Length(), 1);

        for (size_t i = 0; i < spItems_.Length(); i++)
        {
            if (spItems_[i].IsNull() || spItems_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!spItems_[i].IsObject() || !spItems_[i].ToObject().InstanceOf(SpaceItem::GetConstructor(env)))
            {
                Napi::Error::New(env, "SpaceItem spItems is required.").ThrowAsJavaScriptException();
                return env.Undefined();
            }
            else
            {
                spItems.Add(SpaceItem::Unwrap(spItems_[i].ToObject())->_underlying);
            }
        }
    }

    bool spSame = info[3].ToBoolean();

    RPArray<MbFace> selFaces;
    if (!(info[4].IsNull() || info[4].IsUndefined()))
    {
        const Napi::Array selFaces_ = Napi::Array(env, info[4]);
        selFaces = RPArray<MbFace>(selFaces_.Length(), 1);

        for (size_t i = 0; i < selFaces_.Length(); i++)
        {
            if (selFaces_[i].IsNull() || selFaces_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!selFaces_[i].IsObject() || !selFaces_[i].ToObject().InstanceOf(Face::GetConstructor(env)))
            {
                Napi::Error::New(env, "Face selFaces is required.").ThrowAsJavaScriptException();
                return env.Undefined();
            }
            else
            {
                selFaces.Add(Face::Unwrap(selFaces_[i].ToObject())->_underlying);
            }
        }
    }

    if (info[5].IsNull() || info[5].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'flags'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class MergingFlags *flags_ = MergingFlags::Unwrap(info[5].ToObject());

    const MbMergingFlags &flags = *flags_->_underlying;

    if (info[6].IsNull() || info[6].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'names'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class SNameMaker *names_ = SNameMaker::Unwrap(info[6].ToObject());

    const MbSNameMaker &names = *names_->_underlying;

    MbResultType _result = ::SplitSolid(solid, sameShell, spItems, spSame, selFaces, flags, names, result

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
        msg << "Operation SplitSolid failed with error: " << Error::GetSolidErrorResId(_result);
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("code", Napi::Number::New(env, _result));
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ActionSolid::SplitSolidBySpaceItem_async(const Napi::CallbackInfo &info)
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
    if (info.Length() == 2 || !(info[2].IsArray()))
    {
        deferred.Reject(Napi::String::New(env, "Array spItems is required."));
        return deferred.Promise();
    }
    if (info.Length() == 3 || !(info[3].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean spSame is required."));
        return deferred.Promise();
    }
    if (info.Length() == 4 || !(info[4].IsArray()))
    {
        deferred.Reject(Napi::String::New(env, "Array selFaces is required."));
        return deferred.Promise();
    }
    if (info.Length() == 5 ||
        !((info[5].IsObject() && info[5].ToObject().InstanceOf(MergingFlags::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "MergingFlags flags is required."));
        return deferred.Promise();
    }
    if (info.Length() == 6 || !((info[6].IsObject() && info[6].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
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

    RPArray<MbSpaceItem> *spItems;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        const Napi::Array spItems_ = Napi::Array(env, info[2]);
        spItems = new RPArray<MbSpaceItem>(spItems_.Length(), 1);

        for (size_t i = 0; i < spItems_.Length(); i++)
        {
            if (spItems_[i].IsNull() || spItems_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!spItems_[i].IsObject() || !spItems_[i].ToObject().InstanceOf(SpaceItem::GetConstructor(env)))
            {
                deferred.Reject(Napi::String::New(env, "SpaceItem spItems is required."));
                return deferred.Promise();
            }
            else
            {
                spItems->Add(SpaceItem::Unwrap(spItems_[i].ToObject())->_underlying);
            }
        }
    }

    bool spSame = info[3].ToBoolean();

    RPArray<MbFace> *selFaces;
    if (!(info[4].IsNull() || info[4].IsUndefined()))
    {
        const Napi::Array selFaces_ = Napi::Array(env, info[4]);
        selFaces = new RPArray<MbFace>(selFaces_.Length(), 1);

        for (size_t i = 0; i < selFaces_.Length(); i++)
        {
            if (selFaces_[i].IsNull() || selFaces_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!selFaces_[i].IsObject() || !selFaces_[i].ToObject().InstanceOf(Face::GetConstructor(env)))
            {
                deferred.Reject(Napi::String::New(env, "Face selFaces is required."));
                return deferred.Promise();
            }
            else
            {
                selFaces->Add(Face::Unwrap(selFaces_[i].ToObject())->_underlying);
            }
        }
    }

    if (info[5].IsNull() || info[5].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'flags'"));
        return deferred.Promise();
    }
    const class MergingFlags *flags_ = MergingFlags::Unwrap(info[5].ToObject());

    const MbMergingFlags &flags = *flags_->_underlying;

    if (info[6].IsNull() || info[6].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'names'"));
        return deferred.Promise();
    }
    const class SNameMaker *names_ = SNameMaker::Unwrap(info[6].ToObject());

    const MbSNameMaker &names = *names_->_underlying;

    ActionSolid_SplitSolidBySpaceItem_AsyncWorker *asyncWorker =
        new ActionSolid_SplitSolidBySpaceItem_AsyncWorker(deferred,

                                                          solid,

                                                          sameShell, *spItems,

                                                          spSame, *selFaces,

                                                          flags,

                                                          names);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionSolid::DetachParts(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Solid::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Solid solid is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsBoolean()))
    {
        Napi::Error::New(env, "boolean sort is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 || !((info[2].IsObject() && info[2].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
    {
        Napi::Error::New(env, "SNameMaker names is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    RPArray<MbSolid> *parts = new RPArray<MbSolid>;

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'solid'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Solid *solid_ = Solid::Unwrap(info[0].ToObject());

    MbSolid &solid = *solid_->_underlying;

    bool sort = info[1].ToBoolean();

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'names'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class SNameMaker *names_ = SNameMaker::Unwrap(info[2].ToObject());

    const MbSNameMaker &names = *names_->_underlying;

    size_t count = ::DetachParts(solid, *parts, sort, names

    );

    Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

    _to = Napi::Number::New(env, count);

    _toReturn.Set(Napi::String::New(env, "count"), _to);
    Napi::Array arr_parts = Napi::Array::New(env);
    for (size_t i = 0; i < parts->Count(); i++)
    {
        arr_parts[i] = Solid::NewInstance(env,

                                          (*parts)[i]

        );
    }
    _to = arr_parts;

    _toReturn.Set(Napi::String::New(env, "parts"), _to);
    return _toReturn;
}

Napi::Value ActionSolid::DetachParts_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Solid::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Solid solid is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean sort is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 || !((info[2].IsObject() && info[2].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
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

    bool sort = info[1].ToBoolean();

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'names'"));
        return deferred.Promise();
    }
    const class SNameMaker *names_ = SNameMaker::Unwrap(info[2].ToObject());

    const MbSNameMaker &names = *names_->_underlying;

    ActionSolid_DetachParts_AsyncWorker *asyncWorker = new ActionSolid_DetachParts_AsyncWorker(deferred,

                                                                                               solid,

                                                                                               sort,

                                                                                               names);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionSolid::LoftedSolid(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsArray()))
    {
        Napi::Error::New(env, "Array pl is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsArray()))
    {
        Napi::Error::New(env, "Array c is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 || !(

                                  (info[2].IsNull() || info[2].IsUndefined()) ||
                                  (info[2].IsObject() && info[2].ToObject().InstanceOf(Curve3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Curve3D spine is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 3 ||
        !((info[3].IsObject() && info[3].ToObject().InstanceOf(_LoftedValues::GetConstructor(env)))))
    {
        Napi::Error::New(env, "LoftedValues params is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 4 || !(

                                  (info[4].IsNull() || info[4].IsUndefined()) || info[4].IsArray()))
    {
        Napi::Error::New(env, "Array ps is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 5 || !((info[5].IsObject() && info[5].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
    {
        Napi::Error::New(env, "SNameMaker names is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 6 || !(info[6].IsArray()))
    {
        Napi::Error::New(env, "Array ns is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbSolid *result = NULL;

    SArray<MbPlacement3D> pl;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        const Napi::Array pl_ = Napi::Array(env, info[0]);
        pl = SArray<MbPlacement3D>(pl_.Length(), 1);

        for (size_t i = 0; i < pl_.Length(); i++)
        {
            if (pl_[i].IsNull() || pl_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!pl_[i].IsObject() || !pl_[i].ToObject().InstanceOf(Placement3D::GetConstructor(env)))
            {
                Napi::Error::New(env, "Placement3D pl is required.").ThrowAsJavaScriptException();
                return env.Undefined();
            }
            else
            {
                pl.Add(*Placement3D::Unwrap(pl_[i].ToObject())->_underlying);
            }
        }
    }

    RPArray<MbContour> c;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        const Napi::Array c_ = Napi::Array(env, info[1]);
        c = RPArray<MbContour>(c_.Length(), 1);

        for (size_t i = 0; i < c_.Length(); i++)
        {
            if (c_[i].IsNull() || c_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!c_[i].IsObject() || !c_[i].ToObject().InstanceOf(Contour::GetConstructor(env)))
            {
                Napi::Error::New(env, "Contour c is required.").ThrowAsJavaScriptException();
                return env.Undefined();
            }
            else
            {
                c.Add(Contour::Unwrap(c_[i].ToObject())->_underlying);
            }
        }
    }

    MbCurve3D *spine = NULL;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        Curve3D *spine_ = Curve3D::Unwrap(info[2].ToObject());
        spine = spine_->_underlying;
    }

    if (info[3].IsNull() || info[3].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'params'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class _LoftedValues *params_ = _LoftedValues::Unwrap(info[3].ToObject());

    const LoftedValues &params = *params_->_underlying;

    SArray<MbCartPoint3D> *ps;
    if (info[4].IsNull() || info[4].IsUndefined())
    {
        ps = NULL;
    }
    if (!(info[4].IsNull() || info[4].IsUndefined()))
    {
        const Napi::Array ps_ = Napi::Array(env, info[4]);
        ps = new SArray<MbCartPoint3D>(ps_.Length(), 1);

        for (size_t i = 0; i < ps_.Length(); i++)
        {
            if (ps_[i].IsNull() || ps_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!ps_[i].IsObject() || !ps_[i].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))
            {
                Napi::Error::New(env, "CartPoint3D ps is required.").ThrowAsJavaScriptException();
                return env.Undefined();
            }
            else
            {
                ps->Add(*CartPoint3D::Unwrap(ps_[i].ToObject())->_underlying);
            }
        }
    }

    if (info[5].IsNull() || info[5].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'names'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class SNameMaker *names_ = SNameMaker::Unwrap(info[5].ToObject());

    const MbSNameMaker &names = *names_->_underlying;

    RPArray<MbSNameMaker> ns;
    if (!(info[6].IsNull() || info[6].IsUndefined()))
    {
        const Napi::Array ns_ = Napi::Array(env, info[6]);
        ns = RPArray<MbSNameMaker>(ns_.Length(), 1);

        for (size_t i = 0; i < ns_.Length(); i++)
        {
            if (ns_[i].IsNull() || ns_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!ns_[i].IsObject() || !ns_[i].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))
            {
                Napi::Error::New(env, "SNameMaker ns is required.").ThrowAsJavaScriptException();
                return env.Undefined();
            }
            else
            {
                ns.Add(SNameMaker::Unwrap(ns_[i].ToObject())->_underlying);
            }
        }
    }

    MbResultType _result = ::LoftedSolid(pl, c, spine, params, ps, names, ns, result

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
        msg << "Operation LoftedSolid failed with error: " << Error::GetSolidErrorResId(_result);
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("code", Napi::Number::New(env, _result));
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ActionSolid::LoftedSolid_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsArray()))
    {
        deferred.Reject(Napi::String::New(env, "Array pl is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsArray()))
    {
        deferred.Reject(Napi::String::New(env, "Array c is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 || !(

                                  (info[2].IsNull() || info[2].IsUndefined()) ||
                                  (info[2].IsObject() && info[2].ToObject().InstanceOf(Curve3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Curve3D spine is required."));
        return deferred.Promise();
    }
    if (info.Length() == 3 ||
        !((info[3].IsObject() && info[3].ToObject().InstanceOf(_LoftedValues::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "LoftedValues params is required."));
        return deferred.Promise();
    }
    if (info.Length() == 4 || !(

                                  (info[4].IsNull() || info[4].IsUndefined()) || info[4].IsArray()))
    {
        deferred.Reject(Napi::String::New(env, "Array ps is required."));
        return deferred.Promise();
    }
    if (info.Length() == 5 || !((info[5].IsObject() && info[5].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "SNameMaker names is required."));
        return deferred.Promise();
    }
    if (info.Length() == 6 || !(info[6].IsArray()))
    {
        deferred.Reject(Napi::String::New(env, "Array ns is required."));
        return deferred.Promise();
    }

    SArray<MbPlacement3D> *pl;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        const Napi::Array pl_ = Napi::Array(env, info[0]);
        pl = new SArray<MbPlacement3D>(pl_.Length(), 1);

        for (size_t i = 0; i < pl_.Length(); i++)
        {
            if (pl_[i].IsNull() || pl_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!pl_[i].IsObject() || !pl_[i].ToObject().InstanceOf(Placement3D::GetConstructor(env)))
            {
                deferred.Reject(Napi::String::New(env, "Placement3D pl is required."));
                return deferred.Promise();
            }
            else
            {
                pl->Add(*Placement3D::Unwrap(pl_[i].ToObject())->_underlying);
            }
        }
    }

    RPArray<MbContour> *c;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        const Napi::Array c_ = Napi::Array(env, info[1]);
        c = new RPArray<MbContour>(c_.Length(), 1);

        for (size_t i = 0; i < c_.Length(); i++)
        {
            if (c_[i].IsNull() || c_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!c_[i].IsObject() || !c_[i].ToObject().InstanceOf(Contour::GetConstructor(env)))
            {
                deferred.Reject(Napi::String::New(env, "Contour c is required."));
                return deferred.Promise();
            }
            else
            {
                c->Add(Contour::Unwrap(c_[i].ToObject())->_underlying);
            }
        }
    }

    MbCurve3D *spine = NULL;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        Curve3D *spine_ = Curve3D::Unwrap(info[2].ToObject());
        spine = spine_->_underlying;
    }

    if (info[3].IsNull() || info[3].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'params'"));
        return deferred.Promise();
    }
    const class _LoftedValues *params_ = _LoftedValues::Unwrap(info[3].ToObject());

    const LoftedValues &params = *params_->_underlying;

    SArray<MbCartPoint3D> *ps;
    if (info[4].IsNull() || info[4].IsUndefined())
    {
        ps = NULL;
    }
    if (!(info[4].IsNull() || info[4].IsUndefined()))
    {
        const Napi::Array ps_ = Napi::Array(env, info[4]);
        ps = new SArray<MbCartPoint3D>(ps_.Length(), 1);

        for (size_t i = 0; i < ps_.Length(); i++)
        {
            if (ps_[i].IsNull() || ps_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!ps_[i].IsObject() || !ps_[i].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))
            {
                deferred.Reject(Napi::String::New(env, "CartPoint3D ps is required."));
                return deferred.Promise();
            }
            else
            {
                ps->Add(*CartPoint3D::Unwrap(ps_[i].ToObject())->_underlying);
            }
        }
    }

    if (info[5].IsNull() || info[5].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'names'"));
        return deferred.Promise();
    }
    const class SNameMaker *names_ = SNameMaker::Unwrap(info[5].ToObject());

    const MbSNameMaker &names = *names_->_underlying;

    RPArray<MbSNameMaker> *ns;
    if (!(info[6].IsNull() || info[6].IsUndefined()))
    {
        const Napi::Array ns_ = Napi::Array(env, info[6]);
        ns = new RPArray<MbSNameMaker>(ns_.Length(), 1);

        for (size_t i = 0; i < ns_.Length(); i++)
        {
            if (ns_[i].IsNull() || ns_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!ns_[i].IsObject() || !ns_[i].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))
            {
                deferred.Reject(Napi::String::New(env, "SNameMaker ns is required."));
                return deferred.Promise();
            }
            else
            {
                ns->Add(SNameMaker::Unwrap(ns_[i].ToObject())->_underlying);
            }
        }
    }

    ActionSolid_LoftedSolid_AsyncWorker *asyncWorker = new ActionSolid_LoftedSolid_AsyncWorker(deferred, *pl, *c,

                                                                                               spine,

                                                                                               params,

                                                                                               ps,

                                                                                               names, *ns);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionSolid::ExtrusionSolid(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(SweptData::GetConstructor(env)))))
    {
        Napi::Error::New(env, "SweptData sweptData is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !((info[1].IsObject() && info[1].ToObject().InstanceOf(Vector3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Vector3D direction is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 || !(

                                  (info[2].IsNull() || info[2].IsUndefined()) ||
                                  (info[2].IsObject() && info[2].ToObject().InstanceOf(Solid::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Solid solid1 is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 3 || !(

                                  (info[3].IsNull() || info[3].IsUndefined()) ||
                                  (info[3].IsObject() && info[3].ToObject().InstanceOf(Solid::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Solid solid2 is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 4 || !(info[4].IsBoolean()))
    {
        Napi::Error::New(env, "boolean checkIntersection is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 5 ||
        !((info[5].IsObject() && info[5].ToObject().InstanceOf(_ExtrusionValues::GetConstructor(env)))))
    {
        Napi::Error::New(env, "ExtrusionValues params is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 6 || !((info[6].IsObject() && info[6].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
    {
        Napi::Error::New(env, "SNameMaker operNames is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 7 || !(info[7].IsArray()))
    {
        Napi::Error::New(env, "Array contoursNames is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbSolid *result = NULL;

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'sweptData'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class SweptData *sweptData_ = SweptData::Unwrap(info[0].ToObject());

    const MbSweptData &sweptData = *sweptData_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'direction'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Vector3D *direction_ = Vector3D::Unwrap(info[1].ToObject());

    const MbVector3D &direction = *direction_->_underlying;

    MbSolid *solid1 = NULL;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        Solid *solid1_ = Solid::Unwrap(info[2].ToObject());
        solid1 = solid1_->_underlying;
    }

    MbSolid *solid2 = NULL;
    if (!(info[3].IsNull() || info[3].IsUndefined()))
    {
        Solid *solid2_ = Solid::Unwrap(info[3].ToObject());
        solid2 = solid2_->_underlying;
    }

    bool checkIntersection = info[4].ToBoolean();

    if (info[5].IsNull() || info[5].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'params'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class _ExtrusionValues *params_ = _ExtrusionValues::Unwrap(info[5].ToObject());

    const ExtrusionValues &params = params_->_underlying;

    if (info[6].IsNull() || info[6].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'operNames'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class SNameMaker *operNames_ = SNameMaker::Unwrap(info[6].ToObject());

    const MbSNameMaker &operNames = *operNames_->_underlying;

    RPArray<MbSNameMaker> contoursNames;
    if (!(info[7].IsNull() || info[7].IsUndefined()))
    {
        const Napi::Array contoursNames_ = Napi::Array(env, info[7]);
        contoursNames = RPArray<MbSNameMaker>(contoursNames_.Length(), 1);

        for (size_t i = 0; i < contoursNames_.Length(); i++)
        {
            if (contoursNames_[i].IsNull() || contoursNames_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!contoursNames_[i].IsObject() ||
                !contoursNames_[i].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))
            {
                Napi::Error::New(env, "SNameMaker contoursNames is required.").ThrowAsJavaScriptException();
                return env.Undefined();
            }
            else
            {
                contoursNames.Add(SNameMaker::Unwrap(contoursNames_[i].ToObject())->_underlying);
            }
        }
    }

    MbResultType _result = ::ExtrusionSolid(sweptData, direction, solid1, solid2, checkIntersection, params, operNames,
                                            contoursNames, result

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
        msg << "Operation ExtrusionSolid failed with error: " << Error::GetSolidErrorResId(_result);
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("code", Napi::Number::New(env, _result));
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ActionSolid::ExtrusionSolid_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(SweptData::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "SweptData sweptData is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !((info[1].IsObject() && info[1].ToObject().InstanceOf(Vector3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Vector3D direction is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 || !(

                                  (info[2].IsNull() || info[2].IsUndefined()) ||
                                  (info[2].IsObject() && info[2].ToObject().InstanceOf(Solid::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Solid solid1 is required."));
        return deferred.Promise();
    }
    if (info.Length() == 3 || !(

                                  (info[3].IsNull() || info[3].IsUndefined()) ||
                                  (info[3].IsObject() && info[3].ToObject().InstanceOf(Solid::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Solid solid2 is required."));
        return deferred.Promise();
    }
    if (info.Length() == 4 || !(info[4].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean checkIntersection is required."));
        return deferred.Promise();
    }
    if (info.Length() == 5 ||
        !((info[5].IsObject() && info[5].ToObject().InstanceOf(_ExtrusionValues::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "ExtrusionValues params is required."));
        return deferred.Promise();
    }
    if (info.Length() == 6 || !((info[6].IsObject() && info[6].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "SNameMaker operNames is required."));
        return deferred.Promise();
    }
    if (info.Length() == 7 || !(info[7].IsArray()))
    {
        deferred.Reject(Napi::String::New(env, "Array contoursNames is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'sweptData'"));
        return deferred.Promise();
    }
    const class SweptData *sweptData_ = SweptData::Unwrap(info[0].ToObject());

    const MbSweptData &sweptData = *sweptData_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'direction'"));
        return deferred.Promise();
    }
    const class Vector3D *direction_ = Vector3D::Unwrap(info[1].ToObject());

    const MbVector3D &direction = *direction_->_underlying;

    MbSolid *solid1 = NULL;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        Solid *solid1_ = Solid::Unwrap(info[2].ToObject());
        solid1 = solid1_->_underlying;
    }

    MbSolid *solid2 = NULL;
    if (!(info[3].IsNull() || info[3].IsUndefined()))
    {
        Solid *solid2_ = Solid::Unwrap(info[3].ToObject());
        solid2 = solid2_->_underlying;
    }

    bool checkIntersection = info[4].ToBoolean();

    if (info[5].IsNull() || info[5].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'params'"));
        return deferred.Promise();
    }
    const class _ExtrusionValues *params_ = _ExtrusionValues::Unwrap(info[5].ToObject());

    const ExtrusionValues &params = params_->_underlying;

    if (info[6].IsNull() || info[6].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'operNames'"));
        return deferred.Promise();
    }
    const class SNameMaker *operNames_ = SNameMaker::Unwrap(info[6].ToObject());

    const MbSNameMaker &operNames = *operNames_->_underlying;

    RPArray<MbSNameMaker> *contoursNames;
    if (!(info[7].IsNull() || info[7].IsUndefined()))
    {
        const Napi::Array contoursNames_ = Napi::Array(env, info[7]);
        contoursNames = new RPArray<MbSNameMaker>(contoursNames_.Length(), 1);

        for (size_t i = 0; i < contoursNames_.Length(); i++)
        {
            if (contoursNames_[i].IsNull() || contoursNames_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!contoursNames_[i].IsObject() ||
                !contoursNames_[i].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))
            {
                deferred.Reject(Napi::String::New(env, "SNameMaker contoursNames is required."));
                return deferred.Promise();
            }
            else
            {
                contoursNames->Add(SNameMaker::Unwrap(contoursNames_[i].ToObject())->_underlying);
            }
        }
    }

    ActionSolid_ExtrusionSolid_AsyncWorker *asyncWorker =
        new ActionSolid_ExtrusionSolid_AsyncWorker(deferred,

                                                   sweptData,

                                                   direction,

                                                   solid1,

                                                   solid2,

                                                   checkIntersection,

                                                   params,

                                                   operNames, *contoursNames);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionSolid::ExtrusionResult(const Napi::CallbackInfo &info)
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
    if (info.Length() == 2 || !((info[2].IsObject() && info[2].ToObject().InstanceOf(SweptData::GetConstructor(env)))))
    {
        Napi::Error::New(env, "SweptData sweptData is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 3 || !((info[3].IsObject() && info[3].ToObject().InstanceOf(Vector3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Vector3D direction is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 4 ||
        !((info[4].IsObject() && info[4].ToObject().InstanceOf(_ExtrusionValues::GetConstructor(env)))))
    {
        Napi::Error::New(env, "ExtrusionValues params is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 5 || !(info[5].IsNumber()))
    {
        Napi::Error::New(env, "OperationType oType is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 6 || !((info[6].IsObject() && info[6].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
    {
        Napi::Error::New(env, "SNameMaker operNames is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 7 || !(info[7].IsArray()))
    {
        Napi::Error::New(env, "Array contoursNames is required.").ThrowAsJavaScriptException();
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
        Napi::Error::New(env, "Passed null for non-optional parameter 'sweptData'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class SweptData *sweptData_ = SweptData::Unwrap(info[2].ToObject());

    const MbSweptData &sweptData = *sweptData_->_underlying;

    if (info[3].IsNull() || info[3].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'direction'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Vector3D *direction_ = Vector3D::Unwrap(info[3].ToObject());

    const MbVector3D &direction = *direction_->_underlying;

    if (info[4].IsNull() || info[4].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'params'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class _ExtrusionValues *params_ = _ExtrusionValues::Unwrap(info[4].ToObject());

    const ExtrusionValues &params = params_->_underlying;

    const OperationType oType = static_cast<OperationType>(info[5].ToNumber().Uint32Value());

    if (info[6].IsNull() || info[6].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'operNames'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class SNameMaker *operNames_ = SNameMaker::Unwrap(info[6].ToObject());

    const MbSNameMaker &operNames = *operNames_->_underlying;

    RPArray<MbSNameMaker> contoursNames;
    if (!(info[7].IsNull() || info[7].IsUndefined()))
    {
        const Napi::Array contoursNames_ = Napi::Array(env, info[7]);
        contoursNames = RPArray<MbSNameMaker>(contoursNames_.Length(), 1);

        for (size_t i = 0; i < contoursNames_.Length(); i++)
        {
            if (contoursNames_[i].IsNull() || contoursNames_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!contoursNames_[i].IsObject() ||
                !contoursNames_[i].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))
            {
                Napi::Error::New(env, "SNameMaker contoursNames is required.").ThrowAsJavaScriptException();
                return env.Undefined();
            }
            else
            {
                contoursNames.Add(SNameMaker::Unwrap(contoursNames_[i].ToObject())->_underlying);
            }
        }
    }

    MbResultType _result =
        ::ExtrusionResult(solid, sameShell, sweptData, direction, params, oType, operNames, contoursNames, result

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
        msg << "Operation ExtrusionResult failed with error: " << Error::GetSolidErrorResId(_result);
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("code", Napi::Number::New(env, _result));
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ActionSolid::ExtrusionResult_async(const Napi::CallbackInfo &info)
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
    if (info.Length() == 2 || !((info[2].IsObject() && info[2].ToObject().InstanceOf(SweptData::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "SweptData sweptData is required."));
        return deferred.Promise();
    }
    if (info.Length() == 3 || !((info[3].IsObject() && info[3].ToObject().InstanceOf(Vector3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Vector3D direction is required."));
        return deferred.Promise();
    }
    if (info.Length() == 4 ||
        !((info[4].IsObject() && info[4].ToObject().InstanceOf(_ExtrusionValues::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "ExtrusionValues params is required."));
        return deferred.Promise();
    }
    if (info.Length() == 5 || !(info[5].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "OperationType oType is required."));
        return deferred.Promise();
    }
    if (info.Length() == 6 || !((info[6].IsObject() && info[6].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "SNameMaker operNames is required."));
        return deferred.Promise();
    }
    if (info.Length() == 7 || !(info[7].IsArray()))
    {
        deferred.Reject(Napi::String::New(env, "Array contoursNames is required."));
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
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'sweptData'"));
        return deferred.Promise();
    }
    const class SweptData *sweptData_ = SweptData::Unwrap(info[2].ToObject());

    const MbSweptData &sweptData = *sweptData_->_underlying;

    if (info[3].IsNull() || info[3].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'direction'"));
        return deferred.Promise();
    }
    const class Vector3D *direction_ = Vector3D::Unwrap(info[3].ToObject());

    const MbVector3D &direction = *direction_->_underlying;

    if (info[4].IsNull() || info[4].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'params'"));
        return deferred.Promise();
    }
    const class _ExtrusionValues *params_ = _ExtrusionValues::Unwrap(info[4].ToObject());

    const ExtrusionValues &params = params_->_underlying;

    const OperationType oType = static_cast<OperationType>(info[5].ToNumber().Uint32Value());

    if (info[6].IsNull() || info[6].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'operNames'"));
        return deferred.Promise();
    }
    const class SNameMaker *operNames_ = SNameMaker::Unwrap(info[6].ToObject());

    const MbSNameMaker &operNames = *operNames_->_underlying;

    RPArray<MbSNameMaker> *contoursNames;
    if (!(info[7].IsNull() || info[7].IsUndefined()))
    {
        const Napi::Array contoursNames_ = Napi::Array(env, info[7]);
        contoursNames = new RPArray<MbSNameMaker>(contoursNames_.Length(), 1);

        for (size_t i = 0; i < contoursNames_.Length(); i++)
        {
            if (contoursNames_[i].IsNull() || contoursNames_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!contoursNames_[i].IsObject() ||
                !contoursNames_[i].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))
            {
                deferred.Reject(Napi::String::New(env, "SNameMaker contoursNames is required."));
                return deferred.Promise();
            }
            else
            {
                contoursNames->Add(SNameMaker::Unwrap(contoursNames_[i].ToObject())->_underlying);
            }
        }
    }

    ActionSolid_ExtrusionResult_AsyncWorker *asyncWorker =
        new ActionSolid_ExtrusionResult_AsyncWorker(deferred,

                                                    solid,

                                                    sameShell,

                                                    sweptData,

                                                    direction,

                                                    params,

                                                    oType,

                                                    operNames, *contoursNames);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionSolid::SymmetrySolid(const Napi::CallbackInfo &info)
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
        !((info[2].IsObject() && info[2].ToObject().InstanceOf(Placement3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Placement3D place is required.").ThrowAsJavaScriptException();
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
        Napi::Error::New(env, "Passed null for non-optional parameter 'place'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Placement3D *place_ = Placement3D::Unwrap(info[2].ToObject());

    const MbPlacement3D &place = *place_->_underlying;

    if (info[3].IsNull() || info[3].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'names'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class SNameMaker *names_ = SNameMaker::Unwrap(info[3].ToObject());

    const MbSNameMaker &names = *names_->_underlying;

    MbResultType _result = ::SymmetrySolid(solid, sameShell, place, names, result

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
        msg << "Operation SymmetrySolid failed with error: " << Error::GetSolidErrorResId(_result);
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("code", Napi::Number::New(env, _result));
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ActionSolid::SymmetrySolid_async(const Napi::CallbackInfo &info)
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
        !((info[2].IsObject() && info[2].ToObject().InstanceOf(Placement3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Placement3D place is required."));
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
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'place'"));
        return deferred.Promise();
    }
    const class Placement3D *place_ = Placement3D::Unwrap(info[2].ToObject());

    const MbPlacement3D &place = *place_->_underlying;

    if (info[3].IsNull() || info[3].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'names'"));
        return deferred.Promise();
    }
    const class SNameMaker *names_ = SNameMaker::Unwrap(info[3].ToObject());

    const MbSNameMaker &names = *names_->_underlying;

    ActionSolid_SymmetrySolid_AsyncWorker *asyncWorker = new ActionSolid_SymmetrySolid_AsyncWorker(deferred,

                                                                                                   solid,

                                                                                                   sameShell,

                                                                                                   place,

                                                                                                   names);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionSolid::MirrorSolid(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Solid::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Solid solid is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 ||
        !((info[1].IsObject() && info[1].ToObject().InstanceOf(Placement3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Placement3D place is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 || !((info[2].IsObject() && info[2].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
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

    const MbSolid &solid = *solid_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'place'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Placement3D *place_ = Placement3D::Unwrap(info[1].ToObject());

    const MbPlacement3D &place = *place_->_underlying;

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'names'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class SNameMaker *names_ = SNameMaker::Unwrap(info[2].ToObject());

    const MbSNameMaker &names = *names_->_underlying;

    MbResultType _result = ::MirrorSolid(solid, place, names, result

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
        msg << "Operation MirrorSolid failed with error: " << Error::GetSolidErrorResId(_result);
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("code", Napi::Number::New(env, _result));
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ActionSolid::MirrorSolid_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Solid::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Solid solid is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 ||
        !((info[1].IsObject() && info[1].ToObject().InstanceOf(Placement3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Placement3D place is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 || !((info[2].IsObject() && info[2].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
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

    const MbSolid &solid = *solid_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'place'"));
        return deferred.Promise();
    }
    const class Placement3D *place_ = Placement3D::Unwrap(info[1].ToObject());

    const MbPlacement3D &place = *place_->_underlying;

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'names'"));
        return deferred.Promise();
    }
    const class SNameMaker *names_ = SNameMaker::Unwrap(info[2].ToObject());

    const MbSNameMaker &names = *names_->_underlying;

    ActionSolid_MirrorSolid_AsyncWorker *asyncWorker = new ActionSolid_MirrorSolid_AsyncWorker(deferred,

                                                                                               solid,

                                                                                               place,

                                                                                               names);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionSolid::ThinSolid(const Napi::CallbackInfo &info)
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
    if (info.Length() == 2 || !(info[2].IsArray()))
    {
        Napi::Error::New(env, "Array outFaces is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 3 || !(info[3].IsArray()))
    {
        Napi::Error::New(env, "Array offFaces is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 4 || !(info[4].IsArray()))
    {
        Napi::Error::New(env, "Array offDists is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 5 ||
        !((info[5].IsObject() && info[5].ToObject().InstanceOf(_SweptValues::GetConstructor(env)))))
    {
        Napi::Error::New(env, "SweptValues params is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 6 || !((info[6].IsObject() && info[6].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
    {
        Napi::Error::New(env, "SNameMaker names is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 7 || !(info[7].IsBoolean()))
    {
        Napi::Error::New(env, "boolean copyFaceAttrs is required.").ThrowAsJavaScriptException();
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

    RPArray<MbFace> outFaces;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        const Napi::Array outFaces_ = Napi::Array(env, info[2]);
        outFaces = RPArray<MbFace>(outFaces_.Length(), 1);

        for (size_t i = 0; i < outFaces_.Length(); i++)
        {
            if (outFaces_[i].IsNull() || outFaces_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!outFaces_[i].IsObject() || !outFaces_[i].ToObject().InstanceOf(Face::GetConstructor(env)))
            {
                Napi::Error::New(env, "Face outFaces is required.").ThrowAsJavaScriptException();
                return env.Undefined();
            }
            else
            {
                outFaces.Add(Face::Unwrap(outFaces_[i].ToObject())->_underlying);
            }
        }
    }

    RPArray<MbFace> offFaces;
    if (!(info[3].IsNull() || info[3].IsUndefined()))
    {
        const Napi::Array offFaces_ = Napi::Array(env, info[3]);
        offFaces = RPArray<MbFace>(offFaces_.Length(), 1);

        for (size_t i = 0; i < offFaces_.Length(); i++)
        {
            if (offFaces_[i].IsNull() || offFaces_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!offFaces_[i].IsObject() || !offFaces_[i].ToObject().InstanceOf(Face::GetConstructor(env)))
            {
                Napi::Error::New(env, "Face offFaces is required.").ThrowAsJavaScriptException();
                return env.Undefined();
            }
            else
            {
                offFaces.Add(Face::Unwrap(offFaces_[i].ToObject())->_underlying);
            }
        }
    }

    SArray<double> offDists;
    if (!(info[4].IsNull() || info[4].IsUndefined()))
    {
        const Napi::Array offDists_ = Napi::Array(env, info[4]);
        offDists = SArray<double>(offDists_.Length(), 1);

        for (size_t i = 0; i < offDists_.Length(); i++)
        {
            if (offDists_[i].IsNull() || offDists_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!offDists_[i].IsNumber())
            {
                Napi::Error::New(env, "number offDists is required.").ThrowAsJavaScriptException();
                return env.Undefined();
            }
            else
            {
                offDists.Add(offDists_[i].ToNumber().DoubleValue());
            }
        }
    }

    if (info[5].IsNull() || info[5].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'params'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class _SweptValues *params_ = _SweptValues::Unwrap(info[5].ToObject());

    SweptValues &params = *params_->_underlying;

    if (info[6].IsNull() || info[6].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'names'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class SNameMaker *names_ = SNameMaker::Unwrap(info[6].ToObject());

    const MbSNameMaker &names = *names_->_underlying;

    bool copyFaceAttrs = info[7].ToBoolean();

    MbResultType _result =
        ::ThinSolid(solid, sameShell, outFaces, offFaces, offDists, params, names, copyFaceAttrs, result

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
        msg << "Operation ThinSolid failed with error: " << Error::GetSolidErrorResId(_result);
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("code", Napi::Number::New(env, _result));
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ActionSolid::ThinSolid_async(const Napi::CallbackInfo &info)
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
    if (info.Length() == 2 || !(info[2].IsArray()))
    {
        deferred.Reject(Napi::String::New(env, "Array outFaces is required."));
        return deferred.Promise();
    }
    if (info.Length() == 3 || !(info[3].IsArray()))
    {
        deferred.Reject(Napi::String::New(env, "Array offFaces is required."));
        return deferred.Promise();
    }
    if (info.Length() == 4 || !(info[4].IsArray()))
    {
        deferred.Reject(Napi::String::New(env, "Array offDists is required."));
        return deferred.Promise();
    }
    if (info.Length() == 5 ||
        !((info[5].IsObject() && info[5].ToObject().InstanceOf(_SweptValues::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "SweptValues params is required."));
        return deferred.Promise();
    }
    if (info.Length() == 6 || !((info[6].IsObject() && info[6].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "SNameMaker names is required."));
        return deferred.Promise();
    }
    if (info.Length() == 7 || !(info[7].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean copyFaceAttrs is required."));
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

    RPArray<MbFace> *outFaces;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        const Napi::Array outFaces_ = Napi::Array(env, info[2]);
        outFaces = new RPArray<MbFace>(outFaces_.Length(), 1);

        for (size_t i = 0; i < outFaces_.Length(); i++)
        {
            if (outFaces_[i].IsNull() || outFaces_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!outFaces_[i].IsObject() || !outFaces_[i].ToObject().InstanceOf(Face::GetConstructor(env)))
            {
                deferred.Reject(Napi::String::New(env, "Face outFaces is required."));
                return deferred.Promise();
            }
            else
            {
                outFaces->Add(Face::Unwrap(outFaces_[i].ToObject())->_underlying);
            }
        }
    }

    RPArray<MbFace> *offFaces;
    if (!(info[3].IsNull() || info[3].IsUndefined()))
    {
        const Napi::Array offFaces_ = Napi::Array(env, info[3]);
        offFaces = new RPArray<MbFace>(offFaces_.Length(), 1);

        for (size_t i = 0; i < offFaces_.Length(); i++)
        {
            if (offFaces_[i].IsNull() || offFaces_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!offFaces_[i].IsObject() || !offFaces_[i].ToObject().InstanceOf(Face::GetConstructor(env)))
            {
                deferred.Reject(Napi::String::New(env, "Face offFaces is required."));
                return deferred.Promise();
            }
            else
            {
                offFaces->Add(Face::Unwrap(offFaces_[i].ToObject())->_underlying);
            }
        }
    }

    SArray<double> *offDists;
    if (!(info[4].IsNull() || info[4].IsUndefined()))
    {
        const Napi::Array offDists_ = Napi::Array(env, info[4]);
        offDists = new SArray<double>(offDists_.Length(), 1);

        for (size_t i = 0; i < offDists_.Length(); i++)
        {
            if (offDists_[i].IsNull() || offDists_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!offDists_[i].IsNumber())
            {
                deferred.Reject(Napi::String::New(env, "number offDists is required."));
                return deferred.Promise();
            }
            else
            {
                offDists->Add(offDists_[i].ToNumber().DoubleValue());
            }
        }
    }

    if (info[5].IsNull() || info[5].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'params'"));
        return deferred.Promise();
    }
    const class _SweptValues *params_ = _SweptValues::Unwrap(info[5].ToObject());

    SweptValues &params = *params_->_underlying;

    if (info[6].IsNull() || info[6].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'names'"));
        return deferred.Promise();
    }
    const class SNameMaker *names_ = SNameMaker::Unwrap(info[6].ToObject());

    const MbSNameMaker &names = *names_->_underlying;

    bool copyFaceAttrs = info[7].ToBoolean();

    ActionSolid_ThinSolid_AsyncWorker *asyncWorker =
        new ActionSolid_ThinSolid_AsyncWorker(deferred,

                                              solid,

                                              sameShell, *outFaces, *offFaces, *offDists,

                                              params,

                                              names,

                                              copyFaceAttrs);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionSolid::RevolutionSolid(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(SweptData::GetConstructor(env)))))
    {
        Napi::Error::New(env, "SweptData sweptData is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !((info[1].IsObject() && info[1].ToObject().InstanceOf(Axis3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Axis3D axis is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 ||
        !((info[2].IsObject() && info[2].ToObject().InstanceOf(_RevolutionValues::GetConstructor(env)))))
    {
        Napi::Error::New(env, "RevolutionValues params is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 3 || !((info[3].IsObject() && info[3].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
    {
        Napi::Error::New(env, "SNameMaker operNames is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 4 || !(info[4].IsArray()))
    {
        Napi::Error::New(env, "Array contoursNames is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbSolid *result = NULL;

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'sweptData'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class SweptData *sweptData_ = SweptData::Unwrap(info[0].ToObject());

    const MbSweptData &sweptData = *sweptData_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'axis'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Axis3D *axis_ = Axis3D::Unwrap(info[1].ToObject());

    const MbAxis3D &axis = *axis_->_underlying;

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'params'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class _RevolutionValues *params_ = _RevolutionValues::Unwrap(info[2].ToObject());

    const RevolutionValues &params = *params_->_underlying;

    if (info[3].IsNull() || info[3].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'operNames'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class SNameMaker *operNames_ = SNameMaker::Unwrap(info[3].ToObject());

    const MbSNameMaker &operNames = *operNames_->_underlying;

    RPArray<MbSNameMaker> contoursNames;
    if (!(info[4].IsNull() || info[4].IsUndefined()))
    {
        const Napi::Array contoursNames_ = Napi::Array(env, info[4]);
        contoursNames = RPArray<MbSNameMaker>(contoursNames_.Length(), 1);

        for (size_t i = 0; i < contoursNames_.Length(); i++)
        {
            if (contoursNames_[i].IsNull() || contoursNames_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!contoursNames_[i].IsObject() ||
                !contoursNames_[i].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))
            {
                Napi::Error::New(env, "SNameMaker contoursNames is required.").ThrowAsJavaScriptException();
                return env.Undefined();
            }
            else
            {
                contoursNames.Add(SNameMaker::Unwrap(contoursNames_[i].ToObject())->_underlying);
            }
        }
    }

    MbResultType _result = ::RevolutionSolid(sweptData, axis, params, operNames, contoursNames, result

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
        msg << "Operation RevolutionSolid failed with error: " << Error::GetSolidErrorResId(_result);
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("code", Napi::Number::New(env, _result));
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ActionSolid::RevolutionSolid_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(SweptData::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "SweptData sweptData is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !((info[1].IsObject() && info[1].ToObject().InstanceOf(Axis3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Axis3D axis is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 ||
        !((info[2].IsObject() && info[2].ToObject().InstanceOf(_RevolutionValues::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "RevolutionValues params is required."));
        return deferred.Promise();
    }
    if (info.Length() == 3 || !((info[3].IsObject() && info[3].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "SNameMaker operNames is required."));
        return deferred.Promise();
    }
    if (info.Length() == 4 || !(info[4].IsArray()))
    {
        deferred.Reject(Napi::String::New(env, "Array contoursNames is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'sweptData'"));
        return deferred.Promise();
    }
    const class SweptData *sweptData_ = SweptData::Unwrap(info[0].ToObject());

    const MbSweptData &sweptData = *sweptData_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'axis'"));
        return deferred.Promise();
    }
    const class Axis3D *axis_ = Axis3D::Unwrap(info[1].ToObject());

    const MbAxis3D &axis = *axis_->_underlying;

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'params'"));
        return deferred.Promise();
    }
    const class _RevolutionValues *params_ = _RevolutionValues::Unwrap(info[2].ToObject());

    const RevolutionValues &params = *params_->_underlying;

    if (info[3].IsNull() || info[3].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'operNames'"));
        return deferred.Promise();
    }
    const class SNameMaker *operNames_ = SNameMaker::Unwrap(info[3].ToObject());

    const MbSNameMaker &operNames = *operNames_->_underlying;

    RPArray<MbSNameMaker> *contoursNames;
    if (!(info[4].IsNull() || info[4].IsUndefined()))
    {
        const Napi::Array contoursNames_ = Napi::Array(env, info[4]);
        contoursNames = new RPArray<MbSNameMaker>(contoursNames_.Length(), 1);

        for (size_t i = 0; i < contoursNames_.Length(); i++)
        {
            if (contoursNames_[i].IsNull() || contoursNames_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!contoursNames_[i].IsObject() ||
                !contoursNames_[i].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))
            {
                deferred.Reject(Napi::String::New(env, "SNameMaker contoursNames is required."));
                return deferred.Promise();
            }
            else
            {
                contoursNames->Add(SNameMaker::Unwrap(contoursNames_[i].ToObject())->_underlying);
            }
        }
    }

    ActionSolid_RevolutionSolid_AsyncWorker *asyncWorker =
        new ActionSolid_RevolutionSolid_AsyncWorker(deferred,

                                                    sweptData,

                                                    axis,

                                                    params,

                                                    operNames, *contoursNames);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionSolid::EvolutionSolid(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(SweptData::GetConstructor(env)))))
    {
        Napi::Error::New(env, "SweptData sweptData is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !((info[1].IsObject() && info[1].ToObject().InstanceOf(Curve3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Curve3D spine is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 ||
        !((info[2].IsObject() && info[2].ToObject().InstanceOf(_EvolutionValues::GetConstructor(env)))))
    {
        Napi::Error::New(env, "EvolutionValues params is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 3 || !((info[3].IsObject() && info[3].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
    {
        Napi::Error::New(env, "SNameMaker operNames is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 4 || !(info[4].IsArray()))
    {
        Napi::Error::New(env, "Array contoursNames is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 5 || !((info[5].IsObject() && info[5].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
    {
        Napi::Error::New(env, "SNameMaker spineNames is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbSolid *result = NULL;

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'sweptData'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class SweptData *sweptData_ = SweptData::Unwrap(info[0].ToObject());

    const MbSweptData &sweptData = *sweptData_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'spine'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Curve3D *spine_ = Curve3D::Unwrap(info[1].ToObject());

    const MbCurve3D &spine = *spine_->_underlying;

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'params'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class _EvolutionValues *params_ = _EvolutionValues::Unwrap(info[2].ToObject());

    const EvolutionValues &params = *params_->_underlying;

    if (info[3].IsNull() || info[3].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'operNames'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class SNameMaker *operNames_ = SNameMaker::Unwrap(info[3].ToObject());

    const MbSNameMaker &operNames = *operNames_->_underlying;

    RPArray<MbSNameMaker> contoursNames;
    if (!(info[4].IsNull() || info[4].IsUndefined()))
    {
        const Napi::Array contoursNames_ = Napi::Array(env, info[4]);
        contoursNames = RPArray<MbSNameMaker>(contoursNames_.Length(), 1);

        for (size_t i = 0; i < contoursNames_.Length(); i++)
        {
            if (contoursNames_[i].IsNull() || contoursNames_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!contoursNames_[i].IsObject() ||
                !contoursNames_[i].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))
            {
                Napi::Error::New(env, "SNameMaker contoursNames is required.").ThrowAsJavaScriptException();
                return env.Undefined();
            }
            else
            {
                contoursNames.Add(SNameMaker::Unwrap(contoursNames_[i].ToObject())->_underlying);
            }
        }
    }

    if (info[5].IsNull() || info[5].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'spineNames'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class SNameMaker *spineNames_ = SNameMaker::Unwrap(info[5].ToObject());

    const MbSNameMaker &spineNames = *spineNames_->_underlying;

    MbResultType _result = ::EvolutionSolid(sweptData, spine, params, operNames, contoursNames, spineNames, result

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
        msg << "Operation EvolutionSolid failed with error: " << Error::GetSolidErrorResId(_result);
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("code", Napi::Number::New(env, _result));
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ActionSolid::EvolutionSolid_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(SweptData::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "SweptData sweptData is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !((info[1].IsObject() && info[1].ToObject().InstanceOf(Curve3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Curve3D spine is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 ||
        !((info[2].IsObject() && info[2].ToObject().InstanceOf(_EvolutionValues::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "EvolutionValues params is required."));
        return deferred.Promise();
    }
    if (info.Length() == 3 || !((info[3].IsObject() && info[3].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "SNameMaker operNames is required."));
        return deferred.Promise();
    }
    if (info.Length() == 4 || !(info[4].IsArray()))
    {
        deferred.Reject(Napi::String::New(env, "Array contoursNames is required."));
        return deferred.Promise();
    }
    if (info.Length() == 5 || !((info[5].IsObject() && info[5].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "SNameMaker spineNames is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'sweptData'"));
        return deferred.Promise();
    }
    const class SweptData *sweptData_ = SweptData::Unwrap(info[0].ToObject());

    const MbSweptData &sweptData = *sweptData_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'spine'"));
        return deferred.Promise();
    }
    const class Curve3D *spine_ = Curve3D::Unwrap(info[1].ToObject());

    const MbCurve3D &spine = *spine_->_underlying;

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'params'"));
        return deferred.Promise();
    }
    const class _EvolutionValues *params_ = _EvolutionValues::Unwrap(info[2].ToObject());

    const EvolutionValues &params = *params_->_underlying;

    if (info[3].IsNull() || info[3].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'operNames'"));
        return deferred.Promise();
    }
    const class SNameMaker *operNames_ = SNameMaker::Unwrap(info[3].ToObject());

    const MbSNameMaker &operNames = *operNames_->_underlying;

    RPArray<MbSNameMaker> *contoursNames;
    if (!(info[4].IsNull() || info[4].IsUndefined()))
    {
        const Napi::Array contoursNames_ = Napi::Array(env, info[4]);
        contoursNames = new RPArray<MbSNameMaker>(contoursNames_.Length(), 1);

        for (size_t i = 0; i < contoursNames_.Length(); i++)
        {
            if (contoursNames_[i].IsNull() || contoursNames_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!contoursNames_[i].IsObject() ||
                !contoursNames_[i].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))
            {
                deferred.Reject(Napi::String::New(env, "SNameMaker contoursNames is required."));
                return deferred.Promise();
            }
            else
            {
                contoursNames->Add(SNameMaker::Unwrap(contoursNames_[i].ToObject())->_underlying);
            }
        }
    }

    if (info[5].IsNull() || info[5].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'spineNames'"));
        return deferred.Promise();
    }
    const class SNameMaker *spineNames_ = SNameMaker::Unwrap(info[5].ToObject());

    const MbSNameMaker &spineNames = *spineNames_->_underlying;

    ActionSolid_EvolutionSolid_AsyncWorker *asyncWorker =
        new ActionSolid_EvolutionSolid_AsyncWorker(deferred,

                                                   sweptData,

                                                   spine,

                                                   params,

                                                   operNames, *contoursNames,

                                                   spineNames);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionSolid::DuplicationSolid(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Solid::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Solid solid is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 ||
        !((info[1].IsObject() && info[1].ToObject().InstanceOf(_DuplicationValues::GetConstructor(env)))))
    {
        Napi::Error::New(env, "DuplicationValues params is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 || !((info[2].IsObject() && info[2].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
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

    const MbSolid &solid = *solid_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'params'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class _DuplicationValues *params_ = _DuplicationValues::Unwrap(info[1].ToObject());

    const DuplicationValues &params = *params_->_underlying;

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'names'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class SNameMaker *names_ = SNameMaker::Unwrap(info[2].ToObject());

    const MbSNameMaker &names = *names_->_underlying;

    MbResultType _result = ::DuplicationSolid(solid, params, names, result

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
        msg << "Operation DuplicationSolid failed with error: " << Error::GetSolidErrorResId(_result);
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("code", Napi::Number::New(env, _result));
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ActionSolid::DuplicationSolid_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Solid::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Solid solid is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 ||
        !((info[1].IsObject() && info[1].ToObject().InstanceOf(_DuplicationValues::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "DuplicationValues params is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 || !((info[2].IsObject() && info[2].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))))
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

    const MbSolid &solid = *solid_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'params'"));
        return deferred.Promise();
    }
    const class _DuplicationValues *params_ = _DuplicationValues::Unwrap(info[1].ToObject());

    const DuplicationValues &params = *params_->_underlying;

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'names'"));
        return deferred.Promise();
    }
    const class SNameMaker *names_ = SNameMaker::Unwrap(info[2].ToObject());

    const MbSNameMaker &names = *names_->_underlying;

    ActionSolid_DuplicationSolid_AsyncWorker *asyncWorker = new ActionSolid_DuplicationSolid_AsyncWorker(deferred,

                                                                                                         solid,

                                                                                                         params,

                                                                                                         names);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionSolid::HoleSolid(const Napi::CallbackInfo &info)
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
        !((info[2].IsObject() && info[2].ToObject().InstanceOf(Placement3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Placement3D place is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 3 ||
        !((info[3].IsObject() && info[3].ToObject().InstanceOf(_HoleValues::GetConstructor(env)))))
    {
        Napi::Error::New(env, "HoleValues params is required.").ThrowAsJavaScriptException();
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

    MbSolid *solid = solid_->_underlying;

    const MbeCopyMode sameShell = static_cast<MbeCopyMode>(info[1].ToNumber().Uint32Value());

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'place'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Placement3D *place_ = Placement3D::Unwrap(info[2].ToObject());

    const MbPlacement3D &place = *place_->_underlying;

    if (info[3].IsNull() || info[3].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'params'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class _HoleValues *params_ = _HoleValues::Unwrap(info[3].ToObject());

    const HoleValues &params = *params_->_underlying;

    if (info[4].IsNull() || info[4].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'names'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class SNameMaker *names_ = SNameMaker::Unwrap(info[4].ToObject());

    const MbSNameMaker &names = *names_->_underlying;

    MbResultType _result = ::HoleSolid(solid, sameShell, place, params, names, result

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
        msg << "Operation HoleSolid failed with error: " << Error::GetSolidErrorResId(_result);
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("code", Napi::Number::New(env, _result));
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ActionSolid::HoleSolid_async(const Napi::CallbackInfo &info)
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
        !((info[2].IsObject() && info[2].ToObject().InstanceOf(Placement3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Placement3D place is required."));
        return deferred.Promise();
    }
    if (info.Length() == 3 ||
        !((info[3].IsObject() && info[3].ToObject().InstanceOf(_HoleValues::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "HoleValues params is required."));
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

    MbSolid *solid = solid_->_underlying;

    const MbeCopyMode sameShell = static_cast<MbeCopyMode>(info[1].ToNumber().Uint32Value());

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'place'"));
        return deferred.Promise();
    }
    const class Placement3D *place_ = Placement3D::Unwrap(info[2].ToObject());

    const MbPlacement3D &place = *place_->_underlying;

    if (info[3].IsNull() || info[3].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'params'"));
        return deferred.Promise();
    }
    const class _HoleValues *params_ = _HoleValues::Unwrap(info[3].ToObject());

    const HoleValues &params = *params_->_underlying;

    if (info[4].IsNull() || info[4].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'names'"));
        return deferred.Promise();
    }
    const class SNameMaker *names_ = SNameMaker::Unwrap(info[4].ToObject());

    const MbSNameMaker &names = *names_->_underlying;

    ActionSolid_HoleSolid_AsyncWorker *asyncWorker = new ActionSolid_HoleSolid_AsyncWorker(deferred,

                                                                                           solid,

                                                                                           sameShell,

                                                                                           place,

                                                                                           params,

                                                                                           names);
    asyncWorker->Queue();
    return deferred.Promise();
}

ActionSolid_ElementarySolid_AsyncWorker::ActionSolid_ElementarySolid_AsyncWorker(Napi::Promise::Deferred const &d,
                                                                                 const SArray<MbCartPoint3D> &points,
                                                                                 ElementaryShellType solidType,
                                                                                 const MbSNameMaker &names)
    : PromiseWorker(d), points(points), solidType(solidType), names(names){};

void ActionSolid_ElementarySolid_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbSolid *result = NULL;

    MbResultType _result = ::ElementarySolid(points, solidType, names, result);

    this->resultType = _result;
    if (_result == rt_Success)
    {

        this->result = result;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation ElementarySolid failed with error: " << Error::GetSolidErrorResId(_result);
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ActionSolid_ElementarySolid_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ActionSolid_ElementarySolid_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionSolid_FilletSolid_AsyncWorker::ActionSolid_FilletSolid_AsyncWorker(
    Napi::Promise::Deferred const &d, MbSolid &solid, MbeCopyMode sameShell, SArray<MbEdgeFunction> &initCurves,
    RPArray<MbFace> &initBounds, const SmoothValues &params, const MbSNameMaker &names)
    : PromiseWorker(d), solid(solid), sameShell(sameShell), initCurves(initCurves), initBounds(initBounds),
      params(params), names(names){};

void ActionSolid_FilletSolid_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbSolid *result = NULL;

    MbResultType _result = ::FilletSolid(solid, sameShell, initCurves, initBounds, params, names, result);

    this->resultType = _result;
    if (_result == rt_Success)
    {

        this->result = result;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation FilletSolid failed with error: " << Error::GetSolidErrorResId(_result);
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ActionSolid_FilletSolid_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ActionSolid_FilletSolid_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionSolid_ChamferSolid_AsyncWorker::ActionSolid_ChamferSolid_AsyncWorker(Napi::Promise::Deferred const &d,
                                                                           MbSolid &solid, MbeCopyMode sameShell,
                                                                           RPArray<MbCurveEdge> &edges,
                                                                           const SmoothValues &params,
                                                                           const MbSNameMaker &names)
    : PromiseWorker(d), solid(solid), sameShell(sameShell), edges(edges), params(params), names(names){};

void ActionSolid_ChamferSolid_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbSolid *result = NULL;

    MbResultType _result = ::ChamferSolid(solid, sameShell, edges, params, names, result);

    this->resultType = _result;
    if (_result == rt_Success)
    {

        this->result = result;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation ChamferSolid failed with error: " << Error::GetSolidErrorResId(_result);
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ActionSolid_ChamferSolid_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ActionSolid_ChamferSolid_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionSolid_BooleanResult_AsyncWorker::ActionSolid_BooleanResult_AsyncWorker(
    Napi::Promise::Deferred const &d, MbSolid &solid1, MbeCopyMode sameShell1, MbSolid &solid2, MbeCopyMode sameShell2,
    OperationType oType, const MbBooleanFlags &flags, const MbSNameMaker &operNames)
    : PromiseWorker(d), solid1(solid1), sameShell1(sameShell1), solid2(solid2), sameShell2(sameShell2), oType(oType),
      flags(flags), operNames(operNames){};

void ActionSolid_BooleanResult_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbSolid *result = NULL;

    MbResultType _result = ::BooleanResult(solid1, sameShell1, solid2, sameShell2, oType, flags, operNames, result);

    this->resultType = _result;
    if (_result == rt_Success)
    {

        this->result = result;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation BooleanResult failed with error: " << Error::GetSolidErrorResId(_result);
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ActionSolid_BooleanResult_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ActionSolid_BooleanResult_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionSolid_UnionResult_AsyncWorker::ActionSolid_UnionResult_AsyncWorker(
    Napi::Promise::Deferred const &d, MbSolid *solid, MbeCopyMode sameShell, RPArray<MbSolid> &solids,
    MbeCopyMode sameShells, OperationType oType, bool checkIntersect, const MbMergingFlags &mergeFlags,
    const MbSNameMaker &names, bool isArray)
    : PromiseWorker(d), solid(solid), sameShell(sameShell), solids(solids), sameShells(sameShells), oType(oType),
      checkIntersect(checkIntersect), mergeFlags(mergeFlags), names(names), isArray(isArray){};

void ActionSolid_UnionResult_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbSolid *result = NULL;
    RPArray<MbSolid> *notGluedSolids = new RPArray<MbSolid>;

    MbResultType _result = ::UnionResult(solid, sameShell, solids, sameShells, oType, checkIntersect, mergeFlags, names,
                                         isArray, result, notGluedSolids);

    this->resultType = _result;
    if (_result == rt_Success)
    {

        this->result = result;
        this->notGluedSolids = notGluedSolids;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation UnionResult failed with error: " << Error::GetSolidErrorResId(_result);
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ActionSolid_UnionResult_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    Napi::Object _toReturn = Napi::Object::New(env);

    MbSolid *result = this->result;
    if (result != NULL)
    {
        _to = Solid::NewInstance(env, (MbSolid *)result);
    }
    else
    {
        _to = env.Null();
    }

    _toReturn.Set(Napi::String::New(env, "result"), _to);
    RPArray<MbSolid> *notGluedSolids = this->notGluedSolids;
    Napi::Array arr_notGluedSolids = Napi::Array::New(env);
    for (size_t i = 0; i < notGluedSolids->Count(); i++)
    {
        arr_notGluedSolids[i] = Solid::NewInstance(env,

                                                   (*notGluedSolids)[i]

        );
    }
    _to = arr_notGluedSolids;

    _toReturn.Set(Napi::String::New(env, "notGluedSolids"), _to);

    deferred.Resolve(_toReturn);
}

void ActionSolid_UnionResult_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionSolid_DraftSolid_AsyncWorker::ActionSolid_DraftSolid_AsyncWorker(
    Napi::Promise::Deferred const &d, MbSolid &solid, MbeCopyMode sameShell, const MbPlacement3D &neutralPlace,
    double angle, const RPArray<MbFace> &faces, MbeFacePropagation fp, bool reverse, const MbSNameMaker &names)
    : PromiseWorker(d), solid(solid), sameShell(sameShell), neutralPlace(neutralPlace), angle(angle), faces(faces),
      fp(fp), reverse(reverse), names(names){};

void ActionSolid_DraftSolid_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbSolid *result = NULL;

    MbResultType _result = ::DraftSolid(solid, sameShell, neutralPlace, angle, faces, fp, reverse, names, result);

    this->resultType = _result;
    if (_result == rt_Success)
    {

        this->result = result;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation DraftSolid failed with error: " << Error::GetSolidErrorResId(_result);
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ActionSolid_DraftSolid_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ActionSolid_DraftSolid_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionSolid_SolidCutting_AsyncWorker::ActionSolid_SolidCutting_AsyncWorker(Napi::Promise::Deferred const &d,
                                                                           MbSolid &solid, MbeCopyMode sameShell,
                                                                           const MbShellCuttingParams &cuttingParams)
    : PromiseWorker(d), solid(solid), sameShell(sameShell), cuttingParams(cuttingParams){};

void ActionSolid_SolidCutting_AsyncWorker::Execute()
{
    EnterParallelRegion();

    RPArray<MbSolid> *results = new RPArray<MbSolid>;

    MbResultType _result = ::SolidCutting(solid, sameShell, cuttingParams, *results);

    this->resultType = _result;
    if (_result == rt_Success)
    {

        this->results = results;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation SolidCutting failed with error: " << Error::GetSolidErrorResId(_result);
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ActionSolid_SolidCutting_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    RPArray<MbSolid> *results = this->results;
    Napi::Array arr_results = Napi::Array::New(env);
    for (size_t i = 0; i < results->Count(); i++)
    {
        arr_results[i] = Solid::NewInstance(env,

                                            (*results)[i]

        );
    }
    _to = arr_results;

    deferred.Resolve(_to);
}

void ActionSolid_SolidCutting_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionSolid_SplitSolid_AsyncWorker::ActionSolid_SplitSolid_AsyncWorker(
    Napi::Promise::Deferred const &d, MbSolid &solid, MbeCopyMode sameShell, const MbPlacement3D &spPlace,
    MbeSenseValue spType, const RPArray<MbContour> &spContours, bool spSame, RPArray<MbFace> &selFaces,
    const MbMergingFlags &flags, const MbSNameMaker &names)
    : PromiseWorker(d), solid(solid), sameShell(sameShell), spPlace(spPlace), spType(spType), spContours(spContours),
      spSame(spSame), selFaces(selFaces), flags(flags), names(names){};

void ActionSolid_SplitSolid_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbSolid *result = NULL;

    MbResultType _result =
        ::SplitSolid(solid, sameShell, spPlace, spType, spContours, spSame, selFaces, flags, names, result);

    this->resultType = _result;
    if (_result == rt_Success)
    {

        this->result = result;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation SplitSolid failed with error: " << Error::GetSolidErrorResId(_result);
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ActionSolid_SplitSolid_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ActionSolid_SplitSolid_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionSolid_SplitSolidBySpaceItem_AsyncWorker::ActionSolid_SplitSolidBySpaceItem_AsyncWorker(
    Napi::Promise::Deferred const &d, MbSolid &solid, MbeCopyMode sameShell, const RPArray<MbSpaceItem> &spItems,
    bool spSame, RPArray<MbFace> &selFaces, const MbMergingFlags &flags, const MbSNameMaker &names)
    : PromiseWorker(d), solid(solid), sameShell(sameShell), spItems(spItems), spSame(spSame), selFaces(selFaces),
      flags(flags), names(names){};

void ActionSolid_SplitSolidBySpaceItem_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbSolid *result = NULL;

    MbResultType _result = ::SplitSolid(solid, sameShell, spItems, spSame, selFaces, flags, names, result);

    this->resultType = _result;
    if (_result == rt_Success)
    {

        this->result = result;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation SplitSolidBySpaceItem failed with error: " << Error::GetSolidErrorResId(_result);
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ActionSolid_SplitSolidBySpaceItem_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ActionSolid_SplitSolidBySpaceItem_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                           Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionSolid_DetachParts_AsyncWorker::ActionSolid_DetachParts_AsyncWorker(Napi::Promise::Deferred const &d,
                                                                         MbSolid &solid, bool sort,
                                                                         const MbSNameMaker &names)
    : PromiseWorker(d), solid(solid), sort(sort), names(names){};

void ActionSolid_DetachParts_AsyncWorker::Execute()
{
    EnterParallelRegion();

    RPArray<MbSolid> *parts = new RPArray<MbSolid>;

    size_t count = ::DetachParts(solid, *parts, sort, names);

    this->count = count;
    this->parts = parts;

    ExitParallelRegion();
}

void ActionSolid_DetachParts_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    Napi::Object _toReturn = Napi::Object::New(env);

    size_t count = this->count;
    _to = Napi::Number::New(env, count);

    _toReturn.Set(Napi::String::New(env, "count"), _to);
    RPArray<MbSolid> *parts = this->parts;
    Napi::Array arr_parts = Napi::Array::New(env);
    for (size_t i = 0; i < parts->Count(); i++)
    {
        arr_parts[i] = Solid::NewInstance(env,

                                          (*parts)[i]

        );
    }
    _to = arr_parts;

    _toReturn.Set(Napi::String::New(env, "parts"), _to);

    deferred.Resolve(_toReturn);
}

void ActionSolid_DetachParts_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionSolid_LoftedSolid_AsyncWorker::ActionSolid_LoftedSolid_AsyncWorker(
    Napi::Promise::Deferred const &d, SArray<MbPlacement3D> &pl, RPArray<MbContour> &c, const MbCurve3D *spine,
    const LoftedValues &params, SArray<MbCartPoint3D> *ps, const MbSNameMaker &names, RPArray<MbSNameMaker> &ns)
    : PromiseWorker(d), pl(pl), c(c), spine(spine), params(params), ps(ps), names(names), ns(ns){};

void ActionSolid_LoftedSolid_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbSolid *result = NULL;

    MbResultType _result = ::LoftedSolid(pl, c, spine, params, ps, names, ns, result);

    this->resultType = _result;
    if (_result == rt_Success)
    {

        this->result = result;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation LoftedSolid failed with error: " << Error::GetSolidErrorResId(_result);
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ActionSolid_LoftedSolid_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ActionSolid_LoftedSolid_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionSolid_ExtrusionSolid_AsyncWorker::ActionSolid_ExtrusionSolid_AsyncWorker(
    Napi::Promise::Deferred const &d, const MbSweptData &sweptData, const MbVector3D &direction, const MbSolid *solid1,
    const MbSolid *solid2, bool checkIntersection, const ExtrusionValues &params, const MbSNameMaker &operNames,
    const RPArray<MbSNameMaker> &contoursNames)
    : PromiseWorker(d), sweptData(sweptData), direction(direction), solid1(solid1), solid2(solid2),
      checkIntersection(checkIntersection), params(params), operNames(operNames), contoursNames(contoursNames){};

void ActionSolid_ExtrusionSolid_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbSolid *result = NULL;

    MbResultType _result = ::ExtrusionSolid(sweptData, direction, solid1, solid2, checkIntersection, params, operNames,
                                            contoursNames, result);

    this->resultType = _result;
    if (_result == rt_Success)
    {

        this->result = result;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation ExtrusionSolid failed with error: " << Error::GetSolidErrorResId(_result);
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ActionSolid_ExtrusionSolid_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ActionSolid_ExtrusionSolid_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionSolid_ExtrusionResult_AsyncWorker::ActionSolid_ExtrusionResult_AsyncWorker(
    Napi::Promise::Deferred const &d, MbSolid &solid, MbeCopyMode sameShell, const MbSweptData &sweptData,
    const MbVector3D &direction, const ExtrusionValues &params, OperationType oType, const MbSNameMaker &operNames,
    const RPArray<MbSNameMaker> &contoursNames)
    : PromiseWorker(d), solid(solid), sameShell(sameShell), sweptData(sweptData), direction(direction), params(params),
      oType(oType), operNames(operNames), contoursNames(contoursNames){};

void ActionSolid_ExtrusionResult_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbSolid *result = NULL;

    MbResultType _result =
        ::ExtrusionResult(solid, sameShell, sweptData, direction, params, oType, operNames, contoursNames, result);

    this->resultType = _result;
    if (_result == rt_Success)
    {

        this->result = result;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation ExtrusionResult failed with error: " << Error::GetSolidErrorResId(_result);
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ActionSolid_ExtrusionResult_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ActionSolid_ExtrusionResult_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionSolid_SymmetrySolid_AsyncWorker::ActionSolid_SymmetrySolid_AsyncWorker(Napi::Promise::Deferred const &d,
                                                                             MbSolid &solid, MbeCopyMode sameShell,
                                                                             const MbPlacement3D &place,
                                                                             const MbSNameMaker &names)
    : PromiseWorker(d), solid(solid), sameShell(sameShell), place(place), names(names){};

void ActionSolid_SymmetrySolid_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbSolid *result = NULL;

    MbResultType _result = ::SymmetrySolid(solid, sameShell, place, names, result);

    this->resultType = _result;
    if (_result == rt_Success)
    {

        this->result = result;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation SymmetrySolid failed with error: " << Error::GetSolidErrorResId(_result);
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ActionSolid_SymmetrySolid_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ActionSolid_SymmetrySolid_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionSolid_MirrorSolid_AsyncWorker::ActionSolid_MirrorSolid_AsyncWorker(Napi::Promise::Deferred const &d,
                                                                         const MbSolid &solid,
                                                                         const MbPlacement3D &place,
                                                                         const MbSNameMaker &names)
    : PromiseWorker(d), solid(solid), place(place), names(names){};

void ActionSolid_MirrorSolid_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbSolid *result = NULL;

    MbResultType _result = ::MirrorSolid(solid, place, names, result);

    this->resultType = _result;
    if (_result == rt_Success)
    {

        this->result = result;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation MirrorSolid failed with error: " << Error::GetSolidErrorResId(_result);
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ActionSolid_MirrorSolid_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ActionSolid_MirrorSolid_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionSolid_ThinSolid_AsyncWorker::ActionSolid_ThinSolid_AsyncWorker(Napi::Promise::Deferred const &d, MbSolid &solid,
                                                                     MbeCopyMode sameShell, RPArray<MbFace> &outFaces,
                                                                     RPArray<MbFace> &offFaces,
                                                                     SArray<double> &offDists, SweptValues &params,
                                                                     const MbSNameMaker &names, bool copyFaceAttrs)
    : PromiseWorker(d), solid(solid), sameShell(sameShell), outFaces(outFaces), offFaces(offFaces), offDists(offDists),
      params(params), names(names), copyFaceAttrs(copyFaceAttrs){};

void ActionSolid_ThinSolid_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbSolid *result = NULL;

    MbResultType _result =
        ::ThinSolid(solid, sameShell, outFaces, offFaces, offDists, params, names, copyFaceAttrs, result);

    this->resultType = _result;
    if (_result == rt_Success)
    {

        this->result = result;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation ThinSolid failed with error: " << Error::GetSolidErrorResId(_result);
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ActionSolid_ThinSolid_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ActionSolid_ThinSolid_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionSolid_RevolutionSolid_AsyncWorker::ActionSolid_RevolutionSolid_AsyncWorker(
    Napi::Promise::Deferred const &d, const MbSweptData &sweptData, const MbAxis3D &axis,
    const RevolutionValues &params, const MbSNameMaker &operNames, const RPArray<MbSNameMaker> &contoursNames)
    : PromiseWorker(d), sweptData(sweptData), axis(axis), params(params), operNames(operNames),
      contoursNames(contoursNames){};

void ActionSolid_RevolutionSolid_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbSolid *result = NULL;

    MbResultType _result = ::RevolutionSolid(sweptData, axis, params, operNames, contoursNames, result);

    this->resultType = _result;
    if (_result == rt_Success)
    {

        this->result = result;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation RevolutionSolid failed with error: " << Error::GetSolidErrorResId(_result);
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ActionSolid_RevolutionSolid_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ActionSolid_RevolutionSolid_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionSolid_EvolutionSolid_AsyncWorker::ActionSolid_EvolutionSolid_AsyncWorker(
    Napi::Promise::Deferred const &d, const MbSweptData &sweptData, const MbCurve3D &spine,
    const EvolutionValues &params, const MbSNameMaker &operNames, const RPArray<MbSNameMaker> &contoursNames,
    const MbSNameMaker &spineNames)
    : PromiseWorker(d), sweptData(sweptData), spine(spine), params(params), operNames(operNames),
      contoursNames(contoursNames), spineNames(spineNames){};

void ActionSolid_EvolutionSolid_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbSolid *result = NULL;

    MbResultType _result = ::EvolutionSolid(sweptData, spine, params, operNames, contoursNames, spineNames, result);

    this->resultType = _result;
    if (_result == rt_Success)
    {

        this->result = result;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation EvolutionSolid failed with error: " << Error::GetSolidErrorResId(_result);
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ActionSolid_EvolutionSolid_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ActionSolid_EvolutionSolid_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionSolid_DuplicationSolid_AsyncWorker::ActionSolid_DuplicationSolid_AsyncWorker(Napi::Promise::Deferred const &d,
                                                                                   const MbSolid &solid,
                                                                                   const DuplicationValues &params,
                                                                                   const MbSNameMaker &names)
    : PromiseWorker(d), solid(solid), params(params), names(names){};

void ActionSolid_DuplicationSolid_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbSolid *result = NULL;

    MbResultType _result = ::DuplicationSolid(solid, params, names, result);

    this->resultType = _result;
    if (_result == rt_Success)
    {

        this->result = result;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation DuplicationSolid failed with error: " << Error::GetSolidErrorResId(_result);
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ActionSolid_DuplicationSolid_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ActionSolid_DuplicationSolid_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionSolid_HoleSolid_AsyncWorker::ActionSolid_HoleSolid_AsyncWorker(Napi::Promise::Deferred const &d, MbSolid *solid,
                                                                     MbeCopyMode sameShell, const MbPlacement3D &place,
                                                                     const HoleValues &params,
                                                                     const MbSNameMaker &names)
    : PromiseWorker(d), solid(solid), sameShell(sameShell), place(place), params(params), names(names){};

void ActionSolid_HoleSolid_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbSolid *result = NULL;

    MbResultType _result = ::HoleSolid(solid, sameShell, place, params, names, result);

    this->resultType = _result;
    if (_result == rt_Success)
    {

        this->result = result;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation HoleSolid failed with error: " << Error::GetSolidErrorResId(_result);
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ActionSolid_HoleSolid_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ActionSolid_HoleSolid_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
