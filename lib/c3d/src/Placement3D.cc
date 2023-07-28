// This is a generated file, modify: generate/templates/Placement3D.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/Placement3D.h"

#include "tool_mutex.h"

Napi::Object Placement3D::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "Placement3D", {
        InstanceMethod<&Placement3D::InitYZ>("InitYZ"),
        InstanceMethod<&Placement3D::InitYZ_async>("InitYZ_async"),
        InstanceMethod<&Placement3D::Move>("Move"),
        InstanceMethod<&Placement3D::Move_async>("Move_async"),
        InstanceMethod<&Placement3D::Rotate>("Rotate"),
        InstanceMethod<&Placement3D::Rotate_async>("Rotate_async"),
        InstanceMethod<&Placement3D::Scale>("Scale"),
        InstanceMethod<&Placement3D::Scale_async>("Scale_async"),
        InstanceMethod<&Placement3D::SetAxisX>("SetAxisX"),
        InstanceMethod<&Placement3D::SetAxisX_async>("SetAxisX_async"),
        InstanceMethod<&Placement3D::SetAxisY>("SetAxisY"),
        InstanceMethod<&Placement3D::SetAxisY_async>("SetAxisY_async"),
        InstanceMethod<&Placement3D::SetAxisZ>("SetAxisZ"),
        InstanceMethod<&Placement3D::SetAxisZ_async>("SetAxisZ_async"),
        InstanceMethod<&Placement3D::GetOrigin>("GetOrigin"),
        InstanceMethod<&Placement3D::GetOrigin_async>("GetOrigin_async"),
        InstanceMethod<&Placement3D::SetOrigin>("SetOrigin"),
        InstanceMethod<&Placement3D::SetOrigin_async>("SetOrigin_async"),
        InstanceMethod<&Placement3D::GetAxisZ>("GetAxisZ"),
        InstanceMethod<&Placement3D::GetAxisZ_async>("GetAxisZ_async"),
        InstanceMethod<&Placement3D::GetAxisY>("GetAxisY"),
        InstanceMethod<&Placement3D::GetAxisY_async>("GetAxisY_async"),
        InstanceMethod<&Placement3D::GetAxisX>("GetAxisX"),
        InstanceMethod<&Placement3D::GetAxisX_async>("GetAxisX_async"),
        InstanceMethod<&Placement3D::Normalize>("Normalize"),
        InstanceMethod<&Placement3D::Normalize_async>("Normalize_async"),
        InstanceMethod<&Placement3D::Reset>("Reset"),
        InstanceMethod<&Placement3D::Reset_async>("Reset_async"),
        InstanceMethod<&Placement3D::Invert>("Invert"),
        InstanceMethod<&Placement3D::Invert_async>("Invert_async"),
        InstanceMethod<&Placement3D::GetXEpsilon>("GetXEpsilon"),
        InstanceMethod<&Placement3D::GetXEpsilon_async>("GetXEpsilon_async"),
        InstanceMethod<&Placement3D::GetYEpsilon>("GetYEpsilon"),
        InstanceMethod<&Placement3D::GetYEpsilon_async>("GetYEpsilon_async"),
        InstanceMethod<&Placement3D::PointProjection>("PointProjection"),
        InstanceMethod<&Placement3D::PointProjection_async>("PointProjection_async"),
        InstanceMethod<&Placement3D::PointRelative>("PointRelative"),
        InstanceMethod<&Placement3D::PointRelative_async>("PointRelative_async"),
        InstanceMethod<&Placement3D::GetMatrixToPlace>("GetMatrixToPlace"),
        InstanceMethod<&Placement3D::GetMatrixToPlace_async>("GetMatrixToPlace_async"),
        InstanceMethod<&Placement3D::GetVectorFrom>("GetVectorFrom"),
        InstanceMethod<&Placement3D::GetVectorFrom_async>("GetVectorFrom_async"),
        InstanceMethod<&Placement3D::GetPointFrom>("GetPointFrom"),
        InstanceMethod<&Placement3D::GetPointFrom_async>("GetPointFrom_async"),
        InstanceMethod<&Placement3D::GetPointInto>("GetPointInto"),
        InstanceMethod<&Placement3D::GetPointInto_async>("GetPointInto_async"),
            InstanceMethod<&Placement3D::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Placement3D", func);


    return exports;
}

