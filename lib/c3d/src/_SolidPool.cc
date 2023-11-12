// This is a generated file, modify: generate/templates/_SolidPool.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/_SolidPool.h"

#include "tool_mutex.h"

Napi::Object _SolidPool::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(env, "SolidPool",
                                      {
                                          InstanceMethod<&_SolidPool::Alloc>("Alloc"),
                                          InstanceMethod<&_SolidPool::Alloc_async>("Alloc_async"),
                                          InstanceMethod<&_SolidPool::Pop>("Pop"),
                                          InstanceMethod<&_SolidPool::Pop_async>("Pop_async"),
                                          InstanceMethod<&_SolidPool::Count>("Count"),
                                          InstanceMethod<&_SolidPool::Count_async>("Count_async"),
                                          InstanceMethod<&_SolidPool::Id>("Id"),

                                      });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("SolidPool", func);

    return exports;
}

_SolidPool::_SolidPool(const Napi::CallbackInfo &info) : Napi::ObjectWrap<_SolidPool>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 1 && ((info[0].IsObject() && info[0].ToObject().InstanceOf(Solid::GetConstructor(env))))

    )
    {
        if (info[0].IsNull() || info[0].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'original'").ThrowAsJavaScriptException();
            return;
        }
        const class Solid *original_ = Solid::Unwrap(info[0].ToObject());

        MbSolid &original = *original_->_underlying;

        SolidPool *underlying = new SolidPool(original);
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

Napi::Object _SolidPool::NewInstance(Napi::Env env, SolidPool *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("SolidPool");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    _SolidPool *unwrapped = _SolidPool::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function _SolidPool::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("SolidPool");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value _SolidPool::Alloc(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number n is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    size_t n = info[0].ToNumber().Int64Value();

    _underlying->Alloc(n

    );

    return env.Undefined();
}

Napi::Value _SolidPool::Alloc_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number n is required."));
        return deferred.Promise();
    }

    size_t n = info[0].ToNumber().Int64Value();

    _SolidPool_Alloc_AsyncWorker *asyncWorker = new _SolidPool_Alloc_AsyncWorker(_underlying, deferred,

                                                                                 n);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value _SolidPool::Pop(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    SolidDuplicate *_result = _underlying->Pop(

    );

    Napi::Value _to;

    if (_result != NULL)
    {
        _to = _SolidDuplicate::NewInstance(env, (SolidDuplicate *)_result);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value _SolidPool::Pop_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    _SolidPool_Pop_AsyncWorker *asyncWorker = new _SolidPool_Pop_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value _SolidPool::Count(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    size_t _result = _underlying->Count(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value _SolidPool::Count_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    _SolidPool_Count_AsyncWorker *asyncWorker = new _SolidPool_Count_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value _SolidPool::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

_SolidPool_Alloc_AsyncWorker::_SolidPool_Alloc_AsyncWorker(SolidPool *_underlying, Napi::Promise::Deferred const &d,
                                                           size_t n)
    : _underlying(_underlying), PromiseWorker(d), n(n){};

void _SolidPool_Alloc_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Alloc(n);

    ExitParallelRegion();
}

void _SolidPool_Alloc_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void _SolidPool_Alloc_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
_SolidPool_Pop_AsyncWorker::_SolidPool_Pop_AsyncWorker(SolidPool *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void _SolidPool_Pop_AsyncWorker::Execute()
{
    EnterParallelRegion();

    SolidDuplicate *_result = _underlying->Pop();

    this->_result = _result;

    ExitParallelRegion();
}

void _SolidPool_Pop_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    SolidDuplicate *_result = this->_result;
    if (_result != NULL)
    {
        _to = _SolidDuplicate::NewInstance(env, (SolidDuplicate *)_result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void _SolidPool_Pop_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
_SolidPool_Count_AsyncWorker::_SolidPool_Count_AsyncWorker(SolidPool *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void _SolidPool_Count_AsyncWorker::Execute()
{
    EnterParallelRegion();

    size_t _result = _underlying->Count();

    this->_result = _result;

    ExitParallelRegion();
}

void _SolidPool_Count_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    size_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void _SolidPool_Count_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
