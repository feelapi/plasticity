// This is a generated file, modify: generate/templates/SurfaceIntersectionCurve.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/SurfaceIntersectionCurve.h"

#include "tool_mutex.h"

Napi::Object SurfaceIntersectionCurve::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(
        env, "SurfaceIntersectionCurve",
        {
            InstanceMethod<&SurfaceIntersectionCurve::GetSurfaceOne>("GetSurfaceOne"),
            InstanceMethod<&SurfaceIntersectionCurve::GetSurfaceOne_async>("GetSurfaceOne_async"),
            InstanceMethod<&SurfaceIntersectionCurve::GetSurfaceTwo>("GetSurfaceTwo"),
            InstanceMethod<&SurfaceIntersectionCurve::GetSurfaceTwo_async>("GetSurfaceTwo_async"),
            InstanceMethod<&SurfaceIntersectionCurve::GetPCurveOne>("GetPCurveOne"),
            InstanceMethod<&SurfaceIntersectionCurve::GetPCurveOne_async>("GetPCurveOne_async"),
            InstanceMethod<&SurfaceIntersectionCurve::GetPCurveTwo>("GetPCurveTwo"),
            InstanceMethod<&SurfaceIntersectionCurve::GetPCurveTwo_async>("GetPCurveTwo_async"),
            InstanceMethod<&SurfaceIntersectionCurve::GetSCurveOne>("GetSCurveOne"),
            InstanceMethod<&SurfaceIntersectionCurve::GetSCurveOne_async>("GetSCurveOne_async"),
            InstanceMethod<&SurfaceIntersectionCurve::GetSCurveTwo>("GetSCurveTwo"),
            InstanceMethod<&SurfaceIntersectionCurve::GetSCurveTwo_async>("GetSCurveTwo_async"),
            InstanceMethod<&SurfaceIntersectionCurve::GetSpaceCurve>("GetSpaceCurve"),
            InstanceMethod<&SurfaceIntersectionCurve::GetSpaceCurve_async>("GetSpaceCurve_async"),
            InstanceMethod<&SurfaceIntersectionCurve::GetCurveOneSurface>("GetCurveOneSurface"),
            InstanceMethod<&SurfaceIntersectionCurve::GetCurveOneSurface_async>("GetCurveOneSurface_async"),
            InstanceMethod<&SurfaceIntersectionCurve::GetCurveTwoSurface>("GetCurveTwoSurface"),
            InstanceMethod<&SurfaceIntersectionCurve::GetCurveTwoSurface_async>("GetCurveTwoSurface_async"),
            InstanceMethod<&SurfaceIntersectionCurve::Cast>("Cast"),
            InstanceMethod<&SurfaceIntersectionCurve::Cast_async>("Cast_async"),
            InstanceMethod<&SurfaceIntersectionCurve::GetPlaneCurve>("GetPlaneCurve"),
            InstanceMethod<&SurfaceIntersectionCurve::GetPlaneCurve_async>("GetPlaneCurve_async"),
            InstanceMethod<&SurfaceIntersectionCurve::IsPlanar>("IsPlanar"),
            InstanceMethod<&SurfaceIntersectionCurve::IsPlanar_async>("IsPlanar_async"),
            InstanceMethod<&SurfaceIntersectionCurve::IsClosed>("IsClosed"),
            InstanceMethod<&SurfaceIntersectionCurve::IsClosed_async>("IsClosed_async"),
            InstanceMethod<&SurfaceIntersectionCurve::IsTouch>("IsTouch"),
            InstanceMethod<&SurfaceIntersectionCurve::IsTouch_async>("IsTouch_async"),
            InstanceMethod<&SurfaceIntersectionCurve::GetTMax>("GetTMax"),
            InstanceMethod<&SurfaceIntersectionCurve::GetTMax_async>("GetTMax_async"),
            InstanceMethod<&SurfaceIntersectionCurve::GetTMin>("GetTMin"),
            InstanceMethod<&SurfaceIntersectionCurve::GetTMin_async>("GetTMin_async"),
            InstanceMethod<&SurfaceIntersectionCurve::GetPeriod>("GetPeriod"),
            InstanceMethod<&SurfaceIntersectionCurve::GetPeriod_async>("GetPeriod_async"),
            InstanceMethod<&SurfaceIntersectionCurve::IsPeriodic>("IsPeriodic"),
            InstanceMethod<&SurfaceIntersectionCurve::IsPeriodic_async>("IsPeriodic_async"),
            InstanceMethod<&SurfaceIntersectionCurve::IsStraight>("IsStraight"),
            InstanceMethod<&SurfaceIntersectionCurve::IsStraight_async>("IsStraight_async"),
            InstanceMethod<&SurfaceIntersectionCurve::Trimmed>("Trimmed"),
            InstanceMethod<&SurfaceIntersectionCurve::Trimmed_async>("Trimmed_async"),
            InstanceMethod<&SurfaceIntersectionCurve::Normal>("Normal"),
            InstanceMethod<&SurfaceIntersectionCurve::Normal_async>("Normal_async"),
            InstanceMethod<&SurfaceIntersectionCurve::Tangent>("Tangent"),
            InstanceMethod<&SurfaceIntersectionCurve::Tangent_async>("Tangent_async"),
            InstanceMethod<&SurfaceIntersectionCurve::BNormal>("BNormal"),
            InstanceMethod<&SurfaceIntersectionCurve::BNormal_async>("BNormal_async"),
            InstanceMethod<&SurfaceIntersectionCurve::GetCentre>("GetCentre"),
            InstanceMethod<&SurfaceIntersectionCurve::GetCentre_async>("GetCentre_async"),
            InstanceMethod<&SurfaceIntersectionCurve::GetLimitPoint>("GetLimitPoint"),
            InstanceMethod<&SurfaceIntersectionCurve::GetLimitPoint_async>("GetLimitPoint_async"),
            InstanceMethod<&SurfaceIntersectionCurve::PointOn>("PointOn"),
            InstanceMethod<&SurfaceIntersectionCurve::PointOn_async>("PointOn_async"),
            InstanceMethod<&SurfaceIntersectionCurve::_PointOn>("_PointOn"),
            InstanceMethod<&SurfaceIntersectionCurve::_PointOn_async>("_PointOn_async"),
            InstanceMethod<&SurfaceIntersectionCurve::NearPointProjection>("NearPointProjection"),
            InstanceMethod<&SurfaceIntersectionCurve::NearPointProjection_async>("NearPointProjection_async"),
            InstanceMethod<&SurfaceIntersectionCurve::GetSurfaceCurve>("GetSurfaceCurve"),
            InstanceMethod<&SurfaceIntersectionCurve::GetSurfaceCurve_async>("GetSurfaceCurve_async"),
            InstanceMethod<&SurfaceIntersectionCurve::GetWeightCentre>("GetWeightCentre"),
            InstanceMethod<&SurfaceIntersectionCurve::GetWeightCentre_async>("GetWeightCentre_async"),
            InstanceMethod<&SurfaceIntersectionCurve::GetBasisCurve>("GetBasisCurve"),
            InstanceMethod<&SurfaceIntersectionCurve::GetBasisCurve_async>("GetBasisCurve_async"),
            InstanceMethod<&SurfaceIntersectionCurve::GetBasisPoints>("GetBasisPoints"),
            InstanceMethod<&SurfaceIntersectionCurve::GetBasisPoints_async>("GetBasisPoints_async"),
            InstanceMethod<&SurfaceIntersectionCurve::SetBasisPoints>("SetBasisPoints"),
            InstanceMethod<&SurfaceIntersectionCurve::SetBasisPoints_async>("SetBasisPoints_async"),
            InstanceMethod<&SurfaceIntersectionCurve::Inverse>("Inverse"),
            InstanceMethod<&SurfaceIntersectionCurve::Inverse_async>("Inverse_async"),
            InstanceMethod<&SurfaceIntersectionCurve::GetProjection>("GetProjection"),
            InstanceMethod<&SurfaceIntersectionCurve::GetProjection_async>("GetProjection_async"),
            InstanceMethod<&SurfaceIntersectionCurve::GetCircleAxis>("GetCircleAxis"),
            InstanceMethod<&SurfaceIntersectionCurve::GetCircleAxis_async>("GetCircleAxis_async"),
            InstanceMethod<&SurfaceIntersectionCurve::IsA>("IsA"),
            InstanceMethod<&SurfaceIntersectionCurve::IsA_async>("IsA_async"),
            InstanceMethod<&SurfaceIntersectionCurve::Type>("Type"),
            InstanceMethod<&SurfaceIntersectionCurve::Type_async>("Type_async"),
            InstanceMethod<&SurfaceIntersectionCurve::Family>("Family"),
            InstanceMethod<&SurfaceIntersectionCurve::Family_async>("Family_async"),
            InstanceMethod<&SurfaceIntersectionCurve::Transform>("Transform"),
            InstanceMethod<&SurfaceIntersectionCurve::Transform_async>("Transform_async"),
            InstanceMethod<&SurfaceIntersectionCurve::Move>("Move"),
            InstanceMethod<&SurfaceIntersectionCurve::Move_async>("Move_async"),
            InstanceMethod<&SurfaceIntersectionCurve::Rotate>("Rotate"),
            InstanceMethod<&SurfaceIntersectionCurve::Rotate_async>("Rotate_async"),
            InstanceMethod<&SurfaceIntersectionCurve::Refresh>("Refresh"),
            InstanceMethod<&SurfaceIntersectionCurve::Refresh_async>("Refresh_async"),
            InstanceMethod<&SurfaceIntersectionCurve::Duplicate>("Duplicate"),
            InstanceMethod<&SurfaceIntersectionCurve::Duplicate_async>("Duplicate_async"),
            InstanceMethod<&SurfaceIntersectionCurve::AddYourGabaritTo>("AddYourGabaritTo"),
            InstanceMethod<&SurfaceIntersectionCurve::AddYourGabaritTo_async>("AddYourGabaritTo_async"),
            InstanceMethod<&SurfaceIntersectionCurve::GetUseCount>("GetUseCount"),
            InstanceMethod<&SurfaceIntersectionCurve::GetUseCount_async>("GetUseCount_async"),
            InstanceMethod<&SurfaceIntersectionCurve::AddRef>("AddRef"),
            InstanceMethod<&SurfaceIntersectionCurve::AddRef_async>("AddRef_async"),
            InstanceMethod<&SurfaceIntersectionCurve::Id>("Id"),

        });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("SurfaceIntersectionCurve", func);

    Napi::Object global = env.Global();
    Napi::Object Object = global.Get("Object").ToObject();
    Napi::Function setPrototypeOf = Napi::Function(env, Object.Get("setPrototypeOf"));
    Napi::Value prototype = func.Get("prototype");

    Napi::Function superFunc = Curve3D::GetConstructor(env);
    Napi::FunctionReference *superConstructor = new Napi::FunctionReference();
    *superConstructor = Napi::Persistent(superFunc);

    Napi::Value superPrototype = superFunc.Get("prototype");
    setPrototypeOf.Call({prototype, superPrototype});
    setPrototypeOf.Call({func, superFunc});

    return exports;
}

