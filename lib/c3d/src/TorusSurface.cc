// This is a generated file, modify: generate/templates/TorusSurface.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/TorusSurface.h"

#include "tool_mutex.h"

Napi::Object TorusSurface::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "TorusSurface", {
        InstanceMethod<&TorusSurface::GetMajorRadius>("GetMajorRadius"),
        InstanceMethod<&TorusSurface::GetMajorRadius_async>("GetMajorRadius_async"),
        InstanceMethod<&TorusSurface::GetMinorRadius>("GetMinorRadius"),
        InstanceMethod<&TorusSurface::GetMinorRadius_async>("GetMinorRadius_async"),
        InstanceMethod<&TorusSurface::GetSurface>("GetSurface"),
        InstanceMethod<&TorusSurface::GetSurface_async>("GetSurface_async"),
        InstanceMethod<&TorusSurface::GetUEpsilon>("GetUEpsilon"),
        InstanceMethod<&TorusSurface::GetUEpsilon_async>("GetUEpsilon_async"),
        InstanceMethod<&TorusSurface::GetVEpsilon>("GetVEpsilon"),
        InstanceMethod<&TorusSurface::GetVEpsilon_async>("GetVEpsilon_async"),
        InstanceMethod<&TorusSurface::GetUMid>("GetUMid"),
        InstanceMethod<&TorusSurface::GetUMid_async>("GetUMid_async"),
        InstanceMethod<&TorusSurface::GetVMid>("GetVMid"),
        InstanceMethod<&TorusSurface::GetVMid_async>("GetVMid_async"),
        InstanceMethod<&TorusSurface::GetUMin>("GetUMin"),
        InstanceMethod<&TorusSurface::GetUMin_async>("GetUMin_async"),
        InstanceMethod<&TorusSurface::GetUMax>("GetUMax"),
        InstanceMethod<&TorusSurface::GetUMax_async>("GetUMax_async"),
        InstanceMethod<&TorusSurface::GetVMin>("GetVMin"),
        InstanceMethod<&TorusSurface::GetVMin_async>("GetVMin_async"),
        InstanceMethod<&TorusSurface::GetVMax>("GetVMax"),
        InstanceMethod<&TorusSurface::GetVMax_async>("GetVMax_async"),
        InstanceMethod<&TorusSurface::GetUParamToUnit>("GetUParamToUnit"),
        InstanceMethod<&TorusSurface::GetUParamToUnit_async>("GetUParamToUnit_async"),
        InstanceMethod<&TorusSurface::GetVParamToUnit>("GetVParamToUnit"),
        InstanceMethod<&TorusSurface::GetVParamToUnit_async>("GetVParamToUnit_async"),
        InstanceMethod<&TorusSurface::GetRadius>("GetRadius"),
        InstanceMethod<&TorusSurface::GetRadius_async>("GetRadius_async"),
        InstanceMethod<&TorusSurface::Normal>("Normal"),
        InstanceMethod<&TorusSurface::Normal_async>("Normal_async"),
        InstanceMethod<&TorusSurface::NearDirectPointProjection>("NearDirectPointProjection"),
        InstanceMethod<&TorusSurface::NearDirectPointProjection_async>("NearDirectPointProjection_async"),
        InstanceMethod<&TorusSurface::IsA>("IsA"),
        InstanceMethod<&TorusSurface::IsA_async>("IsA_async"),
        InstanceMethod<&TorusSurface::Type>("Type"),
        InstanceMethod<&TorusSurface::Type_async>("Type_async"),
        InstanceMethod<&TorusSurface::Family>("Family"),
        InstanceMethod<&TorusSurface::Family_async>("Family_async"),
        InstanceMethod<&TorusSurface::Transform>("Transform"),
        InstanceMethod<&TorusSurface::Transform_async>("Transform_async"),
        InstanceMethod<&TorusSurface::Move>("Move"),
        InstanceMethod<&TorusSurface::Move_async>("Move_async"),
        InstanceMethod<&TorusSurface::Rotate>("Rotate"),
        InstanceMethod<&TorusSurface::Rotate_async>("Rotate_async"),
        InstanceMethod<&TorusSurface::Refresh>("Refresh"),
        InstanceMethod<&TorusSurface::Refresh_async>("Refresh_async"),
        InstanceMethod<&TorusSurface::Duplicate>("Duplicate"),
        InstanceMethod<&TorusSurface::Duplicate_async>("Duplicate_async"),
        InstanceMethod<&TorusSurface::AddYourGabaritTo>("AddYourGabaritTo"),
        InstanceMethod<&TorusSurface::AddYourGabaritTo_async>("AddYourGabaritTo_async"),
        InstanceMethod<&TorusSurface::GetUseCount>("GetUseCount"),
        InstanceMethod<&TorusSurface::GetUseCount_async>("GetUseCount_async"),
        InstanceMethod<&TorusSurface::AddRef>("AddRef"),
        InstanceMethod<&TorusSurface::AddRef_async>("AddRef_async"),
            InstanceMethod<&TorusSurface::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("TorusSurface", func);

    Napi::Object global = env.Global();
    Napi::Object Object = global.Get("Object").ToObject();
    Napi::Function setPrototypeOf = Napi::Function(env, Object.Get("setPrototypeOf"));
    Napi::Value prototype = func.Get("prototype");

    Napi::Function superFunc = ElementarySurface::GetConstructor(env);
    Napi::FunctionReference* superConstructor = new Napi::FunctionReference();
    *superConstructor = Napi::Persistent(superFunc);

    Napi::Value superPrototype = superFunc.Get("prototype");
    setPrototypeOf.Call({prototype, superPrototype});
    setPrototypeOf.Call({func, superFunc});

    return exports;
}

