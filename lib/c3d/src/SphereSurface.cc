// This is a generated file, modify: generate/templates/SphereSurface.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/SphereSurface.h"

#include "tool_mutex.h"

Napi::Object SphereSurface::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(
        env, "SphereSurface",
        {
            InstanceMethod<&SphereSurface::GetSurface>("GetSurface"),
            InstanceMethod<&SphereSurface::GetSurface_async>("GetSurface_async"),
            InstanceMethod<&SphereSurface::GetUEpsilon>("GetUEpsilon"),
            InstanceMethod<&SphereSurface::GetUEpsilon_async>("GetUEpsilon_async"),
            InstanceMethod<&SphereSurface::GetVEpsilon>("GetVEpsilon"),
            InstanceMethod<&SphereSurface::GetVEpsilon_async>("GetVEpsilon_async"),
            InstanceMethod<&SphereSurface::GetUMid>("GetUMid"),
            InstanceMethod<&SphereSurface::GetUMid_async>("GetUMid_async"),
            InstanceMethod<&SphereSurface::GetVMid>("GetVMid"),
            InstanceMethod<&SphereSurface::GetVMid_async>("GetVMid_async"),
            InstanceMethod<&SphereSurface::GetUMin>("GetUMin"),
            InstanceMethod<&SphereSurface::GetUMin_async>("GetUMin_async"),
            InstanceMethod<&SphereSurface::GetUMax>("GetUMax"),
            InstanceMethod<&SphereSurface::GetUMax_async>("GetUMax_async"),
            InstanceMethod<&SphereSurface::GetVMin>("GetVMin"),
            InstanceMethod<&SphereSurface::GetVMin_async>("GetVMin_async"),
            InstanceMethod<&SphereSurface::GetVMax>("GetVMax"),
            InstanceMethod<&SphereSurface::GetVMax_async>("GetVMax_async"),
            InstanceMethod<&SphereSurface::GetUParamToUnit>("GetUParamToUnit"),
            InstanceMethod<&SphereSurface::GetUParamToUnit_async>("GetUParamToUnit_async"),
            InstanceMethod<&SphereSurface::GetVParamToUnit>("GetVParamToUnit"),
            InstanceMethod<&SphereSurface::GetVParamToUnit_async>("GetVParamToUnit_async"),
            InstanceMethod<&SphereSurface::GetRadius>("GetRadius"),
            InstanceMethod<&SphereSurface::GetRadius_async>("GetRadius_async"),
            InstanceMethod<&SphereSurface::Normal>("Normal"),
            InstanceMethod<&SphereSurface::Normal_async>("Normal_async"),
            InstanceMethod<&SphereSurface::NearDirectPointProjection>("NearDirectPointProjection"),
            InstanceMethod<&SphereSurface::NearDirectPointProjection_async>("NearDirectPointProjection_async"),
            InstanceMethod<&SphereSurface::IsA>("IsA"),
            InstanceMethod<&SphereSurface::IsA_async>("IsA_async"),
            InstanceMethod<&SphereSurface::Type>("Type"),
            InstanceMethod<&SphereSurface::Type_async>("Type_async"),
            InstanceMethod<&SphereSurface::Family>("Family"),
            InstanceMethod<&SphereSurface::Family_async>("Family_async"),
            InstanceMethod<&SphereSurface::Transform>("Transform"),
            InstanceMethod<&SphereSurface::Transform_async>("Transform_async"),
            InstanceMethod<&SphereSurface::Move>("Move"),
            InstanceMethod<&SphereSurface::Move_async>("Move_async"),
            InstanceMethod<&SphereSurface::Rotate>("Rotate"),
            InstanceMethod<&SphereSurface::Rotate_async>("Rotate_async"),
            InstanceMethod<&SphereSurface::Refresh>("Refresh"),
            InstanceMethod<&SphereSurface::Refresh_async>("Refresh_async"),
            InstanceMethod<&SphereSurface::Duplicate>("Duplicate"),
            InstanceMethod<&SphereSurface::Duplicate_async>("Duplicate_async"),
            InstanceMethod<&SphereSurface::AddYourGabaritTo>("AddYourGabaritTo"),
            InstanceMethod<&SphereSurface::AddYourGabaritTo_async>("AddYourGabaritTo_async"),
            InstanceMethod<&SphereSurface::GetUseCount>("GetUseCount"),
            InstanceMethod<&SphereSurface::GetUseCount_async>("GetUseCount_async"),
            InstanceMethod<&SphereSurface::AddRef>("AddRef"),
            InstanceMethod<&SphereSurface::AddRef_async>("AddRef_async"),
            InstanceMethod<&SphereSurface::Id>("Id"),

        });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("SphereSurface", func);

    Napi::Object global = env.Global();
    Napi::Object Object = global.Get("Object").ToObject();
    Napi::Function setPrototypeOf = Napi::Function(env, Object.Get("setPrototypeOf"));
    Napi::Value prototype = func.Get("prototype");

    Napi::Function superFunc = ElementarySurface::GetConstructor(env);
    Napi::FunctionReference *superConstructor = new Napi::FunctionReference();
    *superConstructor = Napi::Persistent(superFunc);

    Napi::Value superPrototype = superFunc.Get("prototype");
    setPrototypeOf.Call({prototype, superPrototype});
    setPrototypeOf.Call({func, superFunc});

    return exports;
}

