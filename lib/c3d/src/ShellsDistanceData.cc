// This is a generated file, modify: generate/templates/ShellsDistanceData.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/ShellsDistanceData.h"

#include "tool_mutex.h"

Napi::Object ShellsDistanceData::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func =
        DefineClass(env, "ShellsDistanceData",
                    {
                        InstanceMethod<&ShellsDistanceData::GetMinDistanse>("GetMinDistanse"),
                        InstanceMethod<&ShellsDistanceData::GetMinDistanse_async>("GetMinDistanse_async"),

                    });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("ShellsDistanceData", func);

    return exports;
}

ShellsDistanceData::ShellsDistanceData(const Napi::CallbackInfo &info) : Napi::ObjectWrap<ShellsDistanceData>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    Napi::Error::New(env, "ShellsDistanceData cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object ShellsDistanceData::NewInstance(Napi::Env env, MbShellsDistanceData underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("ShellsDistanceData");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    ShellsDistanceData *unwrapped = ShellsDistanceData::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function ShellsDistanceData::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("ShellsDistanceData");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value ShellsDistanceData::GetMinDistanse(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying.GetMinDistanse(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ShellsDistanceData::GetMinDistanse_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ShellsDistanceData_GetMinDistanse_AsyncWorker *asyncWorker =
        new ShellsDistanceData_GetMinDistanse_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

ShellsDistanceData_GetMinDistanse_AsyncWorker::ShellsDistanceData_GetMinDistanse_AsyncWorker(
    MbShellsDistanceData _underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ShellsDistanceData_GetMinDistanse_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying.GetMinDistanse();

    this->_result = _result;

    ExitParallelRegion();
}

void ShellsDistanceData_GetMinDistanse_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ShellsDistanceData_GetMinDistanse_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                           Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
