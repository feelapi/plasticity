// This is a generated file, modify: generate/templates/ContourWithBreaks.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/ContourWithBreaks.h"

#include "tool_mutex.h"

Napi::Object ContourWithBreaks::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "ContourWithBreaks", {
        InstanceMethod<&ContourWithBreaks::InitClosed>("InitClosed"),
        InstanceMethod<&ContourWithBreaks::InitClosed_async>("InitClosed_async"),
        InstanceMethod<&ContourWithBreaks::CheckClosed>("CheckClosed"),
        InstanceMethod<&ContourWithBreaks::CheckClosed_async>("CheckClosed_async"),
        InstanceMethod<&ContourWithBreaks::GetArea>("GetArea"),
        InstanceMethod<&ContourWithBreaks::GetArea_async>("GetArea_async"),
        InstanceMethod<&ContourWithBreaks::GetSegmentsCount>("GetSegmentsCount"),
        InstanceMethod<&ContourWithBreaks::GetSegmentsCount_async>("GetSegmentsCount_async"),
        InstanceMethod<&ContourWithBreaks::GetSegment>("GetSegment"),
        InstanceMethod<&ContourWithBreaks::GetSegment_async>("GetSegment_async"),
        InstanceMethod<&ContourWithBreaks::AddCurveWithRuledCheck>("AddCurveWithRuledCheck"),
        InstanceMethod<&ContourWithBreaks::AddCurveWithRuledCheck_async>("AddCurveWithRuledCheck_async"),
        InstanceMethod<&ContourWithBreaks::GetCornerParams>("GetCornerParams"),
        InstanceMethod<&ContourWithBreaks::GetCornerParams_async>("GetCornerParams_async"),
        InstanceMethod<&ContourWithBreaks::Inverse>("Inverse"),
        InstanceMethod<&ContourWithBreaks::Inverse_async>("Inverse_async"),
        InstanceMethod<&ContourWithBreaks::Trimmed>("Trimmed"),
        InstanceMethod<&ContourWithBreaks::Trimmed_async>("Trimmed_async"),
        InstanceMethod<&ContourWithBreaks::IsStraight>("IsStraight"),
        InstanceMethod<&ContourWithBreaks::IsStraight_async>("IsStraight_async"),
        InstanceMethod<&ContourWithBreaks::IsClosed>("IsClosed"),
        InstanceMethod<&ContourWithBreaks::IsClosed_async>("IsClosed_async"),
        InstanceMethod<&ContourWithBreaks::IsBounded>("IsBounded"),
        InstanceMethod<&ContourWithBreaks::IsBounded_async>("IsBounded_async"),
        InstanceMethod<&ContourWithBreaks::GetTMax>("GetTMax"),
        InstanceMethod<&ContourWithBreaks::GetTMax_async>("GetTMax_async"),
        InstanceMethod<&ContourWithBreaks::GetTMin>("GetTMin"),
        InstanceMethod<&ContourWithBreaks::GetTMin_async>("GetTMin_async"),
        InstanceMethod<&ContourWithBreaks::GetPeriod>("GetPeriod"),
        InstanceMethod<&ContourWithBreaks::GetPeriod_async>("GetPeriod_async"),
        InstanceMethod<&ContourWithBreaks::GetWeightCentre>("GetWeightCentre"),
        InstanceMethod<&ContourWithBreaks::GetWeightCentre_async>("GetWeightCentre_async"),
        InstanceMethod<&ContourWithBreaks::GetLimitPoint>("GetLimitPoint"),
        InstanceMethod<&ContourWithBreaks::GetLimitPoint_async>("GetLimitPoint_async"),
        InstanceMethod<&ContourWithBreaks::PointOn>("PointOn"),
        InstanceMethod<&ContourWithBreaks::PointOn_async>("PointOn_async"),
        InstanceMethod<&ContourWithBreaks::_PointOn>("_PointOn"),
        InstanceMethod<&ContourWithBreaks::_PointOn_async>("_PointOn_async"),
        InstanceMethod<&ContourWithBreaks::Explore>("Explore"),
        InstanceMethod<&ContourWithBreaks::Explore_async>("Explore_async"),
        InstanceMethod<&ContourWithBreaks::FirstDer>("FirstDer"),
        InstanceMethod<&ContourWithBreaks::FirstDer_async>("FirstDer_async"),
        InstanceMethod<&ContourWithBreaks::_FirstDer>("_FirstDer"),
        InstanceMethod<&ContourWithBreaks::_FirstDer_async>("_FirstDer_async"),
        InstanceMethod<&ContourWithBreaks::SecondDer>("SecondDer"),
        InstanceMethod<&ContourWithBreaks::SecondDer_async>("SecondDer_async"),
        InstanceMethod<&ContourWithBreaks::_SecondDer>("_SecondDer"),
        InstanceMethod<&ContourWithBreaks::_SecondDer_async>("_SecondDer_async"),
        InstanceMethod<&ContourWithBreaks::Tangent>("Tangent"),
        InstanceMethod<&ContourWithBreaks::Tangent_async>("Tangent_async"),
        InstanceMethod<&ContourWithBreaks::_Tangent>("_Tangent"),
        InstanceMethod<&ContourWithBreaks::_Tangent_async>("_Tangent_async"),
        InstanceMethod<&ContourWithBreaks::Normal>("Normal"),
        InstanceMethod<&ContourWithBreaks::Normal_async>("Normal_async"),
        InstanceMethod<&ContourWithBreaks::_Normal>("_Normal"),
        InstanceMethod<&ContourWithBreaks::_Normal_async>("_Normal_async"),
        InstanceMethod<&ContourWithBreaks::PointRelative>("PointRelative"),
        InstanceMethod<&ContourWithBreaks::PointRelative_async>("PointRelative_async"),
        InstanceMethod<&ContourWithBreaks::PointLocation>("PointLocation"),
        InstanceMethod<&ContourWithBreaks::PointLocation_async>("PointLocation_async"),
        InstanceMethod<&ContourWithBreaks::IsA>("IsA"),
        InstanceMethod<&ContourWithBreaks::IsA_async>("IsA_async"),
        InstanceMethod<&ContourWithBreaks::Type>("Type"),
        InstanceMethod<&ContourWithBreaks::Type_async>("Type_async"),
        InstanceMethod<&ContourWithBreaks::Family>("Family"),
        InstanceMethod<&ContourWithBreaks::Family_async>("Family_async"),
        InstanceMethod<&ContourWithBreaks::Move>("Move"),
        InstanceMethod<&ContourWithBreaks::Move_async>("Move_async"),
        InstanceMethod<&ContourWithBreaks::Transform>("Transform"),
        InstanceMethod<&ContourWithBreaks::Transform_async>("Transform_async"),
        InstanceMethod<&ContourWithBreaks::Duplicate>("Duplicate"),
        InstanceMethod<&ContourWithBreaks::Duplicate_async>("Duplicate_async"),
        InstanceMethod<&ContourWithBreaks::AddYourGabaritTo>("AddYourGabaritTo"),
        InstanceMethod<&ContourWithBreaks::AddYourGabaritTo_async>("AddYourGabaritTo_async"),
        InstanceMethod<&ContourWithBreaks::GetUseCount>("GetUseCount"),
        InstanceMethod<&ContourWithBreaks::GetUseCount_async>("GetUseCount_async"),
        InstanceMethod<&ContourWithBreaks::AddRef>("AddRef"),
        InstanceMethod<&ContourWithBreaks::AddRef_async>("AddRef_async"),
            InstanceMethod<&ContourWithBreaks::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("ContourWithBreaks", func);

    Napi::Object global = env.Global();
    Napi::Object Object = global.Get("Object").ToObject();
    Napi::Function setPrototypeOf = Napi::Function(env, Object.Get("setPrototypeOf"));
    Napi::Value prototype = func.Get("prototype");

    Napi::Function superFunc = Contour::GetConstructor(env);
    Napi::FunctionReference* superConstructor = new Napi::FunctionReference();
    *superConstructor = Napi::Persistent(superFunc);

    Napi::Value superPrototype = superFunc.Get("prototype");
    setPrototypeOf.Call({prototype, superPrototype});
    setPrototypeOf.Call({func, superFunc});

    return exports;
}