Placement3D::Placement3D(const Napi::CallbackInfo& info) : Napi::ObjectWrap<Placement3D>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        if (info.Length() == 0        

        ) {

                MbPlacement3D *underlying = new MbPlacement3D();
                if (underlying == NULL) {
                    Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
                    return;
                }
            this->_underlying = underlying;
        } else if (info.Length() == 4&&                ((
                info[0].IsObject() &&
                    info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env))
        )   
)
 &&         ((
                info[1].IsObject() &&
                    info[1].ToObject().InstanceOf(Vector3D::GetConstructor(env))
        )   
)
 &&         ((
                info[2].IsObject() &&
                    info[2].ToObject().InstanceOf(Vector3D::GetConstructor(env))
        )   
)
 &&         ((
                info[3].IsBoolean()
        )   
         || (info[3].IsNull() || info[3].IsUndefined())
)


        ) {
                    if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'org'").ThrowAsJavaScriptException();
                return;
        }
        const class CartPoint3D *org_ = CartPoint3D::Unwrap(info[0].ToObject());
        
        const MbCartPoint3D & org =*org_->_underlying;
        

                    if (info[1].IsNull() || info[1].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'axisZ'").ThrowAsJavaScriptException();
                return;
        }
        const class Vector3D *axisZ_ = Vector3D::Unwrap(info[1].ToObject());
        
        const MbVector3D & axisZ =*axisZ_->_underlying;
        

                    if (info[2].IsNull() || info[2].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'axisX'").ThrowAsJavaScriptException();
                return;
        }
        const class Vector3D *axisX_ = Vector3D::Unwrap(info[2].ToObject());
        
        const MbVector3D & axisX =*axisX_->_underlying;
        

                 bool l = info[3].ToBoolean();


                MbPlacement3D *underlying = new MbPlacement3D(org,axisZ,axisX,l);
                if (underlying == NULL) {
                    Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
                    return;
                }
            this->_underlying = underlying;
        } else if (info.Length() == 3&&                ((
                info[0].IsObject() &&
                    info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env))
        )   
)
 &&         ((
                info[1].IsObject() &&
                    info[1].ToObject().InstanceOf(Vector3D::GetConstructor(env))
        )   
)
 &&         ((
                info[2].IsBoolean()
        )   
         || (info[2].IsNull() || info[2].IsUndefined())
)


        ) {
                    if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'org'").ThrowAsJavaScriptException();
                return;
        }
        const class CartPoint3D *org_ = CartPoint3D::Unwrap(info[0].ToObject());
        
        const MbCartPoint3D & org =*org_->_underlying;
        

                    if (info[1].IsNull() || info[1].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'axisZ'").ThrowAsJavaScriptException();
                return;
        }
        const class Vector3D *axisZ_ = Vector3D::Unwrap(info[1].ToObject());
        
        const MbVector3D & axisZ =*axisZ_->_underlying;
        

                 bool l = info[2].ToBoolean();


                MbPlacement3D *underlying = new MbPlacement3D(org,axisZ,l);
                if (underlying == NULL) {
                    Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
                    return;
                }
            this->_underlying = underlying;
        } else if (info.Length() == 1&&                ((
                info[0].IsObject() &&
                    info[0].ToObject().InstanceOf(Placement3D::GetConstructor(env))
        )   
)


        ) {
                    if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'place'").ThrowAsJavaScriptException();
                return;
        }
        const class Placement3D *place_ = Placement3D::Unwrap(info[0].ToObject());
        
        const MbPlacement3D & place =*place_->_underlying;
        


                MbPlacement3D *underlying = new MbPlacement3D(place);
                if (underlying == NULL) {
                    Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
                    return;
                }
            this->_underlying = underlying;
        } else {
            Napi::Error::New(env, "No matching constructor").ThrowAsJavaScriptException();
            return;
        }
}

