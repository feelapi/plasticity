// This is a generated file, modify: generate/templates/FunctionFactory.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/FunctionFactory.h"

#include "tool_mutex.h"

Napi::Object FunctionFactory::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(
        env, "FunctionFactory",
        {
            InstanceMethod<&FunctionFactory::CreateAnalyticalFunction>("CreateAnalyticalFunction"),
            InstanceMethod<&FunctionFactory::CreateAnalyticalFunction_async>("CreateAnalyticalFunction_async"),
            InstanceMethod<&FunctionFactory::Id>("Id"),

        });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("FunctionFactory", func);

    return exports;
}

FunctionFactory::FunctionFactory(const Napi::CallbackInfo &info) : Napi::ObjectWrap<FunctionFactory>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 0

    )
    {

        MbFunctionFactory *underlying = new MbFunctionFactory();
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

Napi::Object FunctionFactory::NewInstance(Napi::Env env, MbFunctionFactory *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("FunctionFactory");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    FunctionFactory *unwrapped = FunctionFactory::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function FunctionFactory::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("FunctionFactory");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value FunctionFactory::CreateAnalyticalFunction(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsString()))
    {
        Napi::Error::New(env, "string data is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsString()))
    {
        Napi::Error::New(env, "string argument is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 || !(info[2].IsNumber()))
    {
        Napi::Error::New(env, "number tmin is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 3 || !(info[3].IsNumber()))
    {
        Napi::Error::New(env, "number tmax is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    const c3d::string_t data = c3d::ToC3Dstring(info[0].ToString().Utf8Value());

    const c3d::string_t argument = c3d::ToC3Dstring(info[1].ToString().Utf8Value());

    double tmin = info[2].ToNumber().DoubleValue();

    double tmax = info[3].ToNumber().DoubleValue();

    MbFunction *_result = _underlying->CreateAnalyticalFunction(data, argument, tmin, tmax

    );

    Napi::Value _to;

    if (_result != NULL)
    {
        _to = Function::NewInstance(env, (MbFunction *)_result);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value FunctionFactory::CreateAnalyticalFunction_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsString()))
    {
        deferred.Reject(Napi::String::New(env, "string data is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsString()))
    {
        deferred.Reject(Napi::String::New(env, "string argument is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 || !(info[2].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number tmin is required."));
        return deferred.Promise();
    }
    if (info.Length() == 3 || !(info[3].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number tmax is required."));
        return deferred.Promise();
    }

    const c3d::string_t data = c3d::ToC3Dstring(info[0].ToString().Utf8Value());

    const c3d::string_t argument = c3d::ToC3Dstring(info[1].ToString().Utf8Value());

    double tmin = info[2].ToNumber().DoubleValue();

    double tmax = info[3].ToNumber().DoubleValue();

    FunctionFactory_CreateAnalyticalFunction_AsyncWorker *asyncWorker =
        new FunctionFactory_CreateAnalyticalFunction_AsyncWorker(_underlying, deferred,

                                                                 data,

                                                                 argument,

                                                                 tmin,

                                                                 tmax);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value FunctionFactory::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

FunctionFactory_CreateAnalyticalFunction_AsyncWorker::FunctionFactory_CreateAnalyticalFunction_AsyncWorker(
    MbFunctionFactory *_underlying, Napi::Promise::Deferred const &d, const c3d::string_t data,
    const c3d::string_t argument, double tmin, double tmax)
    : _underlying(_underlying), PromiseWorker(d), data(data), argument(argument), tmin(tmin), tmax(tmax){};

void FunctionFactory_CreateAnalyticalFunction_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbFunction *_result = _underlying->CreateAnalyticalFunction(data, argument, tmin, tmax);

    this->_result = _result;

    ExitParallelRegion();
}

void FunctionFactory_CreateAnalyticalFunction_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbFunction *_result = this->_result;
    if (_result != NULL)
    {
        _to = Function::NewInstance(env, (MbFunction *)_result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void FunctionFactory_CreateAnalyticalFunction_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                                  Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
