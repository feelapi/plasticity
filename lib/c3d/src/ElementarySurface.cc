// This is a generated file, modify: generate/templates/ElementarySurface.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/ElementarySurface.h"

#include "tool_mutex.h"

Napi::Object ElementarySurface::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(
        env, "ElementarySurface",
        {
            InstanceMethod<&ElementarySurface::GetSurface>("GetSurface"),
            InstanceMethod<&ElementarySurface::GetSurface_async>("GetSurface_async"),
            InstanceMethod<&ElementarySurface::GetUEpsilon>("GetUEpsilon"),
            InstanceMethod<&ElementarySurface::GetUEpsilon_async>("GetUEpsilon_async"),
            InstanceMethod<&ElementarySurface::GetVEpsilon>("GetVEpsilon"),
            InstanceMethod<&ElementarySurface::GetVEpsilon_async>("GetVEpsilon_async"),
            InstanceMethod<&ElementarySurface::GetUMid>("GetUMid"),
            InstanceMethod<&ElementarySurface::GetUMid_async>("GetUMid_async"),
            InstanceMethod<&ElementarySurface::GetVMid>("GetVMid"),
            InstanceMethod<&ElementarySurface::GetVMid_async>("GetVMid_async"),
            InstanceMethod<&ElementarySurface::GetUMin>("GetUMin"),
            InstanceMethod<&ElementarySurface::GetUMin_async>("GetUMin_async"),
            InstanceMethod<&ElementarySurface::GetUMax>("GetUMax"),
            InstanceMethod<&ElementarySurface::GetUMax_async>("GetUMax_async"),
            InstanceMethod<&ElementarySurface::GetVMin>("GetVMin"),
            InstanceMethod<&ElementarySurface::GetVMin_async>("GetVMin_async"),
            InstanceMethod<&ElementarySurface::GetVMax>("GetVMax"),
            InstanceMethod<&ElementarySurface::GetVMax_async>("GetVMax_async"),
            InstanceMethod<&ElementarySurface::GetUParamToUnit>("GetUParamToUnit"),
            InstanceMethod<&ElementarySurface::GetUParamToUnit_async>("GetUParamToUnit_async"),
            InstanceMethod<&ElementarySurface::GetVParamToUnit>("GetVParamToUnit"),
            InstanceMethod<&ElementarySurface::GetVParamToUnit_async>("GetVParamToUnit_async"),
            InstanceMethod<&ElementarySurface::GetRadius>("GetRadius"),
            InstanceMethod<&ElementarySurface::GetRadius_async>("GetRadius_async"),
            InstanceMethod<&ElementarySurface::Normal>("Normal"),
            InstanceMethod<&ElementarySurface::Normal_async>("Normal_async"),
            InstanceMethod<&ElementarySurface::NearDirectPointProjection>("NearDirectPointProjection"),
            InstanceMethod<&ElementarySurface::NearDirectPointProjection_async>("NearDirectPointProjection_async"),
            InstanceMethod<&ElementarySurface::IsA>("IsA"),
            InstanceMethod<&ElementarySurface::IsA_async>("IsA_async"),
            InstanceMethod<&ElementarySurface::Type>("Type"),
            InstanceMethod<&ElementarySurface::Type_async>("Type_async"),
            InstanceMethod<&ElementarySurface::Family>("Family"),
            InstanceMethod<&ElementarySurface::Family_async>("Family_async"),
            InstanceMethod<&ElementarySurface::Transform>("Transform"),
            InstanceMethod<&ElementarySurface::Transform_async>("Transform_async"),
            InstanceMethod<&ElementarySurface::Move>("Move"),
            InstanceMethod<&ElementarySurface::Move_async>("Move_async"),
            InstanceMethod<&ElementarySurface::Rotate>("Rotate"),
            InstanceMethod<&ElementarySurface::Rotate_async>("Rotate_async"),
            InstanceMethod<&ElementarySurface::Refresh>("Refresh"),
            InstanceMethod<&ElementarySurface::Refresh_async>("Refresh_async"),
            InstanceMethod<&ElementarySurface::Duplicate>("Duplicate"),
            InstanceMethod<&ElementarySurface::Duplicate_async>("Duplicate_async"),
            InstanceMethod<&ElementarySurface::AddYourGabaritTo>("AddYourGabaritTo"),
            InstanceMethod<&ElementarySurface::AddYourGabaritTo_async>("AddYourGabaritTo_async"),
            InstanceMethod<&ElementarySurface::GetUseCount>("GetUseCount"),
            InstanceMethod<&ElementarySurface::GetUseCount_async>("GetUseCount_async"),
            InstanceMethod<&ElementarySurface::AddRef>("AddRef"),
            InstanceMethod<&ElementarySurface::AddRef_async>("AddRef_async"),
            InstanceMethod<&ElementarySurface::Id>("Id"),

        });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("ElementarySurface", func);

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

