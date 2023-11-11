// This is a generated file, modify: generate/templates/Plane.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/Plane.h"

#include "tool_mutex.h"

Napi::Object Plane::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func =
        DefineClass(env, "Plane",
                    {
                        InstanceMethod<&Plane::GetSurface>("GetSurface"),
                        InstanceMethod<&Plane::GetSurface_async>("GetSurface_async"),
                        InstanceMethod<&Plane::GetUEpsilon>("GetUEpsilon"),
                        InstanceMethod<&Plane::GetUEpsilon_async>("GetUEpsilon_async"),
                        InstanceMethod<&Plane::GetVEpsilon>("GetVEpsilon"),
                        InstanceMethod<&Plane::GetVEpsilon_async>("GetVEpsilon_async"),
                        InstanceMethod<&Plane::GetUMid>("GetUMid"),
                        InstanceMethod<&Plane::GetUMid_async>("GetUMid_async"),
                        InstanceMethod<&Plane::GetVMid>("GetVMid"),
                        InstanceMethod<&Plane::GetVMid_async>("GetVMid_async"),
                        InstanceMethod<&Plane::GetUMin>("GetUMin"),
                        InstanceMethod<&Plane::GetUMin_async>("GetUMin_async"),
                        InstanceMethod<&Plane::GetUMax>("GetUMax"),
                        InstanceMethod<&Plane::GetUMax_async>("GetUMax_async"),
                        InstanceMethod<&Plane::GetVMin>("GetVMin"),
                        InstanceMethod<&Plane::GetVMin_async>("GetVMin_async"),
                        InstanceMethod<&Plane::GetVMax>("GetVMax"),
                        InstanceMethod<&Plane::GetVMax_async>("GetVMax_async"),
                        InstanceMethod<&Plane::GetUParamToUnit>("GetUParamToUnit"),
                        InstanceMethod<&Plane::GetUParamToUnit_async>("GetUParamToUnit_async"),
                        InstanceMethod<&Plane::GetVParamToUnit>("GetVParamToUnit"),
                        InstanceMethod<&Plane::GetVParamToUnit_async>("GetVParamToUnit_async"),
                        InstanceMethod<&Plane::GetRadius>("GetRadius"),
                        InstanceMethod<&Plane::GetRadius_async>("GetRadius_async"),
                        InstanceMethod<&Plane::Normal>("Normal"),
                        InstanceMethod<&Plane::Normal_async>("Normal_async"),
                        InstanceMethod<&Plane::NearDirectPointProjection>("NearDirectPointProjection"),
                        InstanceMethod<&Plane::NearDirectPointProjection_async>("NearDirectPointProjection_async"),
                        InstanceMethod<&Plane::IsA>("IsA"),
                        InstanceMethod<&Plane::IsA_async>("IsA_async"),
                        InstanceMethod<&Plane::Type>("Type"),
                        InstanceMethod<&Plane::Type_async>("Type_async"),
                        InstanceMethod<&Plane::Family>("Family"),
                        InstanceMethod<&Plane::Family_async>("Family_async"),
                        InstanceMethod<&Plane::Transform>("Transform"),
                        InstanceMethod<&Plane::Transform_async>("Transform_async"),
                        InstanceMethod<&Plane::Move>("Move"),
                        InstanceMethod<&Plane::Move_async>("Move_async"),
                        InstanceMethod<&Plane::Rotate>("Rotate"),
                        InstanceMethod<&Plane::Rotate_async>("Rotate_async"),
                        InstanceMethod<&Plane::Refresh>("Refresh"),
                        InstanceMethod<&Plane::Refresh_async>("Refresh_async"),
                        InstanceMethod<&Plane::Duplicate>("Duplicate"),
                        InstanceMethod<&Plane::Duplicate_async>("Duplicate_async"),
                        InstanceMethod<&Plane::AddYourGabaritTo>("AddYourGabaritTo"),
                        InstanceMethod<&Plane::AddYourGabaritTo_async>("AddYourGabaritTo_async"),
                        InstanceMethod<&Plane::GetUseCount>("GetUseCount"),
                        InstanceMethod<&Plane::GetUseCount_async>("GetUseCount_async"),
                        InstanceMethod<&Plane::AddRef>("AddRef"),
                        InstanceMethod<&Plane::AddRef_async>("AddRef_async"),
                        InstanceMethod<&Plane::Id>("Id"),

                    });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Plane", func);

    Napi::Object global = env.Global();
    Napi::Object Object = global.Get("Object").ToObject();
    Napi::Function setPrototypeOf = Napi::Function(env, Object.Get("setPrototypeOf"));
    Napi::Value prototype = func.Get("prototype");

    Napi::Function superFunc = Surface::GetConstructor(env);
    Napi::FunctionReference *superConstructor = new Napi::FunctionReference();
    *superConstructor = Napi::Persistent(superFunc);

    Napi::Value superPrototype = superFunc.Get("prototype");
    setPrototypeOf.Call({prototype, superPrototype});
    setPrototypeOf.Call({func, superFunc});

    return exports;
}

