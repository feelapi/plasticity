// This is a generated file, modify: generate/templates/Arc.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/Arc.h"

#include "tool_mutex.h"

Napi::Object Arc::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(env, "Arc",
                                      {
                                          InstanceMethod<&Arc::Inverse>("Inverse"),
                                          InstanceMethod<&Arc::Inverse_async>("Inverse_async"),
                                          InstanceMethod<&Arc::Trimmed>("Trimmed"),
                                          InstanceMethod<&Arc::Trimmed_async>("Trimmed_async"),
                                          InstanceMethod<&Arc::IsStraight>("IsStraight"),
                                          InstanceMethod<&Arc::IsStraight_async>("IsStraight_async"),
                                          InstanceMethod<&Arc::IsClosed>("IsClosed"),
                                          InstanceMethod<&Arc::IsClosed_async>("IsClosed_async"),
                                          InstanceMethod<&Arc::IsBounded>("IsBounded"),
                                          InstanceMethod<&Arc::IsBounded_async>("IsBounded_async"),
                                          InstanceMethod<&Arc::GetTMax>("GetTMax"),
                                          InstanceMethod<&Arc::GetTMax_async>("GetTMax_async"),
                                          InstanceMethod<&Arc::GetTMin>("GetTMin"),
                                          InstanceMethod<&Arc::GetTMin_async>("GetTMin_async"),
                                          InstanceMethod<&Arc::GetPeriod>("GetPeriod"),
                                          InstanceMethod<&Arc::GetPeriod_async>("GetPeriod_async"),
                                          InstanceMethod<&Arc::GetWeightCentre>("GetWeightCentre"),
                                          InstanceMethod<&Arc::GetWeightCentre_async>("GetWeightCentre_async"),
                                          InstanceMethod<&Arc::GetLimitPoint>("GetLimitPoint"),
                                          InstanceMethod<&Arc::GetLimitPoint_async>("GetLimitPoint_async"),
                                          InstanceMethod<&Arc::PointOn>("PointOn"),
                                          InstanceMethod<&Arc::PointOn_async>("PointOn_async"),
                                          InstanceMethod<&Arc::_PointOn>("_PointOn"),
                                          InstanceMethod<&Arc::_PointOn_async>("_PointOn_async"),
                                          InstanceMethod<&Arc::Explore>("Explore"),
                                          InstanceMethod<&Arc::Explore_async>("Explore_async"),
                                          InstanceMethod<&Arc::FirstDer>("FirstDer"),
                                          InstanceMethod<&Arc::FirstDer_async>("FirstDer_async"),
                                          InstanceMethod<&Arc::_FirstDer>("_FirstDer"),
                                          InstanceMethod<&Arc::_FirstDer_async>("_FirstDer_async"),
                                          InstanceMethod<&Arc::SecondDer>("SecondDer"),
                                          InstanceMethod<&Arc::SecondDer_async>("SecondDer_async"),
                                          InstanceMethod<&Arc::_SecondDer>("_SecondDer"),
                                          InstanceMethod<&Arc::_SecondDer_async>("_SecondDer_async"),
                                          InstanceMethod<&Arc::Tangent>("Tangent"),
                                          InstanceMethod<&Arc::Tangent_async>("Tangent_async"),
                                          InstanceMethod<&Arc::_Tangent>("_Tangent"),
                                          InstanceMethod<&Arc::_Tangent_async>("_Tangent_async"),
                                          InstanceMethod<&Arc::Normal>("Normal"),
                                          InstanceMethod<&Arc::Normal_async>("Normal_async"),
                                          InstanceMethod<&Arc::_Normal>("_Normal"),
                                          InstanceMethod<&Arc::_Normal_async>("_Normal_async"),
                                          InstanceMethod<&Arc::PointRelative>("PointRelative"),
                                          InstanceMethod<&Arc::PointRelative_async>("PointRelative_async"),
                                          InstanceMethod<&Arc::PointLocation>("PointLocation"),
                                          InstanceMethod<&Arc::PointLocation_async>("PointLocation_async"),
                                          InstanceMethod<&Arc::IsA>("IsA"),
                                          InstanceMethod<&Arc::IsA_async>("IsA_async"),
                                          InstanceMethod<&Arc::Type>("Type"),
                                          InstanceMethod<&Arc::Type_async>("Type_async"),
                                          InstanceMethod<&Arc::Family>("Family"),
                                          InstanceMethod<&Arc::Family_async>("Family_async"),
                                          InstanceMethod<&Arc::Move>("Move"),
                                          InstanceMethod<&Arc::Move_async>("Move_async"),
                                          InstanceMethod<&Arc::Transform>("Transform"),
                                          InstanceMethod<&Arc::Transform_async>("Transform_async"),
                                          InstanceMethod<&Arc::Duplicate>("Duplicate"),
                                          InstanceMethod<&Arc::Duplicate_async>("Duplicate_async"),
                                          InstanceMethod<&Arc::AddYourGabaritTo>("AddYourGabaritTo"),
                                          InstanceMethod<&Arc::AddYourGabaritTo_async>("AddYourGabaritTo_async"),
                                          InstanceMethod<&Arc::GetUseCount>("GetUseCount"),
                                          InstanceMethod<&Arc::GetUseCount_async>("GetUseCount_async"),
                                          InstanceMethod<&Arc::AddRef>("AddRef"),
                                          InstanceMethod<&Arc::AddRef_async>("AddRef_async"),
                                          InstanceMethod<&Arc::Id>("Id"),

                                      });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Arc", func);

    Napi::Object global = env.Global();
    Napi::Object Object = global.Get("Object").ToObject();
    Napi::Function setPrototypeOf = Napi::Function(env, Object.Get("setPrototypeOf"));
    Napi::Value prototype = func.Get("prototype");

    Napi::Function superFunc = Curve::GetConstructor(env);
    Napi::FunctionReference *superConstructor = new Napi::FunctionReference();
    *superConstructor = Napi::Persistent(superFunc);

    Napi::Value superPrototype = superFunc.Get("prototype");
    setPrototypeOf.Call({prototype, superPrototype});
    setPrototypeOf.Call({func, superFunc});

    return exports;
}

