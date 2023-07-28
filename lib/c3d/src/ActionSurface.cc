// This is a generated file, modify: generate/templates/ActionSurface.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/ActionSurface.h"
#include "../include/Error.h"

#include "tool_mutex.h"

Napi::Object ActionSurface::Init(Napi::Env env, Napi::Object exports) {
    Napi::Object object = Napi::Object::New(env);

    object.Set("ElementarySurface", Napi::Function::New<&ActionSurface::ElementarySurface>(env));
    object.Set("ElementarySurface_async", Napi::Function::New<&ActionSurface::ElementarySurface_async>(env));
    object.Set("ExtrusionSurface", Napi::Function::New<&ActionSurface::ExtrusionSurface>(env));
    object.Set("ExtrusionSurface_async", Napi::Function::New<&ActionSurface::ExtrusionSurface_async>(env));

    exports.Set("ActionSurface", object);

    return exports;
}

        Napi::Value ActionSurface::ElementarySurface(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "CartPoint3D point0 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "CartPoint3D point1 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 2 || !(
              (info[2].IsObject() && info[2].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "CartPoint3D point2 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 3 || !(
              info[3].IsNumber()
)) {
                    Napi::Error::New(env, "SpaceType surfaceType is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                     MbSurface * result = NULL;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'point0'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class CartPoint3D *point0_ = CartPoint3D::Unwrap(info[0].ToObject());
        
        const MbCartPoint3D & point0 =*point0_->_underlying;
        

                if (info[1].IsNull() || info[1].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'point1'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class CartPoint3D *point1_ = CartPoint3D::Unwrap(info[1].ToObject());
        
        const MbCartPoint3D & point1 =*point1_->_underlying;
        

                if (info[2].IsNull() || info[2].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'point2'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class CartPoint3D *point2_ = CartPoint3D::Unwrap(info[2].ToObject());
        
        const MbCartPoint3D & point2 =*point2_->_underlying;
        

            const MbeSpaceType surfaceType = static_cast<MbeSpaceType>(info[3].ToNumber().Uint32Value());



 MbResultType  _result = ::ElementarySurface
(
        point0
,        point1
,        point2
,        surfaceType
,        result

);


if (_result == rt_Success) {

    Napi::Value _to;

            if (result != NULL) {
        _to = Surface::NewInstance(env, (MbSurface *)result);
    } else {
        _to = env.Null();
    }

            return _to;

} else {
    std::ostringstream msg;
    msg << "Operation ElementarySurface failed with error: " << Error::GetSolidErrorResId(_result);
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("code", Napi::Number::New(env, _result));
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value ActionSurface::ElementarySurface_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "CartPoint3D point0 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "CartPoint3D point1 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 2 || !(
              (info[2].IsObject() && info[2].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "CartPoint3D point2 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 3 || !(
              info[3].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "SpaceType surfaceType is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'point0'"));
                return deferred.Promise();
        }
        const class CartPoint3D *point0_ = CartPoint3D::Unwrap(info[0].ToObject());
        
        const MbCartPoint3D & point0 =*point0_->_underlying;
        

                        if (info[1].IsNull() || info[1].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'point1'"));
                return deferred.Promise();
        }
        const class CartPoint3D *point1_ = CartPoint3D::Unwrap(info[1].ToObject());
        
        const MbCartPoint3D & point1 =*point1_->_underlying;
        

                        if (info[2].IsNull() || info[2].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'point2'"));
                return deferred.Promise();
        }
        const class CartPoint3D *point2_ = CartPoint3D::Unwrap(info[2].ToObject());
        
        const MbCartPoint3D & point2 =*point2_->_underlying;
        

                    const MbeSpaceType surfaceType = static_cast<MbeSpaceType>(info[3].ToNumber().Uint32Value());

        ActionSurface_ElementarySurface_AsyncWorker* asyncWorker = new ActionSurface_ElementarySurface_AsyncWorker(
            deferred
,
                
                point0,
                
                point1,
                
                point2,
                
                surfaceType        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ActionSurface::ExtrusionSurface(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Curve3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Curve3D curve is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(Vector3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Vector3D direction is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 2 || !(
              info[2].IsBoolean()
)) {
                    Napi::Error::New(env, "boolean simplify is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                     MbSurface * result = NULL;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'curve'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Curve3D *curve_ = Curve3D::Unwrap(info[0].ToObject());
        
        const MbCurve3D & curve =*curve_->_underlying;
        

                if (info[1].IsNull() || info[1].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'direction'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Vector3D *direction_ = Vector3D::Unwrap(info[1].ToObject());
        
        const MbVector3D & direction =*direction_->_underlying;
        

             bool simplify = info[2].ToBoolean();



 MbResultType  _result = ::ExtrusionSurface
(
        curve
,        direction
,        simplify
,        result

);


if (_result == rt_Success) {

    Napi::Value _to;

            if (result != NULL) {
        _to = Surface::NewInstance(env, (MbSurface *)result);
    } else {
        _to = env.Null();
    }

            return _to;

} else {
    std::ostringstream msg;
    msg << "Operation ExtrusionSurface failed with error: " << Error::GetSolidErrorResId(_result);
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("code", Napi::Number::New(env, _result));
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value ActionSurface::ExtrusionSurface_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Curve3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Curve3D curve is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(Vector3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Vector3D direction is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 2 || !(
              info[2].IsBoolean()
)) {
                    deferred.Reject(Napi::String::New(env, "boolean simplify is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'curve'"));
                return deferred.Promise();
        }
        const class Curve3D *curve_ = Curve3D::Unwrap(info[0].ToObject());
        
        const MbCurve3D & curve =*curve_->_underlying;
        

                        if (info[1].IsNull() || info[1].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'direction'"));
                return deferred.Promise();
        }
        const class Vector3D *direction_ = Vector3D::Unwrap(info[1].ToObject());
        
        const MbVector3D & direction =*direction_->_underlying;
        

                     bool simplify = info[2].ToBoolean();

        ActionSurface_ExtrusionSurface_AsyncWorker* asyncWorker = new ActionSurface_ExtrusionSurface_AsyncWorker(
            deferred
,
                
                curve,
                
                direction,
                
                simplify        );
        asyncWorker->Queue();
        return deferred.Promise();
    }


    ActionSurface_ElementarySurface_AsyncWorker::ActionSurface_ElementarySurface_AsyncWorker(
        Napi::Promise::Deferred const &d
,
                        const MbCartPoint3D & point0,
                        const MbCartPoint3D & point1,
                        const MbCartPoint3D & point2,
                         MbeSpaceType  surfaceType    )
        :PromiseWorker(d),
                        point0(point0)
,
                        point1(point1)
,
                        point2(point2)
,
                        surfaceType(surfaceType)
{};

    void ActionSurface_ElementarySurface_AsyncWorker::Execute() {
        EnterParallelRegion();

                 MbSurface * result = NULL;


        
         MbResultType  _result = ::ElementarySurface(
                        point0
,                        point1
,                        point2
,                        surfaceType
,                        result
        );

        this->resultType = _result;
        if (_result == rt_Success) {

                this->result = result;

                } else {
            std::ostringstream msg;
            msg << "Operation ElementarySurface failed with error: " << Error::GetSolidErrorResId(_result);
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void ActionSurface_ElementarySurface_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbSurface * result = this->result;
                if (result != NULL) {
        _to = Surface::NewInstance(env, (MbSurface *)result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void ActionSurface_ElementarySurface_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ActionSurface_ExtrusionSurface_AsyncWorker::ActionSurface_ExtrusionSurface_AsyncWorker(
        Napi::Promise::Deferred const &d
,
                        const MbCurve3D & curve,
                        const MbVector3D & direction,
                         bool  simplify    )
        :PromiseWorker(d),
                        curve(curve)
,
                        direction(direction)
,
                        simplify(simplify)
{};

    void ActionSurface_ExtrusionSurface_AsyncWorker::Execute() {
        EnterParallelRegion();

                 MbSurface * result = NULL;


        
         MbResultType  _result = ::ExtrusionSurface(
                        curve
,                        direction
,                        simplify
,                        result
        );

        this->resultType = _result;
        if (_result == rt_Success) {

                this->result = result;

                } else {
            std::ostringstream msg;
            msg << "Operation ExtrusionSurface failed with error: " << Error::GetSolidErrorResId(_result);
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void ActionSurface_ExtrusionSurface_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbSurface * result = this->result;
                if (result != NULL) {
        _to = Surface::NewInstance(env, (MbSurface *)result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void ActionSurface_ExtrusionSurface_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

