// This is a generated file, modify: generate/templates/EdgeFunction.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/EdgeFunction.h"

#include "tool_mutex.h"

Napi::Object EdgeFunction::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(env, "EdgeFunction",
                                      {
                                          InstanceMethod<&EdgeFunction::Edge>("Edge"),
                                          InstanceMethod<&EdgeFunction::Edge_async>("Edge_async"),
                                          InstanceMethod<&EdgeFunction::Function>("Function"),
                                          InstanceMethod<&EdgeFunction::Function_async>("Function_async"),
                                          InstanceMethod<&EdgeFunction::Id>("Id"),

                                      });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("EdgeFunction", func);

    return exports;
}

EdgeFunction::EdgeFunction(const Napi::CallbackInfo &info) : Napi::ObjectWrap<EdgeFunction>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 2 && ((info[0].IsObject() && info[0].ToObject().InstanceOf(CurveEdge::GetConstructor(env)))) &&
        ((info[1].IsObject() && info[1].ToObject().InstanceOf(Function::GetConstructor(env))))

    )
    {
        if (info[0].IsNull() || info[0].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'e'").ThrowAsJavaScriptException();
            return;
        }
        const class CurveEdge *e_ = CurveEdge::Unwrap(info[0].ToObject());

        const MbCurveEdge *e = e_->_underlying;

        if (info[1].IsNull() || info[1].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'f'").ThrowAsJavaScriptException();
            return;
        }
        const class Function *f_ = Function::Unwrap(info[1].ToObject());

        const MbFunction *f = f_->_underlying;

        MbEdgeFunction *underlying = new MbEdgeFunction(e, f);
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

Napi::Object EdgeFunction::NewInstance(Napi::Env env, MbEdgeFunction *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("EdgeFunction");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    EdgeFunction *unwrapped = EdgeFunction::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function EdgeFunction::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("EdgeFunction");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value EdgeFunction::Edge(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbCurveEdge *_result = _underlying->Edge(

    );

    Napi::Value _to;

    if (_result != NULL)
    {
        _to = CurveEdge::NewInstance(env, (MbCurveEdge *)_result);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value EdgeFunction::Edge_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    EdgeFunction_Edge_AsyncWorker *asyncWorker = new EdgeFunction_Edge_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value EdgeFunction::Function(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbFunction *_result = _underlying->Function(

    );

    Napi::Value _to;

    if (_result != NULL)
    {
        _to = Function::NewInstance(env, (MbFunction *)_result);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value EdgeFunction::Function_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    EdgeFunction_Function_AsyncWorker *asyncWorker = new EdgeFunction_Function_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value EdgeFunction::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

EdgeFunction_Edge_AsyncWorker::EdgeFunction_Edge_AsyncWorker(MbEdgeFunction *_underlying,
                                                             Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void EdgeFunction_Edge_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbCurveEdge *_result = _underlying->Edge();

    this->_result = _result;

    ExitParallelRegion();
}

void EdgeFunction_Edge_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbCurveEdge *_result = this->_result;
    if (_result != NULL)
    {
        _to = CurveEdge::NewInstance(env, (MbCurveEdge *)_result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void EdgeFunction_Edge_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
EdgeFunction_Function_AsyncWorker::EdgeFunction_Function_AsyncWorker(MbEdgeFunction *_underlying,
                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void EdgeFunction_Function_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbFunction *_result = _underlying->Function();

    this->_result = _result;

    ExitParallelRegion();
}

void EdgeFunction_Function_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbFunction *_result = this->_result;
    if (_result != NULL)
    {
        _to = Function::NewInstance(env, (MbFunction *)_result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void EdgeFunction_Function_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