Arc::Arc(const Napi::CallbackInfo &info) : Napi::ObjectWrap<Arc>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 1 && ((info[0].IsNumber()))

    )
    {
        double rad = info[0].ToNumber().DoubleValue();

        MbArc *underlying = new MbArc(rad);
        if (underlying == NULL)
        {
            Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
            return;
        }
        underlying->AddRef();
        this->_underlying = underlying;
    }
    else
    {
        Napi::Error::New(env, "No matching constructor").ThrowAsJavaScriptException();
        return;
    }
}

Napi::Object Arc::NewInstance(Napi::Env env, MbArc *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Arc");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Arc *unwrapped = Arc::Unwrap(inst);
    underlying->AddRef();
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Arc::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Arc");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value Arc::Inverse(const Napi::CallbackInfo &info)
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

Napi::Value Arc::Inverse_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    MbRegTransform *iReg = NULL;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[0].ToObject());
        iReg = iReg_->_underlying;
    }

    Arc_Inverse_AsyncWorker *asyncWorker = new Arc_Inverse_AsyncWorker(_underlying, deferred,

                                                                       iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc::Trimmed(const Napi::CallbackInfo &info)
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

Napi::Value Arc::Trimmed_async(const Napi::CallbackInfo &info)
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

    Arc_Trimmed_AsyncWorker *asyncWorker = new Arc_Trimmed_AsyncWorker(_underlying, deferred,

                                                                       t1,

                                                                       t2,

                                                                       sense);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc::IsStraight(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool ignoreParams = info[0].ToBoolean();

    bool _result = _underlying->IsStraight(info.Length() == 0 || info[0].IsNull() ? false : ignoreParams

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value Arc::IsStraight_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    bool ignoreParams = info[0].ToBoolean();

    Arc_IsStraight_AsyncWorker *asyncWorker = new Arc_IsStraight_AsyncWorker(_underlying, deferred,

                                                                             ignoreParams);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc::IsClosed(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool _result = _underlying->IsClosed(

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value Arc::IsClosed_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Arc_IsClosed_AsyncWorker *asyncWorker = new Arc_IsClosed_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc::IsBounded(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool _result = _underlying->IsBounded(

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value Arc::IsBounded_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Arc_IsBounded_AsyncWorker *asyncWorker = new Arc_IsBounded_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc::GetTMax(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetTMax(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Arc::GetTMax_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Arc_GetTMax_AsyncWorker *asyncWorker = new Arc_GetTMax_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc::GetTMin(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetTMin(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Arc::GetTMin_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Arc_GetTMin_AsyncWorker *asyncWorker = new Arc_GetTMin_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc::GetPeriod(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetPeriod(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Arc::GetPeriod_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Arc_GetPeriod_AsyncWorker *asyncWorker = new Arc_GetPeriod_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc::GetWeightCentre(const Napi::CallbackInfo &info)
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

Napi::Value Arc::GetWeightCentre_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Arc_GetWeightCentre_AsyncWorker *asyncWorker = new Arc_GetWeightCentre_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc::GetLimitPoint(const Napi::CallbackInfo &info)
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

Napi::Value Arc::GetLimitPoint_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "ptrdiff_t number is required."));
        return deferred.Promise();
    }

    int number = info[0].ToNumber().Int64Value();

    Arc_GetLimitPoint_AsyncWorker *asyncWorker = new Arc_GetLimitPoint_AsyncWorker(_underlying, deferred,

                                                                                   number);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc::PointOn(const Napi::CallbackInfo &info)
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

Napi::Value Arc::PointOn_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Arc_PointOn_AsyncWorker *asyncWorker = new Arc_PointOn_AsyncWorker(_underlying, deferred,

                                                                       t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc::_PointOn(const Napi::CallbackInfo &info)
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

Napi::Value Arc::_PointOn_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Arc__PointOn_AsyncWorker *asyncWorker = new Arc__PointOn_AsyncWorker(_underlying, deferred,

                                                                         t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc::Explore(const Napi::CallbackInfo &info)
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

Napi::Value Arc::Explore_async(const Napi::CallbackInfo &info)
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

    Arc_Explore_AsyncWorker *asyncWorker = new Arc_Explore_AsyncWorker(_underlying, deferred,

                                                                       t,

                                                                       ext);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc::FirstDer(const Napi::CallbackInfo &info)
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

Napi::Value Arc::FirstDer_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Arc_FirstDer_AsyncWorker *asyncWorker = new Arc_FirstDer_AsyncWorker(_underlying, deferred,

                                                                         t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc::_FirstDer(const Napi::CallbackInfo &info)
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

Napi::Value Arc::_FirstDer_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Arc__FirstDer_AsyncWorker *asyncWorker = new Arc__FirstDer_AsyncWorker(_underlying, deferred,

                                                                           t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc::SecondDer(const Napi::CallbackInfo &info)
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

Napi::Value Arc::SecondDer_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Arc_SecondDer_AsyncWorker *asyncWorker = new Arc_SecondDer_AsyncWorker(_underlying, deferred,

                                                                           t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc::_SecondDer(const Napi::CallbackInfo &info)
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

Napi::Value Arc::_SecondDer_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Arc__SecondDer_AsyncWorker *asyncWorker = new Arc__SecondDer_AsyncWorker(_underlying, deferred,

                                                                             t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc::Tangent(const Napi::CallbackInfo &info)
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

Napi::Value Arc::Tangent_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Arc_Tangent_AsyncWorker *asyncWorker = new Arc_Tangent_AsyncWorker(_underlying, deferred,

                                                                       t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc::_Tangent(const Napi::CallbackInfo &info)
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

Napi::Value Arc::_Tangent_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Arc__Tangent_AsyncWorker *asyncWorker = new Arc__Tangent_AsyncWorker(_underlying, deferred,

                                                                         t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc::Normal(const Napi::CallbackInfo &info)
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

Napi::Value Arc::Normal_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Arc_Normal_AsyncWorker *asyncWorker = new Arc_Normal_AsyncWorker(_underlying, deferred,

                                                                     t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc::_Normal(const Napi::CallbackInfo &info)
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

Napi::Value Arc::_Normal_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Arc__Normal_AsyncWorker *asyncWorker = new Arc__Normal_AsyncWorker(_underlying, deferred,

                                                                       t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc::PointRelative(const Napi::CallbackInfo &info)
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

Napi::Value Arc::PointRelative_async(const Napi::CallbackInfo &info)
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

    Arc_PointRelative_AsyncWorker *asyncWorker = new Arc_PointRelative_AsyncWorker(_underlying, deferred,

                                                                                   pnt,

                                                                                   eps);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc::PointLocation(const Napi::CallbackInfo &info)
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

Napi::Value Arc::PointLocation_async(const Napi::CallbackInfo &info)
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

    Arc_PointLocation_AsyncWorker *asyncWorker = new Arc_PointLocation_AsyncWorker(_underlying, deferred,

                                                                                   pnt,

                                                                                   eps);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc::IsA(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbePlaneType _result = _underlying->IsA(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Arc::IsA_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Arc_IsA_AsyncWorker *asyncWorker = new Arc_IsA_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc::Type(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbePlaneType _result = _underlying->Type(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Arc::Type_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Arc_Type_AsyncWorker *asyncWorker = new Arc_Type_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc::Family(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbePlaneType _result = _underlying->Family(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Arc::Family_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Arc_Family_AsyncWorker *asyncWorker = new Arc_Family_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc::Move(const Napi::CallbackInfo &info)
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

Napi::Value Arc::Move_async(const Napi::CallbackInfo &info)
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

    Arc_Move_AsyncWorker *asyncWorker = new Arc_Move_AsyncWorker(_underlying, deferred,

                                                                 to,

                                                                 iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc::Transform(const Napi::CallbackInfo &info)
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

Napi::Value Arc::Transform_async(const Napi::CallbackInfo &info)
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

    Arc_Transform_AsyncWorker *asyncWorker = new Arc_Transform_AsyncWorker(_underlying, deferred,

                                                                           matr,

                                                                           iReg,

                                                                           newSurface);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc::Duplicate(const Napi::CallbackInfo &info)
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

Napi::Value Arc::Duplicate_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    MbRegDuplicate *dup = NULL;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        RegDuplicate *dup_ = RegDuplicate::Unwrap(info[0].ToObject());
        dup = dup_->_underlying;
    }

    Arc_Duplicate_AsyncWorker *asyncWorker = new Arc_Duplicate_AsyncWorker(_underlying, deferred,

                                                                           dup);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc::AddYourGabaritTo(const Napi::CallbackInfo &info)
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

Napi::Value Arc::AddYourGabaritTo_async(const Napi::CallbackInfo &info)
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

    Arc_AddYourGabaritTo_AsyncWorker *asyncWorker = new Arc_AddYourGabaritTo_AsyncWorker(_underlying, deferred,

                                                                                         rect);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc::GetUseCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    refcount_t _result = _underlying->GetUseCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Arc::GetUseCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Arc_GetUseCount_AsyncWorker *asyncWorker = new Arc_GetUseCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc::AddRef(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->AddRef(

    );

    return env.Undefined();
}

Napi::Value Arc::AddRef_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Arc_AddRef_AsyncWorker *asyncWorker = new Arc_AddRef_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value Arc::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

Arc::~Arc()
{
    // std::cout << "calling ::DeleteItem on Arc for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

Arc_Inverse_AsyncWorker::Arc_Inverse_AsyncWorker(MbArc *_underlying, Napi::Promise::Deferred const &d,
                                                 MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), iReg(iReg){};

void Arc_Inverse_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Inverse(iReg);

    ExitParallelRegion();
}

void Arc_Inverse_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Arc_Inverse_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc_Trimmed_AsyncWorker::Arc_Trimmed_AsyncWorker(MbArc *_underlying, Napi::Promise::Deferred const &d, double t1,
                                                 double t2, int sense)
    : _underlying(_underlying), PromiseWorker(d), t1(t1), t2(t2), sense(sense){};

void Arc_Trimmed_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCurve *_result = _underlying->Trimmed(t1, t2, sense);

    this->_result = _result;

    ExitParallelRegion();
}

void Arc_Trimmed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Arc_Trimmed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc_IsStraight_AsyncWorker::Arc_IsStraight_AsyncWorker(MbArc *_underlying, Napi::Promise::Deferred const &d,
                                                       bool ignoreParams)
    : _underlying(_underlying), PromiseWorker(d), ignoreParams(ignoreParams){};

void Arc_IsStraight_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsStraight(ignoreParams);

    this->_result = _result;

    ExitParallelRegion();
}

void Arc_IsStraight_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void Arc_IsStraight_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc_IsClosed_AsyncWorker::Arc_IsClosed_AsyncWorker(MbArc *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Arc_IsClosed_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsClosed();

    this->_result = _result;

    ExitParallelRegion();
}

void Arc_IsClosed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void Arc_IsClosed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc_IsBounded_AsyncWorker::Arc_IsBounded_AsyncWorker(MbArc *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Arc_IsBounded_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsBounded();

    this->_result = _result;

    ExitParallelRegion();
}

void Arc_IsBounded_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void Arc_IsBounded_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc_GetTMax_AsyncWorker::Arc_GetTMax_AsyncWorker(MbArc *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Arc_GetTMax_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetTMax();

    this->_result = _result;

    ExitParallelRegion();
}

void Arc_GetTMax_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Arc_GetTMax_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc_GetTMin_AsyncWorker::Arc_GetTMin_AsyncWorker(MbArc *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Arc_GetTMin_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetTMin();

    this->_result = _result;

    ExitParallelRegion();
}

void Arc_GetTMin_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Arc_GetTMin_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc_GetPeriod_AsyncWorker::Arc_GetPeriod_AsyncWorker(MbArc *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Arc_GetPeriod_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetPeriod();

    this->_result = _result;

    ExitParallelRegion();
}

void Arc_GetPeriod_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Arc_GetPeriod_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc_GetWeightCentre_AsyncWorker::Arc_GetWeightCentre_AsyncWorker(MbArc *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Arc_GetWeightCentre_AsyncWorker::Execute()
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

void Arc_GetWeightCentre_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Arc_GetWeightCentre_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc_GetLimitPoint_AsyncWorker::Arc_GetLimitPoint_AsyncWorker(MbArc *_underlying, Napi::Promise::Deferred const &d,
                                                             ptrdiff_t number)
    : _underlying(_underlying), PromiseWorker(d), number(number){};

void Arc_GetLimitPoint_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint *point = new MbCartPoint;

    _underlying->GetLimitPoint(number, *point);

    this->point = point;

    ExitParallelRegion();
}

void Arc_GetLimitPoint_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Arc_GetLimitPoint_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc_PointOn_AsyncWorker::Arc_PointOn_AsyncWorker(MbArc *_underlying, Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Arc_PointOn_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint *p = new MbCartPoint;

    _underlying->PointOn(t, *p);

    this->p = p;

    ExitParallelRegion();
}

void Arc_PointOn_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Arc_PointOn_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc__PointOn_AsyncWorker::Arc__PointOn_AsyncWorker(MbArc *_underlying, Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Arc__PointOn_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint *p = new MbCartPoint;

    _underlying->_PointOn(t, *p);

    this->p = p;

    ExitParallelRegion();
}

void Arc__PointOn_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Arc__PointOn_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc_Explore_AsyncWorker::Arc_Explore_AsyncWorker(MbArc *_underlying, Napi::Promise::Deferred const &d, double &t,
                                                 bool ext)
    : _underlying(_underlying), PromiseWorker(d), t(t), ext(ext){};

void Arc_Explore_AsyncWorker::Execute()
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

void Arc_Explore_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Arc_Explore_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc_FirstDer_AsyncWorker::Arc_FirstDer_AsyncWorker(MbArc *_underlying, Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Arc_FirstDer_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->FirstDer(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void Arc_FirstDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Arc_FirstDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc__FirstDer_AsyncWorker::Arc__FirstDer_AsyncWorker(MbArc *_underlying, Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Arc__FirstDer_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->_FirstDer(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void Arc__FirstDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Arc__FirstDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc_SecondDer_AsyncWorker::Arc_SecondDer_AsyncWorker(MbArc *_underlying, Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Arc_SecondDer_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->SecondDer(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void Arc_SecondDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Arc_SecondDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc__SecondDer_AsyncWorker::Arc__SecondDer_AsyncWorker(MbArc *_underlying, Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Arc__SecondDer_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->_SecondDer(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void Arc__SecondDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Arc__SecondDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc_Tangent_AsyncWorker::Arc_Tangent_AsyncWorker(MbArc *_underlying, Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Arc_Tangent_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->Tangent(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void Arc_Tangent_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Arc_Tangent_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc__Tangent_AsyncWorker::Arc__Tangent_AsyncWorker(MbArc *_underlying, Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Arc__Tangent_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->_Tangent(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void Arc__Tangent_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Arc__Tangent_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc_Normal_AsyncWorker::Arc_Normal_AsyncWorker(MbArc *_underlying, Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Arc_Normal_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->Normal(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void Arc_Normal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Arc_Normal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc__Normal_AsyncWorker::Arc__Normal_AsyncWorker(MbArc *_underlying, Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Arc__Normal_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->_Normal(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void Arc__Normal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Arc__Normal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc_PointRelative_AsyncWorker::Arc_PointRelative_AsyncWorker(MbArc *_underlying, Napi::Promise::Deferred const &d,
                                                             const MbCartPoint &pnt, double eps)
    : _underlying(_underlying), PromiseWorker(d), pnt(pnt), eps(eps){};

void Arc_PointRelative_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeItemLocation _result = _underlying->PointRelative(pnt, eps);

    this->_result = _result;

    ExitParallelRegion();
}

void Arc_PointRelative_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeItemLocation _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Arc_PointRelative_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc_PointLocation_AsyncWorker::Arc_PointLocation_AsyncWorker(MbArc *_underlying, Napi::Promise::Deferred const &d,
                                                             const MbCartPoint &pnt, double eps)
    : _underlying(_underlying), PromiseWorker(d), pnt(pnt), eps(eps){};

void Arc_PointLocation_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeLocation _result = _underlying->PointLocation(pnt, eps);

    this->_result = _result;

    ExitParallelRegion();
}

void Arc_PointLocation_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeLocation _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Arc_PointLocation_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc_IsA_AsyncWorker::Arc_IsA_AsyncWorker(MbArc *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Arc_IsA_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbePlaneType _result = _underlying->IsA();

    this->_result = _result;

    ExitParallelRegion();
}

void Arc_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbePlaneType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Arc_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc_Type_AsyncWorker::Arc_Type_AsyncWorker(MbArc *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Arc_Type_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbePlaneType _result = _underlying->Type();

    this->_result = _result;

    ExitParallelRegion();
}

void Arc_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbePlaneType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Arc_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc_Family_AsyncWorker::Arc_Family_AsyncWorker(MbArc *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Arc_Family_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbePlaneType _result = _underlying->Family();

    this->_result = _result;

    ExitParallelRegion();
}

void Arc_Family_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbePlaneType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Arc_Family_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc_Move_AsyncWorker::Arc_Move_AsyncWorker(MbArc *_underlying, Napi::Promise::Deferred const &d, const MbVector &to,
                                           MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), to(to), iReg(iReg){};

void Arc_Move_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbSurface *newSurface = NULL;

    _underlying->Move(to, iReg, newSurface);

    this->newSurface = newSurface;

    ExitParallelRegion();
}

void Arc_Move_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Arc_Move_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc_Transform_AsyncWorker::Arc_Transform_AsyncWorker(MbArc *_underlying, Napi::Promise::Deferred const &d,
                                                     const MbMatrix &matr, MbRegTransform *iReg,
                                                     const MbSurface *newSurface)
    : _underlying(_underlying), PromiseWorker(d), matr(matr), iReg(iReg), newSurface(newSurface){};

void Arc_Transform_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Transform(matr, iReg, newSurface);

    ExitParallelRegion();
}

void Arc_Transform_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Arc_Transform_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc_Duplicate_AsyncWorker::Arc_Duplicate_AsyncWorker(MbArc *_underlying, Napi::Promise::Deferred const &d,
                                                     MbRegDuplicate *dup)
    : _underlying(_underlying), PromiseWorker(d), dup(dup){};

void Arc_Duplicate_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbPlaneItem &_result = _underlying->Duplicate(dup);

    this->_result = (MbPlaneItem *)&(_result);

    ExitParallelRegion();
}

void Arc_Duplicate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbPlaneItem *_result = this->_result;
    _to = PlaneItem::NewInstance(env, (MbPlaneItem *)&(_result));

    deferred.Resolve(_to);
}

void Arc_Duplicate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc_AddYourGabaritTo_AsyncWorker::Arc_AddYourGabaritTo_AsyncWorker(MbArc *_underlying, Napi::Promise::Deferred const &d,
                                                                   MbRect &rect)
    : _underlying(_underlying), PromiseWorker(d), rect(rect){};

void Arc_AddYourGabaritTo_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddYourGabaritTo(rect);

    ExitParallelRegion();
}

void Arc_AddYourGabaritTo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Arc_AddYourGabaritTo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc_GetUseCount_AsyncWorker::Arc_GetUseCount_AsyncWorker(MbArc *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Arc_GetUseCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    refcount_t _result = _underlying->GetUseCount();

    this->_result = _result;

    ExitParallelRegion();
}

void Arc_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    refcount_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Arc_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc_AddRef_AsyncWorker::Arc_AddRef_AsyncWorker(MbArc *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Arc_AddRef_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddRef();

    ExitParallelRegion();
}

void Arc_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Arc_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
