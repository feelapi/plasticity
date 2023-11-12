// This is a generated file, modify: generate/templates/Hermit.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/Hermit.h"

#include "tool_mutex.h"

Napi::Object Hermit::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(env, "Hermit",
                                      {
                                          InstanceMethod<&Hermit::GetPointsCount>("GetPointsCount"),
                                          InstanceMethod<&Hermit::GetPointsCount_async>("GetPointsCount_async"),
                                          InstanceMethod<&Hermit::GetPoint>("GetPoint"),
                                          InstanceMethod<&Hermit::GetPoint_async>("GetPoint_async"),
                                          InstanceMethod<&Hermit::AddPoint>("AddPoint"),
                                          InstanceMethod<&Hermit::AddPoint_async>("AddPoint_async"),
                                          InstanceMethod<&Hermit::Inverse>("Inverse"),
                                          InstanceMethod<&Hermit::Inverse_async>("Inverse_async"),
                                          InstanceMethod<&Hermit::Trimmed>("Trimmed"),
                                          InstanceMethod<&Hermit::Trimmed_async>("Trimmed_async"),
                                          InstanceMethod<&Hermit::IsStraight>("IsStraight"),
                                          InstanceMethod<&Hermit::IsStraight_async>("IsStraight_async"),
                                          InstanceMethod<&Hermit::IsClosed>("IsClosed"),
                                          InstanceMethod<&Hermit::IsClosed_async>("IsClosed_async"),
                                          InstanceMethod<&Hermit::IsBounded>("IsBounded"),
                                          InstanceMethod<&Hermit::IsBounded_async>("IsBounded_async"),
                                          InstanceMethod<&Hermit::GetTMax>("GetTMax"),
                                          InstanceMethod<&Hermit::GetTMax_async>("GetTMax_async"),
                                          InstanceMethod<&Hermit::GetTMin>("GetTMin"),
                                          InstanceMethod<&Hermit::GetTMin_async>("GetTMin_async"),
                                          InstanceMethod<&Hermit::GetPeriod>("GetPeriod"),
                                          InstanceMethod<&Hermit::GetPeriod_async>("GetPeriod_async"),
                                          InstanceMethod<&Hermit::GetWeightCentre>("GetWeightCentre"),
                                          InstanceMethod<&Hermit::GetWeightCentre_async>("GetWeightCentre_async"),
                                          InstanceMethod<&Hermit::GetLimitPoint>("GetLimitPoint"),
                                          InstanceMethod<&Hermit::GetLimitPoint_async>("GetLimitPoint_async"),
                                          InstanceMethod<&Hermit::PointOn>("PointOn"),
                                          InstanceMethod<&Hermit::PointOn_async>("PointOn_async"),
                                          InstanceMethod<&Hermit::_PointOn>("_PointOn"),
                                          InstanceMethod<&Hermit::_PointOn_async>("_PointOn_async"),
                                          InstanceMethod<&Hermit::Explore>("Explore"),
                                          InstanceMethod<&Hermit::Explore_async>("Explore_async"),
                                          InstanceMethod<&Hermit::FirstDer>("FirstDer"),
                                          InstanceMethod<&Hermit::FirstDer_async>("FirstDer_async"),
                                          InstanceMethod<&Hermit::_FirstDer>("_FirstDer"),
                                          InstanceMethod<&Hermit::_FirstDer_async>("_FirstDer_async"),
                                          InstanceMethod<&Hermit::SecondDer>("SecondDer"),
                                          InstanceMethod<&Hermit::SecondDer_async>("SecondDer_async"),
                                          InstanceMethod<&Hermit::_SecondDer>("_SecondDer"),
                                          InstanceMethod<&Hermit::_SecondDer_async>("_SecondDer_async"),
                                          InstanceMethod<&Hermit::Tangent>("Tangent"),
                                          InstanceMethod<&Hermit::Tangent_async>("Tangent_async"),
                                          InstanceMethod<&Hermit::_Tangent>("_Tangent"),
                                          InstanceMethod<&Hermit::_Tangent_async>("_Tangent_async"),
                                          InstanceMethod<&Hermit::Normal>("Normal"),
                                          InstanceMethod<&Hermit::Normal_async>("Normal_async"),
                                          InstanceMethod<&Hermit::_Normal>("_Normal"),
                                          InstanceMethod<&Hermit::_Normal_async>("_Normal_async"),
                                          InstanceMethod<&Hermit::PointRelative>("PointRelative"),
                                          InstanceMethod<&Hermit::PointRelative_async>("PointRelative_async"),
                                          InstanceMethod<&Hermit::PointLocation>("PointLocation"),
                                          InstanceMethod<&Hermit::PointLocation_async>("PointLocation_async"),
                                          InstanceMethod<&Hermit::IsA>("IsA"),
                                          InstanceMethod<&Hermit::IsA_async>("IsA_async"),
                                          InstanceMethod<&Hermit::Type>("Type"),
                                          InstanceMethod<&Hermit::Type_async>("Type_async"),
                                          InstanceMethod<&Hermit::Family>("Family"),
                                          InstanceMethod<&Hermit::Family_async>("Family_async"),
                                          InstanceMethod<&Hermit::Move>("Move"),
                                          InstanceMethod<&Hermit::Move_async>("Move_async"),
                                          InstanceMethod<&Hermit::Transform>("Transform"),
                                          InstanceMethod<&Hermit::Transform_async>("Transform_async"),
                                          InstanceMethod<&Hermit::Duplicate>("Duplicate"),
                                          InstanceMethod<&Hermit::Duplicate_async>("Duplicate_async"),
                                          InstanceMethod<&Hermit::AddYourGabaritTo>("AddYourGabaritTo"),
                                          InstanceMethod<&Hermit::AddYourGabaritTo_async>("AddYourGabaritTo_async"),
                                          InstanceMethod<&Hermit::GetUseCount>("GetUseCount"),
                                          InstanceMethod<&Hermit::GetUseCount_async>("GetUseCount_async"),
                                          InstanceMethod<&Hermit::AddRef>("AddRef"),
                                          InstanceMethod<&Hermit::AddRef_async>("AddRef_async"),
                                          InstanceMethod<&Hermit::Id>("Id"),

                                      });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Hermit", func);

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

