// This is a generated file, modify: generate/templates/Contour.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/Contour.h"

#include "tool_mutex.h"

Napi::Object Contour::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "Contour", {
        InstanceMethod<&Contour::InitClosed>("InitClosed"),
        InstanceMethod<&Contour::InitClosed_async>("InitClosed_async"),
        InstanceMethod<&Contour::CheckClosed>("CheckClosed"),
        InstanceMethod<&Contour::CheckClosed_async>("CheckClosed_async"),
        InstanceMethod<&Contour::GetArea>("GetArea"),
        InstanceMethod<&Contour::GetArea_async>("GetArea_async"),
        InstanceMethod<&Contour::GetSegmentsCount>("GetSegmentsCount"),
        InstanceMethod<&Contour::GetSegmentsCount_async>("GetSegmentsCount_async"),
        InstanceMethod<&Contour::GetSegment>("GetSegment"),
        InstanceMethod<&Contour::GetSegment_async>("GetSegment_async"),
        InstanceMethod<&Contour::AddCurveWithRuledCheck>("AddCurveWithRuledCheck"),
        InstanceMethod<&Contour::AddCurveWithRuledCheck_async>("AddCurveWithRuledCheck_async"),
        InstanceMethod<&Contour::GetCornerParams>("GetCornerParams"),
        InstanceMethod<&Contour::GetCornerParams_async>("GetCornerParams_async"),
        InstanceMethod<&Contour::Inverse>("Inverse"),
        InstanceMethod<&Contour::Inverse_async>("Inverse_async"),
        InstanceMethod<&Contour::Trimmed>("Trimmed"),
        InstanceMethod<&Contour::Trimmed_async>("Trimmed_async"),
        InstanceMethod<&Contour::IsStraight>("IsStraight"),
        InstanceMethod<&Contour::IsStraight_async>("IsStraight_async"),
        InstanceMethod<&Contour::IsClosed>("IsClosed"),
        InstanceMethod<&Contour::IsClosed_async>("IsClosed_async"),
        InstanceMethod<&Contour::IsBounded>("IsBounded"),
        InstanceMethod<&Contour::IsBounded_async>("IsBounded_async"),
        InstanceMethod<&Contour::GetTMax>("GetTMax"),
        InstanceMethod<&Contour::GetTMax_async>("GetTMax_async"),
        InstanceMethod<&Contour::GetTMin>("GetTMin"),
        InstanceMethod<&Contour::GetTMin_async>("GetTMin_async"),
        InstanceMethod<&Contour::GetPeriod>("GetPeriod"),
        InstanceMethod<&Contour::GetPeriod_async>("GetPeriod_async"),
        InstanceMethod<&Contour::GetWeightCentre>("GetWeightCentre"),
        InstanceMethod<&Contour::GetWeightCentre_async>("GetWeightCentre_async"),
        InstanceMethod<&Contour::GetLimitPoint>("GetLimitPoint"),
        InstanceMethod<&Contour::GetLimitPoint_async>("GetLimitPoint_async"),
        InstanceMethod<&Contour::PointOn>("PointOn"),
        InstanceMethod<&Contour::PointOn_async>("PointOn_async"),
        InstanceMethod<&Contour::_PointOn>("_PointOn"),
        InstanceMethod<&Contour::_PointOn_async>("_PointOn_async"),
        InstanceMethod<&Contour::Explore>("Explore"),
        InstanceMethod<&Contour::Explore_async>("Explore_async"),
        InstanceMethod<&Contour::FirstDer>("FirstDer"),
        InstanceMethod<&Contour::FirstDer_async>("FirstDer_async"),
        InstanceMethod<&Contour::_FirstDer>("_FirstDer"),
        InstanceMethod<&Contour::_FirstDer_async>("_FirstDer_async"),
        InstanceMethod<&Contour::SecondDer>("SecondDer"),
        InstanceMethod<&Contour::SecondDer_async>("SecondDer_async"),
        InstanceMethod<&Contour::_SecondDer>("_SecondDer"),
        InstanceMethod<&Contour::_SecondDer_async>("_SecondDer_async"),
        InstanceMethod<&Contour::Tangent>("Tangent"),
        InstanceMethod<&Contour::Tangent_async>("Tangent_async"),
        InstanceMethod<&Contour::_Tangent>("_Tangent"),
        InstanceMethod<&Contour::_Tangent_async>("_Tangent_async"),
        InstanceMethod<&Contour::Normal>("Normal"),
        InstanceMethod<&Contour::Normal_async>("Normal_async"),
        InstanceMethod<&Contour::_Normal>("_Normal"),
        InstanceMethod<&Contour::_Normal_async>("_Normal_async"),
        InstanceMethod<&Contour::PointRelative>("PointRelative"),
        InstanceMethod<&Contour::PointRelative_async>("PointRelative_async"),
        InstanceMethod<&Contour::PointLocation>("PointLocation"),
        InstanceMethod<&Contour::PointLocation_async>("PointLocation_async"),
        InstanceMethod<&Contour::IsA>("IsA"),
        InstanceMethod<&Contour::IsA_async>("IsA_async"),
        InstanceMethod<&Contour::Type>("Type"),
        InstanceMethod<&Contour::Type_async>("Type_async"),
        InstanceMethod<&Contour::Family>("Family"),
        InstanceMethod<&Contour::Family_async>("Family_async"),
        InstanceMethod<&Contour::Move>("Move"),
        InstanceMethod<&Contour::Move_async>("Move_async"),
        InstanceMethod<&Contour::Transform>("Transform"),
        InstanceMethod<&Contour::Transform_async>("Transform_async"),
        InstanceMethod<&Contour::Duplicate>("Duplicate"),
        InstanceMethod<&Contour::Duplicate_async>("Duplicate_async"),
        InstanceMethod<&Contour::AddYourGabaritTo>("AddYourGabaritTo"),
        InstanceMethod<&Contour::AddYourGabaritTo_async>("AddYourGabaritTo_async"),
        InstanceMethod<&Contour::GetUseCount>("GetUseCount"),
        InstanceMethod<&Contour::GetUseCount_async>("GetUseCount_async"),
        InstanceMethod<&Contour::AddRef>("AddRef"),
        InstanceMethod<&Contour::AddRef_async>("AddRef_async"),
            InstanceMethod<&Contour::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Contour", func);

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

Contour::Contour(const Napi::CallbackInfo& info) : Napi::ObjectWrap<Contour>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        if (info.Length() == 2&&                ((
                info[0].IsArray()
        )   
)
 &&         ((
                info[1].IsBoolean()
        )   
)


        ) {
                    RPArray<MbCurve>  curves;
if (!(info[0].IsNull() || info[0].IsUndefined())) {
    const Napi::Array curves_ = Napi::Array(env, info[0]);
        curves =  RPArray<MbCurve>(curves_.Length(), 1);

    for (size_t i = 0; i < curves_.Length(); i++) {
        if (curves_[i].IsNull() || curves_[i].IsUndefined()) {
            std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i << "]. This is probably a mistake, so skipping\n";
            continue;
        }
            if (!curves_[i].IsObject() || !curves_[i].ToObject().InstanceOf(Curve::GetConstructor(env))) {
                    Napi::Error::New(env, "Curve curves is required.").ThrowAsJavaScriptException();
                    return;
            } else {
                curves.Add(Curve::Unwrap(curves_[i].ToObject())->_underlying);
            }
    }
}


                 bool sameCurves = info[1].ToBoolean();


                MbContour *underlying = new MbContour(curves,sameCurves);
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

Napi::Object Contour::NewInstance(Napi::Env env, MbContour *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Contour");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Contour *unwrapped = Contour::Unwrap(inst);
underlying->AddRef();    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Contour::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Contour");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

        Napi::Value Contour::InitClosed(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsBoolean()
)) {
                    Napi::Error::New(env, "boolean c is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

             bool c = info[0].ToBoolean();



_underlying->InitClosed
(
        c

);



    return env.Undefined();


        }

    Napi::Value Contour::InitClosed_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsBoolean()
)) {
                    deferred.Reject(Napi::String::New(env, "boolean c is required."));
                    return deferred.Promise();
            }


                     bool c = info[0].ToBoolean();

        Contour_InitClosed_AsyncWorker* asyncWorker = new Contour_InitClosed_AsyncWorker(
_underlying,            deferred
,
                
                c        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::CheckClosed(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number closedEps is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

             double closedEps = info[0].ToNumber().DoubleValue();



_underlying->CheckClosed
(
        closedEps

);



    return env.Undefined();


        }

    Napi::Value Contour::CheckClosed_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number closedEps is required."));
                    return deferred.Promise();
            }


                     double closedEps = info[0].ToNumber().DoubleValue();

        Contour_CheckClosed_AsyncWorker* asyncWorker = new Contour_CheckClosed_AsyncWorker(
_underlying,            deferred
,
                
                closedEps        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::GetArea(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            

             double sag = info[0].ToNumber().DoubleValue();



 double  _result = _underlying->GetArea
(
        info.Length() == 0 || info[0].IsNull() ? 1 : sag

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Contour::GetArea_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                     double sag = info[0].ToNumber().DoubleValue();

        Contour_GetArea_AsyncWorker* asyncWorker = new Contour_GetArea_AsyncWorker(
_underlying,            deferred
,
                
                sag        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::GetSegmentsCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 size_t  _result = _underlying->GetSegmentsCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Contour::GetSegmentsCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Contour_GetSegmentsCount_AsyncWorker* asyncWorker = new Contour_GetSegmentsCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::GetSegment(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number i is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

             size_t i = info[0].ToNumber().Int64Value();



const MbCurve * _result = _underlying->GetSegment
(
        i

);



    Napi::Value _to;

            if (_result != NULL) {
        _to = Curve::NewInstance(env, (MbCurve *)_result);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value Contour::GetSegment_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number i is required."));
                    return deferred.Promise();
            }


                     size_t i = info[0].ToNumber().Int64Value();

        Contour_GetSegment_AsyncWorker* asyncWorker = new Contour_GetSegment_AsyncWorker(
_underlying,            deferred
,
                
                i        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::AddCurveWithRuledCheck(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Curve::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Curve newCur is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    Napi::Error::New(env, "number absEps is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'newCur'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Curve *newCur_ = Curve::Unwrap(info[0].ToObject());
        
         MbCurve & newCur =*newCur_->_underlying;
        

             double absEps = info[1].ToNumber().DoubleValue();

             bool toEndOnly = info[2].ToBoolean();

             bool checkSame = info[3].ToBoolean();

             int version = info[4].ToNumber().Int64Value();



 bool  _result = _underlying->AddCurveWithRuledCheck
(
        newCur
,        absEps
,        info.Length() == 2 || info[2].IsNull() ? false : toEndOnly
,        info.Length() == 3 || info[3].IsNull() ? true : checkSame
,        info.Length() == 4 || info[4].IsNull() ? Math::DefaultMathVersion() : version

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value Contour::AddCurveWithRuledCheck_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Curve::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Curve newCur is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number absEps is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'newCur'"));
                return deferred.Promise();
        }
        const class Curve *newCur_ = Curve::Unwrap(info[0].ToObject());
        
         MbCurve & newCur =*newCur_->_underlying;
        

                     double absEps = info[1].ToNumber().DoubleValue();

                     bool toEndOnly = info[2].ToBoolean();

                     bool checkSame = info[3].ToBoolean();

                     int version = info[4].ToNumber().Int64Value();

        Contour_AddCurveWithRuledCheck_AsyncWorker* asyncWorker = new Contour_AddCurveWithRuledCheck_AsyncWorker(
_underlying,            deferred
,
                
                newCur,
                
                absEps,
                
                toEndOnly,
                
                checkSame,
                
                version        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::GetCornerParams(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                    SArray<double> *params = new SArray<double>;




_underlying->GetCornerParams
(
        *params

);



    Napi::Value _to;

            Napi::Array arr_params = Napi::Array::New(env);
    for (size_t i = 0; i < params->Count(); i++) {
            arr_params[i] = (*params)[i];
    }
    _to = arr_params;

            return _to;


        }

    Napi::Value Contour::GetCornerParams_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Contour_GetCornerParams_AsyncWorker* asyncWorker = new Contour_GetCornerParams_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::Inverse(const Napi::CallbackInfo& info) {
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

    Napi::Value Contour::Inverse_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                            MbRegTransform * iReg = NULL;
        if (!(info[0].IsNull() || info[0].IsUndefined())) {
            RegTransform *iReg_ = RegTransform::Unwrap(info[0].ToObject());
                iReg =   iReg_->_underlying;
        }

        Contour_Inverse_AsyncWorker* asyncWorker = new Contour_Inverse_AsyncWorker(
_underlying,            deferred
,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::Trimmed(const Napi::CallbackInfo& info) {
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

    Napi::Value Contour::Trimmed_async(const Napi::CallbackInfo& info) {
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

        Contour_Trimmed_AsyncWorker* asyncWorker = new Contour_Trimmed_AsyncWorker(
_underlying,            deferred
,
                
                t1,
                
                t2,
                
                sense        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::IsStraight(const Napi::CallbackInfo& info) {
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

    Napi::Value Contour::IsStraight_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                     bool ignoreParams = info[0].ToBoolean();

        Contour_IsStraight_AsyncWorker* asyncWorker = new Contour_IsStraight_AsyncWorker(
_underlying,            deferred
,
                
                ignoreParams        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::IsClosed(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->IsClosed
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value Contour::IsClosed_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Contour_IsClosed_AsyncWorker* asyncWorker = new Contour_IsClosed_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::IsBounded(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->IsBounded
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value Contour::IsBounded_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Contour_IsBounded_AsyncWorker* asyncWorker = new Contour_IsBounded_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::GetTMax(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 double  _result = _underlying->GetTMax
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Contour::GetTMax_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Contour_GetTMax_AsyncWorker* asyncWorker = new Contour_GetTMax_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::GetTMin(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 double  _result = _underlying->GetTMin
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Contour::GetTMin_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Contour_GetTMin_AsyncWorker* asyncWorker = new Contour_GetTMin_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::GetPeriod(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 double  _result = _underlying->GetPeriod
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Contour::GetPeriod_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Contour_GetPeriod_AsyncWorker* asyncWorker = new Contour_GetPeriod_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::GetWeightCentre(const Napi::CallbackInfo& info) {
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

    Napi::Value Contour::GetWeightCentre_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Contour_GetWeightCentre_AsyncWorker* asyncWorker = new Contour_GetWeightCentre_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::GetLimitPoint(const Napi::CallbackInfo& info) {
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

    Napi::Value Contour::GetLimitPoint_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "ptrdiff_t number is required."));
                    return deferred.Promise();
            }


                     int number = info[0].ToNumber().Int64Value();

        Contour_GetLimitPoint_AsyncWorker* asyncWorker = new Contour_GetLimitPoint_AsyncWorker(
_underlying,            deferred
,
                
                number        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::PointOn(const Napi::CallbackInfo& info) {
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

    Napi::Value Contour::PointOn_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        Contour_PointOn_AsyncWorker* asyncWorker = new Contour_PointOn_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::_PointOn(const Napi::CallbackInfo& info) {
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

    Napi::Value Contour::_PointOn_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        Contour__PointOn_AsyncWorker* asyncWorker = new Contour__PointOn_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::Explore(const Napi::CallbackInfo& info) {
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

    Napi::Value Contour::Explore_async(const Napi::CallbackInfo& info) {
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

        Contour_Explore_AsyncWorker* asyncWorker = new Contour_Explore_AsyncWorker(
_underlying,            deferred
,
                
                t,
                
                ext        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::FirstDer(const Napi::CallbackInfo& info) {
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

    Napi::Value Contour::FirstDer_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        Contour_FirstDer_AsyncWorker* asyncWorker = new Contour_FirstDer_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::_FirstDer(const Napi::CallbackInfo& info) {
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

    Napi::Value Contour::_FirstDer_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        Contour__FirstDer_AsyncWorker* asyncWorker = new Contour__FirstDer_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::SecondDer(const Napi::CallbackInfo& info) {
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

    Napi::Value Contour::SecondDer_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        Contour_SecondDer_AsyncWorker* asyncWorker = new Contour_SecondDer_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::_SecondDer(const Napi::CallbackInfo& info) {
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

    Napi::Value Contour::_SecondDer_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        Contour__SecondDer_AsyncWorker* asyncWorker = new Contour__SecondDer_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::Tangent(const Napi::CallbackInfo& info) {
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

    Napi::Value Contour::Tangent_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        Contour_Tangent_AsyncWorker* asyncWorker = new Contour_Tangent_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::_Tangent(const Napi::CallbackInfo& info) {
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

    Napi::Value Contour::_Tangent_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        Contour__Tangent_AsyncWorker* asyncWorker = new Contour__Tangent_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::Normal(const Napi::CallbackInfo& info) {
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

    Napi::Value Contour::Normal_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        Contour_Normal_AsyncWorker* asyncWorker = new Contour_Normal_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::_Normal(const Napi::CallbackInfo& info) {
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

    Napi::Value Contour::_Normal_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        Contour__Normal_AsyncWorker* asyncWorker = new Contour__Normal_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::PointRelative(const Napi::CallbackInfo& info) {
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

    Napi::Value Contour::PointRelative_async(const Napi::CallbackInfo& info) {
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

        Contour_PointRelative_AsyncWorker* asyncWorker = new Contour_PointRelative_AsyncWorker(
_underlying,            deferred
,
                
                pnt,
                
                eps        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::PointLocation(const Napi::CallbackInfo& info) {
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

    Napi::Value Contour::PointLocation_async(const Napi::CallbackInfo& info) {
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

        Contour_PointLocation_AsyncWorker* asyncWorker = new Contour_PointLocation_AsyncWorker(
_underlying,            deferred
,
                
                pnt,
                
                eps        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::IsA(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbePlaneType  _result = _underlying->IsA
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Contour::IsA_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Contour_IsA_AsyncWorker* asyncWorker = new Contour_IsA_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::Type(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbePlaneType  _result = _underlying->Type
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Contour::Type_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Contour_Type_AsyncWorker* asyncWorker = new Contour_Type_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::Family(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbePlaneType  _result = _underlying->Family
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Contour::Family_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Contour_Family_AsyncWorker* asyncWorker = new Contour_Family_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::Move(const Napi::CallbackInfo& info) {
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

    Napi::Value Contour::Move_async(const Napi::CallbackInfo& info) {
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

        Contour_Move_AsyncWorker* asyncWorker = new Contour_Move_AsyncWorker(
_underlying,            deferred
,
                
                to,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::Transform(const Napi::CallbackInfo& info) {
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

    Napi::Value Contour::Transform_async(const Napi::CallbackInfo& info) {
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

        Contour_Transform_AsyncWorker* asyncWorker = new Contour_Transform_AsyncWorker(
_underlying,            deferred
,
                
                matr,
                
                iReg,
                
                newSurface        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::Duplicate(const Napi::CallbackInfo& info) {
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

    Napi::Value Contour::Duplicate_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                            MbRegDuplicate * dup = NULL;
        if (!(info[0].IsNull() || info[0].IsUndefined())) {
            RegDuplicate *dup_ = RegDuplicate::Unwrap(info[0].ToObject());
                dup =   dup_->_underlying;
        }

        Contour_Duplicate_AsyncWorker* asyncWorker = new Contour_Duplicate_AsyncWorker(
_underlying,            deferred
,
                
                dup        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::AddYourGabaritTo(const Napi::CallbackInfo& info) {
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

    Napi::Value Contour::AddYourGabaritTo_async(const Napi::CallbackInfo& info) {
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
        

        Contour_AddYourGabaritTo_AsyncWorker* asyncWorker = new Contour_AddYourGabaritTo_AsyncWorker(
_underlying,            deferred
,
                
                rect        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::GetUseCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 refcount_t  _result = _underlying->GetUseCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Contour::GetUseCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Contour_GetUseCount_AsyncWorker* asyncWorker = new Contour_GetUseCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Contour::AddRef(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->AddRef
(

);



    return env.Undefined();


        }

    Napi::Value Contour::AddRef_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Contour_AddRef_AsyncWorker* asyncWorker = new Contour_AddRef_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }



    Napi::Value Contour::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }

Contour::~Contour() {
    // std::cout << "calling ::DeleteItem on Contour for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

    Contour_InitClosed_AsyncWorker::Contour_InitClosed_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
,
                         bool  c    )
        :_underlying(_underlying),PromiseWorker(d),
                        c(c)
{};

    void Contour_InitClosed_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->InitClosed(
                        c
        );



        
        ExitParallelRegion();
    }

    void Contour_InitClosed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Contour_InitClosed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour_CheckClosed_AsyncWorker::Contour_CheckClosed_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
,
                         double  closedEps    )
        :_underlying(_underlying),PromiseWorker(d),
                        closedEps(closedEps)
{};

    void Contour_CheckClosed_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->CheckClosed(
                        closedEps
        );



        
        ExitParallelRegion();
    }

    void Contour_CheckClosed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Contour_CheckClosed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour_GetArea_AsyncWorker::Contour_GetArea_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
,
                         double  sag    )
        :_underlying(_underlying),PromiseWorker(d),
                        sag(sag)
{};

    void Contour_GetArea_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetArea(
                        sag
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Contour_GetArea_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Contour_GetArea_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour_GetSegmentsCount_AsyncWorker::Contour_GetSegmentsCount_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Contour_GetSegmentsCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         size_t  _result = _underlying->GetSegmentsCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Contour_GetSegmentsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             size_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Contour_GetSegmentsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour_GetSegment_AsyncWorker::Contour_GetSegment_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
,
                         size_t  i    )
        :_underlying(_underlying),PromiseWorker(d),
                        i(i)
{};

    void Contour_GetSegment_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        const MbCurve * _result = _underlying->GetSegment(
                        i
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Contour_GetSegment_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            const MbCurve * _result = this->_result;
                if (_result != NULL) {
        _to = Curve::NewInstance(env, (MbCurve *)_result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void Contour_GetSegment_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour_AddCurveWithRuledCheck_AsyncWorker::Contour_AddCurveWithRuledCheck_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
,
                         MbCurve & newCur,
                         double  absEps,
                         bool  toEndOnly,
                         bool  checkSame,
                         VERSION  version    )
        :_underlying(_underlying),PromiseWorker(d),
                        newCur(newCur)
,
                        absEps(absEps)
,
                        toEndOnly(toEndOnly)
,
                        checkSame(checkSame)
,
                        version(version)
{};

    void Contour_AddCurveWithRuledCheck_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->AddCurveWithRuledCheck(
                        newCur
,                        absEps
,                        toEndOnly
,                        checkSame
,                        version
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Contour_AddCurveWithRuledCheck_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void Contour_AddCurveWithRuledCheck_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour_GetCornerParams_AsyncWorker::Contour_GetCornerParams_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Contour_GetCornerParams_AsyncWorker::Execute() {
        EnterParallelRegion();

                SArray<double> *params = new SArray<double>;


        
        _underlying->GetCornerParams(
                        *params
        );


                this->params = params;

        
        ExitParallelRegion();
    }

    void Contour_GetCornerParams_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             SArray<double> * params = this->params;
                Napi::Array arr_params = Napi::Array::New(env);
    for (size_t i = 0; i < params->Count(); i++) {
            arr_params[i] = (*params)[i];
    }
    _to = arr_params;

            deferred.Resolve(_to);
    }

    void Contour_GetCornerParams_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour_Inverse_AsyncWorker::Contour_Inverse_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
,
                         MbRegTransform * iReg    )
        :_underlying(_underlying),PromiseWorker(d),
                        iReg(iReg)
{};

    void Contour_Inverse_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Inverse(
                        iReg
        );



        
        ExitParallelRegion();
    }

    void Contour_Inverse_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Contour_Inverse_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour_Trimmed_AsyncWorker::Contour_Trimmed_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
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

    void Contour_Trimmed_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbCurve * _result = _underlying->Trimmed(
                        t1
,                        t2
,                        sense
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Contour_Trimmed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Contour_Trimmed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour_IsStraight_AsyncWorker::Contour_IsStraight_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
,
                         bool  ignoreParams    )
        :_underlying(_underlying),PromiseWorker(d),
                        ignoreParams(ignoreParams)
{};

    void Contour_IsStraight_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsStraight(
                        ignoreParams
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Contour_IsStraight_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void Contour_IsStraight_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour_IsClosed_AsyncWorker::Contour_IsClosed_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Contour_IsClosed_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsClosed(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Contour_IsClosed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void Contour_IsClosed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour_IsBounded_AsyncWorker::Contour_IsBounded_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Contour_IsBounded_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsBounded(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Contour_IsBounded_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void Contour_IsBounded_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour_GetTMax_AsyncWorker::Contour_GetTMax_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Contour_GetTMax_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetTMax(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Contour_GetTMax_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Contour_GetTMax_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour_GetTMin_AsyncWorker::Contour_GetTMin_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Contour_GetTMin_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetTMin(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Contour_GetTMin_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Contour_GetTMin_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour_GetPeriod_AsyncWorker::Contour_GetPeriod_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Contour_GetPeriod_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetPeriod(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Contour_GetPeriod_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Contour_GetPeriod_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour_GetWeightCentre_AsyncWorker::Contour_GetWeightCentre_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Contour_GetWeightCentre_AsyncWorker::Execute() {
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

    void Contour_GetWeightCentre_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Contour_GetWeightCentre_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour_GetLimitPoint_AsyncWorker::Contour_GetLimitPoint_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
,
                         ptrdiff_t  number    )
        :_underlying(_underlying),PromiseWorker(d),
                        number(number)
{};

    void Contour_GetLimitPoint_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbCartPoint *point = new MbCartPoint;


        
        _underlying->GetLimitPoint(
                        number
,                        *point
        );


                this->point = point;

        
        ExitParallelRegion();
    }

    void Contour_GetLimitPoint_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Contour_GetLimitPoint_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour_PointOn_AsyncWorker::Contour_PointOn_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void Contour_PointOn_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbCartPoint *p = new MbCartPoint;


        
        _underlying->PointOn(
                        t
,                        *p
        );


                this->p = p;

        
        ExitParallelRegion();
    }

    void Contour_PointOn_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Contour_PointOn_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour__PointOn_AsyncWorker::Contour__PointOn_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void Contour__PointOn_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbCartPoint *p = new MbCartPoint;


        
        _underlying->_PointOn(
                        t
,                        *p
        );


                this->p = p;

        
        ExitParallelRegion();
    }

    void Contour__PointOn_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Contour__PointOn_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour_Explore_AsyncWorker::Contour_Explore_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t,
                         bool  ext    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
,
                        ext(ext)
{};

    void Contour_Explore_AsyncWorker::Execute() {
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

    void Contour_Explore_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Contour_Explore_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour_FirstDer_AsyncWorker::Contour_FirstDer_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void Contour_FirstDer_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->FirstDer(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void Contour_FirstDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Contour_FirstDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour__FirstDer_AsyncWorker::Contour__FirstDer_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void Contour__FirstDer_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->_FirstDer(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void Contour__FirstDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Contour__FirstDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour_SecondDer_AsyncWorker::Contour_SecondDer_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void Contour_SecondDer_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->SecondDer(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void Contour_SecondDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Contour_SecondDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour__SecondDer_AsyncWorker::Contour__SecondDer_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void Contour__SecondDer_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->_SecondDer(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void Contour__SecondDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Contour__SecondDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour_Tangent_AsyncWorker::Contour_Tangent_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void Contour_Tangent_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->Tangent(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void Contour_Tangent_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Contour_Tangent_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour__Tangent_AsyncWorker::Contour__Tangent_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void Contour__Tangent_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->_Tangent(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void Contour__Tangent_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Contour__Tangent_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour_Normal_AsyncWorker::Contour_Normal_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void Contour_Normal_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->Normal(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void Contour_Normal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Contour_Normal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour__Normal_AsyncWorker::Contour__Normal_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void Contour__Normal_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->_Normal(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void Contour__Normal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Contour__Normal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour_PointRelative_AsyncWorker::Contour_PointRelative_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbCartPoint & pnt,
                         double  eps    )
        :_underlying(_underlying),PromiseWorker(d),
                        pnt(pnt)
,
                        eps(eps)
{};

    void Contour_PointRelative_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeItemLocation  _result = _underlying->PointRelative(
                        pnt
,                        eps
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Contour_PointRelative_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeItemLocation  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Contour_PointRelative_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour_PointLocation_AsyncWorker::Contour_PointLocation_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbCartPoint & pnt,
                         double  eps    )
        :_underlying(_underlying),PromiseWorker(d),
                        pnt(pnt)
,
                        eps(eps)
{};

    void Contour_PointLocation_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeLocation  _result = _underlying->PointLocation(
                        pnt
,                        eps
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Contour_PointLocation_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeLocation  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Contour_PointLocation_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour_IsA_AsyncWorker::Contour_IsA_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Contour_IsA_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbePlaneType  _result = _underlying->IsA(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Contour_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbePlaneType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Contour_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour_Type_AsyncWorker::Contour_Type_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Contour_Type_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbePlaneType  _result = _underlying->Type(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Contour_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbePlaneType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Contour_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour_Family_AsyncWorker::Contour_Family_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Contour_Family_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbePlaneType  _result = _underlying->Family(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Contour_Family_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbePlaneType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Contour_Family_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour_Move_AsyncWorker::Contour_Move_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbVector & to,
                         MbRegTransform * iReg    )
        :_underlying(_underlying),PromiseWorker(d),
                        to(to)
,
                        iReg(iReg)
{};

    void Contour_Move_AsyncWorker::Execute() {
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

    void Contour_Move_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Contour_Move_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour_Transform_AsyncWorker::Contour_Transform_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
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

    void Contour_Transform_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Transform(
                        matr
,                        iReg
,                        newSurface
        );



        
        ExitParallelRegion();
    }

    void Contour_Transform_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Contour_Transform_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour_Duplicate_AsyncWorker::Contour_Duplicate_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
,
                         MbRegDuplicate * dup    )
        :_underlying(_underlying),PromiseWorker(d),
                        dup(dup)
{};

    void Contour_Duplicate_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbPlaneItem & _result = _underlying->Duplicate(
                        dup
        );


                this->_result = (MbPlaneItem *)&(_result);

        
        ExitParallelRegion();
    }

    void Contour_Duplicate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbPlaneItem * _result = this->_result;
                _to = PlaneItem::NewInstance(env, (MbPlaneItem *)&(_result));

            deferred.Resolve(_to);
    }

    void Contour_Duplicate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour_AddYourGabaritTo_AsyncWorker::Contour_AddYourGabaritTo_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
,
                         MbRect & rect    )
        :_underlying(_underlying),PromiseWorker(d),
                        rect(rect)
{};

    void Contour_AddYourGabaritTo_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddYourGabaritTo(
                        rect
        );



        
        ExitParallelRegion();
    }

    void Contour_AddYourGabaritTo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Contour_AddYourGabaritTo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour_GetUseCount_AsyncWorker::Contour_GetUseCount_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Contour_GetUseCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         refcount_t  _result = _underlying->GetUseCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Contour_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             refcount_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Contour_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Contour_AddRef_AsyncWorker::Contour_AddRef_AsyncWorker(
MbContour * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Contour_AddRef_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddRef(
        );



        
        ExitParallelRegion();
    }

    void Contour_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Contour_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

