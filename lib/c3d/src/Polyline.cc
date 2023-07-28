// This is a generated file, modify: generate/templates/Polyline.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/Polyline.h"

#include "tool_mutex.h"

Napi::Object Polyline::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "Polyline", {
        InstanceMethod<&Polyline::GetPointsCount>("GetPointsCount"),
        InstanceMethod<&Polyline::GetPointsCount_async>("GetPointsCount_async"),
        InstanceMethod<&Polyline::GetPoint>("GetPoint"),
        InstanceMethod<&Polyline::GetPoint_async>("GetPoint_async"),
        InstanceMethod<&Polyline::AddPoint>("AddPoint"),
        InstanceMethod<&Polyline::AddPoint_async>("AddPoint_async"),
        InstanceMethod<&Polyline::Inverse>("Inverse"),
        InstanceMethod<&Polyline::Inverse_async>("Inverse_async"),
        InstanceMethod<&Polyline::Trimmed>("Trimmed"),
        InstanceMethod<&Polyline::Trimmed_async>("Trimmed_async"),
        InstanceMethod<&Polyline::IsStraight>("IsStraight"),
        InstanceMethod<&Polyline::IsStraight_async>("IsStraight_async"),
        InstanceMethod<&Polyline::IsClosed>("IsClosed"),
        InstanceMethod<&Polyline::IsClosed_async>("IsClosed_async"),
        InstanceMethod<&Polyline::IsBounded>("IsBounded"),
        InstanceMethod<&Polyline::IsBounded_async>("IsBounded_async"),
        InstanceMethod<&Polyline::GetTMax>("GetTMax"),
        InstanceMethod<&Polyline::GetTMax_async>("GetTMax_async"),
        InstanceMethod<&Polyline::GetTMin>("GetTMin"),
        InstanceMethod<&Polyline::GetTMin_async>("GetTMin_async"),
        InstanceMethod<&Polyline::GetPeriod>("GetPeriod"),
        InstanceMethod<&Polyline::GetPeriod_async>("GetPeriod_async"),
        InstanceMethod<&Polyline::GetWeightCentre>("GetWeightCentre"),
        InstanceMethod<&Polyline::GetWeightCentre_async>("GetWeightCentre_async"),
        InstanceMethod<&Polyline::GetLimitPoint>("GetLimitPoint"),
        InstanceMethod<&Polyline::GetLimitPoint_async>("GetLimitPoint_async"),
        InstanceMethod<&Polyline::PointOn>("PointOn"),
        InstanceMethod<&Polyline::PointOn_async>("PointOn_async"),
        InstanceMethod<&Polyline::_PointOn>("_PointOn"),
        InstanceMethod<&Polyline::_PointOn_async>("_PointOn_async"),
        InstanceMethod<&Polyline::Explore>("Explore"),
        InstanceMethod<&Polyline::Explore_async>("Explore_async"),
        InstanceMethod<&Polyline::FirstDer>("FirstDer"),
        InstanceMethod<&Polyline::FirstDer_async>("FirstDer_async"),
        InstanceMethod<&Polyline::_FirstDer>("_FirstDer"),
        InstanceMethod<&Polyline::_FirstDer_async>("_FirstDer_async"),
        InstanceMethod<&Polyline::SecondDer>("SecondDer"),
        InstanceMethod<&Polyline::SecondDer_async>("SecondDer_async"),
        InstanceMethod<&Polyline::_SecondDer>("_SecondDer"),
        InstanceMethod<&Polyline::_SecondDer_async>("_SecondDer_async"),
        InstanceMethod<&Polyline::Tangent>("Tangent"),
        InstanceMethod<&Polyline::Tangent_async>("Tangent_async"),
        InstanceMethod<&Polyline::_Tangent>("_Tangent"),
        InstanceMethod<&Polyline::_Tangent_async>("_Tangent_async"),
        InstanceMethod<&Polyline::Normal>("Normal"),
        InstanceMethod<&Polyline::Normal_async>("Normal_async"),
        InstanceMethod<&Polyline::_Normal>("_Normal"),
        InstanceMethod<&Polyline::_Normal_async>("_Normal_async"),
        InstanceMethod<&Polyline::PointRelative>("PointRelative"),
        InstanceMethod<&Polyline::PointRelative_async>("PointRelative_async"),
        InstanceMethod<&Polyline::PointLocation>("PointLocation"),
        InstanceMethod<&Polyline::PointLocation_async>("PointLocation_async"),
        InstanceMethod<&Polyline::IsA>("IsA"),
        InstanceMethod<&Polyline::IsA_async>("IsA_async"),
        InstanceMethod<&Polyline::Type>("Type"),
        InstanceMethod<&Polyline::Type_async>("Type_async"),
        InstanceMethod<&Polyline::Family>("Family"),
        InstanceMethod<&Polyline::Family_async>("Family_async"),
        InstanceMethod<&Polyline::Move>("Move"),
        InstanceMethod<&Polyline::Move_async>("Move_async"),
        InstanceMethod<&Polyline::Transform>("Transform"),
        InstanceMethod<&Polyline::Transform_async>("Transform_async"),
        InstanceMethod<&Polyline::Duplicate>("Duplicate"),
        InstanceMethod<&Polyline::Duplicate_async>("Duplicate_async"),
        InstanceMethod<&Polyline::AddYourGabaritTo>("AddYourGabaritTo"),
        InstanceMethod<&Polyline::AddYourGabaritTo_async>("AddYourGabaritTo_async"),
        InstanceMethod<&Polyline::GetUseCount>("GetUseCount"),
        InstanceMethod<&Polyline::GetUseCount_async>("GetUseCount_async"),
        InstanceMethod<&Polyline::AddRef>("AddRef"),
        InstanceMethod<&Polyline::AddRef_async>("AddRef_async"),
            InstanceMethod<&Polyline::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Polyline", func);

    Napi::Object global = env.Global();
    Napi::Object Object = global.Get("Object").ToObject();
    Napi::Function setPrototypeOf = Napi::Function(env, Object.Get("setPrototypeOf"));
    Napi::Value prototype = func.Get("prototype");

    Napi::Function superFunc = PolyCurve::GetConstructor(env);
    Napi::FunctionReference* superConstructor = new Napi::FunctionReference();
    *superConstructor = Napi::Persistent(superFunc);

    Napi::Value superPrototype = superFunc.Get("prototype");
    setPrototypeOf.Call({prototype, superPrototype});
    setPrototypeOf.Call({func, superFunc});

    return exports;
}

