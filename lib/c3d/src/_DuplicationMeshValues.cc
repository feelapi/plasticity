// This is a generated file, modify: generate/templates/_DuplicationMeshValues.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/_DuplicationMeshValues.h"

#include "tool_mutex.h"

Napi::Object _DuplicationMeshValues::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(
        env, "DuplicationMeshValues",
        {
            InstanceMethod<&_DuplicationMeshValues::GenerateTransformMatrices>("GenerateTransformMatrices"),
            InstanceMethod<&_DuplicationMeshValues::GenerateTransformMatrices_async>("GenerateTransformMatrices_async"),
            InstanceMethod<&_DuplicationMeshValues::Id>("Id"),

        });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("DuplicationMeshValues", func);

    Napi::Object global = env.Global();
    Napi::Object Object = global.Get("Object").ToObject();
    Napi::Function setPrototypeOf = Napi::Function(env, Object.Get("setPrototypeOf"));
    Napi::Value prototype = func.Get("prototype");

    Napi::Function superFunc = _DuplicationValues::GetConstructor(env);
    Napi::FunctionReference *superConstructor = new Napi::FunctionReference();
    *superConstructor = Napi::Persistent(superFunc);

    Napi::Value superPrototype = superFunc.Get("prototype");
    setPrototypeOf.Call({prototype, superPrototype});
    setPrototypeOf.Call({func, superFunc});

    return exports;
}

_DuplicationMeshValues::_DuplicationMeshValues(const Napi::CallbackInfo &info)
    : Napi::ObjectWrap<_DuplicationMeshValues>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 9 && ((info[0].IsBoolean())) &&
        ((info[1].IsObject() && info[1].ToObject().InstanceOf(Vector3D::GetConstructor(env)))) &&
        ((info[2].IsNumber())) && ((info[3].IsNumber())) &&
        ((info[4].IsObject() && info[4].ToObject().InstanceOf(Vector3D::GetConstructor(env)))) &&
        ((info[5].IsNumber())) && ((info[6].IsNumber())) &&
        ((info[7].IsObject() && info[7].ToObject().InstanceOf(CartPoint3D::GetConstructor(env))) ||
         (info[7].IsNull() || info[7].IsUndefined())) &&
        ((info[8].IsBoolean()) || (info[8].IsNull() || info[8].IsUndefined()))

    )
    {
        bool isPolar = info[0].ToBoolean();

        if (info[1].IsNull() || info[1].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'dir1'").ThrowAsJavaScriptException();
            return;
        }
        const class Vector3D *dir1_ = Vector3D::Unwrap(info[1].ToObject());

        const MbVector3D &dir1 = *dir1_->_underlying;

        const double step1 = info[2].ToNumber().DoubleValue();

        const int num1 = info[3].ToNumber().Int64Value();

        if (info[4].IsNull() || info[4].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'dir2'").ThrowAsJavaScriptException();
            return;
        }
        const class Vector3D *dir2_ = Vector3D::Unwrap(info[4].ToObject());

        const MbVector3D &dir2 = *dir2_->_underlying;

        const double step2 = info[5].ToNumber().DoubleValue();

        const int num2 = info[6].ToNumber().Int64Value();

        MbCartPoint3D *center = NULL;
        if (!(info[7].IsNull() || info[7].IsUndefined()))
        {
            CartPoint3D *center_ = CartPoint3D::Unwrap(info[7].ToObject());
            center = center_->_underlying;
        }

        bool isAlongAxis = info[8].ToBoolean();

        DuplicationMeshValues *underlying =
            new DuplicationMeshValues(isPolar, dir1, step1, num1, dir2, step2, num2, center, isAlongAxis);
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

Napi::Object _DuplicationMeshValues::NewInstance(Napi::Env env, DuplicationMeshValues *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("DuplicationMeshValues");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    _DuplicationMeshValues *unwrapped = _DuplicationMeshValues::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function _DuplicationMeshValues::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("DuplicationMeshValues");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value _DuplicationMeshValues::GenerateTransformMatrices(const Napi::CallbackInfo &info)
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

Napi::Value _DuplicationMeshValues::GenerateTransformMatrices_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    _DuplicationMeshValues_GenerateTransformMatrices_AsyncWorker *asyncWorker =
        new _DuplicationMeshValues_GenerateTransformMatrices_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value _DuplicationMeshValues::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

_DuplicationMeshValues_GenerateTransformMatrices_AsyncWorker::
    _DuplicationMeshValues_GenerateTransformMatrices_AsyncWorker(DuplicationMeshValues *_underlying,
                                                                 Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void _DuplicationMeshValues_GenerateTransformMatrices_AsyncWorker::Execute()
{
    EnterParallelRegion();

    std::vector<MbMatrix3D> *matrices = new std::vector<MbMatrix3D>;

    _underlying->GenerateTransformMatrices(*matrices);

    this->matrices = matrices;

    ExitParallelRegion();
}

void _DuplicationMeshValues_GenerateTransformMatrices_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void _DuplicationMeshValues_GenerateTransformMatrices_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                                          Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