Napi::Object Placement3D::NewInstance(Napi::Env env, MbPlacement3D *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Placement3D");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Placement3D *unwrapped = Placement3D::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Placement3D::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Placement3D");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

        Napi::Value Placement3D::InitYZ(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "CartPoint3D p is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(Vector3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Vector3D axisY is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 2 || !(
              (info[2].IsObject() && info[2].ToObject().InstanceOf(Vector3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Vector3D axisZ is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'p'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class CartPoint3D *p_ = CartPoint3D::Unwrap(info[0].ToObject());
        
        const MbCartPoint3D & p =*p_->_underlying;
        

                if (info[1].IsNull() || info[1].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'axisY'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Vector3D *axisY_ = Vector3D::Unwrap(info[1].ToObject());
        
        const MbVector3D & axisY =*axisY_->_underlying;
        

                if (info[2].IsNull() || info[2].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'axisZ'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Vector3D *axisZ_ = Vector3D::Unwrap(info[2].ToObject());
        
        const MbVector3D & axisZ =*axisZ_->_underlying;
        



 MbPlacement3D & _result = _underlying->InitYZ
(
        p
,        axisY
,        axisZ

);



    Napi::Value _to;

            _to = Placement3D::NewInstance(env, new MbPlacement3D(_result));

            return _to;


        }

    Napi::Value Placement3D::InitYZ_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "CartPoint3D p is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(Vector3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Vector3D axisY is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 2 || !(
              (info[2].IsObject() && info[2].ToObject().InstanceOf(Vector3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Vector3D axisZ is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'p'"));
                return deferred.Promise();
        }
        const class CartPoint3D *p_ = CartPoint3D::Unwrap(info[0].ToObject());
        
        const MbCartPoint3D & p =*p_->_underlying;
        

                        if (info[1].IsNull() || info[1].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'axisY'"));
                return deferred.Promise();
        }
        const class Vector3D *axisY_ = Vector3D::Unwrap(info[1].ToObject());
        
        const MbVector3D & axisY =*axisY_->_underlying;
        

                        if (info[2].IsNull() || info[2].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'axisZ'"));
                return deferred.Promise();
        }
        const class Vector3D *axisZ_ = Vector3D::Unwrap(info[2].ToObject());
        
        const MbVector3D & axisZ =*axisZ_->_underlying;
        

        Placement3D_InitYZ_AsyncWorker* asyncWorker = new Placement3D_InitYZ_AsyncWorker(
_underlying,            deferred
,
                
                p,
                
                axisY,
                
                axisZ        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Placement3D::Move(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Vector3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Vector3D to is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'to'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Vector3D *to_ = Vector3D::Unwrap(info[0].ToObject());
        
        const MbVector3D & to =*to_->_underlying;
        



 MbPlacement3D & _result = _underlying->Move
(
        to

);



    Napi::Value _to;

            _to = Placement3D::NewInstance(env, new MbPlacement3D(_result));

            return _to;


        }

    Napi::Value Placement3D::Move_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Vector3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Vector3D to is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'to'"));
                return deferred.Promise();
        }
        const class Vector3D *to_ = Vector3D::Unwrap(info[0].ToObject());
        
        const MbVector3D & to =*to_->_underlying;
        

        Placement3D_Move_AsyncWorker* asyncWorker = new Placement3D_Move_AsyncWorker(
_underlying,            deferred
,
                
                to        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Placement3D::Rotate(const Napi::CallbackInfo& info) {
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



 MbPlacement3D & _result = _underlying->Rotate
(
        axis
,        angle

);



    Napi::Value _to;

            _to = Placement3D::NewInstance(env, new MbPlacement3D(_result));

            return _to;


        }

    Napi::Value Placement3D::Rotate_async(const Napi::CallbackInfo& info) {
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

        Placement3D_Rotate_AsyncWorker* asyncWorker = new Placement3D_Rotate_AsyncWorker(
_underlying,            deferred
,
                
                axis,
                
                angle        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Placement3D::Scale(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number sx is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    Napi::Error::New(env, "number sy is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 2 || !(
              info[2].IsNumber()
)) {
                    Napi::Error::New(env, "number sz is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

             double sx = info[0].ToNumber().DoubleValue();

             double sy = info[1].ToNumber().DoubleValue();

             double sz = info[2].ToNumber().DoubleValue();



 MbPlacement3D & _result = _underlying->Scale
(
        sx
,        sy
,        sz

);



    Napi::Value _to;

            _to = Placement3D::NewInstance(env, new MbPlacement3D(_result));

            return _to;


        }

    Napi::Value Placement3D::Scale_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number sx is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number sy is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 2 || !(
              info[2].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number sz is required."));
                    return deferred.Promise();
            }


                     double sx = info[0].ToNumber().DoubleValue();

                     double sy = info[1].ToNumber().DoubleValue();

                     double sz = info[2].ToNumber().DoubleValue();

        Placement3D_Scale_AsyncWorker* asyncWorker = new Placement3D_Scale_AsyncWorker(
_underlying,            deferred
,
                
                sx,
                
                sy,
                
                sz        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Placement3D::SetAxisX(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Vector3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Vector3D a is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'a'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Vector3D *a_ = Vector3D::Unwrap(info[0].ToObject());
        
        const MbVector3D & a =*a_->_underlying;
        



_underlying->SetAxisX
(
        a

);



    return env.Undefined();


        }

    Napi::Value Placement3D::SetAxisX_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Vector3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Vector3D a is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'a'"));
                return deferred.Promise();
        }
        const class Vector3D *a_ = Vector3D::Unwrap(info[0].ToObject());
        
        const MbVector3D & a =*a_->_underlying;
        

        Placement3D_SetAxisX_AsyncWorker* asyncWorker = new Placement3D_SetAxisX_AsyncWorker(
_underlying,            deferred
,
                
                a        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Placement3D::SetAxisY(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Vector3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Vector3D a is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'a'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Vector3D *a_ = Vector3D::Unwrap(info[0].ToObject());
        
        const MbVector3D & a =*a_->_underlying;
        



_underlying->SetAxisY
(
        a

);



    return env.Undefined();


        }

    Napi::Value Placement3D::SetAxisY_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Vector3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Vector3D a is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'a'"));
                return deferred.Promise();
        }
        const class Vector3D *a_ = Vector3D::Unwrap(info[0].ToObject());
        
        const MbVector3D & a =*a_->_underlying;
        

        Placement3D_SetAxisY_AsyncWorker* asyncWorker = new Placement3D_SetAxisY_AsyncWorker(
_underlying,            deferred
,
                
                a        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Placement3D::SetAxisZ(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Vector3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Vector3D a is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'a'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Vector3D *a_ = Vector3D::Unwrap(info[0].ToObject());
        
        const MbVector3D & a =*a_->_underlying;
        



_underlying->SetAxisZ
(
        a

);



    return env.Undefined();


        }

    Napi::Value Placement3D::SetAxisZ_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Vector3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Vector3D a is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'a'"));
                return deferred.Promise();
        }
        const class Vector3D *a_ = Vector3D::Unwrap(info[0].ToObject());
        
        const MbVector3D & a =*a_->_underlying;
        

        Placement3D_SetAxisZ_AsyncWorker* asyncWorker = new Placement3D_SetAxisZ_AsyncWorker(
_underlying,            deferred
,
                
                a        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Placement3D::GetOrigin(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



const MbCartPoint3D & _result = _underlying->GetOrigin
(

);



    Napi::Value _to;

            _to = CartPoint3D::NewInstance(env, new MbCartPoint3D(_result));

            return _to;


        }

    Napi::Value Placement3D::GetOrigin_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Placement3D_GetOrigin_AsyncWorker* asyncWorker = new Placement3D_GetOrigin_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Placement3D::SetOrigin(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "CartPoint3D o is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'o'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class CartPoint3D *o_ = CartPoint3D::Unwrap(info[0].ToObject());
        
        const MbCartPoint3D & o =*o_->_underlying;
        



_underlying->SetOrigin
(
        o

);



    return env.Undefined();


        }

    Napi::Value Placement3D::SetOrigin_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "CartPoint3D o is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'o'"));
                return deferred.Promise();
        }
        const class CartPoint3D *o_ = CartPoint3D::Unwrap(info[0].ToObject());
        
        const MbCartPoint3D & o =*o_->_underlying;
        

        Placement3D_SetOrigin_AsyncWorker* asyncWorker = new Placement3D_SetOrigin_AsyncWorker(
_underlying,            deferred
,
                
                o        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Placement3D::GetAxisZ(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



const MbVector3D & _result = _underlying->GetAxisZ
(

);



    Napi::Value _to;

            _to = Vector3D::NewInstance(env, new MbVector3D(_result));

            return _to;


        }

    Napi::Value Placement3D::GetAxisZ_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Placement3D_GetAxisZ_AsyncWorker* asyncWorker = new Placement3D_GetAxisZ_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Placement3D::GetAxisY(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



const MbVector3D & _result = _underlying->GetAxisY
(

);



    Napi::Value _to;

            _to = Vector3D::NewInstance(env, new MbVector3D(_result));

            return _to;


        }

    Napi::Value Placement3D::GetAxisY_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Placement3D_GetAxisY_AsyncWorker* asyncWorker = new Placement3D_GetAxisY_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Placement3D::GetAxisX(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



const MbVector3D & _result = _underlying->GetAxisX
(

);



    Napi::Value _to;

            _to = Vector3D::NewInstance(env, new MbVector3D(_result));

            return _to;


        }

    Napi::Value Placement3D::GetAxisX_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Placement3D_GetAxisX_AsyncWorker* asyncWorker = new Placement3D_GetAxisX_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Placement3D::Normalize(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->Normalize
(

);



    return env.Undefined();


        }

    Napi::Value Placement3D::Normalize_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Placement3D_Normalize_AsyncWorker* asyncWorker = new Placement3D_Normalize_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Placement3D::Reset(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->Reset
(

);



    return env.Undefined();


        }

    Napi::Value Placement3D::Reset_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Placement3D_Reset_AsyncWorker* asyncWorker = new Placement3D_Reset_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Placement3D::Invert(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->Invert
(

);



    return env.Undefined();


        }

    Napi::Value Placement3D::Invert_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Placement3D_Invert_AsyncWorker* asyncWorker = new Placement3D_Invert_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Placement3D::GetXEpsilon(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 double  _result = _underlying->GetXEpsilon
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Placement3D::GetXEpsilon_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Placement3D_GetXEpsilon_AsyncWorker* asyncWorker = new Placement3D_GetXEpsilon_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Placement3D::GetYEpsilon(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 double  _result = _underlying->GetYEpsilon
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Placement3D::GetYEpsilon_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Placement3D_GetYEpsilon_AsyncWorker* asyncWorker = new Placement3D_GetYEpsilon_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Placement3D::PointProjection(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "CartPoint3D p is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    double x;
        double y;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'p'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class CartPoint3D *p_ = CartPoint3D::Unwrap(info[0].ToObject());
        
        const MbCartPoint3D & p =*p_->_underlying;
        



_underlying->PointProjection
(
        p
,        x
,        y

);



        Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

            _to = Napi::Number::New(env, x);

        _toReturn.Set(Napi::String::New(env, "x"), _to);
            _to = Napi::Number::New(env, y);

        _toReturn.Set(Napi::String::New(env, "y"), _to);
            return _toReturn;


        }

    Napi::Value Placement3D::PointProjection_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "CartPoint3D p is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'p'"));
                return deferred.Promise();
        }
        const class CartPoint3D *p_ = CartPoint3D::Unwrap(info[0].ToObject());
        
        const MbCartPoint3D & p =*p_->_underlying;
        

        Placement3D_PointProjection_AsyncWorker* asyncWorker = new Placement3D_PointProjection_AsyncWorker(
_underlying,            deferred
,
                
                p        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Placement3D::PointRelative(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "CartPoint3D pnt is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'pnt'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class CartPoint3D *pnt_ = CartPoint3D::Unwrap(info[0].ToObject());
        
        const MbCartPoint3D & pnt =*pnt_->_underlying;
        

             double eps = info[1].ToNumber().DoubleValue();



 MbeItemLocation  _result = _underlying->PointRelative
(
        pnt
,        info.Length() == 1 || info[1].IsNull() ? Math::angleRegion : eps

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Placement3D::PointRelative_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "CartPoint3D pnt is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'pnt'"));
                return deferred.Promise();
        }
        const class CartPoint3D *pnt_ = CartPoint3D::Unwrap(info[0].ToObject());
        
        const MbCartPoint3D & pnt =*pnt_->_underlying;
        

                     double eps = info[1].ToNumber().DoubleValue();

        Placement3D_PointRelative_AsyncWorker* asyncWorker = new Placement3D_PointRelative_AsyncWorker(
_underlying,            deferred
,
                
                pnt,
                
                eps        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Placement3D::GetMatrixToPlace(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Placement3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Placement3D p is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    MbMatrix *matrix = new MbMatrix;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'p'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Placement3D *p_ = Placement3D::Unwrap(info[0].ToObject());
        
        const MbPlacement3D & p =*p_->_underlying;
        

             double eps = info[1].ToNumber().DoubleValue();



_underlying->GetMatrixToPlace
(
        p
,        *matrix
,        info.Length() == 1 || info[1].IsNull() ? Math::angleRegion : eps

);



    Napi::Value _to;

            if (matrix != NULL) {
        _to = Matrix::NewInstance(env, (MbMatrix *)matrix);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value Placement3D::GetMatrixToPlace_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Placement3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Placement3D p is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'p'"));
                return deferred.Promise();
        }
        const class Placement3D *p_ = Placement3D::Unwrap(info[0].ToObject());
        
        const MbPlacement3D & p =*p_->_underlying;
        

                     double eps = info[1].ToNumber().DoubleValue();

        Placement3D_GetMatrixToPlace_AsyncWorker* asyncWorker = new Placement3D_GetMatrixToPlace_AsyncWorker(
_underlying,            deferred
,
                
                p,
                
                eps        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Placement3D::GetVectorFrom(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number x1 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    Napi::Error::New(env, "number y1 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 2 || !(
              info[2].IsNumber()
)) {
                    Napi::Error::New(env, "number z1 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    MbVector3D *v = new MbVector3D;


             double x1 = info[0].ToNumber().DoubleValue();

             double y1 = info[1].ToNumber().DoubleValue();

             double z1 = info[2].ToNumber().DoubleValue();

            const MbeLocalSystemType3D type = static_cast<MbeLocalSystemType3D>(info[3].ToNumber().Uint32Value());



_underlying->GetVectorFrom
(
        x1
,        y1
,        z1
,        *v
,        info.Length() == 3 || info[3].IsNull() ? ls_CartesianSystem : type

);



    Napi::Value _to;

            if (v != NULL) {
        _to = Vector3D::NewInstance(env, (MbVector3D *)v);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value Placement3D::GetVectorFrom_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number x1 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number y1 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 2 || !(
              info[2].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number z1 is required."));
                    return deferred.Promise();
            }


                     double x1 = info[0].ToNumber().DoubleValue();

                     double y1 = info[1].ToNumber().DoubleValue();

                     double z1 = info[2].ToNumber().DoubleValue();

                    const MbeLocalSystemType3D type = static_cast<MbeLocalSystemType3D>(info[3].ToNumber().Uint32Value());

        Placement3D_GetVectorFrom_AsyncWorker* asyncWorker = new Placement3D_GetVectorFrom_AsyncWorker(
_underlying,            deferred
,
                
                x1,
                
                y1,
                
                z1,
                
                type        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Placement3D::GetPointFrom(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number x1 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    Napi::Error::New(env, "number y1 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 2 || !(
              info[2].IsNumber()
)) {
                    Napi::Error::New(env, "number z1 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    MbCartPoint3D *p = new MbCartPoint3D;


             double x1 = info[0].ToNumber().DoubleValue();

             double y1 = info[1].ToNumber().DoubleValue();

             double z1 = info[2].ToNumber().DoubleValue();

            const MbeLocalSystemType3D type = static_cast<MbeLocalSystemType3D>(info[3].ToNumber().Uint32Value());



_underlying->GetPointFrom
(
        x1
,        y1
,        z1
,        *p
,        info.Length() == 3 || info[3].IsNull() ? ls_CartesianSystem : type

);



    Napi::Value _to;

            if (p != NULL) {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)p);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value Placement3D::GetPointFrom_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number x1 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number y1 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 2 || !(
              info[2].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number z1 is required."));
                    return deferred.Promise();
            }


                     double x1 = info[0].ToNumber().DoubleValue();

                     double y1 = info[1].ToNumber().DoubleValue();

                     double z1 = info[2].ToNumber().DoubleValue();

                    const MbeLocalSystemType3D type = static_cast<MbeLocalSystemType3D>(info[3].ToNumber().Uint32Value());

        Placement3D_GetPointFrom_AsyncWorker* asyncWorker = new Placement3D_GetPointFrom_AsyncWorker(
_underlying,            deferred
,
                
                x1,
                
                y1,
                
                z1,
                
                type        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Placement3D::GetPointInto(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "CartPoint3D p is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'p'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class CartPoint3D *p_ = CartPoint3D::Unwrap(info[0].ToObject());
        
         MbCartPoint3D & p =*p_->_underlying;
        

            const MbeLocalSystemType3D type = static_cast<MbeLocalSystemType3D>(info[1].ToNumber().Uint32Value());



_underlying->GetPointInto
(
        p
,        info.Length() == 1 || info[1].IsNull() ? ls_CartesianSystem : type

);



    return env.Undefined();


        }

    Napi::Value Placement3D::GetPointInto_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "CartPoint3D p is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'p'"));
                return deferred.Promise();
        }
        const class CartPoint3D *p_ = CartPoint3D::Unwrap(info[0].ToObject());
        
         MbCartPoint3D & p =*p_->_underlying;
        

                    const MbeLocalSystemType3D type = static_cast<MbeLocalSystemType3D>(info[1].ToNumber().Uint32Value());

        Placement3D_GetPointInto_AsyncWorker* asyncWorker = new Placement3D_GetPointInto_AsyncWorker(
_underlying,            deferred
,
                
                p,
                
                type        );
        asyncWorker->Queue();
        return deferred.Promise();
    }



    Napi::Value Placement3D::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }


    Placement3D_InitYZ_AsyncWorker::Placement3D_InitYZ_AsyncWorker(
MbPlacement3D * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbCartPoint3D & p,
                        const MbVector3D & axisY,
                        const MbVector3D & axisZ    )
        :_underlying(_underlying),PromiseWorker(d),
                        p(p)
,
                        axisY(axisY)
,
                        axisZ(axisZ)
{};

    void Placement3D_InitYZ_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbPlacement3D & _result = _underlying->InitYZ(
                        p
,                        axisY
,                        axisZ
        );


                        this->_result = new (MbPlacement3D)(_result);

        
        ExitParallelRegion();
    }

    void Placement3D_InitYZ_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbPlacement3D * _result = this->_result;
                _to = Placement3D::NewInstance(env, (MbPlacement3D *)&(_result));

            deferred.Resolve(_to);
    }

    void Placement3D_InitYZ_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Placement3D_Move_AsyncWorker::Placement3D_Move_AsyncWorker(
MbPlacement3D * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbVector3D & to    )
        :_underlying(_underlying),PromiseWorker(d),
                        to(to)
{};

    void Placement3D_Move_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbPlacement3D & _result = _underlying->Move(
                        to
        );


                        this->_result = new (MbPlacement3D)(_result);

        
        ExitParallelRegion();
    }

    void Placement3D_Move_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbPlacement3D * _result = this->_result;
                _to = Placement3D::NewInstance(env, (MbPlacement3D *)&(_result));

            deferred.Resolve(_to);
    }

    void Placement3D_Move_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Placement3D_Rotate_AsyncWorker::Placement3D_Rotate_AsyncWorker(
MbPlacement3D * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbAxis3D & axis,
                         double  angle    )
        :_underlying(_underlying),PromiseWorker(d),
                        axis(axis)
,
                        angle(angle)
{};

    void Placement3D_Rotate_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbPlacement3D & _result = _underlying->Rotate(
                        axis
,                        angle
        );


                        this->_result = new (MbPlacement3D)(_result);

        
        ExitParallelRegion();
    }

    void Placement3D_Rotate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbPlacement3D * _result = this->_result;
                _to = Placement3D::NewInstance(env, (MbPlacement3D *)&(_result));

            deferred.Resolve(_to);
    }

    void Placement3D_Rotate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Placement3D_Scale_AsyncWorker::Placement3D_Scale_AsyncWorker(
MbPlacement3D * _underlying,        Napi::Promise::Deferred const &d
,
                         double  sx,
                         double  sy,
                         double  sz    )
        :_underlying(_underlying),PromiseWorker(d),
                        sx(sx)
,
                        sy(sy)
,
                        sz(sz)
{};

    void Placement3D_Scale_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbPlacement3D & _result = _underlying->Scale(
                        sx
,                        sy
,                        sz
        );


                        this->_result = new (MbPlacement3D)(_result);

        
        ExitParallelRegion();
    }

    void Placement3D_Scale_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbPlacement3D * _result = this->_result;
                _to = Placement3D::NewInstance(env, (MbPlacement3D *)&(_result));

            deferred.Resolve(_to);
    }

    void Placement3D_Scale_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Placement3D_SetAxisX_AsyncWorker::Placement3D_SetAxisX_AsyncWorker(
MbPlacement3D * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbVector3D & a    )
        :_underlying(_underlying),PromiseWorker(d),
                        a(a)
{};

    void Placement3D_SetAxisX_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetAxisX(
                        a
        );



        
        ExitParallelRegion();
    }

    void Placement3D_SetAxisX_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Placement3D_SetAxisX_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Placement3D_SetAxisY_AsyncWorker::Placement3D_SetAxisY_AsyncWorker(
MbPlacement3D * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbVector3D & a    )
        :_underlying(_underlying),PromiseWorker(d),
                        a(a)
{};

    void Placement3D_SetAxisY_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetAxisY(
                        a
        );



        
        ExitParallelRegion();
    }

    void Placement3D_SetAxisY_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Placement3D_SetAxisY_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Placement3D_SetAxisZ_AsyncWorker::Placement3D_SetAxisZ_AsyncWorker(
MbPlacement3D * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbVector3D & a    )
        :_underlying(_underlying),PromiseWorker(d),
                        a(a)
{};

    void Placement3D_SetAxisZ_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetAxisZ(
                        a
        );



        
        ExitParallelRegion();
    }

    void Placement3D_SetAxisZ_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Placement3D_SetAxisZ_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Placement3D_GetOrigin_AsyncWorker::Placement3D_GetOrigin_AsyncWorker(
MbPlacement3D * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Placement3D_GetOrigin_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        const MbCartPoint3D & _result = _underlying->GetOrigin(
        );


                        this->_result = new (MbCartPoint3D)(_result);

        
        ExitParallelRegion();
    }

    void Placement3D_GetOrigin_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            const MbCartPoint3D * _result = this->_result;
                _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)&(_result));

            deferred.Resolve(_to);
    }

    void Placement3D_GetOrigin_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Placement3D_SetOrigin_AsyncWorker::Placement3D_SetOrigin_AsyncWorker(
MbPlacement3D * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbCartPoint3D & o    )
        :_underlying(_underlying),PromiseWorker(d),
                        o(o)
{};

    void Placement3D_SetOrigin_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetOrigin(
                        o
        );



        
        ExitParallelRegion();
    }

    void Placement3D_SetOrigin_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Placement3D_SetOrigin_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Placement3D_GetAxisZ_AsyncWorker::Placement3D_GetAxisZ_AsyncWorker(
MbPlacement3D * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Placement3D_GetAxisZ_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        const MbVector3D & _result = _underlying->GetAxisZ(
        );


                        this->_result = new (MbVector3D)(_result);

        
        ExitParallelRegion();
    }

    void Placement3D_GetAxisZ_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            const MbVector3D * _result = this->_result;
                _to = Vector3D::NewInstance(env, (MbVector3D *)&(_result));

            deferred.Resolve(_to);
    }

    void Placement3D_GetAxisZ_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Placement3D_GetAxisY_AsyncWorker::Placement3D_GetAxisY_AsyncWorker(
MbPlacement3D * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Placement3D_GetAxisY_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        const MbVector3D & _result = _underlying->GetAxisY(
        );


                        this->_result = new (MbVector3D)(_result);

        
        ExitParallelRegion();
    }

    void Placement3D_GetAxisY_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            const MbVector3D * _result = this->_result;
                _to = Vector3D::NewInstance(env, (MbVector3D *)&(_result));

            deferred.Resolve(_to);
    }

    void Placement3D_GetAxisY_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Placement3D_GetAxisX_AsyncWorker::Placement3D_GetAxisX_AsyncWorker(
MbPlacement3D * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Placement3D_GetAxisX_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        const MbVector3D & _result = _underlying->GetAxisX(
        );


                        this->_result = new (MbVector3D)(_result);

        
        ExitParallelRegion();
    }

    void Placement3D_GetAxisX_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            const MbVector3D * _result = this->_result;
                _to = Vector3D::NewInstance(env, (MbVector3D *)&(_result));

            deferred.Resolve(_to);
    }

    void Placement3D_GetAxisX_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Placement3D_Normalize_AsyncWorker::Placement3D_Normalize_AsyncWorker(
MbPlacement3D * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Placement3D_Normalize_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Normalize(
        );



        
        ExitParallelRegion();
    }

    void Placement3D_Normalize_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Placement3D_Normalize_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Placement3D_Reset_AsyncWorker::Placement3D_Reset_AsyncWorker(
MbPlacement3D * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Placement3D_Reset_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Reset(
        );



        
        ExitParallelRegion();
    }

    void Placement3D_Reset_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Placement3D_Reset_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Placement3D_Invert_AsyncWorker::Placement3D_Invert_AsyncWorker(
MbPlacement3D * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Placement3D_Invert_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Invert(
        );



        
        ExitParallelRegion();
    }

    void Placement3D_Invert_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Placement3D_Invert_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Placement3D_GetXEpsilon_AsyncWorker::Placement3D_GetXEpsilon_AsyncWorker(
MbPlacement3D * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Placement3D_GetXEpsilon_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetXEpsilon(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Placement3D_GetXEpsilon_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Placement3D_GetXEpsilon_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Placement3D_GetYEpsilon_AsyncWorker::Placement3D_GetYEpsilon_AsyncWorker(
MbPlacement3D * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Placement3D_GetYEpsilon_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->GetYEpsilon(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Placement3D_GetYEpsilon_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Placement3D_GetYEpsilon_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Placement3D_PointProjection_AsyncWorker::Placement3D_PointProjection_AsyncWorker(
MbPlacement3D * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbCartPoint3D & p    )
        :_underlying(_underlying),PromiseWorker(d),
                        p(p)
{};

    void Placement3D_PointProjection_AsyncWorker::Execute() {
        EnterParallelRegion();

                double x;
        double y;


        
        _underlying->PointProjection(
                        p
,                        x
,                        y
        );


                this->x = x;
                this->y = y;

        
        ExitParallelRegion();
    }

    void Placement3D_PointProjection_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            Napi::Object _toReturn = Napi::Object::New(env);

                 double  x = this->x;
                    _to = Napi::Number::New(env, x);

                _toReturn.Set(Napi::String::New(env, "x"), _to);
                 double  y = this->y;
                    _to = Napi::Number::New(env, y);

                _toReturn.Set(Napi::String::New(env, "y"), _to);

            deferred.Resolve(_toReturn);
    }

    void Placement3D_PointProjection_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Placement3D_PointRelative_AsyncWorker::Placement3D_PointRelative_AsyncWorker(
MbPlacement3D * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbCartPoint3D & pnt,
                         double  eps    )
        :_underlying(_underlying),PromiseWorker(d),
                        pnt(pnt)
,
                        eps(eps)
{};

    void Placement3D_PointRelative_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeItemLocation  _result = _underlying->PointRelative(
                        pnt
,                        eps
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Placement3D_PointRelative_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeItemLocation  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Placement3D_PointRelative_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Placement3D_GetMatrixToPlace_AsyncWorker::Placement3D_GetMatrixToPlace_AsyncWorker(
MbPlacement3D * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbPlacement3D & p,
                         double  eps    )
        :_underlying(_underlying),PromiseWorker(d),
                        p(p)
,
                        eps(eps)
{};

    void Placement3D_GetMatrixToPlace_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbMatrix *matrix = new MbMatrix;


        
        _underlying->GetMatrixToPlace(
                        p
,                        *matrix
,                        eps
        );


                this->matrix = matrix;

        
        ExitParallelRegion();
    }

    void Placement3D_GetMatrixToPlace_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbMatrix * matrix = this->matrix;
                if (matrix != NULL) {
        _to = Matrix::NewInstance(env, (MbMatrix *)matrix);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void Placement3D_GetMatrixToPlace_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Placement3D_GetVectorFrom_AsyncWorker::Placement3D_GetVectorFrom_AsyncWorker(
MbPlacement3D * _underlying,        Napi::Promise::Deferred const &d
,
                         double  x1,
                         double  y1,
                         double  z1,
                         MbeLocalSystemType3D  type    )
        :_underlying(_underlying),PromiseWorker(d),
                        x1(x1)
,
                        y1(y1)
,
                        z1(z1)
,
                        type(type)
{};

    void Placement3D_GetVectorFrom_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector3D *v = new MbVector3D;


        
        _underlying->GetVectorFrom(
                        x1
,                        y1
,                        z1
,                        *v
,                        type
        );


                this->v = v;

        
        ExitParallelRegion();
    }

    void Placement3D_GetVectorFrom_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbVector3D * v = this->v;
                if (v != NULL) {
        _to = Vector3D::NewInstance(env, (MbVector3D *)v);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void Placement3D_GetVectorFrom_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Placement3D_GetPointFrom_AsyncWorker::Placement3D_GetPointFrom_AsyncWorker(
MbPlacement3D * _underlying,        Napi::Promise::Deferred const &d
,
                         double  x1,
                         double  y1,
                         double  z1,
                         MbeLocalSystemType3D  type    )
        :_underlying(_underlying),PromiseWorker(d),
                        x1(x1)
,
                        y1(y1)
,
                        z1(z1)
,
                        type(type)
{};

    void Placement3D_GetPointFrom_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbCartPoint3D *p = new MbCartPoint3D;


        
        _underlying->GetPointFrom(
                        x1
,                        y1
,                        z1
,                        *p
,                        type
        );


                this->p = p;

        
        ExitParallelRegion();
    }

    void Placement3D_GetPointFrom_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Placement3D_GetPointFrom_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Placement3D_GetPointInto_AsyncWorker::Placement3D_GetPointInto_AsyncWorker(
MbPlacement3D * _underlying,        Napi::Promise::Deferred const &d
,
                         MbCartPoint3D & p,
                         MbeLocalSystemType3D  type    )
        :_underlying(_underlying),PromiseWorker(d),
                        p(p)
,
                        type(type)
{};

    void Placement3D_GetPointInto_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->GetPointInto(
                        p
,                        type
        );



        
        ExitParallelRegion();
    }

    void Placement3D_GetPointInto_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Placement3D_GetPointInto_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

