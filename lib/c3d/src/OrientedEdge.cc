// This is a generated file, modify: generate/templates/OrientedEdge.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/OrientedEdge.h"

#include "tool_mutex.h"

Napi::Object OrientedEdge::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(env, "OrientedEdge",
                                      {
                                          InstanceMethod<&OrientedEdge::GetCurveEdge>("GetCurveEdge"),
                                          InstanceMethod<&OrientedEdge::GetCurveEdge_async>("GetCurveEdge_async"),
                                          InstanceMethod<&OrientedEdge::Id>("Id"),

                                      });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("OrientedEdge", func);

    return exports;
}

OrientedEdge::OrientedEdge(const Napi::CallbackInfo &info) : Napi::ObjectWrap<OrientedEdge>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    Napi::Error::New(env, "OrientedEdge cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object OrientedEdge::NewInstance(Napi::Env env, MbOrientedEdge *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("OrientedEdge");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    OrientedEdge *unwrapped = OrientedEdge::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function OrientedEdge::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("OrientedEdge");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value OrientedEdge::GetCurveEdge(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbCurveEdge &_result = _underlying->GetCurveEdge(

    );

    Napi::Value _to;

    _to = CurveEdge::NewInstance(env, (MbCurveEdge *)&(_result));

    return _to;
}

Napi::Value OrientedEdge::GetCurveEdge_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    OrientedEdge_GetCurveEdge_AsyncWorker *asyncWorker =
        new OrientedEdge_GetCurveEdge_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value OrientedEdge::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

OrientedEdge_GetCurveEdge_AsyncWorker::OrientedEdge_GetCurveEdge_AsyncWorker(MbOrientedEdge *_underlying,
                                                                             Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void OrientedEdge_GetCurveEdge_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCurveEdge &_result = _underlying->GetCurveEdge();

    this->_result = (MbCurveEdge *)&(_result);

    ExitParallelRegion();
}

void OrientedEdge_GetCurveEdge_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbCurveEdge *_result = this->_result;
    _to = CurveEdge::NewInstance(env, (MbCurveEdge *)&(_result));

    deferred.Resolve(_to);
}

void OrientedEdge_GetCurveEdge_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