Plane::Plane(const Napi::CallbackInfo &info) : Napi::ObjectWrap<Plane>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 3 &&
        ((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))) &&
        ((info[1].IsObject() && info[1].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))) &&
        ((info[2].IsObject() && info[2].ToObject().InstanceOf(CartPoint3D::GetConstructor(env))))

    )
    {
        if (info[0].IsNull() || info[0].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'c0'").ThrowAsJavaScriptException();
            return;
        }
        const class CartPoint3D *c0_ = CartPoint3D::Unwrap(info[0].ToObject());

        const MbCartPoint3D &c0 = *c0_->_underlying;

        if (info[1].IsNull() || info[1].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'c1'").ThrowAsJavaScriptException();
            return;
        }
        const class CartPoint3D *c1_ = CartPoint3D::Unwrap(info[1].ToObject());

        const MbCartPoint3D &c1 = *c1_->_underlying;

        if (info[2].IsNull() || info[2].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'c2'").ThrowAsJavaScriptException();
            return;
        }
        const class CartPoint3D *c2_ = CartPoint3D::Unwrap(info[2].ToObject());

        const MbCartPoint3D &c2 = *c2_->_underlying;

        MbPlane *underlying = new MbPlane(c0, c1, c2);
        if (underlying == NULL)
        {
            Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
            return;
        }
        underlying->AddRef();
        this->_underlying = underlying;
    }
    else if (info.Length() == 2 &&
             ((info[0].IsObject() && info[0].ToObject().InstanceOf(Placement3D::GetConstructor(env)))) &&
             ((info[1].IsNumber()))

    )
    {
        if (info[0].IsNull() || info[0].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'placement'").ThrowAsJavaScriptException();
            return;
        }
        const class Placement3D *placement_ = Placement3D::Unwrap(info[0].ToObject());

        const MbPlacement3D &placement = *placement_->_underlying;

        double distance = info[1].ToNumber().DoubleValue();

        MbPlane *underlying = new MbPlane(placement, distance);
        if (underlying == NULL)
        {
            Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
            return;
        }
        underlying->AddRef();
        this->_underlying = underlying;
    }
    else
    {
        Napi::Error::New(env, "No matching constructor").ThrowAsJavaScriptException();
        return;
    }
}

Napi::Object Plane::NewInstance(Napi::Env env, MbPlane *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Plane");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Plane *unwrapped = Plane::Unwrap(inst);
    underlying->AddRef();
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Plane::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Plane");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value Plane::GetSurface(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbSurface &_result = _underlying->GetSurface(

    );

    Napi::Value _to;

    _to = Surface::NewInstance(env, (MbSurface *)&(_result));

    return _to;
}

