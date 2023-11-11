// This is a generated file, modify: generate/templates/_SlotValues.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/_SlotValues.h"

#include "tool_mutex.h"

Napi::Object _SlotValues::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(
        env, "SlotValues",
        {
            InstanceMethod<&_SlotValues::SetSurface>("SetSurface"),
            InstanceMethod<&_SlotValues::SetSurface_async>("SetSurface_async"),
            InstanceMethod<&_SlotValues::SetPhantom>("SetPhantom"),
            InstanceMethod<&_SlotValues::SetPhantom_async>("SetPhantom_async"),
            InstanceMethod<&_SlotValues::Id>("Id"),

            InstanceAccessor<&_SlotValues::GetValue_length, &_SlotValues::SetValue_length>("length"),
            InstanceAccessor<&_SlotValues::GetValue_width, &_SlotValues::SetValue_width>("width"),
            InstanceAccessor<&_SlotValues::GetValue_depth, &_SlotValues::SetValue_depth>("depth"),
            InstanceAccessor<&_SlotValues::GetValue_bottomWidth, &_SlotValues::SetValue_bottomWidth>("bottomWidth"),
            InstanceAccessor<&_SlotValues::GetValue_bottomDepth, &_SlotValues::SetValue_bottomDepth>("bottomDepth"),
            InstanceAccessor<&_SlotValues::GetValue_floorRadius, &_SlotValues::SetValue_floorRadius>("floorRadius"),
            InstanceAccessor<&_SlotValues::GetValue_tailAngle, &_SlotValues::SetValue_tailAngle>("tailAngle"),
            InstanceAccessor<&_SlotValues::GetValue_type, &_SlotValues::SetValue_type>("type"),
            InstanceAccessor<&_SlotValues::GetValue_placeAngle, &_SlotValues::SetValue_placeAngle>("placeAngle"),
            InstanceAccessor<&_SlotValues::GetValue_azimuthAngle, &_SlotValues::SetValue_azimuthAngle>("azimuthAngle"),
        });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("SlotValues", func);

    Napi::Object global = env.Global();
    Napi::Object Object = global.Get("Object").ToObject();
    Napi::Function setPrototypeOf = Napi::Function(env, Object.Get("setPrototypeOf"));
    Napi::Value prototype = func.Get("prototype");

    Napi::Function superFunc = _HoleValues::GetConstructor(env);
    Napi::FunctionReference *superConstructor = new Napi::FunctionReference();
    *superConstructor = Napi::Persistent(superFunc);

    Napi::Value superPrototype = superFunc.Get("prototype");
    setPrototypeOf.Call({prototype, superPrototype});
    setPrototypeOf.Call({func, superFunc});

    return exports;
}

