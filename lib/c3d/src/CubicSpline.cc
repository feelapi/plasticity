// This is a generated file, modify: generate/templates/CubicSpline.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/CubicSpline.h"

#include "tool_mutex.h"

Napi::Object CubicSpline::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func =
        DefineClass(env, "CubicSpline",
                    {
                        InstanceMethod<&CubicSpline::GetPointsCount>("GetPointsCount"),
                        InstanceMethod<&CubicSpline::GetPointsCount_async>("GetPointsCount_async"),
                        InstanceMethod<&CubicSpline::GetPoint>("GetPoint"),
                        InstanceMethod<&CubicSpline::GetPoint_async>("GetPoint_async"),
                        InstanceMethod<&CubicSpline::AddPoint>("AddPoint"),
                        InstanceMethod<&CubicSpline::AddPoint_async>("AddPoint_async"),
                        InstanceMethod<&CubicSpline::Inverse>("Inverse"),
                        InstanceMethod<&CubicSpline::Inverse_async>("Inverse_async"),
                        InstanceMethod<&CubicSpline::Trimmed>("Trimmed"),
                        InstanceMethod<&CubicSpline::Trimmed_async>("Trimmed_async"),
                        InstanceMethod<&CubicSpline::IsStraight>("IsStraight"),
                        InstanceMethod<&CubicSpline::IsStraight_async>("IsStraight_async"),
                        InstanceMethod<&CubicSpline::IsClosed>("IsClosed"),
                        InstanceMethod<&CubicSpline::IsClosed_async>("IsClosed_async"),
                        InstanceMethod<&CubicSpline::IsBounded>("IsBounded"),
                        InstanceMethod<&CubicSpline::IsBounded_async>("IsBounded_async"),
                        InstanceMethod<&CubicSpline::GetTMax>("GetTMax"),
                        InstanceMethod<&CubicSpline::GetTMax_async>("GetTMax_async"),
                        InstanceMethod<&CubicSpline::GetTMin>("GetTMin"),
                        InstanceMethod<&CubicSpline::GetTMin_async>("GetTMin_async"),
                        InstanceMethod<&CubicSpline::GetPeriod>("GetPeriod"),
                        InstanceMethod<&CubicSpline::GetPeriod_async>("GetPeriod_async"),
                        InstanceMethod<&CubicSpline::GetWeightCentre>("GetWeightCentre"),
                        InstanceMethod<&CubicSpline::GetWeightCentre_async>("GetWeightCentre_async"),
                        InstanceMethod<&CubicSpline::GetLimitPoint>("GetLimitPoint"),
                        InstanceMethod<&CubicSpline::GetLimitPoint_async>("GetLimitPoint_async"),
                        InstanceMethod<&CubicSpline::PointOn>("PointOn"),
                        InstanceMethod<&CubicSpline::PointOn_async>("PointOn_async"),
                        InstanceMethod<&CubicSpline::_PointOn>("_PointOn"),
                        InstanceMethod<&CubicSpline::_PointOn_async>("_PointOn_async"),
                        InstanceMethod<&CubicSpline::Explore>("Explore"),
                        InstanceMethod<&CubicSpline::Explore_async>("Explore_async"),
                        InstanceMethod<&CubicSpline::FirstDer>("FirstDer"),
                        InstanceMethod<&CubicSpline::FirstDer_async>("FirstDer_async"),
                        InstanceMethod<&CubicSpline::_FirstDer>("_FirstDer"),
                        InstanceMethod<&CubicSpline::_FirstDer_async>("_FirstDer_async"),
                        InstanceMethod<&CubicSpline::SecondDer>("SecondDer"),
                        InstanceMethod<&CubicSpline::SecondDer_async>("SecondDer_async"),
                        InstanceMethod<&CubicSpline::_SecondDer>("_SecondDer"),
                        InstanceMethod<&CubicSpline::_SecondDer_async>("_SecondDer_async"),
                        InstanceMethod<&CubicSpline::Tangent>("Tangent"),
                        InstanceMethod<&CubicSpline::Tangent_async>("Tangent_async"),
                        InstanceMethod<&CubicSpline::_Tangent>("_Tangent"),
                        InstanceMethod<&CubicSpline::_Tangent_async>("_Tangent_async"),
                        InstanceMethod<&CubicSpline::Normal>("Normal"),
                        InstanceMethod<&CubicSpline::Normal_async>("Normal_async"),
                        InstanceMethod<&CubicSpline::_Normal>("_Normal"),
                        InstanceMethod<&CubicSpline::_Normal_async>("_Normal_async"),
                        InstanceMethod<&CubicSpline::PointRelative>("PointRelative"),
                        InstanceMethod<&CubicSpline::PointRelative_async>("PointRelative_async"),
                        InstanceMethod<&CubicSpline::PointLocation>("PointLocation"),
                        InstanceMethod<&CubicSpline::PointLocation_async>("PointLocation_async"),
                        InstanceMethod<&CubicSpline::IsA>("IsA"),
                        InstanceMethod<&CubicSpline::IsA_async>("IsA_async"),
                        InstanceMethod<&CubicSpline::Type>("Type"),
                        InstanceMethod<&CubicSpline::Type_async>("Type_async"),
                        InstanceMethod<&CubicSpline::Family>("Family"),
                        InstanceMethod<&CubicSpline::Family_async>("Family_async"),
                        InstanceMethod<&CubicSpline::Move>("Move"),
                        InstanceMethod<&CubicSpline::Move_async>("Move_async"),
                        InstanceMethod<&CubicSpline::Transform>("Transform"),
                        InstanceMethod<&CubicSpline::Transform_async>("Transform_async"),
                        InstanceMethod<&CubicSpline::Duplicate>("Duplicate"),
                        InstanceMethod<&CubicSpline::Duplicate_async>("Duplicate_async"),
                        InstanceMethod<&CubicSpline::AddYourGabaritTo>("AddYourGabaritTo"),
                        InstanceMethod<&CubicSpline::AddYourGabaritTo_async>("AddYourGabaritTo_async"),
                        InstanceMethod<&CubicSpline::GetUseCount>("GetUseCount"),
                        InstanceMethod<&CubicSpline::GetUseCount_async>("GetUseCount_async"),
                        InstanceMethod<&CubicSpline::AddRef>("AddRef"),
                        InstanceMethod<&CubicSpline::AddRef_async>("AddRef_async"),
                        InstanceMethod<&CubicSpline::Id>("Id"),

                    });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("CubicSpline", func);

    Napi::Object global = env.Global();
    Napi::Object Object = global.Get("Object").ToObject();
    Napi::Function setPrototypeOf = Napi::Function(env, Object.Get("setPrototypeOf"));
    Napi::Value prototype = func.Get("prototype");

    Napi::Function superFunc = PolyCurve::GetConstructor(env);
    Napi::FunctionReference *superConstructor = new Napi::FunctionReference();
    *superConstructor = Napi::Persistent(superFunc);

    Napi::Value superPrototype = superFunc.Get("prototype");
    setPrototypeOf.Call({prototype, superPrototype});
    setPrototypeOf.Call({func, superFunc});

    return exports;
}

