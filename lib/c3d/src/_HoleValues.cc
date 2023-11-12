// This is a generated file, modify: generate/templates/_HoleValues.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/_HoleValues.h"

#include "tool_mutex.h"

Napi::Object _HoleValues::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(
        env, "HoleValues",
        {
            InstanceMethod<&_HoleValues::SetSurface>("SetSurface"),
            InstanceMethod<&_HoleValues::SetSurface_async>("SetSurface_async"),
            InstanceMethod<&_HoleValues::SetPhantom>("SetPhantom"),
            InstanceMethod<&_HoleValues::SetPhantom_async>("SetPhantom_async"),
            InstanceMethod<&_HoleValues::Id>("Id"),

            InstanceAccessor<&_HoleValues::GetValue_placeAngle, &_HoleValues::SetValue_placeAngle>("placeAngle"),
            InstanceAccessor<&_HoleValues::GetValue_azimuthAngle, &_HoleValues::SetValue_azimuthAngle>("azimuthAngle"),
        });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("HoleValues", func);

    return exports;
}

_HoleValues::_HoleValues(const Napi::CallbackInfo &info) : Napi::ObjectWrap<_HoleValues>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    Napi::Error::New(env, "_HoleValues cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object _HoleValues::NewInstance(Napi::Env env, HoleValues *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("HoleValues");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    _HoleValues *unwrapped = _HoleValues::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function _HoleValues::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("HoleValues");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value _HoleValues::SetSurface(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Surface::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Surface s is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 's'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Surface *s_ = Surface::Unwrap(info[0].ToObject());

    MbSurface *s = s_->_underlying;

    _underlying->SetSurface(s

    );

    return env.Undefined();
}

Napi::Value _HoleValues::SetSurface_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Surface::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Surface s is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 's'"));
        return deferred.Promise();
    }
    const class Surface *s_ = Surface::Unwrap(info[0].ToObject());

    MbSurface *s = s_->_underlying;

    _HoleValues_SetSurface_AsyncWorker *asyncWorker = new _HoleValues_SetSurface_AsyncWorker(_underlying, deferred,

                                                                                             s);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value _HoleValues::SetPhantom(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsBoolean()))
    {
        Napi::Error::New(env, "boolean s is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    bool s = info[0].ToBoolean();

    _underlying->SetPhantom(s

    );

    return env.Undefined();
}

Napi::Value _HoleValues::SetPhantom_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean s is required."));
        return deferred.Promise();
    }

    bool s = info[0].ToBoolean();

    _HoleValues_SetPhantom_AsyncWorker *asyncWorker = new _HoleValues_SetPhantom_AsyncWorker(_underlying, deferred,

                                                                                             s);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value _HoleValues::GetValue_placeAngle(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    double placeAngle = _underlying->placeAngle;
    _to = Napi::Number::New(env, placeAngle);

    return _to;
}

void _HoleValues::SetValue_placeAngle(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    double placeAngle = info[0].ToNumber().DoubleValue();

    _underlying->placeAngle = placeAngle;
}
Napi::Value _HoleValues::GetValue_azimuthAngle(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    double azimuthAngle = _underlying->azimuthAngle;
    _to = Napi::Number::New(env, azimuthAngle);

    return _to;
}

void _HoleValues::SetValue_azimuthAngle(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    double azimuthAngle = info[0].ToNumber().DoubleValue();

    _underlying->azimuthAngle = azimuthAngle;
}

Napi::Value _HoleValues::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

_HoleValues_SetSurface_AsyncWorker::_HoleValues_SetSurface_AsyncWorker(HoleValues *_underlying,
                                                                       Napi::Promise::Deferred const &d, MbSurface *s)
    : _underlying(_underlying), PromiseWorker(d), s(s){};

void _HoleValues_SetSurface_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetSurface(s);

    ExitParallelRegion();
}

void _HoleValues_SetSurface_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void _HoleValues_SetSurface_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
_HoleValues_SetPhantom_AsyncWorker::_HoleValues_SetPhantom_AsyncWorker(HoleValues *_underlying,
                                                                       Napi::Promise::Deferred const &d, bool s)
    : _underlying(_underlying), PromiseWorker(d), s(s){};

void _HoleValues_SetPhantom_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetPhantom(s);

    ExitParallelRegion();
}

void _HoleValues_SetPhantom_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void _HoleValues_SetPhantom_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
