// This is a generated file, modify: generate/templates/LineSegment.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/LineSegment.h"

#include "tool_mutex.h"

Napi::Object LineSegment::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "LineSegment", {
        InstanceMethod<&LineSegment::GetPoint1>("GetPoint1"),
        InstanceMethod<&LineSegment::GetPoint1_async>("GetPoint1_async"),
        InstanceMethod<&LineSegment::GetPoint2>("GetPoint2"),
        InstanceMethod<&LineSegment::GetPoint2_async>("GetPoint2_async"),
        InstanceMethod<&LineSegment::Inverse>("Inverse"),
        InstanceMethod<&LineSegment::Inverse_async>("Inverse_async"),
        InstanceMethod<&LineSegment::Trimmed>("Trimmed"),
        InstanceMethod<&LineSegment::Trimmed_async>("Trimmed_async"),
        InstanceMethod<&LineSegment::IsStraight>("IsStraight"),
        InstanceMethod<&LineSegment::IsStraight_async>("IsStraight_async"),
        InstanceMethod<&LineSegment::IsClosed>("IsClosed"),
        InstanceMethod<&LineSegment::IsClosed_async>("IsClosed_async"),
        InstanceMethod<&LineSegment::IsBounded>("IsBounded"),
        InstanceMethod<&LineSegment::IsBounded_async>("IsBounded_async"),
        InstanceMethod<&LineSegment::GetTMax>("GetTMax"),
        InstanceMethod<&LineSegment::GetTMax_async>("GetTMax_async"),
        InstanceMethod<&LineSegment::GetTMin>("GetTMin"),
        InstanceMethod<&LineSegment::GetTMin_async>("GetTMin_async"),
        InstanceMethod<&LineSegment::GetPeriod>("GetPeriod"),
        InstanceMethod<&LineSegment::GetPeriod_async>("GetPeriod_async"),
        InstanceMethod<&LineSegment::GetWeightCentre>("GetWeightCentre"),
        InstanceMethod<&LineSegment::GetWeightCentre_async>("GetWeightCentre_async"),
        InstanceMethod<&LineSegment::GetLimitPoint>("GetLimitPoint"),
        InstanceMethod<&LineSegment::GetLimitPoint_async>("GetLimitPoint_async"),
        InstanceMethod<&LineSegment::PointOn>("PointOn"),
        InstanceMethod<&LineSegment::PointOn_async>("PointOn_async"),
        InstanceMethod<&LineSegment::_PointOn>("_PointOn"),
        InstanceMethod<&LineSegment::_PointOn_async>("_PointOn_async"),
        InstanceMethod<&LineSegment::Explore>("Explore"),
        InstanceMethod<&LineSegment::Explore_async>("Explore_async"),
        InstanceMethod<&LineSegment::FirstDer>("FirstDer"),
        InstanceMethod<&LineSegment::FirstDer_async>("FirstDer_async"),
        InstanceMethod<&LineSegment::_FirstDer>("_FirstDer"),
        InstanceMethod<&LineSegment::_FirstDer_async>("_FirstDer_async"),
        InstanceMethod<&LineSegment::SecondDer>("SecondDer"),
        InstanceMethod<&LineSegment::SecondDer_async>("SecondDer_async"),
        InstanceMethod<&LineSegment::_SecondDer>("_SecondDer"),
        InstanceMethod<&LineSegment::_SecondDer_async>("_SecondDer_async"),
        InstanceMethod<&LineSegment::Tangent>("Tangent"),
        InstanceMethod<&LineSegment::Tangent_async>("Tangent_async"),
        InstanceMethod<&LineSegment::_Tangent>("_Tangent"),
        InstanceMethod<&LineSegment::_Tangent_async>("_Tangent_async"),
        InstanceMethod<&LineSegment::Normal>("Normal"),
        InstanceMethod<&LineSegment::Normal_async>("Normal_async"),
        InstanceMethod<&LineSegment::_Normal>("_Normal"),
        InstanceMethod<&LineSegment::_Normal_async>("_Normal_async"),
        InstanceMethod<&LineSegment::PointRelative>("PointRelative"),
        InstanceMethod<&LineSegment::PointRelative_async>("PointRelative_async"),
        InstanceMethod<&LineSegment::PointLocation>("PointLocation"),
        InstanceMethod<&LineSegment::PointLocation_async>("PointLocation_async"),
        InstanceMethod<&LineSegment::IsA>("IsA"),
        InstanceMethod<&LineSegment::IsA_async>("IsA_async"),
        InstanceMethod<&LineSegment::Type>("Type"),
        InstanceMethod<&LineSegment::Type_async>("Type_async"),
        InstanceMethod<&LineSegment::Family>("Family"),
        InstanceMethod<&LineSegment::Family_async>("Family_async"),
        InstanceMethod<&LineSegment::Move>("Move"),
        InstanceMethod<&LineSegment::Move_async>("Move_async"),
        InstanceMethod<&LineSegment::Transform>("Transform"),
        InstanceMethod<&LineSegment::Transform_async>("Transform_async"),
        InstanceMethod<&LineSegment::Duplicate>("Duplicate"),
        InstanceMethod<&LineSegment::Duplicate_async>("Duplicate_async"),
        InstanceMethod<&LineSegment::AddYourGabaritTo>("AddYourGabaritTo"),
        InstanceMethod<&LineSegment::AddYourGabaritTo_async>("AddYourGabaritTo_async"),
        InstanceMethod<&LineSegment::GetUseCount>("GetUseCount"),
        InstanceMethod<&LineSegment::GetUseCount_async>("GetUseCount_async"),
        InstanceMethod<&LineSegment::AddRef>("AddRef"),
        InstanceMethod<&LineSegment::AddRef_async>("AddRef_async"),
            InstanceMethod<&LineSegment::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("LineSegment", func);

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

LineSegment::LineSegment(const Napi::CallbackInfo& info) : Napi::ObjectWrap<LineSegment>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        if (info.Length() == 2&&                ((
                info[0].IsObject() &&
                    info[0].ToObject().InstanceOf(CartPoint::GetConstructor(env))
        )   
)
 &&         ((
                info[1].IsObject() &&
                    info[1].ToObject().InstanceOf(CartPoint::GetConstructor(env))
        )   
)


        ) {
                    if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'p1'").ThrowAsJavaScriptException();
                return;
        }
        const class CartPoint *p1_ = CartPoint::Unwrap(info[0].ToObject());
        
        const MbCartPoint & p1 =*p1_->_underlying;
        

                    if (info[1].IsNull() || info[1].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'p2'").ThrowAsJavaScriptException();
                return;
        }
        const class CartPoint *p2_ = CartPoint::Unwrap(info[1].ToObject());
        
        const MbCartPoint & p2 =*p2_->_underlying;
        


                MbLineSegment *underlying = new MbLineSegment(p1,p2);
                if (underlying == NULL) {
                    Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
                    return;
                }
underlying->AddRef();            this->_underlying = underlying;
        } else {
            Napi::Error::New(env, "No matching constructor").ThrowAsJavaScriptException();
            return;
        }
}

