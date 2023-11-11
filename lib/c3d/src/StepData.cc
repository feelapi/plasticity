// This is a generated file, modify: generate/templates/StepData.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/StepData.h"

#include "tool_mutex.h"

Napi::Object StepData::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(env, "StepData",
                                      {
                                          InstanceMethod<&StepData::SetSag>("SetSag"),
                                          InstanceMethod<&StepData::SetSag_async>("SetSag_async"),
                                          InstanceMethod<&StepData::SetAngle>("SetAngle"),
                                          InstanceMethod<&StepData::SetAngle_async>("SetAngle_async"),
                                          InstanceMethod<&StepData::SetLength>("SetLength"),
                                          InstanceMethod<&StepData::SetLength_async>("SetLength_async"),
                                          InstanceMethod<&StepData::SetMaxCount>("SetMaxCount"),
                                          InstanceMethod<&StepData::SetMaxCount_async>("SetMaxCount_async"),
                                          InstanceMethod<&StepData::GetSag>("GetSag"),
                                          InstanceMethod<&StepData::GetSag_async>("GetSag_async"),
                                          InstanceMethod<&StepData::GetAngle>("GetAngle"),
                                          InstanceMethod<&StepData::GetAngle_async>("GetAngle_async"),
                                          InstanceMethod<&StepData::GetLength>("GetLength"),
                                          InstanceMethod<&StepData::GetLength_async>("GetLength_async"),
                                          InstanceMethod<&StepData::SetStepType>("SetStepType"),
                                          InstanceMethod<&StepData::SetStepType_async>("SetStepType_async"),
                                          InstanceMethod<&StepData::Init>("Init"),
                                          InstanceMethod<&StepData::Init_async>("Init_async"),
                                          InstanceMethod<&StepData::Id>("Id"),

                                      });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("StepData", func);

    return exports;
}

StepData::StepData(const Napi::CallbackInfo &info) : Napi::ObjectWrap<StepData>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 2 && ((info[0].IsNumber())) && ((info[1].IsNumber()))

    )
    {
        const MbeStepType t = static_cast<MbeStepType>(info[0].ToNumber().Uint32Value());

        double sag = info[1].ToNumber().DoubleValue();

        MbStepData *underlying = new MbStepData(t, sag);
        if (underlying == NULL)
        {
            Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
            return;
        }
        this->_underlying = underlying;
    }
    else if (info.Length() == 0

    )
    {

        MbStepData *underlying = new MbStepData();
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

Napi::Object StepData::NewInstance(Napi::Env env, MbStepData *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("StepData");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    StepData *unwrapped = StepData::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function StepData::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("StepData");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value StepData::SetSag(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number s is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    double s = info[0].ToNumber().DoubleValue();

    _underlying->SetSag(s

    );

    return env.Undefined();
}

Napi::Value StepData::SetSag_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number s is required."));
        return deferred.Promise();
    }

    double s = info[0].ToNumber().DoubleValue();

    StepData_SetSag_AsyncWorker *asyncWorker = new StepData_SetSag_AsyncWorker(_underlying, deferred,

                                                                               s);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value StepData::SetAngle(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number a is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    double a = info[0].ToNumber().DoubleValue();

    _underlying->SetAngle(a

    );

    return env.Undefined();
}

Napi::Value StepData::SetAngle_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number a is required."));
        return deferred.Promise();
    }

    double a = info[0].ToNumber().DoubleValue();

    StepData_SetAngle_AsyncWorker *asyncWorker = new StepData_SetAngle_AsyncWorker(_underlying, deferred,

                                                                                   a);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value StepData::SetLength(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number l is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    double l = info[0].ToNumber().DoubleValue();

    _underlying->SetLength(l

    );

    return env.Undefined();
}

Napi::Value StepData::SetLength_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number l is required."));
        return deferred.Promise();
    }

    double l = info[0].ToNumber().DoubleValue();

    StepData_SetLength_AsyncWorker *asyncWorker = new StepData_SetLength_AsyncWorker(_underlying, deferred,

                                                                                     l);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value StepData::SetMaxCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number c is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    size_t c = info[0].ToNumber().Int64Value();

    _underlying->SetMaxCount(c

    );

    return env.Undefined();
}