Polyline::Polyline(const Napi::CallbackInfo& info) : Napi::ObjectWrap<Polyline>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        Napi::Error::New(env, "Polyline cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object Polyline::NewInstance(Napi::Env env, MbPolyline *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Polyline");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Polyline *unwrapped = Polyline::Unwrap(inst);
underlying->AddRef();    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Polyline::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Polyline");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

        Napi::Value Polyline::GetPointsCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 size_t  _result = _underlying->GetPointsCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Polyline::GetPointsCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Polyline_GetPointsCount_AsyncWorker* asyncWorker = new Polyline_GetPointsCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Polyline::GetPoint(const Napi::CallbackInfo& info) {
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

    Napi::Value Polyline::GetPoint_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "ptrdiff_t index is required."));
                    return deferred.Promise();
            }


                     int index = info[0].ToNumber().Int64Value();

        Polyline_GetPoint_AsyncWorker* asyncWorker = new Polyline_GetPoint_AsyncWorker(
_underlying,            deferred
,
                
                index        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Polyline::AddPoint(const Napi::CallbackInfo& info) {
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

    Napi::Value Polyline::AddPoint_async(const Napi::CallbackInfo& info) {
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
        

        Polyline_AddPoint_AsyncWorker* asyncWorker = new Polyline_AddPoint_AsyncWorker(
_underlying,            deferred
,
                
                pnt        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Polyline::Inverse(const Napi::CallbackInfo& info) {
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

    Napi::Value Polyline::Inverse_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                            MbRegTransform * iReg = NULL;
        if (!(info[0].IsNull() || info[0].IsUndefined())) {
            RegTransform *iReg_ = RegTransform::Unwrap(info[0].ToObject());
                iReg =   iReg_->_underlying;
        }

        Polyline_Inverse_AsyncWorker* asyncWorker = new Polyline_Inverse_AsyncWorker(
_underlying,            deferred
,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Polyline::Trimmed(const Napi::CallbackInfo& info) {
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

    Napi::Value Polyline::Trimmed_async(const Napi::CallbackInfo& info) {
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

        Polyline_Trimmed_AsyncWorker* asyncWorker = new Polyline_Trimmed_AsyncWorker(
_underlying,            deferred
,
                
                t1,
                
                t2,
                
                sense        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Polyline::IsStraight(const Napi::CallbackInfo& info) {
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

    Napi::Value Polyline::IsStraight_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                     bool ignoreParams = info[0].ToBoolean();

        Polyline_IsStraight_AsyncWorker* asyncWorker = new Polyline_IsStraight_AsyncWorker(
_underlying,            deferred
,
                
                ignoreParams        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Polyline::IsClosed(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->IsClosed
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value Polyline::IsClosed_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Polyline_IsClosed_AsyncWorker* asyncWorker = new Polyline_IsClosed_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Polyline::IsBounded(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->IsBounded
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value Polyline::IsBounded_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Polyline_IsBounded_AsyncWorker* asyncWorker = new Polyline_IsBounded_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Polyline::GetTMax(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 double  _result = _underlying->GetTMax
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Polyline::GetTMax_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Polyline_GetTMax_AsyncWorker* asyncWorker = new Polyline_GetTMax_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Polyline::GetTMin(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 double  _result = _underlying->GetTMin
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Polyline::GetTMin_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Polyline_GetTMin_AsyncWorker* asyncWorker = new Polyline_GetTMin_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Polyline::GetPeriod(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 double  _result = _underlying->GetPeriod
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Polyline::GetPeriod_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Polyline_GetPeriod_AsyncWorker* asyncWorker = new Polyline_GetPeriod_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Polyline::GetWeightCentre(const Napi::CallbackInfo& info) {
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

    Napi::Value Polyline::GetWeightCentre_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Polyline_GetWeightCentre_AsyncWorker* asyncWorker = new Polyline_GetWeightCentre_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Polyline::GetLimitPoint(const Napi::CallbackInfo& info) {
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

    Napi::Value Polyline::GetLimitPoint_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "ptrdiff_t number is required."));
                    return deferred.Promise();
            }


                     int number = info[0].ToNumber().Int64Value();

        Polyline_GetLimitPoint_AsyncWorker* asyncWorker = new Polyline_GetLimitPoint_AsyncWorker(
_underlying,            deferred
,
                
                number        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Polyline::PointOn(const Napi::CallbackInfo& info) {
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

    Napi::Value Polyline::PointOn_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        Polyline_PointOn_AsyncWorker* asyncWorker = new Polyline_PointOn_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Polyline::_PointOn(const Napi::CallbackInfo& info) {
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

    Napi::Value Polyline::_PointOn_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        Polyline__PointOn_AsyncWorker* asyncWorker = new Polyline__PointOn_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Polyline::Explore(const Napi::CallbackInfo& info) {
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

    Napi::Value Polyline::Explore_async(const Napi::CallbackInfo& info) {
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

        Polyline_Explore_AsyncWorker* asyncWorker = new Polyline_Explore_AsyncWorker(
_underlying,            deferred
,
                
                t,
                
                ext        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Polyline::FirstDer(const Napi::CallbackInfo& info) {
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

    Napi::Value Polyline::FirstDer_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        Polyline_FirstDer_AsyncWorker* asyncWorker = new Polyline_FirstDer_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Polyline::_FirstDer(const Napi::CallbackInfo& info) {
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

    Napi::Value Polyline::_FirstDer_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        Polyline__FirstDer_AsyncWorker* asyncWorker = new Polyline__FirstDer_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Polyline::SecondDer(const Napi::CallbackInfo& info) {
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

    Napi::Value Polyline::SecondDer_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        Polyline_SecondDer_AsyncWorker* asyncWorker = new Polyline_SecondDer_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Polyline::_SecondDer(const Napi::CallbackInfo& info) {
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

    Napi::Value Polyline::_SecondDer_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        Polyline__SecondDer_AsyncWorker* asyncWorker = new Polyline__SecondDer_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Polyline::Tangent(const Napi::CallbackInfo& info) {
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

    Napi::Value Polyline::Tangent_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        Polyline_Tangent_AsyncWorker* asyncWorker = new Polyline_Tangent_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Polyline::_Tangent(const Napi::CallbackInfo& info) {
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

    Napi::Value Polyline::_Tangent_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        Polyline__Tangent_AsyncWorker* asyncWorker = new Polyline__Tangent_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Polyline::Normal(const Napi::CallbackInfo& info) {
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

    Napi::Value Polyline::Normal_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        Polyline_Normal_AsyncWorker* asyncWorker = new Polyline_Normal_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Polyline::_Normal(const Napi::CallbackInfo& info) {
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

    Napi::Value Polyline::_Normal_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        Polyline__Normal_AsyncWorker* asyncWorker = new Polyline__Normal_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Polyline::PointRelative(const Napi::CallbackInfo& info) {
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

    Napi::Value Polyline::PointRelative_async(const Napi::CallbackInfo& info) {
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

        Polyline_PointRelative_AsyncWorker* asyncWorker = new Polyline_PointRelative_AsyncWorker(
_underlying,            deferred
,
                
                pnt,
                
                eps        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Polyline::PointLocation(const Napi::CallbackInfo& info) {
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

    Napi::Value Polyline::PointLocation_async(const Napi::CallbackInfo& info) {
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

        Polyline_PointLocation_AsyncWorker* asyncWorker = new Polyline_PointLocation_AsyncWorker(
_underlying,            deferred
,
                
                pnt,
                
                eps        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Polyline::IsA(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbePlaneType  _result = _underlying->IsA
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Polyline::IsA_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Polyline_IsA_AsyncWorker* asyncWorker = new Polyline_IsA_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Polyline::Type(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbePlaneType  _result = _underlying->Type
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Polyline::Type_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Polyline_Type_AsyncWorker* asyncWorker = new Polyline_Type_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Polyline::Family(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbePlaneType  _result = _underlying->Family
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Polyline::Family_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Polyline_Family_AsyncWorker* asyncWorker = new Polyline_Family_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Polyline::Move(const Napi::CallbackInfo& info) {
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

    Napi::Value Polyline::Move_async(const Napi::CallbackInfo& info) {
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

        Polyline_Move_AsyncWorker* asyncWorker = new Polyline_Move_AsyncWorker(
_underlying,            deferred
,
                
                to,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Polyline::Transform(const Napi::CallbackInfo& info) {
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

    Napi::Value Polyline::Transform_async(const Napi::CallbackInfo& info) {
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

        Polyline_Transform_AsyncWorker* asyncWorker = new Polyline_Transform_AsyncWorker(
_underlying,            deferred
,
                
                matr,
                
                iReg,
                
                newSurface        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Polyline::Duplicate(const Napi::CallbackInfo& info) {
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

    Napi::Value Polyline::Duplicate_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                            MbRegDuplicate * dup = NULL;
        if (!(info[0].IsNull() || info[0].IsUndefined())) {
            RegDuplicate *dup_ = RegDuplicate::Unwrap(info[0].ToObject());
                dup =   dup_->_underlying;
        }

        Polyline_Duplicate_AsyncWorker* asyncWorker = new Polyline_Duplicate_AsyncWorker(
_underlying,            deferred
,
                
                dup        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Polyline::AddYourGabaritTo(const Napi::CallbackInfo& info) {
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

    Napi::Value Polyline::AddYourGabaritTo_async(const Napi::CallbackInfo& info) {
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
        

        Polyline_AddYourGabaritTo_AsyncWorker* asyncWorker = new Polyline_AddYourGabaritTo_AsyncWorker(
_underlying,            deferred
,
                
                rect        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Polyline::GetUseCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 refcount_t  _result = _underlying->GetUseCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Polyline::GetUseCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Polyline_GetUseCount_AsyncWorker* asyncWorker = new Polyline_GetUseCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Polyline::AddRef(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->AddRef
(

);



    return env.Undefined();


        }

    Napi::Value Polyline::AddRef_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Polyline_AddRef_AsyncWorker* asyncWorker = new Polyline_AddRef_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }



    Napi::Value Polyline::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }

Polyline::~Polyline() {
    // std::cout << "calling ::DeleteItem on Polyline for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

    Polyline_GetPointsCount_AsyncWorker::Polyline_GetPointsCount_AsyncWorker(
MbPolyline * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Polyline_GetPointsCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         size_t  _result = _underlying->GetPointsCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Polyline_GetPointsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             size_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Polyline_GetPointsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Polyline_GetPoint_AsyncWorker::Polyline_GetPoint_AsyncWorker(
MbPolyline * _underlying,        Napi::Promise::Deferred const &d
,
                         ptrdiff_t  index    )
        :_underlying(_underlying),PromiseWorker(d),
                        index(index)
{};

    void Polyline_GetPoint_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbCartPoint *pnt = new MbCartPoint;


        
        _underlying->GetPoint(
                        index
,                        *pnt
        );


                this->pnt = pnt;

        
        ExitParallelRegion();
    }

    void Polyline_GetPoint_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Polyline_GetPoint_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Polyline_AddPoint_AsyncWorker::Polyline_AddPoint_AsyncWorker(
MbPolyline * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbCartPoint & pnt    )
        :_underlying(_underlying),PromiseWorker(d),
                        pnt(pnt)
{};

    void Polyline_AddPoint_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddPoint(
                        pnt
        );



        
        ExitParallelRegion();
    }

    void Polyline_AddPoint_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Polyline_AddPoint_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Polyline_Inverse_AsyncWorker::Polyline_Inverse_AsyncWorker(
MbPolyline * _underlying,        Napi::Promise::Deferred const &d
,
                         MbRegTransform * iReg    )
        :_underlying(_underlying),PromiseWorker(d),
                        iReg(iReg)
{};

    void Polyline_Inverse_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Inverse(
                        iReg
        );



        
        ExitParallelRegion();
    }

    void Polyline_Inverse_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Polyline_Inverse_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Polyline_Trimmed_AsyncWorker::Polyline_Trimmed_AsyncWorker(
MbPolyline * _underlying,        Napi::Promise::Deferred const &d
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

    void Polyline_Trimmed_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbCurve * _result = _underlying->Trimmed(
                        t1
,                        t2
,                        sense
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Polyline_Trimmed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Polyline_Trimmed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Polyline_IsStraight_AsyncWorker::Polyline_IsStraight_AsyncWorker(
MbPolyline * _underlying,        Napi::Promise::Deferred const &d
,
                         bool  ignoreParams    )
        :_underlying(_underlying),PromiseWorker(d),
                        ignoreParams(ignoreParams)
{};

    void Polyline_IsStraight_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsStraight(
                        ignoreParams
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Polyline_IsStraight_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void Polyline_IsStraight_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Polyline_IsClosed_AsyncWorker::Polyline_IsClosed_AsyncWorker(
MbPolyline * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Polyline_IsClosed_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsClosed(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Polyline_IsClosed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void Polyline_IsClosed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Polyline_IsBounded_AsyncWorker::Polyline_IsBounded_AsyncWorker(
MbPolyline * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Polyline_IsBounded_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsBounded(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Polyline_IsBounded_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void Polyline_IsBounded_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Polyline_GetTMax_AsyncWorker::Polyline_GetTMax_AsyncWorker(
MbPolyline * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Polyline_GetTMax_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetTMax(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Polyline_GetTMax_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Polyline_GetTMax_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Polyline_GetTMin_AsyncWorker::Polyline_GetTMin_AsyncWorker(
MbPolyline * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Polyline_GetTMin_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetTMin(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Polyline_GetTMin_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Polyline_GetTMin_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Polyline_GetPeriod_AsyncWorker::Polyline_GetPeriod_AsyncWorker(
MbPolyline * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Polyline_GetPeriod_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetPeriod(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Polyline_GetPeriod_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Polyline_GetPeriod_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Polyline_GetWeightCentre_AsyncWorker::Polyline_GetWeightCentre_AsyncWorker(
MbPolyline * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Polyline_GetWeightCentre_AsyncWorker::Execute() {
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

    void Polyline_GetWeightCentre_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Polyline_GetWeightCentre_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Polyline_GetLimitPoint_AsyncWorker::Polyline_GetLimitPoint_AsyncWorker(
MbPolyline * _underlying,        Napi::Promise::Deferred const &d
,
                         ptrdiff_t  number    )
        :_underlying(_underlying),PromiseWorker(d),
                        number(number)
{};

    void Polyline_GetLimitPoint_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbCartPoint *point = new MbCartPoint;


        
        _underlying->GetLimitPoint(
                        number
,                        *point
        );


                this->point = point;

        
        ExitParallelRegion();
    }

    void Polyline_GetLimitPoint_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Polyline_GetLimitPoint_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Polyline_PointOn_AsyncWorker::Polyline_PointOn_AsyncWorker(
MbPolyline * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void Polyline_PointOn_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbCartPoint *p = new MbCartPoint;


        
        _underlying->PointOn(
                        t
,                        *p
        );


                this->p = p;

        
        ExitParallelRegion();
    }

    void Polyline_PointOn_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Polyline_PointOn_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Polyline__PointOn_AsyncWorker::Polyline__PointOn_AsyncWorker(
MbPolyline * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void Polyline__PointOn_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbCartPoint *p = new MbCartPoint;


        
        _underlying->_PointOn(
                        t
,                        *p
        );


                this->p = p;

        
        ExitParallelRegion();
    }

    void Polyline__PointOn_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Polyline__PointOn_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Polyline_Explore_AsyncWorker::Polyline_Explore_AsyncWorker(
MbPolyline * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t,
                         bool  ext    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
,
                        ext(ext)
{};

    void Polyline_Explore_AsyncWorker::Execute() {
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

    void Polyline_Explore_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Polyline_Explore_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Polyline_FirstDer_AsyncWorker::Polyline_FirstDer_AsyncWorker(
MbPolyline * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void Polyline_FirstDer_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->FirstDer(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void Polyline_FirstDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Polyline_FirstDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Polyline__FirstDer_AsyncWorker::Polyline__FirstDer_AsyncWorker(
MbPolyline * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void Polyline__FirstDer_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->_FirstDer(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void Polyline__FirstDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Polyline__FirstDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Polyline_SecondDer_AsyncWorker::Polyline_SecondDer_AsyncWorker(
MbPolyline * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void Polyline_SecondDer_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->SecondDer(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void Polyline_SecondDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Polyline_SecondDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Polyline__SecondDer_AsyncWorker::Polyline__SecondDer_AsyncWorker(
MbPolyline * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void Polyline__SecondDer_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->_SecondDer(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void Polyline__SecondDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Polyline__SecondDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Polyline_Tangent_AsyncWorker::Polyline_Tangent_AsyncWorker(
MbPolyline * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void Polyline_Tangent_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->Tangent(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void Polyline_Tangent_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Polyline_Tangent_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Polyline__Tangent_AsyncWorker::Polyline__Tangent_AsyncWorker(
MbPolyline * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void Polyline__Tangent_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->_Tangent(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void Polyline__Tangent_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Polyline__Tangent_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Polyline_Normal_AsyncWorker::Polyline_Normal_AsyncWorker(
MbPolyline * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void Polyline_Normal_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->Normal(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void Polyline_Normal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Polyline_Normal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Polyline__Normal_AsyncWorker::Polyline__Normal_AsyncWorker(
MbPolyline * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void Polyline__Normal_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->_Normal(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void Polyline__Normal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Polyline__Normal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Polyline_PointRelative_AsyncWorker::Polyline_PointRelative_AsyncWorker(
MbPolyline * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbCartPoint & pnt,
                         double  eps    )
        :_underlying(_underlying),PromiseWorker(d),
                        pnt(pnt)
,
                        eps(eps)
{};

    void Polyline_PointRelative_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeItemLocation  _result = _underlying->PointRelative(
                        pnt
,                        eps
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Polyline_PointRelative_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeItemLocation  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Polyline_PointRelative_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Polyline_PointLocation_AsyncWorker::Polyline_PointLocation_AsyncWorker(
MbPolyline * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbCartPoint & pnt,
                         double  eps    )
        :_underlying(_underlying),PromiseWorker(d),
                        pnt(pnt)
,
                        eps(eps)
{};

    void Polyline_PointLocation_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeLocation  _result = _underlying->PointLocation(
                        pnt
,                        eps
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Polyline_PointLocation_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeLocation  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Polyline_PointLocation_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Polyline_IsA_AsyncWorker::Polyline_IsA_AsyncWorker(
MbPolyline * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Polyline_IsA_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbePlaneType  _result = _underlying->IsA(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Polyline_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbePlaneType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Polyline_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Polyline_Type_AsyncWorker::Polyline_Type_AsyncWorker(
MbPolyline * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Polyline_Type_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbePlaneType  _result = _underlying->Type(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Polyline_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbePlaneType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Polyline_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Polyline_Family_AsyncWorker::Polyline_Family_AsyncWorker(
MbPolyline * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Polyline_Family_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbePlaneType  _result = _underlying->Family(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Polyline_Family_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbePlaneType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Polyline_Family_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Polyline_Move_AsyncWorker::Polyline_Move_AsyncWorker(
MbPolyline * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbVector & to,
                         MbRegTransform * iReg    )
        :_underlying(_underlying),PromiseWorker(d),
                        to(to)
,
                        iReg(iReg)
{};

    void Polyline_Move_AsyncWorker::Execute() {
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

    void Polyline_Move_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Polyline_Move_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Polyline_Transform_AsyncWorker::Polyline_Transform_AsyncWorker(
MbPolyline * _underlying,        Napi::Promise::Deferred const &d
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

    void Polyline_Transform_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Transform(
                        matr
,                        iReg
,                        newSurface
        );



        
        ExitParallelRegion();
    }

    void Polyline_Transform_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Polyline_Transform_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Polyline_Duplicate_AsyncWorker::Polyline_Duplicate_AsyncWorker(
MbPolyline * _underlying,        Napi::Promise::Deferred const &d
,
                         MbRegDuplicate * dup    )
        :_underlying(_underlying),PromiseWorker(d),
                        dup(dup)
{};

    void Polyline_Duplicate_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbPlaneItem & _result = _underlying->Duplicate(
                        dup
        );


                this->_result = (MbPlaneItem *)&(_result);

        
        ExitParallelRegion();
    }

    void Polyline_Duplicate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbPlaneItem * _result = this->_result;
                _to = PlaneItem::NewInstance(env, (MbPlaneItem *)&(_result));

            deferred.Resolve(_to);
    }

    void Polyline_Duplicate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Polyline_AddYourGabaritTo_AsyncWorker::Polyline_AddYourGabaritTo_AsyncWorker(
MbPolyline * _underlying,        Napi::Promise::Deferred const &d
,
                         MbRect & rect    )
        :_underlying(_underlying),PromiseWorker(d),
                        rect(rect)
{};

    void Polyline_AddYourGabaritTo_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddYourGabaritTo(
                        rect
        );



        
        ExitParallelRegion();
    }

    void Polyline_AddYourGabaritTo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Polyline_AddYourGabaritTo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Polyline_GetUseCount_AsyncWorker::Polyline_GetUseCount_AsyncWorker(
MbPolyline * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Polyline_GetUseCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         refcount_t  _result = _underlying->GetUseCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Polyline_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             refcount_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Polyline_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Polyline_AddRef_AsyncWorker::Polyline_AddRef_AsyncWorker(
MbPolyline * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Polyline_AddRef_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddRef(
        );



        
        ExitParallelRegion();
    }

    void Polyline_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Polyline_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

