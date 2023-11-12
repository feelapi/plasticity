// This is a generated file, modify: generate/templates/Line.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/Line.h"

#include "tool_mutex.h"

Napi::Object Line::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(env, "Line",
                                      {
                                          InstanceMethod<&Line::Inverse>("Inverse"),
                                          InstanceMethod<&Line::Inverse_async>("Inverse_async"),
                                          InstanceMethod<&Line::Trimmed>("Trimmed"),
                                          InstanceMethod<&Line::Trimmed_async>("Trimmed_async"),
                                          InstanceMethod<&Line::IsStraight>("IsStraight"),
                                          InstanceMethod<&Line::IsStraight_async>("IsStraight_async"),
                                          InstanceMethod<&Line::IsClosed>("IsClosed"),
                                          InstanceMethod<&Line::IsClosed_async>("IsClosed_async"),
                                          InstanceMethod<&Line::IsBounded>("IsBounded"),
                                          InstanceMethod<&Line::IsBounded_async>("IsBounded_async"),
                                          InstanceMethod<&Line::GetTMax>("GetTMax"),
                                          InstanceMethod<&Line::GetTMax_async>("GetTMax_async"),
                                          InstanceMethod<&Line::GetTMin>("GetTMin"),
                                          InstanceMethod<&Line::GetTMin_async>("GetTMin_async"),
                                          InstanceMethod<&Line::GetPeriod>("GetPeriod"),
                                          InstanceMethod<&Line::GetPeriod_async>("GetPeriod_async"),
                                          InstanceMethod<&Line::GetWeightCentre>("GetWeightCentre"),
                                          InstanceMethod<&Line::GetWeightCentre_async>("GetWeightCentre_async"),
                                          InstanceMethod<&Line::GetLimitPoint>("GetLimitPoint"),
                                          InstanceMethod<&Line::GetLimitPoint_async>("GetLimitPoint_async"),
                                          InstanceMethod<&Line::PointOn>("PointOn"),
                                          InstanceMethod<&Line::PointOn_async>("PointOn_async"),
                                          InstanceMethod<&Line::_PointOn>("_PointOn"),
                                          InstanceMethod<&Line::_PointOn_async>("_PointOn_async"),
                                          InstanceMethod<&Line::Explore>("Explore"),
                                          InstanceMethod<&Line::Explore_async>("Explore_async"),
                                          InstanceMethod<&Line::FirstDer>("FirstDer"),
                                          InstanceMethod<&Line::FirstDer_async>("FirstDer_async"),
                                          InstanceMethod<&Line::_FirstDer>("_FirstDer"),
                                          InstanceMethod<&Line::_FirstDer_async>("_FirstDer_async"),
                                          InstanceMethod<&Line::SecondDer>("SecondDer"),
                                          InstanceMethod<&Line::SecondDer_async>("SecondDer_async"),
                                          InstanceMethod<&Line::_SecondDer>("_SecondDer"),
                                          InstanceMethod<&Line::_SecondDer_async>("_SecondDer_async"),
                                          InstanceMethod<&Line::Tangent>("Tangent"),
                                          InstanceMethod<&Line::Tangent_async>("Tangent_async"),
                                          InstanceMethod<&Line::_Tangent>("_Tangent"),
                                          InstanceMethod<&Line::_Tangent_async>("_Tangent_async"),
                                          InstanceMethod<&Line::Normal>("Normal"),
                                          InstanceMethod<&Line::Normal_async>("Normal_async"),
                                          InstanceMethod<&Line::_Normal>("_Normal"),
                                          InstanceMethod<&Line::_Normal_async>("_Normal_async"),
                                          InstanceMethod<&Line::PointRelative>("PointRelative"),
                                          InstanceMethod<&Line::PointRelative_async>("PointRelative_async"),
                                          InstanceMethod<&Line::PointLocation>("PointLocation"),
                                          InstanceMethod<&Line::PointLocation_async>("PointLocation_async"),
                                          InstanceMethod<&Line::IsA>("IsA"),
                                          InstanceMethod<&Line::IsA_async>("IsA_async"),
                                          InstanceMethod<&Line::Type>("Type"),
                                          InstanceMethod<&Line::Type_async>("Type_async"),
                                          InstanceMethod<&Line::Family>("Family"),
                                          InstanceMethod<&Line::Family_async>("Family_async"),
                                          InstanceMethod<&Line::Move>("Move"),
                                          InstanceMethod<&Line::Move_async>("Move_async"),
                                          InstanceMethod<&Line::Transform>("Transform"),
                                          InstanceMethod<&Line::Transform_async>("Transform_async"),
                                          InstanceMethod<&Line::Duplicate>("Duplicate"),
                                          InstanceMethod<&Line::Duplicate_async>("Duplicate_async"),
                                          InstanceMethod<&Line::AddYourGabaritTo>("AddYourGabaritTo"),
                                          InstanceMethod<&Line::AddYourGabaritTo_async>("AddYourGabaritTo_async"),
                                          InstanceMethod<&Line::GetUseCount>("GetUseCount"),
                                          InstanceMethod<&Line::GetUseCount_async>("GetUseCount_async"),
                                          InstanceMethod<&Line::AddRef>("AddRef"),
                                          InstanceMethod<&Line::AddRef_async>("AddRef_async"),
                                          InstanceMethod<&Line::Id>("Id"),

                                      });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Line", func);

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