Hermit::Hermit(const Napi::CallbackInfo &info) : Napi::ObjectWrap<Hermit>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    Napi::Error::New(env, "Hermit cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object Hermit::NewInstance(Napi::Env env, MbHermit *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Hermit");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Hermit *unwrapped = Hermit::Unwrap(inst);
    underlying->AddRef();
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Hermit::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Hermit");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value Hermit::GetPointsCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    size_t _result = _underlying->GetPointsCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Hermit::GetPointsCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Hermit_GetPointsCount_AsyncWorker *asyncWorker = new Hermit_GetPointsCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Hermit::GetPoint(const Napi::CallbackInfo &info)
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

Napi::Value Hermit::GetPoint_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "ptrdiff_t index is required."));
        return deferred.Promise();
    }

    int index = info[0].ToNumber().Int64Value();

    Hermit_GetPoint_AsyncWorker *asyncWorker = new Hermit_GetPoint_AsyncWorker(_underlying, deferred,

                                                                               index);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Hermit::AddPoint(const Napi::CallbackInfo &info)
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

Napi::Value Hermit::AddPoint_async(const Napi::CallbackInfo &info)
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

    Hermit_AddPoint_AsyncWorker *asyncWorker = new Hermit_AddPoint_AsyncWorker(_underlying, deferred,

                                                                               pnt);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Hermit::Inverse(const Napi::CallbackInfo &info)
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

