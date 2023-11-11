// This is a generated file, modify: generate/templates/Transactions.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/Transactions.h"

#include "tool_mutex.h"

Napi::Object Transactions::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func =
        DefineClass(env, "Transactions",
                    {
                        InstanceMethod<&Transactions::GetCreatorsCount>("GetCreatorsCount"),
                        InstanceMethod<&Transactions::GetCreatorsCount_async>("GetCreatorsCount_async"),
                        InstanceMethod<&Transactions::GetCreator>("GetCreator"),
                        InstanceMethod<&Transactions::GetCreator_async>("GetCreator_async"),
                        InstanceMethod<&Transactions::SetCreator>("SetCreator"),
                        InstanceMethod<&Transactions::SetCreator_async>("SetCreator_async"),
                        InstanceMethod<&Transactions::DetachCreator>("DetachCreator"),
                        InstanceMethod<&Transactions::DetachCreator_async>("DetachCreator_async"),
                        InstanceMethod<&Transactions::AddCreator>("AddCreator"),
                        InstanceMethod<&Transactions::AddCreator_async>("AddCreator_async"),
                        InstanceMethod<&Transactions::GetCreators>("GetCreators"),
                        InstanceMethod<&Transactions::GetCreators_async>("GetCreators_async"),
                        InstanceMethod<&Transactions::DeleteCreator>("DeleteCreator"),
                        InstanceMethod<&Transactions::DeleteCreator_async>("DeleteCreator_async"),
                        InstanceMethod<&Transactions::GetActiveCreatorsCount>("GetActiveCreatorsCount"),
                        InstanceMethod<&Transactions::GetActiveCreatorsCount_async>("GetActiveCreatorsCount_async"),
                        InstanceMethod<&Transactions::Id>("Id"),

                    });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Transactions", func);

    return exports;
}

