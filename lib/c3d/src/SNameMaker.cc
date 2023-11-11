// This is a generated file, modify: generate/templates/SNameMaker.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/SNameMaker.h"

#include "tool_mutex.h"

Napi::Object SNameMaker::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(env, "SNameMaker",
                                      {
                                          InstanceMethod<&SNameMaker::Add>("Add"),
                                          InstanceMethod<&SNameMaker::Add_async>("Add_async"),
                                          InstanceMethod<&SNameMaker::IsChild>("IsChild"),
                                          InstanceMethod<&SNameMaker::IsChild_async>("IsChild_async"),
                                          InstanceMethod<&SNameMaker::GetMainName>("GetMainName"),
                                          InstanceMethod<&SNameMaker::GetMainName_async>("GetMainName_async"),
                                          InstanceMethod<&SNameMaker::GetUseCount>("GetUseCount"),
                                          InstanceMethod<&SNameMaker::GetUseCount_async>("GetUseCount_async"),
                                          InstanceMethod<&SNameMaker::AddRef>("AddRef"),
                                          InstanceMethod<&SNameMaker::AddRef_async>("AddRef_async"),
                                          InstanceMethod<&SNameMaker::Id>("Id"),

                                      });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("SNameMaker", func);

    Napi::Object global = env.Global();
    Napi::Object Object = global.Get("Object").ToObject();
    Napi::Function setPrototypeOf = Napi::Function(env, Object.Get("setPrototypeOf"));
    Napi::Value prototype = func.Get("prototype");

    Napi::Function superFunc = NameMaker::GetConstructor(env);
    Napi::FunctionReference *superConstructor = new Napi::FunctionReference();
    *superConstructor = Napi::Persistent(superFunc);

    Napi::Value superPrototype = superFunc.Get("prototype");
    setPrototypeOf.Call({prototype, superPrototype});
    setPrototypeOf.Call({func, superFunc});

    return exports;
}

SNameMaker::SNameMaker(const Napi::CallbackInfo &info) : Napi::ObjectWrap<SNameMaker>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 3 && ((info[0].IsNumber())) && ((info[1].IsNumber())) && ((info[2].IsNumber()))

    )
    {
        int _mainName = info[0].ToNumber().Int64Value();

        const MbSNameMaker::ESides _sideAdd = static_cast<MbSNameMaker::ESides>(info[1].ToNumber().Uint32Value());

        int _buttAdd = info[2].ToNumber().Int64Value();

        MbSNameMaker *underlying = new MbSNameMaker(_mainName, _sideAdd, _buttAdd);
        if (underlying == NULL)
        {
            Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
            return;
        }
        underlying->AddRef();
        this->_underlying = underlying;
    }
    else
    {
        Napi::Error::New(env, "No matching constructor").ThrowAsJavaScriptException();
        return;
    }
}

Napi::Object SNameMaker::NewInstance(Napi::Env env, MbSNameMaker *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("SNameMaker");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    SNameMaker *unwrapped = SNameMaker::Unwrap(inst);
    underlying->AddRef();
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function SNameMaker::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("SNameMaker");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value SNameMaker::Add(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "SimpleName ent is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    const int ent = info[0].ToNumber().Int64Value();

    _underlying->Add(ent

    );

    return env.Undefined();
}

Napi::Value SNameMaker::Add_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "SimpleName ent is required."));
        return deferred.Promise();
    }

    const int ent = info[0].ToNumber().Int64Value();

    SNameMaker_Add_AsyncWorker *asyncWorker = new SNameMaker_Add_AsyncWorker(_underlying, deferred,

                                                                             ent);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SNameMaker::IsChild(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 ||
        !((info[0].IsObject() && info[0].ToObject().InstanceOf(TopologyItem::GetConstructor(env)))))
    {
        Napi::Error::New(env, "TopologyItem t is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 't'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class TopologyItem *t_ = TopologyItem::Unwrap(info[0].ToObject());

    const MbTopologyItem &t = *t_->_underlying;

    bool _result = _underlying->IsChild(t

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value SNameMaker::IsChild_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 ||
        !((info[0].IsObject() && info[0].ToObject().InstanceOf(TopologyItem::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "TopologyItem t is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 't'"));
        return deferred.Promise();
    }
    const class TopologyItem *t_ = TopologyItem::Unwrap(info[0].ToObject());

    const MbTopologyItem &t = *t_->_underlying;

    SNameMaker_IsChild_AsyncWorker *asyncWorker = new SNameMaker_IsChild_AsyncWorker(_underlying, deferred,

                                                                                     t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SNameMaker::GetMainName(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    SimpleName _result = _underlying->GetMainName(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value SNameMaker::GetMainName_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SNameMaker_GetMainName_AsyncWorker *asyncWorker = new SNameMaker_GetMainName_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SNameMaker::GetUseCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    refcount_t _result = _underlying->GetUseCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value SNameMaker::GetUseCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SNameMaker_GetUseCount_AsyncWorker *asyncWorker = new SNameMaker_GetUseCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SNameMaker::AddRef(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->AddRef(

    );

    return env.Undefined();
}

Napi::Value SNameMaker::AddRef_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SNameMaker_AddRef_AsyncWorker *asyncWorker = new SNameMaker_AddRef_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value SNameMaker::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

SNameMaker::~SNameMaker()
{
    // std::cout << "calling ::DeleteItem on SNameMaker for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

SNameMaker_Add_AsyncWorker::SNameMaker_Add_AsyncWorker(MbSNameMaker *_underlying, Napi::Promise::Deferred const &d,
                                                       const SimpleName &ent)
    : _underlying(_underlying), PromiseWorker(d), ent(ent){};

void SNameMaker_Add_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Add(ent);

    ExitParallelRegion();
}

void SNameMaker_Add_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void SNameMaker_Add_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SNameMaker_IsChild_AsyncWorker::SNameMaker_IsChild_AsyncWorker(MbSNameMaker *_underlying,
                                                               Napi::Promise::Deferred const &d,
                                                               const MbTopologyItem &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void SNameMaker_IsChild_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsChild(t);

    this->_result = _result;

    ExitParallelRegion();
}

void SNameMaker_IsChild_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void SNameMaker_IsChild_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SNameMaker_GetMainName_AsyncWorker::SNameMaker_GetMainName_AsyncWorker(MbSNameMaker *_underlying,
                                                                       Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SNameMaker_GetMainName_AsyncWorker::Execute()
{
    EnterParallelRegion();

    SimpleName _result = _underlying->GetMainName();

    this->_result = _result;

    ExitParallelRegion();
}

void SNameMaker_GetMainName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    SimpleName _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void SNameMaker_GetMainName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SNameMaker_GetUseCount_AsyncWorker::SNameMaker_GetUseCount_AsyncWorker(MbSNameMaker *_underlying,
                                                                       Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SNameMaker_GetUseCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    refcount_t _result = _underlying->GetUseCount();

    this->_result = _result;

    ExitParallelRegion();
}

void SNameMaker_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    refcount_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void SNameMaker_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SNameMaker_AddRef_AsyncWorker::SNameMaker_AddRef_AsyncWorker(MbSNameMaker *_underlying,
                                                             Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SNameMaker_AddRef_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddRef();

    ExitParallelRegion();
}

void SNameMaker_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void SNameMaker_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
