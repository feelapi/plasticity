// This is a generated file, modify: generate/templates/ConeSpiral.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/ConeSpiral.h"

#include "tool_mutex.h"

Napi::Object ConeSpiral::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func =
        DefineClass(env, "ConeSpiral",
                    {
                        InstanceMethod<&ConeSpiral::GetPlaneCurve>("GetPlaneCurve"),
                        InstanceMethod<&ConeSpiral::GetPlaneCurve_async>("GetPlaneCurve_async"),
                        InstanceMethod<&ConeSpiral::IsPlanar>("IsPlanar"),
                        InstanceMethod<&ConeSpiral::IsPlanar_async>("IsPlanar_async"),
                        InstanceMethod<&ConeSpiral::IsClosed>("IsClosed"),
                        InstanceMethod<&ConeSpiral::IsClosed_async>("IsClosed_async"),
                        InstanceMethod<&ConeSpiral::IsTouch>("IsTouch"),
                        InstanceMethod<&ConeSpiral::IsTouch_async>("IsTouch_async"),
                        InstanceMethod<&ConeSpiral::GetTMax>("GetTMax"),
                        InstanceMethod<&ConeSpiral::GetTMax_async>("GetTMax_async"),
                        InstanceMethod<&ConeSpiral::GetTMin>("GetTMin"),
                        InstanceMethod<&ConeSpiral::GetTMin_async>("GetTMin_async"),
                        InstanceMethod<&ConeSpiral::GetPeriod>("GetPeriod"),
                        InstanceMethod<&ConeSpiral::GetPeriod_async>("GetPeriod_async"),
                        InstanceMethod<&ConeSpiral::IsPeriodic>("IsPeriodic"),
                        InstanceMethod<&ConeSpiral::IsPeriodic_async>("IsPeriodic_async"),
                        InstanceMethod<&ConeSpiral::IsStraight>("IsStraight"),
                        InstanceMethod<&ConeSpiral::IsStraight_async>("IsStraight_async"),
                        InstanceMethod<&ConeSpiral::Trimmed>("Trimmed"),
                        InstanceMethod<&ConeSpiral::Trimmed_async>("Trimmed_async"),
                        InstanceMethod<&ConeSpiral::Normal>("Normal"),
                        InstanceMethod<&ConeSpiral::Normal_async>("Normal_async"),
                        InstanceMethod<&ConeSpiral::Tangent>("Tangent"),
                        InstanceMethod<&ConeSpiral::Tangent_async>("Tangent_async"),
                        InstanceMethod<&ConeSpiral::BNormal>("BNormal"),
                        InstanceMethod<&ConeSpiral::BNormal_async>("BNormal_async"),
                        InstanceMethod<&ConeSpiral::GetCentre>("GetCentre"),
                        InstanceMethod<&ConeSpiral::GetCentre_async>("GetCentre_async"),
                        InstanceMethod<&ConeSpiral::GetLimitPoint>("GetLimitPoint"),
                        InstanceMethod<&ConeSpiral::GetLimitPoint_async>("GetLimitPoint_async"),
                        InstanceMethod<&ConeSpiral::PointOn>("PointOn"),
                        InstanceMethod<&ConeSpiral::PointOn_async>("PointOn_async"),
                        InstanceMethod<&ConeSpiral::_PointOn>("_PointOn"),
                        InstanceMethod<&ConeSpiral::_PointOn_async>("_PointOn_async"),
                        InstanceMethod<&ConeSpiral::NearPointProjection>("NearPointProjection"),
                        InstanceMethod<&ConeSpiral::NearPointProjection_async>("NearPointProjection_async"),
                        InstanceMethod<&ConeSpiral::GetSurfaceCurve>("GetSurfaceCurve"),
                        InstanceMethod<&ConeSpiral::GetSurfaceCurve_async>("GetSurfaceCurve_async"),
                        InstanceMethod<&ConeSpiral::GetWeightCentre>("GetWeightCentre"),
                        InstanceMethod<&ConeSpiral::GetWeightCentre_async>("GetWeightCentre_async"),
                        InstanceMethod<&ConeSpiral::GetBasisCurve>("GetBasisCurve"),
                        InstanceMethod<&ConeSpiral::GetBasisCurve_async>("GetBasisCurve_async"),
                        InstanceMethod<&ConeSpiral::GetBasisPoints>("GetBasisPoints"),
                        InstanceMethod<&ConeSpiral::GetBasisPoints_async>("GetBasisPoints_async"),
                        InstanceMethod<&ConeSpiral::SetBasisPoints>("SetBasisPoints"),
                        InstanceMethod<&ConeSpiral::SetBasisPoints_async>("SetBasisPoints_async"),
                        InstanceMethod<&ConeSpiral::Inverse>("Inverse"),
                        InstanceMethod<&ConeSpiral::Inverse_async>("Inverse_async"),
                        InstanceMethod<&ConeSpiral::GetProjection>("GetProjection"),
                        InstanceMethod<&ConeSpiral::GetProjection_async>("GetProjection_async"),
                        InstanceMethod<&ConeSpiral::GetCircleAxis>("GetCircleAxis"),
                        InstanceMethod<&ConeSpiral::GetCircleAxis_async>("GetCircleAxis_async"),
                        InstanceMethod<&ConeSpiral::IsA>("IsA"),
                        InstanceMethod<&ConeSpiral::IsA_async>("IsA_async"),
                        InstanceMethod<&ConeSpiral::Type>("Type"),
                        InstanceMethod<&ConeSpiral::Type_async>("Type_async"),
                        InstanceMethod<&ConeSpiral::Family>("Family"),
                        InstanceMethod<&ConeSpiral::Family_async>("Family_async"),
                        InstanceMethod<&ConeSpiral::Transform>("Transform"),
                        InstanceMethod<&ConeSpiral::Transform_async>("Transform_async"),
                        InstanceMethod<&ConeSpiral::Move>("Move"),
                        InstanceMethod<&ConeSpiral::Move_async>("Move_async"),
                        InstanceMethod<&ConeSpiral::Rotate>("Rotate"),
                        InstanceMethod<&ConeSpiral::Rotate_async>("Rotate_async"),
                        InstanceMethod<&ConeSpiral::Refresh>("Refresh"),
                        InstanceMethod<&ConeSpiral::Refresh_async>("Refresh_async"),
                        InstanceMethod<&ConeSpiral::Duplicate>("Duplicate"),
                        InstanceMethod<&ConeSpiral::Duplicate_async>("Duplicate_async"),
                        InstanceMethod<&ConeSpiral::AddYourGabaritTo>("AddYourGabaritTo"),
                        InstanceMethod<&ConeSpiral::AddYourGabaritTo_async>("AddYourGabaritTo_async"),
                        InstanceMethod<&ConeSpiral::GetUseCount>("GetUseCount"),
                        InstanceMethod<&ConeSpiral::GetUseCount_async>("GetUseCount_async"),
                        InstanceMethod<&ConeSpiral::AddRef>("AddRef"),
                        InstanceMethod<&ConeSpiral::AddRef_async>("AddRef_async"),
                        InstanceMethod<&ConeSpiral::Id>("Id"),

                    });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("ConeSpiral", func);

    Napi::Object global = env.Global();
    Napi::Object Object = global.Get("Object").ToObject();
    Napi::Function setPrototypeOf = Napi::Function(env, Object.Get("setPrototypeOf"));
    Napi::Value prototype = func.Get("prototype");

    Napi::Function superFunc = Spiral::GetConstructor(env);
    Napi::FunctionReference *superConstructor = new Napi::FunctionReference();
    *superConstructor = Napi::Persistent(superFunc);

    Napi::Value superPrototype = superFunc.Get("prototype");
    setPrototypeOf.Call({prototype, superPrototype});
    setPrototypeOf.Call({func, superFunc});

    return exports;
}

