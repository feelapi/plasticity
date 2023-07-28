// This is a generated file, modify: generate/templates/PolyCurve.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/PolyCurve.h"

#include "tool_mutex.h"

Napi::Object PolyCurve::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "PolyCurve", {
        InstanceMethod<&PolyCurve::GetPointsCount>("GetPointsCount"),
        InstanceMethod<&PolyCurve::GetPointsCount_async>("GetPointsCount_async"),
        InstanceMethod<&PolyCurve::GetPoint>("GetPoint"),
        InstanceMethod<&PolyCurve::GetPoint_async>("GetPoint_async"),
        InstanceMethod<&PolyCurve::AddPoint>("AddPoint"),
        InstanceMethod<&PolyCurve::AddPoint_async>("AddPoint_async"),
        InstanceMethod<&PolyCurve::Inverse>("Inverse"),
        InstanceMethod<&PolyCurve::Inverse_async>("Inverse_async"),
        InstanceMethod<&PolyCurve::Trimmed>("Trimmed"),
        InstanceMethod<&PolyCurve::Trimmed_async>("Trimmed_async"),
        InstanceMethod<&PolyCurve::IsStraight>("IsStraight"),
        InstanceMethod<&PolyCurve::IsStraight_async>("IsStraight_async"),
        InstanceMethod<&PolyCurve::IsClosed>("IsClosed"),
        InstanceMethod<&PolyCurve::IsClosed_async>("IsClosed_async"),
        InstanceMethod<&PolyCurve::IsBounded>("IsBounded"),
        InstanceMethod<&PolyCurve::IsBounded_async>("IsBounded_async"),
        InstanceMethod<&PolyCurve::GetTMax>("GetTMax"),
        InstanceMethod<&PolyCurve::GetTMax_async>("GetTMax_async"),
        InstanceMethod<&PolyCurve::GetTMin>("GetTMin"),
        InstanceMethod<&PolyCurve::GetTMin_async>("GetTMin_async"),
        InstanceMethod<&PolyCurve::GetPeriod>("GetPeriod"),
        InstanceMethod<&PolyCurve::GetPeriod_async>("GetPeriod_async"),
        InstanceMethod<&PolyCurve::GetWeightCentre>("GetWeightCentre"),
        InstanceMethod<&PolyCurve::GetWeightCentre_async>("GetWeightCentre_async"),
        InstanceMethod<&PolyCurve::GetLimitPoint>("GetLimitPoint"),
        InstanceMethod<&PolyCurve::GetLimitPoint_async>("GetLimitPoint_async"),
        InstanceMethod<&PolyCurve::PointOn>("PointOn"),
        InstanceMethod<&PolyCurve::PointOn_async>("PointOn_async"),
        InstanceMethod<&PolyCurve::_PointOn>("_PointOn"),
        InstanceMethod<&PolyCurve::_PointOn_async>("_PointOn_async"),
        InstanceMethod<&PolyCurve::Explore>("Explore"),
        InstanceMethod<&PolyCurve::Explore_async>("Explore_async"),
        InstanceMethod<&PolyCurve::FirstDer>("FirstDer"),
        InstanceMethod<&PolyCurve::FirstDer_async>("FirstDer_async"),
        InstanceMethod<&PolyCurve::_FirstDer>("_FirstDer"),
        InstanceMethod<&PolyCurve::_FirstDer_async>("_FirstDer_async"),
        InstanceMethod<&PolyCurve::SecondDer>("SecondDer"),
        InstanceMethod<&PolyCurve::SecondDer_async>("SecondDer_async"),
        InstanceMethod<&PolyCurve::_SecondDer>("_SecondDer"),
        InstanceMethod<&PolyCurve::_SecondDer_async>("_SecondDer_async"),
        InstanceMethod<&PolyCurve::Tangent>("Tangent"),
        InstanceMethod<&PolyCurve::Tangent_async>("Tangent_async"),
        InstanceMethod<&PolyCurve::_Tangent>("_Tangent"),
        InstanceMethod<&PolyCurve::_Tangent_async>("_Tangent_async"),
        InstanceMethod<&PolyCurve::Normal>("Normal"),
        InstanceMethod<&PolyCurve::Normal_async>("Normal_async"),
        InstanceMethod<&PolyCurve::_Normal>("_Normal"),
        InstanceMethod<&PolyCurve::_Normal_async>("_Normal_async"),
        InstanceMethod<&PolyCurve::PointRelative>("PointRelative"),
        InstanceMethod<&PolyCurve::PointRelative_async>("PointRelative_async"),
        InstanceMethod<&PolyCurve::PointLocation>("PointLocation"),
        InstanceMethod<&PolyCurve::PointLocation_async>("PointLocation_async"),
        InstanceMethod<&PolyCurve::IsA>("IsA"),
        InstanceMethod<&PolyCurve::IsA_async>("IsA_async"),
        InstanceMethod<&PolyCurve::Type>("Type"),
        InstanceMethod<&PolyCurve::Type_async>("Type_async"),
        InstanceMethod<&PolyCurve::Family>("Family"),
        InstanceMethod<&PolyCurve::Family_async>("Family_async"),
        InstanceMethod<&PolyCurve::Move>("Move"),
        InstanceMethod<&PolyCurve::Move_async>("Move_async"),
        InstanceMethod<&PolyCurve::Transform>("Transform"),
        InstanceMethod<&PolyCurve::Transform_async>("Transform_async"),
        InstanceMethod<&PolyCurve::Duplicate>("Duplicate"),
        InstanceMethod<&PolyCurve::Duplicate_async>("Duplicate_async"),
        InstanceMethod<&PolyCurve::AddYourGabaritTo>("AddYourGabaritTo"),
        InstanceMethod<&PolyCurve::AddYourGabaritTo_async>("AddYourGabaritTo_async"),
        InstanceMethod<&PolyCurve::GetUseCount>("GetUseCount"),
        InstanceMethod<&PolyCurve::GetUseCount_async>("GetUseCount_async"),
        InstanceMethod<&PolyCurve::AddRef>("AddRef"),
        InstanceMethod<&PolyCurve::AddRef_async>("AddRef_async"),
            InstanceMethod<&PolyCurve::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("PolyCurve", func);

    Napi::Object global = env.Global();
    Napi::Object Object = global.Get("Object").ToObject();
    Napi::Function setPrototypeOf = Napi::Function(env, Object.Get("setPrototypeOf"));
    Napi::Value prototype = func.Get("prototype");

    Napi::Function superFunc = Curve::GetConstructor(env);
    Napi::FunctionReference* superConstructor = new Napi::FunctionReference();
    *superConstructor = Napi::Persistent(superFunc);

    Napi::Value superPrototype = superFunc.Get("prototype");
    setPrototypeOf.Call({prototype, superPrototype});
    setPrototypeOf.Call({func, superFunc});

    return exports;
}

