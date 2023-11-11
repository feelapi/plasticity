// This is a generated file, modify: generate/templates/_DuplicationValues.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/_DuplicationValues.h"

#include "tool_mutex.h"

Napi::Object _DuplicationValues::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(
        env, "DuplicationValues",
        {
            InstanceMethod<&_DuplicationValues::GenerateTransformMatrices>("GenerateTransformMatrices"),
            InstanceMethod<&_DuplicationValues::GenerateTransformMatrices_async>("GenerateTransformMatrices_async"),
            InstanceMethod<&_DuplicationValues::Id>("Id"),

        });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("DuplicationValues", func);

    return exports;
}

_DuplicationValues::_DuplicationValues(const Napi::CallbackInfo &info) : Napi::ObjectWrap<_DuplicationValues>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    Napi::Error::New(env, "_DuplicationValues cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object _DuplicationValues::NewInstance(Napi::Env env, DuplicationValues *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("DuplicationValues");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    _DuplicationValues *unwrapped = _DuplicationValues::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function _DuplicationValues::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("DuplicationValues");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value _DuplicationValues::GenerateTransformMatrices(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    std::vector<MbMatrix3D> *matrices = new std::vector<MbMatrix3D>;

    _underlying->GenerateTransformMatrices(*matrices

    );

    Napi::Value _to;

    Napi::Array arr_matrices = Napi::Array::New(env);
    for (size_t i = 0; i < matrices->size(); i++)
    {
        arr_matrices[i] = Matrix3D::NewInstance(env,

                                                new MbMatrix3D((*matrices)[i])

        );
    }
    _to = arr_matrices;

    return _to;
}

Napi::Value _DuplicationValues::GenerateTransformMatrices_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    _DuplicationValues_GenerateTransformMatrices_AsyncWorker *asyncWorker =
        new _DuplicationValues_GenerateTransformMatrices_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value _DuplicationValues::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

_DuplicationValues_GenerateTransformMatrices_AsyncWorker::_DuplicationValues_GenerateTransformMatrices_AsyncWorker(
    DuplicationValues *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void _DuplicationValues_GenerateTransformMatrices_AsyncWorker::Execute()
{
    EnterParallelRegion();

    std::vector<MbMatrix3D> *matrices = new std::vector<MbMatrix3D>;

    _underlying->GenerateTransformMatrices(*matrices);

    this->matrices = matrices;

    ExitParallelRegion();
}

void _DuplicationValues_GenerateTransformMatrices_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    std::vector<MbMatrix3D> *matrices = this->matrices;
    Napi::Array arr_matrices = Napi::Array::New(env);
    for (size_t i = 0; i < matrices->size(); i++)
    {
        arr_matrices[i] = Matrix3D::NewInstance(env,

                                                new MbMatrix3D((*matrices)[i])

        );
    }
    _to = arr_matrices;

    deferred.Resolve(_to);
}

void _DuplicationValues_GenerateTransformMatrices_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                                      Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