Napi::Object LineSegment::NewInstance(Napi::Env env, MbLineSegment *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("LineSegment");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    LineSegment *unwrapped = LineSegment::Unwrap(inst);
underlying->AddRef();    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function LineSegment::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("LineSegment");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

        Napi::Value LineSegment::GetPoint1(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



const MbCartPoint & _result = _underlying->GetPoint1
(

);



    Napi::Value _to;

            _to = CartPoint::NewInstance(env, new MbCartPoint(_result));

            return _to;


        }

    Napi::Value LineSegment::GetPoint1_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        LineSegment_GetPoint1_AsyncWorker* asyncWorker = new LineSegment_GetPoint1_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value LineSegment::GetPoint2(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



const MbCartPoint & _result = _underlying->GetPoint2
(

);



    Napi::Value _to;

            _to = CartPoint::NewInstance(env, new MbCartPoint(_result));

            return _to;


        }

    Napi::Value LineSegment::GetPoint2_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        LineSegment_GetPoint2_AsyncWorker* asyncWorker = new LineSegment_GetPoint2_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value LineSegment::Inverse(const Napi::CallbackInfo& info) {
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

    Napi::Value LineSegment::Inverse_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                            MbRegTransform * iReg = NULL;
        if (!(info[0].IsNull() || info[0].IsUndefined())) {
            RegTransform *iReg_ = RegTransform::Unwrap(info[0].ToObject());
                iReg =   iReg_->_underlying;
        }

        LineSegment_Inverse_AsyncWorker* asyncWorker = new LineSegment_Inverse_AsyncWorker(
_underlying,            deferred
,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value LineSegment::Trimmed(const Napi::CallbackInfo& info) {
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

    Napi::Value LineSegment::Trimmed_async(const Napi::CallbackInfo& info) {
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

        LineSegment_Trimmed_AsyncWorker* asyncWorker = new LineSegment_Trimmed_AsyncWorker(
_underlying,            deferred
,
                
                t1,
                
                t2,
                
                sense        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value LineSegment::IsStraight(const Napi::CallbackInfo& info) {
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

    Napi::Value LineSegment::IsStraight_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                     bool ignoreParams = info[0].ToBoolean();

        LineSegment_IsStraight_AsyncWorker* asyncWorker = new LineSegment_IsStraight_AsyncWorker(
_underlying,            deferred
,
                
                ignoreParams        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value LineSegment::IsClosed(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->IsClosed
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value LineSegment::IsClosed_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        LineSegment_IsClosed_AsyncWorker* asyncWorker = new LineSegment_IsClosed_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value LineSegment::IsBounded(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->IsBounded
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value LineSegment::IsBounded_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        LineSegment_IsBounded_AsyncWorker* asyncWorker = new LineSegment_IsBounded_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value LineSegment::GetTMax(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 double  _result = _underlying->GetTMax
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value LineSegment::GetTMax_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        LineSegment_GetTMax_AsyncWorker* asyncWorker = new LineSegment_GetTMax_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value LineSegment::GetTMin(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 double  _result = _underlying->GetTMin
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value LineSegment::GetTMin_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        LineSegment_GetTMin_AsyncWorker* asyncWorker = new LineSegment_GetTMin_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value LineSegment::GetPeriod(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 double  _result = _underlying->GetPeriod
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value LineSegment::GetPeriod_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        LineSegment_GetPeriod_AsyncWorker* asyncWorker = new LineSegment_GetPeriod_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value LineSegment::GetWeightCentre(const Napi::CallbackInfo& info) {
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

    Napi::Value LineSegment::GetWeightCentre_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        LineSegment_GetWeightCentre_AsyncWorker* asyncWorker = new LineSegment_GetWeightCentre_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value LineSegment::GetLimitPoint(const Napi::CallbackInfo& info) {
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

    Napi::Value LineSegment::GetLimitPoint_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "ptrdiff_t number is required."));
                    return deferred.Promise();
            }


                     int number = info[0].ToNumber().Int64Value();

        LineSegment_GetLimitPoint_AsyncWorker* asyncWorker = new LineSegment_GetLimitPoint_AsyncWorker(
_underlying,            deferred
,
                
                number        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value LineSegment::PointOn(const Napi::CallbackInfo& info) {
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

    Napi::Value LineSegment::PointOn_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        LineSegment_PointOn_AsyncWorker* asyncWorker = new LineSegment_PointOn_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value LineSegment::_PointOn(const Napi::CallbackInfo& info) {
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

    Napi::Value LineSegment::_PointOn_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        LineSegment__PointOn_AsyncWorker* asyncWorker = new LineSegment__PointOn_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value LineSegment::Explore(const Napi::CallbackInfo& info) {
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

    Napi::Value LineSegment::Explore_async(const Napi::CallbackInfo& info) {
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

        LineSegment_Explore_AsyncWorker* asyncWorker = new LineSegment_Explore_AsyncWorker(
_underlying,            deferred
,
                
                t,
                
                ext        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value LineSegment::FirstDer(const Napi::CallbackInfo& info) {
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

    Napi::Value LineSegment::FirstDer_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        LineSegment_FirstDer_AsyncWorker* asyncWorker = new LineSegment_FirstDer_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value LineSegment::_FirstDer(const Napi::CallbackInfo& info) {
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

    Napi::Value LineSegment::_FirstDer_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        LineSegment__FirstDer_AsyncWorker* asyncWorker = new LineSegment__FirstDer_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value LineSegment::SecondDer(const Napi::CallbackInfo& info) {
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

    Napi::Value LineSegment::SecondDer_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        LineSegment_SecondDer_AsyncWorker* asyncWorker = new LineSegment_SecondDer_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value LineSegment::_SecondDer(const Napi::CallbackInfo& info) {
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

    Napi::Value LineSegment::_SecondDer_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        LineSegment__SecondDer_AsyncWorker* asyncWorker = new LineSegment__SecondDer_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value LineSegment::Tangent(const Napi::CallbackInfo& info) {
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

    Napi::Value LineSegment::Tangent_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        LineSegment_Tangent_AsyncWorker* asyncWorker = new LineSegment_Tangent_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value LineSegment::_Tangent(const Napi::CallbackInfo& info) {
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

    Napi::Value LineSegment::_Tangent_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        LineSegment__Tangent_AsyncWorker* asyncWorker = new LineSegment__Tangent_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value LineSegment::Normal(const Napi::CallbackInfo& info) {
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

    Napi::Value LineSegment::Normal_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        LineSegment_Normal_AsyncWorker* asyncWorker = new LineSegment_Normal_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value LineSegment::_Normal(const Napi::CallbackInfo& info) {
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

    Napi::Value LineSegment::_Normal_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        LineSegment__Normal_AsyncWorker* asyncWorker = new LineSegment__Normal_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value LineSegment::PointRelative(const Napi::CallbackInfo& info) {
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

    Napi::Value LineSegment::PointRelative_async(const Napi::CallbackInfo& info) {
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

        LineSegment_PointRelative_AsyncWorker* asyncWorker = new LineSegment_PointRelative_AsyncWorker(
_underlying,            deferred
,
                
                pnt,
                
                eps        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value LineSegment::PointLocation(const Napi::CallbackInfo& info) {
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

    Napi::Value LineSegment::PointLocation_async(const Napi::CallbackInfo& info) {
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

        LineSegment_PointLocation_AsyncWorker* asyncWorker = new LineSegment_PointLocation_AsyncWorker(
_underlying,            deferred
,
                
                pnt,
                
                eps        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value LineSegment::IsA(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbePlaneType  _result = _underlying->IsA
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value LineSegment::IsA_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        LineSegment_IsA_AsyncWorker* asyncWorker = new LineSegment_IsA_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value LineSegment::Type(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbePlaneType  _result = _underlying->Type
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value LineSegment::Type_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        LineSegment_Type_AsyncWorker* asyncWorker = new LineSegment_Type_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value LineSegment::Family(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbePlaneType  _result = _underlying->Family
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value LineSegment::Family_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        LineSegment_Family_AsyncWorker* asyncWorker = new LineSegment_Family_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value LineSegment::Move(const Napi::CallbackInfo& info) {
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

    Napi::Value LineSegment::Move_async(const Napi::CallbackInfo& info) {
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

        LineSegment_Move_AsyncWorker* asyncWorker = new LineSegment_Move_AsyncWorker(
_underlying,            deferred
,
                
                to,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value LineSegment::Transform(const Napi::CallbackInfo& info) {
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

    Napi::Value LineSegment::Transform_async(const Napi::CallbackInfo& info) {
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

        LineSegment_Transform_AsyncWorker* asyncWorker = new LineSegment_Transform_AsyncWorker(
_underlying,            deferred
,
                
                matr,
                
                iReg,
                
                newSurface        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value LineSegment::Duplicate(const Napi::CallbackInfo& info) {
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

    Napi::Value LineSegment::Duplicate_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                            MbRegDuplicate * dup = NULL;
        if (!(info[0].IsNull() || info[0].IsUndefined())) {
            RegDuplicate *dup_ = RegDuplicate::Unwrap(info[0].ToObject());
                dup =   dup_->_underlying;
        }

        LineSegment_Duplicate_AsyncWorker* asyncWorker = new LineSegment_Duplicate_AsyncWorker(
_underlying,            deferred
,
                
                dup        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value LineSegment::AddYourGabaritTo(const Napi::CallbackInfo& info) {
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

    Napi::Value LineSegment::AddYourGabaritTo_async(const Napi::CallbackInfo& info) {
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
        

        LineSegment_AddYourGabaritTo_AsyncWorker* asyncWorker = new LineSegment_AddYourGabaritTo_AsyncWorker(
_underlying,            deferred
,
                
                rect        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value LineSegment::GetUseCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 refcount_t  _result = _underlying->GetUseCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value LineSegment::GetUseCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        LineSegment_GetUseCount_AsyncWorker* asyncWorker = new LineSegment_GetUseCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value LineSegment::AddRef(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->AddRef
(

);



    return env.Undefined();


        }

    Napi::Value LineSegment::AddRef_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        LineSegment_AddRef_AsyncWorker* asyncWorker = new LineSegment_AddRef_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }



    Napi::Value LineSegment::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }

LineSegment::~LineSegment() {
    // std::cout << "calling ::DeleteItem on LineSegment for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

    LineSegment_GetPoint1_AsyncWorker::LineSegment_GetPoint1_AsyncWorker(
MbLineSegment * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void LineSegment_GetPoint1_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        const MbCartPoint & _result = _underlying->GetPoint1(
        );


                        this->_result = new (MbCartPoint)(_result);

        
        ExitParallelRegion();
    }

    void LineSegment_GetPoint1_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            const MbCartPoint * _result = this->_result;
                _to = CartPoint::NewInstance(env, (MbCartPoint *)&(_result));

            deferred.Resolve(_to);
    }

    void LineSegment_GetPoint1_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    LineSegment_GetPoint2_AsyncWorker::LineSegment_GetPoint2_AsyncWorker(
MbLineSegment * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void LineSegment_GetPoint2_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        const MbCartPoint & _result = _underlying->GetPoint2(
        );


                        this->_result = new (MbCartPoint)(_result);

        
        ExitParallelRegion();
    }

    void LineSegment_GetPoint2_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            const MbCartPoint * _result = this->_result;
                _to = CartPoint::NewInstance(env, (MbCartPoint *)&(_result));

            deferred.Resolve(_to);
    }

    void LineSegment_GetPoint2_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    LineSegment_Inverse_AsyncWorker::LineSegment_Inverse_AsyncWorker(
MbLineSegment * _underlying,        Napi::Promise::Deferred const &d
,
                         MbRegTransform * iReg    )
        :_underlying(_underlying),PromiseWorker(d),
                        iReg(iReg)
{};

    void LineSegment_Inverse_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Inverse(
                        iReg
        );



        
        ExitParallelRegion();
    }

    void LineSegment_Inverse_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void LineSegment_Inverse_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    LineSegment_Trimmed_AsyncWorker::LineSegment_Trimmed_AsyncWorker(
MbLineSegment * _underlying,        Napi::Promise::Deferred const &d
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

    void LineSegment_Trimmed_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbCurve * _result = _underlying->Trimmed(
                        t1
,                        t2
,                        sense
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void LineSegment_Trimmed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void LineSegment_Trimmed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    LineSegment_IsStraight_AsyncWorker::LineSegment_IsStraight_AsyncWorker(
MbLineSegment * _underlying,        Napi::Promise::Deferred const &d
,
                         bool  ignoreParams    )
        :_underlying(_underlying),PromiseWorker(d),
                        ignoreParams(ignoreParams)
{};

    void LineSegment_IsStraight_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsStraight(
                        ignoreParams
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void LineSegment_IsStraight_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void LineSegment_IsStraight_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    LineSegment_IsClosed_AsyncWorker::LineSegment_IsClosed_AsyncWorker(
MbLineSegment * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void LineSegment_IsClosed_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsClosed(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void LineSegment_IsClosed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void LineSegment_IsClosed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    LineSegment_IsBounded_AsyncWorker::LineSegment_IsBounded_AsyncWorker(
MbLineSegment * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void LineSegment_IsBounded_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsBounded(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void LineSegment_IsBounded_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void LineSegment_IsBounded_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    LineSegment_GetTMax_AsyncWorker::LineSegment_GetTMax_AsyncWorker(
MbLineSegment * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void LineSegment_GetTMax_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetTMax(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void LineSegment_GetTMax_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void LineSegment_GetTMax_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    LineSegment_GetTMin_AsyncWorker::LineSegment_GetTMin_AsyncWorker(
MbLineSegment * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void LineSegment_GetTMin_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetTMin(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void LineSegment_GetTMin_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void LineSegment_GetTMin_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    LineSegment_GetPeriod_AsyncWorker::LineSegment_GetPeriod_AsyncWorker(
MbLineSegment * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void LineSegment_GetPeriod_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetPeriod(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void LineSegment_GetPeriod_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void LineSegment_GetPeriod_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    LineSegment_GetWeightCentre_AsyncWorker::LineSegment_GetWeightCentre_AsyncWorker(
MbLineSegment * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void LineSegment_GetWeightCentre_AsyncWorker::Execute() {
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

    void LineSegment_GetWeightCentre_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void LineSegment_GetWeightCentre_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    LineSegment_GetLimitPoint_AsyncWorker::LineSegment_GetLimitPoint_AsyncWorker(
MbLineSegment * _underlying,        Napi::Promise::Deferred const &d
,
                         ptrdiff_t  number    )
        :_underlying(_underlying),PromiseWorker(d),
                        number(number)
{};

    void LineSegment_GetLimitPoint_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbCartPoint *point = new MbCartPoint;


        
        _underlying->GetLimitPoint(
                        number
,                        *point
        );


                this->point = point;

        
        ExitParallelRegion();
    }

    void LineSegment_GetLimitPoint_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void LineSegment_GetLimitPoint_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    LineSegment_PointOn_AsyncWorker::LineSegment_PointOn_AsyncWorker(
MbLineSegment * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void LineSegment_PointOn_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbCartPoint *p = new MbCartPoint;


        
        _underlying->PointOn(
                        t
,                        *p
        );


                this->p = p;

        
        ExitParallelRegion();
    }

    void LineSegment_PointOn_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void LineSegment_PointOn_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    LineSegment__PointOn_AsyncWorker::LineSegment__PointOn_AsyncWorker(
MbLineSegment * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void LineSegment__PointOn_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbCartPoint *p = new MbCartPoint;


        
        _underlying->_PointOn(
                        t
,                        *p
        );


                this->p = p;

        
        ExitParallelRegion();
    }

    void LineSegment__PointOn_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void LineSegment__PointOn_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    LineSegment_Explore_AsyncWorker::LineSegment_Explore_AsyncWorker(
MbLineSegment * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t,
                         bool  ext    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
,
                        ext(ext)
{};

    void LineSegment_Explore_AsyncWorker::Execute() {
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

    void LineSegment_Explore_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void LineSegment_Explore_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    LineSegment_FirstDer_AsyncWorker::LineSegment_FirstDer_AsyncWorker(
MbLineSegment * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void LineSegment_FirstDer_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->FirstDer(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void LineSegment_FirstDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void LineSegment_FirstDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    LineSegment__FirstDer_AsyncWorker::LineSegment__FirstDer_AsyncWorker(
MbLineSegment * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void LineSegment__FirstDer_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->_FirstDer(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void LineSegment__FirstDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void LineSegment__FirstDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    LineSegment_SecondDer_AsyncWorker::LineSegment_SecondDer_AsyncWorker(
MbLineSegment * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void LineSegment_SecondDer_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->SecondDer(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void LineSegment_SecondDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void LineSegment_SecondDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    LineSegment__SecondDer_AsyncWorker::LineSegment__SecondDer_AsyncWorker(
MbLineSegment * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void LineSegment__SecondDer_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->_SecondDer(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void LineSegment__SecondDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void LineSegment__SecondDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    LineSegment_Tangent_AsyncWorker::LineSegment_Tangent_AsyncWorker(
MbLineSegment * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void LineSegment_Tangent_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->Tangent(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void LineSegment_Tangent_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void LineSegment_Tangent_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    LineSegment__Tangent_AsyncWorker::LineSegment__Tangent_AsyncWorker(
MbLineSegment * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void LineSegment__Tangent_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->_Tangent(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void LineSegment__Tangent_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void LineSegment__Tangent_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    LineSegment_Normal_AsyncWorker::LineSegment_Normal_AsyncWorker(
MbLineSegment * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void LineSegment_Normal_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->Normal(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void LineSegment_Normal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void LineSegment_Normal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    LineSegment__Normal_AsyncWorker::LineSegment__Normal_AsyncWorker(
MbLineSegment * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void LineSegment__Normal_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->_Normal(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void LineSegment__Normal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void LineSegment__Normal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    LineSegment_PointRelative_AsyncWorker::LineSegment_PointRelative_AsyncWorker(
MbLineSegment * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbCartPoint & pnt,
                         double  eps    )
        :_underlying(_underlying),PromiseWorker(d),
                        pnt(pnt)
,
                        eps(eps)
{};

    void LineSegment_PointRelative_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeItemLocation  _result = _underlying->PointRelative(
                        pnt
,                        eps
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void LineSegment_PointRelative_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeItemLocation  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void LineSegment_PointRelative_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    LineSegment_PointLocation_AsyncWorker::LineSegment_PointLocation_AsyncWorker(
MbLineSegment * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbCartPoint & pnt,
                         double  eps    )
        :_underlying(_underlying),PromiseWorker(d),
                        pnt(pnt)
,
                        eps(eps)
{};

    void LineSegment_PointLocation_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeLocation  _result = _underlying->PointLocation(
                        pnt
,                        eps
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void LineSegment_PointLocation_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeLocation  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void LineSegment_PointLocation_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    LineSegment_IsA_AsyncWorker::LineSegment_IsA_AsyncWorker(
MbLineSegment * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void LineSegment_IsA_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbePlaneType  _result = _underlying->IsA(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void LineSegment_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbePlaneType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void LineSegment_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    LineSegment_Type_AsyncWorker::LineSegment_Type_AsyncWorker(
MbLineSegment * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void LineSegment_Type_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbePlaneType  _result = _underlying->Type(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void LineSegment_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbePlaneType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void LineSegment_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    LineSegment_Family_AsyncWorker::LineSegment_Family_AsyncWorker(
MbLineSegment * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void LineSegment_Family_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbePlaneType  _result = _underlying->Family(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void LineSegment_Family_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbePlaneType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void LineSegment_Family_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    LineSegment_Move_AsyncWorker::LineSegment_Move_AsyncWorker(
MbLineSegment * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbVector & to,
                         MbRegTransform * iReg    )
        :_underlying(_underlying),PromiseWorker(d),
                        to(to)
,
                        iReg(iReg)
{};

    void LineSegment_Move_AsyncWorker::Execute() {
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

    void LineSegment_Move_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void LineSegment_Move_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    LineSegment_Transform_AsyncWorker::LineSegment_Transform_AsyncWorker(
MbLineSegment * _underlying,        Napi::Promise::Deferred const &d
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

    void LineSegment_Transform_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Transform(
                        matr
,                        iReg
,                        newSurface
        );



        
        ExitParallelRegion();
    }

    void LineSegment_Transform_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void LineSegment_Transform_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    LineSegment_Duplicate_AsyncWorker::LineSegment_Duplicate_AsyncWorker(
MbLineSegment * _underlying,        Napi::Promise::Deferred const &d
,
                         MbRegDuplicate * dup    )
        :_underlying(_underlying),PromiseWorker(d),
                        dup(dup)
{};

    void LineSegment_Duplicate_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbPlaneItem & _result = _underlying->Duplicate(
                        dup
        );


                this->_result = (MbPlaneItem *)&(_result);

        
        ExitParallelRegion();
    }

    void LineSegment_Duplicate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbPlaneItem * _result = this->_result;
                _to = PlaneItem::NewInstance(env, (MbPlaneItem *)&(_result));

            deferred.Resolve(_to);
    }

    void LineSegment_Duplicate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    LineSegment_AddYourGabaritTo_AsyncWorker::LineSegment_AddYourGabaritTo_AsyncWorker(
MbLineSegment * _underlying,        Napi::Promise::Deferred const &d
,
                         MbRect & rect    )
        :_underlying(_underlying),PromiseWorker(d),
                        rect(rect)
{};

    void LineSegment_AddYourGabaritTo_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddYourGabaritTo(
                        rect
        );



        
        ExitParallelRegion();
    }

    void LineSegment_AddYourGabaritTo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void LineSegment_AddYourGabaritTo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    LineSegment_GetUseCount_AsyncWorker::LineSegment_GetUseCount_AsyncWorker(
MbLineSegment * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void LineSegment_GetUseCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         refcount_t  _result = _underlying->GetUseCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void LineSegment_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             refcount_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void LineSegment_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    LineSegment_AddRef_AsyncWorker::LineSegment_AddRef_AsyncWorker(
MbLineSegment * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void LineSegment_AddRef_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddRef(
        );



        
        ExitParallelRegion();
    }

    void LineSegment_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void LineSegment_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