TorusSurface::TorusSurface(const Napi::CallbackInfo& info) : Napi::ObjectWrap<TorusSurface>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        Napi::Error::New(env, "TorusSurface cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object TorusSurface::NewInstance(Napi::Env env, MbTorusSurface *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("TorusSurface");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    TorusSurface *unwrapped = TorusSurface::Unwrap(inst);
underlying->AddRef();    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function TorusSurface::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("TorusSurface");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

        Napi::Value TorusSurface::GetMajorRadius(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 double  _result = _underlying->GetMajorRadius
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value TorusSurface::GetMajorRadius_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        TorusSurface_GetMajorRadius_AsyncWorker* asyncWorker = new TorusSurface_GetMajorRadius_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value TorusSurface::GetMinorRadius(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 double  _result = _underlying->GetMinorRadius
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value TorusSurface::GetMinorRadius_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        TorusSurface_GetMinorRadius_AsyncWorker* asyncWorker = new TorusSurface_GetMinorRadius_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value TorusSurface::GetSurface(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



const MbSurface & _result = _underlying->GetSurface
(

);



    Napi::Value _to;

            _to = Surface::NewInstance(env, (MbSurface *)&(_result));

            return _to;


        }

    Napi::Value TorusSurface::GetSurface_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        TorusSurface_GetSurface_AsyncWorker* asyncWorker = new TorusSurface_GetSurface_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value TorusSurface::GetUEpsilon(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 double  _result = _underlying->GetUEpsilon
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value TorusSurface::GetUEpsilon_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        TorusSurface_GetUEpsilon_AsyncWorker* asyncWorker = new TorusSurface_GetUEpsilon_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value TorusSurface::GetVEpsilon(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 double  _result = _underlying->GetVEpsilon
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value TorusSurface::GetVEpsilon_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        TorusSurface_GetVEpsilon_AsyncWorker* asyncWorker = new TorusSurface_GetVEpsilon_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value TorusSurface::GetUMid(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 double  _result = _underlying->GetUMid
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value TorusSurface::GetUMid_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        TorusSurface_GetUMid_AsyncWorker* asyncWorker = new TorusSurface_GetUMid_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value TorusSurface::GetVMid(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 double  _result = _underlying->GetVMid
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value TorusSurface::GetVMid_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        TorusSurface_GetVMid_AsyncWorker* asyncWorker = new TorusSurface_GetVMid_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value TorusSurface::GetUMin(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 double  _result = _underlying->GetUMin
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value TorusSurface::GetUMin_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        TorusSurface_GetUMin_AsyncWorker* asyncWorker = new TorusSurface_GetUMin_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value TorusSurface::GetUMax(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 double  _result = _underlying->GetUMax
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value TorusSurface::GetUMax_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        TorusSurface_GetUMax_AsyncWorker* asyncWorker = new TorusSurface_GetUMax_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value TorusSurface::GetVMin(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 double  _result = _underlying->GetVMin
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value TorusSurface::GetVMin_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        TorusSurface_GetVMin_AsyncWorker* asyncWorker = new TorusSurface_GetVMin_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value TorusSurface::GetVMax(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 double  _result = _underlying->GetVMax
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value TorusSurface::GetVMax_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        TorusSurface_GetVMax_AsyncWorker* asyncWorker = new TorusSurface_GetVMax_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value TorusSurface::GetUParamToUnit(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 double  _result = _underlying->GetUParamToUnit
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value TorusSurface::GetUParamToUnit_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        TorusSurface_GetUParamToUnit_AsyncWorker* asyncWorker = new TorusSurface_GetUParamToUnit_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value TorusSurface::GetVParamToUnit(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 double  _result = _underlying->GetVParamToUnit
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value TorusSurface::GetVParamToUnit_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        TorusSurface_GetVParamToUnit_AsyncWorker* asyncWorker = new TorusSurface_GetVParamToUnit_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value TorusSurface::GetRadius(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 double  _result = _underlying->GetRadius
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value TorusSurface::GetRadius_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        TorusSurface_GetRadius_AsyncWorker* asyncWorker = new TorusSurface_GetRadius_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value TorusSurface::Normal(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number u is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    Napi::Error::New(env, "number v is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    MbVector3D *result = new MbVector3D;


             double u = info[0].ToNumber().DoubleValue();

             double v = info[1].ToNumber().DoubleValue();



_underlying->Normal
(
        u
,        v
,        *result

);



    Napi::Value _to;

            if (result != NULL) {
        _to = Vector3D::NewInstance(env, (MbVector3D *)result);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value TorusSurface::Normal_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number u is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number v is required."));
                    return deferred.Promise();
            }


                     double u = info[0].ToNumber().DoubleValue();

                     double v = info[1].ToNumber().DoubleValue();

        TorusSurface_Normal_AsyncWorker* asyncWorker = new TorusSurface_Normal_AsyncWorker(
_underlying,            deferred
,
                
                u,
                
                v        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value TorusSurface::NearDirectPointProjection(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "CartPoint3D pnt is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(Vector3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Vector3D vect is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 2 || !(
              info[2].IsBoolean()
)) {
                    Napi::Error::New(env, "boolean ext is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    double u;
        double v;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'pnt'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class CartPoint3D *pnt_ = CartPoint3D::Unwrap(info[0].ToObject());
        
        const MbCartPoint3D & pnt =*pnt_->_underlying;
        

                if (info[1].IsNull() || info[1].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'vect'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Vector3D *vect_ = Vector3D::Unwrap(info[1].ToObject());
        
        const MbVector3D & vect =*vect_->_underlying;
        

             bool ext = info[2].ToBoolean();

                    MbRect2D * uvRange = NULL;
        if (!(info[3].IsNull() || info[3].IsUndefined())) {
            Rect2D *uvRange_ = Rect2D::Unwrap(info[3].ToObject());
                uvRange =   uvRange_->_underlying;
        }

             bool onlyPositiveDirection = info[4].ToBoolean();



 bool  _result = _underlying->NearDirectPointProjection
(
        pnt
,        vect
,        u
,        v
,        ext
,        info.Length() == 3 || info[3].IsNull() ? nullptr : uvRange
,        info.Length() == 4 || info[4].IsNull() ? false : onlyPositiveDirection

);


if (_result) {

        Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

            _to = Napi::Number::New(env, u);

        _toReturn.Set(Napi::String::New(env, "u"), _to);
            _to = Napi::Number::New(env, v);

        _toReturn.Set(Napi::String::New(env, "v"), _to);
            return _toReturn;

} else {
    std::ostringstream msg;
    msg << "Operation NearDirectPointProjection failed";
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value TorusSurface::NearDirectPointProjection_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "CartPoint3D pnt is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(Vector3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Vector3D vect is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 2 || !(
              info[2].IsBoolean()
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
        

                        if (info[1].IsNull() || info[1].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'vect'"));
                return deferred.Promise();
        }
        const class Vector3D *vect_ = Vector3D::Unwrap(info[1].ToObject());
        
        const MbVector3D & vect =*vect_->_underlying;
        

                     bool ext = info[2].ToBoolean();

                            MbRect2D * uvRange = NULL;
        if (!(info[3].IsNull() || info[3].IsUndefined())) {
            Rect2D *uvRange_ = Rect2D::Unwrap(info[3].ToObject());
                uvRange =   uvRange_->_underlying;
        }

                     bool onlyPositiveDirection = info[4].ToBoolean();

        TorusSurface_NearDirectPointProjection_AsyncWorker* asyncWorker = new TorusSurface_NearDirectPointProjection_AsyncWorker(
_underlying,            deferred
,
                
                pnt,
                
                vect,
                
                ext,
                
                uvRange,
                
                onlyPositiveDirection        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value TorusSurface::IsA(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeSpaceType  _result = _underlying->IsA
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value TorusSurface::IsA_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        TorusSurface_IsA_AsyncWorker* asyncWorker = new TorusSurface_IsA_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value TorusSurface::Type(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeSpaceType  _result = _underlying->Type
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value TorusSurface::Type_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        TorusSurface_Type_AsyncWorker* asyncWorker = new TorusSurface_Type_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value TorusSurface::Family(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeSpaceType  _result = _underlying->Family
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value TorusSurface::Family_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        TorusSurface_Family_AsyncWorker* asyncWorker = new TorusSurface_Family_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value TorusSurface::Transform(const Napi::CallbackInfo& info) {
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

    Napi::Value TorusSurface::Transform_async(const Napi::CallbackInfo& info) {
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

        TorusSurface_Transform_AsyncWorker* asyncWorker = new TorusSurface_Transform_AsyncWorker(
_underlying,            deferred
,
                
                mat,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value TorusSurface::Move(const Napi::CallbackInfo& info) {
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

    Napi::Value TorusSurface::Move_async(const Napi::CallbackInfo& info) {
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

        TorusSurface_Move_AsyncWorker* asyncWorker = new TorusSurface_Move_AsyncWorker(
_underlying,            deferred
,
                
                v,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value TorusSurface::Rotate(const Napi::CallbackInfo& info) {
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

    Napi::Value TorusSurface::Rotate_async(const Napi::CallbackInfo& info) {
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

        TorusSurface_Rotate_AsyncWorker* asyncWorker = new TorusSurface_Rotate_AsyncWorker(
_underlying,            deferred
,
                
                axis,
                
                angle,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value TorusSurface::Refresh(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->Refresh
(

);



    return env.Undefined();


        }

    Napi::Value TorusSurface::Refresh_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        TorusSurface_Refresh_AsyncWorker* asyncWorker = new TorusSurface_Refresh_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value TorusSurface::Duplicate(const Napi::CallbackInfo& info) {
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

    Napi::Value TorusSurface::Duplicate_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                            MbRegDuplicate * iReg = NULL;
        if (!(info[0].IsNull() || info[0].IsUndefined())) {
            RegDuplicate *iReg_ = RegDuplicate::Unwrap(info[0].ToObject());
                iReg =   iReg_->_underlying;
        }

        TorusSurface_Duplicate_AsyncWorker* asyncWorker = new TorusSurface_Duplicate_AsyncWorker(
_underlying,            deferred
,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value TorusSurface::AddYourGabaritTo(const Napi::CallbackInfo& info) {
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

    Napi::Value TorusSurface::AddYourGabaritTo_async(const Napi::CallbackInfo& info) {
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
        

        TorusSurface_AddYourGabaritTo_AsyncWorker* asyncWorker = new TorusSurface_AddYourGabaritTo_AsyncWorker(
_underlying,            deferred
,
                
                cube        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value TorusSurface::GetUseCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 refcount_t  _result = _underlying->GetUseCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value TorusSurface::GetUseCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        TorusSurface_GetUseCount_AsyncWorker* asyncWorker = new TorusSurface_GetUseCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value TorusSurface::AddRef(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->AddRef
(

);



    return env.Undefined();


        }

    Napi::Value TorusSurface::AddRef_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        TorusSurface_AddRef_AsyncWorker* asyncWorker = new TorusSurface_AddRef_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }



    Napi::Value TorusSurface::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }

TorusSurface::~TorusSurface() {
    // std::cout << "calling ::DeleteItem on TorusSurface for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

    TorusSurface_GetMajorRadius_AsyncWorker::TorusSurface_GetMajorRadius_AsyncWorker(
MbTorusSurface * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void TorusSurface_GetMajorRadius_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetMajorRadius(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void TorusSurface_GetMajorRadius_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void TorusSurface_GetMajorRadius_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    TorusSurface_GetMinorRadius_AsyncWorker::TorusSurface_GetMinorRadius_AsyncWorker(
MbTorusSurface * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void TorusSurface_GetMinorRadius_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetMinorRadius(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void TorusSurface_GetMinorRadius_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void TorusSurface_GetMinorRadius_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    TorusSurface_GetSurface_AsyncWorker::TorusSurface_GetSurface_AsyncWorker(
MbTorusSurface * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void TorusSurface_GetSurface_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        const MbSurface & _result = _underlying->GetSurface(
        );


                this->_result = (MbSurface *)&(_result);

        
        ExitParallelRegion();
    }

    void TorusSurface_GetSurface_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            const MbSurface * _result = this->_result;
                _to = Surface::NewInstance(env, (MbSurface *)&(_result));

            deferred.Resolve(_to);
    }

    void TorusSurface_GetSurface_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    TorusSurface_GetUEpsilon_AsyncWorker::TorusSurface_GetUEpsilon_AsyncWorker(
MbTorusSurface * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void TorusSurface_GetUEpsilon_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetUEpsilon(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void TorusSurface_GetUEpsilon_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void TorusSurface_GetUEpsilon_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    TorusSurface_GetVEpsilon_AsyncWorker::TorusSurface_GetVEpsilon_AsyncWorker(
MbTorusSurface * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void TorusSurface_GetVEpsilon_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetVEpsilon(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void TorusSurface_GetVEpsilon_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void TorusSurface_GetVEpsilon_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    TorusSurface_GetUMid_AsyncWorker::TorusSurface_GetUMid_AsyncWorker(
MbTorusSurface * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void TorusSurface_GetUMid_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetUMid(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void TorusSurface_GetUMid_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void TorusSurface_GetUMid_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    TorusSurface_GetVMid_AsyncWorker::TorusSurface_GetVMid_AsyncWorker(
MbTorusSurface * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void TorusSurface_GetVMid_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetVMid(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void TorusSurface_GetVMid_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void TorusSurface_GetVMid_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    TorusSurface_GetUMin_AsyncWorker::TorusSurface_GetUMin_AsyncWorker(
MbTorusSurface * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void TorusSurface_GetUMin_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetUMin(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void TorusSurface_GetUMin_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void TorusSurface_GetUMin_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    TorusSurface_GetUMax_AsyncWorker::TorusSurface_GetUMax_AsyncWorker(
MbTorusSurface * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void TorusSurface_GetUMax_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetUMax(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void TorusSurface_GetUMax_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void TorusSurface_GetUMax_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    TorusSurface_GetVMin_AsyncWorker::TorusSurface_GetVMin_AsyncWorker(
MbTorusSurface * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void TorusSurface_GetVMin_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetVMin(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void TorusSurface_GetVMin_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void TorusSurface_GetVMin_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    TorusSurface_GetVMax_AsyncWorker::TorusSurface_GetVMax_AsyncWorker(
MbTorusSurface * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void TorusSurface_GetVMax_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetVMax(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void TorusSurface_GetVMax_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void TorusSurface_GetVMax_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    TorusSurface_GetUParamToUnit_AsyncWorker::TorusSurface_GetUParamToUnit_AsyncWorker(
MbTorusSurface * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void TorusSurface_GetUParamToUnit_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetUParamToUnit(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void TorusSurface_GetUParamToUnit_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void TorusSurface_GetUParamToUnit_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    TorusSurface_GetVParamToUnit_AsyncWorker::TorusSurface_GetVParamToUnit_AsyncWorker(
MbTorusSurface * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void TorusSurface_GetVParamToUnit_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetVParamToUnit(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void TorusSurface_GetVParamToUnit_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void TorusSurface_GetVParamToUnit_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    TorusSurface_GetRadius_AsyncWorker::TorusSurface_GetRadius_AsyncWorker(
MbTorusSurface * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void TorusSurface_GetRadius_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetRadius(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void TorusSurface_GetRadius_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void TorusSurface_GetRadius_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    TorusSurface_Normal_AsyncWorker::TorusSurface_Normal_AsyncWorker(
MbTorusSurface * _underlying,        Napi::Promise::Deferred const &d
,
                         double & u,
                         double & v    )
        :_underlying(_underlying),PromiseWorker(d),
                        u(u)
,
                        v(v)
{};

    void TorusSurface_Normal_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector3D *result = new MbVector3D;


        
        _underlying->Normal(
                        u
,                        v
,                        *result
        );


                this->result = result;

        
        ExitParallelRegion();
    }

    void TorusSurface_Normal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbVector3D * result = this->result;
                if (result != NULL) {
        _to = Vector3D::NewInstance(env, (MbVector3D *)result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void TorusSurface_Normal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    TorusSurface_NearDirectPointProjection_AsyncWorker::TorusSurface_NearDirectPointProjection_AsyncWorker(
MbTorusSurface * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbCartPoint3D & pnt,
                        const MbVector3D & vect,
                         bool  ext,
                         MbRect2D * uvRange,
                         bool  onlyPositiveDirection    )
        :_underlying(_underlying),PromiseWorker(d),
                        pnt(pnt)
,
                        vect(vect)
,
                        ext(ext)
,
                        uvRange(uvRange)
,
                        onlyPositiveDirection(onlyPositiveDirection)
{};

    void TorusSurface_NearDirectPointProjection_AsyncWorker::Execute() {
        EnterParallelRegion();

                double u;
        double v;


        
         bool  _result = _underlying->NearDirectPointProjection(
                        pnt
,                        vect
,                        u
,                        v
,                        ext
,                        uvRange
,                        onlyPositiveDirection
        );

        if (_result) {

                this->u = u;
                this->v = v;

                } else {
            std::ostringstream msg;
            msg << "Operation NearDirectPointProjection failed";
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void TorusSurface_NearDirectPointProjection_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            Napi::Object _toReturn = Napi::Object::New(env);

                 double  u = this->u;
                    _to = Napi::Number::New(env, u);

                _toReturn.Set(Napi::String::New(env, "u"), _to);
                 double  v = this->v;
                    _to = Napi::Number::New(env, v);

                _toReturn.Set(Napi::String::New(env, "v"), _to);

            deferred.Resolve(_toReturn);
    }

    void TorusSurface_NearDirectPointProjection_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    TorusSurface_IsA_AsyncWorker::TorusSurface_IsA_AsyncWorker(
MbTorusSurface * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void TorusSurface_IsA_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeSpaceType  _result = _underlying->IsA(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void TorusSurface_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeSpaceType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void TorusSurface_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    TorusSurface_Type_AsyncWorker::TorusSurface_Type_AsyncWorker(
MbTorusSurface * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void TorusSurface_Type_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeSpaceType  _result = _underlying->Type(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void TorusSurface_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeSpaceType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void TorusSurface_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    TorusSurface_Family_AsyncWorker::TorusSurface_Family_AsyncWorker(
MbTorusSurface * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void TorusSurface_Family_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeSpaceType  _result = _underlying->Family(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void TorusSurface_Family_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeSpaceType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void TorusSurface_Family_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    TorusSurface_Transform_AsyncWorker::TorusSurface_Transform_AsyncWorker(
MbTorusSurface * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbMatrix3D & mat,
                         MbRegTransform * iReg    )
        :_underlying(_underlying),PromiseWorker(d),
                        mat(mat)
,
                        iReg(iReg)
{};

    void TorusSurface_Transform_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Transform(
                        mat
,                        iReg
        );



        
        ExitParallelRegion();
    }

    void TorusSurface_Transform_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void TorusSurface_Transform_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    TorusSurface_Move_AsyncWorker::TorusSurface_Move_AsyncWorker(
MbTorusSurface * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbVector3D & v,
                         MbRegTransform * iReg    )
        :_underlying(_underlying),PromiseWorker(d),
                        v(v)
,
                        iReg(iReg)
{};

    void TorusSurface_Move_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Move(
                        v
,                        iReg
        );



        
        ExitParallelRegion();
    }

    void TorusSurface_Move_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void TorusSurface_Move_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    TorusSurface_Rotate_AsyncWorker::TorusSurface_Rotate_AsyncWorker(
MbTorusSurface * _underlying,        Napi::Promise::Deferred const &d
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

    void TorusSurface_Rotate_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Rotate(
                        axis
,                        angle
,                        iReg
        );



        
        ExitParallelRegion();
    }

    void TorusSurface_Rotate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void TorusSurface_Rotate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    TorusSurface_Refresh_AsyncWorker::TorusSurface_Refresh_AsyncWorker(
MbTorusSurface * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void TorusSurface_Refresh_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Refresh(
        );



        
        ExitParallelRegion();
    }

    void TorusSurface_Refresh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void TorusSurface_Refresh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    TorusSurface_Duplicate_AsyncWorker::TorusSurface_Duplicate_AsyncWorker(
MbTorusSurface * _underlying,        Napi::Promise::Deferred const &d
,
                         MbRegDuplicate * iReg    )
        :_underlying(_underlying),PromiseWorker(d),
                        iReg(iReg)
{};

    void TorusSurface_Duplicate_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbSpaceItem & _result = _underlying->Duplicate(
                        iReg
        );


                this->_result = (MbSpaceItem *)&(_result);

        
        ExitParallelRegion();
    }

    void TorusSurface_Duplicate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbSpaceItem * _result = this->_result;
                _to = SpaceItem::NewInstance(env, (MbSpaceItem *)&(_result));

            deferred.Resolve(_to);
    }

    void TorusSurface_Duplicate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    TorusSurface_AddYourGabaritTo_AsyncWorker::TorusSurface_AddYourGabaritTo_AsyncWorker(
MbTorusSurface * _underlying,        Napi::Promise::Deferred const &d
,
                         MbCube & cube    )
        :_underlying(_underlying),PromiseWorker(d),
                        cube(cube)
{};

    void TorusSurface_AddYourGabaritTo_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddYourGabaritTo(
                        cube
        );



        
        ExitParallelRegion();
    }

    void TorusSurface_AddYourGabaritTo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void TorusSurface_AddYourGabaritTo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    TorusSurface_GetUseCount_AsyncWorker::TorusSurface_GetUseCount_AsyncWorker(
MbTorusSurface * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void TorusSurface_GetUseCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         refcount_t  _result = _underlying->GetUseCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void TorusSurface_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             refcount_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void TorusSurface_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    TorusSurface_AddRef_AsyncWorker::TorusSurface_AddRef_AsyncWorker(
MbTorusSurface * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void TorusSurface_AddRef_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddRef(
        );



        
        ExitParallelRegion();
    }

    void TorusSurface_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void TorusSurface_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

