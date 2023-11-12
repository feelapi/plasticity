// This is a generated file, modify: generate/templates/Path.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/Path.h"

#include "tool_mutex.h"

Napi::Object Path::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(env, "Path",
                                      {
                                          InstanceMethod<&Path::Count>("Count"),
                                          InstanceMethod<&Path::Count_async>("Count_async"),
                                          InstanceMethod<&Path::Id>("Id"),

                                      });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Path", func);

    return exports;
}

Path::Path(const Napi::CallbackInfo &info) : Napi::ObjectWrap<Path>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    Napi::Error::New(env, "Path cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object Path::NewInstance(Napi::Env env, MbPath *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Path");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Path *unwrapped = Path::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Path::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Path");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value Path::Count(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    size_t _result = _underlying->Count(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Path::Count_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Path_Count_AsyncWorker *asyncWorker = new Path_Count_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value Path::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

Path_Count_AsyncWorker::Path_Count_AsyncWorker(MbPath *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Path_Count_AsyncWorker::Execute()
{
    EnterParallelRegion();

    size_t _result = _underlying->Count();

    this->_result = _result;

    ExitParallelRegion();
}

void Path_Count_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    size_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Path_Count_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
