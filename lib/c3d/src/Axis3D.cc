// This is a generated file, modify: generate/templates/Axis3D.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/Axis3D.h"

#include "tool_mutex.h"

Napi::Object Axis3D::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(env, "Axis3D",
                                      {
                                          InstanceMethod<&Axis3D::Rotate>("Rotate"),
                                          InstanceMethod<&Axis3D::Rotate_async>("Rotate_async"),
                                          InstanceMethod<&Axis3D::Move>("Move"),
                                          InstanceMethod<&Axis3D::Move_async>("Move_async"),
                                          InstanceMethod<&Axis3D::GetOrigin>("GetOrigin"),
                                          InstanceMethod<&Axis3D::GetOrigin_async>("GetOrigin_async"),
                                          InstanceMethod<&Axis3D::GetAxisZ>("GetAxisZ"),
                                          InstanceMethod<&Axis3D::GetAxisZ_async>("GetAxisZ_async"),
                                          InstanceMethod<&Axis3D::Id>("Id"),

                                      });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Axis3D", func);

    return exports;
}

Axis3D::Axis3D(const Napi::CallbackInfo &info) : Napi::ObjectWrap<Axis3D>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 1 && ((info[0].IsObject() && info[0].ToObject().InstanceOf(Axis3D::GetConstructor(env))))

    )
    {
        if (info[0].IsNull() || info[0].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'axis'").ThrowAsJavaScriptException();
            return;
        }
        const class Axis3D *axis_ = Axis3D::Unwrap(info[0].ToObject());

        const MbAxis3D &axis = *axis_->_underlying;

        MbAxis3D *underlying = new MbAxis3D(axis);
        if (underlying == NULL)
        {
            Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
            return;
        }
        this->_underlying = underlying;
    }
    else if (info.Length() == 1 &&
             ((info[0].IsObject() && info[0].ToObject().InstanceOf(Vector3D::GetConstructor(env))))

    )
    {
        if (info[0].IsNull() || info[0].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'v'").ThrowAsJavaScriptException();
            return;
        }
        const class Vector3D *v_ = Vector3D::Unwrap(info[0].ToObject());

        const MbVector3D &v = *v_->_underlying;

        MbAxis3D *underlying = new MbAxis3D(v);
        if (underlying == NULL)
        {
            Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
            return;
        }
        this->_underlying = underlying;
    }
    else if (info.Length() == 2 &&
             ((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))) &&
             ((info[1].IsObject() && info[1].ToObject().InstanceOf(Vector3D::GetConstructor(env))))

    )
    {
        if (info[0].IsNull() || info[0].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'pnt0'").ThrowAsJavaScriptException();
            return;
        }
        const class CartPoint3D *pnt0_ = CartPoint3D::Unwrap(info[0].ToObject());

        const MbCartPoint3D &pnt0 = *pnt0_->_underlying;

        if (info[1].IsNull() || info[1].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'dir'").ThrowAsJavaScriptException();
            return;
        }
        const class Vector3D *dir_ = Vector3D::Unwrap(info[1].ToObject());

        const MbVector3D &dir = *dir_->_underlying;

        MbAxis3D *underlying = new MbAxis3D(pnt0, dir);
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

Napi::Object Axis3D::NewInstance(Napi::Env env, MbAxis3D *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Axis3D");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Axis3D *unwrapped = Axis3D::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Axis3D::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Axis3D");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value Axis3D::Rotate(const Napi::CallbackInfo &info)
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

    _underlying->Rotate(axis, angle

    );

    return env.Undefined();
}

Napi::Value Axis3D::Rotate_async(const Napi::CallbackInfo &info)
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

    Axis3D_Rotate_AsyncWorker *asyncWorker = new Axis3D_Rotate_AsyncWorker(_underlying, deferred,

                                                                           axis,

                                                                           angle);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Axis3D::Move(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Vector3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Vector3D to is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'to'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Vector3D *to_ = Vector3D::Unwrap(info[0].ToObject());

    const MbVector3D &to = *to_->_underlying;

    _underlying->Move(to

    );

    return env.Undefined();
}

Napi::Value Axis3D::Move_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Vector3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Vector3D to is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'to'"));
        return deferred.Promise();
    }
    const class Vector3D *to_ = Vector3D::Unwrap(info[0].ToObject());

    const MbVector3D &to = *to_->_underlying;

    Axis3D_Move_AsyncWorker *asyncWorker = new Axis3D_Move_AsyncWorker(_underlying, deferred,

                                                                       to);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Axis3D::GetOrigin(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbCartPoint3D &_result = _underlying->GetOrigin(

    );

    Napi::Value _to;

    _to = CartPoint3D::NewInstance(env, new MbCartPoint3D(_result));

    return _to;
}

Napi::Value Axis3D::GetOrigin_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Axis3D_GetOrigin_AsyncWorker *asyncWorker = new Axis3D_GetOrigin_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Axis3D::GetAxisZ(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbVector3D &_result = _underlying->GetAxisZ(

    );

    Napi::Value _to;

    _to = Vector3D::NewInstance(env, new MbVector3D(_result));

    return _to;
}

Napi::Value Axis3D::GetAxisZ_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Axis3D_GetAxisZ_AsyncWorker *asyncWorker = new Axis3D_GetAxisZ_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value Axis3D::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

Axis3D_Rotate_AsyncWorker::Axis3D_Rotate_AsyncWorker(MbAxis3D *_underlying, Napi::Promise::Deferred const &d,
                                                     const MbAxis3D &axis, double angle)
    : _underlying(_underlying), PromiseWorker(d), axis(axis), angle(angle){};

void Axis3D_Rotate_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Rotate(axis, angle);

    ExitParallelRegion();
}

void Axis3D_Rotate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Axis3D_Rotate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Axis3D_Move_AsyncWorker::Axis3D_Move_AsyncWorker(MbAxis3D *_underlying, Napi::Promise::Deferred const &d,
                                                 const MbVector3D &to)
    : _underlying(_underlying), PromiseWorker(d), to(to){};

void Axis3D_Move_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Move(to);

    ExitParallelRegion();
}

void Axis3D_Move_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Axis3D_Move_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Axis3D_GetOrigin_AsyncWorker::Axis3D_GetOrigin_AsyncWorker(MbAxis3D *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Axis3D_GetOrigin_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbCartPoint3D &_result = _underlying->GetOrigin();

    this->_result = new (MbCartPoint3D)(_result);

    ExitParallelRegion();
}

void Axis3D_GetOrigin_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbCartPoint3D *_result = this->_result;
    _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)&(_result));

    deferred.Resolve(_to);
}

void Axis3D_GetOrigin_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Axis3D_GetAxisZ_AsyncWorker::Axis3D_GetAxisZ_AsyncWorker(MbAxis3D *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Axis3D_GetAxisZ_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbVector3D &_result = _underlying->GetAxisZ();

    this->_result = new (MbVector3D)(_result);

    ExitParallelRegion();
}

void Axis3D_GetAxisZ_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbVector3D *_result = this->_result;
    _to = Vector3D::NewInstance(env, (MbVector3D *)&(_result));

    deferred.Resolve(_to);
}

void Axis3D_GetAxisZ_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