Line::Line(const Napi::CallbackInfo &info) : Napi::ObjectWrap<Line>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 2 && ((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint::GetConstructor(env)))) &&
        ((info[1].IsObject() && info[1].ToObject().InstanceOf(CartPoint::GetConstructor(env))))

    )
    {
        if (info[0].IsNull() || info[0].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'p1'").ThrowAsJavaScriptException();
            return;
        }
        const class CartPoint *p1_ = CartPoint::Unwrap(info[0].ToObject());

        const MbCartPoint &p1 = *p1_->_underlying;

        if (info[1].IsNull() || info[1].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'p2'").ThrowAsJavaScriptException();
            return;
        }
        const class CartPoint *p2_ = CartPoint::Unwrap(info[1].ToObject());

        const MbCartPoint &p2 = *p2_->_underlying;

        MbLine *underlying = new MbLine(p1, p2);
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

Napi::Object Line::NewInstance(Napi::Env env, MbLine *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Line");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Line *unwrapped = Line::Unwrap(inst);
    underlying->AddRef();
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Line::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Line");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value Line::Inverse(const Napi::CallbackInfo &info)
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

Napi::Value Line::Inverse_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    MbRegTransform *iReg = NULL;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[0].ToObject());
        iReg = iReg_->_underlying;
    }

    Line_Inverse_AsyncWorker *asyncWorker = new Line_Inverse_AsyncWorker(_underlying, deferred,

                                                                         iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Line::Trimmed(const Napi::CallbackInfo &info)
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

Napi::Value Line::Trimmed_async(const Napi::CallbackInfo &info)
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

    Line_Trimmed_AsyncWorker *asyncWorker = new Line_Trimmed_AsyncWorker(_underlying, deferred,

                                                                         t1,

                                                                         t2,

                                                                         sense);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Line::IsStraight(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool ignoreParams = info[0].ToBoolean();

    bool _result = _underlying->IsStraight(info.Length() == 0 || info[0].IsNull() ? false : ignoreParams

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value Line::IsStraight_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    bool ignoreParams = info[0].ToBoolean();

    Line_IsStraight_AsyncWorker *asyncWorker = new Line_IsStraight_AsyncWorker(_underlying, deferred,

                                                                               ignoreParams);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Line::IsClosed(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool _result = _underlying->IsClosed(

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value Line::IsClosed_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Line_IsClosed_AsyncWorker *asyncWorker = new Line_IsClosed_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Line::IsBounded(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool _result = _underlying->IsBounded(

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value Line::IsBounded_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Line_IsBounded_AsyncWorker *asyncWorker = new Line_IsBounded_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Line::GetTMax(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetTMax(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Line::GetTMax_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Line_GetTMax_AsyncWorker *asyncWorker = new Line_GetTMax_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Line::GetTMin(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetTMin(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Line::GetTMin_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Line_GetTMin_AsyncWorker *asyncWorker = new Line_GetTMin_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Line::GetPeriod(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetPeriod(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Line::GetPeriod_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Line_GetPeriod_AsyncWorker *asyncWorker = new Line_GetPeriod_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Line::GetWeightCentre(const Napi::CallbackInfo &info)
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

Napi::Value Line::GetWeightCentre_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Line_GetWeightCentre_AsyncWorker *asyncWorker = new Line_GetWeightCentre_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Line::GetLimitPoint(const Napi::CallbackInfo &info)
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

Napi::Value Line::GetLimitPoint_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "ptrdiff_t number is required."));
        return deferred.Promise();
    }

    int number = info[0].ToNumber().Int64Value();

    Line_GetLimitPoint_AsyncWorker *asyncWorker = new Line_GetLimitPoint_AsyncWorker(_underlying, deferred,

                                                                                     number);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Line::PointOn(const Napi::CallbackInfo &info)
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

Napi::Value Line::PointOn_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Line_PointOn_AsyncWorker *asyncWorker = new Line_PointOn_AsyncWorker(_underlying, deferred,

                                                                         t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Line::_PointOn(const Napi::CallbackInfo &info)
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

Napi::Value Line::_PointOn_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Line__PointOn_AsyncWorker *asyncWorker = new Line__PointOn_AsyncWorker(_underlying, deferred,

                                                                           t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Line::Explore(const Napi::CallbackInfo &info)
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

Napi::Value Line::Explore_async(const Napi::CallbackInfo &info)
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

    Line_Explore_AsyncWorker *asyncWorker = new Line_Explore_AsyncWorker(_underlying, deferred,

                                                                         t,

                                                                         ext);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Line::FirstDer(const Napi::CallbackInfo &info)
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

Napi::Value Line::FirstDer_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Line_FirstDer_AsyncWorker *asyncWorker = new Line_FirstDer_AsyncWorker(_underlying, deferred,

                                                                           t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Line::_FirstDer(const Napi::CallbackInfo &info)
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

Napi::Value Line::_FirstDer_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Line__FirstDer_AsyncWorker *asyncWorker = new Line__FirstDer_AsyncWorker(_underlying, deferred,

                                                                             t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Line::SecondDer(const Napi::CallbackInfo &info)
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

Napi::Value Line::SecondDer_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Line_SecondDer_AsyncWorker *asyncWorker = new Line_SecondDer_AsyncWorker(_underlying, deferred,

                                                                             t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Line::_SecondDer(const Napi::CallbackInfo &info)
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

Napi::Value Line::_SecondDer_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Line__SecondDer_AsyncWorker *asyncWorker = new Line__SecondDer_AsyncWorker(_underlying, deferred,

                                                                               t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Line::Tangent(const Napi::CallbackInfo &info)
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

Napi::Value Line::Tangent_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Line_Tangent_AsyncWorker *asyncWorker = new Line_Tangent_AsyncWorker(_underlying, deferred,

                                                                         t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Line::_Tangent(const Napi::CallbackInfo &info)
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

Napi::Value Line::_Tangent_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Line__Tangent_AsyncWorker *asyncWorker = new Line__Tangent_AsyncWorker(_underlying, deferred,

                                                                           t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Line::Normal(const Napi::CallbackInfo &info)
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

Napi::Value Line::Normal_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Line_Normal_AsyncWorker *asyncWorker = new Line_Normal_AsyncWorker(_underlying, deferred,

                                                                       t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Line::_Normal(const Napi::CallbackInfo &info)
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

Napi::Value Line::_Normal_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Line__Normal_AsyncWorker *asyncWorker = new Line__Normal_AsyncWorker(_underlying, deferred,

                                                                         t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Line::PointRelative(const Napi::CallbackInfo &info)
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

Napi::Value Line::PointRelative_async(const Napi::CallbackInfo &info)
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

    Line_PointRelative_AsyncWorker *asyncWorker = new Line_PointRelative_AsyncWorker(_underlying, deferred,

                                                                                     pnt,

                                                                                     eps);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Line::PointLocation(const Napi::CallbackInfo &info)
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

Napi::Value Line::PointLocation_async(const Napi::CallbackInfo &info)
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

    Line_PointLocation_AsyncWorker *asyncWorker = new Line_PointLocation_AsyncWorker(_underlying, deferred,

                                                                                     pnt,

                                                                                     eps);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Line::IsA(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbePlaneType _result = _underlying->IsA(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Line::IsA_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Line_IsA_AsyncWorker *asyncWorker = new Line_IsA_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Line::Type(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbePlaneType _result = _underlying->Type(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Line::Type_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Line_Type_AsyncWorker *asyncWorker = new Line_Type_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Line::Family(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbePlaneType _result = _underlying->Family(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Line::Family_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Line_Family_AsyncWorker *asyncWorker = new Line_Family_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Line::Move(const Napi::CallbackInfo &info)
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

Napi::Value Line::Move_async(const Napi::CallbackInfo &info)
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

    Line_Move_AsyncWorker *asyncWorker = new Line_Move_AsyncWorker(_underlying, deferred,

                                                                   to,

                                                                   iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Line::Transform(const Napi::CallbackInfo &info)
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

Napi::Value Line::Transform_async(const Napi::CallbackInfo &info)
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

    Line_Transform_AsyncWorker *asyncWorker = new Line_Transform_AsyncWorker(_underlying, deferred,

                                                                             matr,

                                                                             iReg,

                                                                             newSurface);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Line::Duplicate(const Napi::CallbackInfo &info)
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

Napi::Value Line::Duplicate_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    MbRegDuplicate *dup = NULL;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        RegDuplicate *dup_ = RegDuplicate::Unwrap(info[0].ToObject());
        dup = dup_->_underlying;
    }

    Line_Duplicate_AsyncWorker *asyncWorker = new Line_Duplicate_AsyncWorker(_underlying, deferred,

                                                                             dup);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Line::AddYourGabaritTo(const Napi::CallbackInfo &info)
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

Napi::Value Line::AddYourGabaritTo_async(const Napi::CallbackInfo &info)
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

    Line_AddYourGabaritTo_AsyncWorker *asyncWorker = new Line_AddYourGabaritTo_AsyncWorker(_underlying, deferred,

                                                                                           rect);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Line::GetUseCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    refcount_t _result = _underlying->GetUseCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Line::GetUseCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Line_GetUseCount_AsyncWorker *asyncWorker = new Line_GetUseCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Line::AddRef(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->AddRef(

    );

    return env.Undefined();
}

Napi::Value Line::AddRef_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Line_AddRef_AsyncWorker *asyncWorker = new Line_AddRef_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value Line::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

Line::~Line()
{
    // std::cout << "calling ::DeleteItem on Line for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

Line_Inverse_AsyncWorker::Line_Inverse_AsyncWorker(MbLine *_underlying, Napi::Promise::Deferred const &d,
                                                   MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), iReg(iReg){};

void Line_Inverse_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Inverse(iReg);

    ExitParallelRegion();
}

void Line_Inverse_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Line_Inverse_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Line_Trimmed_AsyncWorker::Line_Trimmed_AsyncWorker(MbLine *_underlying, Napi::Promise::Deferred const &d, double t1,
                                                   double t2, int sense)
    : _underlying(_underlying), PromiseWorker(d), t1(t1), t2(t2), sense(sense){};

void Line_Trimmed_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCurve *_result = _underlying->Trimmed(t1, t2, sense);

    this->_result = _result;

    ExitParallelRegion();
}

void Line_Trimmed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Line_Trimmed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Line_IsStraight_AsyncWorker::Line_IsStraight_AsyncWorker(MbLine *_underlying, Napi::Promise::Deferred const &d,
                                                         bool ignoreParams)
    : _underlying(_underlying), PromiseWorker(d), ignoreParams(ignoreParams){};

void Line_IsStraight_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsStraight(ignoreParams);

    this->_result = _result;

    ExitParallelRegion();
}

void Line_IsStraight_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void Line_IsStraight_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Line_IsClosed_AsyncWorker::Line_IsClosed_AsyncWorker(MbLine *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Line_IsClosed_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsClosed();

    this->_result = _result;

    ExitParallelRegion();
}

void Line_IsClosed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void Line_IsClosed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Line_IsBounded_AsyncWorker::Line_IsBounded_AsyncWorker(MbLine *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Line_IsBounded_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsBounded();

    this->_result = _result;

    ExitParallelRegion();
}

void Line_IsBounded_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void Line_IsBounded_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Line_GetTMax_AsyncWorker::Line_GetTMax_AsyncWorker(MbLine *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Line_GetTMax_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetTMax();

    this->_result = _result;

    ExitParallelRegion();
}

void Line_GetTMax_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Line_GetTMax_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Line_GetTMin_AsyncWorker::Line_GetTMin_AsyncWorker(MbLine *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Line_GetTMin_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetTMin();

    this->_result = _result;

    ExitParallelRegion();
}

void Line_GetTMin_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Line_GetTMin_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Line_GetPeriod_AsyncWorker::Line_GetPeriod_AsyncWorker(MbLine *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Line_GetPeriod_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetPeriod();

    this->_result = _result;

    ExitParallelRegion();
}

void Line_GetPeriod_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Line_GetPeriod_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Line_GetWeightCentre_AsyncWorker::Line_GetWeightCentre_AsyncWorker(MbLine *_underlying,
                                                                   Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Line_GetWeightCentre_AsyncWorker::Execute()
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

void Line_GetWeightCentre_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Line_GetWeightCentre_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Line_GetLimitPoint_AsyncWorker::Line_GetLimitPoint_AsyncWorker(MbLine *_underlying, Napi::Promise::Deferred const &d,
                                                               ptrdiff_t number)
    : _underlying(_underlying), PromiseWorker(d), number(number){};

void Line_GetLimitPoint_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint *point = new MbCartPoint;

    _underlying->GetLimitPoint(number, *point);

    this->point = point;

    ExitParallelRegion();
}

void Line_GetLimitPoint_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Line_GetLimitPoint_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Line_PointOn_AsyncWorker::Line_PointOn_AsyncWorker(MbLine *_underlying, Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Line_PointOn_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint *p = new MbCartPoint;

    _underlying->PointOn(t, *p);

    this->p = p;

    ExitParallelRegion();
}

void Line_PointOn_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Line_PointOn_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Line__PointOn_AsyncWorker::Line__PointOn_AsyncWorker(MbLine *_underlying, Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Line__PointOn_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint *p = new MbCartPoint;

    _underlying->_PointOn(t, *p);

    this->p = p;

    ExitParallelRegion();
}

void Line__PointOn_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Line__PointOn_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Line_Explore_AsyncWorker::Line_Explore_AsyncWorker(MbLine *_underlying, Napi::Promise::Deferred const &d, double &t,
                                                   bool ext)
    : _underlying(_underlying), PromiseWorker(d), t(t), ext(ext){};

void Line_Explore_AsyncWorker::Execute()
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

void Line_Explore_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Line_Explore_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Line_FirstDer_AsyncWorker::Line_FirstDer_AsyncWorker(MbLine *_underlying, Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Line_FirstDer_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->FirstDer(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void Line_FirstDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Line_FirstDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Line__FirstDer_AsyncWorker::Line__FirstDer_AsyncWorker(MbLine *_underlying, Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Line__FirstDer_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->_FirstDer(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void Line__FirstDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Line__FirstDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Line_SecondDer_AsyncWorker::Line_SecondDer_AsyncWorker(MbLine *_underlying, Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Line_SecondDer_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->SecondDer(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void Line_SecondDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Line_SecondDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Line__SecondDer_AsyncWorker::Line__SecondDer_AsyncWorker(MbLine *_underlying, Napi::Promise::Deferred const &d,
                                                         double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Line__SecondDer_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->_SecondDer(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void Line__SecondDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Line__SecondDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Line_Tangent_AsyncWorker::Line_Tangent_AsyncWorker(MbLine *_underlying, Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Line_Tangent_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->Tangent(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void Line_Tangent_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Line_Tangent_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Line__Tangent_AsyncWorker::Line__Tangent_AsyncWorker(MbLine *_underlying, Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Line__Tangent_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->_Tangent(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void Line__Tangent_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Line__Tangent_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Line_Normal_AsyncWorker::Line_Normal_AsyncWorker(MbLine *_underlying, Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Line_Normal_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->Normal(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void Line_Normal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Line_Normal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Line__Normal_AsyncWorker::Line__Normal_AsyncWorker(MbLine *_underlying, Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Line__Normal_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector *v = new MbVector;

    _underlying->_Normal(t, *v);

    this->v = v;

    ExitParallelRegion();
}

void Line__Normal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Line__Normal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Line_PointRelative_AsyncWorker::Line_PointRelative_AsyncWorker(MbLine *_underlying, Napi::Promise::Deferred const &d,
                                                               const MbCartPoint &pnt, double eps)
    : _underlying(_underlying), PromiseWorker(d), pnt(pnt), eps(eps){};

void Line_PointRelative_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeItemLocation _result = _underlying->PointRelative(pnt, eps);

    this->_result = _result;

    ExitParallelRegion();
}

void Line_PointRelative_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeItemLocation _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Line_PointRelative_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Line_PointLocation_AsyncWorker::Line_PointLocation_AsyncWorker(MbLine *_underlying, Napi::Promise::Deferred const &d,
                                                               const MbCartPoint &pnt, double eps)
    : _underlying(_underlying), PromiseWorker(d), pnt(pnt), eps(eps){};

void Line_PointLocation_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeLocation _result = _underlying->PointLocation(pnt, eps);

    this->_result = _result;

    ExitParallelRegion();
}

void Line_PointLocation_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeLocation _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Line_PointLocation_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Line_IsA_AsyncWorker::Line_IsA_AsyncWorker(MbLine *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Line_IsA_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbePlaneType _result = _underlying->IsA();

    this->_result = _result;

    ExitParallelRegion();
}

void Line_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbePlaneType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Line_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Line_Type_AsyncWorker::Line_Type_AsyncWorker(MbLine *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Line_Type_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbePlaneType _result = _underlying->Type();

    this->_result = _result;

    ExitParallelRegion();
}

void Line_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbePlaneType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Line_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Line_Family_AsyncWorker::Line_Family_AsyncWorker(MbLine *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Line_Family_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbePlaneType _result = _underlying->Family();

    this->_result = _result;

    ExitParallelRegion();
}

void Line_Family_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbePlaneType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Line_Family_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Line_Move_AsyncWorker::Line_Move_AsyncWorker(MbLine *_underlying, Napi::Promise::Deferred const &d, const MbVector &to,
                                             MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), to(to), iReg(iReg){};

void Line_Move_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbSurface *newSurface = NULL;

    _underlying->Move(to, iReg, newSurface);

    this->newSurface = newSurface;

    ExitParallelRegion();
}

void Line_Move_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Line_Move_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Line_Transform_AsyncWorker::Line_Transform_AsyncWorker(MbLine *_underlying, Napi::Promise::Deferred const &d,
                                                       const MbMatrix &matr, MbRegTransform *iReg,
                                                       const MbSurface *newSurface)
    : _underlying(_underlying), PromiseWorker(d), matr(matr), iReg(iReg), newSurface(newSurface){};

void Line_Transform_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Transform(matr, iReg, newSurface);

    ExitParallelRegion();
}

void Line_Transform_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Line_Transform_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Line_Duplicate_AsyncWorker::Line_Duplicate_AsyncWorker(MbLine *_underlying, Napi::Promise::Deferred const &d,
                                                       MbRegDuplicate *dup)
    : _underlying(_underlying), PromiseWorker(d), dup(dup){};

void Line_Duplicate_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbPlaneItem &_result = _underlying->Duplicate(dup);

    this->_result = (MbPlaneItem *)&(_result);

    ExitParallelRegion();
}

void Line_Duplicate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbPlaneItem *_result = this->_result;
    _to = PlaneItem::NewInstance(env, (MbPlaneItem *)&(_result));

    deferred.Resolve(_to);
}

void Line_Duplicate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Line_AddYourGabaritTo_AsyncWorker::Line_AddYourGabaritTo_AsyncWorker(MbLine *_underlying,
                                                                     Napi::Promise::Deferred const &d, MbRect &rect)
    : _underlying(_underlying), PromiseWorker(d), rect(rect){};

void Line_AddYourGabaritTo_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddYourGabaritTo(rect);

    ExitParallelRegion();
}

void Line_AddYourGabaritTo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Line_AddYourGabaritTo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Line_GetUseCount_AsyncWorker::Line_GetUseCount_AsyncWorker(MbLine *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Line_GetUseCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    refcount_t _result = _underlying->GetUseCount();

    this->_result = _result;

    ExitParallelRegion();
}

void Line_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    refcount_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Line_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Line_AddRef_AsyncWorker::Line_AddRef_AsyncWorker(MbLine *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Line_AddRef_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddRef();

    ExitParallelRegion();
}

void Line_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Line_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
