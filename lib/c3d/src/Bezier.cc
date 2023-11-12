// This is a generated file, modify: generate/templates/Bezier.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/Bezier.h"

#include "tool_mutex.h"

Napi::Object Bezier::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(env, "Bezier",
                                      {
                                          InstanceMethod<&Bezier::GetPointsCount>("GetPointsCount"),
                                          InstanceMethod<&Bezier::GetPointsCount_async>("GetPointsCount_async"),
                                          InstanceMethod<&Bezier::GetPoint>("GetPoint"),
                                          InstanceMethod<&Bezier::GetPoint_async>("GetPoint_async"),
                                          InstanceMethod<&Bezier::AddPoint>("AddPoint"),
                                          InstanceMethod<&Bezier::AddPoint_async>("AddPoint_async"),
                                          InstanceMethod<&Bezier::Inverse>("Inverse"),
                                          InstanceMethod<&Bezier::Inverse_async>("Inverse_async"),
                                          InstanceMethod<&Bezier::Trimmed>("Trimmed"),
                                          InstanceMethod<&Bezier::Trimmed_async>("Trimmed_async"),
                                          InstanceMethod<&Bezier::IsStraight>("IsStraight"),
                                          InstanceMethod<&Bezier::IsStraight_async>("IsStraight_async"),
                                          InstanceMethod<&Bezier::IsClosed>("IsClosed"),
                                          InstanceMethod<&Bezier::IsClosed_async>("IsClosed_async"),
                                          InstanceMethod<&Bezier::IsBounded>("IsBounded"),
                                          InstanceMethod<&Bezier::IsBounded_async>("IsBounded_async"),
                                          InstanceMethod<&Bezier::GetTMax>("GetTMax"),
                                          InstanceMethod<&Bezier::GetTMax_async>("GetTMax_async"),
                                          InstanceMethod<&Bezier::GetTMin>("GetTMin"),
                                          InstanceMethod<&Bezier::GetTMin_async>("GetTMin_async"),
                                          InstanceMethod<&Bezier::GetPeriod>("GetPeriod"),
                                          InstanceMethod<&Bezier::GetPeriod_async>("GetPeriod_async"),
                                          InstanceMethod<&Bezier::GetWeightCentre>("GetWeightCentre"),
                                          InstanceMethod<&Bezier::GetWeightCentre_async>("GetWeightCentre_async"),
                                          InstanceMethod<&Bezier::GetLimitPoint>("GetLimitPoint"),
                                          InstanceMethod<&Bezier::GetLimitPoint_async>("GetLimitPoint_async"),
                                          InstanceMethod<&Bezier::PointOn>("PointOn"),
                                          InstanceMethod<&Bezier::PointOn_async>("PointOn_async"),
                                          InstanceMethod<&Bezier::_PointOn>("_PointOn"),
                                          InstanceMethod<&Bezier::_PointOn_async>("_PointOn_async"),
                                          InstanceMethod<&Bezier::Explore>("Explore"),
                                          InstanceMethod<&Bezier::Explore_async>("Explore_async"),
                                          InstanceMethod<&Bezier::FirstDer>("FirstDer"),
                                          InstanceMethod<&Bezier::FirstDer_async>("FirstDer_async"),
                                          InstanceMethod<&Bezier::_FirstDer>("_FirstDer"),
                                          InstanceMethod<&Bezier::_FirstDer_async>("_FirstDer_async"),
                                          InstanceMethod<&Bezier::SecondDer>("SecondDer"),
                                          InstanceMethod<&Bezier::SecondDer_async>("SecondDer_async"),
                                          InstanceMethod<&Bezier::_SecondDer>("_SecondDer"),
                                          InstanceMethod<&Bezier::_SecondDer_async>("_SecondDer_async"),
                                          InstanceMethod<&Bezier::Tangent>("Tangent"),
                                          InstanceMethod<&Bezier::Tangent_async>("Tangent_async"),
                                          InstanceMethod<&Bezier::_Tangent>("_Tangent"),
                                          InstanceMethod<&Bezier::_Tangent_async>("_Tangent_async"),
                                          InstanceMethod<&Bezier::Normal>("Normal"),
                                          InstanceMethod<&Bezier::Normal_async>("Normal_async"),
                                          InstanceMethod<&Bezier::_Normal>("_Normal"),
                                          InstanceMethod<&Bezier::_Normal_async>("_Normal_async"),
                                          InstanceMethod<&Bezier::PointRelative>("PointRelative"),
                                          InstanceMethod<&Bezier::PointRelative_async>("PointRelative_async"),
                                          InstanceMethod<&Bezier::PointLocation>("PointLocation"),
                                          InstanceMethod<&Bezier::PointLocation_async>("PointLocation_async"),
                                          InstanceMethod<&Bezier::IsA>("IsA"),
                                          InstanceMethod<&Bezier::IsA_async>("IsA_async"),
                                          InstanceMethod<&Bezier::Type>("Type"),
                                          InstanceMethod<&Bezier::Type_async>("Type_async"),
                                          InstanceMethod<&Bezier::Family>("Family"),
                                          InstanceMethod<&Bezier::Family_async>("Family_async"),
                                          InstanceMethod<&Bezier::Move>("Move"),
                                          InstanceMethod<&Bezier::Move_async>("Move_async"),
                                          InstanceMethod<&Bezier::Transform>("Transform"),
                                          InstanceMethod<&Bezier::Transform_async>("Transform_async"),
                                          InstanceMethod<&Bezier::Duplicate>("Duplicate"),
                                          InstanceMethod<&Bezier::Duplicate_async>("Duplicate_async"),
                                          InstanceMethod<&Bezier::AddYourGabaritTo>("AddYourGabaritTo"),
                                          InstanceMethod<&Bezier::AddYourGabaritTo_async>("AddYourGabaritTo_async"),
                                          InstanceMethod<&Bezier::GetUseCount>("GetUseCount"),
                                          InstanceMethod<&Bezier::GetUseCount_async>("GetUseCount_async"),
                                          InstanceMethod<&Bezier::AddRef>("AddRef"),
                                          InstanceMethod<&Bezier::AddRef_async>("AddRef_async"),
                                          InstanceMethod<&Bezier::Id>("Id"),

                                      });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Bezier", func);

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