SphereSurface::SphereSurface(const Napi::CallbackInfo &info) : Napi::ObjectWrap<SphereSurface>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 2 &&
        ((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))) &&
        ((info[1].IsNumber()))

    )
    {
        if (info[0].IsNull() || info[0].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'centre'").ThrowAsJavaScriptException();
            return;
        }
        const class CartPoint3D *centre_ = CartPoint3D::Unwrap(info[0].ToObject());

        const MbCartPoint3D &centre = *centre_->_underlying;

        double r = info[1].ToNumber().DoubleValue();

        MbSphereSurface *underlying = new MbSphereSurface(centre, r);
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

Napi::Object SphereSurface::NewInstance(Napi::Env env, MbSphereSurface *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("SphereSurface");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    SphereSurface *unwrapped = SphereSurface::Unwrap(inst);
    underlying->AddRef();
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function SphereSurface::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("SphereSurface");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value SphereSurface::GetSurface(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbSurface &_result = _underlying->GetSurface(

    );

    Napi::Value _to;

    _to = Surface::NewInstance(env, (MbSurface *)&(_result));

    return _to;
}

Napi::Value SphereSurface::GetSurface_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SphereSurface_GetSurface_AsyncWorker *asyncWorker = new SphereSurface_GetSurface_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SphereSurface::GetUEpsilon(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetUEpsilon(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value SphereSurface::GetUEpsilon_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SphereSurface_GetUEpsilon_AsyncWorker *asyncWorker =
        new SphereSurface_GetUEpsilon_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SphereSurface::GetVEpsilon(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetVEpsilon(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value SphereSurface::GetVEpsilon_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SphereSurface_GetVEpsilon_AsyncWorker *asyncWorker =
        new SphereSurface_GetVEpsilon_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SphereSurface::GetUMid(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetUMid(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value SphereSurface::GetUMid_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SphereSurface_GetUMid_AsyncWorker *asyncWorker = new SphereSurface_GetUMid_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SphereSurface::GetVMid(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetVMid(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value SphereSurface::GetVMid_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SphereSurface_GetVMid_AsyncWorker *asyncWorker = new SphereSurface_GetVMid_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SphereSurface::GetUMin(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetUMin(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value SphereSurface::GetUMin_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SphereSurface_GetUMin_AsyncWorker *asyncWorker = new SphereSurface_GetUMin_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SphereSurface::GetUMax(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetUMax(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value SphereSurface::GetUMax_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SphereSurface_GetUMax_AsyncWorker *asyncWorker = new SphereSurface_GetUMax_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SphereSurface::GetVMin(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetVMin(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value SphereSurface::GetVMin_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SphereSurface_GetVMin_AsyncWorker *asyncWorker = new SphereSurface_GetVMin_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SphereSurface::GetVMax(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetVMax(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value SphereSurface::GetVMax_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SphereSurface_GetVMax_AsyncWorker *asyncWorker = new SphereSurface_GetVMax_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SphereSurface::GetUParamToUnit(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetUParamToUnit(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value SphereSurface::GetUParamToUnit_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SphereSurface_GetUParamToUnit_AsyncWorker *asyncWorker =
        new SphereSurface_GetUParamToUnit_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SphereSurface::GetVParamToUnit(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetVParamToUnit(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value SphereSurface::GetVParamToUnit_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SphereSurface_GetVParamToUnit_AsyncWorker *asyncWorker =
        new SphereSurface_GetVParamToUnit_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SphereSurface::GetRadius(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetRadius(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value SphereSurface::GetRadius_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SphereSurface_GetRadius_AsyncWorker *asyncWorker = new SphereSurface_GetRadius_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SphereSurface::Normal(const Napi::CallbackInfo &info)
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

Napi::Value SphereSurface::Normal_async(const Napi::CallbackInfo &info)
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

    SphereSurface_Normal_AsyncWorker *asyncWorker = new SphereSurface_Normal_AsyncWorker(_underlying, deferred,

                                                                                         u,

                                                                                         v);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SphereSurface::NearDirectPointProjection(const Napi::CallbackInfo &info)
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

Napi::Value SphereSurface::NearDirectPointProjection_async(const Napi::CallbackInfo &info)
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

    SphereSurface_NearDirectPointProjection_AsyncWorker *asyncWorker =
        new SphereSurface_NearDirectPointProjection_AsyncWorker(_underlying, deferred,

                                                                pnt,

                                                                vect,

                                                                ext,

                                                                uvRange,

                                                                onlyPositiveDirection);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SphereSurface::IsA(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeSpaceType _result = _underlying->IsA(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value SphereSurface::IsA_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SphereSurface_IsA_AsyncWorker *asyncWorker = new SphereSurface_IsA_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SphereSurface::Type(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeSpaceType _result = _underlying->Type(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value SphereSurface::Type_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SphereSurface_Type_AsyncWorker *asyncWorker = new SphereSurface_Type_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SphereSurface::Family(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeSpaceType _result = _underlying->Family(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value SphereSurface::Family_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SphereSurface_Family_AsyncWorker *asyncWorker = new SphereSurface_Family_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SphereSurface::Transform(const Napi::CallbackInfo &info)
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

Napi::Value SphereSurface::Transform_async(const Napi::CallbackInfo &info)
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

    SphereSurface_Transform_AsyncWorker *asyncWorker = new SphereSurface_Transform_AsyncWorker(_underlying, deferred,

                                                                                               mat,

                                                                                               iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SphereSurface::Move(const Napi::CallbackInfo &info)
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

Napi::Value SphereSurface::Move_async(const Napi::CallbackInfo &info)
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

    SphereSurface_Move_AsyncWorker *asyncWorker = new SphereSurface_Move_AsyncWorker(_underlying, deferred,

                                                                                     v,

                                                                                     iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SphereSurface::Rotate(const Napi::CallbackInfo &info)
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

Napi::Value SphereSurface::Rotate_async(const Napi::CallbackInfo &info)
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

    SphereSurface_Rotate_AsyncWorker *asyncWorker = new SphereSurface_Rotate_AsyncWorker(_underlying, deferred,

                                                                                         axis,

                                                                                         angle,

                                                                                         iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SphereSurface::Refresh(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->Refresh(

    );

    return env.Undefined();
}

Napi::Value SphereSurface::Refresh_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SphereSurface_Refresh_AsyncWorker *asyncWorker = new SphereSurface_Refresh_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SphereSurface::Duplicate(const Napi::CallbackInfo &info)
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

Napi::Value SphereSurface::Duplicate_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    MbRegDuplicate *iReg = NULL;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        RegDuplicate *iReg_ = RegDuplicate::Unwrap(info[0].ToObject());
        iReg = iReg_->_underlying;
    }

    SphereSurface_Duplicate_AsyncWorker *asyncWorker = new SphereSurface_Duplicate_AsyncWorker(_underlying, deferred,

                                                                                               iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SphereSurface::AddYourGabaritTo(const Napi::CallbackInfo &info)
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

Napi::Value SphereSurface::AddYourGabaritTo_async(const Napi::CallbackInfo &info)
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

    SphereSurface_AddYourGabaritTo_AsyncWorker *asyncWorker =
        new SphereSurface_AddYourGabaritTo_AsyncWorker(_underlying, deferred,

                                                       cube);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SphereSurface::GetUseCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    refcount_t _result = _underlying->GetUseCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value SphereSurface::GetUseCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SphereSurface_GetUseCount_AsyncWorker *asyncWorker =
        new SphereSurface_GetUseCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SphereSurface::AddRef(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->AddRef(

    );

    return env.Undefined();
}

Napi::Value SphereSurface::AddRef_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SphereSurface_AddRef_AsyncWorker *asyncWorker = new SphereSurface_AddRef_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value SphereSurface::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

SphereSurface::~SphereSurface()
{
    // std::cout << "calling ::DeleteItem on SphereSurface for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

SphereSurface_GetSurface_AsyncWorker::SphereSurface_GetSurface_AsyncWorker(MbSphereSurface *_underlying,
                                                                           Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SphereSurface_GetSurface_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbSurface &_result = _underlying->GetSurface();

    this->_result = (MbSurface *)&(_result);

    ExitParallelRegion();
}

void SphereSurface_GetSurface_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbSurface *_result = this->_result;
    _to = Surface::NewInstance(env, (MbSurface *)&(_result));

    deferred.Resolve(_to);
}

void SphereSurface_GetSurface_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SphereSurface_GetUEpsilon_AsyncWorker::SphereSurface_GetUEpsilon_AsyncWorker(MbSphereSurface *_underlying,
                                                                             Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SphereSurface_GetUEpsilon_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetUEpsilon();

    this->_result = _result;

    ExitParallelRegion();
}

void SphereSurface_GetUEpsilon_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void SphereSurface_GetUEpsilon_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SphereSurface_GetVEpsilon_AsyncWorker::SphereSurface_GetVEpsilon_AsyncWorker(MbSphereSurface *_underlying,
                                                                             Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SphereSurface_GetVEpsilon_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetVEpsilon();

    this->_result = _result;

    ExitParallelRegion();
}

void SphereSurface_GetVEpsilon_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void SphereSurface_GetVEpsilon_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SphereSurface_GetUMid_AsyncWorker::SphereSurface_GetUMid_AsyncWorker(MbSphereSurface *_underlying,
                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SphereSurface_GetUMid_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetUMid();

    this->_result = _result;

    ExitParallelRegion();
}

void SphereSurface_GetUMid_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void SphereSurface_GetUMid_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SphereSurface_GetVMid_AsyncWorker::SphereSurface_GetVMid_AsyncWorker(MbSphereSurface *_underlying,
                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SphereSurface_GetVMid_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetVMid();

    this->_result = _result;

    ExitParallelRegion();
}

void SphereSurface_GetVMid_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void SphereSurface_GetVMid_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SphereSurface_GetUMin_AsyncWorker::SphereSurface_GetUMin_AsyncWorker(MbSphereSurface *_underlying,
                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SphereSurface_GetUMin_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetUMin();

    this->_result = _result;

    ExitParallelRegion();
}

void SphereSurface_GetUMin_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void SphereSurface_GetUMin_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SphereSurface_GetUMax_AsyncWorker::SphereSurface_GetUMax_AsyncWorker(MbSphereSurface *_underlying,
                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SphereSurface_GetUMax_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetUMax();

    this->_result = _result;

    ExitParallelRegion();
}

void SphereSurface_GetUMax_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void SphereSurface_GetUMax_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SphereSurface_GetVMin_AsyncWorker::SphereSurface_GetVMin_AsyncWorker(MbSphereSurface *_underlying,
                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SphereSurface_GetVMin_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetVMin();

    this->_result = _result;

    ExitParallelRegion();
}

void SphereSurface_GetVMin_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void SphereSurface_GetVMin_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SphereSurface_GetVMax_AsyncWorker::SphereSurface_GetVMax_AsyncWorker(MbSphereSurface *_underlying,
                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SphereSurface_GetVMax_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetVMax();

    this->_result = _result;

    ExitParallelRegion();
}

void SphereSurface_GetVMax_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void SphereSurface_GetVMax_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SphereSurface_GetUParamToUnit_AsyncWorker::SphereSurface_GetUParamToUnit_AsyncWorker(MbSphereSurface *_underlying,
                                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SphereSurface_GetUParamToUnit_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetUParamToUnit();

    this->_result = _result;

    ExitParallelRegion();
}

void SphereSurface_GetUParamToUnit_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void SphereSurface_GetUParamToUnit_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                       Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SphereSurface_GetVParamToUnit_AsyncWorker::SphereSurface_GetVParamToUnit_AsyncWorker(MbSphereSurface *_underlying,
                                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SphereSurface_GetVParamToUnit_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetVParamToUnit();

    this->_result = _result;

    ExitParallelRegion();
}

void SphereSurface_GetVParamToUnit_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void SphereSurface_GetVParamToUnit_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                       Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SphereSurface_GetRadius_AsyncWorker::SphereSurface_GetRadius_AsyncWorker(MbSphereSurface *_underlying,
                                                                         Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SphereSurface_GetRadius_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetRadius();

    this->_result = _result;

    ExitParallelRegion();
}

void SphereSurface_GetRadius_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void SphereSurface_GetRadius_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SphereSurface_Normal_AsyncWorker::SphereSurface_Normal_AsyncWorker(MbSphereSurface *_underlying,
                                                                   Napi::Promise::Deferred const &d, double &u,
                                                                   double &v)
    : _underlying(_underlying), PromiseWorker(d), u(u), v(v){};

void SphereSurface_Normal_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector3D *result = new MbVector3D;

    _underlying->Normal(u, v, *result);

    this->result = result;

    ExitParallelRegion();
}

void SphereSurface_Normal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void SphereSurface_Normal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SphereSurface_NearDirectPointProjection_AsyncWorker::SphereSurface_NearDirectPointProjection_AsyncWorker(
    MbSphereSurface *_underlying, Napi::Promise::Deferred const &d, const MbCartPoint3D &pnt, const MbVector3D &vect,
    bool ext, MbRect2D *uvRange, bool onlyPositiveDirection)
    : _underlying(_underlying), PromiseWorker(d), pnt(pnt), vect(vect), ext(ext), uvRange(uvRange),
      onlyPositiveDirection(onlyPositiveDirection){};

void SphereSurface_NearDirectPointProjection_AsyncWorker::Execute()
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

void SphereSurface_NearDirectPointProjection_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void SphereSurface_NearDirectPointProjection_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                                 Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SphereSurface_IsA_AsyncWorker::SphereSurface_IsA_AsyncWorker(MbSphereSurface *_underlying,
                                                             Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SphereSurface_IsA_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeSpaceType _result = _underlying->IsA();

    this->_result = _result;

    ExitParallelRegion();
}

void SphereSurface_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeSpaceType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void SphereSurface_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SphereSurface_Type_AsyncWorker::SphereSurface_Type_AsyncWorker(MbSphereSurface *_underlying,
                                                               Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SphereSurface_Type_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeSpaceType _result = _underlying->Type();

    this->_result = _result;

    ExitParallelRegion();
}

void SphereSurface_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeSpaceType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void SphereSurface_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SphereSurface_Family_AsyncWorker::SphereSurface_Family_AsyncWorker(MbSphereSurface *_underlying,
                                                                   Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SphereSurface_Family_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeSpaceType _result = _underlying->Family();

    this->_result = _result;

    ExitParallelRegion();
}

void SphereSurface_Family_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeSpaceType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void SphereSurface_Family_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SphereSurface_Transform_AsyncWorker::SphereSurface_Transform_AsyncWorker(MbSphereSurface *_underlying,
                                                                         Napi::Promise::Deferred const &d,
                                                                         const MbMatrix3D &mat, MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), mat(mat), iReg(iReg){};

void SphereSurface_Transform_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Transform(mat, iReg);

    ExitParallelRegion();
}

void SphereSurface_Transform_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void SphereSurface_Transform_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SphereSurface_Move_AsyncWorker::SphereSurface_Move_AsyncWorker(MbSphereSurface *_underlying,
                                                               Napi::Promise::Deferred const &d, const MbVector3D &v,
                                                               MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), v(v), iReg(iReg){};

void SphereSurface_Move_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Move(v, iReg);

    ExitParallelRegion();
}

void SphereSurface_Move_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void SphereSurface_Move_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SphereSurface_Rotate_AsyncWorker::SphereSurface_Rotate_AsyncWorker(MbSphereSurface *_underlying,
                                                                   Napi::Promise::Deferred const &d,
                                                                   const MbAxis3D &axis, double angle,
                                                                   MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), axis(axis), angle(angle), iReg(iReg){};

void SphereSurface_Rotate_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Rotate(axis, angle, iReg);

    ExitParallelRegion();
}

void SphereSurface_Rotate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void SphereSurface_Rotate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SphereSurface_Refresh_AsyncWorker::SphereSurface_Refresh_AsyncWorker(MbSphereSurface *_underlying,
                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SphereSurface_Refresh_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Refresh();

    ExitParallelRegion();
}

void SphereSurface_Refresh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void SphereSurface_Refresh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SphereSurface_Duplicate_AsyncWorker::SphereSurface_Duplicate_AsyncWorker(MbSphereSurface *_underlying,
                                                                         Napi::Promise::Deferred const &d,
                                                                         MbRegDuplicate *iReg)
    : _underlying(_underlying), PromiseWorker(d), iReg(iReg){};

void SphereSurface_Duplicate_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbSpaceItem &_result = _underlying->Duplicate(iReg);

    this->_result = (MbSpaceItem *)&(_result);

    ExitParallelRegion();
}

void SphereSurface_Duplicate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbSpaceItem *_result = this->_result;
    _to = SpaceItem::NewInstance(env, (MbSpaceItem *)&(_result));

    deferred.Resolve(_to);
}

void SphereSurface_Duplicate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SphereSurface_AddYourGabaritTo_AsyncWorker::SphereSurface_AddYourGabaritTo_AsyncWorker(MbSphereSurface *_underlying,
                                                                                       Napi::Promise::Deferred const &d,
                                                                                       MbCube &cube)
    : _underlying(_underlying), PromiseWorker(d), cube(cube){};

void SphereSurface_AddYourGabaritTo_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddYourGabaritTo(cube);

    ExitParallelRegion();
}

void SphereSurface_AddYourGabaritTo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void SphereSurface_AddYourGabaritTo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                        Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SphereSurface_GetUseCount_AsyncWorker::SphereSurface_GetUseCount_AsyncWorker(MbSphereSurface *_underlying,
                                                                             Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SphereSurface_GetUseCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    refcount_t _result = _underlying->GetUseCount();

    this->_result = _result;

    ExitParallelRegion();
}

void SphereSurface_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    refcount_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void SphereSurface_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SphereSurface_AddRef_AsyncWorker::SphereSurface_AddRef_AsyncWorker(MbSphereSurface *_underlying,
                                                                   Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SphereSurface_AddRef_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddRef();

    ExitParallelRegion();
}

void SphereSurface_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void SphereSurface_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