ContourWithBreaks::ContourWithBreaks(const Napi::CallbackInfo& info) : Napi::ObjectWrap<ContourWithBreaks>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        Napi::Error::New(env, "ContourWithBreaks cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object ContourWithBreaks::NewInstance(Napi::Env env, MbContourWithBreaks *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("ContourWithBreaks");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    ContourWithBreaks *unwrapped = ContourWithBreaks::Unwrap(inst);
underlying->AddRef();    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function ContourWithBreaks::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("ContourWithBreaks");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

        Napi::Value ContourWithBreaks::InitClosed(const Napi::CallbackInfo& info) {
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

    Napi::Value ContourWithBreaks::InitClosed_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsBoolean()
)) {
                    deferred.Reject(Napi::String::New(env, "boolean c is required."));
                    return deferred.Promise();
            }


                     bool c = info[0].ToBoolean();

        ContourWithBreaks_InitClosed_AsyncWorker* asyncWorker = new ContourWithBreaks_InitClosed_AsyncWorker(
_underlying,            deferred
,
                
                c        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::CheckClosed(const Napi::CallbackInfo& info) {
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

    Napi::Value ContourWithBreaks::CheckClosed_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number closedEps is required."));
                    return deferred.Promise();
            }


                     double closedEps = info[0].ToNumber().DoubleValue();

        ContourWithBreaks_CheckClosed_AsyncWorker* asyncWorker = new ContourWithBreaks_CheckClosed_AsyncWorker(
_underlying,            deferred
,
                
                closedEps        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::GetArea(const Napi::CallbackInfo& info) {
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

    Napi::Value ContourWithBreaks::GetArea_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                     double sag = info[0].ToNumber().DoubleValue();

        ContourWithBreaks_GetArea_AsyncWorker* asyncWorker = new ContourWithBreaks_GetArea_AsyncWorker(
_underlying,            deferred
,
                
                sag        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::GetSegmentsCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 size_t  _result = _underlying->GetSegmentsCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value ContourWithBreaks::GetSegmentsCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ContourWithBreaks_GetSegmentsCount_AsyncWorker* asyncWorker = new ContourWithBreaks_GetSegmentsCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::GetSegment(const Napi::CallbackInfo& info) {
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

    Napi::Value ContourWithBreaks::GetSegment_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number i is required."));
                    return deferred.Promise();
            }


                     size_t i = info[0].ToNumber().Int64Value();

        ContourWithBreaks_GetSegment_AsyncWorker* asyncWorker = new ContourWithBreaks_GetSegment_AsyncWorker(
_underlying,            deferred
,
                
                i        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::AddCurveWithRuledCheck(const Napi::CallbackInfo& info) {
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

    Napi::Value ContourWithBreaks::AddCurveWithRuledCheck_async(const Napi::CallbackInfo& info) {
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

        ContourWithBreaks_AddCurveWithRuledCheck_AsyncWorker* asyncWorker = new ContourWithBreaks_AddCurveWithRuledCheck_AsyncWorker(
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
        Napi::Value ContourWithBreaks::GetCornerParams(const Napi::CallbackInfo& info) {
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

    Napi::Value ContourWithBreaks::GetCornerParams_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ContourWithBreaks_GetCornerParams_AsyncWorker* asyncWorker = new ContourWithBreaks_GetCornerParams_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::Inverse(const Napi::CallbackInfo& info) {
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

    Napi::Value ContourWithBreaks::Inverse_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                            MbRegTransform * iReg = NULL;
        if (!(info[0].IsNull() || info[0].IsUndefined())) {
            RegTransform *iReg_ = RegTransform::Unwrap(info[0].ToObject());
                iReg =   iReg_->_underlying;
        }

        ContourWithBreaks_Inverse_AsyncWorker* asyncWorker = new ContourWithBreaks_Inverse_AsyncWorker(
_underlying,            deferred
,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::Trimmed(const Napi::CallbackInfo& info) {
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

    Napi::Value ContourWithBreaks::Trimmed_async(const Napi::CallbackInfo& info) {
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

        ContourWithBreaks_Trimmed_AsyncWorker* asyncWorker = new ContourWithBreaks_Trimmed_AsyncWorker(
_underlying,            deferred
,
                
                t1,
                
                t2,
                
                sense        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::IsStraight(const Napi::CallbackInfo& info) {
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

    Napi::Value ContourWithBreaks::IsStraight_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                     bool ignoreParams = info[0].ToBoolean();

        ContourWithBreaks_IsStraight_AsyncWorker* asyncWorker = new ContourWithBreaks_IsStraight_AsyncWorker(
_underlying,            deferred
,
                
                ignoreParams        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::IsClosed(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->IsClosed
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value ContourWithBreaks::IsClosed_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ContourWithBreaks_IsClosed_AsyncWorker* asyncWorker = new ContourWithBreaks_IsClosed_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::IsBounded(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->IsBounded
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value ContourWithBreaks::IsBounded_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ContourWithBreaks_IsBounded_AsyncWorker* asyncWorker = new ContourWithBreaks_IsBounded_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::GetTMax(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 double  _result = _underlying->GetTMax
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value ContourWithBreaks::GetTMax_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ContourWithBreaks_GetTMax_AsyncWorker* asyncWorker = new ContourWithBreaks_GetTMax_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::GetTMin(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 double  _result = _underlying->GetTMin
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value ContourWithBreaks::GetTMin_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ContourWithBreaks_GetTMin_AsyncWorker* asyncWorker = new ContourWithBreaks_GetTMin_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::GetPeriod(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 double  _result = _underlying->GetPeriod
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value ContourWithBreaks::GetPeriod_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ContourWithBreaks_GetPeriod_AsyncWorker* asyncWorker = new ContourWithBreaks_GetPeriod_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::GetWeightCentre(const Napi::CallbackInfo& info) {
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

    Napi::Value ContourWithBreaks::GetWeightCentre_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ContourWithBreaks_GetWeightCentre_AsyncWorker* asyncWorker = new ContourWithBreaks_GetWeightCentre_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::GetLimitPoint(const Napi::CallbackInfo& info) {
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

    Napi::Value ContourWithBreaks::GetLimitPoint_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "ptrdiff_t number is required."));
                    return deferred.Promise();
            }


                     int number = info[0].ToNumber().Int64Value();

        ContourWithBreaks_GetLimitPoint_AsyncWorker* asyncWorker = new ContourWithBreaks_GetLimitPoint_AsyncWorker(
_underlying,            deferred
,
                
                number        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::PointOn(const Napi::CallbackInfo& info) {
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

    Napi::Value ContourWithBreaks::PointOn_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        ContourWithBreaks_PointOn_AsyncWorker* asyncWorker = new ContourWithBreaks_PointOn_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::_PointOn(const Napi::CallbackInfo& info) {
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

    Napi::Value ContourWithBreaks::_PointOn_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        ContourWithBreaks__PointOn_AsyncWorker* asyncWorker = new ContourWithBreaks__PointOn_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::Explore(const Napi::CallbackInfo& info) {
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

    Napi::Value ContourWithBreaks::Explore_async(const Napi::CallbackInfo& info) {
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

        ContourWithBreaks_Explore_AsyncWorker* asyncWorker = new ContourWithBreaks_Explore_AsyncWorker(
_underlying,            deferred
,
                
                t,
                
                ext        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::FirstDer(const Napi::CallbackInfo& info) {
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

    Napi::Value ContourWithBreaks::FirstDer_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        ContourWithBreaks_FirstDer_AsyncWorker* asyncWorker = new ContourWithBreaks_FirstDer_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::_FirstDer(const Napi::CallbackInfo& info) {
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

    Napi::Value ContourWithBreaks::_FirstDer_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        ContourWithBreaks__FirstDer_AsyncWorker* asyncWorker = new ContourWithBreaks__FirstDer_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::SecondDer(const Napi::CallbackInfo& info) {
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

    Napi::Value ContourWithBreaks::SecondDer_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        ContourWithBreaks_SecondDer_AsyncWorker* asyncWorker = new ContourWithBreaks_SecondDer_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::_SecondDer(const Napi::CallbackInfo& info) {
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

    Napi::Value ContourWithBreaks::_SecondDer_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        ContourWithBreaks__SecondDer_AsyncWorker* asyncWorker = new ContourWithBreaks__SecondDer_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::Tangent(const Napi::CallbackInfo& info) {
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

    Napi::Value ContourWithBreaks::Tangent_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        ContourWithBreaks_Tangent_AsyncWorker* asyncWorker = new ContourWithBreaks_Tangent_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::_Tangent(const Napi::CallbackInfo& info) {
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

    Napi::Value ContourWithBreaks::_Tangent_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        ContourWithBreaks__Tangent_AsyncWorker* asyncWorker = new ContourWithBreaks__Tangent_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::Normal(const Napi::CallbackInfo& info) {
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

    Napi::Value ContourWithBreaks::Normal_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        ContourWithBreaks_Normal_AsyncWorker* asyncWorker = new ContourWithBreaks_Normal_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::_Normal(const Napi::CallbackInfo& info) {
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

    Napi::Value ContourWithBreaks::_Normal_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        ContourWithBreaks__Normal_AsyncWorker* asyncWorker = new ContourWithBreaks__Normal_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::PointRelative(const Napi::CallbackInfo& info) {
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

    Napi::Value ContourWithBreaks::PointRelative_async(const Napi::CallbackInfo& info) {
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

        ContourWithBreaks_PointRelative_AsyncWorker* asyncWorker = new ContourWithBreaks_PointRelative_AsyncWorker(
_underlying,            deferred
,
                
                pnt,
                
                eps        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::PointLocation(const Napi::CallbackInfo& info) {
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

    Napi::Value ContourWithBreaks::PointLocation_async(const Napi::CallbackInfo& info) {
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

        ContourWithBreaks_PointLocation_AsyncWorker* asyncWorker = new ContourWithBreaks_PointLocation_AsyncWorker(
_underlying,            deferred
,
                
                pnt,
                
                eps        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::IsA(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbePlaneType  _result = _underlying->IsA
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value ContourWithBreaks::IsA_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ContourWithBreaks_IsA_AsyncWorker* asyncWorker = new ContourWithBreaks_IsA_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::Type(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbePlaneType  _result = _underlying->Type
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value ContourWithBreaks::Type_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ContourWithBreaks_Type_AsyncWorker* asyncWorker = new ContourWithBreaks_Type_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::Family(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbePlaneType  _result = _underlying->Family
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value ContourWithBreaks::Family_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ContourWithBreaks_Family_AsyncWorker* asyncWorker = new ContourWithBreaks_Family_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::Move(const Napi::CallbackInfo& info) {
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

    Napi::Value ContourWithBreaks::Move_async(const Napi::CallbackInfo& info) {
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

        ContourWithBreaks_Move_AsyncWorker* asyncWorker = new ContourWithBreaks_Move_AsyncWorker(
_underlying,            deferred
,
                
                to,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::Transform(const Napi::CallbackInfo& info) {
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

    Napi::Value ContourWithBreaks::Transform_async(const Napi::CallbackInfo& info) {
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

        ContourWithBreaks_Transform_AsyncWorker* asyncWorker = new ContourWithBreaks_Transform_AsyncWorker(
_underlying,            deferred
,
                
                matr,
                
                iReg,
                
                newSurface        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::Duplicate(const Napi::CallbackInfo& info) {
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

    Napi::Value ContourWithBreaks::Duplicate_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                            MbRegDuplicate * dup = NULL;
        if (!(info[0].IsNull() || info[0].IsUndefined())) {
            RegDuplicate *dup_ = RegDuplicate::Unwrap(info[0].ToObject());
                dup =   dup_->_underlying;
        }

        ContourWithBreaks_Duplicate_AsyncWorker* asyncWorker = new ContourWithBreaks_Duplicate_AsyncWorker(
_underlying,            deferred
,
                
                dup        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::AddYourGabaritTo(const Napi::CallbackInfo& info) {
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

    Napi::Value ContourWithBreaks::AddYourGabaritTo_async(const Napi::CallbackInfo& info) {
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
        

        ContourWithBreaks_AddYourGabaritTo_AsyncWorker* asyncWorker = new ContourWithBreaks_AddYourGabaritTo_AsyncWorker(
_underlying,            deferred
,
                
                rect        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::GetUseCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 refcount_t  _result = _underlying->GetUseCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value ContourWithBreaks::GetUseCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ContourWithBreaks_GetUseCount_AsyncWorker* asyncWorker = new ContourWithBreaks_GetUseCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ContourWithBreaks::AddRef(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->AddRef
(

);



    return env.Undefined();


        }

    Napi::Value ContourWithBreaks::AddRef_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ContourWithBreaks_AddRef_AsyncWorker* asyncWorker = new ContourWithBreaks_AddRef_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }



    Napi::Value ContourWithBreaks::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }

ContourWithBreaks::~ContourWithBreaks() {
    // std::cout << "calling ::DeleteItem on ContourWithBreaks for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

    ContourWithBreaks_InitClosed_AsyncWorker::ContourWithBreaks_InitClosed_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
,
                         bool  c    )
        :_underlying(_underlying),PromiseWorker(d),
                        c(c)
{};

    void ContourWithBreaks_InitClosed_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->InitClosed(
                        c
        );



        
        ExitParallelRegion();
    }

    void ContourWithBreaks_InitClosed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void ContourWithBreaks_InitClosed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks_CheckClosed_AsyncWorker::ContourWithBreaks_CheckClosed_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
,
                         double  closedEps    )
        :_underlying(_underlying),PromiseWorker(d),
                        closedEps(closedEps)
{};

    void ContourWithBreaks_CheckClosed_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->CheckClosed(
                        closedEps
        );



        
        ExitParallelRegion();
    }

    void ContourWithBreaks_CheckClosed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void ContourWithBreaks_CheckClosed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks_GetArea_AsyncWorker::ContourWithBreaks_GetArea_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
,
                         double  sag    )
        :_underlying(_underlying),PromiseWorker(d),
                        sag(sag)
{};

    void ContourWithBreaks_GetArea_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetArea(
                        sag
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void ContourWithBreaks_GetArea_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void ContourWithBreaks_GetArea_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks_GetSegmentsCount_AsyncWorker::ContourWithBreaks_GetSegmentsCount_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ContourWithBreaks_GetSegmentsCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         size_t  _result = _underlying->GetSegmentsCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void ContourWithBreaks_GetSegmentsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             size_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void ContourWithBreaks_GetSegmentsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks_GetSegment_AsyncWorker::ContourWithBreaks_GetSegment_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
,
                         size_t  i    )
        :_underlying(_underlying),PromiseWorker(d),
                        i(i)
{};

    void ContourWithBreaks_GetSegment_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        const MbCurve * _result = _underlying->GetSegment(
                        i
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void ContourWithBreaks_GetSegment_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void ContourWithBreaks_GetSegment_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks_AddCurveWithRuledCheck_AsyncWorker::ContourWithBreaks_AddCurveWithRuledCheck_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
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

    void ContourWithBreaks_AddCurveWithRuledCheck_AsyncWorker::Execute() {
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

    void ContourWithBreaks_AddCurveWithRuledCheck_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void ContourWithBreaks_AddCurveWithRuledCheck_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks_GetCornerParams_AsyncWorker::ContourWithBreaks_GetCornerParams_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ContourWithBreaks_GetCornerParams_AsyncWorker::Execute() {
        EnterParallelRegion();

                SArray<double> *params = new SArray<double>;


        
        _underlying->GetCornerParams(
                        *params
        );


                this->params = params;

        
        ExitParallelRegion();
    }

    void ContourWithBreaks_GetCornerParams_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void ContourWithBreaks_GetCornerParams_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks_Inverse_AsyncWorker::ContourWithBreaks_Inverse_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
,
                         MbRegTransform * iReg    )
        :_underlying(_underlying),PromiseWorker(d),
                        iReg(iReg)
{};

    void ContourWithBreaks_Inverse_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Inverse(
                        iReg
        );



        
        ExitParallelRegion();
    }

    void ContourWithBreaks_Inverse_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void ContourWithBreaks_Inverse_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks_Trimmed_AsyncWorker::ContourWithBreaks_Trimmed_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
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

    void ContourWithBreaks_Trimmed_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbCurve * _result = _underlying->Trimmed(
                        t1
,                        t2
,                        sense
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void ContourWithBreaks_Trimmed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void ContourWithBreaks_Trimmed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks_IsStraight_AsyncWorker::ContourWithBreaks_IsStraight_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
,
                         bool  ignoreParams    )
        :_underlying(_underlying),PromiseWorker(d),
                        ignoreParams(ignoreParams)
{};

    void ContourWithBreaks_IsStraight_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsStraight(
                        ignoreParams
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void ContourWithBreaks_IsStraight_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void ContourWithBreaks_IsStraight_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks_IsClosed_AsyncWorker::ContourWithBreaks_IsClosed_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ContourWithBreaks_IsClosed_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsClosed(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void ContourWithBreaks_IsClosed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void ContourWithBreaks_IsClosed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks_IsBounded_AsyncWorker::ContourWithBreaks_IsBounded_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ContourWithBreaks_IsBounded_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsBounded(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void ContourWithBreaks_IsBounded_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void ContourWithBreaks_IsBounded_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks_GetTMax_AsyncWorker::ContourWithBreaks_GetTMax_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ContourWithBreaks_GetTMax_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetTMax(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void ContourWithBreaks_GetTMax_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void ContourWithBreaks_GetTMax_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks_GetTMin_AsyncWorker::ContourWithBreaks_GetTMin_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ContourWithBreaks_GetTMin_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetTMin(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void ContourWithBreaks_GetTMin_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void ContourWithBreaks_GetTMin_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks_GetPeriod_AsyncWorker::ContourWithBreaks_GetPeriod_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ContourWithBreaks_GetPeriod_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetPeriod(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void ContourWithBreaks_GetPeriod_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void ContourWithBreaks_GetPeriod_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks_GetWeightCentre_AsyncWorker::ContourWithBreaks_GetWeightCentre_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ContourWithBreaks_GetWeightCentre_AsyncWorker::Execute() {
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

    void ContourWithBreaks_GetWeightCentre_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void ContourWithBreaks_GetWeightCentre_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks_GetLimitPoint_AsyncWorker::ContourWithBreaks_GetLimitPoint_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
,
                         ptrdiff_t  number    )
        :_underlying(_underlying),PromiseWorker(d),
                        number(number)
{};

    void ContourWithBreaks_GetLimitPoint_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbCartPoint *point = new MbCartPoint;


        
        _underlying->GetLimitPoint(
                        number
,                        *point
        );


                this->point = point;

        
        ExitParallelRegion();
    }

    void ContourWithBreaks_GetLimitPoint_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void ContourWithBreaks_GetLimitPoint_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks_PointOn_AsyncWorker::ContourWithBreaks_PointOn_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void ContourWithBreaks_PointOn_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbCartPoint *p = new MbCartPoint;


        
        _underlying->PointOn(
                        t
,                        *p
        );


                this->p = p;

        
        ExitParallelRegion();
    }

    void ContourWithBreaks_PointOn_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void ContourWithBreaks_PointOn_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks__PointOn_AsyncWorker::ContourWithBreaks__PointOn_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void ContourWithBreaks__PointOn_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbCartPoint *p = new MbCartPoint;


        
        _underlying->_PointOn(
                        t
,                        *p
        );


                this->p = p;

        
        ExitParallelRegion();
    }

    void ContourWithBreaks__PointOn_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void ContourWithBreaks__PointOn_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks_Explore_AsyncWorker::ContourWithBreaks_Explore_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t,
                         bool  ext    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
,
                        ext(ext)
{};

    void ContourWithBreaks_Explore_AsyncWorker::Execute() {
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

    void ContourWithBreaks_Explore_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void ContourWithBreaks_Explore_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks_FirstDer_AsyncWorker::ContourWithBreaks_FirstDer_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void ContourWithBreaks_FirstDer_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->FirstDer(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void ContourWithBreaks_FirstDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void ContourWithBreaks_FirstDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks__FirstDer_AsyncWorker::ContourWithBreaks__FirstDer_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void ContourWithBreaks__FirstDer_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->_FirstDer(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void ContourWithBreaks__FirstDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void ContourWithBreaks__FirstDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks_SecondDer_AsyncWorker::ContourWithBreaks_SecondDer_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void ContourWithBreaks_SecondDer_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->SecondDer(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void ContourWithBreaks_SecondDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void ContourWithBreaks_SecondDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks__SecondDer_AsyncWorker::ContourWithBreaks__SecondDer_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void ContourWithBreaks__SecondDer_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->_SecondDer(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void ContourWithBreaks__SecondDer_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void ContourWithBreaks__SecondDer_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks_Tangent_AsyncWorker::ContourWithBreaks_Tangent_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void ContourWithBreaks_Tangent_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->Tangent(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void ContourWithBreaks_Tangent_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void ContourWithBreaks_Tangent_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks__Tangent_AsyncWorker::ContourWithBreaks__Tangent_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void ContourWithBreaks__Tangent_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->_Tangent(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void ContourWithBreaks__Tangent_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void ContourWithBreaks__Tangent_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks_Normal_AsyncWorker::ContourWithBreaks_Normal_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void ContourWithBreaks_Normal_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->Normal(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void ContourWithBreaks_Normal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void ContourWithBreaks_Normal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks__Normal_AsyncWorker::ContourWithBreaks__Normal_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void ContourWithBreaks__Normal_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector *v = new MbVector;


        
        _underlying->_Normal(
                        t
,                        *v
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void ContourWithBreaks__Normal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void ContourWithBreaks__Normal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks_PointRelative_AsyncWorker::ContourWithBreaks_PointRelative_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbCartPoint & pnt,
                         double  eps    )
        :_underlying(_underlying),PromiseWorker(d),
                        pnt(pnt)
,
                        eps(eps)
{};

    void ContourWithBreaks_PointRelative_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeItemLocation  _result = _underlying->PointRelative(
                        pnt
,                        eps
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void ContourWithBreaks_PointRelative_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeItemLocation  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void ContourWithBreaks_PointRelative_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks_PointLocation_AsyncWorker::ContourWithBreaks_PointLocation_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbCartPoint & pnt,
                         double  eps    )
        :_underlying(_underlying),PromiseWorker(d),
                        pnt(pnt)
,
                        eps(eps)
{};

    void ContourWithBreaks_PointLocation_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeLocation  _result = _underlying->PointLocation(
                        pnt
,                        eps
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void ContourWithBreaks_PointLocation_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeLocation  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void ContourWithBreaks_PointLocation_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks_IsA_AsyncWorker::ContourWithBreaks_IsA_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ContourWithBreaks_IsA_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbePlaneType  _result = _underlying->IsA(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void ContourWithBreaks_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbePlaneType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void ContourWithBreaks_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks_Type_AsyncWorker::ContourWithBreaks_Type_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ContourWithBreaks_Type_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbePlaneType  _result = _underlying->Type(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void ContourWithBreaks_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbePlaneType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void ContourWithBreaks_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks_Family_AsyncWorker::ContourWithBreaks_Family_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ContourWithBreaks_Family_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbePlaneType  _result = _underlying->Family(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void ContourWithBreaks_Family_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbePlaneType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void ContourWithBreaks_Family_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks_Move_AsyncWorker::ContourWithBreaks_Move_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbVector & to,
                         MbRegTransform * iReg    )
        :_underlying(_underlying),PromiseWorker(d),
                        to(to)
,
                        iReg(iReg)
{};

    void ContourWithBreaks_Move_AsyncWorker::Execute() {
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

    void ContourWithBreaks_Move_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void ContourWithBreaks_Move_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks_Transform_AsyncWorker::ContourWithBreaks_Transform_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
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

    void ContourWithBreaks_Transform_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Transform(
                        matr
,                        iReg
,                        newSurface
        );



        
        ExitParallelRegion();
    }

    void ContourWithBreaks_Transform_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void ContourWithBreaks_Transform_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks_Duplicate_AsyncWorker::ContourWithBreaks_Duplicate_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
,
                         MbRegDuplicate * dup    )
        :_underlying(_underlying),PromiseWorker(d),
                        dup(dup)
{};

    void ContourWithBreaks_Duplicate_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbPlaneItem & _result = _underlying->Duplicate(
                        dup
        );


                this->_result = (MbPlaneItem *)&(_result);

        
        ExitParallelRegion();
    }

    void ContourWithBreaks_Duplicate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbPlaneItem * _result = this->_result;
                _to = PlaneItem::NewInstance(env, (MbPlaneItem *)&(_result));

            deferred.Resolve(_to);
    }

    void ContourWithBreaks_Duplicate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks_AddYourGabaritTo_AsyncWorker::ContourWithBreaks_AddYourGabaritTo_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
,
                         MbRect & rect    )
        :_underlying(_underlying),PromiseWorker(d),
                        rect(rect)
{};

    void ContourWithBreaks_AddYourGabaritTo_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddYourGabaritTo(
                        rect
        );



        
        ExitParallelRegion();
    }

    void ContourWithBreaks_AddYourGabaritTo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void ContourWithBreaks_AddYourGabaritTo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks_GetUseCount_AsyncWorker::ContourWithBreaks_GetUseCount_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ContourWithBreaks_GetUseCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         refcount_t  _result = _underlying->GetUseCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void ContourWithBreaks_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             refcount_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void ContourWithBreaks_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ContourWithBreaks_AddRef_AsyncWorker::ContourWithBreaks_AddRef_AsyncWorker(
MbContourWithBreaks * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ContourWithBreaks_AddRef_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddRef(
        );



        
        ExitParallelRegion();
    }

    void ContourWithBreaks_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void ContourWithBreaks_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

