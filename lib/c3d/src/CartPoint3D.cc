// This is a generated file, modify: generate/templates/CartPoint3D.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/CartPoint3D.h"

#include "tool_mutex.h"

Napi::Object CartPoint3D::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(env, "CartPoint3D",
                                      {
                                          InstanceMethod<&CartPoint3D::Move>("Move"),
                                          InstanceMethod<&CartPoint3D::Move_async>("Move_async"),
                                          InstanceMethod<&CartPoint3D::Id>("Id"),

                                          InstanceAccessor<&CartPoint3D::GetValue_x, &CartPoint3D::SetValue_x>("x"),
                                          InstanceAccessor<&CartPoint3D::GetValue_y, &CartPoint3D::SetValue_y>("y"),
                                          InstanceAccessor<&CartPoint3D::GetValue_z, &CartPoint3D::SetValue_z>("z"),
                                      });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("CartPoint3D", func);

    return exports;
}

CartPoint3D::CartPoint3D(const Napi::CallbackInfo &info) : Napi::ObjectWrap<CartPoint3D>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 3 && ((info[0].IsNumber())) && ((info[1].IsNumber())) && ((info[2].IsNumber()))

    )
    {
        double xx = info[0].ToNumber().DoubleValue();

        double yy = info[1].ToNumber().DoubleValue();

        double zz = info[2].ToNumber().DoubleValue();

        MbCartPoint3D *underlying = new MbCartPoint3D(xx, yy, zz);
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

Napi::Object CartPoint3D::NewInstance(Napi::Env env, MbCartPoint3D *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("CartPoint3D");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    CartPoint3D *unwrapped = CartPoint3D::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function CartPoint3D::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("CartPoint3D");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value CartPoint3D::Move(const Napi::CallbackInfo &info)
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

    MbCartPoint3D &_result = _underlying->Move(to

    );

    Napi::Value _to;

    _to = CartPoint3D::NewInstance(env, new MbCartPoint3D(_result));

    return _to;
}

Napi::Value CartPoint3D::Move_async(const Napi::CallbackInfo &info)
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

    CartPoint3D_Move_AsyncWorker *asyncWorker = new CartPoint3D_Move_AsyncWorker(_underlying, deferred,

                                                                                 to);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value CartPoint3D::GetValue_x(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    double x = _underlying->x;
    _to = Napi::Number::New(env, x);

    return _to;
}

void CartPoint3D::SetValue_x(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    double x = info[0].ToNumber().DoubleValue();

    _underlying->x = x;
}
Napi::Value CartPoint3D::GetValue_y(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    double y = _underlying->y;
    _to = Napi::Number::New(env, y);

    return _to;
}

void CartPoint3D::SetValue_y(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    double y = info[0].ToNumber().DoubleValue();

    _underlying->y = y;
}
Napi::Value CartPoint3D::GetValue_z(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    double z = _underlying->z;
    _to = Napi::Number::New(env, z);

    return _to;
}

void CartPoint3D::SetValue_z(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    double z = info[0].ToNumber().DoubleValue();

    _underlying->z = z;
}

Napi::Value CartPoint3D::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

CartPoint3D_Move_AsyncWorker::CartPoint3D_Move_AsyncWorker(MbCartPoint3D *_underlying, Napi::Promise::Deferred const &d,
                                                           const MbVector3D &to)
    : _underlying(_underlying), PromiseWorker(d), to(to){};

void CartPoint3D_Move_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint3D &_result = _underlying->Move(to);

    this->_result = new (MbCartPoint3D)(_result);

    ExitParallelRegion();
}

void CartPoint3D_Move_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbCartPoint3D *_result = this->_result;
    _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)&(_result));

    deferred.Resolve(_to);
}

void CartPoint3D_Move_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
