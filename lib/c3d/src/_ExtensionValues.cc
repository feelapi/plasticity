// This is a generated file, modify: generate/templates/_ExtensionValues.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/_ExtensionValues.h"

#include "tool_mutex.h"

Napi::Object _ExtensionValues::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(
        env, "ExtensionValues",
        {
            InstanceMethod<&_ExtensionValues::InitByDistance>("InitByDistance"),
            InstanceMethod<&_ExtensionValues::InitByDistance_async>("InitByDistance_async"),
            InstanceMethod<&_ExtensionValues::InitByVertex>("InitByVertex"),
            InstanceMethod<&_ExtensionValues::InitByVertex_async>("InitByVertex_async"),
            InstanceMethod<&_ExtensionValues::InitByShell>("InitByShell"),
            InstanceMethod<&_ExtensionValues::InitByShell_async>("InitByShell_async"),
            InstanceMethod<&_ExtensionValues::Id>("Id"),

            InstanceAccessor<&_ExtensionValues::GetValue_type, &_ExtensionValues::SetValue_type>("type"),
            InstanceAccessor<&_ExtensionValues::GetValue_way, &_ExtensionValues::SetValue_way>("way"),
            InstanceAccessor<&_ExtensionValues::GetValue_kind, &_ExtensionValues::SetValue_kind>("kind"),
            InstanceAccessor<&_ExtensionValues::GetValue_point, &_ExtensionValues::SetValue_point>("point"),
            InstanceAccessor<&_ExtensionValues::GetValue_direction, &_ExtensionValues::SetValue_direction>("direction"),
            InstanceAccessor<&_ExtensionValues::GetValue_distance, &_ExtensionValues::SetValue_distance>("distance"),
            InstanceAccessor<&_ExtensionValues::GetValue_prolong, &_ExtensionValues::SetValue_prolong>("prolong"),
            InstanceAccessor<&_ExtensionValues::GetValue_combine, &_ExtensionValues::SetValue_combine>("combine"),
        });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("ExtensionValues", func);

    return exports;
}

_ExtensionValues::_ExtensionValues(const Napi::CallbackInfo &info) : Napi::ObjectWrap<_ExtensionValues>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 0

    )
    {

        ExtensionValues *underlying = new ExtensionValues();
        if (underlying == NULL)
        {
            Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
            return;
        }
        this->_underlying = underlying;
    }
    else
    {
        Napi::Error::New(env, "No matching constructor").ThrowAsJavaScriptException();
        return;
    }
}

