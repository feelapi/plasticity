// This is a generated file, modify: generate/templates/Mutex.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/Mutex.h"
#include "../include/Error.h"

#include "tool_mutex.h"

Napi::Object Mutex::Init(Napi::Env env, Napi::Object exports)
{
    Napi::Object object = Napi::Object::New(env);

    object.Set("EnterParallelRegion", Napi::Function::New<&Mutex::EnterParallelRegion>(env));
    object.Set("EnterParallelRegion_async", Napi::Function::New<&Mutex::EnterParallelRegion_async>(env));
    object.Set("ExitParallelRegion", Napi::Function::New<&Mutex::ExitParallelRegion>(env));
    object.Set("ExitParallelRegion_async", Napi::Function::New<&Mutex::ExitParallelRegion_async>(env));

    exports.Set("Mutex", object);

    return exports;
}

Napi::Value Mutex::EnterParallelRegion(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    ::EnterParallelRegion(

    );

    return env.Undefined();
}

Napi::Value Mutex::EnterParallelRegion_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Mutex_EnterParallelRegion_AsyncWorker *asyncWorker = new Mutex_EnterParallelRegion_AsyncWorker(deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Mutex::ExitParallelRegion(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    ::ExitParallelRegion(

    );

    return env.Undefined();
}

Napi::Value Mutex::ExitParallelRegion_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Mutex_ExitParallelRegion_AsyncWorker *asyncWorker = new Mutex_ExitParallelRegion_AsyncWorker(deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Mutex_EnterParallelRegion_AsyncWorker::Mutex_EnterParallelRegion_AsyncWorker(Napi::Promise::Deferred const &d)
    : PromiseWorker(d){};

void Mutex_EnterParallelRegion_AsyncWorker::Execute()
{
    EnterParallelRegion();

    ::EnterParallelRegion();

    ExitParallelRegion();
}

void Mutex_EnterParallelRegion_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Mutex_EnterParallelRegion_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Mutex_ExitParallelRegion_AsyncWorker::Mutex_ExitParallelRegion_AsyncWorker(Napi::Promise::Deferred const &d)
    : PromiseWorker(d){};

void Mutex_ExitParallelRegion_AsyncWorker::Execute()
{
    EnterParallelRegion();

    ::ExitParallelRegion();

    ExitParallelRegion();
}

void Mutex_ExitParallelRegion_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Mutex_ExitParallelRegion_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
