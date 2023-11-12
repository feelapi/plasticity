// This is a generated file, modify: generate/templates/Rect.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/Rect.h"

#include "tool_mutex.h"

Napi::Object Rect::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(env, "Rect",
                                      {
                                          InstanceMethod<&Rect::GetTop>("GetTop"),
                                          InstanceMethod<&Rect::GetTop_async>("GetTop_async"),
                                          InstanceMethod<&Rect::GetBottom>("GetBottom"),
                                          InstanceMethod<&Rect::GetBottom_async>("GetBottom_async"),
                                          InstanceMethod<&Rect::GetLeft>("GetLeft"),
                                          InstanceMethod<&Rect::GetLeft_async>("GetLeft_async"),
                                          InstanceMethod<&Rect::GetRight>("GetRight"),
                                          InstanceMethod<&Rect::GetRight_async>("GetRight_async"),
                                          InstanceMethod<&Rect::Id>("Id"),

                                      });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Rect", func);

    return exports;
}

Rect::Rect(const Napi::CallbackInfo &info) : Napi::ObjectWrap<Rect>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    Napi::Error::New(env, "Rect cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object Rect::NewInstance(Napi::Env env, MbRect *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Rect");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Rect *unwrapped = Rect::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Rect::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Rect");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value Rect::GetTop(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetTop(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Rect::GetTop_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Rect_GetTop_AsyncWorker *asyncWorker = new Rect_GetTop_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Rect::GetBottom(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetBottom(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Rect::GetBottom_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Rect_GetBottom_AsyncWorker *asyncWorker = new Rect_GetBottom_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Rect::GetLeft(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetLeft(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Rect::GetLeft_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Rect_GetLeft_AsyncWorker *asyncWorker = new Rect_GetLeft_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Rect::GetRight(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetRight(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Rect::GetRight_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Rect_GetRight_AsyncWorker *asyncWorker = new Rect_GetRight_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value Rect::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

Rect_GetTop_AsyncWorker::Rect_GetTop_AsyncWorker(MbRect *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Rect_GetTop_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetTop();

    this->_result = _result;

    ExitParallelRegion();
}

void Rect_GetTop_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Rect_GetTop_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Rect_GetBottom_AsyncWorker::Rect_GetBottom_AsyncWorker(MbRect *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Rect_GetBottom_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetBottom();

    this->_result = _result;

    ExitParallelRegion();
}

void Rect_GetBottom_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Rect_GetBottom_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Rect_GetLeft_AsyncWorker::Rect_GetLeft_AsyncWorker(MbRect *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Rect_GetLeft_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetLeft();

    this->_result = _result;

    ExitParallelRegion();
}

void Rect_GetLeft_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Rect_GetLeft_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Rect_GetRight_AsyncWorker::Rect_GetRight_AsyncWorker(MbRect *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Rect_GetRight_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetRight();

    this->_result = _result;

    ExitParallelRegion();
}

void Rect_GetRight_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Rect_GetRight_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
