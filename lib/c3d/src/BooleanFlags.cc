// This is a generated file, modify: generate/templates/BooleanFlags.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/BooleanFlags.h"

#include "tool_mutex.h"

Napi::Object BooleanFlags::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(env, "BooleanFlags",
                                      {
                                          InstanceMethod<&BooleanFlags::InitBoolean>("InitBoolean"),
                                          InstanceMethod<&BooleanFlags::InitBoolean_async>("InitBoolean_async"),
                                          InstanceMethod<&BooleanFlags::InitCutting>("InitCutting"),
                                          InstanceMethod<&BooleanFlags::InitCutting_async>("InitCutting_async"),
                                          InstanceMethod<&BooleanFlags::SetMergingFaces>("SetMergingFaces"),
                                          InstanceMethod<&BooleanFlags::SetMergingFaces_async>("SetMergingFaces_async"),
                                          InstanceMethod<&BooleanFlags::SetMergingEdges>("SetMergingEdges"),
                                          InstanceMethod<&BooleanFlags::SetMergingEdges_async>("SetMergingEdges_async"),
                                          InstanceMethod<&BooleanFlags::Id>("Id"),

                                      });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("BooleanFlags", func);

    return exports;
}

BooleanFlags::BooleanFlags(const Napi::CallbackInfo &info) : Napi::ObjectWrap<BooleanFlags>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 0

    )
    {

        MbBooleanFlags *underlying = new MbBooleanFlags();
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

Napi::Object BooleanFlags::NewInstance(Napi::Env env, MbBooleanFlags *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("BooleanFlags");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    BooleanFlags *unwrapped = BooleanFlags::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function BooleanFlags::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("BooleanFlags");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value BooleanFlags::InitBoolean(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsBoolean()))
    {
        Napi::Error::New(env, "boolean _closed is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    bool _closed = info[0].ToBoolean();

    bool _allowNonIntersecting = info[1].ToBoolean();

    _underlying->InitBoolean(_closed, info.Length() == 1 || info[1].IsNull() ? false : _allowNonIntersecting

    );

    return env.Undefined();
}

Napi::Value BooleanFlags::InitBoolean_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean _closed is required."));
        return deferred.Promise();
    }

    bool _closed = info[0].ToBoolean();

    bool _allowNonIntersecting = info[1].ToBoolean();

    BooleanFlags_InitBoolean_AsyncWorker *asyncWorker = new BooleanFlags_InitBoolean_AsyncWorker(_underlying, deferred,

                                                                                                 _closed,

                                                                                                 _allowNonIntersecting);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value BooleanFlags::InitCutting(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsBoolean()))
    {
        Napi::Error::New(env, "boolean _closed is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    bool _closed = info[0].ToBoolean();

    bool _allowNonIntersecting = info[1].ToBoolean();

    _underlying->InitCutting(_closed, info.Length() == 1 || info[1].IsNull() ? false : _allowNonIntersecting

    );

    return env.Undefined();
}

Napi::Value BooleanFlags::InitCutting_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean _closed is required."));
        return deferred.Promise();
    }

    bool _closed = info[0].ToBoolean();

    bool _allowNonIntersecting = info[1].ToBoolean();

    BooleanFlags_InitCutting_AsyncWorker *asyncWorker = new BooleanFlags_InitCutting_AsyncWorker(_underlying, deferred,

                                                                                                 _closed,

                                                                                                 _allowNonIntersecting);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value BooleanFlags::SetMergingFaces(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsBoolean()))
    {
        Napi::Error::New(env, "boolean s is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    bool s = info[0].ToBoolean();

    _underlying->SetMergingFaces(s

    );

    return env.Undefined();
}

Napi::Value BooleanFlags::SetMergingFaces_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean s is required."));
        return deferred.Promise();
    }

    bool s = info[0].ToBoolean();

    BooleanFlags_SetMergingFaces_AsyncWorker *asyncWorker =
        new BooleanFlags_SetMergingFaces_AsyncWorker(_underlying, deferred,

                                                     s);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value BooleanFlags::SetMergingEdges(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsBoolean()))
    {
        Napi::Error::New(env, "boolean s is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    bool s = info[0].ToBoolean();

    _underlying->SetMergingEdges(s

    );

    return env.Undefined();
}

Napi::Value BooleanFlags::SetMergingEdges_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean s is required."));
        return deferred.Promise();
    }

    bool s = info[0].ToBoolean();

    BooleanFlags_SetMergingEdges_AsyncWorker *asyncWorker =
        new BooleanFlags_SetMergingEdges_AsyncWorker(_underlying, deferred,

                                                     s);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value BooleanFlags::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

BooleanFlags_InitBoolean_AsyncWorker::BooleanFlags_InitBoolean_AsyncWorker(MbBooleanFlags *_underlying,
                                                                           Napi::Promise::Deferred const &d,
                                                                           bool _closed, bool _allowNonIntersecting)
    : _underlying(_underlying), PromiseWorker(d), _closed(_closed), _allowNonIntersecting(_allowNonIntersecting){};

void BooleanFlags_InitBoolean_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->InitBoolean(_closed, _allowNonIntersecting);

    ExitParallelRegion();
}

void BooleanFlags_InitBoolean_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void BooleanFlags_InitBoolean_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
BooleanFlags_InitCutting_AsyncWorker::BooleanFlags_InitCutting_AsyncWorker(MbBooleanFlags *_underlying,
                                                                           Napi::Promise::Deferred const &d,
                                                                           bool _closed, bool _allowNonIntersecting)
    : _underlying(_underlying), PromiseWorker(d), _closed(_closed), _allowNonIntersecting(_allowNonIntersecting){};

void BooleanFlags_InitCutting_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->InitCutting(_closed, _allowNonIntersecting);

    ExitParallelRegion();
}

void BooleanFlags_InitCutting_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void BooleanFlags_InitCutting_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
BooleanFlags_SetMergingFaces_AsyncWorker::BooleanFlags_SetMergingFaces_AsyncWorker(MbBooleanFlags *_underlying,
                                                                                   Napi::Promise::Deferred const &d,
                                                                                   bool s)
    : _underlying(_underlying), PromiseWorker(d), s(s){};

void BooleanFlags_SetMergingFaces_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetMergingFaces(s);

    ExitParallelRegion();
}

void BooleanFlags_SetMergingFaces_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void BooleanFlags_SetMergingFaces_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
BooleanFlags_SetMergingEdges_AsyncWorker::BooleanFlags_SetMergingEdges_AsyncWorker(MbBooleanFlags *_underlying,
                                                                                   Napi::Promise::Deferred const &d,
                                                                                   bool s)
    : _underlying(_underlying), PromiseWorker(d), s(s){};

void BooleanFlags_SetMergingEdges_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetMergingEdges(s);

    ExitParallelRegion();
}

void BooleanFlags_SetMergingEdges_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void BooleanFlags_SetMergingEdges_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
