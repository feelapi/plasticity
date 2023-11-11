// This is a generated file, modify: generate/templates/Vector3D.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/Vector3D.h"

#include "tool_mutex.h"

Napi::Object Vector3D::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(env, "Vector3D",
                                      {
                                          InstanceMethod<&Vector3D::Colinear>("Colinear"),
                                          InstanceMethod<&Vector3D::Colinear_async>("Colinear_async"),
                                          InstanceMethod<&Vector3D::Invert>("Invert"),
                                          InstanceMethod<&Vector3D::Invert_async>("Invert_async"),
                                          InstanceMethod<&Vector3D::Id>("Id"),

                                          InstanceAccessor<&Vector3D::GetValue_x, &Vector3D::SetValue_x>("x"),
                                          InstanceAccessor<&Vector3D::GetValue_y, &Vector3D::SetValue_y>("y"),
                                          InstanceAccessor<&Vector3D::GetValue_z, &Vector3D::SetValue_z>("z"),
                                      });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Vector3D", func);

    return exports;
}

Vector3D::Vector3D(const Napi::CallbackInfo &info) : Napi::ObjectWrap<Vector3D>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 3 && ((info[0].IsNumber())) && ((info[1].IsNumber())) && ((info[2].IsNumber()))

    )
    {
        double a = info[0].ToNumber().DoubleValue();

        double b = info[1].ToNumber().DoubleValue();

        double c = info[2].ToNumber().DoubleValue();

        MbVector3D *underlying = new MbVector3D(a, b, c);
        if (underlying == NULL)
        {
            Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
            return;
        }
        this->_underlying = underlying;
    }
    else if (info.Length() == 2 &&
             ((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))) &&
             ((info[1].IsObject() && info[1].ToObject().InstanceOf(CartPoint3D::GetConstructor(env))))

    )
    {
        if (info[0].IsNull() || info[0].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'p1'").ThrowAsJavaScriptException();
            return;
        }
        const class CartPoint3D *p1_ = CartPoint3D::Unwrap(info[0].ToObject());

        const MbCartPoint3D &p1 = *p1_->_underlying;

        if (info[1].IsNull() || info[1].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'p2'").ThrowAsJavaScriptException();
            return;
        }
        const class CartPoint3D *p2_ = CartPoint3D::Unwrap(info[1].ToObject());

        const MbCartPoint3D &p2 = *p2_->_underlying;

        MbVector3D *underlying = new MbVector3D(p1, p2);
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

Napi::Object Vector3D::NewInstance(Napi::Env env, MbVector3D *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Vector3D");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Vector3D *unwrapped = Vector3D::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Vector3D::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Vector3D");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value Vector3D::Colinear(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Vector3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Vector3D other is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'other'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Vector3D *other_ = Vector3D::Unwrap(info[0].ToObject());

    const MbVector3D &other = *other_->_underlying;

    double eps = info[1].ToNumber().DoubleValue();

    bool _result = _underlying->Colinear(other, info.Length() == 1 || info[1].IsNull() ? Math::angleRegion : eps

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value Vector3D::Colinear_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Vector3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Vector3D other is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'other'"));
        return deferred.Promise();
    }
    const class Vector3D *other_ = Vector3D::Unwrap(info[0].ToObject());

    const MbVector3D &other = *other_->_underlying;

    double eps = info[1].ToNumber().DoubleValue();

    Vector3D_Colinear_AsyncWorker *asyncWorker = new Vector3D_Colinear_AsyncWorker(_underlying, deferred,

                                                                                   other,

                                                                                   eps);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Vector3D::Invert(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbVector3D &_result = _underlying->Invert(

    );

    Napi::Value _to;

    _to = Vector3D::NewInstance(env, new MbVector3D(_result));

    return _to;
}

Napi::Value Vector3D::Invert_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Vector3D_Invert_AsyncWorker *asyncWorker = new Vector3D_Invert_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value Vector3D::GetValue_x(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    double x = _underlying->x;
    _to = Napi::Number::New(env, x);

    return _to;
}

void Vector3D::SetValue_x(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    double x = info[0].ToNumber().DoubleValue();

    _underlying->x = x;
}
Napi::Value Vector3D::GetValue_y(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    double y = _underlying->y;
    _to = Napi::Number::New(env, y);

    return _to;
}

void Vector3D::SetValue_y(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    double y = info[0].ToNumber().DoubleValue();

    _underlying->y = y;
}
Napi::Value Vector3D::GetValue_z(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    double z = _underlying->z;
    _to = Napi::Number::New(env, z);

    return _to;
}

void Vector3D::SetValue_z(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    double z = info[0].ToNumber().DoubleValue();

    _underlying->z = z;
}

Napi::Value Vector3D::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

Vector3D_Colinear_AsyncWorker::Vector3D_Colinear_AsyncWorker(MbVector3D *_underlying, Napi::Promise::Deferred const &d,
                                                             const MbVector3D &other, double eps)
    : _underlying(_underlying), PromiseWorker(d), other(other), eps(eps){};

void Vector3D_Colinear_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->Colinear(other, eps);

    this->_result = _result;

    ExitParallelRegion();
}

void Vector3D_Colinear_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void Vector3D_Colinear_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Vector3D_Invert_AsyncWorker::Vector3D_Invert_AsyncWorker(MbVector3D *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Vector3D_Invert_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector3D &_result = _underlying->Invert();

    this->_result = new (MbVector3D)(_result);

    ExitParallelRegion();
}

void Vector3D_Invert_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbVector3D *_result = this->_result;
    _to = Vector3D::NewInstance(env, (MbVector3D *)&(_result));

    deferred.Resolve(_to);
}

void Vector3D_Invert_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