_SlotValues::_SlotValues(const Napi::CallbackInfo &info) : Napi::ObjectWrap<_SlotValues>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 0

    )
    {

        SlotValues *underlying = new SlotValues();
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

Napi::Object _SlotValues::NewInstance(Napi::Env env, SlotValues *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("SlotValues");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    _SlotValues *unwrapped = _SlotValues::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function _SlotValues::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("SlotValues");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value _SlotValues::SetSurface(const Napi::CallbackInfo &info)
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

Napi::Value _SlotValues::SetSurface_async(const Napi::CallbackInfo &info)
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

    _SlotValues_SetSurface_AsyncWorker *asyncWorker = new _SlotValues_SetSurface_AsyncWorker(_underlying, deferred,

                                                                                             s);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value _SlotValues::SetPhantom(const Napi::CallbackInfo &info)
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

Napi::Value _SlotValues::SetPhantom_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean s is required."));
        return deferred.Promise();
    }

    bool s = info[0].ToBoolean();

    _SlotValues_SetPhantom_AsyncWorker *asyncWorker = new _SlotValues_SetPhantom_AsyncWorker(_underlying, deferred,

                                                                                             s);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value _SlotValues::GetValue_length(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    double length = _underlying->length;
    _to = Napi::Number::New(env, length);

    return _to;
}

void _SlotValues::SetValue_length(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    double length = info[0].ToNumber().DoubleValue();

    _underlying->length = length;
}
Napi::Value _SlotValues::GetValue_width(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    double width = _underlying->width;
    _to = Napi::Number::New(env, width);

    return _to;
}

void _SlotValues::SetValue_width(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    double width = info[0].ToNumber().DoubleValue();

    _underlying->width = width;
}
Napi::Value _SlotValues::GetValue_depth(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    double depth = _underlying->depth;
    _to = Napi::Number::New(env, depth);

    return _to;
}

void _SlotValues::SetValue_depth(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    double depth = info[0].ToNumber().DoubleValue();

    _underlying->depth = depth;
}
Napi::Value _SlotValues::GetValue_bottomWidth(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    double bottomWidth = _underlying->bottomWidth;
    _to = Napi::Number::New(env, bottomWidth);

    return _to;
}

void _SlotValues::SetValue_bottomWidth(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    double bottomWidth = info[0].ToNumber().DoubleValue();

    _underlying->bottomWidth = bottomWidth;
}
Napi::Value _SlotValues::GetValue_bottomDepth(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    double bottomDepth = _underlying->bottomDepth;
    _to = Napi::Number::New(env, bottomDepth);

    return _to;
}

void _SlotValues::SetValue_bottomDepth(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    double bottomDepth = info[0].ToNumber().DoubleValue();

    _underlying->bottomDepth = bottomDepth;
}
Napi::Value _SlotValues::GetValue_floorRadius(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    double floorRadius = _underlying->floorRadius;
    _to = Napi::Number::New(env, floorRadius);

    return _to;
}

void _SlotValues::SetValue_floorRadius(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    double floorRadius = info[0].ToNumber().DoubleValue();

    _underlying->floorRadius = floorRadius;
}
Napi::Value _SlotValues::GetValue_tailAngle(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    double tailAngle = _underlying->tailAngle;
    _to = Napi::Number::New(env, tailAngle);

    return _to;
}

void _SlotValues::SetValue_tailAngle(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    double tailAngle = info[0].ToNumber().DoubleValue();

    _underlying->tailAngle = tailAngle;
}
Napi::Value _SlotValues::GetValue_type(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    SlotValues::SlotType type = _underlying->type;
    _to = Napi::Number::New(env, type);

    return _to;
}

void _SlotValues::SetValue_type(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    const SlotValues::SlotType type = static_cast<SlotValues::SlotType>(info[0].ToNumber().Uint32Value());

    _underlying->type = type;
}
Napi::Value _SlotValues::GetValue_placeAngle(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    double placeAngle = _underlying->placeAngle;
    _to = Napi::Number::New(env, placeAngle);

    return _to;
}

void _SlotValues::SetValue_placeAngle(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    double placeAngle = info[0].ToNumber().DoubleValue();

    _underlying->placeAngle = placeAngle;
}
Napi::Value _SlotValues::GetValue_azimuthAngle(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    double azimuthAngle = _underlying->azimuthAngle;
    _to = Napi::Number::New(env, azimuthAngle);

    return _to;
}

void _SlotValues::SetValue_azimuthAngle(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    double azimuthAngle = info[0].ToNumber().DoubleValue();

    _underlying->azimuthAngle = azimuthAngle;
}

Napi::Value _SlotValues::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

_SlotValues_SetSurface_AsyncWorker::_SlotValues_SetSurface_AsyncWorker(SlotValues *_underlying,
                                                                       Napi::Promise::Deferred const &d, MbSurface *s)
    : _underlying(_underlying), PromiseWorker(d), s(s){};

void _SlotValues_SetSurface_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetSurface(s);

    ExitParallelRegion();
}

void _SlotValues_SetSurface_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void _SlotValues_SetSurface_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
_SlotValues_SetPhantom_AsyncWorker::_SlotValues_SetPhantom_AsyncWorker(SlotValues *_underlying,
                                                                       Napi::Promise::Deferred const &d, bool s)
    : _underlying(_underlying), PromiseWorker(d), s(s){};

void _SlotValues_SetPhantom_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetPhantom(s);

    ExitParallelRegion();
}

void _SlotValues_SetPhantom_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void _SlotValues_SetPhantom_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