PolyCurve::PolyCurve(const Napi::CallbackInfo& info) : Napi::ObjectWrap<PolyCurve>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        Napi::Error::New(env, "PolyCurve cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object PolyCurve::NewInstance(Napi::Env env, MbPolyCurve *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("PolyCurve");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    PolyCurve *unwrapped = PolyCurve::Unwrap(inst);
underlying->AddRef();    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function PolyCurve::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("PolyCurve");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

        Napi::Value PolyCurve::GetPointsCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 size_t  _result = _underlying->GetPointsCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value PolyCurve::GetPointsCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PolyCurve_GetPointsCount_AsyncWorker* asyncWorker = new PolyCurve_GetPointsCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PolyCurve::GetPoint(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "ptrdiff_t index is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    MbCartPoint *pnt = new MbCartPoint;


             int index = info[0].ToNumber().Int64Value();



_underlying->GetPoint
(
        index
,        *pnt

);



    Napi::Value _to;

            if (pnt != NULL) {
        _to = CartPoint::NewInstance(env, (MbCartPoint *)pnt);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value PolyCurve::GetPoint_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "ptrdiff_t index is required."));
                    return deferred.Promise();
            }


                     int index = info[0].ToNumber().Int64Value();

        PolyCurve_GetPoint_AsyncWorker* asyncWorker = new PolyCurve_GetPoint_AsyncWorker(
_underlying,            deferred
,
                
                index        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PolyCurve::AddPoint(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "CartPoint pnt is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'pnt'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class CartPoint *pnt_ = CartPoint::Unwrap(info[0].ToObject());
        
        const MbCartPoint & pnt =*pnt_->_underlying;
        



_underlying->AddPoint
(
        pnt

);



    return env.Undefined();


        }

    Napi::Value PolyCurve::AddPoint_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "CartPoint pnt is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'pnt'"));
                return deferred.Promise();
        }
        const class CartPoint *pnt_ = CartPoint::Unwrap(info[0].ToObject());
        
        const MbCartPoint & pnt =*pnt_->_underlying;
        

        PolyCurve_AddPoint_AsyncWorker* asyncWorker = new PolyCurve_AddPoint_AsyncWorker(
_underlying,            deferred
,
                
                pnt        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PolyCurve::Inverse(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            

                    MbRegTransform * iReg = NULL;
        if (!(info[0].IsNull() || info[0].IsUndefined())) {
            RegTransform *iReg_ = RegTransform::Unwrap(info[0].ToObject());
                iReg =   iReg_->_underlying;
        }



_underlying->Inverse
(
        info.Length() == 0 || info[0].IsNull() ? NULL : iReg

);



    return env.Undefined();


        }

    Napi::Value PolyCurve::Inverse_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                            MbRegTransform * iReg = NULL;
        if (!(info[0].IsNull() || info[0].IsUndefined())) {
            RegTransform *iReg_ = RegTransform::Unwrap(info[0].ToObject());
                iReg =   iReg_->_underlying;
        }

        PolyCurve_Inverse_AsyncWorker* asyncWorker = new PolyCurve_Inverse_AsyncWorker(
_underlying,            deferred
,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PolyCurve::Trimmed(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number t1 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    Napi::Error::New(env, "number t2 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 2 || !(
              info[2].IsNumber()
)) {
                    Napi::Error::New(env, "int sense is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

             double t1 = info[0].ToNumber().DoubleValue();

             double t2 = info[1].ToNumber().DoubleValue();

             int sense = info[2].ToNumber().Int64Value();



 MbCurve * _result = _underlying->Trimmed
(
        t1
,        t2
,        sense

);



    Napi::Value _to;

            if (_result != NULL) {
        _to = Curve::NewInstance(env, (MbCurve *)_result);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value PolyCurve::Trimmed_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t1 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t2 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 2 || !(
              info[2].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "int sense is required."));
                    return deferred.Promise();
            }


                     double t1 = info[0].ToNumber().DoubleValue();

                     double t2 = info[1].ToNumber().DoubleValue();

                     int sense = info[2].ToNumber().Int64Value();

        PolyCurve_Trimmed_AsyncWorker* asyncWorker = new PolyCurve_Trimmed_AsyncWorker(
_underlying,            deferred
,
                
                t1,
                
                t2,
                
                sense        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PolyCurve::IsStraight(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            

             bool ignoreParams = info[0].ToBoolean();



 bool  _result = _underlying->IsStraight
(
        info.Length() == 0 || info[0].IsNull() ? false : ignoreParams

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value PolyCurve::IsStraight_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                     bool ignoreParams = info[0].ToBoolean();

        PolyCurve_IsStraight_AsyncWorker* asyncWorker = new PolyCurve_IsStraight_AsyncWorker(
_underlying,            deferred
,
                
                ignoreParams        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PolyCurve::IsClosed(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->IsClosed
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value PolyCurve::IsClosed_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PolyCurve_IsClosed_AsyncWorker* asyncWorker = new PolyCurve_IsClosed_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PolyCurve::IsBounded(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->IsBounded
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value PolyCurve::IsBounded_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PolyCurve_IsBounded_AsyncWorker* asyncWorker = new PolyCurve_IsBounded_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PolyCurve::GetTMax(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 double  _result = _underlying->GetTMax
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value PolyCurve::GetTMax_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PolyCurve_GetTMax_AsyncWorker* asyncWorker = new PolyCurve_GetTMax_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PolyCurve::GetTMin(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 double  _result = _underlying->GetTMin
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value PolyCurve::GetTMin_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PolyCurve_GetTMin_AsyncWorker* asyncWorker = new PolyCurve_GetTMin_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PolyCurve::GetPeriod(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 double  _result = _underlying->GetPeriod
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value PolyCurve::GetPeriod_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PolyCurve_GetPeriod_AsyncWorker* asyncWorker = new PolyCurve_GetPeriod_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PolyCurve::GetWeightCentre(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                    MbCartPoint *point = new MbCartPoint;




 bool  _result = _underlying->GetWeightCentre
(
        *point

);


if (_result) {

    Napi::Value _to;

            if (point != NULL) {
        _to = CartPoint::NewInstance(env, (MbCartPoint *)point);
    } else {
        _to = env.Null();
    }

            return _to;

} else {
    std::ostringstream msg;
    msg << "Operation GetWeightCentre failed";
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value PolyCurve::GetWeightCentre_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PolyCurve_GetWeightCentre_AsyncWorker* asyncWorker = new PolyCurve_GetWeightCentre_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PolyCurve::GetLimitPoint(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "ptrdiff_t number is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    MbCartPoint *point = new MbCartPoint;


             int number = info[0].ToNumber().Int64Value();



_underlying->GetLimitPoint
(
        number
,        *point

);



    Napi::Value _to;

            if (point != NULL) {
        _to = CartPoint::NewInstance(env, (MbCartPoint *)point);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value PolyCurve::GetLimitPoint_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "ptrdiff_t number is required."));
                    return deferred.Promise();
            }


                     int number = info[0].ToNumber().Int64Value();

        PolyCurve_GetLimitPoint_AsyncWorker* asyncWorker = new PolyCurve_GetLimitPoint_AsyncWorker(
_underlying,            deferred
,
                
                number        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PolyCurve::PointOn(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    MbCartPoint *p = new MbCartPoint;


             double t = info[0].ToNumber().DoubleValue();



_underlying->PointOn
(
        t
,        *p

);



    Napi::Value _to;

            if (p != NULL) {
        _to = CartPoint::NewInstance(env, (MbCartPoint *)p);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value PolyCurve::PointOn_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        PolyCurve_PointOn_AsyncWorker* asyncWorker = new PolyCurve_PointOn_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PolyCurve::_PointOn(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    MbCartPoint *p = new MbCartPoint;


             double t = info[0].ToNumber().DoubleValue();



_underlying->_PointOn
(
        t
,        *p

);



    Napi::Value _to;

            if (p != NULL) {
        _to = CartPoint::NewInstance(env, (MbCartPoint *)p);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value PolyCurve::_PointOn_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        PolyCurve__PointOn_AsyncWorker* asyncWorker = new PolyCurve__PointOn_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PolyCurve::Explore(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsBoolean()
)) {
                    Napi::Error::New(env, "boolean ext is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    MbCartPoint *pnt = new MbCartPoint;
        MbVector *fir = new MbVector;
         MbVector * sec = NULL;
         MbVector * thir = NULL;


             double t = info[0].ToNumber().DoubleValue();

             bool ext = info[1].ToBoolean();



_underlying->Explore
(
        t
,        ext
,        *pnt
,        *fir
,        sec
,        thir

);



        Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

            if (pnt != NULL) {
        _to = CartPoint::NewInstance(env, (MbCartPoint *)pnt);
    } else {
        _to = env.Null();
    }

        _toReturn.Set(Napi::String::New(env, "pnt"), _to);
            if (fir != NULL) {
        _to = Vector::NewInstance(env, (MbVector *)fir);
    } else {
        _to = env.Null();
    }

        _toReturn.Set(Napi::String::New(env, "fir"), _to);
            if (sec != NULL) {
        _to = Vector::NewInstance(env, (MbVector *)sec);
    } else {
        _to = env.Null();
    }

        _toReturn.Set(Napi::String::New(env, "sec"), _to);
            if (thir != NULL) {
        _to = Vector::NewInstance(env, (MbVector *)thir);
    } else {
        _to = env.Null();
    }

        _toReturn.Set(Napi::String::New(env, "thir"), _to);
            return _toReturn;


        }

    Napi::Value PolyCurve::Explore_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsBoolean()
)) {
                    deferred.Reject(Napi::String::New(env, "boolean ext is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

                     bool ext = info[1].ToBoolean();

        PolyCurve_Explore_AsyncWorker* asyncWorker = new PolyCurve_Explore_AsyncWorker(
_underlying,            deferred
,
                
                t,
                
                ext        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PolyCurve::FirstDer(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    MbVector *v = new MbVector;


             double t = info[0].ToNumber().DoubleValue();



_underlying->FirstDer
(
        t
,        *v

);



    Napi::Value _to;

            if (v != NULL) {
        _to = Vector::NewInstance(env, (MbVector *)v);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value PolyCurve::FirstDer_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        PolyCurve_FirstDer_AsyncWorker* asyncWorker = new PolyCurve_FirstDer_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PolyCurve::_FirstDer(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    MbVector *v = new MbVector;


             double t = info[0].ToNumber().DoubleValue();



_underlying->_FirstDer
(
        t
,        *v

);



    Napi::Value _to;

            if (v != NULL) {
        _to = Vector::NewInstance(env, (MbVector *)v);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value PolyCurve::_FirstDer_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        PolyCurve__FirstDer_AsyncWorker* asyncWorker = new PolyCurve__FirstDer_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PolyCurve::SecondDer(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    MbVector *v = new MbVector;


             double t = info[0].ToNumber().DoubleValue();



_underlying->SecondDer
(
        t
,        *v

);



    Napi::Value _to;

            if (v != NULL) {
        _to = Vector::NewInstance(env, (MbVector *)v);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value PolyCurve::SecondDer_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        PolyCurve_SecondDer_AsyncWorker* asyncWorker = new PolyCurve_SecondDer_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PolyCurve::_SecondDer(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    MbVector *v = new MbVector;


             double t = info[0].ToNumber().DoubleValue();



_underlying->_SecondDer
(
        t
,        *v

);



    Napi::Value _to;

            if (v != NULL) {
        _to = Vector::NewInstance(env, (MbVector *)v);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value PolyCurve::_SecondDer_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        PolyCurve__SecondDer_AsyncWorker* asyncWorker = new PolyCurve__SecondDer_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PolyCurve::Tangent(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    MbVector *v = new MbVector;


             double t = info[0].ToNumber().DoubleValue();



_underlying->Tangent
(
        t
,        *v

);



    Napi::Value _to;

            if (v != NULL) {
        _to = Vector::NewInstance(env, (MbVector *)v);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value PolyCurve::Tangent_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        PolyCurve_Tangent_AsyncWorker* asyncWorker = new PolyCurve_Tangent_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PolyCurve::_Tangent(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    MbVector *v = new MbVector;


             double t = info[0].ToNumber().DoubleValue();



_underlying->_Tangent
(
        t
,        *v

);



    Napi::Value _to;

            if (v != NULL) {
        _to = Vector::NewInstance(env, (MbVector *)v);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value PolyCurve::_Tangent_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        PolyCurve__Tangent_AsyncWorker* asyncWorker = new PolyCurve__Tangent_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PolyCurve::Normal(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    MbVector *v = new MbVector;


             double t = info[0].ToNumber().DoubleValue();



_underlying->Normal
(
        t
,        *v

);



    Napi::Value _to;

            if (v != NULL) {
        _to = Vector::NewInstance(env, (MbVector *)v);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value PolyCurve::Normal_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        PolyCurve_Normal_AsyncWorker* asyncWorker = new PolyCurve_Normal_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PolyCurve::_Normal(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    MbVector *v = new MbVector;


             double t = info[0].ToNumber().DoubleValue();



_underlying->_Normal
(
        t
,        *v

);



    Napi::Value _to;

            if (v != NULL) {
        _to = Vector::NewInstance(env, (MbVector *)v);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value PolyCurve::_Normal_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        PolyCurve__Normal_AsyncWorker* asyncWorker = new PolyCurve__Normal_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PolyCurve::PointRelative(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "CartPoint pnt is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    Napi::Error::New(env, "number eps is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'pnt'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class CartPoint *pnt_ = CartPoint::Unwrap(info[0].ToObject());
        
        const MbCartPoint & pnt =*pnt_->_underlying;
        

             double eps = info[1].ToNumber().DoubleValue();



 MbeItemLocation  _result = _underlying->PointRelative
(
        pnt
,        eps

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value PolyCurve::PointRelative_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "CartPoint pnt is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number eps is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'pnt'"));
                return deferred.Promise();
        }
        const class CartPoint *pnt_ = CartPoint::Unwrap(info[0].ToObject());
        
        const MbCartPoint & pnt =*pnt_->_underlying;
        

                     double eps = info[1].ToNumber().DoubleValue();

        PolyCurve_PointRelative_AsyncWorker* asyncWorker = new PolyCurve_PointRelative_AsyncWorker(
_underlying,            deferred
,
                
                pnt,
                
                eps        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PolyCurve::PointLocation(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "CartPoint pnt is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    Napi::Error::New(env, "number eps is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'pnt'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class CartPoint *pnt_ = CartPoint::Unwrap(info[0].ToObject());
        
        const MbCartPoint & pnt =*pnt_->_underlying;
        

             double eps = info[1].ToNumber().DoubleValue();



 MbeLocation  _result = _underlying->PointLocation
(
        pnt
,        eps

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value PolyCurve::PointLocation_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "CartPoint pnt is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number eps is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'pnt'"));
                return deferred.Promise();
        }
        const class CartPoint *pnt_ = CartPoint::Unwrap(info[0].ToObject());
        
        const MbCartPoint & pnt =*pnt_->_underlying;
        

                     double eps = info[1].ToNumber().DoubleValue();

        PolyCurve_PointLocation_AsyncWorker* asyncWorker = new PolyCurve_PointLocation_AsyncWorker(
_underlying,            deferred
,
                
                pnt,
                
                eps        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PolyCurve::IsA(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbePlaneType  _result = _underlying->IsA
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value PolyCurve::IsA_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PolyCurve_IsA_AsyncWorker* asyncWorker = new PolyCurve_IsA_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PolyCurve::Type(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbePlaneType  _result = _underlying->Type
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value PolyCurve::Type_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PolyCurve_Type_AsyncWorker* asyncWorker = new PolyCurve_Type_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PolyCurve::Family(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbePlaneType  _result = _underlying->Family
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value PolyCurve::Family_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PolyCurve_Family_AsyncWorker* asyncWorker = new PolyCurve_Family_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PolyCurve::Move(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Vector::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Vector to is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    const MbSurface * newSurface = NULL;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'to'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Vector *to_ = Vector::Unwrap(info[0].ToObject());
        
        const MbVector & to =*to_->_underlying;
        

                    MbRegTransform * iReg = NULL;
        if (!(info[1].IsNull() || info[1].IsUndefined())) {
            RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
                iReg =   iReg_->_underlying;
        }



_underlying->Move
(
        to
,        info.Length() == 1 || info[1].IsNull() ? NULL : iReg
,        info.Length() == 2 || info[2].IsNull() ? NULL : newSurface

);



    Napi::Value _to;

            if (newSurface != NULL) {
        _to = Surface::NewInstance(env, (MbSurface *)newSurface);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value PolyCurve::Move_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Vector::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Vector to is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'to'"));
                return deferred.Promise();
        }
        const class Vector *to_ = Vector::Unwrap(info[0].ToObject());
        
        const MbVector & to =*to_->_underlying;
        

                            MbRegTransform * iReg = NULL;
        if (!(info[1].IsNull() || info[1].IsUndefined())) {
            RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
                iReg =   iReg_->_underlying;
        }

        PolyCurve_Move_AsyncWorker* asyncWorker = new PolyCurve_Move_AsyncWorker(
_underlying,            deferred
,
                
                to,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PolyCurve::Transform(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Matrix::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Matrix matr is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'matr'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Matrix *matr_ = Matrix::Unwrap(info[0].ToObject());
        
        const MbMatrix & matr =*matr_->_underlying;
        

                    MbRegTransform * iReg = NULL;
        if (!(info[1].IsNull() || info[1].IsUndefined())) {
            RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
                iReg =   iReg_->_underlying;
        }

                    MbSurface * newSurface = NULL;
        if (!(info[2].IsNull() || info[2].IsUndefined())) {
            Surface *newSurface_ = Surface::Unwrap(info[2].ToObject());
                newSurface =   newSurface_->_underlying;
        }



_underlying->Transform
(
        matr
,        info.Length() == 1 || info[1].IsNull() ? NULL : iReg
,        info.Length() == 2 || info[2].IsNull() ? NULL : newSurface

);



    return env.Undefined();


        }

    Napi::Value PolyCurve::Transform_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Matrix::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Matrix matr is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'matr'"));
                return deferred.Promise();
        }
        const class Matrix *matr_ = Matrix::Unwrap(info[0].ToObject());
        
        const MbMatrix & matr =*matr_->_underlying;
        

                            MbRegTransform * iReg = NULL;
        if (!(info[1].IsNull() || info[1].IsUndefined())) {
            RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
                iReg =   iReg_->_underlying;
        }

                            MbSurface * newSurface = NULL;
        if (!(info[2].IsNull() || info[2].IsUndefined())) {
            Surface *newSurface_ = Surface::Unwrap(info[2].ToObject());
                newSurface =   newSurface_->_underlying;
        }

        PolyCurve_Transform_AsyncWorker* asyncWorker = new PolyCurve_Transform_AsyncWorker(
_underlying,            deferred
,
                
                matr,
                
                iReg,
                
                newSurface        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PolyCurve::Duplicate(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            

                    MbRegDuplicate * dup = NULL;
        if (!(info[0].IsNull() || info[0].IsUndefined())) {
            RegDuplicate *dup_ = RegDuplicate::Unwrap(info[0].ToObject());
                dup =   dup_->_underlying;
        }



 MbPlaneItem & _result = _underlying->Duplicate
(
        info.Length() == 0 || info[0].IsNull() ? NULL : dup

);



    Napi::Value _to;

            _to = PlaneItem::NewInstance(env, (MbPlaneItem *)&(_result));

            return _to;


        }

    Napi::Value PolyCurve::Duplicate_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                            MbRegDuplicate * dup = NULL;
        if (!(info[0].IsNull() || info[0].IsUndefined())) {
            RegDuplicate *dup_ = RegDuplicate::Unwrap(info[0].ToObject());
                dup =   dup_->_underlying;
        }

        PolyCurve_Duplicate_AsyncWorker* asyncWorker = new PolyCurve_Duplicate_AsyncWorker(
_underlying,            deferred
,
                
                dup        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PolyCurve::AddYourGabaritTo(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Rect::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Rect rect is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'rect'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Rect *rect_ = Rect::Unwrap(info[0].ToObject());
        
         MbRect & rect =*rect_->_underlying;
        



_underlying->AddYourGabaritTo
(
        rect

);



    return env.Undefined();


        }

    Napi::Value PolyCurve::AddYourGabaritTo_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Rect::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Rect rect is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'rect'"));
                return deferred.Promise();
        }
        const class Rect *rect_ = Rect::Unwrap(info[0].ToObject());
        
         MbRect & rect =*rect_->_underlying;
        

        PolyCurve_AddYourGabaritTo_AsyncWorker* asyncWorker = new PolyCurve_AddYourGabaritTo_AsyncWorker(
_underlying,            deferred
,
                
                rect        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PolyCurve::GetUseCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 refcount_t  _result = _underlying->GetUseCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value PolyCurve::GetUseCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PolyCurve_GetUseCount_AsyncWorker* asyncWorker = new PolyCurve_GetUseCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PolyCurve::AddRef(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->AddRef
(

);



    return env.Undefined();


        }

    Napi::Value PolyCurve::AddRef_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PolyCurve_AddRef_AsyncWorker* asyncWorker = new PolyCurve_AddRef_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }



    Napi::Value PolyCurve::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }

PolyCurve::~PolyCurve() {
    // std::cout << "calling ::DeleteItem on PolyCurve for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

    PolyCurve_GetPointsCount_AsyncWorker::PolyCurve_GetPointsCount_AsyncWorker(
MbPolyCurve * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PolyCurve_GetPointsCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         size_t  _result = _underlying->GetPointsCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PolyCurve_GetPointsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             size_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void PolyCurve_GetPointsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PolyCurve_GetPoint_AsyncWorker::PolyCurve_GetPoint_AsyncWorker(
MbPolyCurve * _underlying,        Napi::Promise::Deferred const &d
,
                         ptrdiff_t  index    )
        :_underlying(_underlying),PromiseWorker(d),
                        index(index)
{};

    void PolyCurve_GetPoint_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbCartPoint *pnt = new MbCartPoint;


        
        _underlying->GetPoint(
                        index
,                        *pnt
        );


                this->pnt = pnt;

        
        ExitParallelRegion();
    }

    void PolyCurve_GetPoint_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbCartPoint * pnt = this->pnt;
                if (pnt != NULL) {
        _to = CartPoint::NewInstance(env, (MbCartPoint *)pnt);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void PolyCurve_GetPoint_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PolyCurve_AddPoint_AsyncWorker::PolyCurve_AddPoint_AsyncWorker(
MbPolyCurve * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbCartPoint & pnt    )
        :_underlying(_underlying),PromiseWorker(d),
                        pnt(pnt)
{};

    void PolyCurve_AddPoint_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddPoint(
                        pnt
        );



        
        ExitParallelRegion();
    }

    void PolyCurve_AddPoint_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void PolyCurve_AddPoint_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PolyCurve_Inverse_AsyncWorker::PolyCurve_Inverse_AsyncWorker(
MbPolyCurve * _underlying,        Napi::Promise::Deferred const &d
,
                         MbRegTransform * iReg    )
        :_underlying(_underlying),PromiseWorker(d),
                        iReg(iReg)
{};

    void PolyCurve_Inverse_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Inverse(
                        iReg
        );



        
        ExitParallelRegion();
    }

    void PolyCurve_Inverse_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void PolyCurve_Inverse_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PolyCurve_Trimmed_AsyncWorker::PolyCurve_Trimmed_AsyncWorker(
MbPolyCurve * _underlying,        Napi::Promise::Deferred const &d
,
                         double  t1,
                         double  t2,
                         int  sense    )
        :_underlying(_underlying),PromiseWorker(d),
                        t1(t1)
,
                        t2(t2)
,
                        sense(sense)
{};

    void PolyCurve_Trimmed_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbCurve * _result = _underlying->Trimmed(
                        t1
,                        t2
,                        sense
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PolyCurve_Trimmed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbCurve * _result = this->_result;
                if (_result != NULL) {
        _to = Curve::NewInstance(env, (MbCurve *)_result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void PolyCurve_Trimmed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PolyCurve_IsStraight_AsyncWorker::PolyCurve_IsStraight_AsyncWorker(
MbPolyCurve * _underlying,        Napi::Promise::Deferred const &d
,
                         bool  ignoreParams    )
        :_underlying(_underlying),PromiseWorker(d),
                        ignoreParams(ignoreParams)
{};

    void PolyCurve_IsStraight_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsStraight(
                        ignoreParams
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PolyCurve_IsStraight_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void PolyCurve_IsStraight_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PolyCurve_IsClosed_AsyncWorker::PolyCurve_IsClosed_AsyncWorker(
MbPolyCurve * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PolyCurve_IsClosed_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsClosed(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PolyCurve_IsClosed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void PolyCurve_IsClosed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PolyCurve_IsBounded_AsyncWorker::PolyCurve_IsBounded_AsyncWorker(
MbPolyCurve * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PolyCurve_IsBounded_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsBounded(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PolyCurve_IsBounded_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void PolyCurve_IsBounded_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PolyCurve_GetTMax_AsyncWorker::PolyCurve_GetTMax_AsyncWorker(
MbPolyCurve * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PolyCurve_GetTMax_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetTMax(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PolyCurve_GetTMax_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void PolyCurve_GetTMax_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PolyCurve_GetTMin_AsyncWorker::PolyCurve_GetTMin_AsyncWorker(
MbPolyCurve * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PolyCurve_GetTMin_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetTMin(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PolyCurve_GetTMin_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void PolyCurve_GetTMin_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PolyCurve_GetPeriod_AsyncWorker::PolyCurve_GetPeriod_AsyncWorker(
MbPolyCurve * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PolyCurve_GetPeriod_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetPeriod(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PolyCurve_GetPeriod_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void PolyCurve_GetPeriod_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PolyCurve_GetWeightCentre_AsyncWorker::PolyCurve_GetWeightCentre_AsyncWorker(
MbPolyCurve * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PolyCurve_GetWeightCentre_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbCartPoint *point = new MbCartPoint;


        
         bool  _result = _underlying->GetWeightCentre(
                        *point
        );

        if (_result) {

                this->point = point;

                } else {
            std::ostringstream msg;
            msg << "Operation GetWeightCentre failed";
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void PolyCurve_GetWeightCentre_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbCartPoint * point = this->point;
                if (point != NULL) {
        _to = CartPoint::NewInstance(env, (MbCartPoint *)point);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void PolyCurve_GetWeightCentre_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PolyCurve_GetLimitPoint_AsyncWorker::PolyCurve_GetLimitPoint_AsyncWorker(
MbPolyCurve * _underlying,        Napi::Promise::Deferred const &d
,
                         ptrdiff_t  number    )
        :_underlying(_underlying),PromiseWorker(d),
                        number(number)
{};

    void PolyCurve_GetLimitPoint_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbCartPoint *point = new MbCartPoint;


        
        _underlying->GetLimitPoint(
                        number
,                        *point
        );


                this->point = point;

        
        ExitParallelRegion();
    }

    void PolyCurve_GetLimitPoint_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbCartPoint * point = this->point;
                if (point != NULL) {
        _to = CartPoint::NewInstance(env, (MbCartPoint *)point);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void PolyCurve_GetLimitPoint_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PolyCurve_PointOn_AsyncWorker::PolyCurve_PointOn_AsyncWorker(
MbPolyCurve * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void PolyCurve_PointOn_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbCartPoint *p = new MbCartPoint;


        
        _underlying->PointOn(
                        t
,                        *p
        );


                this->p = p;

        
        ExitParallelRegion();
    }

    void PolyCurve_PointOn_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbCartPoint * p = this->p;
                if (p != NULL) {
        _to = CartPoint::NewInstance(env, (MbCartPoint *)p);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void PolyCurve_PointOn_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PolyCurve__PointOn_AsyncWorker::PolyCurve__PointOn_AsyncWorker(
MbPolyCurve * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void PolyCurve__PointOn_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbCartPoint *p = new MbCartPoint;


        
        _underlying->_PointOn(
                        t
,                        *p
        );


                this->p = p;

        
        ExitParallelRegion();
    }

    void PolyCurve__PointOn_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbCartPoint * p = this->p;
                if (p != NULL) {
        _to = CartPoint::NewInstance(env, (MbCartPoint *)p);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void PolyCurve__PointOn_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PolyCurve_Explore_AsyncWorker::PolyCurve_Explore_AsyncWorker(
MbPolyCurve * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t,
                         bool  ext    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
,
                        ext(ext)
{};

    void PolyCurve_Explore_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbCartPoint *pnt = new MbCartPoint;
        MbVector *fir = new MbVector;
         MbVector * sec = NULL;
         MbVector * thir = NULL;


        
        _underlying->Explore(
                        t
,                        ext
,                        *pnt
,                        *fir
,                        sec
,                        thir
        );


                this->pnt = pnt;
                this->fir = fir;
                this->sec = sec;
                this->thir = thir;

        
        ExitParallelRegion();
    }

    void PolyCurve_Explore_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            Napi::Object _toReturn = Napi::Object::New(env);

                 MbCartPoint * pnt = this->pnt;
                    if (pnt != NULL) {
        _to = CartPoint::NewInstance(env, (MbCartPoint *)pnt);
    } else {
        _to = env.Null();
    }

                _toReturn.Set(Napi::String::New(env, "pnt"), _to);
                 MbVector * fir = this->fir;
                    if (fir != NULL) {
        _to = Vector::NewInstance(env, (MbVector *)fir);
    } else {
        _to = env.Null();
    }

                _toReturn.Set(Napi::String::New(env, "fir"), _to);
                 MbVector * sec = this->sec;
                    if (sec != NULL) {
        _to = Vector::NewInstance(env, (MbVector *)sec);
    } else {
        _to = env.Null();
    }

                _toReturn.Set(Napi::String::New(env, "sec"), _to);
                 MbVector * thir = this->thir;
                    if (thir != NULL) {
        _to = Vector::NewInstance(env, (MbVector *)thir);
    } else {
        _to = env.Null();
    }

                _toReturn.Set(Napi::String::New(env, "thir"), _to);

            deferred.Resolve(_toReturn);
    }

    void PolyCurve_Explore_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PolyCurve_FirstDer_AsyncWorker::PolyCurve_FirstDer_AsyncWorker(
MbPolyCurve * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void PolyCurve_FirstDer_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->FirstDer(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void PolyCurve_FirstDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbVector * v = this->v;
                if (v != NULL) {
        _to = Vector::NewInstance(env, (MbVector *)v);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void PolyCurve_FirstDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PolyCurve__FirstDer_AsyncWorker::PolyCurve__FirstDer_AsyncWorker(
MbPolyCurve * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void PolyCurve__FirstDer_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->_FirstDer(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void PolyCurve__FirstDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbVector * v = this->v;
                if (v != NULL) {
        _to = Vector::NewInstance(env, (MbVector *)v);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void PolyCurve__FirstDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PolyCurve_SecondDer_AsyncWorker::PolyCurve_SecondDer_AsyncWorker(
MbPolyCurve * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void PolyCurve_SecondDer_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->SecondDer(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void PolyCurve_SecondDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbVector * v = this->v;
                if (v != NULL) {
        _to = Vector::NewInstance(env, (MbVector *)v);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void PolyCurve_SecondDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PolyCurve__SecondDer_AsyncWorker::PolyCurve__SecondDer_AsyncWorker(
MbPolyCurve * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void PolyCurve__SecondDer_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->_SecondDer(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void PolyCurve__SecondDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbVector * v = this->v;
                if (v != NULL) {
        _to = Vector::NewInstance(env, (MbVector *)v);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void PolyCurve__SecondDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PolyCurve_Tangent_AsyncWorker::PolyCurve_Tangent_AsyncWorker(
MbPolyCurve * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void PolyCurve_Tangent_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->Tangent(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void PolyCurve_Tangent_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbVector * v = this->v;
                if (v != NULL) {
        _to = Vector::NewInstance(env, (MbVector *)v);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void PolyCurve_Tangent_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PolyCurve__Tangent_AsyncWorker::PolyCurve__Tangent_AsyncWorker(
MbPolyCurve * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void PolyCurve__Tangent_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->_Tangent(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void PolyCurve__Tangent_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbVector * v = this->v;
                if (v != NULL) {
        _to = Vector::NewInstance(env, (MbVector *)v);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void PolyCurve__Tangent_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PolyCurve_Normal_AsyncWorker::PolyCurve_Normal_AsyncWorker(
MbPolyCurve * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void PolyCurve_Normal_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->Normal(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void PolyCurve_Normal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbVector * v = this->v;
                if (v != NULL) {
        _to = Vector::NewInstance(env, (MbVector *)v);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void PolyCurve_Normal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PolyCurve__Normal_AsyncWorker::PolyCurve__Normal_AsyncWorker(
MbPolyCurve * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void PolyCurve__Normal_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->_Normal(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void PolyCurve__Normal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbVector * v = this->v;
                if (v != NULL) {
        _to = Vector::NewInstance(env, (MbVector *)v);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void PolyCurve__Normal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PolyCurve_PointRelative_AsyncWorker::PolyCurve_PointRelative_AsyncWorker(
MbPolyCurve * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbCartPoint & pnt,
                         double  eps    )
        :_underlying(_underlying),PromiseWorker(d),
                        pnt(pnt)
,
                        eps(eps)
{};

    void PolyCurve_PointRelative_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeItemLocation  _result = _underlying->PointRelative(
                        pnt
,                        eps
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PolyCurve_PointRelative_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeItemLocation  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void PolyCurve_PointRelative_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PolyCurve_PointLocation_AsyncWorker::PolyCurve_PointLocation_AsyncWorker(
MbPolyCurve * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbCartPoint & pnt,
                         double  eps    )
        :_underlying(_underlying),PromiseWorker(d),
                        pnt(pnt)
,
                        eps(eps)
{};

    void PolyCurve_PointLocation_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeLocation  _result = _underlying->PointLocation(
                        pnt
,                        eps
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PolyCurve_PointLocation_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeLocation  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void PolyCurve_PointLocation_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PolyCurve_IsA_AsyncWorker::PolyCurve_IsA_AsyncWorker(
MbPolyCurve * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PolyCurve_IsA_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbePlaneType  _result = _underlying->IsA(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PolyCurve_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbePlaneType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void PolyCurve_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PolyCurve_Type_AsyncWorker::PolyCurve_Type_AsyncWorker(
MbPolyCurve * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PolyCurve_Type_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbePlaneType  _result = _underlying->Type(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PolyCurve_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbePlaneType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void PolyCurve_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PolyCurve_Family_AsyncWorker::PolyCurve_Family_AsyncWorker(
MbPolyCurve * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PolyCurve_Family_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbePlaneType  _result = _underlying->Family(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PolyCurve_Family_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbePlaneType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void PolyCurve_Family_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PolyCurve_Move_AsyncWorker::PolyCurve_Move_AsyncWorker(
MbPolyCurve * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbVector & to,
                         MbRegTransform * iReg    )
        :_underlying(_underlying),PromiseWorker(d),
                        to(to)
,
                        iReg(iReg)
{};

    void PolyCurve_Move_AsyncWorker::Execute() {
        EnterParallelRegion();

                const MbSurface * newSurface = NULL;


        
        _underlying->Move(
                        to
,                        iReg
,                        newSurface
        );


                this->newSurface = newSurface;

        
        ExitParallelRegion();
    }

    void PolyCurve_Move_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            const MbSurface * newSurface = this->newSurface;
                if (newSurface != NULL) {
        _to = Surface::NewInstance(env, (MbSurface *)newSurface);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void PolyCurve_Move_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PolyCurve_Transform_AsyncWorker::PolyCurve_Transform_AsyncWorker(
MbPolyCurve * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbMatrix & matr,
                         MbRegTransform * iReg,
                        const MbSurface * newSurface    )
        :_underlying(_underlying),PromiseWorker(d),
                        matr(matr)
,
                        iReg(iReg)
,
                        newSurface(newSurface)
{};

    void PolyCurve_Transform_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Transform(
                        matr
,                        iReg
,                        newSurface
        );



        
        ExitParallelRegion();
    }

    void PolyCurve_Transform_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void PolyCurve_Transform_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PolyCurve_Duplicate_AsyncWorker::PolyCurve_Duplicate_AsyncWorker(
MbPolyCurve * _underlying,        Napi::Promise::Deferred const &d
,
                         MbRegDuplicate * dup    )
        :_underlying(_underlying),PromiseWorker(d),
                        dup(dup)
{};

    void PolyCurve_Duplicate_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbPlaneItem & _result = _underlying->Duplicate(
                        dup
        );


                this->_result = (MbPlaneItem *)&(_result);

        
        ExitParallelRegion();
    }

    void PolyCurve_Duplicate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbPlaneItem * _result = this->_result;
                _to = PlaneItem::NewInstance(env, (MbPlaneItem *)&(_result));

            deferred.Resolve(_to);
    }

    void PolyCurve_Duplicate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PolyCurve_AddYourGabaritTo_AsyncWorker::PolyCurve_AddYourGabaritTo_AsyncWorker(
MbPolyCurve * _underlying,        Napi::Promise::Deferred const &d
,
                         MbRect & rect    )
        :_underlying(_underlying),PromiseWorker(d),
                        rect(rect)
{};

    void PolyCurve_AddYourGabaritTo_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddYourGabaritTo(
                        rect
        );



        
        ExitParallelRegion();
    }

    void PolyCurve_AddYourGabaritTo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void PolyCurve_AddYourGabaritTo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PolyCurve_GetUseCount_AsyncWorker::PolyCurve_GetUseCount_AsyncWorker(
MbPolyCurve * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PolyCurve_GetUseCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         refcount_t  _result = _underlying->GetUseCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PolyCurve_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             refcount_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void PolyCurve_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PolyCurve_AddRef_AsyncWorker::PolyCurve_AddRef_AsyncWorker(
MbPolyCurve * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PolyCurve_AddRef_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddRef(
        );



        
        ExitParallelRegion();
    }

    void PolyCurve_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void PolyCurve_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

