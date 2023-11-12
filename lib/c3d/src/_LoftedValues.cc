// This is a generated file, modify: generate/templates/_LoftedValues.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/_LoftedValues.h"

#include "tool_mutex.h"

Napi::Object _LoftedValues::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(
        env, "LoftedValues",
        {
            InstanceMethod<&_LoftedValues::CheckSelfInt>("CheckSelfInt"),
            InstanceMethod<&_LoftedValues::CheckSelfInt_async>("CheckSelfInt_async"),
            InstanceMethod<&_LoftedValues::SetCheckSelfInt>("SetCheckSelfInt"),
            InstanceMethod<&_LoftedValues::SetCheckSelfInt_async>("SetCheckSelfInt_async"),
            InstanceMethod<&_LoftedValues::Id>("Id"),

            InstanceAccessor<&_LoftedValues::GetValue_closed, &_LoftedValues::SetValue_closed>("closed"),
            InstanceAccessor<&_LoftedValues::GetValue_derFactor1, &_LoftedValues::SetValue_derFactor1>("derFactor1"),
            InstanceAccessor<&_LoftedValues::GetValue_derFactor2, &_LoftedValues::SetValue_derFactor2>("derFactor2"),
            InstanceAccessor<&_LoftedValues::GetValue_thickness1, &_LoftedValues::SetValue_thickness1>("thickness1"),
            InstanceAccessor<&_LoftedValues::GetValue_thickness2, &_LoftedValues::SetValue_thickness2>("thickness2"),
            InstanceAccessor<&_LoftedValues::GetValue_shellClosed, &_LoftedValues::SetValue_shellClosed>("shellClosed"),
        });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("LoftedValues", func);

    Napi::Object global = env.Global();
    Napi::Object Object = global.Get("Object").ToObject();
    Napi::Function setPrototypeOf = Napi::Function(env, Object.Get("setPrototypeOf"));
    Napi::Value prototype = func.Get("prototype");

    Napi::Function superFunc = _SweptValues::GetConstructor(env);
    Napi::FunctionReference *superConstructor = new Napi::FunctionReference();
    *superConstructor = Napi::Persistent(superFunc);

    Napi::Value superPrototype = superFunc.Get("prototype");
    setPrototypeOf.Call({prototype, superPrototype});
    setPrototypeOf.Call({func, superFunc});

    return exports;
}

_LoftedValues::_LoftedValues(const Napi::CallbackInfo &info) : Napi::ObjectWrap<_LoftedValues>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 0

    )
    {

        LoftedValues *underlying = new LoftedValues();
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

Napi::Object _LoftedValues::NewInstance(Napi::Env env, LoftedValues *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("LoftedValues");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    _LoftedValues *unwrapped = _LoftedValues::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function _LoftedValues::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("LoftedValues");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value _LoftedValues::CheckSelfInt(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool _result = _underlying->CheckSelfInt(

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value _LoftedValues::CheckSelfInt_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    _LoftedValues_CheckSelfInt_AsyncWorker *asyncWorker =
        new _LoftedValues_CheckSelfInt_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value _LoftedValues::SetCheckSelfInt(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsBoolean()))
    {
        Napi::Error::New(env, "boolean c is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    bool c = info[0].ToBoolean();

    _underlying->SetCheckSelfInt(c

    );

    return env.Undefined();
}

Napi::Value _LoftedValues::SetCheckSelfInt_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean c is required."));
        return deferred.Promise();
    }

    bool c = info[0].ToBoolean();

    _LoftedValues_SetCheckSelfInt_AsyncWorker *asyncWorker =
        new _LoftedValues_SetCheckSelfInt_AsyncWorker(_underlying, deferred,

                                                      c);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value _LoftedValues::GetValue_closed(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    bool closed = _underlying->closed;
    _to = Napi::Boolean::New(env, closed);

    return _to;
}

void _LoftedValues::SetValue_closed(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    bool closed = info[0].ToBoolean();

    _underlying->closed = closed;
}
Napi::Value _LoftedValues::GetValue_derFactor1(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    double derFactor1 = _underlying->derFactor1;
    _to = Napi::Number::New(env, derFactor1);

    return _to;
}

void _LoftedValues::SetValue_derFactor1(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    double derFactor1 = info[0].ToNumber().DoubleValue();

    _underlying->derFactor1 = derFactor1;
}
Napi::Value _LoftedValues::GetValue_derFactor2(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    double derFactor2 = _underlying->derFactor2;
    _to = Napi::Number::New(env, derFactor2);

    return _to;
}

void _LoftedValues::SetValue_derFactor2(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    double derFactor2 = info[0].ToNumber().DoubleValue();

    _underlying->derFactor2 = derFactor2;
}
Napi::Value _LoftedValues::GetValue_thickness1(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    double thickness1 = _underlying->thickness1;
    _to = Napi::Number::New(env, thickness1);

    return _to;
}

void _LoftedValues::SetValue_thickness1(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    double thickness1 = info[0].ToNumber().DoubleValue();

    _underlying->thickness1 = thickness1;
}
Napi::Value _LoftedValues::GetValue_thickness2(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    double thickness2 = _underlying->thickness2;
    _to = Napi::Number::New(env, thickness2);

    return _to;
}

void _LoftedValues::SetValue_thickness2(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    double thickness2 = info[0].ToNumber().DoubleValue();

    _underlying->thickness2 = thickness2;
}
Napi::Value _LoftedValues::GetValue_shellClosed(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    bool shellClosed = _underlying->shellClosed;
    _to = Napi::Boolean::New(env, shellClosed);

    return _to;
}

void _LoftedValues::SetValue_shellClosed(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    bool shellClosed = info[0].ToBoolean();

    _underlying->shellClosed = shellClosed;
}

Napi::Value _LoftedValues::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

_LoftedValues_CheckSelfInt_AsyncWorker::_LoftedValues_CheckSelfInt_AsyncWorker(LoftedValues *_underlying,
                                                                               Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void _LoftedValues_CheckSelfInt_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->CheckSelfInt();

    this->_result = _result;

    ExitParallelRegion();
}

void _LoftedValues_CheckSelfInt_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void _LoftedValues_CheckSelfInt_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
_LoftedValues_SetCheckSelfInt_AsyncWorker::_LoftedValues_SetCheckSelfInt_AsyncWorker(LoftedValues *_underlying,
                                                                                     Napi::Promise::Deferred const &d,
                                                                                     bool c)
    : _underlying(_underlying), PromiseWorker(d), c(c){};

void _LoftedValues_SetCheckSelfInt_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetCheckSelfInt(c);

    ExitParallelRegion();
}

void _LoftedValues_SetCheckSelfInt_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void _LoftedValues_SetCheckSelfInt_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                       Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