Transactions::Transactions(const Napi::CallbackInfo &info) : Napi::ObjectWrap<Transactions>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    Napi::Error::New(env, "Transactions cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object Transactions::NewInstance(Napi::Env env, MbTransactions *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Transactions");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Transactions *unwrapped = Transactions::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Transactions::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Transactions");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value Transactions::GetCreatorsCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    size_t _result = _underlying->GetCreatorsCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Transactions::GetCreatorsCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Transactions_GetCreatorsCount_AsyncWorker *asyncWorker =
        new Transactions_GetCreatorsCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Transactions::GetCreator(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number ind is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    size_t ind = info[0].ToNumber().Int64Value();

    const MbCreator *_result = _underlying->GetCreator(ind

    );

    Napi::Value _to;

    if (_result != NULL)
    {
        _to = Creator::NewInstance(env, (MbCreator *)_result);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value Transactions::GetCreator_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number ind is required."));
        return deferred.Promise();
    }

    size_t ind = info[0].ToNumber().Int64Value();

    Transactions_GetCreator_AsyncWorker *asyncWorker = new Transactions_GetCreator_AsyncWorker(_underlying, deferred,

                                                                                               ind);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Transactions::SetCreator(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number ind is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    size_t ind = info[0].ToNumber().Int64Value();

    MbCreator *_result = _underlying->SetCreator(ind

    );

    Napi::Value _to;

    if (_result != NULL)
    {
        _to = Creator::NewInstance(env, (MbCreator *)_result);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value Transactions::SetCreator_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number ind is required."));
        return deferred.Promise();
    }

    size_t ind = info[0].ToNumber().Int64Value();

    Transactions_SetCreator_AsyncWorker *asyncWorker = new Transactions_SetCreator_AsyncWorker(_underlying, deferred,

                                                                                               ind);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Transactions::DetachCreator(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number ind is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    size_t ind = info[0].ToNumber().Int64Value();

    MbCreator *_result = _underlying->DetachCreator(ind

    );

    Napi::Value _to;

    if (_result != NULL)
    {
        _to = Creator::NewInstance(env, (MbCreator *)_result);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value Transactions::DetachCreator_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number ind is required."));
        return deferred.Promise();
    }

    size_t ind = info[0].ToNumber().Int64Value();

    Transactions_DetachCreator_AsyncWorker *asyncWorker =
        new Transactions_DetachCreator_AsyncWorker(_underlying, deferred,

                                                   ind);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Transactions::AddCreator(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Creator::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Creator creator is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'creator'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Creator *creator_ = Creator::Unwrap(info[0].ToObject());

    const MbCreator *creator = creator_->_underlying;

    bool addSame = info[1].ToBoolean();

    bool _result = _underlying->AddCreator(creator, info.Length() == 1 || info[1].IsNull() ? false : addSame

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value Transactions::AddCreator_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Creator::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Creator creator is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'creator'"));
        return deferred.Promise();
    }
    const class Creator *creator_ = Creator::Unwrap(info[0].ToObject());

    const MbCreator *creator = creator_->_underlying;

    bool addSame = info[1].ToBoolean();

    Transactions_AddCreator_AsyncWorker *asyncWorker = new Transactions_AddCreator_AsyncWorker(_underlying, deferred,

                                                                                               creator,

                                                                                               addSame);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Transactions::GetCreators(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    RPArray<MbCreator> *creators = new RPArray<MbCreator>;

    bool _result = _underlying->GetCreators(*creators

    );

    if (_result)
    {

        Napi::Value _to;

        Napi::Array arr_creators = Napi::Array::New(env);
        for (size_t i = 0; i < creators->Count(); i++)
        {
            arr_creators[i] = Creator::NewInstance(env,

                                                   (*creators)[i]

            );
        }
        _to = arr_creators;

        return _to;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation GetCreators failed";
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value Transactions::GetCreators_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Transactions_GetCreators_AsyncWorker *asyncWorker = new Transactions_GetCreators_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Transactions::DeleteCreator(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number ind is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    size_t ind = info[0].ToNumber().Int64Value();

    bool _result = _underlying->DeleteCreator(ind

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value Transactions::DeleteCreator_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number ind is required."));
        return deferred.Promise();
    }

    size_t ind = info[0].ToNumber().Int64Value();

    Transactions_DeleteCreator_AsyncWorker *asyncWorker =
        new Transactions_DeleteCreator_AsyncWorker(_underlying, deferred,

                                                   ind);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Transactions::GetActiveCreatorsCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    size_t _result = _underlying->GetActiveCreatorsCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Transactions::GetActiveCreatorsCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Transactions_GetActiveCreatorsCount_AsyncWorker *asyncWorker =
        new Transactions_GetActiveCreatorsCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value Transactions::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

Transactions_GetCreatorsCount_AsyncWorker::Transactions_GetCreatorsCount_AsyncWorker(MbTransactions *_underlying,
                                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Transactions_GetCreatorsCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    size_t _result = _underlying->GetCreatorsCount();

    this->_result = _result;

    ExitParallelRegion();
}

void Transactions_GetCreatorsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    size_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Transactions_GetCreatorsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                       Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Transactions_GetCreator_AsyncWorker::Transactions_GetCreator_AsyncWorker(MbTransactions *_underlying,
                                                                         Napi::Promise::Deferred const &d, size_t ind)
    : _underlying(_underlying), PromiseWorker(d), ind(ind){};

void Transactions_GetCreator_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbCreator *_result = _underlying->GetCreator(ind);

    this->_result = _result;

    ExitParallelRegion();
}

void Transactions_GetCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbCreator *_result = this->_result;
    if (_result != NULL)
    {
        _to = Creator::NewInstance(env, (MbCreator *)_result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void Transactions_GetCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Transactions_SetCreator_AsyncWorker::Transactions_SetCreator_AsyncWorker(MbTransactions *_underlying,
                                                                         Napi::Promise::Deferred const &d, size_t ind)
    : _underlying(_underlying), PromiseWorker(d), ind(ind){};

void Transactions_SetCreator_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCreator *_result = _underlying->SetCreator(ind);

    this->_result = _result;

    ExitParallelRegion();
}

void Transactions_SetCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbCreator *_result = this->_result;
    if (_result != NULL)
    {
        _to = Creator::NewInstance(env, (MbCreator *)_result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void Transactions_SetCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Transactions_DetachCreator_AsyncWorker::Transactions_DetachCreator_AsyncWorker(MbTransactions *_underlying,
                                                                               Napi::Promise::Deferred const &d,
                                                                               size_t ind)
    : _underlying(_underlying), PromiseWorker(d), ind(ind){};

void Transactions_DetachCreator_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCreator *_result = _underlying->DetachCreator(ind);

    this->_result = _result;

    ExitParallelRegion();
}

void Transactions_DetachCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbCreator *_result = this->_result;
    if (_result != NULL)
    {
        _to = Creator::NewInstance(env, (MbCreator *)_result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void Transactions_DetachCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Transactions_AddCreator_AsyncWorker::Transactions_AddCreator_AsyncWorker(MbTransactions *_underlying,
                                                                         Napi::Promise::Deferred const &d,
                                                                         const MbCreator *creator, bool addSame)
    : _underlying(_underlying), PromiseWorker(d), creator(creator), addSame(addSame){};

void Transactions_AddCreator_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->AddCreator(creator, addSame);

    this->_result = _result;

    ExitParallelRegion();
}

void Transactions_AddCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void Transactions_AddCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Transactions_GetCreators_AsyncWorker::Transactions_GetCreators_AsyncWorker(MbTransactions *_underlying,
                                                                           Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Transactions_GetCreators_AsyncWorker::Execute()
{
    EnterParallelRegion();

    RPArray<MbCreator> *creators = new RPArray<MbCreator>;

    bool _result = _underlying->GetCreators(*creators);

    if (_result)
    {

        this->creators = creators;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation GetCreators failed";
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void Transactions_GetCreators_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    RPArray<MbCreator> *creators = this->creators;
    Napi::Array arr_creators = Napi::Array::New(env);
    for (size_t i = 0; i < creators->Count(); i++)
    {
        arr_creators[i] = Creator::NewInstance(env,

                                               (*creators)[i]

        );
    }
    _to = arr_creators;

    deferred.Resolve(_to);
}

void Transactions_GetCreators_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Transactions_DeleteCreator_AsyncWorker::Transactions_DeleteCreator_AsyncWorker(MbTransactions *_underlying,
                                                                               Napi::Promise::Deferred const &d,
                                                                               size_t ind)
    : _underlying(_underlying), PromiseWorker(d), ind(ind){};

void Transactions_DeleteCreator_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->DeleteCreator(ind);

    this->_result = _result;

    ExitParallelRegion();
}

void Transactions_DeleteCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void Transactions_DeleteCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Transactions_GetActiveCreatorsCount_AsyncWorker::Transactions_GetActiveCreatorsCount_AsyncWorker(
    MbTransactions *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Transactions_GetActiveCreatorsCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    size_t _result = _underlying->GetActiveCreatorsCount();

    this->_result = _result;

    ExitParallelRegion();
}

void Transactions_GetActiveCreatorsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    size_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Transactions_GetActiveCreatorsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                             Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