Napi::Value Plane::GetSurface_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Plane_GetSurface_AsyncWorker *asyncWorker = new Plane_GetSurface_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Plane::GetUEpsilon(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetUEpsilon(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Plane::GetUEpsilon_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Plane_GetUEpsilon_AsyncWorker *asyncWorker = new Plane_GetUEpsilon_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Plane::GetVEpsilon(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetVEpsilon(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Plane::GetVEpsilon_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Plane_GetVEpsilon_AsyncWorker *asyncWorker = new Plane_GetVEpsilon_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Plane::GetUMid(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetUMid(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Plane::GetUMid_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Plane_GetUMid_AsyncWorker *asyncWorker = new Plane_GetUMid_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Plane::GetVMid(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetVMid(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Plane::GetVMid_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Plane_GetVMid_AsyncWorker *asyncWorker = new Plane_GetVMid_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Plane::GetUMin(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetUMin(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Plane::GetUMin_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Plane_GetUMin_AsyncWorker *asyncWorker = new Plane_GetUMin_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Plane::GetUMax(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetUMax(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Plane::GetUMax_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Plane_GetUMax_AsyncWorker *asyncWorker = new Plane_GetUMax_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Plane::GetVMin(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetVMin(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Plane::GetVMin_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Plane_GetVMin_AsyncWorker *asyncWorker = new Plane_GetVMin_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Plane::GetVMax(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetVMax(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Plane::GetVMax_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Plane_GetVMax_AsyncWorker *asyncWorker = new Plane_GetVMax_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Plane::GetUParamToUnit(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetUParamToUnit(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Plane::GetUParamToUnit_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Plane_GetUParamToUnit_AsyncWorker *asyncWorker = new Plane_GetUParamToUnit_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Plane::GetVParamToUnit(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetVParamToUnit(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Plane::GetVParamToUnit_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Plane_GetVParamToUnit_AsyncWorker *asyncWorker = new Plane_GetVParamToUnit_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Plane::GetRadius(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetRadius(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Plane::GetRadius_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Plane_GetRadius_AsyncWorker *asyncWorker = new Plane_GetRadius_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Plane::Normal(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number u is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        Napi::Error::New(env, "number v is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbVector3D *result = new MbVector3D;

    double u = info[0].ToNumber().DoubleValue();

    double v = info[1].ToNumber().DoubleValue();

    _underlying->Normal(u, v, *result

    );

    Napi::Value _to;

    if (result != NULL)
    {
        _to = Vector3D::NewInstance(env, (MbVector3D *)result);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value Plane::Normal_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number u is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number v is required."));
        return deferred.Promise();
    }

    double u = info[0].ToNumber().DoubleValue();

    double v = info[1].ToNumber().DoubleValue();

    Plane_Normal_AsyncWorker *asyncWorker = new Plane_Normal_AsyncWorker(_underlying, deferred,

                                                                         u,

                                                                         v);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Plane::NearDirectPointProjection(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 ||
        !((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "CartPoint3D pnt is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !((info[1].IsObject() && info[1].ToObject().InstanceOf(Vector3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Vector3D vect is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 || !(info[2].IsBoolean()))
    {
        Napi::Error::New(env, "boolean ext is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    double u;
    double v;

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'pnt'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class CartPoint3D *pnt_ = CartPoint3D::Unwrap(info[0].ToObject());

    const MbCartPoint3D &pnt = *pnt_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'vect'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Vector3D *vect_ = Vector3D::Unwrap(info[1].ToObject());

    const MbVector3D &vect = *vect_->_underlying;

    bool ext = info[2].ToBoolean();

    MbRect2D *uvRange = NULL;
    if (!(info[3].IsNull() || info[3].IsUndefined()))
    {
        Rect2D *uvRange_ = Rect2D::Unwrap(info[3].ToObject());
        uvRange = uvRange_->_underlying;
    }

    bool onlyPositiveDirection = info[4].ToBoolean();

    bool _result = _underlying->NearDirectPointProjection(
        pnt, vect, u, v, ext, info.Length() == 3 || info[3].IsNull() ? nullptr : uvRange,
        info.Length() == 4 || info[4].IsNull() ? false : onlyPositiveDirection

    );

    if (_result)
    {

        Napi::Object _toReturn = Napi::Object::New(env);
        Napi::Value _to;

        _to = Napi::Number::New(env, u);

        _toReturn.Set(Napi::String::New(env, "u"), _to);
        _to = Napi::Number::New(env, v);

        _toReturn.Set(Napi::String::New(env, "v"), _to);
        return _toReturn;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation NearDirectPointProjection failed";
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value Plane::NearDirectPointProjection_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 ||
        !((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "CartPoint3D pnt is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !((info[1].IsObject() && info[1].ToObject().InstanceOf(Vector3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Vector3D vect is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 || !(info[2].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean ext is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'pnt'"));
        return deferred.Promise();
    }
    const class CartPoint3D *pnt_ = CartPoint3D::Unwrap(info[0].ToObject());

    const MbCartPoint3D &pnt = *pnt_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'vect'"));
        return deferred.Promise();
    }
    const class Vector3D *vect_ = Vector3D::Unwrap(info[1].ToObject());

    const MbVector3D &vect = *vect_->_underlying;

    bool ext = info[2].ToBoolean();

    MbRect2D *uvRange = NULL;
    if (!(info[3].IsNull() || info[3].IsUndefined()))
    {
        Rect2D *uvRange_ = Rect2D::Unwrap(info[3].ToObject());
        uvRange = uvRange_->_underlying;
    }

    bool onlyPositiveDirection = info[4].ToBoolean();

    Plane_NearDirectPointProjection_AsyncWorker *asyncWorker =
        new Plane_NearDirectPointProjection_AsyncWorker(_underlying, deferred,

                                                        pnt,

                                                        vect,

                                                        ext,

                                                        uvRange,

                                                        onlyPositiveDirection);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Plane::IsA(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeSpaceType _result = _underlying->IsA(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Plane::IsA_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Plane_IsA_AsyncWorker *asyncWorker = new Plane_IsA_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Plane::Type(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeSpaceType _result = _underlying->Type(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Plane::Type_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Plane_Type_AsyncWorker *asyncWorker = new Plane_Type_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Plane::Family(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeSpaceType _result = _underlying->Family(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Plane::Family_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Plane_Family_AsyncWorker *asyncWorker = new Plane_Family_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Plane::Transform(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Matrix3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Matrix3D mat is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'mat'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Matrix3D *mat_ = Matrix3D::Unwrap(info[0].ToObject());

    const MbMatrix3D &mat = *mat_->_underlying;

    MbRegTransform *iReg = NULL;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
        iReg = iReg_->_underlying;
    }

    _underlying->Transform(mat, info.Length() == 1 || info[1].IsNull() ? NULL : iReg

    );

    return env.Undefined();
}

Napi::Value Plane::Transform_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Matrix3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Matrix3D mat is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'mat'"));
        return deferred.Promise();
    }
    const class Matrix3D *mat_ = Matrix3D::Unwrap(info[0].ToObject());

    const MbMatrix3D &mat = *mat_->_underlying;

    MbRegTransform *iReg = NULL;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
        iReg = iReg_->_underlying;
    }

    Plane_Transform_AsyncWorker *asyncWorker = new Plane_Transform_AsyncWorker(_underlying, deferred,

                                                                               mat,

                                                                               iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Plane::Move(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Vector3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Vector3D v is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'v'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Vector3D *v_ = Vector3D::Unwrap(info[0].ToObject());

    const MbVector3D &v = *v_->_underlying;

    MbRegTransform *iReg = NULL;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
        iReg = iReg_->_underlying;
    }

    _underlying->Move(v, info.Length() == 1 || info[1].IsNull() ? NULL : iReg

    );

    return env.Undefined();
}

Napi::Value Plane::Move_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Vector3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Vector3D v is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'v'"));
        return deferred.Promise();
    }
    const class Vector3D *v_ = Vector3D::Unwrap(info[0].ToObject());

    const MbVector3D &v = *v_->_underlying;

    MbRegTransform *iReg = NULL;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
        iReg = iReg_->_underlying;
    }

    Plane_Move_AsyncWorker *asyncWorker = new Plane_Move_AsyncWorker(_underlying, deferred,

                                                                     v,

                                                                     iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Plane::Rotate(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Axis3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Axis3D axis is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        Napi::Error::New(env, "number angle is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'axis'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Axis3D *axis_ = Axis3D::Unwrap(info[0].ToObject());

    const MbAxis3D &axis = *axis_->_underlying;

    double angle = info[1].ToNumber().DoubleValue();

    MbRegTransform *iReg = NULL;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[2].ToObject());
        iReg = iReg_->_underlying;
    }

    _underlying->Rotate(axis, angle, info.Length() == 2 || info[2].IsNull() ? NULL : iReg

    );

    return env.Undefined();
}

Napi::Value Plane::Rotate_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Axis3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Axis3D axis is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number angle is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'axis'"));
        return deferred.Promise();
    }
    const class Axis3D *axis_ = Axis3D::Unwrap(info[0].ToObject());

    const MbAxis3D &axis = *axis_->_underlying;

    double angle = info[1].ToNumber().DoubleValue();

    MbRegTransform *iReg = NULL;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[2].ToObject());
        iReg = iReg_->_underlying;
    }

    Plane_Rotate_AsyncWorker *asyncWorker = new Plane_Rotate_AsyncWorker(_underlying, deferred,

                                                                         axis,

                                                                         angle,

                                                                         iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Plane::Refresh(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->Refresh(

    );

    return env.Undefined();
}

Napi::Value Plane::Refresh_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Plane_Refresh_AsyncWorker *asyncWorker = new Plane_Refresh_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Plane::Duplicate(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbRegDuplicate *iReg = NULL;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        RegDuplicate *iReg_ = RegDuplicate::Unwrap(info[0].ToObject());
        iReg = iReg_->_underlying;
    }

    MbSpaceItem &_result = _underlying->Duplicate(info.Length() == 0 || info[0].IsNull() ? NULL : iReg

    );

    Napi::Value _to;

    _to = SpaceItem::NewInstance(env, (MbSpaceItem *)&(_result));

    return _to;
}

Napi::Value Plane::Duplicate_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    MbRegDuplicate *iReg = NULL;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        RegDuplicate *iReg_ = RegDuplicate::Unwrap(info[0].ToObject());
        iReg = iReg_->_underlying;
    }

    Plane_Duplicate_AsyncWorker *asyncWorker = new Plane_Duplicate_AsyncWorker(_underlying, deferred,

                                                                               iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Plane::AddYourGabaritTo(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Cube::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Cube cube is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'cube'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Cube *cube_ = Cube::Unwrap(info[0].ToObject());

    MbCube &cube = *cube_->_underlying;

    _underlying->AddYourGabaritTo(cube

    );

    return env.Undefined();
}

Napi::Value Plane::AddYourGabaritTo_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Cube::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Cube cube is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'cube'"));
        return deferred.Promise();
    }
    const class Cube *cube_ = Cube::Unwrap(info[0].ToObject());

    MbCube &cube = *cube_->_underlying;

    Plane_AddYourGabaritTo_AsyncWorker *asyncWorker = new Plane_AddYourGabaritTo_AsyncWorker(_underlying, deferred,

                                                                                             cube);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Plane::GetUseCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    refcount_t _result = _underlying->GetUseCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Plane::GetUseCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Plane_GetUseCount_AsyncWorker *asyncWorker = new Plane_GetUseCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Plane::AddRef(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->AddRef(

    );

    return env.Undefined();
}

Napi::Value Plane::AddRef_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Plane_AddRef_AsyncWorker *asyncWorker = new Plane_AddRef_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value Plane::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

Plane::~Plane()
{
    // std::cout << "calling ::DeleteItem on Plane for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

Plane_GetSurface_AsyncWorker::Plane_GetSurface_AsyncWorker(MbPlane *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Plane_GetSurface_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbSurface &_result = _underlying->GetSurface();

    this->_result = (MbSurface *)&(_result);

    ExitParallelRegion();
}

void Plane_GetSurface_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbSurface *_result = this->_result;
    _to = Surface::NewInstance(env, (MbSurface *)&(_result));

    deferred.Resolve(_to);
}

void Plane_GetSurface_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Plane_GetUEpsilon_AsyncWorker::Plane_GetUEpsilon_AsyncWorker(MbPlane *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Plane_GetUEpsilon_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetUEpsilon();

    this->_result = _result;

    ExitParallelRegion();
}

void Plane_GetUEpsilon_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Plane_GetUEpsilon_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Plane_GetVEpsilon_AsyncWorker::Plane_GetVEpsilon_AsyncWorker(MbPlane *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Plane_GetVEpsilon_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetVEpsilon();

    this->_result = _result;

    ExitParallelRegion();
}

void Plane_GetVEpsilon_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Plane_GetVEpsilon_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Plane_GetUMid_AsyncWorker::Plane_GetUMid_AsyncWorker(MbPlane *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Plane_GetUMid_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetUMid();

    this->_result = _result;

    ExitParallelRegion();
}

void Plane_GetUMid_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Plane_GetUMid_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Plane_GetVMid_AsyncWorker::Plane_GetVMid_AsyncWorker(MbPlane *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Plane_GetVMid_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetVMid();

    this->_result = _result;

    ExitParallelRegion();
}

void Plane_GetVMid_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Plane_GetVMid_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Plane_GetUMin_AsyncWorker::Plane_GetUMin_AsyncWorker(MbPlane *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Plane_GetUMin_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetUMin();

    this->_result = _result;

    ExitParallelRegion();
}

void Plane_GetUMin_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Plane_GetUMin_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Plane_GetUMax_AsyncWorker::Plane_GetUMax_AsyncWorker(MbPlane *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Plane_GetUMax_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetUMax();

    this->_result = _result;

    ExitParallelRegion();
}

void Plane_GetUMax_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Plane_GetUMax_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Plane_GetVMin_AsyncWorker::Plane_GetVMin_AsyncWorker(MbPlane *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Plane_GetVMin_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetVMin();

    this->_result = _result;

    ExitParallelRegion();
}

void Plane_GetVMin_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Plane_GetVMin_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Plane_GetVMax_AsyncWorker::Plane_GetVMax_AsyncWorker(MbPlane *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Plane_GetVMax_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetVMax();

    this->_result = _result;

    ExitParallelRegion();
}

void Plane_GetVMax_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Plane_GetVMax_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Plane_GetUParamToUnit_AsyncWorker::Plane_GetUParamToUnit_AsyncWorker(MbPlane *_underlying,
                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Plane_GetUParamToUnit_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetUParamToUnit();

    this->_result = _result;

    ExitParallelRegion();
}

void Plane_GetUParamToUnit_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Plane_GetUParamToUnit_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Plane_GetVParamToUnit_AsyncWorker::Plane_GetVParamToUnit_AsyncWorker(MbPlane *_underlying,
                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Plane_GetVParamToUnit_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetVParamToUnit();

    this->_result = _result;

    ExitParallelRegion();
}

void Plane_GetVParamToUnit_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Plane_GetVParamToUnit_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Plane_GetRadius_AsyncWorker::Plane_GetRadius_AsyncWorker(MbPlane *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Plane_GetRadius_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetRadius();

    this->_result = _result;

    ExitParallelRegion();
}

void Plane_GetRadius_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Plane_GetRadius_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Plane_Normal_AsyncWorker::Plane_Normal_AsyncWorker(MbPlane *_underlying, Napi::Promise::Deferred const &d, double &u,
                                                   double &v)
    : _underlying(_underlying), PromiseWorker(d), u(u), v(v){};

void Plane_Normal_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector3D *result = new MbVector3D;

    _underlying->Normal(u, v, *result);

    this->result = result;

    ExitParallelRegion();
}

void Plane_Normal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbVector3D *result = this->result;
    if (result != NULL)
    {
        _to = Vector3D::NewInstance(env, (MbVector3D *)result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void Plane_Normal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Plane_NearDirectPointProjection_AsyncWorker::Plane_NearDirectPointProjection_AsyncWorker(
    MbPlane *_underlying, Napi::Promise::Deferred const &d, const MbCartPoint3D &pnt, const MbVector3D &vect, bool ext,
    MbRect2D *uvRange, bool onlyPositiveDirection)
    : _underlying(_underlying), PromiseWorker(d), pnt(pnt), vect(vect), ext(ext), uvRange(uvRange),
      onlyPositiveDirection(onlyPositiveDirection){};

void Plane_NearDirectPointProjection_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double u;
    double v;

    bool _result = _underlying->NearDirectPointProjection(pnt, vect, u, v, ext, uvRange, onlyPositiveDirection);

    if (_result)
    {

        this->u = u;
        this->v = v;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation NearDirectPointProjection failed";
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void Plane_NearDirectPointProjection_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    Napi::Object _toReturn = Napi::Object::New(env);

    double u = this->u;
    _to = Napi::Number::New(env, u);

    _toReturn.Set(Napi::String::New(env, "u"), _to);
    double v = this->v;
    _to = Napi::Number::New(env, v);

    _toReturn.Set(Napi::String::New(env, "v"), _to);

    deferred.Resolve(_toReturn);
}

void Plane_NearDirectPointProjection_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                         Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Plane_IsA_AsyncWorker::Plane_IsA_AsyncWorker(MbPlane *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Plane_IsA_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeSpaceType _result = _underlying->IsA();

    this->_result = _result;

    ExitParallelRegion();
}

void Plane_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeSpaceType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Plane_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Plane_Type_AsyncWorker::Plane_Type_AsyncWorker(MbPlane *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Plane_Type_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeSpaceType _result = _underlying->Type();

    this->_result = _result;

    ExitParallelRegion();
}

void Plane_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeSpaceType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Plane_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Plane_Family_AsyncWorker::Plane_Family_AsyncWorker(MbPlane *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Plane_Family_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeSpaceType _result = _underlying->Family();

    this->_result = _result;

    ExitParallelRegion();
}

void Plane_Family_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeSpaceType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Plane_Family_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Plane_Transform_AsyncWorker::Plane_Transform_AsyncWorker(MbPlane *_underlying, Napi::Promise::Deferred const &d,
                                                         const MbMatrix3D &mat, MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), mat(mat), iReg(iReg){};

void Plane_Transform_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Transform(mat, iReg);

    ExitParallelRegion();
}

void Plane_Transform_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Plane_Transform_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Plane_Move_AsyncWorker::Plane_Move_AsyncWorker(MbPlane *_underlying, Napi::Promise::Deferred const &d,
                                               const MbVector3D &v, MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), v(v), iReg(iReg){};

void Plane_Move_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Move(v, iReg);

    ExitParallelRegion();
}

void Plane_Move_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Plane_Move_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Plane_Rotate_AsyncWorker::Plane_Rotate_AsyncWorker(MbPlane *_underlying, Napi::Promise::Deferred const &d,
                                                   const MbAxis3D &axis, double angle, MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), axis(axis), angle(angle), iReg(iReg){};

void Plane_Rotate_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Rotate(axis, angle, iReg);

    ExitParallelRegion();
}

void Plane_Rotate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Plane_Rotate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Plane_Refresh_AsyncWorker::Plane_Refresh_AsyncWorker(MbPlane *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Plane_Refresh_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Refresh();

    ExitParallelRegion();
}

void Plane_Refresh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Plane_Refresh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Plane_Duplicate_AsyncWorker::Plane_Duplicate_AsyncWorker(MbPlane *_underlying, Napi::Promise::Deferred const &d,
                                                         MbRegDuplicate *iReg)
    : _underlying(_underlying), PromiseWorker(d), iReg(iReg){};

void Plane_Duplicate_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbSpaceItem &_result = _underlying->Duplicate(iReg);

    this->_result = (MbSpaceItem *)&(_result);

    ExitParallelRegion();
}

void Plane_Duplicate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbSpaceItem *_result = this->_result;
    _to = SpaceItem::NewInstance(env, (MbSpaceItem *)&(_result));

    deferred.Resolve(_to);
}

void Plane_Duplicate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Plane_AddYourGabaritTo_AsyncWorker::Plane_AddYourGabaritTo_AsyncWorker(MbPlane *_underlying,
                                                                       Napi::Promise::Deferred const &d, MbCube &cube)
    : _underlying(_underlying), PromiseWorker(d), cube(cube){};

void Plane_AddYourGabaritTo_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddYourGabaritTo(cube);

    ExitParallelRegion();
}

void Plane_AddYourGabaritTo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Plane_AddYourGabaritTo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Plane_GetUseCount_AsyncWorker::Plane_GetUseCount_AsyncWorker(MbPlane *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Plane_GetUseCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    refcount_t _result = _underlying->GetUseCount();

    this->_result = _result;

    ExitParallelRegion();
}

void Plane_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    refcount_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Plane_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Plane_AddRef_AsyncWorker::Plane_AddRef_AsyncWorker(MbPlane *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Plane_AddRef_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddRef();

    ExitParallelRegion();
}

void Plane_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Plane_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