ElementarySurface::ElementarySurface(const Napi::CallbackInfo &info) : Napi::ObjectWrap<ElementarySurface>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    Napi::Error::New(env, "ElementarySurface cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object ElementarySurface::NewInstance(Napi::Env env, MbElementarySurface *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("ElementarySurface");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    ElementarySurface *unwrapped = ElementarySurface::Unwrap(inst);
    underlying->AddRef();
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function ElementarySurface::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("ElementarySurface");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value ElementarySurface::GetSurface(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbSurface &_result = _underlying->GetSurface(

    );

    Napi::Value _to;

    _to = Surface::NewInstance(env, (MbSurface *)&(_result));

    return _to;
}

Napi::Value ElementarySurface::GetSurface_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ElementarySurface_GetSurface_AsyncWorker *asyncWorker =
        new ElementarySurface_GetSurface_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ElementarySurface::GetUEpsilon(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetUEpsilon(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ElementarySurface::GetUEpsilon_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ElementarySurface_GetUEpsilon_AsyncWorker *asyncWorker =
        new ElementarySurface_GetUEpsilon_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ElementarySurface::GetVEpsilon(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetVEpsilon(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ElementarySurface::GetVEpsilon_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ElementarySurface_GetVEpsilon_AsyncWorker *asyncWorker =
        new ElementarySurface_GetVEpsilon_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ElementarySurface::GetUMid(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetUMid(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ElementarySurface::GetUMid_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ElementarySurface_GetUMid_AsyncWorker *asyncWorker =
        new ElementarySurface_GetUMid_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ElementarySurface::GetVMid(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetVMid(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ElementarySurface::GetVMid_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ElementarySurface_GetVMid_AsyncWorker *asyncWorker =
        new ElementarySurface_GetVMid_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ElementarySurface::GetUMin(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetUMin(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ElementarySurface::GetUMin_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ElementarySurface_GetUMin_AsyncWorker *asyncWorker =
        new ElementarySurface_GetUMin_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ElementarySurface::GetUMax(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetUMax(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ElementarySurface::GetUMax_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ElementarySurface_GetUMax_AsyncWorker *asyncWorker =
        new ElementarySurface_GetUMax_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ElementarySurface::GetVMin(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetVMin(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ElementarySurface::GetVMin_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ElementarySurface_GetVMin_AsyncWorker *asyncWorker =
        new ElementarySurface_GetVMin_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ElementarySurface::GetVMax(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetVMax(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ElementarySurface::GetVMax_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ElementarySurface_GetVMax_AsyncWorker *asyncWorker =
        new ElementarySurface_GetVMax_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ElementarySurface::GetUParamToUnit(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetUParamToUnit(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ElementarySurface::GetUParamToUnit_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ElementarySurface_GetUParamToUnit_AsyncWorker *asyncWorker =
        new ElementarySurface_GetUParamToUnit_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ElementarySurface::GetVParamToUnit(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetVParamToUnit(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ElementarySurface::GetVParamToUnit_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ElementarySurface_GetVParamToUnit_AsyncWorker *asyncWorker =
        new ElementarySurface_GetVParamToUnit_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ElementarySurface::GetRadius(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetRadius(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ElementarySurface::GetRadius_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ElementarySurface_GetRadius_AsyncWorker *asyncWorker =
        new ElementarySurface_GetRadius_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ElementarySurface::Normal(const Napi::CallbackInfo &info)
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

Napi::Value ElementarySurface::Normal_async(const Napi::CallbackInfo &info)
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

    ElementarySurface_Normal_AsyncWorker *asyncWorker = new ElementarySurface_Normal_AsyncWorker(_underlying, deferred,

                                                                                                 u,

                                                                                                 v);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ElementarySurface::NearDirectPointProjection(const Napi::CallbackInfo &info)
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

Napi::Value ElementarySurface::NearDirectPointProjection_async(const Napi::CallbackInfo &info)
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

    ElementarySurface_NearDirectPointProjection_AsyncWorker *asyncWorker =
        new ElementarySurface_NearDirectPointProjection_AsyncWorker(_underlying, deferred,

                                                                    pnt,

                                                                    vect,

                                                                    ext,

                                                                    uvRange,

                                                                    onlyPositiveDirection);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ElementarySurface::IsA(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeSpaceType _result = _underlying->IsA(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ElementarySurface::IsA_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ElementarySurface_IsA_AsyncWorker *asyncWorker = new ElementarySurface_IsA_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ElementarySurface::Type(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeSpaceType _result = _underlying->Type(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ElementarySurface::Type_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ElementarySurface_Type_AsyncWorker *asyncWorker = new ElementarySurface_Type_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ElementarySurface::Family(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeSpaceType _result = _underlying->Family(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ElementarySurface::Family_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ElementarySurface_Family_AsyncWorker *asyncWorker = new ElementarySurface_Family_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ElementarySurface::Transform(const Napi::CallbackInfo &info)
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

Napi::Value ElementarySurface::Transform_async(const Napi::CallbackInfo &info)
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

    ElementarySurface_Transform_AsyncWorker *asyncWorker =
        new ElementarySurface_Transform_AsyncWorker(_underlying, deferred,

                                                    mat,

                                                    iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ElementarySurface::Move(const Napi::CallbackInfo &info)
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

Napi::Value ElementarySurface::Move_async(const Napi::CallbackInfo &info)
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

    ElementarySurface_Move_AsyncWorker *asyncWorker = new ElementarySurface_Move_AsyncWorker(_underlying, deferred,

                                                                                             v,

                                                                                             iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ElementarySurface::Rotate(const Napi::CallbackInfo &info)
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

Napi::Value ElementarySurface::Rotate_async(const Napi::CallbackInfo &info)
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

    ElementarySurface_Rotate_AsyncWorker *asyncWorker = new ElementarySurface_Rotate_AsyncWorker(_underlying, deferred,

                                                                                                 axis,

                                                                                                 angle,

                                                                                                 iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ElementarySurface::Refresh(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->Refresh(

    );

    return env.Undefined();
}

Napi::Value ElementarySurface::Refresh_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ElementarySurface_Refresh_AsyncWorker *asyncWorker =
        new ElementarySurface_Refresh_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ElementarySurface::Duplicate(const Napi::CallbackInfo &info)
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

Napi::Value ElementarySurface::Duplicate_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    MbRegDuplicate *iReg = NULL;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        RegDuplicate *iReg_ = RegDuplicate::Unwrap(info[0].ToObject());
        iReg = iReg_->_underlying;
    }

    ElementarySurface_Duplicate_AsyncWorker *asyncWorker =
        new ElementarySurface_Duplicate_AsyncWorker(_underlying, deferred,

                                                    iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ElementarySurface::AddYourGabaritTo(const Napi::CallbackInfo &info)
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

Napi::Value ElementarySurface::AddYourGabaritTo_async(const Napi::CallbackInfo &info)
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

    ElementarySurface_AddYourGabaritTo_AsyncWorker *asyncWorker =
        new ElementarySurface_AddYourGabaritTo_AsyncWorker(_underlying, deferred,

                                                           cube);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ElementarySurface::GetUseCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    refcount_t _result = _underlying->GetUseCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ElementarySurface::GetUseCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ElementarySurface_GetUseCount_AsyncWorker *asyncWorker =
        new ElementarySurface_GetUseCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ElementarySurface::AddRef(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->AddRef(

    );

    return env.Undefined();
}

Napi::Value ElementarySurface::AddRef_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ElementarySurface_AddRef_AsyncWorker *asyncWorker = new ElementarySurface_AddRef_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value ElementarySurface::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

ElementarySurface::~ElementarySurface()
{
    // std::cout << "calling ::DeleteItem on ElementarySurface for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

ElementarySurface_GetSurface_AsyncWorker::ElementarySurface_GetSurface_AsyncWorker(MbElementarySurface *_underlying,
                                                                                   Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ElementarySurface_GetSurface_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbSurface &_result = _underlying->GetSurface();

    this->_result = (MbSurface *)&(_result);

    ExitParallelRegion();
}

void ElementarySurface_GetSurface_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbSurface *_result = this->_result;
    _to = Surface::NewInstance(env, (MbSurface *)&(_result));

    deferred.Resolve(_to);
}

void ElementarySurface_GetSurface_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ElementarySurface_GetUEpsilon_AsyncWorker::ElementarySurface_GetUEpsilon_AsyncWorker(MbElementarySurface *_underlying,
                                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ElementarySurface_GetUEpsilon_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetUEpsilon();

    this->_result = _result;

    ExitParallelRegion();
}

void ElementarySurface_GetUEpsilon_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ElementarySurface_GetUEpsilon_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                       Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ElementarySurface_GetVEpsilon_AsyncWorker::ElementarySurface_GetVEpsilon_AsyncWorker(MbElementarySurface *_underlying,
                                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ElementarySurface_GetVEpsilon_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetVEpsilon();

    this->_result = _result;

    ExitParallelRegion();
}

void ElementarySurface_GetVEpsilon_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ElementarySurface_GetVEpsilon_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                       Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ElementarySurface_GetUMid_AsyncWorker::ElementarySurface_GetUMid_AsyncWorker(MbElementarySurface *_underlying,
                                                                             Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ElementarySurface_GetUMid_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetUMid();

    this->_result = _result;

    ExitParallelRegion();
}

void ElementarySurface_GetUMid_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ElementarySurface_GetUMid_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ElementarySurface_GetVMid_AsyncWorker::ElementarySurface_GetVMid_AsyncWorker(MbElementarySurface *_underlying,
                                                                             Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ElementarySurface_GetVMid_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetVMid();

    this->_result = _result;

    ExitParallelRegion();
}

void ElementarySurface_GetVMid_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ElementarySurface_GetVMid_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ElementarySurface_GetUMin_AsyncWorker::ElementarySurface_GetUMin_AsyncWorker(MbElementarySurface *_underlying,
                                                                             Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ElementarySurface_GetUMin_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetUMin();

    this->_result = _result;

    ExitParallelRegion();
}

void ElementarySurface_GetUMin_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ElementarySurface_GetUMin_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ElementarySurface_GetUMax_AsyncWorker::ElementarySurface_GetUMax_AsyncWorker(MbElementarySurface *_underlying,
                                                                             Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ElementarySurface_GetUMax_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetUMax();

    this->_result = _result;

    ExitParallelRegion();
}

void ElementarySurface_GetUMax_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ElementarySurface_GetUMax_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ElementarySurface_GetVMin_AsyncWorker::ElementarySurface_GetVMin_AsyncWorker(MbElementarySurface *_underlying,
                                                                             Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ElementarySurface_GetVMin_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetVMin();

    this->_result = _result;

    ExitParallelRegion();
}

void ElementarySurface_GetVMin_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ElementarySurface_GetVMin_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ElementarySurface_GetVMax_AsyncWorker::ElementarySurface_GetVMax_AsyncWorker(MbElementarySurface *_underlying,
                                                                             Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ElementarySurface_GetVMax_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetVMax();

    this->_result = _result;

    ExitParallelRegion();
}

void ElementarySurface_GetVMax_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ElementarySurface_GetVMax_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ElementarySurface_GetUParamToUnit_AsyncWorker::ElementarySurface_GetUParamToUnit_AsyncWorker(
    MbElementarySurface *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ElementarySurface_GetUParamToUnit_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetUParamToUnit();

    this->_result = _result;

    ExitParallelRegion();
}

void ElementarySurface_GetUParamToUnit_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ElementarySurface_GetUParamToUnit_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                           Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ElementarySurface_GetVParamToUnit_AsyncWorker::ElementarySurface_GetVParamToUnit_AsyncWorker(
    MbElementarySurface *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ElementarySurface_GetVParamToUnit_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetVParamToUnit();

    this->_result = _result;

    ExitParallelRegion();
}

void ElementarySurface_GetVParamToUnit_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ElementarySurface_GetVParamToUnit_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                           Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ElementarySurface_GetRadius_AsyncWorker::ElementarySurface_GetRadius_AsyncWorker(MbElementarySurface *_underlying,
                                                                                 Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ElementarySurface_GetRadius_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetRadius();

    this->_result = _result;

    ExitParallelRegion();
}

void ElementarySurface_GetRadius_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ElementarySurface_GetRadius_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ElementarySurface_Normal_AsyncWorker::ElementarySurface_Normal_AsyncWorker(MbElementarySurface *_underlying,
                                                                           Napi::Promise::Deferred const &d, double &u,
                                                                           double &v)
    : _underlying(_underlying), PromiseWorker(d), u(u), v(v){};

void ElementarySurface_Normal_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector3D *result = new MbVector3D;

    _underlying->Normal(u, v, *result);

    this->result = result;

    ExitParallelRegion();
}

void ElementarySurface_Normal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ElementarySurface_Normal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ElementarySurface_NearDirectPointProjection_AsyncWorker::ElementarySurface_NearDirectPointProjection_AsyncWorker(
    MbElementarySurface *_underlying, Napi::Promise::Deferred const &d, const MbCartPoint3D &pnt,
    const MbVector3D &vect, bool ext, MbRect2D *uvRange, bool onlyPositiveDirection)
    : _underlying(_underlying), PromiseWorker(d), pnt(pnt), vect(vect), ext(ext), uvRange(uvRange),
      onlyPositiveDirection(onlyPositiveDirection){};

void ElementarySurface_NearDirectPointProjection_AsyncWorker::Execute()
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

void ElementarySurface_NearDirectPointProjection_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ElementarySurface_NearDirectPointProjection_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                                     Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ElementarySurface_IsA_AsyncWorker::ElementarySurface_IsA_AsyncWorker(MbElementarySurface *_underlying,
                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ElementarySurface_IsA_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeSpaceType _result = _underlying->IsA();

    this->_result = _result;

    ExitParallelRegion();
}

void ElementarySurface_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeSpaceType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ElementarySurface_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ElementarySurface_Type_AsyncWorker::ElementarySurface_Type_AsyncWorker(MbElementarySurface *_underlying,
                                                                       Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ElementarySurface_Type_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeSpaceType _result = _underlying->Type();

    this->_result = _result;

    ExitParallelRegion();
}

void ElementarySurface_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeSpaceType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ElementarySurface_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ElementarySurface_Family_AsyncWorker::ElementarySurface_Family_AsyncWorker(MbElementarySurface *_underlying,
                                                                           Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ElementarySurface_Family_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeSpaceType _result = _underlying->Family();

    this->_result = _result;

    ExitParallelRegion();
}

void ElementarySurface_Family_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeSpaceType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ElementarySurface_Family_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ElementarySurface_Transform_AsyncWorker::ElementarySurface_Transform_AsyncWorker(MbElementarySurface *_underlying,
                                                                                 Napi::Promise::Deferred const &d,
                                                                                 const MbMatrix3D &mat,
                                                                                 MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), mat(mat), iReg(iReg){};

void ElementarySurface_Transform_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Transform(mat, iReg);

    ExitParallelRegion();
}

void ElementarySurface_Transform_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void ElementarySurface_Transform_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ElementarySurface_Move_AsyncWorker::ElementarySurface_Move_AsyncWorker(MbElementarySurface *_underlying,
                                                                       Napi::Promise::Deferred const &d,
                                                                       const MbVector3D &v, MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), v(v), iReg(iReg){};

void ElementarySurface_Move_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Move(v, iReg);

    ExitParallelRegion();
}

void ElementarySurface_Move_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void ElementarySurface_Move_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ElementarySurface_Rotate_AsyncWorker::ElementarySurface_Rotate_AsyncWorker(MbElementarySurface *_underlying,
                                                                           Napi::Promise::Deferred const &d,
                                                                           const MbAxis3D &axis, double angle,
                                                                           MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), axis(axis), angle(angle), iReg(iReg){};

void ElementarySurface_Rotate_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Rotate(axis, angle, iReg);

    ExitParallelRegion();
}

void ElementarySurface_Rotate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void ElementarySurface_Rotate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ElementarySurface_Refresh_AsyncWorker::ElementarySurface_Refresh_AsyncWorker(MbElementarySurface *_underlying,
                                                                             Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ElementarySurface_Refresh_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Refresh();

    ExitParallelRegion();
}

void ElementarySurface_Refresh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void ElementarySurface_Refresh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ElementarySurface_Duplicate_AsyncWorker::ElementarySurface_Duplicate_AsyncWorker(MbElementarySurface *_underlying,
                                                                                 Napi::Promise::Deferred const &d,
                                                                                 MbRegDuplicate *iReg)
    : _underlying(_underlying), PromiseWorker(d), iReg(iReg){};

void ElementarySurface_Duplicate_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbSpaceItem &_result = _underlying->Duplicate(iReg);

    this->_result = (MbSpaceItem *)&(_result);

    ExitParallelRegion();
}

void ElementarySurface_Duplicate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbSpaceItem *_result = this->_result;
    _to = SpaceItem::NewInstance(env, (MbSpaceItem *)&(_result));

    deferred.Resolve(_to);
}

void ElementarySurface_Duplicate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ElementarySurface_AddYourGabaritTo_AsyncWorker::ElementarySurface_AddYourGabaritTo_AsyncWorker(
    MbElementarySurface *_underlying, Napi::Promise::Deferred const &d, MbCube &cube)
    : _underlying(_underlying), PromiseWorker(d), cube(cube){};

void ElementarySurface_AddYourGabaritTo_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddYourGabaritTo(cube);

    ExitParallelRegion();
}

void ElementarySurface_AddYourGabaritTo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void ElementarySurface_AddYourGabaritTo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                            Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ElementarySurface_GetUseCount_AsyncWorker::ElementarySurface_GetUseCount_AsyncWorker(MbElementarySurface *_underlying,
                                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ElementarySurface_GetUseCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    refcount_t _result = _underlying->GetUseCount();

    this->_result = _result;

    ExitParallelRegion();
}

void ElementarySurface_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    refcount_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ElementarySurface_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                       Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ElementarySurface_AddRef_AsyncWorker::ElementarySurface_AddRef_AsyncWorker(MbElementarySurface *_underlying,
                                                                           Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ElementarySurface_AddRef_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddRef();

    ExitParallelRegion();
}

void ElementarySurface_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void ElementarySurface_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