CubicSpline::CubicSpline(const Napi::CallbackInfo &info) : Napi::ObjectWrap<CubicSpline>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    Napi::Error::New(env, "CubicSpline cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object CubicSpline::NewInstance(Napi::Env env, MbCubicSpline *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("CubicSpline");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    CubicSpline *unwrapped = CubicSpline::Unwrap(inst);
    underlying->AddRef();
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function CubicSpline::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("CubicSpline");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value CubicSpline::GetPointsCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    size_t _result = _underlying->GetPointsCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value CubicSpline::GetPointsCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    CubicSpline_GetPointsCount_AsyncWorker *asyncWorker =
        new CubicSpline_GetPointsCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CubicSpline::GetPoint(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "ptrdiff_t index is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbCartPoint *pnt = new MbCartPoint;

    int index = info[0].ToNumber().Int64Value();

    _underlying->GetPoint(index, *pnt

    );

    Napi::Value _to;

    if (pnt != NULL)
    {
        _to = CartPoint::NewInstance(env, (MbCartPoint *)pnt);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value CubicSpline::GetPoint_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "ptrdiff_t index is required."));
        return deferred.Promise();
    }

    int index = info[0].ToNumber().Int64Value();

    CubicSpline_GetPoint_AsyncWorker *asyncWorker = new CubicSpline_GetPoint_AsyncWorker(_underlying, deferred,

                                                                                         index);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CubicSpline::AddPoint(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint::GetConstructor(env)))))
    {
        Napi::Error::New(env, "CartPoint pnt is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'pnt'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class CartPoint *pnt_ = CartPoint::Unwrap(info[0].ToObject());

    const MbCartPoint &pnt = *pnt_->_underlying;

    _underlying->AddPoint(pnt

    );

    return env.Undefined();
}

Napi::Value CubicSpline::AddPoint_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "CartPoint pnt is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'pnt'"));
        return deferred.Promise();
    }
    const class CartPoint *pnt_ = CartPoint::Unwrap(info[0].ToObject());

    const MbCartPoint &pnt = *pnt_->_underlying;

    CubicSpline_AddPoint_AsyncWorker *asyncWorker = new CubicSpline_AddPoint_AsyncWorker(_underlying, deferred,

                                                                                         pnt);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CubicSpline::Inverse(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbRegTransform *iReg = NULL;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[0].ToObject());
        iReg = iReg_->_underlying;
    }

    _underlying->Inverse(info.Length() == 0 || info[0].IsNull() ? NULL : iReg

    );

    return env.Undefined();
}