ConeSpiral::ConeSpiral(const Napi::CallbackInfo &info) : Napi::ObjectWrap<ConeSpiral>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    Napi::Error::New(env, "ConeSpiral cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object ConeSpiral::NewInstance(Napi::Env env, MbConeSpiral *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("ConeSpiral");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    ConeSpiral *unwrapped = ConeSpiral::Unwrap(inst);
    underlying->AddRef();
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function ConeSpiral::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("ConeSpiral");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value ConeSpiral::GetPlaneCurve(const Napi::CallbackInfo &info)
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

Napi::Value ConeSpiral::GetPlaneCurve_async(const Napi::CallbackInfo &info)
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

    ConeSpiral_GetPlaneCurve_AsyncWorker *asyncWorker = new ConeSpiral_GetPlaneCurve_AsyncWorker(_underlying, deferred,

                                                                                                 saveParams,

                                                                                                 params);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ConeSpiral::IsPlanar(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double accuracy = info[0].ToNumber().DoubleValue();

    bool _result = _underlying->IsPlanar(info.Length() == 0 || info[0].IsNull() ? METRIC_EPSILON : accuracy

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value ConeSpiral::IsPlanar_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    double accuracy = info[0].ToNumber().DoubleValue();

    ConeSpiral_IsPlanar_AsyncWorker *asyncWorker = new ConeSpiral_IsPlanar_AsyncWorker(_underlying, deferred,

                                                                                       accuracy);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ConeSpiral::IsClosed(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool _result = _underlying->IsClosed(

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value ConeSpiral::IsClosed_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ConeSpiral_IsClosed_AsyncWorker *asyncWorker = new ConeSpiral_IsClosed_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ConeSpiral::IsTouch(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool _result = _underlying->IsTouch(

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value ConeSpiral::IsTouch_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ConeSpiral_IsTouch_AsyncWorker *asyncWorker = new ConeSpiral_IsTouch_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ConeSpiral::GetTMax(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetTMax(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ConeSpiral::GetTMax_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ConeSpiral_GetTMax_AsyncWorker *asyncWorker = new ConeSpiral_GetTMax_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ConeSpiral::GetTMin(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetTMin(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ConeSpiral::GetTMin_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ConeSpiral_GetTMin_AsyncWorker *asyncWorker = new ConeSpiral_GetTMin_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ConeSpiral::GetPeriod(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetPeriod(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ConeSpiral::GetPeriod_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ConeSpiral_GetPeriod_AsyncWorker *asyncWorker = new ConeSpiral_GetPeriod_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ConeSpiral::IsPeriodic(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool _result = _underlying->IsPeriodic(

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value ConeSpiral::IsPeriodic_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ConeSpiral_IsPeriodic_AsyncWorker *asyncWorker = new ConeSpiral_IsPeriodic_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ConeSpiral::IsStraight(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool ignoreParams = info[0].ToBoolean();

    bool _result = _underlying->IsStraight(info.Length() == 0 || info[0].IsNull() ? false : ignoreParams

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value ConeSpiral::IsStraight_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    bool ignoreParams = info[0].ToBoolean();

    ConeSpiral_IsStraight_AsyncWorker *asyncWorker = new ConeSpiral_IsStraight_AsyncWorker(_underlying, deferred,

                                                                                           ignoreParams);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ConeSpiral::Trimmed(const Napi::CallbackInfo &info)
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

Napi::Value ConeSpiral::Trimmed_async(const Napi::CallbackInfo &info)
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

    ConeSpiral_Trimmed_AsyncWorker *asyncWorker = new ConeSpiral_Trimmed_AsyncWorker(_underlying, deferred,

                                                                                     t1,

                                                                                     t2,

                                                                                     sense);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ConeSpiral::Normal(const Napi::CallbackInfo &info)
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

Napi::Value ConeSpiral::Normal_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    ConeSpiral_Normal_AsyncWorker *asyncWorker = new ConeSpiral_Normal_AsyncWorker(_underlying, deferred,

                                                                                   t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ConeSpiral::Tangent(const Napi::CallbackInfo &info)
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

Napi::Value ConeSpiral::Tangent_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    ConeSpiral_Tangent_AsyncWorker *asyncWorker = new ConeSpiral_Tangent_AsyncWorker(_underlying, deferred,

                                                                                     t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ConeSpiral::BNormal(const Napi::CallbackInfo &info)
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

Napi::Value ConeSpiral::BNormal_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    ConeSpiral_BNormal_AsyncWorker *asyncWorker = new ConeSpiral_BNormal_AsyncWorker(_underlying, deferred,

                                                                                     t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ConeSpiral::GetCentre(const Napi::CallbackInfo &info)
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

Napi::Value ConeSpiral::GetCentre_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ConeSpiral_GetCentre_AsyncWorker *asyncWorker = new ConeSpiral_GetCentre_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ConeSpiral::GetLimitPoint(const Napi::CallbackInfo &info)
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

Napi::Value ConeSpiral::GetLimitPoint_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "ptrdiff_t number is required."));
        return deferred.Promise();
    }

    int number = info[0].ToNumber().Int64Value();

    ConeSpiral_GetLimitPoint_AsyncWorker *asyncWorker = new ConeSpiral_GetLimitPoint_AsyncWorker(_underlying, deferred,

                                                                                                 number);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ConeSpiral::PointOn(const Napi::CallbackInfo &info)
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

Napi::Value ConeSpiral::PointOn_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    ConeSpiral_PointOn_AsyncWorker *asyncWorker = new ConeSpiral_PointOn_AsyncWorker(_underlying, deferred,

                                                                                     t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ConeSpiral::_PointOn(const Napi::CallbackInfo &info)
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

Napi::Value ConeSpiral::_PointOn_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    ConeSpiral__PointOn_AsyncWorker *asyncWorker = new ConeSpiral__PointOn_AsyncWorker(_underlying, deferred,

                                                                                       t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ConeSpiral::NearPointProjection(const Napi::CallbackInfo &info)
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

Napi::Value ConeSpiral::NearPointProjection_async(const Napi::CallbackInfo &info)
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

    ConeSpiral_NearPointProjection_AsyncWorker *asyncWorker =
        new ConeSpiral_NearPointProjection_AsyncWorker(_underlying, deferred,

                                                       pnt,

                                                       ext,

                                                       tRange);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ConeSpiral::GetSurfaceCurve(const Napi::CallbackInfo &info)
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

Napi::Value ConeSpiral::GetSurfaceCurve_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    int version = info[0].ToNumber().Int64Value();

    ConeSpiral_GetSurfaceCurve_AsyncWorker *asyncWorker =
        new ConeSpiral_GetSurfaceCurve_AsyncWorker(_underlying, deferred,

                                                   version);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ConeSpiral::GetWeightCentre(const Napi::CallbackInfo &info)
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

Napi::Value ConeSpiral::GetWeightCentre_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ConeSpiral_GetWeightCentre_AsyncWorker *asyncWorker =
        new ConeSpiral_GetWeightCentre_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ConeSpiral::GetBasisCurve(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbCurve3D &_result = _underlying->GetBasisCurve(

    );

    Napi::Value _to;

    _to = Curve3D::NewInstance(env, (MbCurve3D *)&(_result));

    return _to;
}

Napi::Value ConeSpiral::GetBasisCurve_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ConeSpiral_GetBasisCurve_AsyncWorker *asyncWorker = new ConeSpiral_GetBasisCurve_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ConeSpiral::GetBasisPoints(const Napi::CallbackInfo &info)
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

Napi::Value ConeSpiral::GetBasisPoints_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ConeSpiral_GetBasisPoints_AsyncWorker *asyncWorker =
        new ConeSpiral_GetBasisPoints_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ConeSpiral::SetBasisPoints(const Napi::CallbackInfo &info)
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

Napi::Value ConeSpiral::SetBasisPoints_async(const Napi::CallbackInfo &info)
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

    ConeSpiral_SetBasisPoints_AsyncWorker *asyncWorker =
        new ConeSpiral_SetBasisPoints_AsyncWorker(_underlying, deferred,

                                                  cd);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ConeSpiral::Inverse(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->Inverse(

    );

    return env.Undefined();
}

Napi::Value ConeSpiral::Inverse_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ConeSpiral_Inverse_AsyncWorker *asyncWorker = new ConeSpiral_Inverse_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ConeSpiral::GetProjection(const Napi::CallbackInfo &info)
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

Napi::Value ConeSpiral::GetProjection_async(const Napi::CallbackInfo &info)
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

    ConeSpiral_GetProjection_AsyncWorker *asyncWorker = new ConeSpiral_GetProjection_AsyncWorker(_underlying, deferred,

                                                                                                 place,

                                                                                                 version);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ConeSpiral::GetCircleAxis(const Napi::CallbackInfo &info)
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

Napi::Value ConeSpiral::GetCircleAxis_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ConeSpiral_GetCircleAxis_AsyncWorker *asyncWorker = new ConeSpiral_GetCircleAxis_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ConeSpiral::IsA(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeSpaceType _result = _underlying->IsA(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ConeSpiral::IsA_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ConeSpiral_IsA_AsyncWorker *asyncWorker = new ConeSpiral_IsA_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ConeSpiral::Type(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeSpaceType _result = _underlying->Type(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ConeSpiral::Type_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ConeSpiral_Type_AsyncWorker *asyncWorker = new ConeSpiral_Type_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ConeSpiral::Family(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeSpaceType _result = _underlying->Family(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ConeSpiral::Family_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ConeSpiral_Family_AsyncWorker *asyncWorker = new ConeSpiral_Family_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ConeSpiral::Transform(const Napi::CallbackInfo &info)
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

Napi::Value ConeSpiral::Transform_async(const Napi::CallbackInfo &info)
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

    ConeSpiral_Transform_AsyncWorker *asyncWorker = new ConeSpiral_Transform_AsyncWorker(_underlying, deferred,

                                                                                         mat,

                                                                                         iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ConeSpiral::Move(const Napi::CallbackInfo &info)
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

Napi::Value ConeSpiral::Move_async(const Napi::CallbackInfo &info)
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

    ConeSpiral_Move_AsyncWorker *asyncWorker = new ConeSpiral_Move_AsyncWorker(_underlying, deferred,

                                                                               v,

                                                                               iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ConeSpiral::Rotate(const Napi::CallbackInfo &info)
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

Napi::Value ConeSpiral::Rotate_async(const Napi::CallbackInfo &info)
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

    ConeSpiral_Rotate_AsyncWorker *asyncWorker = new ConeSpiral_Rotate_AsyncWorker(_underlying, deferred,

                                                                                   axis,

                                                                                   angle,

                                                                                   iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ConeSpiral::Refresh(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->Refresh(

    );

    return env.Undefined();
}

Napi::Value ConeSpiral::Refresh_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ConeSpiral_Refresh_AsyncWorker *asyncWorker = new ConeSpiral_Refresh_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ConeSpiral::Duplicate(const Napi::CallbackInfo &info)
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

Napi::Value ConeSpiral::Duplicate_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    MbRegDuplicate *iReg = NULL;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        RegDuplicate *iReg_ = RegDuplicate::Unwrap(info[0].ToObject());
        iReg = iReg_->_underlying;
    }

    ConeSpiral_Duplicate_AsyncWorker *asyncWorker = new ConeSpiral_Duplicate_AsyncWorker(_underlying, deferred,

                                                                                         iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ConeSpiral::AddYourGabaritTo(const Napi::CallbackInfo &info)
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

Napi::Value ConeSpiral::AddYourGabaritTo_async(const Napi::CallbackInfo &info)
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

    ConeSpiral_AddYourGabaritTo_AsyncWorker *asyncWorker =
        new ConeSpiral_AddYourGabaritTo_AsyncWorker(_underlying, deferred,

                                                    cube);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ConeSpiral::GetUseCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    refcount_t _result = _underlying->GetUseCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ConeSpiral::GetUseCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ConeSpiral_GetUseCount_AsyncWorker *asyncWorker = new ConeSpiral_GetUseCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ConeSpiral::AddRef(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->AddRef(

    );

    return env.Undefined();
}

Napi::Value ConeSpiral::AddRef_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ConeSpiral_AddRef_AsyncWorker *asyncWorker = new ConeSpiral_AddRef_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value ConeSpiral::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

ConeSpiral::~ConeSpiral()
{
    // std::cout << "calling ::DeleteItem on ConeSpiral for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

ConeSpiral_GetPlaneCurve_AsyncWorker::ConeSpiral_GetPlaneCurve_AsyncWorker(MbConeSpiral *_underlying,
                                                                           Napi::Promise::Deferred const &d,
                                                                           bool saveParams, PlanarCheckParams params)
    : _underlying(_underlying), PromiseWorker(d), saveParams(saveParams), params(params){};

void ConeSpiral_GetPlaneCurve_AsyncWorker::Execute()
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

void ConeSpiral_GetPlaneCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ConeSpiral_GetPlaneCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ConeSpiral_IsPlanar_AsyncWorker::ConeSpiral_IsPlanar_AsyncWorker(MbConeSpiral *_underlying,
                                                                 Napi::Promise::Deferred const &d, double accuracy)
    : _underlying(_underlying), PromiseWorker(d), accuracy(accuracy){};

void ConeSpiral_IsPlanar_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsPlanar(accuracy);

    this->_result = _result;

    ExitParallelRegion();
}

void ConeSpiral_IsPlanar_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void ConeSpiral_IsPlanar_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ConeSpiral_IsClosed_AsyncWorker::ConeSpiral_IsClosed_AsyncWorker(MbConeSpiral *_underlying,
                                                                 Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ConeSpiral_IsClosed_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsClosed();

    this->_result = _result;

    ExitParallelRegion();
}

void ConeSpiral_IsClosed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void ConeSpiral_IsClosed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ConeSpiral_IsTouch_AsyncWorker::ConeSpiral_IsTouch_AsyncWorker(MbConeSpiral *_underlying,
                                                               Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ConeSpiral_IsTouch_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsTouch();

    this->_result = _result;

    ExitParallelRegion();
}

void ConeSpiral_IsTouch_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void ConeSpiral_IsTouch_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ConeSpiral_GetTMax_AsyncWorker::ConeSpiral_GetTMax_AsyncWorker(MbConeSpiral *_underlying,
                                                               Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ConeSpiral_GetTMax_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetTMax();

    this->_result = _result;

    ExitParallelRegion();
}

void ConeSpiral_GetTMax_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ConeSpiral_GetTMax_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ConeSpiral_GetTMin_AsyncWorker::ConeSpiral_GetTMin_AsyncWorker(MbConeSpiral *_underlying,
                                                               Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ConeSpiral_GetTMin_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetTMin();

    this->_result = _result;

    ExitParallelRegion();
}

void ConeSpiral_GetTMin_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ConeSpiral_GetTMin_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ConeSpiral_GetPeriod_AsyncWorker::ConeSpiral_GetPeriod_AsyncWorker(MbConeSpiral *_underlying,
                                                                   Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ConeSpiral_GetPeriod_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetPeriod();

    this->_result = _result;

    ExitParallelRegion();
}

void ConeSpiral_GetPeriod_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ConeSpiral_GetPeriod_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ConeSpiral_IsPeriodic_AsyncWorker::ConeSpiral_IsPeriodic_AsyncWorker(MbConeSpiral *_underlying,
                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ConeSpiral_IsPeriodic_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsPeriodic();

    this->_result = _result;

    ExitParallelRegion();
}

void ConeSpiral_IsPeriodic_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void ConeSpiral_IsPeriodic_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ConeSpiral_IsStraight_AsyncWorker::ConeSpiral_IsStraight_AsyncWorker(MbConeSpiral *_underlying,
                                                                     Napi::Promise::Deferred const &d,
                                                                     bool ignoreParams)
    : _underlying(_underlying), PromiseWorker(d), ignoreParams(ignoreParams){};

void ConeSpiral_IsStraight_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsStraight(ignoreParams);

    this->_result = _result;

    ExitParallelRegion();
}

void ConeSpiral_IsStraight_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void ConeSpiral_IsStraight_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ConeSpiral_Trimmed_AsyncWorker::ConeSpiral_Trimmed_AsyncWorker(MbConeSpiral *_underlying,
                                                               Napi::Promise::Deferred const &d, double t1, double t2,
                                                               int sense)
    : _underlying(_underlying), PromiseWorker(d), t1(t1), t2(t2), sense(sense){};

void ConeSpiral_Trimmed_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCurve3D *_result = _underlying->Trimmed(t1, t2, sense);

    this->_result = _result;

    ExitParallelRegion();
}

void ConeSpiral_Trimmed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ConeSpiral_Trimmed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ConeSpiral_Normal_AsyncWorker::ConeSpiral_Normal_AsyncWorker(MbConeSpiral *_underlying,
                                                             Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void ConeSpiral_Normal_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector3D *n = new MbVector3D;

    _underlying->Normal(t, *n);

    this->n = n;

    ExitParallelRegion();
}

void ConeSpiral_Normal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ConeSpiral_Normal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ConeSpiral_Tangent_AsyncWorker::ConeSpiral_Tangent_AsyncWorker(MbConeSpiral *_underlying,
                                                               Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void ConeSpiral_Tangent_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector3D *tan = new MbVector3D;

    _underlying->Tangent(t, *tan);

    this->tan = tan;

    ExitParallelRegion();
}

void ConeSpiral_Tangent_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ConeSpiral_Tangent_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ConeSpiral_BNormal_AsyncWorker::ConeSpiral_BNormal_AsyncWorker(MbConeSpiral *_underlying,
                                                               Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void ConeSpiral_BNormal_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector3D *b = new MbVector3D;

    _underlying->BNormal(t, *b);

    this->b = b;

    ExitParallelRegion();
}

void ConeSpiral_BNormal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ConeSpiral_BNormal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ConeSpiral_GetCentre_AsyncWorker::ConeSpiral_GetCentre_AsyncWorker(MbConeSpiral *_underlying,
                                                                   Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ConeSpiral_GetCentre_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint3D *c = new MbCartPoint3D;

    _underlying->GetCentre(*c);

    this->c = c;

    ExitParallelRegion();
}

void ConeSpiral_GetCentre_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ConeSpiral_GetCentre_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ConeSpiral_GetLimitPoint_AsyncWorker::ConeSpiral_GetLimitPoint_AsyncWorker(MbConeSpiral *_underlying,
                                                                           Napi::Promise::Deferred const &d,
                                                                           ptrdiff_t number)
    : _underlying(_underlying), PromiseWorker(d), number(number){};

void ConeSpiral_GetLimitPoint_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint3D *point = new MbCartPoint3D;

    _underlying->GetLimitPoint(number, *point);

    this->point = point;

    ExitParallelRegion();
}

void ConeSpiral_GetLimitPoint_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ConeSpiral_GetLimitPoint_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ConeSpiral_PointOn_AsyncWorker::ConeSpiral_PointOn_AsyncWorker(MbConeSpiral *_underlying,
                                                               Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void ConeSpiral_PointOn_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint3D *p = new MbCartPoint3D;

    _underlying->PointOn(t, *p);

    this->p = p;

    ExitParallelRegion();
}

void ConeSpiral_PointOn_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ConeSpiral_PointOn_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ConeSpiral__PointOn_AsyncWorker::ConeSpiral__PointOn_AsyncWorker(MbConeSpiral *_underlying,
                                                                 Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void ConeSpiral__PointOn_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint3D *p = new MbCartPoint3D;

    _underlying->_PointOn(t, *p);

    this->p = p;

    ExitParallelRegion();
}

void ConeSpiral__PointOn_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ConeSpiral__PointOn_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ConeSpiral_NearPointProjection_AsyncWorker::ConeSpiral_NearPointProjection_AsyncWorker(MbConeSpiral *_underlying,
                                                                                       Napi::Promise::Deferred const &d,
                                                                                       const MbCartPoint3D &pnt,
                                                                                       bool ext, MbRect1D *tRange)
    : _underlying(_underlying), PromiseWorker(d), pnt(pnt), ext(ext), tRange(tRange){};

void ConeSpiral_NearPointProjection_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double t;

    bool success = _underlying->NearPointProjection(pnt, t, ext, tRange);

    this->success = success;
    this->t = t;

    ExitParallelRegion();
}

void ConeSpiral_NearPointProjection_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ConeSpiral_NearPointProjection_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                        Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ConeSpiral_GetSurfaceCurve_AsyncWorker::ConeSpiral_GetSurfaceCurve_AsyncWorker(MbConeSpiral *_underlying,
                                                                               Napi::Promise::Deferred const &d,
                                                                               VERSION version)
    : _underlying(_underlying), PromiseWorker(d), version(version){};

void ConeSpiral_GetSurfaceCurve_AsyncWorker::Execute()
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

void ConeSpiral_GetSurfaceCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ConeSpiral_GetSurfaceCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ConeSpiral_GetWeightCentre_AsyncWorker::ConeSpiral_GetWeightCentre_AsyncWorker(MbConeSpiral *_underlying,
                                                                               Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ConeSpiral_GetWeightCentre_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint3D *point = new MbCartPoint3D;

    _underlying->GetWeightCentre(*point);

    this->point = point;

    ExitParallelRegion();
}

void ConeSpiral_GetWeightCentre_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ConeSpiral_GetWeightCentre_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ConeSpiral_GetBasisCurve_AsyncWorker::ConeSpiral_GetBasisCurve_AsyncWorker(MbConeSpiral *_underlying,
                                                                           Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ConeSpiral_GetBasisCurve_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbCurve3D &_result = _underlying->GetBasisCurve();

    this->_result = (MbCurve3D *)&(_result);

    ExitParallelRegion();
}

void ConeSpiral_GetBasisCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbCurve3D *_result = this->_result;
    _to = Curve3D::NewInstance(env, (MbCurve3D *)&(_result));

    deferred.Resolve(_to);
}

void ConeSpiral_GetBasisCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ConeSpiral_GetBasisPoints_AsyncWorker::ConeSpiral_GetBasisPoints_AsyncWorker(MbConeSpiral *_underlying,
                                                                             Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ConeSpiral_GetBasisPoints_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbControlData3D *cd = new MbControlData3D;

    _underlying->GetBasisPoints(*cd);

    this->cd = cd;

    ExitParallelRegion();
}

void ConeSpiral_GetBasisPoints_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ConeSpiral_GetBasisPoints_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ConeSpiral_SetBasisPoints_AsyncWorker::ConeSpiral_SetBasisPoints_AsyncWorker(MbConeSpiral *_underlying,
                                                                             Napi::Promise::Deferred const &d,
                                                                             const MbControlData3D &cd)
    : _underlying(_underlying), PromiseWorker(d), cd(cd){};

void ConeSpiral_SetBasisPoints_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetBasisPoints(cd);

    ExitParallelRegion();
}

void ConeSpiral_SetBasisPoints_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void ConeSpiral_SetBasisPoints_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ConeSpiral_Inverse_AsyncWorker::ConeSpiral_Inverse_AsyncWorker(MbConeSpiral *_underlying,
                                                               Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ConeSpiral_Inverse_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Inverse();

    ExitParallelRegion();
}

void ConeSpiral_Inverse_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void ConeSpiral_Inverse_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ConeSpiral_GetProjection_AsyncWorker::ConeSpiral_GetProjection_AsyncWorker(MbConeSpiral *_underlying,
                                                                           Napi::Promise::Deferred const &d,
                                                                           const MbPlacement3D &place, VERSION version)
    : _underlying(_underlying), PromiseWorker(d), place(place), version(version){};

void ConeSpiral_GetProjection_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCurve *_result = _underlying->GetProjection(place, version);

    this->_result = _result;

    ExitParallelRegion();
}

void ConeSpiral_GetProjection_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ConeSpiral_GetProjection_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ConeSpiral_GetCircleAxis_AsyncWorker::ConeSpiral_GetCircleAxis_AsyncWorker(MbConeSpiral *_underlying,
                                                                           Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ConeSpiral_GetCircleAxis_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbAxis3D *axis = new MbAxis3D;

    bool success = _underlying->GetCircleAxis(*axis);

    this->success = success;
    this->axis = axis;

    ExitParallelRegion();
}

void ConeSpiral_GetCircleAxis_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ConeSpiral_GetCircleAxis_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ConeSpiral_IsA_AsyncWorker::ConeSpiral_IsA_AsyncWorker(MbConeSpiral *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ConeSpiral_IsA_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeSpaceType _result = _underlying->IsA();

    this->_result = _result;

    ExitParallelRegion();
}

void ConeSpiral_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeSpaceType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ConeSpiral_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ConeSpiral_Type_AsyncWorker::ConeSpiral_Type_AsyncWorker(MbConeSpiral *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ConeSpiral_Type_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeSpaceType _result = _underlying->Type();

    this->_result = _result;

    ExitParallelRegion();
}

void ConeSpiral_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeSpaceType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ConeSpiral_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ConeSpiral_Family_AsyncWorker::ConeSpiral_Family_AsyncWorker(MbConeSpiral *_underlying,
                                                             Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ConeSpiral_Family_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeSpaceType _result = _underlying->Family();

    this->_result = _result;

    ExitParallelRegion();
}

void ConeSpiral_Family_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeSpaceType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ConeSpiral_Family_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ConeSpiral_Transform_AsyncWorker::ConeSpiral_Transform_AsyncWorker(MbConeSpiral *_underlying,
                                                                   Napi::Promise::Deferred const &d,
                                                                   const MbMatrix3D &mat, MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), mat(mat), iReg(iReg){};

void ConeSpiral_Transform_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Transform(mat, iReg);

    ExitParallelRegion();
}

void ConeSpiral_Transform_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void ConeSpiral_Transform_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ConeSpiral_Move_AsyncWorker::ConeSpiral_Move_AsyncWorker(MbConeSpiral *_underlying, Napi::Promise::Deferred const &d,
                                                         const MbVector3D &v, MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), v(v), iReg(iReg){};

void ConeSpiral_Move_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Move(v, iReg);

    ExitParallelRegion();
}

void ConeSpiral_Move_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void ConeSpiral_Move_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ConeSpiral_Rotate_AsyncWorker::ConeSpiral_Rotate_AsyncWorker(MbConeSpiral *_underlying,
                                                             Napi::Promise::Deferred const &d, const MbAxis3D &axis,
                                                             double angle, MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), axis(axis), angle(angle), iReg(iReg){};

void ConeSpiral_Rotate_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Rotate(axis, angle, iReg);

    ExitParallelRegion();
}

void ConeSpiral_Rotate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void ConeSpiral_Rotate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ConeSpiral_Refresh_AsyncWorker::ConeSpiral_Refresh_AsyncWorker(MbConeSpiral *_underlying,
                                                               Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ConeSpiral_Refresh_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Refresh();

    ExitParallelRegion();
}

void ConeSpiral_Refresh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void ConeSpiral_Refresh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ConeSpiral_Duplicate_AsyncWorker::ConeSpiral_Duplicate_AsyncWorker(MbConeSpiral *_underlying,
                                                                   Napi::Promise::Deferred const &d,
                                                                   MbRegDuplicate *iReg)
    : _underlying(_underlying), PromiseWorker(d), iReg(iReg){};

void ConeSpiral_Duplicate_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbSpaceItem &_result = _underlying->Duplicate(iReg);

    this->_result = (MbSpaceItem *)&(_result);

    ExitParallelRegion();
}

void ConeSpiral_Duplicate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbSpaceItem *_result = this->_result;
    _to = SpaceItem::NewInstance(env, (MbSpaceItem *)&(_result));

    deferred.Resolve(_to);
}

void ConeSpiral_Duplicate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ConeSpiral_AddYourGabaritTo_AsyncWorker::ConeSpiral_AddYourGabaritTo_AsyncWorker(MbConeSpiral *_underlying,
                                                                                 Napi::Promise::Deferred const &d,
                                                                                 MbCube &cube)
    : _underlying(_underlying), PromiseWorker(d), cube(cube){};

void ConeSpiral_AddYourGabaritTo_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddYourGabaritTo(cube);

    ExitParallelRegion();
}

void ConeSpiral_AddYourGabaritTo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void ConeSpiral_AddYourGabaritTo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ConeSpiral_GetUseCount_AsyncWorker::ConeSpiral_GetUseCount_AsyncWorker(MbConeSpiral *_underlying,
                                                                       Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ConeSpiral_GetUseCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    refcount_t _result = _underlying->GetUseCount();

    this->_result = _result;

    ExitParallelRegion();
}

void ConeSpiral_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    refcount_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ConeSpiral_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ConeSpiral_AddRef_AsyncWorker::ConeSpiral_AddRef_AsyncWorker(MbConeSpiral *_underlying,
                                                             Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ConeSpiral_AddRef_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddRef();

    ExitParallelRegion();
}

void ConeSpiral_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void ConeSpiral_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