Bezier::Bezier(const Napi::CallbackInfo &info) : Napi::ObjectWrap<Bezier>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    Napi::Error::New(env, "Bezier cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object Bezier::NewInstance(Napi::Env env, MbBezier *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Bezier");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Bezier *unwrapped = Bezier::Unwrap(inst);
    underlying->AddRef();
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Bezier::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Bezier");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value Bezier::GetPointsCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    size_t _result = _underlying->GetPointsCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Bezier::GetPointsCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Bezier_GetPointsCount_AsyncWorker *asyncWorker = new Bezier_GetPointsCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Bezier::GetPoint(const Napi::CallbackInfo &info)
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

Napi::Value Bezier::GetPoint_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "ptrdiff_t index is required."));
        return deferred.Promise();
    }

    int index = info[0].ToNumber().Int64Value();

    Bezier_GetPoint_AsyncWorker *asyncWorker = new Bezier_GetPoint_AsyncWorker(_underlying, deferred,

                                                                               index);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Bezier::AddPoint(const Napi::CallbackInfo &info)
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

Napi::Value Bezier::AddPoint_async(const Napi::CallbackInfo &info)
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

    Bezier_AddPoint_AsyncWorker *asyncWorker = new Bezier_AddPoint_AsyncWorker(_underlying, deferred,

                                                                               pnt);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Bezier::Inverse(const Napi::CallbackInfo &info)
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

