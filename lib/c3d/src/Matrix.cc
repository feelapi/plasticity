// This is a generated file, modify: generate/templates/Matrix.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/Matrix.h"

#include "tool_mutex.h"

Napi::Object Matrix::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(env, "Matrix",
                                      {
                                          InstanceMethod<&Matrix::Scale>("Scale"),
                                          InstanceMethod<&Matrix::Scale_async>("Scale_async"),
                                          InstanceMethod<&Matrix::ScaleX>("ScaleX"),
                                          InstanceMethod<&Matrix::ScaleX_async>("ScaleX_async"),
                                          InstanceMethod<&Matrix::ScaleY>("ScaleY"),
                                          InstanceMethod<&Matrix::ScaleY_async>("ScaleY_async"),
                                          InstanceMethod<&Matrix::Id>("Id"),

                                      });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Matrix", func);

    return exports;
}

Matrix::Matrix(const Napi::CallbackInfo &info) : Napi::ObjectWrap<Matrix>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 0

    )
    {

        MbMatrix *underlying = new MbMatrix();
        if (underlying == NULL)
        {
            Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
            return;
        }
        this->_underlying = underlying;
    }
    else if (info.Length() == 1 &&
             ((info[0].IsObject() && info[0].ToObject().InstanceOf(Placement::GetConstructor(env))))

    )
    {
        if (info[0].IsNull() || info[0].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'place'").ThrowAsJavaScriptException();
            return;
        }
        const class Placement *place_ = Placement::Unwrap(info[0].ToObject());

        const MbPlacement &place = *place_->_underlying;

        MbMatrix *underlying = new MbMatrix(place);
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

Napi::Object Matrix::NewInstance(Napi::Env env, MbMatrix *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Matrix");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Matrix *unwrapped = Matrix::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Matrix::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Matrix");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value Matrix::Scale(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number s is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    double s = info[0].ToNumber().DoubleValue();

    _underlying->Scale(s

    );

    return env.Undefined();
}

Napi::Value Matrix::Scale_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number s is required."));
        return deferred.Promise();
    }

    double s = info[0].ToNumber().DoubleValue();

    Matrix_Scale_AsyncWorker *asyncWorker = new Matrix_Scale_AsyncWorker(_underlying, deferred,

                                                                         s);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Matrix::ScaleX(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number s is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    double s = info[0].ToNumber().DoubleValue();

    _underlying->ScaleX(s

    );

    return env.Undefined();
}

Napi::Value Matrix::ScaleX_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number s is required."));
        return deferred.Promise();
    }

    double s = info[0].ToNumber().DoubleValue();

    Matrix_ScaleX_AsyncWorker *asyncWorker = new Matrix_ScaleX_AsyncWorker(_underlying, deferred,

                                                                           s);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Matrix::ScaleY(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number s is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    double s = info[0].ToNumber().DoubleValue();

    _underlying->ScaleY(s

    );

    return env.Undefined();
}

Napi::Value Matrix::ScaleY_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number s is required."));
        return deferred.Promise();
    }

    double s = info[0].ToNumber().DoubleValue();

    Matrix_ScaleY_AsyncWorker *asyncWorker = new Matrix_ScaleY_AsyncWorker(_underlying, deferred,

                                                                           s);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value Matrix::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

Matrix_Scale_AsyncWorker::Matrix_Scale_AsyncWorker(MbMatrix *_underlying, Napi::Promise::Deferred const &d, double s)
    : _underlying(_underlying), PromiseWorker(d), s(s){};

void Matrix_Scale_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Scale(s);

    ExitParallelRegion();
}

void Matrix_Scale_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Matrix_Scale_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Matrix_ScaleX_AsyncWorker::Matrix_ScaleX_AsyncWorker(MbMatrix *_underlying, Napi::Promise::Deferred const &d, double s)
    : _underlying(_underlying), PromiseWorker(d), s(s){};

void Matrix_ScaleX_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->ScaleX(s);

    ExitParallelRegion();
}

void Matrix_ScaleX_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Matrix_ScaleX_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Matrix_ScaleY_AsyncWorker::Matrix_ScaleY_AsyncWorker(MbMatrix *_underlying, Napi::Promise::Deferred const &d, double s)
    : _underlying(_underlying), PromiseWorker(d), s(s){};

void Matrix_ScaleY_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->ScaleY(s);

    ExitParallelRegion();
}

void Matrix_ScaleY_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Matrix_ScaleY_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
