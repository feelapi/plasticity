// This is a generated file, modify: generate/templates/BridgeCurve3D.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/BridgeCurve3D.h"

#include "tool_mutex.h"

Napi::Object BridgeCurve3D::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "BridgeCurve3D", {
        InstanceMethod<&BridgeCurve3D::GetPlaneCurve>("GetPlaneCurve"),
        InstanceMethod<&BridgeCurve3D::GetPlaneCurve_async>("GetPlaneCurve_async"),
        InstanceMethod<&BridgeCurve3D::IsPlanar>("IsPlanar"),
        InstanceMethod<&BridgeCurve3D::IsPlanar_async>("IsPlanar_async"),
        InstanceMethod<&BridgeCurve3D::IsClosed>("IsClosed"),
        InstanceMethod<&BridgeCurve3D::IsClosed_async>("IsClosed_async"),
        InstanceMethod<&BridgeCurve3D::IsTouch>("IsTouch"),
        InstanceMethod<&BridgeCurve3D::IsTouch_async>("IsTouch_async"),
        InstanceMethod<&BridgeCurve3D::GetTMax>("GetTMax"),
        InstanceMethod<&BridgeCurve3D::GetTMax_async>("GetTMax_async"),
        InstanceMethod<&BridgeCurve3D::GetTMin>("GetTMin"),
        InstanceMethod<&BridgeCurve3D::GetTMin_async>("GetTMin_async"),
        InstanceMethod<&BridgeCurve3D::GetPeriod>("GetPeriod"),
        InstanceMethod<&BridgeCurve3D::GetPeriod_async>("GetPeriod_async"),
        InstanceMethod<&BridgeCurve3D::IsPeriodic>("IsPeriodic"),
        InstanceMethod<&BridgeCurve3D::IsPeriodic_async>("IsPeriodic_async"),
        InstanceMethod<&BridgeCurve3D::IsStraight>("IsStraight"),
        InstanceMethod<&BridgeCurve3D::IsStraight_async>("IsStraight_async"),
        InstanceMethod<&BridgeCurve3D::Trimmed>("Trimmed"),
        InstanceMethod<&BridgeCurve3D::Trimmed_async>("Trimmed_async"),
        InstanceMethod<&BridgeCurve3D::Normal>("Normal"),
        InstanceMethod<&BridgeCurve3D::Normal_async>("Normal_async"),
        InstanceMethod<&BridgeCurve3D::Tangent>("Tangent"),
        InstanceMethod<&BridgeCurve3D::Tangent_async>("Tangent_async"),
        InstanceMethod<&BridgeCurve3D::BNormal>("BNormal"),
        InstanceMethod<&BridgeCurve3D::BNormal_async>("BNormal_async"),
        InstanceMethod<&BridgeCurve3D::GetCentre>("GetCentre"),
        InstanceMethod<&BridgeCurve3D::GetCentre_async>("GetCentre_async"),
        InstanceMethod<&BridgeCurve3D::GetLimitPoint>("GetLimitPoint"),
        InstanceMethod<&BridgeCurve3D::GetLimitPoint_async>("GetLimitPoint_async"),
        InstanceMethod<&BridgeCurve3D::PointOn>("PointOn"),
        InstanceMethod<&BridgeCurve3D::PointOn_async>("PointOn_async"),
        InstanceMethod<&BridgeCurve3D::_PointOn>("_PointOn"),
        InstanceMethod<&BridgeCurve3D::_PointOn_async>("_PointOn_async"),
        InstanceMethod<&BridgeCurve3D::NearPointProjection>("NearPointProjection"),
        InstanceMethod<&BridgeCurve3D::NearPointProjection_async>("NearPointProjection_async"),
        InstanceMethod<&BridgeCurve3D::GetSurfaceCurve>("GetSurfaceCurve"),
        InstanceMethod<&BridgeCurve3D::GetSurfaceCurve_async>("GetSurfaceCurve_async"),
        InstanceMethod<&BridgeCurve3D::GetWeightCentre>("GetWeightCentre"),
        InstanceMethod<&BridgeCurve3D::GetWeightCentre_async>("GetWeightCentre_async"),
        InstanceMethod<&BridgeCurve3D::GetBasisCurve>("GetBasisCurve"),
        InstanceMethod<&BridgeCurve3D::GetBasisCurve_async>("GetBasisCurve_async"),
        InstanceMethod<&BridgeCurve3D::GetBasisPoints>("GetBasisPoints"),
        InstanceMethod<&BridgeCurve3D::GetBasisPoints_async>("GetBasisPoints_async"),
        InstanceMethod<&BridgeCurve3D::SetBasisPoints>("SetBasisPoints"),
        InstanceMethod<&BridgeCurve3D::SetBasisPoints_async>("SetBasisPoints_async"),
        InstanceMethod<&BridgeCurve3D::Inverse>("Inverse"),
        InstanceMethod<&BridgeCurve3D::Inverse_async>("Inverse_async"),
        InstanceMethod<&BridgeCurve3D::GetProjection>("GetProjection"),
        InstanceMethod<&BridgeCurve3D::GetProjection_async>("GetProjection_async"),
        InstanceMethod<&BridgeCurve3D::GetCircleAxis>("GetCircleAxis"),
        InstanceMethod<&BridgeCurve3D::GetCircleAxis_async>("GetCircleAxis_async"),
        InstanceMethod<&BridgeCurve3D::IsA>("IsA"),
        InstanceMethod<&BridgeCurve3D::IsA_async>("IsA_async"),
        InstanceMethod<&BridgeCurve3D::Type>("Type"),
        InstanceMethod<&BridgeCurve3D::Type_async>("Type_async"),
        InstanceMethod<&BridgeCurve3D::Family>("Family"),
        InstanceMethod<&BridgeCurve3D::Family_async>("Family_async"),
        InstanceMethod<&BridgeCurve3D::Transform>("Transform"),
        InstanceMethod<&BridgeCurve3D::Transform_async>("Transform_async"),
        InstanceMethod<&BridgeCurve3D::Move>("Move"),
        InstanceMethod<&BridgeCurve3D::Move_async>("Move_async"),
        InstanceMethod<&BridgeCurve3D::Rotate>("Rotate"),
        InstanceMethod<&BridgeCurve3D::Rotate_async>("Rotate_async"),
        InstanceMethod<&BridgeCurve3D::Refresh>("Refresh"),
        InstanceMethod<&BridgeCurve3D::Refresh_async>("Refresh_async"),
        InstanceMethod<&BridgeCurve3D::Duplicate>("Duplicate"),
        InstanceMethod<&BridgeCurve3D::Duplicate_async>("Duplicate_async"),
        InstanceMethod<&BridgeCurve3D::AddYourGabaritTo>("AddYourGabaritTo"),
        InstanceMethod<&BridgeCurve3D::AddYourGabaritTo_async>("AddYourGabaritTo_async"),
        InstanceMethod<&BridgeCurve3D::GetUseCount>("GetUseCount"),
        InstanceMethod<&BridgeCurve3D::GetUseCount_async>("GetUseCount_async"),
        InstanceMethod<&BridgeCurve3D::AddRef>("AddRef"),
        InstanceMethod<&BridgeCurve3D::AddRef_async>("AddRef_async"),
            InstanceMethod<&BridgeCurve3D::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("BridgeCurve3D", func);

    Napi::Object global = env.Global();
    Napi::Object Object = global.Get("Object").ToObject();
    Napi::Function setPrototypeOf = Napi::Function(env, Object.Get("setPrototypeOf"));
    Napi::Value prototype = func.Get("prototype");

    Napi::Function superFunc = Curve3D::GetConstructor(env);
    Napi::FunctionReference* superConstructor = new Napi::FunctionReference();
    *superConstructor = Napi::Persistent(superFunc);

    Napi::Value superPrototype = superFunc.Get("prototype");
    setPrototypeOf.Call({prototype, superPrototype});
    setPrototypeOf.Call({func, superFunc});

    return exports;
}