Napi::Value Bezier::Inverse_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    MbRegTransform *iReg = NULL;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[0].ToObject());
        iReg = iReg_->_underlying;
    }

    Bezier_Inverse_AsyncWorker *asyncWorker = new Bezier_Inverse_AsyncWorker(_underlying, deferred,

                                                                             iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Bezier::Trimmed(const Napi::CallbackInfo &info)
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

Napi::Value Bezier::Trimmed_async(const Napi::CallbackInfo &info)
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

    Bezier_Trimmed_AsyncWorker *asyncWorker = new Bezier_Trimmed_AsyncWorker(_underlying, deferred,

                                                                             t1,

                                                                             t2,

                                                                             sense);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Bezier::IsStraight(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool ignoreParams = info[0].ToBoolean();

    bool _result = _underlying->IsStraight(info.Length() == 0 || info[0].IsNull() ? false : ignoreParams

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value Bezier::IsStraight_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    bool ignoreParams = info[0].ToBoolean();

    Bezier_IsStraight_AsyncWorker *asyncWorker = new Bezier_IsStraight_AsyncWorker(_underlying, deferred,

                                                                                   ignoreParams);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Bezier::IsClosed(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool _result = _underlying->IsClosed(

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value Bezier::IsClosed_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Bezier_IsClosed_AsyncWorker *asyncWorker = new Bezier_IsClosed_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Bezier::IsBounded(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool _result = _underlying->IsBounded(

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value Bezier::IsBounded_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Bezier_IsBounded_AsyncWorker *asyncWorker = new Bezier_IsBounded_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Bezier::GetTMax(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetTMax(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Bezier::GetTMax_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Bezier_GetTMax_AsyncWorker *asyncWorker = new Bezier_GetTMax_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Bezier::GetTMin(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetTMin(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Bezier::GetTMin_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Bezier_GetTMin_AsyncWorker *asyncWorker = new Bezier_GetTMin_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Bezier::GetPeriod(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetPeriod(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Bezier::GetPeriod_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Bezier_GetPeriod_AsyncWorker *asyncWorker = new Bezier_GetPeriod_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Bezier::GetWeightCentre(const Napi::CallbackInfo &info)
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

Napi::Value Bezier::GetWeightCentre_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Bezier_GetWeightCentre_AsyncWorker *asyncWorker = new Bezier_GetWeightCentre_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Bezier::GetLimitPoint(const Napi::CallbackInfo &info)
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

Napi::Value Bezier::GetLimitPoint_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "ptrdiff_t number is required."));
        return deferred.Promise();
    }

    int number = info[0].ToNumber().Int64Value();

    Bezier_GetLimitPoint_AsyncWorker *asyncWorker = new Bezier_GetLimitPoint_AsyncWorker(_underlying, deferred,

                                                                                         number);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Bezier::PointOn(const Napi::CallbackInfo &info)
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

Napi::Value Bezier::PointOn_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Bezier_PointOn_AsyncWorker *asyncWorker = new Bezier_PointOn_AsyncWorker(_underlying, deferred,

                                                                             t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Bezier::_PointOn(const Napi::CallbackInfo &info)
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

Napi::Value Bezier::_PointOn_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Bezier__PointOn_AsyncWorker *asyncWorker = new Bezier__PointOn_AsyncWorker(_underlying, deferred,

                                                                               t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Bezier::Explore(const Napi::CallbackInfo &info)
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

Napi::Value Bezier::Explore_async(const Napi::CallbackInfo &info)
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

    Bezier_Explore_AsyncWorker *asyncWorker = new Bezier_Explore_AsyncWorker(_underlying, deferred,

                                                                             t,

                                                                             ext);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Bezier::FirstDer(const Napi::CallbackInfo &info)
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

Napi::Value Bezier::FirstDer_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Bezier_FirstDer_AsyncWorker *asyncWorker = new Bezier_FirstDer_AsyncWorker(_underlying, deferred,

                                                                               t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Bezier::_FirstDer(const Napi::CallbackInfo &info)
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

Napi::Value Bezier::_FirstDer_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Bezier__FirstDer_AsyncWorker *asyncWorker = new Bezier__FirstDer_AsyncWorker(_underlying, deferred,

                                                                                 t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Bezier::SecondDer(const Napi::CallbackInfo &info)
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

Napi::Value Bezier::SecondDer_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Bezier_SecondDer_AsyncWorker *asyncWorker = new Bezier_SecondDer_AsyncWorker(_underlying, deferred,

                                                                                 t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Bezier::_SecondDer(const Napi::CallbackInfo &info)
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

Napi::Value Bezier::_SecondDer_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Bezier__SecondDer_AsyncWorker *asyncWorker = new Bezier__SecondDer_AsyncWorker(_underlying, deferred,

                                                                                   t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Bezier::Tangent(const Napi::CallbackInfo &info)
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

Napi::Value Bezier::Tangent_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Bezier_Tangent_AsyncWorker *asyncWorker = new Bezier_Tangent_AsyncWorker(_underlying, deferred,

                                                                             t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Bezier::_Tangent(const Napi::CallbackInfo &info)
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

Napi::Value Bezier::_Tangent_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Bezier__Tangent_AsyncWorker *asyncWorker = new Bezier__Tangent_AsyncWorker(_underlying, deferred,

                                                                               t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Bezier::Normal(const Napi::CallbackInfo &info)
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

Napi::Value Bezier::Normal_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Bezier_Normal_AsyncWorker *asyncWorker = new Bezier_Normal_AsyncWorker(_underlying, deferred,

                                                                           t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Bezier::_Normal(const Napi::CallbackInfo &info)
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

Napi::Value Bezier::_Normal_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Bezier__Normal_AsyncWorker *asyncWorker = new Bezier__Normal_AsyncWorker(_underlying, deferred,

                                                                             t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Bezier::PointRelative(const Napi::CallbackInfo &info)
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

Napi::Value Bezier::PointRelative_async(const Napi::CallbackInfo &info)
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

    Bezier_PointRelative_AsyncWorker *asyncWorker = new Bezier_PointRelative_AsyncWorker(_underlying, deferred,

                                                                                         pnt,

                                                                                         eps);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Bezier::PointLocation(const Napi::CallbackInfo &info)
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

Napi::Value Bezier::PointLocation_async(const Napi::CallbackInfo &info)
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

    Bezier_PointLocation_AsyncWorker *asyncWorker = new Bezier_PointLocation_AsyncWorker(_underlying, deferred,

                                                                                         pnt,

                                                                                         eps);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Bezier::IsA(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbePlaneType _result = _underlying->IsA(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Bezier::IsA_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Bezier_IsA_AsyncWorker *asyncWorker = new Bezier_IsA_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Bezier::Type(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbePlaneType _result = _underlying->Type(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Bezier::Type_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Bezier_Type_AsyncWorker *asyncWorker = new Bezier_Type_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Bezier::Family(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbePlaneType _result = _underlying->Family(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Bezier::Family_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Bezier_Family_AsyncWorker *asyncWorker = new Bezier_Family_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Bezier::Move(const Napi::CallbackInfo &info)
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

Napi::Value Bezier::Move_async(const Napi::CallbackInfo &info)
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

    Bezier_Move_AsyncWorker *asyncWorker = new Bezier_Move_AsyncWorker(_underlying, deferred,

                                                                       to,

                                                                       iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Bezier::Transform(const Napi::CallbackInfo &info)
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

Napi::Value Bezier::Transform_async(const Napi::CallbackInfo &info)
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

    Bezier_Transform_AsyncWorker *asyncWorker = new Bezier_Transform_AsyncWorker(_underlying, deferred,

                                                                                 matr,

                                                                                 iReg,

                                                                                 newSurface);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Bezier::Duplicate(const Napi::CallbackInfo &info)
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

Napi::Value Bezier::Duplicate_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    MbRegDuplicate *dup = NULL;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        RegDuplicate *dup_ = RegDuplicate::Unwrap(info[0].ToObject());
        dup = dup_->_underlying;
    }

    Bezier_Duplicate_AsyncWorker *asyncWorker = new Bezier_Duplicate_AsyncWorker(_underlying, deferred,

                                                                                 dup);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Bezier::AddYourGabaritTo(const Napi::CallbackInfo &info)
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

Napi::Value Bezier::AddYourGabaritTo_async(const Napi::CallbackInfo &info)
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

    Bezier_AddYourGabaritTo_AsyncWorker *asyncWorker = new Bezier_AddYourGabaritTo_AsyncWorker(_underlying, deferred,

                                                                                               rect);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Bezier::GetUseCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    refcount_t _result = _underlying->GetUseCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Bezier::GetUseCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Bezier_GetUseCount_AsyncWorker *asyncWorker = new Bezier_GetUseCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Bezier::AddRef(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->AddRef(

    );

    return env.Undefined();
}

Napi::Value Bezier::AddRef_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Bezier_AddRef_AsyncWorker *asyncWorker = new Bezier_AddRef_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value Bezier::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

Bezier::~Bezier()
{
    // std::cout << "calling ::DeleteItem on Bezier for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

Bezier_GetPointsCount_AsyncWorker::Bezier_GetPointsCount_AsyncWorker(MbBezier *_underlying,
                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Bezier_GetPointsCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    size_t _result = _underlying->GetPointsCount();

    this->_result = _result;

    ExitParallelRegion();
}

void Bezier_GetPointsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    size_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Bezier_GetPointsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Bezier_GetPoint_AsyncWorker::Bezier_GetPoint_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d,
                                                         ptrdiff_t index)
    : _underlying(_underlying), PromiseWorker(d), index(index){};

void Bezier_GetPoint_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint *pnt = new MbCartPoint;

    _underlying->GetPoint(index, *pnt);

    this->pnt = pnt;

    ExitParallelRegion();
}

void Bezier_GetPoint_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Bezier_GetPoint_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Bezier_AddPoint_AsyncWorker::Bezier_AddPoint_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d,
                                                         const MbCartPoint &pnt)
    : _underlying(_underlying), PromiseWorker(d), pnt(pnt){};

void Bezier_AddPoint_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddPoint(pnt);

    ExitParallelRegion();
}

void Bezier_AddPoint_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Bezier_AddPoint_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Bezier_Inverse_AsyncWorker::Bezier_Inverse_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d,
                                                       MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), iReg(iReg){};

void Bezier_Inverse_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Inverse(iReg);

    ExitParallelRegion();
}

void Bezier_Inverse_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Bezier_Inverse_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Bezier_Trimmed_AsyncWorker::Bezier_Trimmed_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d,
                                                       double t1, double t2, int sense)
    : _underlying(_underlying), PromiseWorker(d), t1(t1), t2(t2), sense(sense){};

void Bezier_Trimmed_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCurve *_result = _underlying->Trimmed(t1, t2, sense);

    this->_result = _result;

    ExitParallelRegion();
}

void Bezier_Trimmed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Bezier_Trimmed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Bezier_IsStraight_AsyncWorker::Bezier_IsStraight_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d,
                                                             bool ignoreParams)
    : _underlying(_underlying), PromiseWorker(d), ignoreParams(ignoreParams){};

void Bezier_IsStraight_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsStraight(ignoreParams);

    this->_result = _result;

    ExitParallelRegion();
}

void Bezier_IsStraight_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void Bezier_IsStraight_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Bezier_IsClosed_AsyncWorker::Bezier_IsClosed_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Bezier_IsClosed_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsClosed();

    this->_result = _result;

    ExitParallelRegion();
}

void Bezier_IsClosed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void Bezier_IsClosed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Bezier_IsBounded_AsyncWorker::Bezier_IsBounded_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Bezier_IsBounded_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsBounded();

    this->_result = _result;

    ExitParallelRegion();
}

void Bezier_IsBounded_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void Bezier_IsBounded_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Bezier_GetTMax_AsyncWorker::Bezier_GetTMax_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Bezier_GetTMax_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetTMax();

    this->_result = _result;

    ExitParallelRegion();
}

void Bezier_GetTMax_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Bezier_GetTMax_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Bezier_GetTMin_AsyncWorker::Bezier_GetTMin_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Bezier_GetTMin_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetTMin();

    this->_result = _result;

    ExitParallelRegion();
}

void Bezier_GetTMin_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Bezier_GetTMin_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Bezier_GetPeriod_AsyncWorker::Bezier_GetPeriod_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Bezier_GetPeriod_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetPeriod();

    this->_result = _result;

    ExitParallelRegion();
}

void Bezier_GetPeriod_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Bezier_GetPeriod_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Bezier_GetWeightCentre_AsyncWorker::Bezier_GetWeightCentre_AsyncWorker(MbBezier *_underlying,
                                                                       Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Bezier_GetWeightCentre_AsyncWorker::Execute()
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

void Bezier_GetWeightCentre_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Bezier_GetWeightCentre_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Bezier_GetLimitPoint_AsyncWorker::Bezier_GetLimitPoint_AsyncWorker(MbBezier *_underlying,
                                                                   Napi::Promise::Deferred const &d, ptrdiff_t number)
    : _underlying(_underlying), PromiseWorker(d), number(number){};

void Bezier_GetLimitPoint_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint *point = new MbCartPoint;

    _underlying->GetLimitPoint(number, *point);

    this->point = point;

    ExitParallelRegion();
}

void Bezier_GetLimitPoint_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Bezier_GetLimitPoint_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Bezier_PointOn_AsyncWorker::Bezier_PointOn_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d,
                                                       double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Bezier_PointOn_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint *p = new MbCartPoint;

    _underlying->PointOn(t, *p);

    this->p = p;

    ExitParallelRegion();
}

void Bezier_PointOn_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Bezier_PointOn_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Bezier__PointOn_AsyncWorker::Bezier__PointOn_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d,
                                                         double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Bezier__PointOn_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint *p = new MbCartPoint;

    _underlying->_PointOn(t, *p);

    this->p = p;

    ExitParallelRegion();
}

void Bezier__PointOn_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Bezier__PointOn_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Bezier_Explore_AsyncWorker::Bezier_Explore_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d,
                                                       double &t, bool ext)
    : _underlying(_underlying), PromiseWorker(d), t(t), ext(ext){};

void Bezier_Explore_AsyncWorker::Execute()
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

void Bezier_Explore_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Bezier_Explore_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Bezier_FirstDer_AsyncWorker::Bezier_FirstDer_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d,
                                                         double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Bezier_FirstDer_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->FirstDer(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void Bezier_FirstDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Bezier_FirstDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Bezier__FirstDer_AsyncWorker::Bezier__FirstDer_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d,
                                                           double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Bezier__FirstDer_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->_FirstDer(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void Bezier__FirstDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Bezier__FirstDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Bezier_SecondDer_AsyncWorker::Bezier_SecondDer_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d,
                                                           double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Bezier_SecondDer_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->SecondDer(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void Bezier_SecondDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Bezier_SecondDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Bezier__SecondDer_AsyncWorker::Bezier__SecondDer_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d,
                                                             double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Bezier__SecondDer_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->_SecondDer(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void Bezier__SecondDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Bezier__SecondDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Bezier_Tangent_AsyncWorker::Bezier_Tangent_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d,
                                                       double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Bezier_Tangent_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->Tangent(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void Bezier_Tangent_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Bezier_Tangent_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Bezier__Tangent_AsyncWorker::Bezier__Tangent_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d,
                                                         double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Bezier__Tangent_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->_Tangent(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void Bezier__Tangent_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Bezier__Tangent_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Bezier_Normal_AsyncWorker::Bezier_Normal_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Bezier_Normal_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->Normal(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void Bezier_Normal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Bezier_Normal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Bezier__Normal_AsyncWorker::Bezier__Normal_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d,
                                                       double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Bezier__Normal_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->_Normal(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void Bezier__Normal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Bezier__Normal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Bezier_PointRelative_AsyncWorker::Bezier_PointRelative_AsyncWorker(MbBezier *_underlying,
                                                                   Napi::Promise::Deferred const &d,
                                                                   const MbCartPoint &pnt, double eps)
    : _underlying(_underlying), PromiseWorker(d), pnt(pnt), eps(eps){};

void Bezier_PointRelative_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeItemLocation _result = _underlying->PointRelative(pnt, eps);

    this->_result = _result;

    ExitParallelRegion();
}

void Bezier_PointRelative_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeItemLocation _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Bezier_PointRelative_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Bezier_PointLocation_AsyncWorker::Bezier_PointLocation_AsyncWorker(MbBezier *_underlying,
                                                                   Napi::Promise::Deferred const &d,
                                                                   const MbCartPoint &pnt, double eps)
    : _underlying(_underlying), PromiseWorker(d), pnt(pnt), eps(eps){};

void Bezier_PointLocation_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeLocation _result = _underlying->PointLocation(pnt, eps);

    this->_result = _result;

    ExitParallelRegion();
}

void Bezier_PointLocation_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeLocation _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Bezier_PointLocation_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Bezier_IsA_AsyncWorker::Bezier_IsA_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Bezier_IsA_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbePlaneType _result = _underlying->IsA();

    this->_result = _result;

    ExitParallelRegion();
}

void Bezier_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbePlaneType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Bezier_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Bezier_Type_AsyncWorker::Bezier_Type_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Bezier_Type_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbePlaneType _result = _underlying->Type();

    this->_result = _result;

    ExitParallelRegion();
}

void Bezier_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbePlaneType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Bezier_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Bezier_Family_AsyncWorker::Bezier_Family_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Bezier_Family_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbePlaneType _result = _underlying->Family();

    this->_result = _result;

    ExitParallelRegion();
}

void Bezier_Family_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbePlaneType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Bezier_Family_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Bezier_Move_AsyncWorker::Bezier_Move_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d,
                                                 const MbVector &to, MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), to(to), iReg(iReg){};

void Bezier_Move_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbSurface *newSurface = NULL;

    _underlying->Move(to, iReg, newSurface);

    this->newSurface = newSurface;

    ExitParallelRegion();
}

void Bezier_Move_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Bezier_Move_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Bezier_Transform_AsyncWorker::Bezier_Transform_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d,
                                                           const MbMatrix &matr, MbRegTransform *iReg,
                                                           const MbSurface *newSurface)
    : _underlying(_underlying), PromiseWorker(d), matr(matr), iReg(iReg), newSurface(newSurface){};

void Bezier_Transform_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Transform(matr, iReg, newSurface);

    ExitParallelRegion();
}

void Bezier_Transform_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Bezier_Transform_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Bezier_Duplicate_AsyncWorker::Bezier_Duplicate_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d,
                                                           MbRegDuplicate *dup)
    : _underlying(_underlying), PromiseWorker(d), dup(dup){};

void Bezier_Duplicate_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbPlaneItem &_result = _underlying->Duplicate(dup);

    this->_result = (MbPlaneItem *)&(_result);

    ExitParallelRegion();
}

void Bezier_Duplicate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbPlaneItem *_result = this->_result;
    _to = PlaneItem::NewInstance(env, (MbPlaneItem *)&(_result));

    deferred.Resolve(_to);
}

void Bezier_Duplicate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Bezier_AddYourGabaritTo_AsyncWorker::Bezier_AddYourGabaritTo_AsyncWorker(MbBezier *_underlying,
                                                                         Napi::Promise::Deferred const &d, MbRect &rect)
    : _underlying(_underlying), PromiseWorker(d), rect(rect){};

void Bezier_AddYourGabaritTo_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddYourGabaritTo(rect);

    ExitParallelRegion();
}

void Bezier_AddYourGabaritTo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Bezier_AddYourGabaritTo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Bezier_GetUseCount_AsyncWorker::Bezier_GetUseCount_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Bezier_GetUseCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    refcount_t _result = _underlying->GetUseCount();

    this->_result = _result;

    ExitParallelRegion();
}

void Bezier_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    refcount_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Bezier_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Bezier_AddRef_AsyncWorker::Bezier_AddRef_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Bezier_AddRef_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddRef();

    ExitParallelRegion();
}

void Bezier_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Bezier_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
