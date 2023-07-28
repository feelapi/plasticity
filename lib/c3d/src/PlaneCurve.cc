// This is a generated file, modify: generate/templates/PlaneCurve.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/PlaneCurve.h"

#include "tool_mutex.h"

Napi::Object PlaneCurve::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "PlaneCurve", {
        InstanceMethod<&PlaneCurve::GetPlacement>("GetPlacement"),
        InstanceMethod<&PlaneCurve::GetPlacement_async>("GetPlacement_async"),
        InstanceMethod<&PlaneCurve::Cast>("Cast"),
        InstanceMethod<&PlaneCurve::Cast_async>("Cast_async"),
        InstanceMethod<&PlaneCurve::GetPlaneCurve>("GetPlaneCurve"),
        InstanceMethod<&PlaneCurve::GetPlaneCurve_async>("GetPlaneCurve_async"),
        InstanceMethod<&PlaneCurve::IsPlanar>("IsPlanar"),
        InstanceMethod<&PlaneCurve::IsPlanar_async>("IsPlanar_async"),
        InstanceMethod<&PlaneCurve::IsClosed>("IsClosed"),
        InstanceMethod<&PlaneCurve::IsClosed_async>("IsClosed_async"),
        InstanceMethod<&PlaneCurve::IsTouch>("IsTouch"),
        InstanceMethod<&PlaneCurve::IsTouch_async>("IsTouch_async"),
        InstanceMethod<&PlaneCurve::GetTMax>("GetTMax"),
        InstanceMethod<&PlaneCurve::GetTMax_async>("GetTMax_async"),
        InstanceMethod<&PlaneCurve::GetTMin>("GetTMin"),
        InstanceMethod<&PlaneCurve::GetTMin_async>("GetTMin_async"),
        InstanceMethod<&PlaneCurve::GetPeriod>("GetPeriod"),
        InstanceMethod<&PlaneCurve::GetPeriod_async>("GetPeriod_async"),
        InstanceMethod<&PlaneCurve::IsPeriodic>("IsPeriodic"),
        InstanceMethod<&PlaneCurve::IsPeriodic_async>("IsPeriodic_async"),
        InstanceMethod<&PlaneCurve::IsStraight>("IsStraight"),
        InstanceMethod<&PlaneCurve::IsStraight_async>("IsStraight_async"),
        InstanceMethod<&PlaneCurve::Trimmed>("Trimmed"),
        InstanceMethod<&PlaneCurve::Trimmed_async>("Trimmed_async"),
        InstanceMethod<&PlaneCurve::Normal>("Normal"),
        InstanceMethod<&PlaneCurve::Normal_async>("Normal_async"),
        InstanceMethod<&PlaneCurve::Tangent>("Tangent"),
        InstanceMethod<&PlaneCurve::Tangent_async>("Tangent_async"),
        InstanceMethod<&PlaneCurve::BNormal>("BNormal"),
        InstanceMethod<&PlaneCurve::BNormal_async>("BNormal_async"),
        InstanceMethod<&PlaneCurve::GetCentre>("GetCentre"),
        InstanceMethod<&PlaneCurve::GetCentre_async>("GetCentre_async"),
        InstanceMethod<&PlaneCurve::GetLimitPoint>("GetLimitPoint"),
        InstanceMethod<&PlaneCurve::GetLimitPoint_async>("GetLimitPoint_async"),
        InstanceMethod<&PlaneCurve::PointOn>("PointOn"),
        InstanceMethod<&PlaneCurve::PointOn_async>("PointOn_async"),
        InstanceMethod<&PlaneCurve::_PointOn>("_PointOn"),
        InstanceMethod<&PlaneCurve::_PointOn_async>("_PointOn_async"),
        InstanceMethod<&PlaneCurve::NearPointProjection>("NearPointProjection"),
        InstanceMethod<&PlaneCurve::NearPointProjection_async>("NearPointProjection_async"),
        InstanceMethod<&PlaneCurve::GetSurfaceCurve>("GetSurfaceCurve"),
        InstanceMethod<&PlaneCurve::GetSurfaceCurve_async>("GetSurfaceCurve_async"),
        InstanceMethod<&PlaneCurve::GetWeightCentre>("GetWeightCentre"),
        InstanceMethod<&PlaneCurve::GetWeightCentre_async>("GetWeightCentre_async"),
        InstanceMethod<&PlaneCurve::GetBasisCurve>("GetBasisCurve"),
        InstanceMethod<&PlaneCurve::GetBasisCurve_async>("GetBasisCurve_async"),
        InstanceMethod<&PlaneCurve::GetBasisPoints>("GetBasisPoints"),
        InstanceMethod<&PlaneCurve::GetBasisPoints_async>("GetBasisPoints_async"),
        InstanceMethod<&PlaneCurve::SetBasisPoints>("SetBasisPoints"),
        InstanceMethod<&PlaneCurve::SetBasisPoints_async>("SetBasisPoints_async"),
        InstanceMethod<&PlaneCurve::Inverse>("Inverse"),
        InstanceMethod<&PlaneCurve::Inverse_async>("Inverse_async"),
        InstanceMethod<&PlaneCurve::GetProjection>("GetProjection"),
        InstanceMethod<&PlaneCurve::GetProjection_async>("GetProjection_async"),
        InstanceMethod<&PlaneCurve::GetCircleAxis>("GetCircleAxis"),
        InstanceMethod<&PlaneCurve::GetCircleAxis_async>("GetCircleAxis_async"),
        InstanceMethod<&PlaneCurve::IsA>("IsA"),
        InstanceMethod<&PlaneCurve::IsA_async>("IsA_async"),
        InstanceMethod<&PlaneCurve::Type>("Type"),
        InstanceMethod<&PlaneCurve::Type_async>("Type_async"),
        InstanceMethod<&PlaneCurve::Family>("Family"),
        InstanceMethod<&PlaneCurve::Family_async>("Family_async"),
        InstanceMethod<&PlaneCurve::Transform>("Transform"),
        InstanceMethod<&PlaneCurve::Transform_async>("Transform_async"),
        InstanceMethod<&PlaneCurve::Move>("Move"),
        InstanceMethod<&PlaneCurve::Move_async>("Move_async"),
        InstanceMethod<&PlaneCurve::Rotate>("Rotate"),
        InstanceMethod<&PlaneCurve::Rotate_async>("Rotate_async"),
        InstanceMethod<&PlaneCurve::Refresh>("Refresh"),
        InstanceMethod<&PlaneCurve::Refresh_async>("Refresh_async"),
        InstanceMethod<&PlaneCurve::Duplicate>("Duplicate"),
        InstanceMethod<&PlaneCurve::Duplicate_async>("Duplicate_async"),
        InstanceMethod<&PlaneCurve::AddYourGabaritTo>("AddYourGabaritTo"),
        InstanceMethod<&PlaneCurve::AddYourGabaritTo_async>("AddYourGabaritTo_async"),
        InstanceMethod<&PlaneCurve::GetUseCount>("GetUseCount"),
        InstanceMethod<&PlaneCurve::GetUseCount_async>("GetUseCount_async"),
        InstanceMethod<&PlaneCurve::AddRef>("AddRef"),
        InstanceMethod<&PlaneCurve::AddRef_async>("AddRef_async"),
            InstanceMethod<&PlaneCurve::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("PlaneCurve", func);

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

PlaneCurve::PlaneCurve(const Napi::CallbackInfo& info) : Napi::ObjectWrap<PlaneCurve>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        if (info.Length() == 3&&                ((
                info[0].IsObject() &&
                    info[0].ToObject().InstanceOf(Placement3D::GetConstructor(env))
        )   
)
 &&         ((
                info[1].IsObject() &&
                    info[1].ToObject().InstanceOf(Curve::GetConstructor(env))
        )   
)
 &&         ((
                info[2].IsBoolean()
        )   
)


        ) {
                    if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'placement'").ThrowAsJavaScriptException();
                return;
        }
        const class Placement3D *placement_ = Placement3D::Unwrap(info[0].ToObject());
        
        const MbPlacement3D & placement =*placement_->_underlying;
        

                    if (info[1].IsNull() || info[1].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'init'").ThrowAsJavaScriptException();
                return;
        }
        const class Curve *init_ = Curve::Unwrap(info[1].ToObject());
        
        const MbCurve & init =*init_->_underlying;
        

                 bool same = info[2].ToBoolean();


                MbPlaneCurve *underlying = new MbPlaneCurve(placement,init,same);
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

Napi::Object PlaneCurve::NewInstance(Napi::Env env, MbPlaneCurve *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("PlaneCurve");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    PlaneCurve *unwrapped = PlaneCurve::Unwrap(inst);
underlying->AddRef();    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function PlaneCurve::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("PlaneCurve");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

        Napi::Value PlaneCurve::GetPlacement(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



const MbPlacement3D & _result = _underlying->GetPlacement
(

);



    Napi::Value _to;

            _to = Placement3D::NewInstance(env, new MbPlacement3D(_result));

            return _to;


        }

    Napi::Value PlaneCurve::GetPlacement_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PlaneCurve_GetPlacement_AsyncWorker* asyncWorker = new PlaneCurve_GetPlacement_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }

        Napi::Value PlaneCurve::GetPlaneCurve(const Napi::CallbackInfo& info) {
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

    Napi::Value PlaneCurve::GetPlaneCurve_async(const Napi::CallbackInfo& info) {
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

        PlaneCurve_GetPlaneCurve_AsyncWorker* asyncWorker = new PlaneCurve_GetPlaneCurve_AsyncWorker(
_underlying,            deferred
,
                
                saveParams,
                
                params        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneCurve::IsPlanar(const Napi::CallbackInfo& info) {
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

    Napi::Value PlaneCurve::IsPlanar_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                     double accuracy = info[0].ToNumber().DoubleValue();

        PlaneCurve_IsPlanar_AsyncWorker* asyncWorker = new PlaneCurve_IsPlanar_AsyncWorker(
_underlying,            deferred
,
                
                accuracy        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneCurve::IsClosed(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->IsClosed
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value PlaneCurve::IsClosed_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PlaneCurve_IsClosed_AsyncWorker* asyncWorker = new PlaneCurve_IsClosed_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneCurve::IsTouch(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->IsTouch
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value PlaneCurve::IsTouch_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PlaneCurve_IsTouch_AsyncWorker* asyncWorker = new PlaneCurve_IsTouch_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneCurve::GetTMax(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 double  _result = _underlying->GetTMax
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value PlaneCurve::GetTMax_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PlaneCurve_GetTMax_AsyncWorker* asyncWorker = new PlaneCurve_GetTMax_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneCurve::GetTMin(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 double  _result = _underlying->GetTMin
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value PlaneCurve::GetTMin_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PlaneCurve_GetTMin_AsyncWorker* asyncWorker = new PlaneCurve_GetTMin_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneCurve::GetPeriod(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 double  _result = _underlying->GetPeriod
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value PlaneCurve::GetPeriod_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PlaneCurve_GetPeriod_AsyncWorker* asyncWorker = new PlaneCurve_GetPeriod_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneCurve::IsPeriodic(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->IsPeriodic
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value PlaneCurve::IsPeriodic_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PlaneCurve_IsPeriodic_AsyncWorker* asyncWorker = new PlaneCurve_IsPeriodic_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneCurve::IsStraight(const Napi::CallbackInfo& info) {
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

    Napi::Value PlaneCurve::IsStraight_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                     bool ignoreParams = info[0].ToBoolean();

        PlaneCurve_IsStraight_AsyncWorker* asyncWorker = new PlaneCurve_IsStraight_AsyncWorker(
_underlying,            deferred
,
                
                ignoreParams        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneCurve::Trimmed(const Napi::CallbackInfo& info) {
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

    Napi::Value PlaneCurve::Trimmed_async(const Napi::CallbackInfo& info) {
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

        PlaneCurve_Trimmed_AsyncWorker* asyncWorker = new PlaneCurve_Trimmed_AsyncWorker(
_underlying,            deferred
,
                
                t1,
                
                t2,
                
                sense        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneCurve::Normal(const Napi::CallbackInfo& info) {
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

    Napi::Value PlaneCurve::Normal_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        PlaneCurve_Normal_AsyncWorker* asyncWorker = new PlaneCurve_Normal_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneCurve::Tangent(const Napi::CallbackInfo& info) {
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

    Napi::Value PlaneCurve::Tangent_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        PlaneCurve_Tangent_AsyncWorker* asyncWorker = new PlaneCurve_Tangent_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneCurve::BNormal(const Napi::CallbackInfo& info) {
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

    Napi::Value PlaneCurve::BNormal_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        PlaneCurve_BNormal_AsyncWorker* asyncWorker = new PlaneCurve_BNormal_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneCurve::GetCentre(const Napi::CallbackInfo& info) {
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

    Napi::Value PlaneCurve::GetCentre_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PlaneCurve_GetCentre_AsyncWorker* asyncWorker = new PlaneCurve_GetCentre_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneCurve::GetLimitPoint(const Napi::CallbackInfo& info) {
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

    Napi::Value PlaneCurve::GetLimitPoint_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "ptrdiff_t number is required."));
                    return deferred.Promise();
            }


                     int number = info[0].ToNumber().Int64Value();

        PlaneCurve_GetLimitPoint_AsyncWorker* asyncWorker = new PlaneCurve_GetLimitPoint_AsyncWorker(
_underlying,            deferred
,
                
                number        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneCurve::PointOn(const Napi::CallbackInfo& info) {
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

    Napi::Value PlaneCurve::PointOn_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        PlaneCurve_PointOn_AsyncWorker* asyncWorker = new PlaneCurve_PointOn_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneCurve::_PointOn(const Napi::CallbackInfo& info) {
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

    Napi::Value PlaneCurve::_PointOn_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        PlaneCurve__PointOn_AsyncWorker* asyncWorker = new PlaneCurve__PointOn_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneCurve::NearPointProjection(const Napi::CallbackInfo& info) {
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

    Napi::Value PlaneCurve::NearPointProjection_async(const Napi::CallbackInfo& info) {
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

        PlaneCurve_NearPointProjection_AsyncWorker* asyncWorker = new PlaneCurve_NearPointProjection_AsyncWorker(
_underlying,            deferred
,
                
                pnt,
                
                ext,
                
                tRange        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneCurve::GetSurfaceCurve(const Napi::CallbackInfo& info) {
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

    Napi::Value PlaneCurve::GetSurfaceCurve_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                     int version = info[0].ToNumber().Int64Value();

        PlaneCurve_GetSurfaceCurve_AsyncWorker* asyncWorker = new PlaneCurve_GetSurfaceCurve_AsyncWorker(
_underlying,            deferred
,
                
                version        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneCurve::GetWeightCentre(const Napi::CallbackInfo& info) {
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

    Napi::Value PlaneCurve::GetWeightCentre_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PlaneCurve_GetWeightCentre_AsyncWorker* asyncWorker = new PlaneCurve_GetWeightCentre_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneCurve::GetBasisCurve(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



const MbCurve3D & _result = _underlying->GetBasisCurve
(

);



    Napi::Value _to;

            _to = Curve3D::NewInstance(env, (MbCurve3D *)&(_result));

            return _to;


        }

    Napi::Value PlaneCurve::GetBasisCurve_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PlaneCurve_GetBasisCurve_AsyncWorker* asyncWorker = new PlaneCurve_GetBasisCurve_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneCurve::GetBasisPoints(const Napi::CallbackInfo& info) {
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

    Napi::Value PlaneCurve::GetBasisPoints_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PlaneCurve_GetBasisPoints_AsyncWorker* asyncWorker = new PlaneCurve_GetBasisPoints_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneCurve::SetBasisPoints(const Napi::CallbackInfo& info) {
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

    Napi::Value PlaneCurve::SetBasisPoints_async(const Napi::CallbackInfo& info) {
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
        

        PlaneCurve_SetBasisPoints_AsyncWorker* asyncWorker = new PlaneCurve_SetBasisPoints_AsyncWorker(
_underlying,            deferred
,
                
                cd        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneCurve::Inverse(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->Inverse
(

);



    return env.Undefined();


        }

    Napi::Value PlaneCurve::Inverse_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PlaneCurve_Inverse_AsyncWorker* asyncWorker = new PlaneCurve_Inverse_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneCurve::GetProjection(const Napi::CallbackInfo& info) {
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

    Napi::Value PlaneCurve::GetProjection_async(const Napi::CallbackInfo& info) {
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

        PlaneCurve_GetProjection_AsyncWorker* asyncWorker = new PlaneCurve_GetProjection_AsyncWorker(
_underlying,            deferred
,
                
                place,
                
                version        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneCurve::GetCircleAxis(const Napi::CallbackInfo& info) {
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

    Napi::Value PlaneCurve::GetCircleAxis_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PlaneCurve_GetCircleAxis_AsyncWorker* asyncWorker = new PlaneCurve_GetCircleAxis_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneCurve::IsA(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeSpaceType  _result = _underlying->IsA
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value PlaneCurve::IsA_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PlaneCurve_IsA_AsyncWorker* asyncWorker = new PlaneCurve_IsA_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneCurve::Type(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeSpaceType  _result = _underlying->Type
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value PlaneCurve::Type_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PlaneCurve_Type_AsyncWorker* asyncWorker = new PlaneCurve_Type_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneCurve::Family(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeSpaceType  _result = _underlying->Family
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value PlaneCurve::Family_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PlaneCurve_Family_AsyncWorker* asyncWorker = new PlaneCurve_Family_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneCurve::Transform(const Napi::CallbackInfo& info) {
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

    Napi::Value PlaneCurve::Transform_async(const Napi::CallbackInfo& info) {
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

        PlaneCurve_Transform_AsyncWorker* asyncWorker = new PlaneCurve_Transform_AsyncWorker(
_underlying,            deferred
,
                
                mat,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneCurve::Move(const Napi::CallbackInfo& info) {
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

    Napi::Value PlaneCurve::Move_async(const Napi::CallbackInfo& info) {
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

        PlaneCurve_Move_AsyncWorker* asyncWorker = new PlaneCurve_Move_AsyncWorker(
_underlying,            deferred
,
                
                v,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneCurve::Rotate(const Napi::CallbackInfo& info) {
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

    Napi::Value PlaneCurve::Rotate_async(const Napi::CallbackInfo& info) {
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

        PlaneCurve_Rotate_AsyncWorker* asyncWorker = new PlaneCurve_Rotate_AsyncWorker(
_underlying,            deferred
,
                
                axis,
                
                angle,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneCurve::Refresh(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->Refresh
(

);



    return env.Undefined();


        }

    Napi::Value PlaneCurve::Refresh_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PlaneCurve_Refresh_AsyncWorker* asyncWorker = new PlaneCurve_Refresh_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneCurve::Duplicate(const Napi::CallbackInfo& info) {
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

    Napi::Value PlaneCurve::Duplicate_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                            MbRegDuplicate * iReg = NULL;
        if (!(info[0].IsNull() || info[0].IsUndefined())) {
            RegDuplicate *iReg_ = RegDuplicate::Unwrap(info[0].ToObject());
                iReg =   iReg_->_underlying;
        }

        PlaneCurve_Duplicate_AsyncWorker* asyncWorker = new PlaneCurve_Duplicate_AsyncWorker(
_underlying,            deferred
,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneCurve::AddYourGabaritTo(const Napi::CallbackInfo& info) {
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

    Napi::Value PlaneCurve::AddYourGabaritTo_async(const Napi::CallbackInfo& info) {
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
        

        PlaneCurve_AddYourGabaritTo_AsyncWorker* asyncWorker = new PlaneCurve_AddYourGabaritTo_AsyncWorker(
_underlying,            deferred
,
                
                cube        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneCurve::GetUseCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 refcount_t  _result = _underlying->GetUseCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value PlaneCurve::GetUseCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PlaneCurve_GetUseCount_AsyncWorker* asyncWorker = new PlaneCurve_GetUseCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneCurve::AddRef(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->AddRef
(

);



    return env.Undefined();


        }

    Napi::Value PlaneCurve::AddRef_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PlaneCurve_AddRef_AsyncWorker* asyncWorker = new PlaneCurve_AddRef_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }



    Napi::Value PlaneCurve::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }

PlaneCurve::~PlaneCurve() {
    // std::cout << "calling ::DeleteItem on PlaneCurve for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

    PlaneCurve_GetPlacement_AsyncWorker::PlaneCurve_GetPlacement_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PlaneCurve_GetPlacement_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        const MbPlacement3D & _result = _underlying->GetPlacement(
        );


                        this->_result = new (MbPlacement3D)(_result);

        
        ExitParallelRegion();
    }

    void PlaneCurve_GetPlacement_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            const MbPlacement3D * _result = this->_result;
                _to = Placement3D::NewInstance(env, (MbPlacement3D *)&(_result));

            deferred.Resolve(_to);
    }

    void PlaneCurve_GetPlacement_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve_GetPlaneCurve_AsyncWorker::PlaneCurve_GetPlaneCurve_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
,
                         bool  saveParams,
                         PlanarCheckParams  params    )
        :_underlying(_underlying),PromiseWorker(d),
                        saveParams(saveParams)
,
                        params(params)
{};

    void PlaneCurve_GetPlaneCurve_AsyncWorker::Execute() {
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

    void PlaneCurve_GetPlaneCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void PlaneCurve_GetPlaneCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve_IsPlanar_AsyncWorker::PlaneCurve_IsPlanar_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
,
                         double  accuracy    )
        :_underlying(_underlying),PromiseWorker(d),
                        accuracy(accuracy)
{};

    void PlaneCurve_IsPlanar_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsPlanar(
                        accuracy
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PlaneCurve_IsPlanar_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void PlaneCurve_IsPlanar_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve_IsClosed_AsyncWorker::PlaneCurve_IsClosed_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PlaneCurve_IsClosed_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsClosed(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PlaneCurve_IsClosed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void PlaneCurve_IsClosed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve_IsTouch_AsyncWorker::PlaneCurve_IsTouch_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PlaneCurve_IsTouch_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsTouch(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PlaneCurve_IsTouch_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void PlaneCurve_IsTouch_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve_GetTMax_AsyncWorker::PlaneCurve_GetTMax_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PlaneCurve_GetTMax_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetTMax(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PlaneCurve_GetTMax_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void PlaneCurve_GetTMax_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve_GetTMin_AsyncWorker::PlaneCurve_GetTMin_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PlaneCurve_GetTMin_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetTMin(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PlaneCurve_GetTMin_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void PlaneCurve_GetTMin_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve_GetPeriod_AsyncWorker::PlaneCurve_GetPeriod_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PlaneCurve_GetPeriod_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetPeriod(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PlaneCurve_GetPeriod_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void PlaneCurve_GetPeriod_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve_IsPeriodic_AsyncWorker::PlaneCurve_IsPeriodic_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PlaneCurve_IsPeriodic_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsPeriodic(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PlaneCurve_IsPeriodic_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void PlaneCurve_IsPeriodic_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve_IsStraight_AsyncWorker::PlaneCurve_IsStraight_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
,
                         bool  ignoreParams    )
        :_underlying(_underlying),PromiseWorker(d),
                        ignoreParams(ignoreParams)
{};

    void PlaneCurve_IsStraight_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsStraight(
                        ignoreParams
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PlaneCurve_IsStraight_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void PlaneCurve_IsStraight_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve_Trimmed_AsyncWorker::PlaneCurve_Trimmed_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
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

    void PlaneCurve_Trimmed_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbCurve3D * _result = _underlying->Trimmed(
                        t1
,                        t2
,                        sense
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PlaneCurve_Trimmed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void PlaneCurve_Trimmed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve_Normal_AsyncWorker::PlaneCurve_Normal_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void PlaneCurve_Normal_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector3D *n = new MbVector3D;


        
        _underlying->Normal(
                        t
,                        *n
        );


                this->n = n;

        
        ExitParallelRegion();
    }

    void PlaneCurve_Normal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void PlaneCurve_Normal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve_Tangent_AsyncWorker::PlaneCurve_Tangent_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void PlaneCurve_Tangent_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector3D *tan = new MbVector3D;


        
        _underlying->Tangent(
                        t
,                        *tan
        );


                this->tan = tan;

        
        ExitParallelRegion();
    }

    void PlaneCurve_Tangent_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void PlaneCurve_Tangent_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve_BNormal_AsyncWorker::PlaneCurve_BNormal_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void PlaneCurve_BNormal_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector3D *b = new MbVector3D;


        
        _underlying->BNormal(
                        t
,                        *b
        );


                this->b = b;

        
        ExitParallelRegion();
    }

    void PlaneCurve_BNormal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void PlaneCurve_BNormal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve_GetCentre_AsyncWorker::PlaneCurve_GetCentre_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PlaneCurve_GetCentre_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbCartPoint3D *c = new MbCartPoint3D;


        
        _underlying->GetCentre(
                        *c
        );


                this->c = c;

        
        ExitParallelRegion();
    }

    void PlaneCurve_GetCentre_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void PlaneCurve_GetCentre_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve_GetLimitPoint_AsyncWorker::PlaneCurve_GetLimitPoint_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
,
                         ptrdiff_t  number    )
        :_underlying(_underlying),PromiseWorker(d),
                        number(number)
{};

    void PlaneCurve_GetLimitPoint_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbCartPoint3D *point = new MbCartPoint3D;


        
        _underlying->GetLimitPoint(
                        number
,                        *point
        );


                this->point = point;

        
        ExitParallelRegion();
    }

    void PlaneCurve_GetLimitPoint_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void PlaneCurve_GetLimitPoint_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve_PointOn_AsyncWorker::PlaneCurve_PointOn_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void PlaneCurve_PointOn_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbCartPoint3D *p = new MbCartPoint3D;


        
        _underlying->PointOn(
                        t
,                        *p
        );


                this->p = p;

        
        ExitParallelRegion();
    }

    void PlaneCurve_PointOn_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void PlaneCurve_PointOn_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve__PointOn_AsyncWorker::PlaneCurve__PointOn_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
,
                         double & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void PlaneCurve__PointOn_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbCartPoint3D *p = new MbCartPoint3D;


        
        _underlying->_PointOn(
                        t
,                        *p
        );


                this->p = p;

        
        ExitParallelRegion();
    }

    void PlaneCurve__PointOn_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void PlaneCurve__PointOn_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve_NearPointProjection_AsyncWorker::PlaneCurve_NearPointProjection_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
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

    void PlaneCurve_NearPointProjection_AsyncWorker::Execute() {
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

    void PlaneCurve_NearPointProjection_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void PlaneCurve_NearPointProjection_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve_GetSurfaceCurve_AsyncWorker::PlaneCurve_GetSurfaceCurve_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
,
                         VERSION  version    )
        :_underlying(_underlying),PromiseWorker(d),
                        version(version)
{};

    void PlaneCurve_GetSurfaceCurve_AsyncWorker::Execute() {
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

    void PlaneCurve_GetSurfaceCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void PlaneCurve_GetSurfaceCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve_GetWeightCentre_AsyncWorker::PlaneCurve_GetWeightCentre_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PlaneCurve_GetWeightCentre_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbCartPoint3D *point = new MbCartPoint3D;


        
        _underlying->GetWeightCentre(
                        *point
        );


                this->point = point;

        
        ExitParallelRegion();
    }

    void PlaneCurve_GetWeightCentre_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void PlaneCurve_GetWeightCentre_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve_GetBasisCurve_AsyncWorker::PlaneCurve_GetBasisCurve_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PlaneCurve_GetBasisCurve_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        const MbCurve3D & _result = _underlying->GetBasisCurve(
        );


                this->_result = (MbCurve3D *)&(_result);

        
        ExitParallelRegion();
    }

    void PlaneCurve_GetBasisCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            const MbCurve3D * _result = this->_result;
                _to = Curve3D::NewInstance(env, (MbCurve3D *)&(_result));

            deferred.Resolve(_to);
    }

    void PlaneCurve_GetBasisCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve_GetBasisPoints_AsyncWorker::PlaneCurve_GetBasisPoints_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PlaneCurve_GetBasisPoints_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbControlData3D *cd = new MbControlData3D;


        
        _underlying->GetBasisPoints(
                        *cd
        );


                this->cd = cd;

        
        ExitParallelRegion();
    }

    void PlaneCurve_GetBasisPoints_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void PlaneCurve_GetBasisPoints_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve_SetBasisPoints_AsyncWorker::PlaneCurve_SetBasisPoints_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbControlData3D & cd    )
        :_underlying(_underlying),PromiseWorker(d),
                        cd(cd)
{};

    void PlaneCurve_SetBasisPoints_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetBasisPoints(
                        cd
        );



        
        ExitParallelRegion();
    }

    void PlaneCurve_SetBasisPoints_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void PlaneCurve_SetBasisPoints_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve_Inverse_AsyncWorker::PlaneCurve_Inverse_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PlaneCurve_Inverse_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Inverse(
        );



        
        ExitParallelRegion();
    }

    void PlaneCurve_Inverse_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void PlaneCurve_Inverse_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve_GetProjection_AsyncWorker::PlaneCurve_GetProjection_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbPlacement3D & place,
                         VERSION  version    )
        :_underlying(_underlying),PromiseWorker(d),
                        place(place)
,
                        version(version)
{};

    void PlaneCurve_GetProjection_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbCurve * _result = _underlying->GetProjection(
                        place
,                        version
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PlaneCurve_GetProjection_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void PlaneCurve_GetProjection_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve_GetCircleAxis_AsyncWorker::PlaneCurve_GetCircleAxis_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PlaneCurve_GetCircleAxis_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbAxis3D *axis = new MbAxis3D;


        
         bool  success = _underlying->GetCircleAxis(
                        *axis
        );


                this->success = success;
                this->axis = axis;

        
        ExitParallelRegion();
    }

    void PlaneCurve_GetCircleAxis_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void PlaneCurve_GetCircleAxis_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve_IsA_AsyncWorker::PlaneCurve_IsA_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PlaneCurve_IsA_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeSpaceType  _result = _underlying->IsA(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PlaneCurve_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeSpaceType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void PlaneCurve_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve_Type_AsyncWorker::PlaneCurve_Type_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PlaneCurve_Type_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeSpaceType  _result = _underlying->Type(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PlaneCurve_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeSpaceType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void PlaneCurve_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve_Family_AsyncWorker::PlaneCurve_Family_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PlaneCurve_Family_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeSpaceType  _result = _underlying->Family(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PlaneCurve_Family_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeSpaceType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void PlaneCurve_Family_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve_Transform_AsyncWorker::PlaneCurve_Transform_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbMatrix3D & mat,
                         MbRegTransform * iReg    )
        :_underlying(_underlying),PromiseWorker(d),
                        mat(mat)
,
                        iReg(iReg)
{};

    void PlaneCurve_Transform_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Transform(
                        mat
,                        iReg
        );



        
        ExitParallelRegion();
    }

    void PlaneCurve_Transform_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void PlaneCurve_Transform_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve_Move_AsyncWorker::PlaneCurve_Move_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbVector3D & v,
                         MbRegTransform * iReg    )
        :_underlying(_underlying),PromiseWorker(d),
                        v(v)
,
                        iReg(iReg)
{};

    void PlaneCurve_Move_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Move(
                        v
,                        iReg
        );



        
        ExitParallelRegion();
    }

    void PlaneCurve_Move_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void PlaneCurve_Move_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve_Rotate_AsyncWorker::PlaneCurve_Rotate_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
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

    void PlaneCurve_Rotate_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Rotate(
                        axis
,                        angle
,                        iReg
        );



        
        ExitParallelRegion();
    }

    void PlaneCurve_Rotate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void PlaneCurve_Rotate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve_Refresh_AsyncWorker::PlaneCurve_Refresh_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PlaneCurve_Refresh_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Refresh(
        );



        
        ExitParallelRegion();
    }

    void PlaneCurve_Refresh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void PlaneCurve_Refresh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve_Duplicate_AsyncWorker::PlaneCurve_Duplicate_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
,
                         MbRegDuplicate * iReg    )
        :_underlying(_underlying),PromiseWorker(d),
                        iReg(iReg)
{};

    void PlaneCurve_Duplicate_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbSpaceItem & _result = _underlying->Duplicate(
                        iReg
        );


                this->_result = (MbSpaceItem *)&(_result);

        
        ExitParallelRegion();
    }

    void PlaneCurve_Duplicate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbSpaceItem * _result = this->_result;
                _to = SpaceItem::NewInstance(env, (MbSpaceItem *)&(_result));

            deferred.Resolve(_to);
    }

    void PlaneCurve_Duplicate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve_AddYourGabaritTo_AsyncWorker::PlaneCurve_AddYourGabaritTo_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
,
                         MbCube & cube    )
        :_underlying(_underlying),PromiseWorker(d),
                        cube(cube)
{};

    void PlaneCurve_AddYourGabaritTo_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddYourGabaritTo(
                        cube
        );



        
        ExitParallelRegion();
    }

    void PlaneCurve_AddYourGabaritTo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void PlaneCurve_AddYourGabaritTo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve_GetUseCount_AsyncWorker::PlaneCurve_GetUseCount_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PlaneCurve_GetUseCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         refcount_t  _result = _underlying->GetUseCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PlaneCurve_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             refcount_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void PlaneCurve_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneCurve_AddRef_AsyncWorker::PlaneCurve_AddRef_AsyncWorker(
MbPlaneCurve * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PlaneCurve_AddRef_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddRef(
        );



        
        ExitParallelRegion();
    }

    void PlaneCurve_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void PlaneCurve_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