SurfaceIntersectionCurve::SurfaceIntersectionCurve(const Napi::CallbackInfo &info)
    : Napi::ObjectWrap<SurfaceIntersectionCurve>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    Napi::Error::New(env, "SurfaceIntersectionCurve cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object SurfaceIntersectionCurve::NewInstance(Napi::Env env, MbSurfaceIntersectionCurve *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("SurfaceIntersectionCurve");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    SurfaceIntersectionCurve *unwrapped = SurfaceIntersectionCurve::Unwrap(inst);
    underlying->AddRef();
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function SurfaceIntersectionCurve::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("SurfaceIntersectionCurve");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value SurfaceIntersectionCurve::GetSurfaceOne(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbSurface *_result = _underlying->GetSurfaceOne(

    );

    Napi::Value _to;

    if (_result != NULL)
    {
        _to = Surface::NewInstance(env, (MbSurface *)_result);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value SurfaceIntersectionCurve::GetSurfaceOne_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SurfaceIntersectionCurve_GetSurfaceOne_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_GetSurfaceOne_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::GetSurfaceTwo(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbSurface *_result = _underlying->GetSurfaceTwo(

    );

    Napi::Value _to;

    if (_result != NULL)
    {
        _to = Surface::NewInstance(env, (MbSurface *)_result);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value SurfaceIntersectionCurve::GetSurfaceTwo_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SurfaceIntersectionCurve_GetSurfaceTwo_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_GetSurfaceTwo_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::GetPCurveOne(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbCurve *_result = _underlying->GetPCurveOne(

    );

    Napi::Value _to;

    if (_result != NULL)
    {
        _to = Curve::NewInstance(env, (MbCurve *)_result);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value SurfaceIntersectionCurve::GetPCurveOne_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SurfaceIntersectionCurve_GetPCurveOne_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_GetPCurveOne_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::GetPCurveTwo(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbCurve *_result = _underlying->GetPCurveTwo(

    );

    Napi::Value _to;

    if (_result != NULL)
    {
        _to = Curve::NewInstance(env, (MbCurve *)_result);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value SurfaceIntersectionCurve::GetPCurveTwo_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SurfaceIntersectionCurve_GetPCurveTwo_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_GetPCurveTwo_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::GetSCurveOne(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbSurfaceCurve *_result = _underlying->GetSCurveOne(

    );

    Napi::Value _to;

    if (_result != NULL)
    {
        _to = SurfaceCurve::NewInstance(env, (MbSurfaceCurve *)_result);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value SurfaceIntersectionCurve::GetSCurveOne_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SurfaceIntersectionCurve_GetSCurveOne_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_GetSCurveOne_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::GetSCurveTwo(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbSurfaceCurve *_result = _underlying->GetSCurveTwo(

    );

    Napi::Value _to;

    if (_result != NULL)
    {
        _to = SurfaceCurve::NewInstance(env, (MbSurfaceCurve *)_result);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value SurfaceIntersectionCurve::GetSCurveTwo_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SurfaceIntersectionCurve_GetSCurveTwo_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_GetSCurveTwo_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::GetSpaceCurve(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbCurve3D *_result = _underlying->GetSpaceCurve(

    );

    Napi::Value _to;

    if (_result != NULL)
    {
        _to = Curve3D::NewInstance(env, (MbCurve3D *)_result);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value SurfaceIntersectionCurve::GetSpaceCurve_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SurfaceIntersectionCurve_GetSpaceCurve_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_GetSpaceCurve_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::GetCurveOneSurface(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbSurface &_result = _underlying->GetCurveOneSurface(

    );

    Napi::Value _to;

    _to = Surface::NewInstance(env, (MbSurface *)&(_result));

    return _to;
}

Napi::Value SurfaceIntersectionCurve::GetCurveOneSurface_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SurfaceIntersectionCurve_GetCurveOneSurface_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_GetCurveOneSurface_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::GetCurveTwoSurface(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbSurface &_result = _underlying->GetCurveTwoSurface(

    );

    Napi::Value _to;

    _to = Surface::NewInstance(env, (MbSurface *)&(_result));

    return _to;
}

Napi::Value SurfaceIntersectionCurve::GetCurveTwoSurface_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SurfaceIntersectionCurve_GetCurveTwoSurface_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_GetCurveTwoSurface_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value SurfaceIntersectionCurve::GetPlaneCurve(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsBoolean()))
    {
        Napi::Error::New(env, "boolean saveParams is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbCurve *curve2d = NULL;
    MbPlacement3D *placement = new MbPlacement3D;

    bool saveParams = info[0].ToBoolean();

    PlanarCheckParams params;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        _PlanarCheckParams *params_ = _PlanarCheckParams::Unwrap(info[1].ToObject());
        params = *params_->_underlying;
    }

    bool _result = _underlying->GetPlaneCurve(curve2d, *placement, saveParams,
                                              info.Length() == 1 || info[1].IsNull() ? PlanarCheckParams() : params

    );

    if (_result)
    {

        Napi::Object _toReturn = Napi::Object::New(env);
        Napi::Value _to;

        if (curve2d != NULL)
        {
            _to = Curve::NewInstance(env, (MbCurve *)curve2d);
        }
        else
        {
            _to = env.Null();
        }

        _toReturn.Set(Napi::String::New(env, "curve2d"), _to);
        if (placement != NULL)
        {
            _to = Placement3D::NewInstance(env, (MbPlacement3D *)placement);
        }
        else
        {
            _to = env.Null();
        }

        _toReturn.Set(Napi::String::New(env, "placement"), _to);
        return _toReturn;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation GetPlaneCurve failed";
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value SurfaceIntersectionCurve::GetPlaneCurve_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean saveParams is required."));
        return deferred.Promise();
    }

    bool saveParams = info[0].ToBoolean();

    PlanarCheckParams params;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        _PlanarCheckParams *params_ = _PlanarCheckParams::Unwrap(info[1].ToObject());
        params = *params_->_underlying;
    }

    SurfaceIntersectionCurve_GetPlaneCurve_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_GetPlaneCurve_AsyncWorker(_underlying, deferred,

                                                               saveParams,

                                                               params);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::IsPlanar(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double accuracy = info[0].ToNumber().DoubleValue();

    bool _result = _underlying->IsPlanar(info.Length() == 0 || info[0].IsNull() ? METRIC_EPSILON : accuracy

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value SurfaceIntersectionCurve::IsPlanar_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    double accuracy = info[0].ToNumber().DoubleValue();

    SurfaceIntersectionCurve_IsPlanar_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_IsPlanar_AsyncWorker(_underlying, deferred,

                                                          accuracy);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::IsClosed(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool _result = _underlying->IsClosed(

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value SurfaceIntersectionCurve::IsClosed_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SurfaceIntersectionCurve_IsClosed_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_IsClosed_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::IsTouch(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool _result = _underlying->IsTouch(

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value SurfaceIntersectionCurve::IsTouch_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SurfaceIntersectionCurve_IsTouch_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_IsTouch_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::GetTMax(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetTMax(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value SurfaceIntersectionCurve::GetTMax_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SurfaceIntersectionCurve_GetTMax_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_GetTMax_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::GetTMin(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetTMin(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value SurfaceIntersectionCurve::GetTMin_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SurfaceIntersectionCurve_GetTMin_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_GetTMin_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::GetPeriod(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetPeriod(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value SurfaceIntersectionCurve::GetPeriod_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SurfaceIntersectionCurve_GetPeriod_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_GetPeriod_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::IsPeriodic(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool _result = _underlying->IsPeriodic(

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value SurfaceIntersectionCurve::IsPeriodic_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SurfaceIntersectionCurve_IsPeriodic_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_IsPeriodic_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::IsStraight(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool ignoreParams = info[0].ToBoolean();

    bool _result = _underlying->IsStraight(info.Length() == 0 || info[0].IsNull() ? false : ignoreParams

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value SurfaceIntersectionCurve::IsStraight_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    bool ignoreParams = info[0].ToBoolean();

    SurfaceIntersectionCurve_IsStraight_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_IsStraight_AsyncWorker(_underlying, deferred,

                                                            ignoreParams);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::Trimmed(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number t1 is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        Napi::Error::New(env, "number t2 is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 || !(info[2].IsNumber()))
    {
        Napi::Error::New(env, "int sense is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    double t1 = info[0].ToNumber().DoubleValue();

    double t2 = info[1].ToNumber().DoubleValue();

    int sense = info[2].ToNumber().Int64Value();

    MbCurve3D *_result = _underlying->Trimmed(t1, t2, sense

    );

    Napi::Value _to;

    if (_result != NULL)
    {
        _to = Curve3D::NewInstance(env, (MbCurve3D *)_result);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value SurfaceIntersectionCurve::Trimmed_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t1 is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t2 is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 || !(info[2].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "int sense is required."));
        return deferred.Promise();
    }

    double t1 = info[0].ToNumber().DoubleValue();

    double t2 = info[1].ToNumber().DoubleValue();

    int sense = info[2].ToNumber().Int64Value();

    SurfaceIntersectionCurve_Trimmed_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_Trimmed_AsyncWorker(_underlying, deferred,

                                                         t1,

                                                         t2,

                                                         sense);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::Normal(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbVector3D *n = new MbVector3D;

    double t = info[0].ToNumber().DoubleValue();

    _underlying->Normal(t, *n

    );

    Napi::Value _to;

    if (n != NULL)
    {
        _to = Vector3D::NewInstance(env, (MbVector3D *)n);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value SurfaceIntersectionCurve::Normal_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    SurfaceIntersectionCurve_Normal_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_Normal_AsyncWorker(_underlying, deferred,

                                                        t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::Tangent(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbVector3D *tan = new MbVector3D;

    double t = info[0].ToNumber().DoubleValue();

    _underlying->Tangent(t, *tan

    );

    Napi::Value _to;

    if (tan != NULL)
    {
        _to = Vector3D::NewInstance(env, (MbVector3D *)tan);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value SurfaceIntersectionCurve::Tangent_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    SurfaceIntersectionCurve_Tangent_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_Tangent_AsyncWorker(_underlying, deferred,

                                                         t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::BNormal(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbVector3D *b = new MbVector3D;

    double t = info[0].ToNumber().DoubleValue();

    _underlying->BNormal(t, *b

    );

    Napi::Value _to;

    if (b != NULL)
    {
        _to = Vector3D::NewInstance(env, (MbVector3D *)b);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value SurfaceIntersectionCurve::BNormal_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    SurfaceIntersectionCurve_BNormal_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_BNormal_AsyncWorker(_underlying, deferred,

                                                         t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::GetCentre(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbCartPoint3D *c = new MbCartPoint3D;

    _underlying->GetCentre(*c

    );

    Napi::Value _to;

    if (c != NULL)
    {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)c);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value SurfaceIntersectionCurve::GetCentre_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SurfaceIntersectionCurve_GetCentre_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_GetCentre_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::GetLimitPoint(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "ptrdiff_t number is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbCartPoint3D *point = new MbCartPoint3D;

    int number = info[0].ToNumber().Int64Value();

    _underlying->GetLimitPoint(number, *point

    );

    Napi::Value _to;

    if (point != NULL)
    {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)point);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value SurfaceIntersectionCurve::GetLimitPoint_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "ptrdiff_t number is required."));
        return deferred.Promise();
    }

    int number = info[0].ToNumber().Int64Value();

    SurfaceIntersectionCurve_GetLimitPoint_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_GetLimitPoint_AsyncWorker(_underlying, deferred,

                                                               number);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::PointOn(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbCartPoint3D *p = new MbCartPoint3D;

    double t = info[0].ToNumber().DoubleValue();

    _underlying->PointOn(t, *p

    );

    Napi::Value _to;

    if (p != NULL)
    {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)p);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value SurfaceIntersectionCurve::PointOn_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    SurfaceIntersectionCurve_PointOn_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_PointOn_AsyncWorker(_underlying, deferred,

                                                         t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::_PointOn(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbCartPoint3D *p = new MbCartPoint3D;

    double t = info[0].ToNumber().DoubleValue();

    _underlying->_PointOn(t, *p

    );

    Napi::Value _to;

    if (p != NULL)
    {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)p);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value SurfaceIntersectionCurve::_PointOn_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    SurfaceIntersectionCurve__PointOn_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve__PointOn_AsyncWorker(_underlying, deferred,

                                                          t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::NearPointProjection(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 ||
        !((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "CartPoint3D pnt is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsBoolean()))
    {
        Napi::Error::New(env, "boolean ext is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    double t;

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'pnt'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class CartPoint3D *pnt_ = CartPoint3D::Unwrap(info[0].ToObject());

    const MbCartPoint3D &pnt = *pnt_->_underlying;

    bool ext = info[1].ToBoolean();

    MbRect1D *tRange = NULL;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        Rect1D *tRange_ = Rect1D::Unwrap(info[2].ToObject());
        tRange = tRange_->_underlying;
    }

    bool success = _underlying->NearPointProjection(pnt, t, ext, info.Length() == 2 || info[2].IsNull() ? NULL : tRange

    );

    Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

    _to = Napi::Boolean::New(env, success);

    _toReturn.Set(Napi::String::New(env, "success"), _to);
    _to = Napi::Number::New(env, t);

    _toReturn.Set(Napi::String::New(env, "t"), _to);
    return _toReturn;
}

Napi::Value SurfaceIntersectionCurve::NearPointProjection_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 ||
        !((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "CartPoint3D pnt is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean ext is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'pnt'"));
        return deferred.Promise();
    }
    const class CartPoint3D *pnt_ = CartPoint3D::Unwrap(info[0].ToObject());

    const MbCartPoint3D &pnt = *pnt_->_underlying;

    bool ext = info[1].ToBoolean();

    MbRect1D *tRange = NULL;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        Rect1D *tRange_ = Rect1D::Unwrap(info[2].ToObject());
        tRange = tRange_->_underlying;
    }

    SurfaceIntersectionCurve_NearPointProjection_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_NearPointProjection_AsyncWorker(_underlying, deferred,

                                                                     pnt,

                                                                     ext,

                                                                     tRange);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::GetSurfaceCurve(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbCurve *curve2d = NULL;
    MbSurface *surface = NULL;

    int version = info[0].ToNumber().Int64Value();

    bool _result = _underlying->GetSurfaceCurve(
        curve2d, surface, info.Length() == 0 || info[0].IsNull() ? Math::DefaultMathVersion() : version

    );

    if (_result)
    {

        Napi::Object _toReturn = Napi::Object::New(env);
        Napi::Value _to;

        if (curve2d != NULL)
        {
            _to = Curve::NewInstance(env, (MbCurve *)curve2d);
        }
        else
        {
            _to = env.Null();
        }

        _toReturn.Set(Napi::String::New(env, "curve2d"), _to);
        if (surface != NULL)
        {
            _to = Surface::NewInstance(env, (MbSurface *)surface);
        }
        else
        {
            _to = env.Null();
        }

        _toReturn.Set(Napi::String::New(env, "surface"), _to);
        return _toReturn;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation GetSurfaceCurve failed";
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value SurfaceIntersectionCurve::GetSurfaceCurve_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    int version = info[0].ToNumber().Int64Value();

    SurfaceIntersectionCurve_GetSurfaceCurve_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_GetSurfaceCurve_AsyncWorker(_underlying, deferred,

                                                                 version);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::GetWeightCentre(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbCartPoint3D *point = new MbCartPoint3D;

    _underlying->GetWeightCentre(*point

    );

    Napi::Value _to;

    if (point != NULL)
    {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)point);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value SurfaceIntersectionCurve::GetWeightCentre_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SurfaceIntersectionCurve_GetWeightCentre_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_GetWeightCentre_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::GetBasisCurve(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbCurve3D &_result = _underlying->GetBasisCurve(

    );

    Napi::Value _to;

    _to = Curve3D::NewInstance(env, (MbCurve3D *)&(_result));

    return _to;
}

Napi::Value SurfaceIntersectionCurve::GetBasisCurve_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SurfaceIntersectionCurve_GetBasisCurve_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_GetBasisCurve_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::GetBasisPoints(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbControlData3D *cd = new MbControlData3D;

    _underlying->GetBasisPoints(*cd

    );

    Napi::Value _to;

    if (cd != NULL)
    {
        _to = ControlData3D::NewInstance(env, (MbControlData3D *)cd);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value SurfaceIntersectionCurve::GetBasisPoints_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SurfaceIntersectionCurve_GetBasisPoints_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_GetBasisPoints_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::SetBasisPoints(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 ||
        !((info[0].IsObject() && info[0].ToObject().InstanceOf(ControlData3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "ControlData3D cd is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'cd'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class ControlData3D *cd_ = ControlData3D::Unwrap(info[0].ToObject());

    const MbControlData3D &cd = *cd_->_underlying;

    _underlying->SetBasisPoints(cd

    );

    return env.Undefined();
}

Napi::Value SurfaceIntersectionCurve::SetBasisPoints_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 ||
        !((info[0].IsObject() && info[0].ToObject().InstanceOf(ControlData3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "ControlData3D cd is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'cd'"));
        return deferred.Promise();
    }
    const class ControlData3D *cd_ = ControlData3D::Unwrap(info[0].ToObject());

    const MbControlData3D &cd = *cd_->_underlying;

    SurfaceIntersectionCurve_SetBasisPoints_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_SetBasisPoints_AsyncWorker(_underlying, deferred,

                                                                cd);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::Inverse(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->Inverse(

    );

    return env.Undefined();
}

Napi::Value SurfaceIntersectionCurve::Inverse_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SurfaceIntersectionCurve_Inverse_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_Inverse_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::GetProjection(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 ||
        !((info[0].IsObject() && info[0].ToObject().InstanceOf(Placement3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Placement3D place is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'place'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Placement3D *place_ = Placement3D::Unwrap(info[0].ToObject());

    const MbPlacement3D &place = *place_->_underlying;

    int version = info[1].ToNumber().Int64Value();

    MbCurve *_result =
        _underlying->GetProjection(place, info.Length() == 1 || info[1].IsNull() ? Math::DefaultMathVersion() : version

        );

    Napi::Value _to;

    if (_result != NULL)
    {
        _to = Curve::NewInstance(env, (MbCurve *)_result);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value SurfaceIntersectionCurve::GetProjection_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 ||
        !((info[0].IsObject() && info[0].ToObject().InstanceOf(Placement3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Placement3D place is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'place'"));
        return deferred.Promise();
    }
    const class Placement3D *place_ = Placement3D::Unwrap(info[0].ToObject());

    const MbPlacement3D &place = *place_->_underlying;

    int version = info[1].ToNumber().Int64Value();

    SurfaceIntersectionCurve_GetProjection_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_GetProjection_AsyncWorker(_underlying, deferred,

                                                               place,

                                                               version);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::GetCircleAxis(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbAxis3D *axis = new MbAxis3D;

    bool success = _underlying->GetCircleAxis(*axis

    );

    Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

    _to = Napi::Boolean::New(env, success);

    _toReturn.Set(Napi::String::New(env, "success"), _to);
    if (axis != NULL)
    {
        _to = Axis3D::NewInstance(env, (MbAxis3D *)axis);
    }
    else
    {
        _to = env.Null();
    }

    _toReturn.Set(Napi::String::New(env, "axis"), _to);
    return _toReturn;
}

Napi::Value SurfaceIntersectionCurve::GetCircleAxis_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SurfaceIntersectionCurve_GetCircleAxis_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_GetCircleAxis_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::IsA(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeSpaceType _result = _underlying->IsA(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value SurfaceIntersectionCurve::IsA_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SurfaceIntersectionCurve_IsA_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_IsA_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::Type(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeSpaceType _result = _underlying->Type(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value SurfaceIntersectionCurve::Type_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SurfaceIntersectionCurve_Type_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_Type_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::Family(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeSpaceType _result = _underlying->Family(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value SurfaceIntersectionCurve::Family_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SurfaceIntersectionCurve_Family_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_Family_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::Transform(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Matrix3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Matrix3D mat is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'mat'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Matrix3D *mat_ = Matrix3D::Unwrap(info[0].ToObject());

    const MbMatrix3D &mat = *mat_->_underlying;

    MbRegTransform *iReg = NULL;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
        iReg = iReg_->_underlying;
    }

    _underlying->Transform(mat, info.Length() == 1 || info[1].IsNull() ? NULL : iReg

    );

    return env.Undefined();
}

Napi::Value SurfaceIntersectionCurve::Transform_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Matrix3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Matrix3D mat is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'mat'"));
        return deferred.Promise();
    }
    const class Matrix3D *mat_ = Matrix3D::Unwrap(info[0].ToObject());

    const MbMatrix3D &mat = *mat_->_underlying;

    MbRegTransform *iReg = NULL;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
        iReg = iReg_->_underlying;
    }

    SurfaceIntersectionCurve_Transform_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_Transform_AsyncWorker(_underlying, deferred,

                                                           mat,

                                                           iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::Move(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Vector3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Vector3D v is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'v'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Vector3D *v_ = Vector3D::Unwrap(info[0].ToObject());

    const MbVector3D &v = *v_->_underlying;

    MbRegTransform *iReg = NULL;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
        iReg = iReg_->_underlying;
    }

    _underlying->Move(v, info.Length() == 1 || info[1].IsNull() ? NULL : iReg

    );

    return env.Undefined();
}

Napi::Value SurfaceIntersectionCurve::Move_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Vector3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Vector3D v is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'v'"));
        return deferred.Promise();
    }
    const class Vector3D *v_ = Vector3D::Unwrap(info[0].ToObject());

    const MbVector3D &v = *v_->_underlying;

    MbRegTransform *iReg = NULL;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
        iReg = iReg_->_underlying;
    }

    SurfaceIntersectionCurve_Move_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_Move_AsyncWorker(_underlying, deferred,

                                                      v,

                                                      iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::Rotate(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Axis3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Axis3D axis is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        Napi::Error::New(env, "number angle is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'axis'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Axis3D *axis_ = Axis3D::Unwrap(info[0].ToObject());

    const MbAxis3D &axis = *axis_->_underlying;

    double angle = info[1].ToNumber().DoubleValue();

    MbRegTransform *iReg = NULL;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[2].ToObject());
        iReg = iReg_->_underlying;
    }

    _underlying->Rotate(axis, angle, info.Length() == 2 || info[2].IsNull() ? NULL : iReg

    );

    return env.Undefined();
}

Napi::Value SurfaceIntersectionCurve::Rotate_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Axis3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Axis3D axis is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number angle is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'axis'"));
        return deferred.Promise();
    }
    const class Axis3D *axis_ = Axis3D::Unwrap(info[0].ToObject());

    const MbAxis3D &axis = *axis_->_underlying;

    double angle = info[1].ToNumber().DoubleValue();

    MbRegTransform *iReg = NULL;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[2].ToObject());
        iReg = iReg_->_underlying;
    }

    SurfaceIntersectionCurve_Rotate_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_Rotate_AsyncWorker(_underlying, deferred,

                                                        axis,

                                                        angle,

                                                        iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::Refresh(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->Refresh(

    );

    return env.Undefined();
}

Napi::Value SurfaceIntersectionCurve::Refresh_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SurfaceIntersectionCurve_Refresh_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_Refresh_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::Duplicate(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbRegDuplicate *iReg = NULL;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        RegDuplicate *iReg_ = RegDuplicate::Unwrap(info[0].ToObject());
        iReg = iReg_->_underlying;
    }

    MbSpaceItem &_result = _underlying->Duplicate(info.Length() == 0 || info[0].IsNull() ? NULL : iReg

    );

    Napi::Value _to;

    _to = SpaceItem::NewInstance(env, (MbSpaceItem *)&(_result));

    return _to;
}

Napi::Value SurfaceIntersectionCurve::Duplicate_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    MbRegDuplicate *iReg = NULL;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        RegDuplicate *iReg_ = RegDuplicate::Unwrap(info[0].ToObject());
        iReg = iReg_->_underlying;
    }

    SurfaceIntersectionCurve_Duplicate_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_Duplicate_AsyncWorker(_underlying, deferred,

                                                           iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::AddYourGabaritTo(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Cube::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Cube cube is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'cube'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Cube *cube_ = Cube::Unwrap(info[0].ToObject());

    MbCube &cube = *cube_->_underlying;

    _underlying->AddYourGabaritTo(cube

    );

    return env.Undefined();
}

Napi::Value SurfaceIntersectionCurve::AddYourGabaritTo_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Cube::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Cube cube is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'cube'"));
        return deferred.Promise();
    }
    const class Cube *cube_ = Cube::Unwrap(info[0].ToObject());

    MbCube &cube = *cube_->_underlying;

    SurfaceIntersectionCurve_AddYourGabaritTo_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_AddYourGabaritTo_AsyncWorker(_underlying, deferred,

                                                                  cube);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::GetUseCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    refcount_t _result = _underlying->GetUseCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value SurfaceIntersectionCurve::GetUseCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SurfaceIntersectionCurve_GetUseCount_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_GetUseCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SurfaceIntersectionCurve::AddRef(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->AddRef(

    );

    return env.Undefined();
}

Napi::Value SurfaceIntersectionCurve::AddRef_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SurfaceIntersectionCurve_AddRef_AsyncWorker *asyncWorker =
        new SurfaceIntersectionCurve_AddRef_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value SurfaceIntersectionCurve::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

SurfaceIntersectionCurve::~SurfaceIntersectionCurve()
{
    // std::cout << "calling ::DeleteItem on SurfaceIntersectionCurve for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

SurfaceIntersectionCurve_GetSurfaceOne_AsyncWorker::SurfaceIntersectionCurve_GetSurfaceOne_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SurfaceIntersectionCurve_GetSurfaceOne_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbSurface *_result = _underlying->GetSurfaceOne();

    this->_result = _result;

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_GetSurfaceOne_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbSurface *_result = this->_result;
    if (_result != NULL)
    {
        _to = Surface::NewInstance(env, (MbSurface *)_result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void SurfaceIntersectionCurve_GetSurfaceOne_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                                Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_GetSurfaceTwo_AsyncWorker::SurfaceIntersectionCurve_GetSurfaceTwo_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SurfaceIntersectionCurve_GetSurfaceTwo_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbSurface *_result = _underlying->GetSurfaceTwo();

    this->_result = _result;

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_GetSurfaceTwo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbSurface *_result = this->_result;
    if (_result != NULL)
    {
        _to = Surface::NewInstance(env, (MbSurface *)_result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void SurfaceIntersectionCurve_GetSurfaceTwo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                                Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_GetPCurveOne_AsyncWorker::SurfaceIntersectionCurve_GetPCurveOne_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SurfaceIntersectionCurve_GetPCurveOne_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbCurve *_result = _underlying->GetPCurveOne();

    this->_result = _result;

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_GetPCurveOne_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbCurve *_result = this->_result;
    if (_result != NULL)
    {
        _to = Curve::NewInstance(env, (MbCurve *)_result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void SurfaceIntersectionCurve_GetPCurveOne_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                               Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_GetPCurveTwo_AsyncWorker::SurfaceIntersectionCurve_GetPCurveTwo_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SurfaceIntersectionCurve_GetPCurveTwo_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbCurve *_result = _underlying->GetPCurveTwo();

    this->_result = _result;

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_GetPCurveTwo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbCurve *_result = this->_result;
    if (_result != NULL)
    {
        _to = Curve::NewInstance(env, (MbCurve *)_result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void SurfaceIntersectionCurve_GetPCurveTwo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                               Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_GetSCurveOne_AsyncWorker::SurfaceIntersectionCurve_GetSCurveOne_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SurfaceIntersectionCurve_GetSCurveOne_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbSurfaceCurve *_result = _underlying->GetSCurveOne();

    this->_result = _result;

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_GetSCurveOne_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbSurfaceCurve *_result = this->_result;
    if (_result != NULL)
    {
        _to = SurfaceCurve::NewInstance(env, (MbSurfaceCurve *)_result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void SurfaceIntersectionCurve_GetSCurveOne_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                               Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_GetSCurveTwo_AsyncWorker::SurfaceIntersectionCurve_GetSCurveTwo_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SurfaceIntersectionCurve_GetSCurveTwo_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbSurfaceCurve *_result = _underlying->GetSCurveTwo();

    this->_result = _result;

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_GetSCurveTwo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbSurfaceCurve *_result = this->_result;
    if (_result != NULL)
    {
        _to = SurfaceCurve::NewInstance(env, (MbSurfaceCurve *)_result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void SurfaceIntersectionCurve_GetSCurveTwo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                               Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_GetSpaceCurve_AsyncWorker::SurfaceIntersectionCurve_GetSpaceCurve_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SurfaceIntersectionCurve_GetSpaceCurve_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbCurve3D *_result = _underlying->GetSpaceCurve();

    this->_result = _result;

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_GetSpaceCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbCurve3D *_result = this->_result;
    if (_result != NULL)
    {
        _to = Curve3D::NewInstance(env, (MbCurve3D *)_result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void SurfaceIntersectionCurve_GetSpaceCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                                Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_GetCurveOneSurface_AsyncWorker::SurfaceIntersectionCurve_GetCurveOneSurface_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SurfaceIntersectionCurve_GetCurveOneSurface_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbSurface &_result = _underlying->GetCurveOneSurface();

    this->_result = (MbSurface *)&(_result);

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_GetCurveOneSurface_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbSurface *_result = this->_result;
    _to = Surface::NewInstance(env, (MbSurface *)&(_result));

    deferred.Resolve(_to);
}

void SurfaceIntersectionCurve_GetCurveOneSurface_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                                     Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_GetCurveTwoSurface_AsyncWorker::SurfaceIntersectionCurve_GetCurveTwoSurface_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SurfaceIntersectionCurve_GetCurveTwoSurface_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbSurface &_result = _underlying->GetCurveTwoSurface();

    this->_result = (MbSurface *)&(_result);

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_GetCurveTwoSurface_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbSurface *_result = this->_result;
    _to = Surface::NewInstance(env, (MbSurface *)&(_result));

    deferred.Resolve(_to);
}

void SurfaceIntersectionCurve_GetCurveTwoSurface_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                                     Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_GetPlaneCurve_AsyncWorker::SurfaceIntersectionCurve_GetPlaneCurve_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d, bool saveParams,
    PlanarCheckParams params)
    : _underlying(_underlying), PromiseWorker(d), saveParams(saveParams), params(params){};

void SurfaceIntersectionCurve_GetPlaneCurve_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCurve *curve2d = NULL;
    MbPlacement3D *placement = new MbPlacement3D;

    bool _result = _underlying->GetPlaneCurve(curve2d, *placement, saveParams, params);

    if (_result)
    {

        this->curve2d = curve2d;
        this->placement = placement;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation GetPlaneCurve failed";
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_GetPlaneCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    Napi::Object _toReturn = Napi::Object::New(env);

    MbCurve *curve2d = this->curve2d;
    if (curve2d != NULL)
    {
        _to = Curve::NewInstance(env, (MbCurve *)curve2d);
    }
    else
    {
        _to = env.Null();
    }

    _toReturn.Set(Napi::String::New(env, "curve2d"), _to);
    MbPlacement3D *placement = this->placement;
    if (placement != NULL)
    {
        _to = Placement3D::NewInstance(env, (MbPlacement3D *)placement);
    }
    else
    {
        _to = env.Null();
    }

    _toReturn.Set(Napi::String::New(env, "placement"), _to);

    deferred.Resolve(_toReturn);
}

void SurfaceIntersectionCurve_GetPlaneCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                                Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_IsPlanar_AsyncWorker::SurfaceIntersectionCurve_IsPlanar_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d, double accuracy)
    : _underlying(_underlying), PromiseWorker(d), accuracy(accuracy){};

void SurfaceIntersectionCurve_IsPlanar_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsPlanar(accuracy);

    this->_result = _result;

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_IsPlanar_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void SurfaceIntersectionCurve_IsPlanar_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                           Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_IsClosed_AsyncWorker::SurfaceIntersectionCurve_IsClosed_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SurfaceIntersectionCurve_IsClosed_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsClosed();

    this->_result = _result;

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_IsClosed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void SurfaceIntersectionCurve_IsClosed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                           Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_IsTouch_AsyncWorker::SurfaceIntersectionCurve_IsTouch_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SurfaceIntersectionCurve_IsTouch_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsTouch();

    this->_result = _result;

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_IsTouch_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void SurfaceIntersectionCurve_IsTouch_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                          Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_GetTMax_AsyncWorker::SurfaceIntersectionCurve_GetTMax_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SurfaceIntersectionCurve_GetTMax_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetTMax();

    this->_result = _result;

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_GetTMax_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void SurfaceIntersectionCurve_GetTMax_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                          Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_GetTMin_AsyncWorker::SurfaceIntersectionCurve_GetTMin_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SurfaceIntersectionCurve_GetTMin_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetTMin();

    this->_result = _result;

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_GetTMin_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void SurfaceIntersectionCurve_GetTMin_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                          Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_GetPeriod_AsyncWorker::SurfaceIntersectionCurve_GetPeriod_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SurfaceIntersectionCurve_GetPeriod_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetPeriod();

    this->_result = _result;

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_GetPeriod_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void SurfaceIntersectionCurve_GetPeriod_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                            Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_IsPeriodic_AsyncWorker::SurfaceIntersectionCurve_IsPeriodic_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SurfaceIntersectionCurve_IsPeriodic_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsPeriodic();

    this->_result = _result;

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_IsPeriodic_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void SurfaceIntersectionCurve_IsPeriodic_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                             Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_IsStraight_AsyncWorker::SurfaceIntersectionCurve_IsStraight_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d, bool ignoreParams)
    : _underlying(_underlying), PromiseWorker(d), ignoreParams(ignoreParams){};

void SurfaceIntersectionCurve_IsStraight_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsStraight(ignoreParams);

    this->_result = _result;

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_IsStraight_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void SurfaceIntersectionCurve_IsStraight_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                             Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_Trimmed_AsyncWorker::SurfaceIntersectionCurve_Trimmed_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d, double t1, double t2, int sense)
    : _underlying(_underlying), PromiseWorker(d), t1(t1), t2(t2), sense(sense){};

void SurfaceIntersectionCurve_Trimmed_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCurve3D *_result = _underlying->Trimmed(t1, t2, sense);

    this->_result = _result;

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_Trimmed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbCurve3D *_result = this->_result;
    if (_result != NULL)
    {
        _to = Curve3D::NewInstance(env, (MbCurve3D *)_result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void SurfaceIntersectionCurve_Trimmed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                          Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_Normal_AsyncWorker::SurfaceIntersectionCurve_Normal_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void SurfaceIntersectionCurve_Normal_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector3D *n = new MbVector3D;

    _underlying->Normal(t, *n);

    this->n = n;

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_Normal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbVector3D *n = this->n;
    if (n != NULL)
    {
        _to = Vector3D::NewInstance(env, (MbVector3D *)n);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void SurfaceIntersectionCurve_Normal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                         Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_Tangent_AsyncWorker::SurfaceIntersectionCurve_Tangent_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void SurfaceIntersectionCurve_Tangent_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector3D *tan = new MbVector3D;

    _underlying->Tangent(t, *tan);

    this->tan = tan;

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_Tangent_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbVector3D *tan = this->tan;
    if (tan != NULL)
    {
        _to = Vector3D::NewInstance(env, (MbVector3D *)tan);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void SurfaceIntersectionCurve_Tangent_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                          Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_BNormal_AsyncWorker::SurfaceIntersectionCurve_BNormal_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void SurfaceIntersectionCurve_BNormal_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector3D *b = new MbVector3D;

    _underlying->BNormal(t, *b);

    this->b = b;

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_BNormal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbVector3D *b = this->b;
    if (b != NULL)
    {
        _to = Vector3D::NewInstance(env, (MbVector3D *)b);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void SurfaceIntersectionCurve_BNormal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                          Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_GetCentre_AsyncWorker::SurfaceIntersectionCurve_GetCentre_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SurfaceIntersectionCurve_GetCentre_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint3D *c = new MbCartPoint3D;

    _underlying->GetCentre(*c);

    this->c = c;

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_GetCentre_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbCartPoint3D *c = this->c;
    if (c != NULL)
    {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)c);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void SurfaceIntersectionCurve_GetCentre_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                            Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_GetLimitPoint_AsyncWorker::SurfaceIntersectionCurve_GetLimitPoint_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d, ptrdiff_t number)
    : _underlying(_underlying), PromiseWorker(d), number(number){};

void SurfaceIntersectionCurve_GetLimitPoint_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint3D *point = new MbCartPoint3D;

    _underlying->GetLimitPoint(number, *point);

    this->point = point;

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_GetLimitPoint_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbCartPoint3D *point = this->point;
    if (point != NULL)
    {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)point);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void SurfaceIntersectionCurve_GetLimitPoint_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                                Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_PointOn_AsyncWorker::SurfaceIntersectionCurve_PointOn_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void SurfaceIntersectionCurve_PointOn_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint3D *p = new MbCartPoint3D;

    _underlying->PointOn(t, *p);

    this->p = p;

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_PointOn_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbCartPoint3D *p = this->p;
    if (p != NULL)
    {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)p);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void SurfaceIntersectionCurve_PointOn_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                          Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve__PointOn_AsyncWorker::SurfaceIntersectionCurve__PointOn_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void SurfaceIntersectionCurve__PointOn_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint3D *p = new MbCartPoint3D;

    _underlying->_PointOn(t, *p);

    this->p = p;

    ExitParallelRegion();
}

void SurfaceIntersectionCurve__PointOn_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbCartPoint3D *p = this->p;
    if (p != NULL)
    {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)p);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void SurfaceIntersectionCurve__PointOn_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                           Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_NearPointProjection_AsyncWorker::SurfaceIntersectionCurve_NearPointProjection_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d, const MbCartPoint3D &pnt, bool ext,
    MbRect1D *tRange)
    : _underlying(_underlying), PromiseWorker(d), pnt(pnt), ext(ext), tRange(tRange){};

void SurfaceIntersectionCurve_NearPointProjection_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double t;

    bool success = _underlying->NearPointProjection(pnt, t, ext, tRange);

    this->success = success;
    this->t = t;

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_NearPointProjection_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    Napi::Object _toReturn = Napi::Object::New(env);

    bool success = this->success;
    _to = Napi::Boolean::New(env, success);

    _toReturn.Set(Napi::String::New(env, "success"), _to);
    double t = this->t;
    _to = Napi::Number::New(env, t);

    _toReturn.Set(Napi::String::New(env, "t"), _to);

    deferred.Resolve(_toReturn);
}

void SurfaceIntersectionCurve_NearPointProjection_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                                      Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_GetSurfaceCurve_AsyncWorker::SurfaceIntersectionCurve_GetSurfaceCurve_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d, VERSION version)
    : _underlying(_underlying), PromiseWorker(d), version(version){};

void SurfaceIntersectionCurve_GetSurfaceCurve_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCurve *curve2d = NULL;
    MbSurface *surface = NULL;

    bool _result = _underlying->GetSurfaceCurve(curve2d, surface, version);

    if (_result)
    {

        this->curve2d = curve2d;
        this->surface = surface;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation GetSurfaceCurve failed";
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_GetSurfaceCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    Napi::Object _toReturn = Napi::Object::New(env);

    MbCurve *curve2d = this->curve2d;
    if (curve2d != NULL)
    {
        _to = Curve::NewInstance(env, (MbCurve *)curve2d);
    }
    else
    {
        _to = env.Null();
    }

    _toReturn.Set(Napi::String::New(env, "curve2d"), _to);
    MbSurface *surface = this->surface;
    if (surface != NULL)
    {
        _to = Surface::NewInstance(env, (MbSurface *)surface);
    }
    else
    {
        _to = env.Null();
    }

    _toReturn.Set(Napi::String::New(env, "surface"), _to);

    deferred.Resolve(_toReturn);
}

void SurfaceIntersectionCurve_GetSurfaceCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                                  Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_GetWeightCentre_AsyncWorker::SurfaceIntersectionCurve_GetWeightCentre_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SurfaceIntersectionCurve_GetWeightCentre_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint3D *point = new MbCartPoint3D;

    _underlying->GetWeightCentre(*point);

    this->point = point;

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_GetWeightCentre_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbCartPoint3D *point = this->point;
    if (point != NULL)
    {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)point);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void SurfaceIntersectionCurve_GetWeightCentre_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                                  Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_GetBasisCurve_AsyncWorker::SurfaceIntersectionCurve_GetBasisCurve_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SurfaceIntersectionCurve_GetBasisCurve_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbCurve3D &_result = _underlying->GetBasisCurve();

    this->_result = (MbCurve3D *)&(_result);

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_GetBasisCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbCurve3D *_result = this->_result;
    _to = Curve3D::NewInstance(env, (MbCurve3D *)&(_result));

    deferred.Resolve(_to);
}

void SurfaceIntersectionCurve_GetBasisCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                                Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_GetBasisPoints_AsyncWorker::SurfaceIntersectionCurve_GetBasisPoints_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SurfaceIntersectionCurve_GetBasisPoints_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbControlData3D *cd = new MbControlData3D;

    _underlying->GetBasisPoints(*cd);

    this->cd = cd;

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_GetBasisPoints_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbControlData3D *cd = this->cd;
    if (cd != NULL)
    {
        _to = ControlData3D::NewInstance(env, (MbControlData3D *)cd);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void SurfaceIntersectionCurve_GetBasisPoints_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                                 Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_SetBasisPoints_AsyncWorker::SurfaceIntersectionCurve_SetBasisPoints_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d, const MbControlData3D &cd)
    : _underlying(_underlying), PromiseWorker(d), cd(cd){};

void SurfaceIntersectionCurve_SetBasisPoints_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetBasisPoints(cd);

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_SetBasisPoints_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void SurfaceIntersectionCurve_SetBasisPoints_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                                 Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_Inverse_AsyncWorker::SurfaceIntersectionCurve_Inverse_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SurfaceIntersectionCurve_Inverse_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Inverse();

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_Inverse_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void SurfaceIntersectionCurve_Inverse_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                          Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_GetProjection_AsyncWorker::SurfaceIntersectionCurve_GetProjection_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d, const MbPlacement3D &place,
    VERSION version)
    : _underlying(_underlying), PromiseWorker(d), place(place), version(version){};

void SurfaceIntersectionCurve_GetProjection_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCurve *_result = _underlying->GetProjection(place, version);

    this->_result = _result;

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_GetProjection_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbCurve *_result = this->_result;
    if (_result != NULL)
    {
        _to = Curve::NewInstance(env, (MbCurve *)_result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void SurfaceIntersectionCurve_GetProjection_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                                Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_GetCircleAxis_AsyncWorker::SurfaceIntersectionCurve_GetCircleAxis_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SurfaceIntersectionCurve_GetCircleAxis_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbAxis3D *axis = new MbAxis3D;

    bool success = _underlying->GetCircleAxis(*axis);

    this->success = success;
    this->axis = axis;

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_GetCircleAxis_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    Napi::Object _toReturn = Napi::Object::New(env);

    bool success = this->success;
    _to = Napi::Boolean::New(env, success);

    _toReturn.Set(Napi::String::New(env, "success"), _to);
    MbAxis3D *axis = this->axis;
    if (axis != NULL)
    {
        _to = Axis3D::NewInstance(env, (MbAxis3D *)axis);
    }
    else
    {
        _to = env.Null();
    }

    _toReturn.Set(Napi::String::New(env, "axis"), _to);

    deferred.Resolve(_toReturn);
}

void SurfaceIntersectionCurve_GetCircleAxis_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                                Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_IsA_AsyncWorker::SurfaceIntersectionCurve_IsA_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SurfaceIntersectionCurve_IsA_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeSpaceType _result = _underlying->IsA();

    this->_result = _result;

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeSpaceType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void SurfaceIntersectionCurve_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_Type_AsyncWorker::SurfaceIntersectionCurve_Type_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SurfaceIntersectionCurve_Type_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeSpaceType _result = _underlying->Type();

    this->_result = _result;

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeSpaceType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void SurfaceIntersectionCurve_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                       Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_Family_AsyncWorker::SurfaceIntersectionCurve_Family_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SurfaceIntersectionCurve_Family_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeSpaceType _result = _underlying->Family();

    this->_result = _result;

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_Family_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeSpaceType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void SurfaceIntersectionCurve_Family_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                         Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_Transform_AsyncWorker::SurfaceIntersectionCurve_Transform_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d, const MbMatrix3D &mat,
    MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), mat(mat), iReg(iReg){};

void SurfaceIntersectionCurve_Transform_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Transform(mat, iReg);

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_Transform_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void SurfaceIntersectionCurve_Transform_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                            Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_Move_AsyncWorker::SurfaceIntersectionCurve_Move_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d, const MbVector3D &v,
    MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), v(v), iReg(iReg){};

void SurfaceIntersectionCurve_Move_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Move(v, iReg);

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_Move_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void SurfaceIntersectionCurve_Move_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                       Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_Rotate_AsyncWorker::SurfaceIntersectionCurve_Rotate_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d, const MbAxis3D &axis, double angle,
    MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), axis(axis), angle(angle), iReg(iReg){};

void SurfaceIntersectionCurve_Rotate_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Rotate(axis, angle, iReg);

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_Rotate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void SurfaceIntersectionCurve_Rotate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                         Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_Refresh_AsyncWorker::SurfaceIntersectionCurve_Refresh_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SurfaceIntersectionCurve_Refresh_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Refresh();

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_Refresh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void SurfaceIntersectionCurve_Refresh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                          Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_Duplicate_AsyncWorker::SurfaceIntersectionCurve_Duplicate_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d, MbRegDuplicate *iReg)
    : _underlying(_underlying), PromiseWorker(d), iReg(iReg){};

void SurfaceIntersectionCurve_Duplicate_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbSpaceItem &_result = _underlying->Duplicate(iReg);

    this->_result = (MbSpaceItem *)&(_result);

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_Duplicate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbSpaceItem *_result = this->_result;
    _to = SpaceItem::NewInstance(env, (MbSpaceItem *)&(_result));

    deferred.Resolve(_to);
}

void SurfaceIntersectionCurve_Duplicate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                            Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_AddYourGabaritTo_AsyncWorker::SurfaceIntersectionCurve_AddYourGabaritTo_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d, MbCube &cube)
    : _underlying(_underlying), PromiseWorker(d), cube(cube){};

void SurfaceIntersectionCurve_AddYourGabaritTo_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddYourGabaritTo(cube);

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_AddYourGabaritTo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void SurfaceIntersectionCurve_AddYourGabaritTo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                                   Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_GetUseCount_AsyncWorker::SurfaceIntersectionCurve_GetUseCount_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SurfaceIntersectionCurve_GetUseCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    refcount_t _result = _underlying->GetUseCount();

    this->_result = _result;

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    refcount_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void SurfaceIntersectionCurve_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                              Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SurfaceIntersectionCurve_AddRef_AsyncWorker::SurfaceIntersectionCurve_AddRef_AsyncWorker(
    MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SurfaceIntersectionCurve_AddRef_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddRef();

    ExitParallelRegion();
}

void SurfaceIntersectionCurve_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void SurfaceIntersectionCurve_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                         Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