Napi::Value Hermit::Inverse_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    MbRegTransform *iReg = NULL;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[0].ToObject());
        iReg = iReg_->_underlying;
    }

    Hermit_Inverse_AsyncWorker *asyncWorker = new Hermit_Inverse_AsyncWorker(_underlying, deferred,

                                                                             iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Hermit::Trimmed(const Napi::CallbackInfo &info)
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

Napi::Value Hermit::Trimmed_async(const Napi::CallbackInfo &info)
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

    Hermit_Trimmed_AsyncWorker *asyncWorker = new Hermit_Trimmed_AsyncWorker(_underlying, deferred,

                                                                             t1,

                                                                             t2,

                                                                             sense);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Hermit::IsStraight(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool ignoreParams = info[0].ToBoolean();

    bool _result = _underlying->IsStraight(info.Length() == 0 || info[0].IsNull() ? false : ignoreParams

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value Hermit::IsStraight_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    bool ignoreParams = info[0].ToBoolean();

    Hermit_IsStraight_AsyncWorker *asyncWorker = new Hermit_IsStraight_AsyncWorker(_underlying, deferred,

                                                                                   ignoreParams);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Hermit::IsClosed(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool _result = _underlying->IsClosed(

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value Hermit::IsClosed_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Hermit_IsClosed_AsyncWorker *asyncWorker = new Hermit_IsClosed_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Hermit::IsBounded(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool _result = _underlying->IsBounded(

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value Hermit::IsBounded_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Hermit_IsBounded_AsyncWorker *asyncWorker = new Hermit_IsBounded_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Hermit::GetTMax(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetTMax(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Hermit::GetTMax_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Hermit_GetTMax_AsyncWorker *asyncWorker = new Hermit_GetTMax_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Hermit::GetTMin(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetTMin(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Hermit::GetTMin_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Hermit_GetTMin_AsyncWorker *asyncWorker = new Hermit_GetTMin_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Hermit::GetPeriod(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetPeriod(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Hermit::GetPeriod_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Hermit_GetPeriod_AsyncWorker *asyncWorker = new Hermit_GetPeriod_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Hermit::GetWeightCentre(const Napi::CallbackInfo &info)
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

Napi::Value Hermit::GetWeightCentre_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Hermit_GetWeightCentre_AsyncWorker *asyncWorker = new Hermit_GetWeightCentre_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Hermit::GetLimitPoint(const Napi::CallbackInfo &info)
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

Napi::Value Hermit::GetLimitPoint_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "ptrdiff_t number is required."));
        return deferred.Promise();
    }

    int number = info[0].ToNumber().Int64Value();

    Hermit_GetLimitPoint_AsyncWorker *asyncWorker = new Hermit_GetLimitPoint_AsyncWorker(_underlying, deferred,

                                                                                         number);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Hermit::PointOn(const Napi::CallbackInfo &info)
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

Napi::Value Hermit::PointOn_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Hermit_PointOn_AsyncWorker *asyncWorker = new Hermit_PointOn_AsyncWorker(_underlying, deferred,

                                                                             t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Hermit::_PointOn(const Napi::CallbackInfo &info)
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

Napi::Value Hermit::_PointOn_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Hermit__PointOn_AsyncWorker *asyncWorker = new Hermit__PointOn_AsyncWorker(_underlying, deferred,

                                                                               t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Hermit::Explore(const Napi::CallbackInfo &info)
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

Napi::Value Hermit::Explore_async(const Napi::CallbackInfo &info)
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

    Hermit_Explore_AsyncWorker *asyncWorker = new Hermit_Explore_AsyncWorker(_underlying, deferred,

                                                                             t,

                                                                             ext);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Hermit::FirstDer(const Napi::CallbackInfo &info)
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

Napi::Value Hermit::FirstDer_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Hermit_FirstDer_AsyncWorker *asyncWorker = new Hermit_FirstDer_AsyncWorker(_underlying, deferred,

                                                                               t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Hermit::_FirstDer(const Napi::CallbackInfo &info)
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

Napi::Value Hermit::_FirstDer_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Hermit__FirstDer_AsyncWorker *asyncWorker = new Hermit__FirstDer_AsyncWorker(_underlying, deferred,

                                                                                 t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Hermit::SecondDer(const Napi::CallbackInfo &info)
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

Napi::Value Hermit::SecondDer_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Hermit_SecondDer_AsyncWorker *asyncWorker = new Hermit_SecondDer_AsyncWorker(_underlying, deferred,

                                                                                 t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Hermit::_SecondDer(const Napi::CallbackInfo &info)
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

Napi::Value Hermit::_SecondDer_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Hermit__SecondDer_AsyncWorker *asyncWorker = new Hermit__SecondDer_AsyncWorker(_underlying, deferred,

                                                                                   t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Hermit::Tangent(const Napi::CallbackInfo &info)
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

Napi::Value Hermit::Tangent_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Hermit_Tangent_AsyncWorker *asyncWorker = new Hermit_Tangent_AsyncWorker(_underlying, deferred,

                                                                             t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Hermit::_Tangent(const Napi::CallbackInfo &info)
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

Napi::Value Hermit::_Tangent_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Hermit__Tangent_AsyncWorker *asyncWorker = new Hermit__Tangent_AsyncWorker(_underlying, deferred,

                                                                               t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Hermit::Normal(const Napi::CallbackInfo &info)
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

Napi::Value Hermit::Normal_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Hermit_Normal_AsyncWorker *asyncWorker = new Hermit_Normal_AsyncWorker(_underlying, deferred,

                                                                           t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Hermit::_Normal(const Napi::CallbackInfo &info)
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

Napi::Value Hermit::_Normal_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Hermit__Normal_AsyncWorker *asyncWorker = new Hermit__Normal_AsyncWorker(_underlying, deferred,

                                                                             t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Hermit::PointRelative(const Napi::CallbackInfo &info)
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

Napi::Value Hermit::PointRelative_async(const Napi::CallbackInfo &info)
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

    Hermit_PointRelative_AsyncWorker *asyncWorker = new Hermit_PointRelative_AsyncWorker(_underlying, deferred,

                                                                                         pnt,

                                                                                         eps);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Hermit::PointLocation(const Napi::CallbackInfo &info)
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

Napi::Value Hermit::PointLocation_async(const Napi::CallbackInfo &info)
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

    Hermit_PointLocation_AsyncWorker *asyncWorker = new Hermit_PointLocation_AsyncWorker(_underlying, deferred,

                                                                                         pnt,

                                                                                         eps);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Hermit::IsA(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbePlaneType _result = _underlying->IsA(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Hermit::IsA_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Hermit_IsA_AsyncWorker *asyncWorker = new Hermit_IsA_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Hermit::Type(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbePlaneType _result = _underlying->Type(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Hermit::Type_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Hermit_Type_AsyncWorker *asyncWorker = new Hermit_Type_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Hermit::Family(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbePlaneType _result = _underlying->Family(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Hermit::Family_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Hermit_Family_AsyncWorker *asyncWorker = new Hermit_Family_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Hermit::Move(const Napi::CallbackInfo &info)
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

Napi::Value Hermit::Move_async(const Napi::CallbackInfo &info)
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

    Hermit_Move_AsyncWorker *asyncWorker = new Hermit_Move_AsyncWorker(_underlying, deferred,

                                                                       to,

                                                                       iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Hermit::Transform(const Napi::CallbackInfo &info)
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

Napi::Value Hermit::Transform_async(const Napi::CallbackInfo &info)
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

    Hermit_Transform_AsyncWorker *asyncWorker = new Hermit_Transform_AsyncWorker(_underlying, deferred,

                                                                                 matr,

                                                                                 iReg,

                                                                                 newSurface);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Hermit::Duplicate(const Napi::CallbackInfo &info)
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

Napi::Value Hermit::Duplicate_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    MbRegDuplicate *dup = NULL;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        RegDuplicate *dup_ = RegDuplicate::Unwrap(info[0].ToObject());
        dup = dup_->_underlying;
    }

    Hermit_Duplicate_AsyncWorker *asyncWorker = new Hermit_Duplicate_AsyncWorker(_underlying, deferred,

                                                                                 dup);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Hermit::AddYourGabaritTo(const Napi::CallbackInfo &info)
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

Napi::Value Hermit::AddYourGabaritTo_async(const Napi::CallbackInfo &info)
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

    Hermit_AddYourGabaritTo_AsyncWorker *asyncWorker = new Hermit_AddYourGabaritTo_AsyncWorker(_underlying, deferred,

                                                                                               rect);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Hermit::GetUseCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    refcount_t _result = _underlying->GetUseCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Hermit::GetUseCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Hermit_GetUseCount_AsyncWorker *asyncWorker = new Hermit_GetUseCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Hermit::AddRef(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->AddRef(

    );

    return env.Undefined();
}

Napi::Value Hermit::AddRef_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Hermit_AddRef_AsyncWorker *asyncWorker = new Hermit_AddRef_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value Hermit::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

Hermit::~Hermit()
{
    // std::cout << "calling ::DeleteItem on Hermit for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

Hermit_GetPointsCount_AsyncWorker::Hermit_GetPointsCount_AsyncWorker(MbHermit *_underlying,
                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Hermit_GetPointsCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    size_t _result = _underlying->GetPointsCount();

    this->_result = _result;

    ExitParallelRegion();
}

void Hermit_GetPointsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    size_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Hermit_GetPointsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Hermit_GetPoint_AsyncWorker::Hermit_GetPoint_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d,
                                                         ptrdiff_t index)
    : _underlying(_underlying), PromiseWorker(d), index(index){};

void Hermit_GetPoint_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint *pnt = new MbCartPoint;

    _underlying->GetPoint(index, *pnt);

    this->pnt = pnt;

    ExitParallelRegion();
}

void Hermit_GetPoint_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Hermit_GetPoint_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Hermit_AddPoint_AsyncWorker::Hermit_AddPoint_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d,
                                                         const MbCartPoint &pnt)
    : _underlying(_underlying), PromiseWorker(d), pnt(pnt){};

void Hermit_AddPoint_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddPoint(pnt);

    ExitParallelRegion();
}

void Hermit_AddPoint_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Hermit_AddPoint_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Hermit_Inverse_AsyncWorker::Hermit_Inverse_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d,
                                                       MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), iReg(iReg){};

void Hermit_Inverse_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Inverse(iReg);

    ExitParallelRegion();
}

void Hermit_Inverse_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Hermit_Inverse_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Hermit_Trimmed_AsyncWorker::Hermit_Trimmed_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d,
                                                       double t1, double t2, int sense)
    : _underlying(_underlying), PromiseWorker(d), t1(t1), t2(t2), sense(sense){};

void Hermit_Trimmed_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCurve *_result = _underlying->Trimmed(t1, t2, sense);

    this->_result = _result;

    ExitParallelRegion();
}

void Hermit_Trimmed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Hermit_Trimmed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Hermit_IsStraight_AsyncWorker::Hermit_IsStraight_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d,
                                                             bool ignoreParams)
    : _underlying(_underlying), PromiseWorker(d), ignoreParams(ignoreParams){};

void Hermit_IsStraight_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsStraight(ignoreParams);

    this->_result = _result;

    ExitParallelRegion();
}

void Hermit_IsStraight_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void Hermit_IsStraight_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Hermit_IsClosed_AsyncWorker::Hermit_IsClosed_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Hermit_IsClosed_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsClosed();

    this->_result = _result;

    ExitParallelRegion();
}

void Hermit_IsClosed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void Hermit_IsClosed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Hermit_IsBounded_AsyncWorker::Hermit_IsBounded_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Hermit_IsBounded_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsBounded();

    this->_result = _result;

    ExitParallelRegion();
}

void Hermit_IsBounded_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void Hermit_IsBounded_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Hermit_GetTMax_AsyncWorker::Hermit_GetTMax_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Hermit_GetTMax_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetTMax();

    this->_result = _result;

    ExitParallelRegion();
}

void Hermit_GetTMax_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Hermit_GetTMax_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Hermit_GetTMin_AsyncWorker::Hermit_GetTMin_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Hermit_GetTMin_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetTMin();

    this->_result = _result;

    ExitParallelRegion();
}

void Hermit_GetTMin_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Hermit_GetTMin_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Hermit_GetPeriod_AsyncWorker::Hermit_GetPeriod_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Hermit_GetPeriod_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetPeriod();

    this->_result = _result;

    ExitParallelRegion();
}

void Hermit_GetPeriod_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Hermit_GetPeriod_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Hermit_GetWeightCentre_AsyncWorker::Hermit_GetWeightCentre_AsyncWorker(MbHermit *_underlying,
                                                                       Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Hermit_GetWeightCentre_AsyncWorker::Execute()
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

void Hermit_GetWeightCentre_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Hermit_GetWeightCentre_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Hermit_GetLimitPoint_AsyncWorker::Hermit_GetLimitPoint_AsyncWorker(MbHermit *_underlying,
                                                                   Napi::Promise::Deferred const &d, ptrdiff_t number)
    : _underlying(_underlying), PromiseWorker(d), number(number){};

void Hermit_GetLimitPoint_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint *point = new MbCartPoint;

    _underlying->GetLimitPoint(number, *point);

    this->point = point;

    ExitParallelRegion();
}

void Hermit_GetLimitPoint_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Hermit_GetLimitPoint_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Hermit_PointOn_AsyncWorker::Hermit_PointOn_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d,
                                                       double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Hermit_PointOn_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint *p = new MbCartPoint;

    _underlying->PointOn(t, *p);

    this->p = p;

    ExitParallelRegion();
}

void Hermit_PointOn_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Hermit_PointOn_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Hermit__PointOn_AsyncWorker::Hermit__PointOn_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d,
                                                         double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Hermit__PointOn_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint *p = new MbCartPoint;

    _underlying->_PointOn(t, *p);

    this->p = p;

    ExitParallelRegion();
}

void Hermit__PointOn_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Hermit__PointOn_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Hermit_Explore_AsyncWorker::Hermit_Explore_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d,
                                                       double &t, bool ext)
    : _underlying(_underlying), PromiseWorker(d), t(t), ext(ext){};

void Hermit_Explore_AsyncWorker::Execute()
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

void Hermit_Explore_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Hermit_Explore_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Hermit_FirstDer_AsyncWorker::Hermit_FirstDer_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d,
                                                         double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Hermit_FirstDer_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->FirstDer(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void Hermit_FirstDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Hermit_FirstDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Hermit__FirstDer_AsyncWorker::Hermit__FirstDer_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d,
                                                           double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Hermit__FirstDer_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->_FirstDer(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void Hermit__FirstDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Hermit__FirstDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Hermit_SecondDer_AsyncWorker::Hermit_SecondDer_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d,
                                                           double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Hermit_SecondDer_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->SecondDer(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void Hermit_SecondDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Hermit_SecondDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Hermit__SecondDer_AsyncWorker::Hermit__SecondDer_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d,
                                                             double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Hermit__SecondDer_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->_SecondDer(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void Hermit__SecondDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Hermit__SecondDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Hermit_Tangent_AsyncWorker::Hermit_Tangent_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d,
                                                       double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Hermit_Tangent_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->Tangent(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void Hermit_Tangent_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Hermit_Tangent_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Hermit__Tangent_AsyncWorker::Hermit__Tangent_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d,
                                                         double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Hermit__Tangent_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->_Tangent(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void Hermit__Tangent_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Hermit__Tangent_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Hermit_Normal_AsyncWorker::Hermit_Normal_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Hermit_Normal_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->Normal(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void Hermit_Normal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Hermit_Normal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Hermit__Normal_AsyncWorker::Hermit__Normal_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d,
                                                       double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Hermit__Normal_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->_Normal(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void Hermit__Normal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Hermit__Normal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Hermit_PointRelative_AsyncWorker::Hermit_PointRelative_AsyncWorker(MbHermit *_underlying,
                                                                   Napi::Promise::Deferred const &d,
                                                                   const MbCartPoint &pnt, double eps)
    : _underlying(_underlying), PromiseWorker(d), pnt(pnt), eps(eps){};

void Hermit_PointRelative_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeItemLocation _result = _underlying->PointRelative(pnt, eps);

    this->_result = _result;

    ExitParallelRegion();
}

void Hermit_PointRelative_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeItemLocation _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Hermit_PointRelative_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Hermit_PointLocation_AsyncWorker::Hermit_PointLocation_AsyncWorker(MbHermit *_underlying,
                                                                   Napi::Promise::Deferred const &d,
                                                                   const MbCartPoint &pnt, double eps)
    : _underlying(_underlying), PromiseWorker(d), pnt(pnt), eps(eps){};

void Hermit_PointLocation_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeLocation _result = _underlying->PointLocation(pnt, eps);

    this->_result = _result;

    ExitParallelRegion();
}

void Hermit_PointLocation_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeLocation _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Hermit_PointLocation_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Hermit_IsA_AsyncWorker::Hermit_IsA_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Hermit_IsA_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbePlaneType _result = _underlying->IsA();

    this->_result = _result;

    ExitParallelRegion();
}

void Hermit_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbePlaneType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Hermit_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Hermit_Type_AsyncWorker::Hermit_Type_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Hermit_Type_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbePlaneType _result = _underlying->Type();

    this->_result = _result;

    ExitParallelRegion();
}

void Hermit_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbePlaneType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Hermit_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Hermit_Family_AsyncWorker::Hermit_Family_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Hermit_Family_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbePlaneType _result = _underlying->Family();

    this->_result = _result;

    ExitParallelRegion();
}

void Hermit_Family_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbePlaneType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Hermit_Family_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Hermit_Move_AsyncWorker::Hermit_Move_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d,
                                                 const MbVector &to, MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), to(to), iReg(iReg){};

void Hermit_Move_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbSurface *newSurface = NULL;

    _underlying->Move(to, iReg, newSurface);

    this->newSurface = newSurface;

    ExitParallelRegion();
}

void Hermit_Move_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Hermit_Move_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Hermit_Transform_AsyncWorker::Hermit_Transform_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d,
                                                           const MbMatrix &matr, MbRegTransform *iReg,
                                                           const MbSurface *newSurface)
    : _underlying(_underlying), PromiseWorker(d), matr(matr), iReg(iReg), newSurface(newSurface){};

void Hermit_Transform_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Transform(matr, iReg, newSurface);

    ExitParallelRegion();
}

void Hermit_Transform_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Hermit_Transform_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Hermit_Duplicate_AsyncWorker::Hermit_Duplicate_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d,
                                                           MbRegDuplicate *dup)
    : _underlying(_underlying), PromiseWorker(d), dup(dup){};

void Hermit_Duplicate_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbPlaneItem &_result = _underlying->Duplicate(dup);

    this->_result = (MbPlaneItem *)&(_result);

    ExitParallelRegion();
}

void Hermit_Duplicate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbPlaneItem *_result = this->_result;
    _to = PlaneItem::NewInstance(env, (MbPlaneItem *)&(_result));

    deferred.Resolve(_to);
}

void Hermit_Duplicate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Hermit_AddYourGabaritTo_AsyncWorker::Hermit_AddYourGabaritTo_AsyncWorker(MbHermit *_underlying,
                                                                         Napi::Promise::Deferred const &d, MbRect &rect)
    : _underlying(_underlying), PromiseWorker(d), rect(rect){};

void Hermit_AddYourGabaritTo_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddYourGabaritTo(rect);

    ExitParallelRegion();
}

void Hermit_AddYourGabaritTo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Hermit_AddYourGabaritTo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Hermit_GetUseCount_AsyncWorker::Hermit_GetUseCount_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Hermit_GetUseCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    refcount_t _result = _underlying->GetUseCount();

    this->_result = _result;

    ExitParallelRegion();
}

void Hermit_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    refcount_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Hermit_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Hermit_AddRef_AsyncWorker::Hermit_AddRef_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Hermit_AddRef_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddRef();

    ExitParallelRegion();
}

void Hermit_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Hermit_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