Napi::Value StepData::SetMaxCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number c is required."));
        return deferred.Promise();
    }

    size_t c = info[0].ToNumber().Int64Value();

    StepData_SetMaxCount_AsyncWorker *asyncWorker = new StepData_SetMaxCount_AsyncWorker(_underlying, deferred,

                                                                                         c);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value StepData::GetSag(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetSag(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value StepData::GetSag_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    StepData_GetSag_AsyncWorker *asyncWorker = new StepData_GetSag_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value StepData::GetAngle(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetAngle(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value StepData::GetAngle_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    StepData_GetAngle_AsyncWorker *asyncWorker = new StepData_GetAngle_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value StepData::GetLength(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetLength(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value StepData::GetLength_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    StepData_GetLength_AsyncWorker *asyncWorker = new StepData_GetLength_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value StepData::SetStepType(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "StepType t is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    const MbeStepType t = static_cast<MbeStepType>(info[0].ToNumber().Uint32Value());

    bool add = info[1].ToBoolean();

    _underlying->SetStepType(t, info.Length() == 1 || info[1].IsNull() ? true : add

    );

    return env.Undefined();
}

Napi::Value StepData::SetStepType_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "StepType t is required."));
        return deferred.Promise();
    }

    const MbeStepType t = static_cast<MbeStepType>(info[0].ToNumber().Uint32Value());

    bool add = info[1].ToBoolean();

    StepData_SetStepType_AsyncWorker *asyncWorker = new StepData_SetStepType_AsyncWorker(_underlying, deferred,

                                                                                         t,

                                                                                         add);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value StepData::Init(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "StepType t is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        Napi::Error::New(env, "number s is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 || !(info[2].IsNumber()))
    {
        Napi::Error::New(env, "number a is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 3 || !(info[3].IsNumber()))
    {
        Napi::Error::New(env, "number l is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    const MbeStepType t = static_cast<MbeStepType>(info[0].ToNumber().Uint32Value());

    double s = info[1].ToNumber().DoubleValue();

    double a = info[2].ToNumber().DoubleValue();

    double l = info[3].ToNumber().DoubleValue();

    size_t c = info[4].ToNumber().Int64Value();

    _underlying->Init(t, s, a, l, info.Length() == 4 || info[4].IsNull() ? 0 : c

    );

    return env.Undefined();
}

Napi::Value StepData::Init_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "StepType t is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number s is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 || !(info[2].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number a is required."));
        return deferred.Promise();
    }
    if (info.Length() == 3 || !(info[3].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number l is required."));
        return deferred.Promise();
    }

    const MbeStepType t = static_cast<MbeStepType>(info[0].ToNumber().Uint32Value());

    double s = info[1].ToNumber().DoubleValue();

    double a = info[2].ToNumber().DoubleValue();

    double l = info[3].ToNumber().DoubleValue();

    size_t c = info[4].ToNumber().Int64Value();

    StepData_Init_AsyncWorker *asyncWorker = new StepData_Init_AsyncWorker(_underlying, deferred,

                                                                           t,

                                                                           s,

                                                                           a,

                                                                           l,

                                                                           c);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value StepData::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

StepData_SetSag_AsyncWorker::StepData_SetSag_AsyncWorker(MbStepData *_underlying, Napi::Promise::Deferred const &d,
                                                         double s)
    : _underlying(_underlying), PromiseWorker(d), s(s){};

void StepData_SetSag_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetSag(s);

    ExitParallelRegion();
}

void StepData_SetSag_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void StepData_SetSag_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
StepData_SetAngle_AsyncWorker::StepData_SetAngle_AsyncWorker(MbStepData *_underlying, Napi::Promise::Deferred const &d,
                                                             double a)
    : _underlying(_underlying), PromiseWorker(d), a(a){};

void StepData_SetAngle_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetAngle(a);

    ExitParallelRegion();
}

void StepData_SetAngle_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void StepData_SetAngle_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
StepData_SetLength_AsyncWorker::StepData_SetLength_AsyncWorker(MbStepData *_underlying,
                                                               Napi::Promise::Deferred const &d, double l)
    : _underlying(_underlying), PromiseWorker(d), l(l){};

void StepData_SetLength_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetLength(l);

    ExitParallelRegion();
}

void StepData_SetLength_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void StepData_SetLength_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
StepData_SetMaxCount_AsyncWorker::StepData_SetMaxCount_AsyncWorker(MbStepData *_underlying,
                                                                   Napi::Promise::Deferred const &d, size_t c)
    : _underlying(_underlying), PromiseWorker(d), c(c){};

void StepData_SetMaxCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetMaxCount(c);

    ExitParallelRegion();
}

void StepData_SetMaxCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void StepData_SetMaxCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
StepData_GetSag_AsyncWorker::StepData_GetSag_AsyncWorker(MbStepData *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void StepData_GetSag_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetSag();

    this->_result = _result;

    ExitParallelRegion();
}

void StepData_GetSag_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void StepData_GetSag_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
StepData_GetAngle_AsyncWorker::StepData_GetAngle_AsyncWorker(MbStepData *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void StepData_GetAngle_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetAngle();

    this->_result = _result;

    ExitParallelRegion();
}

void StepData_GetAngle_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void StepData_GetAngle_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
StepData_GetLength_AsyncWorker::StepData_GetLength_AsyncWorker(MbStepData *_underlying,
                                                               Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void StepData_GetLength_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetLength();

    this->_result = _result;

    ExitParallelRegion();
}

void StepData_GetLength_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void StepData_GetLength_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
StepData_SetStepType_AsyncWorker::StepData_SetStepType_AsyncWorker(MbStepData *_underlying,
                                                                   Napi::Promise::Deferred const &d, MbeStepType t,
                                                                   bool add)
    : _underlying(_underlying), PromiseWorker(d), t(t), add(add){};

void StepData_SetStepType_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetStepType(t, add);

    ExitParallelRegion();
}

void StepData_SetStepType_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void StepData_SetStepType_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
StepData_Init_AsyncWorker::StepData_Init_AsyncWorker(MbStepData *_underlying, Napi::Promise::Deferred const &d,
                                                     MbeStepType t, double s, double a, double l, size_t c)
    : _underlying(_underlying), PromiseWorker(d), t(t), s(s), a(a), l(l), c(c){};

void StepData_Init_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Init(t, s, a, l, c);

    ExitParallelRegion();
}

void StepData_Init_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void StepData_Init_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