BridgeCurve3D::BridgeCurve3D(const Napi::CallbackInfo& info) : Napi::ObjectWrap<BridgeCurve3D>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        Napi::Error::New(env, "BridgeCurve3D cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object BridgeCurve3D::NewInstance(Napi::Env env, MbBridgeCurve3D *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("BridgeCurve3D");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    BridgeCurve3D *unwrapped = BridgeCurve3D::Unwrap(inst);
underlying->AddRef();    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function BridgeCurve3D::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("BridgeCurve3D");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

        Napi::Value BridgeCurve3D::GetPlaneCurve(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsBoolean()
)) {
                    Napi::Error::New(env, "boolean saveParams is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                     MbCurve * curve2d = NULL;
        MbPlacement3D *placement = new MbPlacement3D;


             bool saveParams = info[0].ToBoolean();

                    PlanarCheckParams  params;
        if (!(info[1].IsNull() || info[1].IsUndefined())) {
            _PlanarCheckParams *params_ = _PlanarCheckParams::Unwrap(info[1].ToObject());
                params = *  params_->_underlying;
        }



 bool  _result = _underlying->GetPlaneCurve
(
        curve2d
,        *placement
,        saveParams
,        info.Length() == 1 || info[1].IsNull() ? PlanarCheckParams() : params

);


if (_result) {

        Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

            if (curve2d != NULL) {
        _to = Curve::NewInstance(env, (MbCurve *)curve2d);
    } else {
        _to = env.Null();
    }

        _toReturn.Set(Napi::String::New(env, "curve2d"), _to);
            if (placement != NULL) {
        _to = Placement3D::NewInstance(env, (MbPlacement3D *)placement);
    } else {
        _to = env.Null();
    }

        _toReturn.Set(Napi::String::New(env, "placement"), _to);
            return _toReturn;

} else {
    std::ostringstream msg;
    msg << "Operation GetPlaneCurve failed";
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value BridgeCurve3D::GetPlaneCurve_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsBoolean()
)) {
                    deferred.Reject(Napi::String::New(env, "boolean saveParams is required."));
                    return deferred.Promise();
            }


                     bool saveParams = info[0].ToBoolean();

                            PlanarCheckParams  params;
        if (!(info[1].IsNull() || info[1].IsUndefined())) {
            _PlanarCheckParams *params_ = _PlanarCheckParams::Unwrap(info[1].ToObject());
                params = *  params_->_underlying;
        }

        BridgeCurve3D_GetPlaneCurve_AsyncWorker* asyncWorker = new BridgeCurve3D_GetPlaneCurve_AsyncWorker(
_underlying,            deferred
,
                
                saveParams,
                
                params        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value BridgeCurve3D::IsPlanar(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            

             double accuracy = info[0].ToNumber().DoubleValue();



 bool  _result = _underlying->IsPlanar
(
        info.Length() == 0 || info[0].IsNull() ? METRIC_EPSILON : accuracy

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value BridgeCurve3D::IsPlanar_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                     double accuracy = info[0].ToNumber().DoubleValue();

        BridgeCurve3D_IsPlanar_AsyncWorker* asyncWorker = new BridgeCurve3D_IsPlanar_AsyncWorker(
_underlying,            deferred
,
                
                accuracy        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value BridgeCurve3D::IsClosed(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->IsClosed
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value BridgeCurve3D::IsClosed_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        BridgeCurve3D_IsClosed_AsyncWorker* asyncWorker = new BridgeCurve3D_IsClosed_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value BridgeCurve3D::IsTouch(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->IsTouch
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value BridgeCurve3D::IsTouch_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        BridgeCurve3D_IsTouch_AsyncWorker* asyncWorker = new BridgeCurve3D_IsTouch_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value BridgeCurve3D::GetTMax(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 double  _result = _underlying->GetTMax
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value BridgeCurve3D::GetTMax_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        BridgeCurve3D_GetTMax_AsyncWorker* asyncWorker = new BridgeCurve3D_GetTMax_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value BridgeCurve3D::GetTMin(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 double  _result = _underlying->GetTMin
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value BridgeCurve3D::GetTMin_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        BridgeCurve3D_GetTMin_AsyncWorker* asyncWorker = new BridgeCurve3D_GetTMin_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value BridgeCurve3D::GetPeriod(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 double  _result = _underlying->GetPeriod
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value BridgeCurve3D::GetPeriod_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        BridgeCurve3D_GetPeriod_AsyncWorker* asyncWorker = new BridgeCurve3D_GetPeriod_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value BridgeCurve3D::IsPeriodic(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->IsPeriodic
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value BridgeCurve3D::IsPeriodic_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        BridgeCurve3D_IsPeriodic_AsyncWorker* asyncWorker = new BridgeCurve3D_IsPeriodic_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value BridgeCurve3D::IsStraight(const Napi::CallbackInfo& info) {
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

    Napi::Value BridgeCurve3D::IsStraight_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                     bool ignoreParams = info[0].ToBoolean();

        BridgeCurve3D_IsStraight_AsyncWorker* asyncWorker = new BridgeCurve3D_IsStraight_AsyncWorker(
_underlying,            deferred
,
                
                ignoreParams        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value BridgeCurve3D::Trimmed(const Napi::CallbackInfo& info) {
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



 MbCurve3D * _result = _underlying->Trimmed
(
        t1
,        t2
,        sense

);



    Napi::Value _to;

            if (_result != NULL) {
        _to = Curve3D::NewInstance(env, (MbCurve3D *)_result);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value BridgeCurve3D::Trimmed_async(const Napi::CallbackInfo& info) {
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

        BridgeCurve3D_Trimmed_AsyncWorker* asyncWorker = new BridgeCurve3D_Trimmed_AsyncWorker(
_underlying,            deferred
,
                
                t1,
                
                t2,
                
                sense        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value BridgeCurve3D::Normal(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    MbVector3D *n = new MbVector3D;


             double t = info[0].ToNumber().DoubleValue();



_underlying->Normal
(
        t
,        *n

);



    Napi::Value _to;

            if (n != NULL) {
        _to = Vector3D::NewInstance(env, (MbVector3D *)n);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value BridgeCurve3D::Normal_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        BridgeCurve3D_Normal_AsyncWorker* asyncWorker = new BridgeCurve3D_Normal_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value BridgeCurve3D::Tangent(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    MbVector3D *tan = new MbVector3D;


             double t = info[0].ToNumber().DoubleValue();



_underlying->Tangent
(
        t
,        *tan

);



    Napi::Value _to;

            if (tan != NULL) {
        _to = Vector3D::NewInstance(env, (MbVector3D *)tan);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value BridgeCurve3D::Tangent_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        BridgeCurve3D_Tangent_AsyncWorker* asyncWorker = new BridgeCurve3D_Tangent_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value BridgeCurve3D::BNormal(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    MbVector3D *b = new MbVector3D;


             double t = info[0].ToNumber().DoubleValue();



_underlying->BNormal
(
        t
,        *b

);



    Napi::Value _to;

            if (b != NULL) {
        _to = Vector3D::NewInstance(env, (MbVector3D *)b);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value BridgeCurve3D::BNormal_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        BridgeCurve3D_BNormal_AsyncWorker* asyncWorker = new BridgeCurve3D_BNormal_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value BridgeCurve3D::GetCentre(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                    MbCartPoint3D *c = new MbCartPoint3D;




_underlying->GetCentre
(
        *c

);



    Napi::Value _to;

            if (c != NULL) {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)c);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value BridgeCurve3D::GetCentre_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        BridgeCurve3D_GetCentre_AsyncWorker* asyncWorker = new BridgeCurve3D_GetCentre_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value BridgeCurve3D::GetLimitPoint(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "ptrdiff_t number is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    MbCartPoint3D *point = new MbCartPoint3D;


             int number = info[0].ToNumber().Int64Value();



_underlying->GetLimitPoint
(
        number
,        *point

);



    Napi::Value _to;

            if (point != NULL) {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)point);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value BridgeCurve3D::GetLimitPoint_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "ptrdiff_t number is required."));
                    return deferred.Promise();
            }


                     int number = info[0].ToNumber().Int64Value();

        BridgeCurve3D_GetLimitPoint_AsyncWorker* asyncWorker = new BridgeCurve3D_GetLimitPoint_AsyncWorker(
_underlying,            deferred
,
                
                number        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value BridgeCurve3D::PointOn(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    MbCartPoint3D *p = new MbCartPoint3D;


             double t = info[0].ToNumber().DoubleValue();



_underlying->PointOn
(
        t
,        *p

);



    Napi::Value _to;

            if (p != NULL) {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)p);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value BridgeCurve3D::PointOn_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        BridgeCurve3D_PointOn_AsyncWorker* asyncWorker = new BridgeCurve3D_PointOn_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value BridgeCurve3D::_PointOn(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    MbCartPoint3D *p = new MbCartPoint3D;


             double t = info[0].ToNumber().DoubleValue();



_underlying->_PointOn
(
        t
,        *p

);



    Napi::Value _to;

            if (p != NULL) {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)p);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value BridgeCurve3D::_PointOn_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        BridgeCurve3D__PointOn_AsyncWorker* asyncWorker = new BridgeCurve3D__PointOn_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value BridgeCurve3D::NearPointProjection(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "CartPoint3D pnt is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsBoolean()
)) {
                    Napi::Error::New(env, "boolean ext is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    double t;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'pnt'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class CartPoint3D *pnt_ = CartPoint3D::Unwrap(info[0].ToObject());
        
        const MbCartPoint3D & pnt =*pnt_->_underlying;
        

             bool ext = info[1].ToBoolean();

                    MbRect1D * tRange = NULL;
        if (!(info[2].IsNull() || info[2].IsUndefined())) {
            Rect1D *tRange_ = Rect1D::Unwrap(info[2].ToObject());
                tRange =   tRange_->_underlying;
        }



 bool  success = _underlying->NearPointProjection
(
        pnt
,        t
,        ext
,        info.Length() == 2 || info[2].IsNull() ? NULL : tRange

);



        Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

            _to = Napi::Boolean::New(env, success);

        _toReturn.Set(Napi::String::New(env, "success"), _to);
            _to = Napi::Number::New(env, t);

        _toReturn.Set(Napi::String::New(env, "t"), _to);
            return _toReturn;


        }

    Napi::Value BridgeCurve3D::NearPointProjection_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "CartPoint3D pnt is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsBoolean()
)) {
                    deferred.Reject(Napi::String::New(env, "boolean ext is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'pnt'"));
                return deferred.Promise();
        }
        const class CartPoint3D *pnt_ = CartPoint3D::Unwrap(info[0].ToObject());
        
        const MbCartPoint3D & pnt =*pnt_->_underlying;
        

                     bool ext = info[1].ToBoolean();

                            MbRect1D * tRange = NULL;
        if (!(info[2].IsNull() || info[2].IsUndefined())) {
            Rect1D *tRange_ = Rect1D::Unwrap(info[2].ToObject());
                tRange =   tRange_->_underlying;
        }

        BridgeCurve3D_NearPointProjection_AsyncWorker* asyncWorker = new BridgeCurve3D_NearPointProjection_AsyncWorker(
_underlying,            deferred
,
                
                pnt,
                
                ext,
                
                tRange        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value BridgeCurve3D::GetSurfaceCurve(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                     MbCurve * curve2d = NULL;
         MbSurface * surface = NULL;


             int version = info[0].ToNumber().Int64Value();



 bool  _result = _underlying->GetSurfaceCurve
(
        curve2d
,        surface
,        info.Length() == 0 || info[0].IsNull() ? Math::DefaultMathVersion() : version

);


if (_result) {

        Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

            if (curve2d != NULL) {
        _to = Curve::NewInstance(env, (MbCurve *)curve2d);
    } else {
        _to = env.Null();
    }

        _toReturn.Set(Napi::String::New(env, "curve2d"), _to);
            if (surface != NULL) {
        _to = Surface::NewInstance(env, (MbSurface *)surface);
    } else {
        _to = env.Null();
    }

        _toReturn.Set(Napi::String::New(env, "surface"), _to);
            return _toReturn;

} else {
    std::ostringstream msg;
    msg << "Operation GetSurfaceCurve failed";
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value BridgeCurve3D::GetSurfaceCurve_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                     int version = info[0].ToNumber().Int64Value();

        BridgeCurve3D_GetSurfaceCurve_AsyncWorker* asyncWorker = new BridgeCurve3D_GetSurfaceCurve_AsyncWorker(
_underlying,            deferred
,
                
                version        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value BridgeCurve3D::GetWeightCentre(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                    MbCartPoint3D *point = new MbCartPoint3D;




_underlying->GetWeightCentre
(
        *point

);



    Napi::Value _to;

            if (point != NULL) {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)point);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value BridgeCurve3D::GetWeightCentre_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        BridgeCurve3D_GetWeightCentre_AsyncWorker* asyncWorker = new BridgeCurve3D_GetWeightCentre_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value BridgeCurve3D::GetBasisCurve(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



const MbCurve3D & _result = _underlying->GetBasisCurve
(

);



    Napi::Value _to;

            _to = Curve3D::NewInstance(env, (MbCurve3D *)&(_result));

            return _to;


        }

    Napi::Value BridgeCurve3D::GetBasisCurve_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        BridgeCurve3D_GetBasisCurve_AsyncWorker* asyncWorker = new BridgeCurve3D_GetBasisCurve_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value BridgeCurve3D::GetBasisPoints(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                    MbControlData3D *cd = new MbControlData3D;




_underlying->GetBasisPoints
(
        *cd

);



    Napi::Value _to;

            if (cd != NULL) {
        _to = ControlData3D::NewInstance(env, (MbControlData3D *)cd);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value BridgeCurve3D::GetBasisPoints_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        BridgeCurve3D_GetBasisPoints_AsyncWorker* asyncWorker = new BridgeCurve3D_GetBasisPoints_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value BridgeCurve3D::SetBasisPoints(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(ControlData3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "ControlData3D cd is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'cd'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class ControlData3D *cd_ = ControlData3D::Unwrap(info[0].ToObject());
        
        const MbControlData3D & cd =*cd_->_underlying;
        



_underlying->SetBasisPoints
(
        cd

);



    return env.Undefined();


        }

    Napi::Value BridgeCurve3D::SetBasisPoints_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(ControlData3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "ControlData3D cd is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'cd'"));
                return deferred.Promise();
        }
        const class ControlData3D *cd_ = ControlData3D::Unwrap(info[0].ToObject());
        
        const MbControlData3D & cd =*cd_->_underlying;
        

        BridgeCurve3D_SetBasisPoints_AsyncWorker* asyncWorker = new BridgeCurve3D_SetBasisPoints_AsyncWorker(
_underlying,            deferred
,
                
                cd        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value BridgeCurve3D::Inverse(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->Inverse
(

);



    return env.Undefined();


        }

    Napi::Value BridgeCurve3D::Inverse_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        BridgeCurve3D_Inverse_AsyncWorker* asyncWorker = new BridgeCurve3D_Inverse_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value BridgeCurve3D::GetProjection(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Placement3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Placement3D place is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'place'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Placement3D *place_ = Placement3D::Unwrap(info[0].ToObject());
        
        const MbPlacement3D & place =*place_->_underlying;
        

             int version = info[1].ToNumber().Int64Value();



 MbCurve * _result = _underlying->GetProjection
(
        place
,        info.Length() == 1 || info[1].IsNull() ? Math::DefaultMathVersion() : version

);



    Napi::Value _to;

            if (_result != NULL) {
        _to = Curve::NewInstance(env, (MbCurve *)_result);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value BridgeCurve3D::GetProjection_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Placement3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Placement3D place is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'place'"));
                return deferred.Promise();
        }
        const class Placement3D *place_ = Placement3D::Unwrap(info[0].ToObject());
        
        const MbPlacement3D & place =*place_->_underlying;
        

                     int version = info[1].ToNumber().Int64Value();

        BridgeCurve3D_GetProjection_AsyncWorker* asyncWorker = new BridgeCurve3D_GetProjection_AsyncWorker(
_underlying,            deferred
,
                
                place,
                
                version        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value BridgeCurve3D::GetCircleAxis(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                    MbAxis3D *axis = new MbAxis3D;




 bool  success = _underlying->GetCircleAxis
(
        *axis

);



        Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

            _to = Napi::Boolean::New(env, success);

        _toReturn.Set(Napi::String::New(env, "success"), _to);
            if (axis != NULL) {
        _to = Axis3D::NewInstance(env, (MbAxis3D *)axis);
    } else {
        _to = env.Null();
    }

        _toReturn.Set(Napi::String::New(env, "axis"), _to);
            return _toReturn;


        }

    Napi::Value BridgeCurve3D::GetCircleAxis_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        BridgeCurve3D_GetCircleAxis_AsyncWorker* asyncWorker = new BridgeCurve3D_GetCircleAxis_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value BridgeCurve3D::IsA(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeSpaceType  _result = _underlying->IsA
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value BridgeCurve3D::IsA_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        BridgeCurve3D_IsA_AsyncWorker* asyncWorker = new BridgeCurve3D_IsA_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value BridgeCurve3D::Type(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeSpaceType  _result = _underlying->Type
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value BridgeCurve3D::Type_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        BridgeCurve3D_Type_AsyncWorker* asyncWorker = new BridgeCurve3D_Type_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value BridgeCurve3D::Family(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeSpaceType  _result = _underlying->Family
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value BridgeCurve3D::Family_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        BridgeCurve3D_Family_AsyncWorker* asyncWorker = new BridgeCurve3D_Family_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value BridgeCurve3D::Transform(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Matrix3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Matrix3D mat is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'mat'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Matrix3D *mat_ = Matrix3D::Unwrap(info[0].ToObject());
        
        const MbMatrix3D & mat =*mat_->_underlying;
        

                    MbRegTransform * iReg = NULL;
        if (!(info[1].IsNull() || info[1].IsUndefined())) {
            RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
                iReg =   iReg_->_underlying;
        }



_underlying->Transform
(
        mat
,        info.Length() == 1 || info[1].IsNull() ? NULL : iReg

);



    return env.Undefined();


        }

    Napi::Value BridgeCurve3D::Transform_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Matrix3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Matrix3D mat is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'mat'"));
                return deferred.Promise();
        }
        const class Matrix3D *mat_ = Matrix3D::Unwrap(info[0].ToObject());
        
        const MbMatrix3D & mat =*mat_->_underlying;
        

                            MbRegTransform * iReg = NULL;
        if (!(info[1].IsNull() || info[1].IsUndefined())) {
            RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
                iReg =   iReg_->_underlying;
        }

        BridgeCurve3D_Transform_AsyncWorker* asyncWorker = new BridgeCurve3D_Transform_AsyncWorker(
_underlying,            deferred
,
                
                mat,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value BridgeCurve3D::Move(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Vector3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Vector3D v is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'v'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Vector3D *v_ = Vector3D::Unwrap(info[0].ToObject());
        
        const MbVector3D & v =*v_->_underlying;
        

                    MbRegTransform * iReg = NULL;
        if (!(info[1].IsNull() || info[1].IsUndefined())) {
            RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
                iReg =   iReg_->_underlying;
        }



_underlying->Move
(
        v
,        info.Length() == 1 || info[1].IsNull() ? NULL : iReg

);



    return env.Undefined();


        }

    Napi::Value BridgeCurve3D::Move_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Vector3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Vector3D v is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'v'"));
                return deferred.Promise();
        }
        const class Vector3D *v_ = Vector3D::Unwrap(info[0].ToObject());
        
        const MbVector3D & v =*v_->_underlying;
        

                            MbRegTransform * iReg = NULL;
        if (!(info[1].IsNull() || info[1].IsUndefined())) {
            RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
                iReg =   iReg_->_underlying;
        }

        BridgeCurve3D_Move_AsyncWorker* asyncWorker = new BridgeCurve3D_Move_AsyncWorker(
_underlying,            deferred
,
                
                v,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value BridgeCurve3D::Rotate(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Axis3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Axis3D axis is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    Napi::Error::New(env, "number angle is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'axis'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Axis3D *axis_ = Axis3D::Unwrap(info[0].ToObject());
        
        const MbAxis3D & axis =*axis_->_underlying;
        

             double angle = info[1].ToNumber().DoubleValue();

                    MbRegTransform * iReg = NULL;
        if (!(info[2].IsNull() || info[2].IsUndefined())) {
            RegTransform *iReg_ = RegTransform::Unwrap(info[2].ToObject());
                iReg =   iReg_->_underlying;
        }



_underlying->Rotate
(
        axis
,        angle
,        info.Length() == 2 || info[2].IsNull() ? NULL : iReg

);



    return env.Undefined();


        }

    Napi::Value BridgeCurve3D::Rotate_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Axis3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Axis3D axis is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number angle is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'axis'"));
                return deferred.Promise();
        }
        const class Axis3D *axis_ = Axis3D::Unwrap(info[0].ToObject());
        
        const MbAxis3D & axis =*axis_->_underlying;
        

                     double angle = info[1].ToNumber().DoubleValue();

                            MbRegTransform * iReg = NULL;
        if (!(info[2].IsNull() || info[2].IsUndefined())) {
            RegTransform *iReg_ = RegTransform::Unwrap(info[2].ToObject());
                iReg =   iReg_->_underlying;
        }

        BridgeCurve3D_Rotate_AsyncWorker* asyncWorker = new BridgeCurve3D_Rotate_AsyncWorker(
_underlying,            deferred
,
                
                axis,
                
                angle,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value BridgeCurve3D::Refresh(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->Refresh
(

);



    return env.Undefined();


        }

    Napi::Value BridgeCurve3D::Refresh_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        BridgeCurve3D_Refresh_AsyncWorker* asyncWorker = new BridgeCurve3D_Refresh_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value BridgeCurve3D::Duplicate(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            

                    MbRegDuplicate * iReg = NULL;
        if (!(info[0].IsNull() || info[0].IsUndefined())) {
            RegDuplicate *iReg_ = RegDuplicate::Unwrap(info[0].ToObject());
                iReg =   iReg_->_underlying;
        }



 MbSpaceItem & _result = _underlying->Duplicate
(
        info.Length() == 0 || info[0].IsNull() ? NULL : iReg

);



    Napi::Value _to;

            _to = SpaceItem::NewInstance(env, (MbSpaceItem *)&(_result));

            return _to;


        }

    Napi::Value BridgeCurve3D::Duplicate_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                            MbRegDuplicate * iReg = NULL;
        if (!(info[0].IsNull() || info[0].IsUndefined())) {
            RegDuplicate *iReg_ = RegDuplicate::Unwrap(info[0].ToObject());
                iReg =   iReg_->_underlying;
        }

        BridgeCurve3D_Duplicate_AsyncWorker* asyncWorker = new BridgeCurve3D_Duplicate_AsyncWorker(
_underlying,            deferred
,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value BridgeCurve3D::AddYourGabaritTo(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Cube::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Cube cube is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'cube'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Cube *cube_ = Cube::Unwrap(info[0].ToObject());
        
         MbCube & cube =*cube_->_underlying;
        



_underlying->AddYourGabaritTo
(
        cube

);



    return env.Undefined();


        }

    Napi::Value BridgeCurve3D::AddYourGabaritTo_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Cube::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Cube cube is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'cube'"));
                return deferred.Promise();
        }
        const class Cube *cube_ = Cube::Unwrap(info[0].ToObject());
        
         MbCube & cube =*cube_->_underlying;
        

        BridgeCurve3D_AddYourGabaritTo_AsyncWorker* asyncWorker = new BridgeCurve3D_AddYourGabaritTo_AsyncWorker(
_underlying,            deferred
,
                
                cube        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value BridgeCurve3D::GetUseCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 refcount_t  _result = _underlying->GetUseCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value BridgeCurve3D::GetUseCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        BridgeCurve3D_GetUseCount_AsyncWorker* asyncWorker = new BridgeCurve3D_GetUseCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value BridgeCurve3D::AddRef(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->AddRef
(

);



    return env.Undefined();


        }

    Napi::Value BridgeCurve3D::AddRef_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        BridgeCurve3D_AddRef_AsyncWorker* asyncWorker = new BridgeCurve3D_AddRef_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }



    Napi::Value BridgeCurve3D::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }

BridgeCurve3D::~BridgeCurve3D() {
    // std::cout << "calling ::DeleteItem on BridgeCurve3D for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

    BridgeCurve3D_GetPlaneCurve_AsyncWorker::BridgeCurve3D_GetPlaneCurve_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
,
                         bool  saveParams,
                         PlanarCheckParams  params    )
        :_underlying(_underlying),PromiseWorker(d),
                        saveParams(saveParams)
,
                        params(params)
{};

    void BridgeCurve3D_GetPlaneCurve_AsyncWorker::Execute() {
        EnterParallelRegion();

                 MbCurve * curve2d = NULL;
        MbPlacement3D *placement = new MbPlacement3D;


        
         bool  _result = _underlying->GetPlaneCurve(
                        curve2d
,                        *placement
,                        saveParams
,                        params
        );

        if (_result) {

                this->curve2d = curve2d;
                this->placement = placement;

                } else {
            std::ostringstream msg;
            msg << "Operation GetPlaneCurve failed";
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void BridgeCurve3D_GetPlaneCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            Napi::Object _toReturn = Napi::Object::New(env);

                 MbCurve * curve2d = this->curve2d;
                    if (curve2d != NULL) {
        _to = Curve::NewInstance(env, (MbCurve *)curve2d);
    } else {
        _to = env.Null();
    }

                _toReturn.Set(Napi::String::New(env, "curve2d"), _to);
                 MbPlacement3D * placement = this->placement;
                    if (placement != NULL) {
        _to = Placement3D::NewInstance(env, (MbPlacement3D *)placement);
    } else {
        _to = env.Null();
    }

                _toReturn.Set(Napi::String::New(env, "placement"), _to);

            deferred.Resolve(_toReturn);
    }

    void BridgeCurve3D_GetPlaneCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    BridgeCurve3D_IsPlanar_AsyncWorker::BridgeCurve3D_IsPlanar_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
,
                         double  accuracy    )
        :_underlying(_underlying),PromiseWorker(d),
                        accuracy(accuracy)
{};

    void BridgeCurve3D_IsPlanar_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsPlanar(
                        accuracy
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void BridgeCurve3D_IsPlanar_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void BridgeCurve3D_IsPlanar_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    BridgeCurve3D_IsClosed_AsyncWorker::BridgeCurve3D_IsClosed_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void BridgeCurve3D_IsClosed_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsClosed(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void BridgeCurve3D_IsClosed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void BridgeCurve3D_IsClosed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    BridgeCurve3D_IsTouch_AsyncWorker::BridgeCurve3D_IsTouch_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void BridgeCurve3D_IsTouch_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsTouch(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void BridgeCurve3D_IsTouch_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void BridgeCurve3D_IsTouch_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    BridgeCurve3D_GetTMax_AsyncWorker::BridgeCurve3D_GetTMax_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void BridgeCurve3D_GetTMax_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetTMax(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void BridgeCurve3D_GetTMax_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void BridgeCurve3D_GetTMax_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    BridgeCurve3D_GetTMin_AsyncWorker::BridgeCurve3D_GetTMin_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void BridgeCurve3D_GetTMin_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetTMin(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void BridgeCurve3D_GetTMin_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void BridgeCurve3D_GetTMin_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    BridgeCurve3D_GetPeriod_AsyncWorker::BridgeCurve3D_GetPeriod_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void BridgeCurve3D_GetPeriod_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetPeriod(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void BridgeCurve3D_GetPeriod_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void BridgeCurve3D_GetPeriod_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    BridgeCurve3D_IsPeriodic_AsyncWorker::BridgeCurve3D_IsPeriodic_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void BridgeCurve3D_IsPeriodic_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsPeriodic(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void BridgeCurve3D_IsPeriodic_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void BridgeCurve3D_IsPeriodic_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    BridgeCurve3D_IsStraight_AsyncWorker::BridgeCurve3D_IsStraight_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
,
                         bool  ignoreParams    )
        :_underlying(_underlying),PromiseWorker(d),
                        ignoreParams(ignoreParams)
{};

    void BridgeCurve3D_IsStraight_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsStraight(
                        ignoreParams
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void BridgeCurve3D_IsStraight_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void BridgeCurve3D_IsStraight_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    BridgeCurve3D_Trimmed_AsyncWorker::BridgeCurve3D_Trimmed_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
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

    void BridgeCurve3D_Trimmed_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbCurve3D * _result = _underlying->Trimmed(
                        t1
,                        t2
,                        sense
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void BridgeCurve3D_Trimmed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbCurve3D * _result = this->_result;
                if (_result != NULL) {
        _to = Curve3D::NewInstance(env, (MbCurve3D *)_result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void BridgeCurve3D_Trimmed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    BridgeCurve3D_Normal_AsyncWorker::BridgeCurve3D_Normal_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void BridgeCurve3D_Normal_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector3D *n = new MbVector3D;


        
        _underlying->Normal(
                        t
,                        *n
        );


                this->n = n;

        
        ExitParallelRegion();
    }

    void BridgeCurve3D_Normal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbVector3D * n = this->n;
                if (n != NULL) {
        _to = Vector3D::NewInstance(env, (MbVector3D *)n);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void BridgeCurve3D_Normal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    BridgeCurve3D_Tangent_AsyncWorker::BridgeCurve3D_Tangent_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void BridgeCurve3D_Tangent_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector3D *tan = new MbVector3D;


        
        _underlying->Tangent(
                        t
,                        *tan
        );


                this->tan = tan;

        
        ExitParallelRegion();
    }

    void BridgeCurve3D_Tangent_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbVector3D * tan = this->tan;
                if (tan != NULL) {
        _to = Vector3D::NewInstance(env, (MbVector3D *)tan);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void BridgeCurve3D_Tangent_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    BridgeCurve3D_BNormal_AsyncWorker::BridgeCurve3D_BNormal_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void BridgeCurve3D_BNormal_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector3D *b = new MbVector3D;


        
        _underlying->BNormal(
                        t
,                        *b
        );


                this->b = b;

        
        ExitParallelRegion();
    }

    void BridgeCurve3D_BNormal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbVector3D * b = this->b;
                if (b != NULL) {
        _to = Vector3D::NewInstance(env, (MbVector3D *)b);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void BridgeCurve3D_BNormal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    BridgeCurve3D_GetCentre_AsyncWorker::BridgeCurve3D_GetCentre_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void BridgeCurve3D_GetCentre_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbCartPoint3D *c = new MbCartPoint3D;


        
        _underlying->GetCentre(
                        *c
        );


                this->c = c;

        
        ExitParallelRegion();
    }

    void BridgeCurve3D_GetCentre_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbCartPoint3D * c = this->c;
                if (c != NULL) {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)c);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void BridgeCurve3D_GetCentre_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    BridgeCurve3D_GetLimitPoint_AsyncWorker::BridgeCurve3D_GetLimitPoint_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
,
                         ptrdiff_t  number    )
        :_underlying(_underlying),PromiseWorker(d),
                        number(number)
{};

    void BridgeCurve3D_GetLimitPoint_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbCartPoint3D *point = new MbCartPoint3D;


        
        _underlying->GetLimitPoint(
                        number
,                        *point
        );


                this->point = point;

        
        ExitParallelRegion();
    }

    void BridgeCurve3D_GetLimitPoint_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbCartPoint3D * point = this->point;
                if (point != NULL) {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)point);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void BridgeCurve3D_GetLimitPoint_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    BridgeCurve3D_PointOn_AsyncWorker::BridgeCurve3D_PointOn_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void BridgeCurve3D_PointOn_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbCartPoint3D *p = new MbCartPoint3D;


        
        _underlying->PointOn(
                        t
,                        *p
        );


                this->p = p;

        
        ExitParallelRegion();
    }

    void BridgeCurve3D_PointOn_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbCartPoint3D * p = this->p;
                if (p != NULL) {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)p);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void BridgeCurve3D_PointOn_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    BridgeCurve3D__PointOn_AsyncWorker::BridgeCurve3D__PointOn_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void BridgeCurve3D__PointOn_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbCartPoint3D *p = new MbCartPoint3D;


        
        _underlying->_PointOn(
                        t
,                        *p
        );


                this->p = p;

        
        ExitParallelRegion();
    }

    void BridgeCurve3D__PointOn_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbCartPoint3D * p = this->p;
                if (p != NULL) {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)p);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void BridgeCurve3D__PointOn_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    BridgeCurve3D_NearPointProjection_AsyncWorker::BridgeCurve3D_NearPointProjection_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbCartPoint3D & pnt,
                         bool  ext,
                         MbRect1D * tRange    )
        :_underlying(_underlying),PromiseWorker(d),
                        pnt(pnt)
,
                        ext(ext)
,
                        tRange(tRange)
{};

    void BridgeCurve3D_NearPointProjection_AsyncWorker::Execute() {
        EnterParallelRegion();

                double t;


        
         bool  success = _underlying->NearPointProjection(
                        pnt
,                        t
,                        ext
,                        tRange
        );


                this->success = success;
                this->t = t;

        
        ExitParallelRegion();
    }

    void BridgeCurve3D_NearPointProjection_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            Napi::Object _toReturn = Napi::Object::New(env);

                 bool  success = this->success;
                    _to = Napi::Boolean::New(env, success);

                _toReturn.Set(Napi::String::New(env, "success"), _to);
                 double  t = this->t;
                    _to = Napi::Number::New(env, t);

                _toReturn.Set(Napi::String::New(env, "t"), _to);

            deferred.Resolve(_toReturn);
    }

    void BridgeCurve3D_NearPointProjection_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    BridgeCurve3D_GetSurfaceCurve_AsyncWorker::BridgeCurve3D_GetSurfaceCurve_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
,
                         VERSION  version    )
        :_underlying(_underlying),PromiseWorker(d),
                        version(version)
{};

    void BridgeCurve3D_GetSurfaceCurve_AsyncWorker::Execute() {
        EnterParallelRegion();

                 MbCurve * curve2d = NULL;
         MbSurface * surface = NULL;


        
         bool  _result = _underlying->GetSurfaceCurve(
                        curve2d
,                        surface
,                        version
        );

        if (_result) {

                this->curve2d = curve2d;
                this->surface = surface;

                } else {
            std::ostringstream msg;
            msg << "Operation GetSurfaceCurve failed";
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void BridgeCurve3D_GetSurfaceCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            Napi::Object _toReturn = Napi::Object::New(env);

                 MbCurve * curve2d = this->curve2d;
                    if (curve2d != NULL) {
        _to = Curve::NewInstance(env, (MbCurve *)curve2d);
    } else {
        _to = env.Null();
    }

                _toReturn.Set(Napi::String::New(env, "curve2d"), _to);
                 MbSurface * surface = this->surface;
                    if (surface != NULL) {
        _to = Surface::NewInstance(env, (MbSurface *)surface);
    } else {
        _to = env.Null();
    }

                _toReturn.Set(Napi::String::New(env, "surface"), _to);

            deferred.Resolve(_toReturn);
    }

    void BridgeCurve3D_GetSurfaceCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    BridgeCurve3D_GetWeightCentre_AsyncWorker::BridgeCurve3D_GetWeightCentre_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void BridgeCurve3D_GetWeightCentre_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbCartPoint3D *point = new MbCartPoint3D;


        
        _underlying->GetWeightCentre(
                        *point
        );


                this->point = point;

        
        ExitParallelRegion();
    }

    void BridgeCurve3D_GetWeightCentre_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbCartPoint3D * point = this->point;
                if (point != NULL) {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)point);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void BridgeCurve3D_GetWeightCentre_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    BridgeCurve3D_GetBasisCurve_AsyncWorker::BridgeCurve3D_GetBasisCurve_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void BridgeCurve3D_GetBasisCurve_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        const MbCurve3D & _result = _underlying->GetBasisCurve(
        );


                this->_result = (MbCurve3D *)&(_result);

        
        ExitParallelRegion();
    }

    void BridgeCurve3D_GetBasisCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            const MbCurve3D * _result = this->_result;
                _to = Curve3D::NewInstance(env, (MbCurve3D *)&(_result));

            deferred.Resolve(_to);
    }

    void BridgeCurve3D_GetBasisCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    BridgeCurve3D_GetBasisPoints_AsyncWorker::BridgeCurve3D_GetBasisPoints_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void BridgeCurve3D_GetBasisPoints_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbControlData3D *cd = new MbControlData3D;


        
        _underlying->GetBasisPoints(
                        *cd
        );


                this->cd = cd;

        
        ExitParallelRegion();
    }

    void BridgeCurve3D_GetBasisPoints_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbControlData3D * cd = this->cd;
                if (cd != NULL) {
        _to = ControlData3D::NewInstance(env, (MbControlData3D *)cd);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void BridgeCurve3D_GetBasisPoints_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    BridgeCurve3D_SetBasisPoints_AsyncWorker::BridgeCurve3D_SetBasisPoints_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbControlData3D & cd    )
        :_underlying(_underlying),PromiseWorker(d),
                        cd(cd)
{};

    void BridgeCurve3D_SetBasisPoints_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetBasisPoints(
                        cd
        );



        
        ExitParallelRegion();
    }

    void BridgeCurve3D_SetBasisPoints_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void BridgeCurve3D_SetBasisPoints_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    BridgeCurve3D_Inverse_AsyncWorker::BridgeCurve3D_Inverse_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void BridgeCurve3D_Inverse_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Inverse(
        );



        
        ExitParallelRegion();
    }

    void BridgeCurve3D_Inverse_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void BridgeCurve3D_Inverse_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    BridgeCurve3D_GetProjection_AsyncWorker::BridgeCurve3D_GetProjection_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbPlacement3D & place,
                         VERSION  version    )
        :_underlying(_underlying),PromiseWorker(d),
                        place(place)
,
                        version(version)
{};

    void BridgeCurve3D_GetProjection_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbCurve * _result = _underlying->GetProjection(
                        place
,                        version
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void BridgeCurve3D_GetProjection_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void BridgeCurve3D_GetProjection_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    BridgeCurve3D_GetCircleAxis_AsyncWorker::BridgeCurve3D_GetCircleAxis_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void BridgeCurve3D_GetCircleAxis_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbAxis3D *axis = new MbAxis3D;


        
         bool  success = _underlying->GetCircleAxis(
                        *axis
        );


                this->success = success;
                this->axis = axis;

        
        ExitParallelRegion();
    }

    void BridgeCurve3D_GetCircleAxis_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            Napi::Object _toReturn = Napi::Object::New(env);

                 bool  success = this->success;
                    _to = Napi::Boolean::New(env, success);

                _toReturn.Set(Napi::String::New(env, "success"), _to);
                 MbAxis3D * axis = this->axis;
                    if (axis != NULL) {
        _to = Axis3D::NewInstance(env, (MbAxis3D *)axis);
    } else {
        _to = env.Null();
    }

                _toReturn.Set(Napi::String::New(env, "axis"), _to);

            deferred.Resolve(_toReturn);
    }

    void BridgeCurve3D_GetCircleAxis_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    BridgeCurve3D_IsA_AsyncWorker::BridgeCurve3D_IsA_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void BridgeCurve3D_IsA_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeSpaceType  _result = _underlying->IsA(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void BridgeCurve3D_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeSpaceType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void BridgeCurve3D_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    BridgeCurve3D_Type_AsyncWorker::BridgeCurve3D_Type_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void BridgeCurve3D_Type_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeSpaceType  _result = _underlying->Type(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void BridgeCurve3D_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeSpaceType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void BridgeCurve3D_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    BridgeCurve3D_Family_AsyncWorker::BridgeCurve3D_Family_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void BridgeCurve3D_Family_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeSpaceType  _result = _underlying->Family(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void BridgeCurve3D_Family_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeSpaceType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void BridgeCurve3D_Family_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    BridgeCurve3D_Transform_AsyncWorker::BridgeCurve3D_Transform_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbMatrix3D & mat,
                         MbRegTransform * iReg    )
        :_underlying(_underlying),PromiseWorker(d),
                        mat(mat)
,
                        iReg(iReg)
{};

    void BridgeCurve3D_Transform_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Transform(
                        mat
,                        iReg
        );



        
        ExitParallelRegion();
    }

    void BridgeCurve3D_Transform_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void BridgeCurve3D_Transform_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    BridgeCurve3D_Move_AsyncWorker::BridgeCurve3D_Move_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbVector3D & v,
                         MbRegTransform * iReg    )
        :_underlying(_underlying),PromiseWorker(d),
                        v(v)
,
                        iReg(iReg)
{};

    void BridgeCurve3D_Move_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Move(
                        v
,                        iReg
        );



        
        ExitParallelRegion();
    }

    void BridgeCurve3D_Move_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void BridgeCurve3D_Move_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    BridgeCurve3D_Rotate_AsyncWorker::BridgeCurve3D_Rotate_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbAxis3D & axis,
                         double  angle,
                         MbRegTransform * iReg    )
        :_underlying(_underlying),PromiseWorker(d),
                        axis(axis)
,
                        angle(angle)
,
                        iReg(iReg)
{};

    void BridgeCurve3D_Rotate_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Rotate(
                        axis
,                        angle
,                        iReg
        );



        
        ExitParallelRegion();
    }

    void BridgeCurve3D_Rotate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void BridgeCurve3D_Rotate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    BridgeCurve3D_Refresh_AsyncWorker::BridgeCurve3D_Refresh_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void BridgeCurve3D_Refresh_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Refresh(
        );



        
        ExitParallelRegion();
    }

    void BridgeCurve3D_Refresh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void BridgeCurve3D_Refresh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    BridgeCurve3D_Duplicate_AsyncWorker::BridgeCurve3D_Duplicate_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
,
                         MbRegDuplicate * iReg    )
        :_underlying(_underlying),PromiseWorker(d),
                        iReg(iReg)
{};

    void BridgeCurve3D_Duplicate_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbSpaceItem & _result = _underlying->Duplicate(
                        iReg
        );


                this->_result = (MbSpaceItem *)&(_result);

        
        ExitParallelRegion();
    }

    void BridgeCurve3D_Duplicate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbSpaceItem * _result = this->_result;
                _to = SpaceItem::NewInstance(env, (MbSpaceItem *)&(_result));

            deferred.Resolve(_to);
    }

    void BridgeCurve3D_Duplicate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    BridgeCurve3D_AddYourGabaritTo_AsyncWorker::BridgeCurve3D_AddYourGabaritTo_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
,
                         MbCube & cube    )
        :_underlying(_underlying),PromiseWorker(d),
                        cube(cube)
{};

    void BridgeCurve3D_AddYourGabaritTo_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddYourGabaritTo(
                        cube
        );



        
        ExitParallelRegion();
    }

    void BridgeCurve3D_AddYourGabaritTo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void BridgeCurve3D_AddYourGabaritTo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    BridgeCurve3D_GetUseCount_AsyncWorker::BridgeCurve3D_GetUseCount_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void BridgeCurve3D_GetUseCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         refcount_t  _result = _underlying->GetUseCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void BridgeCurve3D_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             refcount_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void BridgeCurve3D_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    BridgeCurve3D_AddRef_AsyncWorker::BridgeCurve3D_AddRef_AsyncWorker(
MbBridgeCurve3D * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void BridgeCurve3D_AddRef_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddRef(
        );



        
        ExitParallelRegion();
    }

    void BridgeCurve3D_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void BridgeCurve3D_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

