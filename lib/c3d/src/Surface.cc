// This is a generated file, modify: generate/templates/Surface.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/Surface.h"

#include "tool_mutex.h"

Napi::Object Surface::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func =
        DefineClass(env, "Surface",
                    {
                        InstanceMethod<&Surface::Cast>("Cast"),
                        InstanceMethod<&Surface::Cast_async>("Cast_async"),
                        InstanceMethod<&Surface::GetSurface>("GetSurface"),
                        InstanceMethod<&Surface::GetSurface_async>("GetSurface_async"),
                        InstanceMethod<&Surface::GetUEpsilon>("GetUEpsilon"),
                        InstanceMethod<&Surface::GetUEpsilon_async>("GetUEpsilon_async"),
                        InstanceMethod<&Surface::GetVEpsilon>("GetVEpsilon"),
                        InstanceMethod<&Surface::GetVEpsilon_async>("GetVEpsilon_async"),
                        InstanceMethod<&Surface::GetUMid>("GetUMid"),
                        InstanceMethod<&Surface::GetUMid_async>("GetUMid_async"),
                        InstanceMethod<&Surface::GetVMid>("GetVMid"),
                        InstanceMethod<&Surface::GetVMid_async>("GetVMid_async"),
                        InstanceMethod<&Surface::GetUMin>("GetUMin"),
                        InstanceMethod<&Surface::GetUMin_async>("GetUMin_async"),
                        InstanceMethod<&Surface::GetUMax>("GetUMax"),
                        InstanceMethod<&Surface::GetUMax_async>("GetUMax_async"),
                        InstanceMethod<&Surface::GetVMin>("GetVMin"),
                        InstanceMethod<&Surface::GetVMin_async>("GetVMin_async"),
                        InstanceMethod<&Surface::GetVMax>("GetVMax"),
                        InstanceMethod<&Surface::GetVMax_async>("GetVMax_async"),
                        InstanceMethod<&Surface::GetUParamToUnit>("GetUParamToUnit"),
                        InstanceMethod<&Surface::GetUParamToUnit_async>("GetUParamToUnit_async"),
                        InstanceMethod<&Surface::GetVParamToUnit>("GetVParamToUnit"),
                        InstanceMethod<&Surface::GetVParamToUnit_async>("GetVParamToUnit_async"),
                        InstanceMethod<&Surface::GetRadius>("GetRadius"),
                        InstanceMethod<&Surface::GetRadius_async>("GetRadius_async"),
                        InstanceMethod<&Surface::PointOn>("PointOn"),
                        InstanceMethod<&Surface::PointOn_async>("PointOn_async"),
                        InstanceMethod<&Surface::Normal>("Normal"),
                        InstanceMethod<&Surface::Normal_async>("Normal_async"),
                        InstanceMethod<&Surface::GetPlacement>("GetPlacement"),
                        InstanceMethod<&Surface::GetPlacement_async>("GetPlacement_async"),
                        InstanceMethod<&Surface::NearDirectPointProjection>("NearDirectPointProjection"),
                        InstanceMethod<&Surface::NearDirectPointProjection_async>("NearDirectPointProjection_async"),
                        InstanceMethod<&Surface::IsA>("IsA"),
                        InstanceMethod<&Surface::IsA_async>("IsA_async"),
                        InstanceMethod<&Surface::Type>("Type"),
                        InstanceMethod<&Surface::Type_async>("Type_async"),
                        InstanceMethod<&Surface::Family>("Family"),
                        InstanceMethod<&Surface::Family_async>("Family_async"),
                        InstanceMethod<&Surface::Transform>("Transform"),
                        InstanceMethod<&Surface::Transform_async>("Transform_async"),
                        InstanceMethod<&Surface::Move>("Move"),
                        InstanceMethod<&Surface::Move_async>("Move_async"),
                        InstanceMethod<&Surface::Rotate>("Rotate"),
                        InstanceMethod<&Surface::Rotate_async>("Rotate_async"),
                        InstanceMethod<&Surface::Refresh>("Refresh"),
                        InstanceMethod<&Surface::Refresh_async>("Refresh_async"),
                        InstanceMethod<&Surface::Duplicate>("Duplicate"),
                        InstanceMethod<&Surface::Duplicate_async>("Duplicate_async"),
                        InstanceMethod<&Surface::AddYourGabaritTo>("AddYourGabaritTo"),
                        InstanceMethod<&Surface::AddYourGabaritTo_async>("AddYourGabaritTo_async"),
                        InstanceMethod<&Surface::GetUseCount>("GetUseCount"),
                        InstanceMethod<&Surface::GetUseCount_async>("GetUseCount_async"),
                        InstanceMethod<&Surface::AddRef>("AddRef"),
                        InstanceMethod<&Surface::AddRef_async>("AddRef_async"),
                        InstanceMethod<&Surface::Id>("Id"),

                    });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Surface", func);

    Napi::Object global = env.Global();
    Napi::Object Object = global.Get("Object").ToObject();
    Napi::Function setPrototypeOf = Napi::Function(env, Object.Get("setPrototypeOf"));
    Napi::Value prototype = func.Get("prototype");

    Napi::Function superFunc = SpaceItem::GetConstructor(env);
    Napi::FunctionReference *superConstructor = new Napi::FunctionReference();
    *superConstructor = Napi::Persistent(superFunc);

    Napi::Value superPrototype = superFunc.Get("prototype");
    setPrototypeOf.Call({prototype, superPrototype});
    setPrototypeOf.Call({func, superFunc});

    return exports;
}