Napi::Value CubicSpline::Inverse_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    MbRegTransform *iReg = NULL;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[0].ToObject());
        iReg = iReg_->_underlying;
    }

    CubicSpline_Inverse_AsyncWorker *asyncWorker = new CubicSpline_Inverse_AsyncWorker(_underlying, deferred,

                                                                                       iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CubicSpline::Trimmed(const Napi::CallbackInfo &info)
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

    MbCurve *_result = _underlying->Trimmed(t1, t2, sense

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

Napi::Value CubicSpline::Trimmed_async(const Napi::CallbackInfo &info)
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

    CubicSpline_Trimmed_AsyncWorker *asyncWorker = new CubicSpline_Trimmed_AsyncWorker(_underlying, deferred,

                                                                                       t1,

                                                                                       t2,

                                                                                       sense);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CubicSpline::IsStraight(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool ignoreParams = info[0].ToBoolean();

    bool _result = _underlying->IsStraight(info.Length() == 0 || info[0].IsNull() ? false : ignoreParams

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value CubicSpline::IsStraight_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    bool ignoreParams = info[0].ToBoolean();

    CubicSpline_IsStraight_AsyncWorker *asyncWorker = new CubicSpline_IsStraight_AsyncWorker(_underlying, deferred,

                                                                                             ignoreParams);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CubicSpline::IsClosed(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool _result = _underlying->IsClosed(

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value CubicSpline::IsClosed_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    CubicSpline_IsClosed_AsyncWorker *asyncWorker = new CubicSpline_IsClosed_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CubicSpline::IsBounded(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool _result = _underlying->IsBounded(

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value CubicSpline::IsBounded_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    CubicSpline_IsBounded_AsyncWorker *asyncWorker = new CubicSpline_IsBounded_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CubicSpline::GetTMax(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetTMax(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value CubicSpline::GetTMax_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    CubicSpline_GetTMax_AsyncWorker *asyncWorker = new CubicSpline_GetTMax_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CubicSpline::GetTMin(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetTMin(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value CubicSpline::GetTMin_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    CubicSpline_GetTMin_AsyncWorker *asyncWorker = new CubicSpline_GetTMin_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CubicSpline::GetPeriod(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetPeriod(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value CubicSpline::GetPeriod_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    CubicSpline_GetPeriod_AsyncWorker *asyncWorker = new CubicSpline_GetPeriod_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CubicSpline::GetWeightCentre(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbCartPoint *point = new MbCartPoint;

    bool _result = _underlying->GetWeightCentre(*point

    );

    if (_result)
    {

        Napi::Value _to;

        if (point != NULL)
        {
            _to = CartPoint::NewInstance(env, (MbCartPoint *)point);
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
        msg << "Operation GetWeightCentre failed";
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value CubicSpline::GetWeightCentre_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    CubicSpline_GetWeightCentre_AsyncWorker *asyncWorker =
        new CubicSpline_GetWeightCentre_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CubicSpline::GetLimitPoint(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "ptrdiff_t number is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbCartPoint *point = new MbCartPoint;

    int number = info[0].ToNumber().Int64Value();

    _underlying->GetLimitPoint(number, *point

    );

    Napi::Value _to;

    if (point != NULL)
    {
        _to = CartPoint::NewInstance(env, (MbCartPoint *)point);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value CubicSpline::GetLimitPoint_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "ptrdiff_t number is required."));
        return deferred.Promise();
    }

    int number = info[0].ToNumber().Int64Value();

    CubicSpline_GetLimitPoint_AsyncWorker *asyncWorker =
        new CubicSpline_GetLimitPoint_AsyncWorker(_underlying, deferred,

                                                  number);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CubicSpline::PointOn(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbCartPoint *p = new MbCartPoint;

    double t = info[0].ToNumber().DoubleValue();

    _underlying->PointOn(t, *p

    );

    Napi::Value _to;

    if (p != NULL)
    {
        _to = CartPoint::NewInstance(env, (MbCartPoint *)p);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value CubicSpline::PointOn_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    CubicSpline_PointOn_AsyncWorker *asyncWorker = new CubicSpline_PointOn_AsyncWorker(_underlying, deferred,

                                                                                       t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CubicSpline::_PointOn(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbCartPoint *p = new MbCartPoint;

    double t = info[0].ToNumber().DoubleValue();

    _underlying->_PointOn(t, *p

    );

    Napi::Value _to;

    if (p != NULL)
    {
        _to = CartPoint::NewInstance(env, (MbCartPoint *)p);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value CubicSpline::_PointOn_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    CubicSpline__PointOn_AsyncWorker *asyncWorker = new CubicSpline__PointOn_AsyncWorker(_underlying, deferred,

                                                                                         t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CubicSpline::Explore(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsBoolean()))
    {
        Napi::Error::New(env, "boolean ext is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbCartPoint *pnt = new MbCartPoint;
    MbVector *fir = new MbVector;
    MbVector *sec = NULL;
    MbVector *thir = NULL;

    double t = info[0].ToNumber().DoubleValue();

    bool ext = info[1].ToBoolean();

    _underlying->Explore(t, ext, *pnt, *fir, sec, thir

    );

    Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

    if (pnt != NULL)
    {
        _to = CartPoint::NewInstance(env, (MbCartPoint *)pnt);
    }
    else
    {
        _to = env.Null();
    }

    _toReturn.Set(Napi::String::New(env, "pnt"), _to);
    if (fir != NULL)
    {
        _to = Vector::NewInstance(env, (MbVector *)fir);
    }
    else
    {
        _to = env.Null();
    }

    _toReturn.Set(Napi::String::New(env, "fir"), _to);
    if (sec != NULL)
    {
        _to = Vector::NewInstance(env, (MbVector *)sec);
    }
    else
    {
        _to = env.Null();
    }

    _toReturn.Set(Napi::String::New(env, "sec"), _to);
    if (thir != NULL)
    {
        _to = Vector::NewInstance(env, (MbVector *)thir);
    }
    else
    {
        _to = env.Null();
    }

    _toReturn.Set(Napi::String::New(env, "thir"), _to);
    return _toReturn;
}

Napi::Value CubicSpline::Explore_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean ext is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    bool ext = info[1].ToBoolean();

    CubicSpline_Explore_AsyncWorker *asyncWorker = new CubicSpline_Explore_AsyncWorker(_underlying, deferred,

                                                                                       t,

                                                                                       ext);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CubicSpline::FirstDer(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbVector *v = new MbVector;

    double t = info[0].ToNumber().DoubleValue();

    _underlying->FirstDer(t, *v

    );

    Napi::Value _to;

    if (v != NULL)
    {
        _to = Vector::NewInstance(env, (MbVector *)v);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value CubicSpline::FirstDer_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    CubicSpline_FirstDer_AsyncWorker *asyncWorker = new CubicSpline_FirstDer_AsyncWorker(_underlying, deferred,

                                                                                         t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CubicSpline::_FirstDer(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbVector *v = new MbVector;

    double t = info[0].ToNumber().DoubleValue();

    _underlying->_FirstDer(t, *v

    );

    Napi::Value _to;

    if (v != NULL)
    {
        _to = Vector::NewInstance(env, (MbVector *)v);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value CubicSpline::_FirstDer_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    CubicSpline__FirstDer_AsyncWorker *asyncWorker = new CubicSpline__FirstDer_AsyncWorker(_underlying, deferred,

                                                                                           t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CubicSpline::SecondDer(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbVector *v = new MbVector;

    double t = info[0].ToNumber().DoubleValue();

    _underlying->SecondDer(t, *v

    );

    Napi::Value _to;

    if (v != NULL)
    {
        _to = Vector::NewInstance(env, (MbVector *)v);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value CubicSpline::SecondDer_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    CubicSpline_SecondDer_AsyncWorker *asyncWorker = new CubicSpline_SecondDer_AsyncWorker(_underlying, deferred,

                                                                                           t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CubicSpline::_SecondDer(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbVector *v = new MbVector;

    double t = info[0].ToNumber().DoubleValue();

    _underlying->_SecondDer(t, *v

    );

    Napi::Value _to;

    if (v != NULL)
    {
        _to = Vector::NewInstance(env, (MbVector *)v);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value CubicSpline::_SecondDer_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    CubicSpline__SecondDer_AsyncWorker *asyncWorker = new CubicSpline__SecondDer_AsyncWorker(_underlying, deferred,

                                                                                             t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CubicSpline::Tangent(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbVector *v = new MbVector;

    double t = info[0].ToNumber().DoubleValue();

    _underlying->Tangent(t, *v

    );

    Napi::Value _to;

    if (v != NULL)
    {
        _to = Vector::NewInstance(env, (MbVector *)v);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value CubicSpline::Tangent_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    CubicSpline_Tangent_AsyncWorker *asyncWorker = new CubicSpline_Tangent_AsyncWorker(_underlying, deferred,

                                                                                       t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CubicSpline::_Tangent(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbVector *v = new MbVector;

    double t = info[0].ToNumber().DoubleValue();

    _underlying->_Tangent(t, *v

    );

    Napi::Value _to;

    if (v != NULL)
    {
        _to = Vector::NewInstance(env, (MbVector *)v);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value CubicSpline::_Tangent_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    CubicSpline__Tangent_AsyncWorker *asyncWorker = new CubicSpline__Tangent_AsyncWorker(_underlying, deferred,

                                                                                         t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CubicSpline::Normal(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbVector *v = new MbVector;

    double t = info[0].ToNumber().DoubleValue();

    _underlying->Normal(t, *v

    );

    Napi::Value _to;

    if (v != NULL)
    {
        _to = Vector::NewInstance(env, (MbVector *)v);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value CubicSpline::Normal_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    CubicSpline_Normal_AsyncWorker *asyncWorker = new CubicSpline_Normal_AsyncWorker(_underlying, deferred,

                                                                                     t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CubicSpline::_Normal(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbVector *v = new MbVector;

    double t = info[0].ToNumber().DoubleValue();

    _underlying->_Normal(t, *v

    );

    Napi::Value _to;

    if (v != NULL)
    {
        _to = Vector::NewInstance(env, (MbVector *)v);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value CubicSpline::_Normal_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    CubicSpline__Normal_AsyncWorker *asyncWorker = new CubicSpline__Normal_AsyncWorker(_underlying, deferred,

                                                                                       t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CubicSpline::PointRelative(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint::GetConstructor(env)))))
    {
        Napi::Error::New(env, "CartPoint pnt is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        Napi::Error::New(env, "number eps is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'pnt'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class CartPoint *pnt_ = CartPoint::Unwrap(info[0].ToObject());

    const MbCartPoint &pnt = *pnt_->_underlying;

    double eps = info[1].ToNumber().DoubleValue();

    MbeItemLocation _result = _underlying->PointRelative(pnt, eps

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value CubicSpline::PointRelative_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "CartPoint pnt is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number eps is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'pnt'"));
        return deferred.Promise();
    }
    const class CartPoint *pnt_ = CartPoint::Unwrap(info[0].ToObject());

    const MbCartPoint &pnt = *pnt_->_underlying;

    double eps = info[1].ToNumber().DoubleValue();

    CubicSpline_PointRelative_AsyncWorker *asyncWorker =
        new CubicSpline_PointRelative_AsyncWorker(_underlying, deferred,

                                                  pnt,

                                                  eps);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CubicSpline::PointLocation(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint::GetConstructor(env)))))
    {
        Napi::Error::New(env, "CartPoint pnt is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        Napi::Error::New(env, "number eps is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'pnt'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class CartPoint *pnt_ = CartPoint::Unwrap(info[0].ToObject());

    const MbCartPoint &pnt = *pnt_->_underlying;

    double eps = info[1].ToNumber().DoubleValue();

    MbeLocation _result = _underlying->PointLocation(pnt, eps

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value CubicSpline::PointLocation_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "CartPoint pnt is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number eps is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'pnt'"));
        return deferred.Promise();
    }
    const class CartPoint *pnt_ = CartPoint::Unwrap(info[0].ToObject());

    const MbCartPoint &pnt = *pnt_->_underlying;

    double eps = info[1].ToNumber().DoubleValue();

    CubicSpline_PointLocation_AsyncWorker *asyncWorker =
        new CubicSpline_PointLocation_AsyncWorker(_underlying, deferred,

                                                  pnt,

                                                  eps);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CubicSpline::IsA(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbePlaneType _result = _underlying->IsA(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value CubicSpline::IsA_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    CubicSpline_IsA_AsyncWorker *asyncWorker = new CubicSpline_IsA_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CubicSpline::Type(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbePlaneType _result = _underlying->Type(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value CubicSpline::Type_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    CubicSpline_Type_AsyncWorker *asyncWorker = new CubicSpline_Type_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CubicSpline::Family(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbePlaneType _result = _underlying->Family(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value CubicSpline::Family_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    CubicSpline_Family_AsyncWorker *asyncWorker = new CubicSpline_Family_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CubicSpline::Move(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Vector::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Vector to is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    const MbSurface *newSurface = NULL;

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'to'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Vector *to_ = Vector::Unwrap(info[0].ToObject());

    const MbVector &to = *to_->_underlying;

    MbRegTransform *iReg = NULL;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
        iReg = iReg_->_underlying;
    }

    _underlying->Move(to, info.Length() == 1 || info[1].IsNull() ? NULL : iReg,
                      info.Length() == 2 || info[2].IsNull() ? NULL : newSurface

    );

    Napi::Value _to;

    if (newSurface != NULL)
    {
        _to = Surface::NewInstance(env, (MbSurface *)newSurface);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value CubicSpline::Move_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Vector::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Vector to is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'to'"));
        return deferred.Promise();
    }
    const class Vector *to_ = Vector::Unwrap(info[0].ToObject());

    const MbVector &to = *to_->_underlying;

    MbRegTransform *iReg = NULL;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
        iReg = iReg_->_underlying;
    }

    CubicSpline_Move_AsyncWorker *asyncWorker = new CubicSpline_Move_AsyncWorker(_underlying, deferred,

                                                                                 to,

                                                                                 iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CubicSpline::Transform(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Matrix::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Matrix matr is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'matr'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Matrix *matr_ = Matrix::Unwrap(info[0].ToObject());

    const MbMatrix &matr = *matr_->_underlying;

    MbRegTransform *iReg = NULL;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
        iReg = iReg_->_underlying;
    }

    MbSurface *newSurface = NULL;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        Surface *newSurface_ = Surface::Unwrap(info[2].ToObject());
        newSurface = newSurface_->_underlying;
    }

    _underlying->Transform(matr, info.Length() == 1 || info[1].IsNull() ? NULL : iReg,
                           info.Length() == 2 || info[2].IsNull() ? NULL : newSurface

    );

    return env.Undefined();
}

Napi::Value CubicSpline::Transform_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Matrix::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Matrix matr is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'matr'"));
        return deferred.Promise();
    }
    const class Matrix *matr_ = Matrix::Unwrap(info[0].ToObject());

    const MbMatrix &matr = *matr_->_underlying;

    MbRegTransform *iReg = NULL;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
        iReg = iReg_->_underlying;
    }

    MbSurface *newSurface = NULL;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        Surface *newSurface_ = Surface::Unwrap(info[2].ToObject());
        newSurface = newSurface_->_underlying;
    }

    CubicSpline_Transform_AsyncWorker *asyncWorker = new CubicSpline_Transform_AsyncWorker(_underlying, deferred,

                                                                                           matr,

                                                                                           iReg,

                                                                                           newSurface);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CubicSpline::Duplicate(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbRegDuplicate *dup = NULL;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        RegDuplicate *dup_ = RegDuplicate::Unwrap(info[0].ToObject());
        dup = dup_->_underlying;
    }

    MbPlaneItem &_result = _underlying->Duplicate(info.Length() == 0 || info[0].IsNull() ? NULL : dup

    );

    Napi::Value _to;

    _to = PlaneItem::NewInstance(env, (MbPlaneItem *)&(_result));

    return _to;
}

Napi::Value CubicSpline::Duplicate_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    MbRegDuplicate *dup = NULL;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        RegDuplicate *dup_ = RegDuplicate::Unwrap(info[0].ToObject());
        dup = dup_->_underlying;
    }

    CubicSpline_Duplicate_AsyncWorker *asyncWorker = new CubicSpline_Duplicate_AsyncWorker(_underlying, deferred,

                                                                                           dup);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CubicSpline::AddYourGabaritTo(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Rect::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Rect rect is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'rect'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Rect *rect_ = Rect::Unwrap(info[0].ToObject());

    MbRect &rect = *rect_->_underlying;

    _underlying->AddYourGabaritTo(rect

    );

    return env.Undefined();
}

Napi::Value CubicSpline::AddYourGabaritTo_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Rect::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Rect rect is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'rect'"));
        return deferred.Promise();
    }
    const class Rect *rect_ = Rect::Unwrap(info[0].ToObject());

    MbRect &rect = *rect_->_underlying;

    CubicSpline_AddYourGabaritTo_AsyncWorker *asyncWorker =
        new CubicSpline_AddYourGabaritTo_AsyncWorker(_underlying, deferred,

                                                     rect);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CubicSpline::GetUseCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    refcount_t _result = _underlying->GetUseCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value CubicSpline::GetUseCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    CubicSpline_GetUseCount_AsyncWorker *asyncWorker = new CubicSpline_GetUseCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CubicSpline::AddRef(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->AddRef(

    );

    return env.Undefined();
}

Napi::Value CubicSpline::AddRef_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    CubicSpline_AddRef_AsyncWorker *asyncWorker = new CubicSpline_AddRef_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value CubicSpline::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

CubicSpline::~CubicSpline()
{
    // std::cout << "calling ::DeleteItem on CubicSpline for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

CubicSpline_GetPointsCount_AsyncWorker::CubicSpline_GetPointsCount_AsyncWorker(MbCubicSpline *_underlying,
                                                                               Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void CubicSpline_GetPointsCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    size_t _result = _underlying->GetPointsCount();

    this->_result = _result;

    ExitParallelRegion();
}

void CubicSpline_GetPointsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    size_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void CubicSpline_GetPointsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CubicSpline_GetPoint_AsyncWorker::CubicSpline_GetPoint_AsyncWorker(MbCubicSpline *_underlying,
                                                                   Napi::Promise::Deferred const &d, ptrdiff_t index)
    : _underlying(_underlying), PromiseWorker(d), index(index){};

void CubicSpline_GetPoint_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint *pnt = new MbCartPoint;

    _underlying->GetPoint(index, *pnt);

    this->pnt = pnt;

    ExitParallelRegion();
}

void CubicSpline_GetPoint_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbCartPoint *pnt = this->pnt;
    if (pnt != NULL)
    {
        _to = CartPoint::NewInstance(env, (MbCartPoint *)pnt);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void CubicSpline_GetPoint_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CubicSpline_AddPoint_AsyncWorker::CubicSpline_AddPoint_AsyncWorker(MbCubicSpline *_underlying,
                                                                   Napi::Promise::Deferred const &d,
                                                                   const MbCartPoint &pnt)
    : _underlying(_underlying), PromiseWorker(d), pnt(pnt){};

void CubicSpline_AddPoint_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddPoint(pnt);

    ExitParallelRegion();
}

void CubicSpline_AddPoint_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void CubicSpline_AddPoint_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CubicSpline_Inverse_AsyncWorker::CubicSpline_Inverse_AsyncWorker(MbCubicSpline *_underlying,
                                                                 Napi::Promise::Deferred const &d, MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), iReg(iReg){};

void CubicSpline_Inverse_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Inverse(iReg);

    ExitParallelRegion();
}

void CubicSpline_Inverse_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void CubicSpline_Inverse_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CubicSpline_Trimmed_AsyncWorker::CubicSpline_Trimmed_AsyncWorker(MbCubicSpline *_underlying,
                                                                 Napi::Promise::Deferred const &d, double t1, double t2,
                                                                 int sense)
    : _underlying(_underlying), PromiseWorker(d), t1(t1), t2(t2), sense(sense){};

void CubicSpline_Trimmed_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCurve *_result = _underlying->Trimmed(t1, t2, sense);

    this->_result = _result;

    ExitParallelRegion();
}

void CubicSpline_Trimmed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void CubicSpline_Trimmed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CubicSpline_IsStraight_AsyncWorker::CubicSpline_IsStraight_AsyncWorker(MbCubicSpline *_underlying,
                                                                       Napi::Promise::Deferred const &d,
                                                                       bool ignoreParams)
    : _underlying(_underlying), PromiseWorker(d), ignoreParams(ignoreParams){};

void CubicSpline_IsStraight_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsStraight(ignoreParams);

    this->_result = _result;

    ExitParallelRegion();
}

void CubicSpline_IsStraight_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void CubicSpline_IsStraight_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CubicSpline_IsClosed_AsyncWorker::CubicSpline_IsClosed_AsyncWorker(MbCubicSpline *_underlying,
                                                                   Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void CubicSpline_IsClosed_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsClosed();

    this->_result = _result;

    ExitParallelRegion();
}

void CubicSpline_IsClosed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void CubicSpline_IsClosed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CubicSpline_IsBounded_AsyncWorker::CubicSpline_IsBounded_AsyncWorker(MbCubicSpline *_underlying,
                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void CubicSpline_IsBounded_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsBounded();

    this->_result = _result;

    ExitParallelRegion();
}

void CubicSpline_IsBounded_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void CubicSpline_IsBounded_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CubicSpline_GetTMax_AsyncWorker::CubicSpline_GetTMax_AsyncWorker(MbCubicSpline *_underlying,
                                                                 Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void CubicSpline_GetTMax_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetTMax();

    this->_result = _result;

    ExitParallelRegion();
}

void CubicSpline_GetTMax_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void CubicSpline_GetTMax_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CubicSpline_GetTMin_AsyncWorker::CubicSpline_GetTMin_AsyncWorker(MbCubicSpline *_underlying,
                                                                 Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void CubicSpline_GetTMin_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetTMin();

    this->_result = _result;

    ExitParallelRegion();
}

void CubicSpline_GetTMin_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void CubicSpline_GetTMin_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CubicSpline_GetPeriod_AsyncWorker::CubicSpline_GetPeriod_AsyncWorker(MbCubicSpline *_underlying,
                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void CubicSpline_GetPeriod_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetPeriod();

    this->_result = _result;

    ExitParallelRegion();
}

void CubicSpline_GetPeriod_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void CubicSpline_GetPeriod_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CubicSpline_GetWeightCentre_AsyncWorker::CubicSpline_GetWeightCentre_AsyncWorker(MbCubicSpline *_underlying,
                                                                                 Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void CubicSpline_GetWeightCentre_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint *point = new MbCartPoint;

    bool _result = _underlying->GetWeightCentre(*point);

    if (_result)
    {

        this->point = point;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation GetWeightCentre failed";
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void CubicSpline_GetWeightCentre_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbCartPoint *point = this->point;
    if (point != NULL)
    {
        _to = CartPoint::NewInstance(env, (MbCartPoint *)point);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void CubicSpline_GetWeightCentre_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CubicSpline_GetLimitPoint_AsyncWorker::CubicSpline_GetLimitPoint_AsyncWorker(MbCubicSpline *_underlying,
                                                                             Napi::Promise::Deferred const &d,
                                                                             ptrdiff_t number)
    : _underlying(_underlying), PromiseWorker(d), number(number){};

void CubicSpline_GetLimitPoint_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint *point = new MbCartPoint;

    _underlying->GetLimitPoint(number, *point);

    this->point = point;

    ExitParallelRegion();
}

void CubicSpline_GetLimitPoint_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbCartPoint *point = this->point;
    if (point != NULL)
    {
        _to = CartPoint::NewInstance(env, (MbCartPoint *)point);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void CubicSpline_GetLimitPoint_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CubicSpline_PointOn_AsyncWorker::CubicSpline_PointOn_AsyncWorker(MbCubicSpline *_underlying,
                                                                 Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void CubicSpline_PointOn_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint *p = new MbCartPoint;

    _underlying->PointOn(t, *p);

    this->p = p;

    ExitParallelRegion();
}

void CubicSpline_PointOn_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbCartPoint *p = this->p;
    if (p != NULL)
    {
        _to = CartPoint::NewInstance(env, (MbCartPoint *)p);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void CubicSpline_PointOn_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CubicSpline__PointOn_AsyncWorker::CubicSpline__PointOn_AsyncWorker(MbCubicSpline *_underlying,
                                                                   Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void CubicSpline__PointOn_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint *p = new MbCartPoint;

    _underlying->_PointOn(t, *p);

    this->p = p;

    ExitParallelRegion();
}

void CubicSpline__PointOn_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbCartPoint *p = this->p;
    if (p != NULL)
    {
        _to = CartPoint::NewInstance(env, (MbCartPoint *)p);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void CubicSpline__PointOn_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CubicSpline_Explore_AsyncWorker::CubicSpline_Explore_AsyncWorker(MbCubicSpline *_underlying,
                                                                 Napi::Promise::Deferred const &d, double &t, bool ext)
    : _underlying(_underlying), PromiseWorker(d), t(t), ext(ext){};

void CubicSpline_Explore_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint *pnt = new MbCartPoint;
    MbVector *fir = new MbVector;
    MbVector *sec = NULL;
    MbVector *thir = NULL;

    _underlying->Explore(t, ext, *pnt, *fir, sec, thir);

    this->pnt = pnt;
    this->fir = fir;
    this->sec = sec;
    this->thir = thir;

    ExitParallelRegion();
}

void CubicSpline_Explore_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    Napi::Object _toReturn = Napi::Object::New(env);

    MbCartPoint *pnt = this->pnt;
    if (pnt != NULL)
    {
        _to = CartPoint::NewInstance(env, (MbCartPoint *)pnt);
    }
    else
    {
        _to = env.Null();
    }

    _toReturn.Set(Napi::String::New(env, "pnt"), _to);
    MbVector *fir = this->fir;
    if (fir != NULL)
    {
        _to = Vector::NewInstance(env, (MbVector *)fir);
    }
    else
    {
        _to = env.Null();
    }

    _toReturn.Set(Napi::String::New(env, "fir"), _to);
    MbVector *sec = this->sec;
    if (sec != NULL)
    {
        _to = Vector::NewInstance(env, (MbVector *)sec);
    }
    else
    {
        _to = env.Null();
    }

    _toReturn.Set(Napi::String::New(env, "sec"), _to);
    MbVector *thir = this->thir;
    if (thir != NULL)
    {
        _to = Vector::NewInstance(env, (MbVector *)thir);
    }
    else
    {
        _to = env.Null();
    }

    _toReturn.Set(Napi::String::New(env, "thir"), _to);

    deferred.Resolve(_toReturn);
}

void CubicSpline_Explore_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CubicSpline_FirstDer_AsyncWorker::CubicSpline_FirstDer_AsyncWorker(MbCubicSpline *_underlying,
                                                                   Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void CubicSpline_FirstDer_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->FirstDer(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void CubicSpline_FirstDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbVector *v = this->v;
    if (v != NULL)
    {
        _to = Vector::NewInstance(env, (MbVector *)v);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void CubicSpline_FirstDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CubicSpline__FirstDer_AsyncWorker::CubicSpline__FirstDer_AsyncWorker(MbCubicSpline *_underlying,
                                                                     Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void CubicSpline__FirstDer_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->_FirstDer(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void CubicSpline__FirstDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbVector *v = this->v;
    if (v != NULL)
    {
        _to = Vector::NewInstance(env, (MbVector *)v);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void CubicSpline__FirstDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CubicSpline_SecondDer_AsyncWorker::CubicSpline_SecondDer_AsyncWorker(MbCubicSpline *_underlying,
                                                                     Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void CubicSpline_SecondDer_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->SecondDer(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void CubicSpline_SecondDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbVector *v = this->v;
    if (v != NULL)
    {
        _to = Vector::NewInstance(env, (MbVector *)v);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void CubicSpline_SecondDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CubicSpline__SecondDer_AsyncWorker::CubicSpline__SecondDer_AsyncWorker(MbCubicSpline *_underlying,
                                                                       Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void CubicSpline__SecondDer_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->_SecondDer(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void CubicSpline__SecondDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbVector *v = this->v;
    if (v != NULL)
    {
        _to = Vector::NewInstance(env, (MbVector *)v);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void CubicSpline__SecondDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CubicSpline_Tangent_AsyncWorker::CubicSpline_Tangent_AsyncWorker(MbCubicSpline *_underlying,
                                                                 Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void CubicSpline_Tangent_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->Tangent(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void CubicSpline_Tangent_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbVector *v = this->v;
    if (v != NULL)
    {
        _to = Vector::NewInstance(env, (MbVector *)v);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void CubicSpline_Tangent_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CubicSpline__Tangent_AsyncWorker::CubicSpline__Tangent_AsyncWorker(MbCubicSpline *_underlying,
                                                                   Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void CubicSpline__Tangent_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->_Tangent(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void CubicSpline__Tangent_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbVector *v = this->v;
    if (v != NULL)
    {
        _to = Vector::NewInstance(env, (MbVector *)v);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void CubicSpline__Tangent_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CubicSpline_Normal_AsyncWorker::CubicSpline_Normal_AsyncWorker(MbCubicSpline *_underlying,
                                                               Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void CubicSpline_Normal_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->Normal(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void CubicSpline_Normal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbVector *v = this->v;
    if (v != NULL)
    {
        _to = Vector::NewInstance(env, (MbVector *)v);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void CubicSpline_Normal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CubicSpline__Normal_AsyncWorker::CubicSpline__Normal_AsyncWorker(MbCubicSpline *_underlying,
                                                                 Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void CubicSpline__Normal_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->_Normal(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void CubicSpline__Normal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbVector *v = this->v;
    if (v != NULL)
    {
        _to = Vector::NewInstance(env, (MbVector *)v);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void CubicSpline__Normal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CubicSpline_PointRelative_AsyncWorker::CubicSpline_PointRelative_AsyncWorker(MbCubicSpline *_underlying,
                                                                             Napi::Promise::Deferred const &d,
                                                                             const MbCartPoint &pnt, double eps)
    : _underlying(_underlying), PromiseWorker(d), pnt(pnt), eps(eps){};

void CubicSpline_PointRelative_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeItemLocation _result = _underlying->PointRelative(pnt, eps);

    this->_result = _result;

    ExitParallelRegion();
}

void CubicSpline_PointRelative_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeItemLocation _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void CubicSpline_PointRelative_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CubicSpline_PointLocation_AsyncWorker::CubicSpline_PointLocation_AsyncWorker(MbCubicSpline *_underlying,
                                                                             Napi::Promise::Deferred const &d,
                                                                             const MbCartPoint &pnt, double eps)
    : _underlying(_underlying), PromiseWorker(d), pnt(pnt), eps(eps){};

void CubicSpline_PointLocation_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeLocation _result = _underlying->PointLocation(pnt, eps);

    this->_result = _result;

    ExitParallelRegion();
}

void CubicSpline_PointLocation_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeLocation _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void CubicSpline_PointLocation_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CubicSpline_IsA_AsyncWorker::CubicSpline_IsA_AsyncWorker(MbCubicSpline *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void CubicSpline_IsA_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbePlaneType _result = _underlying->IsA();

    this->_result = _result;

    ExitParallelRegion();
}

void CubicSpline_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbePlaneType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void CubicSpline_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CubicSpline_Type_AsyncWorker::CubicSpline_Type_AsyncWorker(MbCubicSpline *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void CubicSpline_Type_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbePlaneType _result = _underlying->Type();

    this->_result = _result;

    ExitParallelRegion();
}

void CubicSpline_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbePlaneType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void CubicSpline_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CubicSpline_Family_AsyncWorker::CubicSpline_Family_AsyncWorker(MbCubicSpline *_underlying,
                                                               Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void CubicSpline_Family_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbePlaneType _result = _underlying->Family();

    this->_result = _result;

    ExitParallelRegion();
}

void CubicSpline_Family_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbePlaneType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void CubicSpline_Family_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CubicSpline_Move_AsyncWorker::CubicSpline_Move_AsyncWorker(MbCubicSpline *_underlying, Napi::Promise::Deferred const &d,
                                                           const MbVector &to, MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), to(to), iReg(iReg){};

void CubicSpline_Move_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbSurface *newSurface = NULL;

    _underlying->Move(to, iReg, newSurface);

    this->newSurface = newSurface;

    ExitParallelRegion();
}

void CubicSpline_Move_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbSurface *newSurface = this->newSurface;
    if (newSurface != NULL)
    {
        _to = Surface::NewInstance(env, (MbSurface *)newSurface);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void CubicSpline_Move_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CubicSpline_Transform_AsyncWorker::CubicSpline_Transform_AsyncWorker(MbCubicSpline *_underlying,
                                                                     Napi::Promise::Deferred const &d,
                                                                     const MbMatrix &matr, MbRegTransform *iReg,
                                                                     const MbSurface *newSurface)
    : _underlying(_underlying), PromiseWorker(d), matr(matr), iReg(iReg), newSurface(newSurface){};

void CubicSpline_Transform_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Transform(matr, iReg, newSurface);

    ExitParallelRegion();
}

void CubicSpline_Transform_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void CubicSpline_Transform_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CubicSpline_Duplicate_AsyncWorker::CubicSpline_Duplicate_AsyncWorker(MbCubicSpline *_underlying,
                                                                     Napi::Promise::Deferred const &d,
                                                                     MbRegDuplicate *dup)
    : _underlying(_underlying), PromiseWorker(d), dup(dup){};

void CubicSpline_Duplicate_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbPlaneItem &_result = _underlying->Duplicate(dup);

    this->_result = (MbPlaneItem *)&(_result);

    ExitParallelRegion();
}

void CubicSpline_Duplicate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbPlaneItem *_result = this->_result;
    _to = PlaneItem::NewInstance(env, (MbPlaneItem *)&(_result));

    deferred.Resolve(_to);
}

void CubicSpline_Duplicate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CubicSpline_AddYourGabaritTo_AsyncWorker::CubicSpline_AddYourGabaritTo_AsyncWorker(MbCubicSpline *_underlying,
                                                                                   Napi::Promise::Deferred const &d,
                                                                                   MbRect &rect)
    : _underlying(_underlying), PromiseWorker(d), rect(rect){};

void CubicSpline_AddYourGabaritTo_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddYourGabaritTo(rect);

    ExitParallelRegion();
}

void CubicSpline_AddYourGabaritTo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void CubicSpline_AddYourGabaritTo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CubicSpline_GetUseCount_AsyncWorker::CubicSpline_GetUseCount_AsyncWorker(MbCubicSpline *_underlying,
                                                                         Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void CubicSpline_GetUseCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    refcount_t _result = _underlying->GetUseCount();

    this->_result = _result;

    ExitParallelRegion();
}

void CubicSpline_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    refcount_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void CubicSpline_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CubicSpline_AddRef_AsyncWorker::CubicSpline_AddRef_AsyncWorker(MbCubicSpline *_underlying,
                                                               Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void CubicSpline_AddRef_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddRef();

    ExitParallelRegion();
}

void CubicSpline_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void CubicSpline_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
