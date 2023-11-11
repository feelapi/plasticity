// This is a generated file, modify: generate/templates/Enabler.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/Enabler.h"
#include "../include/Error.h"

#include "tool_mutex.h"

Napi::Object Enabler::Init(Napi::Env env, Napi::Object exports)
{
    Napi::Object object = Napi::Object::New(env);

    object.Set("EnableMathModules", Napi::Function::New<&Enabler::EnableMathModules>(env));
    object.Set("EnableMathModules_async", Napi::Function::New<&Enabler::EnableMathModules_async>(env));

    exports.Set("Enabler", object);

    return exports;
}

Napi::Value Enabler::EnableMathModules(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsString()))
    {
        Napi::Error::New(env, "char name is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsString()))
    {
        Napi::Error::New(env, "char key is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    const std::string name = info[0].ToString().Utf8Value();

    const std::string key = info[1].ToString().Utf8Value();

    ::EnableMathModules(name.c_str(), name.length(), key.c_str(), key.length()

    );

    return env.Undefined();
}

Napi::Value Enabler::EnableMathModules_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsString()))
    {
        deferred.Reject(Napi::String::New(env, "char name is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsString()))
    {
        deferred.Reject(Napi::String::New(env, "char key is required."));
        return deferred.Promise();
    }

    const std::string name = info[0].ToString().Utf8Value();

    const std::string key = info[1].ToString().Utf8Value();

    Enabler_EnableMathModules_AsyncWorker *asyncWorker =
        new Enabler_EnableMathModules_AsyncWorker(deferred, name.c_str(), name.length(), key.c_str(), key.length());
    asyncWorker->Queue();
    return deferred.Promise();
}

Enabler_EnableMathModules_AsyncWorker::Enabler_EnableMathModules_AsyncWorker(Napi::Promise::Deferred const &d,
                                                                             const char *name, size_t name_length,
                                                                             const char *key, size_t key_length)
    : PromiseWorker(d), name(name), name_length(name_length), key(key), key_length(key_length){};

void Enabler_EnableMathModules_AsyncWorker::Execute()
{
    EnterParallelRegion();

    ::EnableMathModules(name, name_length, key, key_length);

    ExitParallelRegion();
}

void Enabler_EnableMathModules_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Enabler_EnableMathModules_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