Surface::Surface(const Napi::CallbackInfo &info) : Napi::ObjectWrap<Surface>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    Napi::Error::New(env, "Surface cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object Surface::NewInstance(Napi::Env env, MbSurface *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Surface");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Surface *unwrapped = Surface::Unwrap(inst);
    underlying->AddRef();
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Surface::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Surface");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value Surface::GetSurface(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbSurface &_result = _underlying->GetSurface(

    );

    Napi::Value _to;

    _to = Surface::NewInstance(env, (MbSurface *)&(_result));

    return _to;
}

Napi::Value Surface::GetSurface_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Surface_GetSurface_AsyncWorker *asyncWorker = new Surface_GetSurface_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Surface::GetUEpsilon(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetUEpsilon(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Surface::GetUEpsilon_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Surface_GetUEpsilon_AsyncWorker *asyncWorker = new Surface_GetUEpsilon_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Surface::GetVEpsilon(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetVEpsilon(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Surface::GetVEpsilon_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Surface_GetVEpsilon_AsyncWorker *asyncWorker = new Surface_GetVEpsilon_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Surface::GetUMid(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetUMid(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Surface::GetUMid_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Surface_GetUMid_AsyncWorker *asyncWorker = new Surface_GetUMid_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Surface::GetVMid(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetVMid(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Surface::GetVMid_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Surface_GetVMid_AsyncWorker *asyncWorker = new Surface_GetVMid_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Surface::GetUMin(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetUMin(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Surface::GetUMin_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Surface_GetUMin_AsyncWorker *asyncWorker = new Surface_GetUMin_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Surface::GetUMax(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetUMax(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Surface::GetUMax_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Surface_GetUMax_AsyncWorker *asyncWorker = new Surface_GetUMax_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Surface::GetVMin(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetVMin(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Surface::GetVMin_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Surface_GetVMin_AsyncWorker *asyncWorker = new Surface_GetVMin_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Surface::GetVMax(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetVMax(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Surface::GetVMax_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Surface_GetVMax_AsyncWorker *asyncWorker = new Surface_GetVMax_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Surface::GetUParamToUnit(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetUParamToUnit(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Surface::GetUParamToUnit_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Surface_GetUParamToUnit_AsyncWorker *asyncWorker = new Surface_GetUParamToUnit_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Surface::GetVParamToUnit(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetVParamToUnit(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Surface::GetVParamToUnit_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Surface_GetVParamToUnit_AsyncWorker *asyncWorker = new Surface_GetVParamToUnit_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Surface::GetRadius(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetRadius(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Surface::GetRadius_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Surface_GetRadius_AsyncWorker *asyncWorker = new Surface_GetRadius_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Surface::PointOn(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint::GetConstructor(env)))))
    {
        Napi::Error::New(env, "CartPoint uv is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbCartPoint3D *p = new MbCartPoint3D;

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'uv'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class CartPoint *uv_ = CartPoint::Unwrap(info[0].ToObject());

    MbCartPoint &uv = *uv_->_underlying;

    _underlying->PointOn(uv, *p

    );

    Napi::Value _to;

    if (p != NULL)
    {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)p);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value Surface::PointOn_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "CartPoint uv is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'uv'"));
        return deferred.Promise();
    }
    const class CartPoint *uv_ = CartPoint::Unwrap(info[0].ToObject());

    MbCartPoint &uv = *uv_->_underlying;

    Surface_PointOn_AsyncWorker *asyncWorker = new Surface_PointOn_AsyncWorker(_underlying, deferred,

                                                                               uv);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Surface::Normal(const Napi::CallbackInfo &info)
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

Napi::Value Surface::Normal_async(const Napi::CallbackInfo &info)
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

    Surface_Normal_AsyncWorker *asyncWorker = new Surface_Normal_AsyncWorker(_underlying, deferred,

                                                                             u,

                                                                             v);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Surface::GetPlacement(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbPlacement3D *place = NULL;

    bool exact = info[0].ToBoolean();

    bool _result = _underlying->GetPlacement(place, info.Length() == 0 || info[0].IsNull() ? false : exact

    );

    if (_result)
    {

        Napi::Value _to;

        if (place != NULL)
        {
            _to = Placement3D::NewInstance(env, (MbPlacement3D *)place);
        }
        else
        {
            _to = env.Null();
        }

        return _to;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation GetPlacement failed";
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value Surface::GetPlacement_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    bool exact = info[0].ToBoolean();

    Surface_GetPlacement_AsyncWorker *asyncWorker = new Surface_GetPlacement_AsyncWorker(_underlying, deferred,

                                                                                         exact);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Surface::NearDirectPointProjection(const Napi::CallbackInfo &info)
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

Napi::Value Surface::NearDirectPointProjection_async(const Napi::CallbackInfo &info)
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

    Surface_NearDirectPointProjection_AsyncWorker *asyncWorker =
        new Surface_NearDirectPointProjection_AsyncWorker(_underlying, deferred,

                                                          pnt,

                                                          vect,

                                                          ext,

                                                          uvRange,

                                                          onlyPositiveDirection);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Surface::IsA(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeSpaceType _result = _underlying->IsA(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Surface::IsA_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Surface_IsA_AsyncWorker *asyncWorker = new Surface_IsA_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Surface::Type(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeSpaceType _result = _underlying->Type(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Surface::Type_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Surface_Type_AsyncWorker *asyncWorker = new Surface_Type_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Surface::Family(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeSpaceType _result = _underlying->Family(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Surface::Family_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Surface_Family_AsyncWorker *asyncWorker = new Surface_Family_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Surface::Transform(const Napi::CallbackInfo &info)
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

Napi::Value Surface::Transform_async(const Napi::CallbackInfo &info)
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

    Surface_Transform_AsyncWorker *asyncWorker = new Surface_Transform_AsyncWorker(_underlying, deferred,

                                                                                   mat,

                                                                                   iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Surface::Move(const Napi::CallbackInfo &info)
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

Napi::Value Surface::Move_async(const Napi::CallbackInfo &info)
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

    Surface_Move_AsyncWorker *asyncWorker = new Surface_Move_AsyncWorker(_underlying, deferred,

                                                                         v,

                                                                         iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Surface::Rotate(const Napi::CallbackInfo &info)
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

Napi::Value Surface::Rotate_async(const Napi::CallbackInfo &info)
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

    Surface_Rotate_AsyncWorker *asyncWorker = new Surface_Rotate_AsyncWorker(_underlying, deferred,

                                                                             axis,

                                                                             angle,

                                                                             iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Surface::Refresh(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->Refresh(

    );

    return env.Undefined();
}

Napi::Value Surface::Refresh_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Surface_Refresh_AsyncWorker *asyncWorker = new Surface_Refresh_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Surface::Duplicate(const Napi::CallbackInfo &info)
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

Napi::Value Surface::Duplicate_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    MbRegDuplicate *iReg = NULL;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        RegDuplicate *iReg_ = RegDuplicate::Unwrap(info[0].ToObject());
        iReg = iReg_->_underlying;
    }

    Surface_Duplicate_AsyncWorker *asyncWorker = new Surface_Duplicate_AsyncWorker(_underlying, deferred,

                                                                                   iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Surface::AddYourGabaritTo(const Napi::CallbackInfo &info)
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

Napi::Value Surface::AddYourGabaritTo_async(const Napi::CallbackInfo &info)
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

    Surface_AddYourGabaritTo_AsyncWorker *asyncWorker = new Surface_AddYourGabaritTo_AsyncWorker(_underlying, deferred,

                                                                                                 cube);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Surface::GetUseCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    refcount_t _result = _underlying->GetUseCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Surface::GetUseCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Surface_GetUseCount_AsyncWorker *asyncWorker = new Surface_GetUseCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Surface::AddRef(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->AddRef(

    );

    return env.Undefined();
}

Napi::Value Surface::AddRef_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Surface_AddRef_AsyncWorker *asyncWorker = new Surface_AddRef_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value Surface::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

Surface::~Surface()
{
    // std::cout << "calling ::DeleteItem on Surface for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

Surface_GetSurface_AsyncWorker::Surface_GetSurface_AsyncWorker(MbSurface *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Surface_GetSurface_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbSurface &_result = _underlying->GetSurface();

    this->_result = (MbSurface *)&(_result);

    ExitParallelRegion();
}

void Surface_GetSurface_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbSurface *_result = this->_result;
    _to = Surface::NewInstance(env, (MbSurface *)&(_result));

    deferred.Resolve(_to);
}

void Surface_GetSurface_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Surface_GetUEpsilon_AsyncWorker::Surface_GetUEpsilon_AsyncWorker(MbSurface *_underlying,
                                                                 Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Surface_GetUEpsilon_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetUEpsilon();

    this->_result = _result;

    ExitParallelRegion();
}

void Surface_GetUEpsilon_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Surface_GetUEpsilon_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Surface_GetVEpsilon_AsyncWorker::Surface_GetVEpsilon_AsyncWorker(MbSurface *_underlying,
                                                                 Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Surface_GetVEpsilon_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetVEpsilon();

    this->_result = _result;

    ExitParallelRegion();
}

void Surface_GetVEpsilon_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Surface_GetVEpsilon_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Surface_GetUMid_AsyncWorker::Surface_GetUMid_AsyncWorker(MbSurface *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Surface_GetUMid_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetUMid();

    this->_result = _result;

    ExitParallelRegion();
}

void Surface_GetUMid_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Surface_GetUMid_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Surface_GetVMid_AsyncWorker::Surface_GetVMid_AsyncWorker(MbSurface *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Surface_GetVMid_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetVMid();

    this->_result = _result;

    ExitParallelRegion();
}

void Surface_GetVMid_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Surface_GetVMid_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Surface_GetUMin_AsyncWorker::Surface_GetUMin_AsyncWorker(MbSurface *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Surface_GetUMin_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetUMin();

    this->_result = _result;

    ExitParallelRegion();
}

void Surface_GetUMin_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Surface_GetUMin_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Surface_GetUMax_AsyncWorker::Surface_GetUMax_AsyncWorker(MbSurface *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Surface_GetUMax_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetUMax();

    this->_result = _result;

    ExitParallelRegion();
}

void Surface_GetUMax_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Surface_GetUMax_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Surface_GetVMin_AsyncWorker::Surface_GetVMin_AsyncWorker(MbSurface *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Surface_GetVMin_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetVMin();

    this->_result = _result;

    ExitParallelRegion();
}

void Surface_GetVMin_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Surface_GetVMin_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Surface_GetVMax_AsyncWorker::Surface_GetVMax_AsyncWorker(MbSurface *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Surface_GetVMax_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetVMax();

    this->_result = _result;

    ExitParallelRegion();
}

void Surface_GetVMax_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Surface_GetVMax_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Surface_GetUParamToUnit_AsyncWorker::Surface_GetUParamToUnit_AsyncWorker(MbSurface *_underlying,
                                                                         Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Surface_GetUParamToUnit_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetUParamToUnit();

    this->_result = _result;

    ExitParallelRegion();
}

void Surface_GetUParamToUnit_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Surface_GetUParamToUnit_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Surface_GetVParamToUnit_AsyncWorker::Surface_GetVParamToUnit_AsyncWorker(MbSurface *_underlying,
                                                                         Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Surface_GetVParamToUnit_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetVParamToUnit();

    this->_result = _result;

    ExitParallelRegion();
}

void Surface_GetVParamToUnit_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Surface_GetVParamToUnit_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Surface_GetRadius_AsyncWorker::Surface_GetRadius_AsyncWorker(MbSurface *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Surface_GetRadius_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetRadius();

    this->_result = _result;

    ExitParallelRegion();
}

void Surface_GetRadius_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Surface_GetRadius_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Surface_PointOn_AsyncWorker::Surface_PointOn_AsyncWorker(MbSurface *_underlying, Napi::Promise::Deferred const &d,
                                                         MbCartPoint &uv)
    : _underlying(_underlying), PromiseWorker(d), uv(uv){};

void Surface_PointOn_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint3D *p = new MbCartPoint3D;

    _underlying->PointOn(uv, *p);

    this->p = p;

    ExitParallelRegion();
}

void Surface_PointOn_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbCartPoint3D *p = this->p;
    if (p != NULL)
    {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)p);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void Surface_PointOn_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Surface_Normal_AsyncWorker::Surface_Normal_AsyncWorker(MbSurface *_underlying, Napi::Promise::Deferred const &d,
                                                       double &u, double &v)
    : _underlying(_underlying), PromiseWorker(d), u(u), v(v){};

void Surface_Normal_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector3D *result = new MbVector3D;

    _underlying->Normal(u, v, *result);

    this->result = result;

    ExitParallelRegion();
}

void Surface_Normal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Surface_Normal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Surface_GetPlacement_AsyncWorker::Surface_GetPlacement_AsyncWorker(MbSurface *_underlying,
                                                                   Napi::Promise::Deferred const &d, bool exact)
    : _underlying(_underlying), PromiseWorker(d), exact(exact){};

void Surface_GetPlacement_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbPlacement3D *place = NULL;

    bool _result = _underlying->GetPlacement(place, exact);

    if (_result)
    {

        this->place = place;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation GetPlacement failed";
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void Surface_GetPlacement_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbPlacement3D *place = this->place;
    if (place != NULL)
    {
        _to = Placement3D::NewInstance(env, (MbPlacement3D *)place);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void Surface_GetPlacement_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Surface_NearDirectPointProjection_AsyncWorker::Surface_NearDirectPointProjection_AsyncWorker(
    MbSurface *_underlying, Napi::Promise::Deferred const &d, const MbCartPoint3D &pnt, const MbVector3D &vect,
    bool ext, MbRect2D *uvRange, bool onlyPositiveDirection)
    : _underlying(_underlying), PromiseWorker(d), pnt(pnt), vect(vect), ext(ext), uvRange(uvRange),
      onlyPositiveDirection(onlyPositiveDirection){};

void Surface_NearDirectPointProjection_AsyncWorker::Execute()
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

void Surface_NearDirectPointProjection_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Surface_NearDirectPointProjection_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                           Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Surface_IsA_AsyncWorker::Surface_IsA_AsyncWorker(MbSurface *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Surface_IsA_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeSpaceType _result = _underlying->IsA();

    this->_result = _result;

    ExitParallelRegion();
}

void Surface_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeSpaceType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Surface_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Surface_Type_AsyncWorker::Surface_Type_AsyncWorker(MbSurface *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Surface_Type_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeSpaceType _result = _underlying->Type();

    this->_result = _result;

    ExitParallelRegion();
}

void Surface_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeSpaceType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Surface_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Surface_Family_AsyncWorker::Surface_Family_AsyncWorker(MbSurface *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Surface_Family_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeSpaceType _result = _underlying->Family();

    this->_result = _result;

    ExitParallelRegion();
}

void Surface_Family_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeSpaceType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Surface_Family_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Surface_Transform_AsyncWorker::Surface_Transform_AsyncWorker(MbSurface *_underlying, Napi::Promise::Deferred const &d,
                                                             const MbMatrix3D &mat, MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), mat(mat), iReg(iReg){};

void Surface_Transform_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Transform(mat, iReg);

    ExitParallelRegion();
}

void Surface_Transform_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Surface_Transform_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Surface_Move_AsyncWorker::Surface_Move_AsyncWorker(MbSurface *_underlying, Napi::Promise::Deferred const &d,
                                                   const MbVector3D &v, MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), v(v), iReg(iReg){};

void Surface_Move_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Move(v, iReg);

    ExitParallelRegion();
}

void Surface_Move_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Surface_Move_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Surface_Rotate_AsyncWorker::Surface_Rotate_AsyncWorker(MbSurface *_underlying, Napi::Promise::Deferred const &d,
                                                       const MbAxis3D &axis, double angle, MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), axis(axis), angle(angle), iReg(iReg){};

void Surface_Rotate_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Rotate(axis, angle, iReg);

    ExitParallelRegion();
}

void Surface_Rotate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Surface_Rotate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Surface_Refresh_AsyncWorker::Surface_Refresh_AsyncWorker(MbSurface *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Surface_Refresh_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Refresh();

    ExitParallelRegion();
}

void Surface_Refresh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Surface_Refresh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Surface_Duplicate_AsyncWorker::Surface_Duplicate_AsyncWorker(MbSurface *_underlying, Napi::Promise::Deferred const &d,
                                                             MbRegDuplicate *iReg)
    : _underlying(_underlying), PromiseWorker(d), iReg(iReg){};

void Surface_Duplicate_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbSpaceItem &_result = _underlying->Duplicate(iReg);

    this->_result = (MbSpaceItem *)&(_result);

    ExitParallelRegion();
}

void Surface_Duplicate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbSpaceItem *_result = this->_result;
    _to = SpaceItem::NewInstance(env, (MbSpaceItem *)&(_result));

    deferred.Resolve(_to);
}

void Surface_Duplicate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Surface_AddYourGabaritTo_AsyncWorker::Surface_AddYourGabaritTo_AsyncWorker(MbSurface *_underlying,
                                                                           Napi::Promise::Deferred const &d,
                                                                           MbCube &cube)
    : _underlying(_underlying), PromiseWorker(d), cube(cube){};

void Surface_AddYourGabaritTo_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddYourGabaritTo(cube);

    ExitParallelRegion();
}

void Surface_AddYourGabaritTo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Surface_AddYourGabaritTo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Surface_GetUseCount_AsyncWorker::Surface_GetUseCount_AsyncWorker(MbSurface *_underlying,
                                                                 Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Surface_GetUseCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    refcount_t _result = _underlying->GetUseCount();

    this->_result = _result;

    ExitParallelRegion();
}

void Surface_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    refcount_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Surface_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Surface_AddRef_AsyncWorker::Surface_AddRef_AsyncWorker(MbSurface *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Surface_AddRef_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddRef();

    ExitParallelRegion();
}

void Surface_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Surface_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