Napi::Object _ExtensionValues::NewInstance(Napi::Env env, ExtensionValues *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("ExtensionValues");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    _ExtensionValues *unwrapped = _ExtensionValues::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function _ExtensionValues::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("ExtensionValues");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value _ExtensionValues::InitByDistance(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "ExtensionType t is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        Napi::Error::New(env, "LateralKind k is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 || !((info[2].IsObject() && info[2].ToObject().InstanceOf(Vector3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Vector3D v is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 3 || !(info[3].IsNumber()))
    {
        Napi::Error::New(env, "number dist is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    const ExtensionValues::ExtensionType t =
        static_cast<ExtensionValues::ExtensionType>(info[0].ToNumber().Uint32Value());

    const ExtensionValues::LateralKind k = static_cast<ExtensionValues::LateralKind>(info[1].ToNumber().Uint32Value());

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'v'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Vector3D *v_ = Vector3D::Unwrap(info[2].ToObject());

    const MbVector3D &v = *v_->_underlying;

    double dist = info[3].ToNumber().DoubleValue();

    _underlying->InitByDistance(t, k, v, dist

    );

    return env.Undefined();
}

Napi::Value _ExtensionValues::InitByDistance_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "ExtensionType t is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "LateralKind k is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 || !((info[2].IsObject() && info[2].ToObject().InstanceOf(Vector3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Vector3D v is required."));
        return deferred.Promise();
    }
    if (info.Length() == 3 || !(info[3].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number dist is required."));
        return deferred.Promise();
    }

    const ExtensionValues::ExtensionType t =
        static_cast<ExtensionValues::ExtensionType>(info[0].ToNumber().Uint32Value());

    const ExtensionValues::LateralKind k = static_cast<ExtensionValues::LateralKind>(info[1].ToNumber().Uint32Value());

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'v'"));
        return deferred.Promise();
    }
    const class Vector3D *v_ = Vector3D::Unwrap(info[2].ToObject());

    const MbVector3D &v = *v_->_underlying;

    double dist = info[3].ToNumber().DoubleValue();

    _ExtensionValues_InitByDistance_AsyncWorker *asyncWorker =
        new _ExtensionValues_InitByDistance_AsyncWorker(_underlying, deferred,

                                                        t,

                                                        k,

                                                        v,

                                                        dist);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value _ExtensionValues::InitByVertex(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "ExtensionType t is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        Napi::Error::New(env, "LateralKind k is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 ||
        !((info[2].IsObject() && info[2].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "CartPoint3D v is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    const ExtensionValues::ExtensionType t =
        static_cast<ExtensionValues::ExtensionType>(info[0].ToNumber().Uint32Value());

    const ExtensionValues::LateralKind k = static_cast<ExtensionValues::LateralKind>(info[1].ToNumber().Uint32Value());

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'v'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class CartPoint3D *v_ = CartPoint3D::Unwrap(info[2].ToObject());

    const MbCartPoint3D &v = *v_->_underlying;

    _underlying->InitByVertex(t, k, v

    );

    return env.Undefined();
}

Napi::Value _ExtensionValues::InitByVertex_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "ExtensionType t is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "LateralKind k is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 ||
        !((info[2].IsObject() && info[2].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "CartPoint3D v is required."));
        return deferred.Promise();
    }

    const ExtensionValues::ExtensionType t =
        static_cast<ExtensionValues::ExtensionType>(info[0].ToNumber().Uint32Value());

    const ExtensionValues::LateralKind k = static_cast<ExtensionValues::LateralKind>(info[1].ToNumber().Uint32Value());

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'v'"));
        return deferred.Promise();
    }
    const class CartPoint3D *v_ = CartPoint3D::Unwrap(info[2].ToObject());

    const MbCartPoint3D &v = *v_->_underlying;

    _ExtensionValues_InitByVertex_AsyncWorker *asyncWorker =
        new _ExtensionValues_InitByVertex_AsyncWorker(_underlying, deferred,

                                                      t,

                                                      k,

                                                      v);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value _ExtensionValues::InitByShell(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "ExtensionType t is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        Napi::Error::New(env, "LateralKind k is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 || !((info[2].IsObject() && info[2].ToObject().InstanceOf(Face::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Face f is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 3 || !((info[3].IsObject() && info[3].ToObject().InstanceOf(Solid::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Solid s is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    const ExtensionValues::ExtensionType t =
        static_cast<ExtensionValues::ExtensionType>(info[0].ToNumber().Uint32Value());

    const ExtensionValues::LateralKind k = static_cast<ExtensionValues::LateralKind>(info[1].ToNumber().Uint32Value());

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'f'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Face *f_ = Face::Unwrap(info[2].ToObject());

    const MbFace *f = f_->_underlying;

    if (info[3].IsNull() || info[3].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 's'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Solid *s_ = Solid::Unwrap(info[3].ToObject());

    const MbSolid *s = s_->_underlying;

    _underlying->InitByShell(t, k, f, s

    );

    return env.Undefined();
}

Napi::Value _ExtensionValues::InitByShell_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "ExtensionType t is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "LateralKind k is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 || !((info[2].IsObject() && info[2].ToObject().InstanceOf(Face::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Face f is required."));
        return deferred.Promise();
    }
    if (info.Length() == 3 || !((info[3].IsObject() && info[3].ToObject().InstanceOf(Solid::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Solid s is required."));
        return deferred.Promise();
    }

    const ExtensionValues::ExtensionType t =
        static_cast<ExtensionValues::ExtensionType>(info[0].ToNumber().Uint32Value());

    const ExtensionValues::LateralKind k = static_cast<ExtensionValues::LateralKind>(info[1].ToNumber().Uint32Value());

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'f'"));
        return deferred.Promise();
    }
    const class Face *f_ = Face::Unwrap(info[2].ToObject());

    const MbFace *f = f_->_underlying;

    if (info[3].IsNull() || info[3].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 's'"));
        return deferred.Promise();
    }
    const class Solid *s_ = Solid::Unwrap(info[3].ToObject());

    const MbSolid *s = s_->_underlying;

    _ExtensionValues_InitByShell_AsyncWorker *asyncWorker =
        new _ExtensionValues_InitByShell_AsyncWorker(_underlying, deferred,

                                                     t,

                                                     k,

                                                     f,

                                                     s);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value _ExtensionValues::GetValue_type(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    ExtensionValues::ExtensionType type = _underlying->type;
    _to = Napi::Number::New(env, type);

    return _to;
}

void _ExtensionValues::SetValue_type(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    const ExtensionValues::ExtensionType type =
        static_cast<ExtensionValues::ExtensionType>(info[0].ToNumber().Uint32Value());

    _underlying->type = type;
}
Napi::Value _ExtensionValues::GetValue_way(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    ExtensionValues::ExtensionWay way = _underlying->way;
    _to = Napi::Number::New(env, way);

    return _to;
}

void _ExtensionValues::SetValue_way(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    const ExtensionValues::ExtensionWay way =
        static_cast<ExtensionValues::ExtensionWay>(info[0].ToNumber().Uint32Value());

    _underlying->way = way;
}
Napi::Value _ExtensionValues::GetValue_kind(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    ExtensionValues::LateralKind kind = _underlying->kind;
    _to = Napi::Number::New(env, kind);

    return _to;
}

void _ExtensionValues::SetValue_kind(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    const ExtensionValues::LateralKind kind =
        static_cast<ExtensionValues::LateralKind>(info[0].ToNumber().Uint32Value());

    _underlying->kind = kind;
}
Napi::Value _ExtensionValues::GetValue_point(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    MbCartPoint3D point = _underlying->point;
    _to = CartPoint3D::NewInstance(env, new MbCartPoint3D(point));

    return _to;
}

void _ExtensionValues::SetValue_point(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'point'").ThrowAsJavaScriptException();
        return;
    }
    const class CartPoint3D *point_ = CartPoint3D::Unwrap(info[0].ToObject());

    MbCartPoint3D point = *point_->_underlying;

    _underlying->point = point;
}
Napi::Value _ExtensionValues::GetValue_direction(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    MbVector3D direction = _underlying->direction;
    _to = Vector3D::NewInstance(env, new MbVector3D(direction));

    return _to;
}

void _ExtensionValues::SetValue_direction(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'direction'").ThrowAsJavaScriptException();
        return;
    }
    const class Vector3D *direction_ = Vector3D::Unwrap(info[0].ToObject());

    MbVector3D direction = *direction_->_underlying;

    _underlying->direction = direction;
}
Napi::Value _ExtensionValues::GetValue_distance(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    double distance = _underlying->distance;
    _to = Napi::Number::New(env, distance);

    return _to;
}

void _ExtensionValues::SetValue_distance(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    double distance = info[0].ToNumber().DoubleValue();

    _underlying->distance = distance;
}
Napi::Value _ExtensionValues::GetValue_prolong(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    bool prolong = _underlying->prolong;
    _to = Napi::Boolean::New(env, prolong);

    return _to;
}

void _ExtensionValues::SetValue_prolong(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    bool prolong = info[0].ToBoolean();

    _underlying->prolong = prolong;
}
Napi::Value _ExtensionValues::GetValue_combine(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    bool combine = _underlying->combine;
    _to = Napi::Boolean::New(env, combine);

    return _to;
}

void _ExtensionValues::SetValue_combine(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    bool combine = info[0].ToBoolean();

    _underlying->combine = combine;
}

Napi::Value _ExtensionValues::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

_ExtensionValues_InitByDistance_AsyncWorker::_ExtensionValues_InitByDistance_AsyncWorker(
    ExtensionValues *_underlying, Napi::Promise::Deferred const &d, ExtensionValues::ExtensionType t,
    ExtensionValues::LateralKind k, const MbVector3D &v, double dist)
    : _underlying(_underlying), PromiseWorker(d), t(t), k(k), v(v), dist(dist){};

void _ExtensionValues_InitByDistance_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->InitByDistance(t, k, v, dist);

    ExitParallelRegion();
}

void _ExtensionValues_InitByDistance_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void _ExtensionValues_InitByDistance_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                         Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
_ExtensionValues_InitByVertex_AsyncWorker::_ExtensionValues_InitByVertex_AsyncWorker(ExtensionValues *_underlying,
                                                                                     Napi::Promise::Deferred const &d,
                                                                                     ExtensionValues::ExtensionType t,
                                                                                     ExtensionValues::LateralKind k,
                                                                                     const MbCartPoint3D &v)
    : _underlying(_underlying), PromiseWorker(d), t(t), k(k), v(v){};

void _ExtensionValues_InitByVertex_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->InitByVertex(t, k, v);

    ExitParallelRegion();
}

void _ExtensionValues_InitByVertex_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void _ExtensionValues_InitByVertex_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                       Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
_ExtensionValues_InitByShell_AsyncWorker::_ExtensionValues_InitByShell_AsyncWorker(ExtensionValues *_underlying,
                                                                                   Napi::Promise::Deferred const &d,
                                                                                   ExtensionValues::ExtensionType t,
                                                                                   ExtensionValues::LateralKind k,
                                                                                   const MbFace *f, const MbSolid *s)
    : _underlying(_underlying), PromiseWorker(d), t(t), k(k), f(f), s(s){};

void _ExtensionValues_InitByShell_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->InitByShell(t, k, f, s);

    ExitParallelRegion();
}

void _ExtensionValues_InitByShell_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void _ExtensionValues_InitByShell_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
