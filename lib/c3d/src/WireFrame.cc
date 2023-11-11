// This is a generated file, modify: generate/templates/WireFrame.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/WireFrame.h"

#include "tool_mutex.h"

Napi::Object WireFrame::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(env, "WireFrame",
                                      {
                                          InstanceMethod<&WireFrame::GetCurves>("GetCurves"),
                                          InstanceMethod<&WireFrame::GetCurves_async>("GetCurves_async"),
                                          InstanceMethod<&WireFrame::Id>("Id"),

                                      });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("WireFrame", func);

    return exports;
}

WireFrame::WireFrame(const Napi::CallbackInfo &info) : Napi::ObjectWrap<WireFrame>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    Napi::Error::New(env, "WireFrame cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object WireFrame::NewInstance(Napi::Env env, MbWireFrame *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("WireFrame");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    WireFrame *unwrapped = WireFrame::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function WireFrame::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("WireFrame");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value WireFrame::GetCurves(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    RPArray<MbCurve3D> *curves = new RPArray<MbCurve3D>;

    _underlying->GetCurves(*curves

    );

    Napi::Value _to;

    Napi::Array arr_curves = Napi::Array::New(env);
    for (size_t i = 0; i < curves->Count(); i++)
    {
        arr_curves[i] = Curve3D::NewInstance(env,

                                             (*curves)[i]

        );
    }
    _to = arr_curves;

    return _to;
}

Napi::Value WireFrame::GetCurves_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    WireFrame_GetCurves_AsyncWorker *asyncWorker = new WireFrame_GetCurves_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value WireFrame::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

WireFrame_GetCurves_AsyncWorker::WireFrame_GetCurves_AsyncWorker(MbWireFrame *_underlying,
                                                                 Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void WireFrame_GetCurves_AsyncWorker::Execute()
{
    EnterParallelRegion();

    RPArray<MbCurve3D> *curves = new RPArray<MbCurve3D>;

    _underlying->GetCurves(*curves);

    this->curves = curves;

    ExitParallelRegion();
}

void WireFrame_GetCurves_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    RPArray<MbCurve3D> *curves = this->curves;
    Napi::Array arr_curves = Napi::Array::New(env);
    for (size_t i = 0; i < curves->Count(); i++)
    {
        arr_curves[i] = Curve3D::NewInstance(env,

                                             (*curves)[i]

        );
    }
    _to = arr_curves;

    deferred.Resolve(_to);
}

void WireFrame_GetCurves_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
