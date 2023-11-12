// This is a generated file, modify: generate/templates/_ExtrusionValues.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/_ExtrusionValues.h"

#include "tool_mutex.h"

Napi::Object _ExtrusionValues::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(
        env, "ExtrusionValues",
        {
            InstanceMethod<&_ExtrusionValues::CheckSelfInt>("CheckSelfInt"),
            InstanceMethod<&_ExtrusionValues::CheckSelfInt_async>("CheckSelfInt_async"),
            InstanceMethod<&_ExtrusionValues::SetCheckSelfInt>("SetCheckSelfInt"),
            InstanceMethod<&_ExtrusionValues::SetCheckSelfInt_async>("SetCheckSelfInt_async"),

            InstanceAccessor<&_ExtrusionValues::GetValue_side1, &_ExtrusionValues::SetValue_side1>("side1"),
            InstanceAccessor<&_ExtrusionValues::GetValue_side2, &_ExtrusionValues::SetValue_side2>("side2"),
            InstanceAccessor<&_ExtrusionValues::GetValue_thickness1, &_ExtrusionValues::SetValue_thickness1>(
                "thickness1"),
            InstanceAccessor<&_ExtrusionValues::GetValue_thickness2, &_ExtrusionValues::SetValue_thickness2>(
                "thickness2"),
            InstanceAccessor<&_ExtrusionValues::GetValue_shellClosed, &_ExtrusionValues::SetValue_shellClosed>(
                "shellClosed"),
        });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("ExtrusionValues", func);

    Napi::Object global = env.Global();
    Napi::Object Object = global.Get("Object").ToObject();
    Napi::Function setPrototypeOf = Napi::Function(env, Object.Get("setPrototypeOf"));
    Napi::Value prototype = func.Get("prototype");

    Napi::Function superFunc = _SweptValuesAndSides::GetConstructor(env);
    Napi::FunctionReference *superConstructor = new Napi::FunctionReference();
    *superConstructor = Napi::Persistent(superFunc);

    Napi::Value superPrototype = superFunc.Get("prototype");
    setPrototypeOf.Call({prototype, superPrototype});
    setPrototypeOf.Call({func, superFunc});

    return exports;
}

_ExtrusionValues::_ExtrusionValues(const Napi::CallbackInfo &info) : Napi::ObjectWrap<_ExtrusionValues>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 2 && ((info[0].IsNumber())) && ((info[1].IsNumber()))

    )
    {
        double scalarValue1 = info[0].ToNumber().DoubleValue();

        double scalarValue2 = info[1].ToNumber().DoubleValue();

        ExtrusionValues underlying(scalarValue1, scalarValue2);
        this->_underlying = underlying;
    }
    else
    {
        Napi::Error::New(env, "No matching constructor").ThrowAsJavaScriptException();
        return;
    }
}

Napi::Object _ExtrusionValues::NewInstance(Napi::Env env, ExtrusionValues underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("ExtrusionValues");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    _ExtrusionValues *unwrapped = _ExtrusionValues::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function _ExtrusionValues::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("ExtrusionValues");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value _ExtrusionValues::CheckSelfInt(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool _result = _underlying.CheckSelfInt(

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value _ExtrusionValues::CheckSelfInt_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    _ExtrusionValues_CheckSelfInt_AsyncWorker *asyncWorker =
        new _ExtrusionValues_CheckSelfInt_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value _ExtrusionValues::SetCheckSelfInt(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsBoolean()))
    {
        Napi::Error::New(env, "boolean c is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    bool c = info[0].ToBoolean();

    _underlying.SetCheckSelfInt(c

    );

    return env.Undefined();
}

Napi::Value _ExtrusionValues::SetCheckSelfInt_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean c is required."));
        return deferred.Promise();
    }

    bool c = info[0].ToBoolean();

    _ExtrusionValues_SetCheckSelfInt_AsyncWorker *asyncWorker =
        new _ExtrusionValues_SetCheckSelfInt_AsyncWorker(_underlying, deferred,

                                                         c);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value _ExtrusionValues::GetValue_side1(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    MbSweptSide side1 = _underlying.side1;
    _to = SweptSide::NewInstance(env, side1);

    return _to;
}

void _ExtrusionValues::SetValue_side1(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'side1'").ThrowAsJavaScriptException();
        return;
    }
    const class SweptSide *side1_ = SweptSide::Unwrap(info[0].ToObject());

    MbSweptSide side1 = side1_->_underlying;

    _underlying.side1 = side1;
}
Napi::Value _ExtrusionValues::GetValue_side2(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    MbSweptSide side2 = _underlying.side2;
    _to = SweptSide::NewInstance(env, side2);

    return _to;
}

void _ExtrusionValues::SetValue_side2(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'side2'").ThrowAsJavaScriptException();
        return;
    }
    const class SweptSide *side2_ = SweptSide::Unwrap(info[0].ToObject());

    MbSweptSide side2 = side2_->_underlying;

    _underlying.side2 = side2;
}
Napi::Value _ExtrusionValues::GetValue_thickness1(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    double thickness1 = _underlying.thickness1;
    _to = Napi::Number::New(env, thickness1);

    return _to;
}

void _ExtrusionValues::SetValue_thickness1(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    double thickness1 = info[0].ToNumber().DoubleValue();

    _underlying.thickness1 = thickness1;
}
Napi::Value _ExtrusionValues::GetValue_thickness2(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    double thickness2 = _underlying.thickness2;
    _to = Napi::Number::New(env, thickness2);

    return _to;
}

void _ExtrusionValues::SetValue_thickness2(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    double thickness2 = info[0].ToNumber().DoubleValue();

    _underlying.thickness2 = thickness2;
}
Napi::Value _ExtrusionValues::GetValue_shellClosed(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    bool shellClosed = _underlying.shellClosed;
    _to = Napi::Boolean::New(env, shellClosed);

    return _to;
}

void _ExtrusionValues::SetValue_shellClosed(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    bool shellClosed = info[0].ToBoolean();

    _underlying.shellClosed = shellClosed;
}

_ExtrusionValues_CheckSelfInt_AsyncWorker::_ExtrusionValues_CheckSelfInt_AsyncWorker(ExtrusionValues _underlying,
                                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void _ExtrusionValues_CheckSelfInt_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying.CheckSelfInt();

    this->_result = _result;

    ExitParallelRegion();
}

void _ExtrusionValues_CheckSelfInt_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void _ExtrusionValues_CheckSelfInt_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                       Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
_ExtrusionValues_SetCheckSelfInt_AsyncWorker::_ExtrusionValues_SetCheckSelfInt_AsyncWorker(
    ExtrusionValues _underlying, Napi::Promise::Deferred const &d, bool c)
    : _underlying(_underlying), PromiseWorker(d), c(c){};

void _ExtrusionValues_SetCheckSelfInt_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying.SetCheckSelfInt(c);

    ExitParallelRegion();
}

void _ExtrusionValues_SetCheckSelfInt_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void _ExtrusionValues_SetCheckSelfInt_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                          Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
