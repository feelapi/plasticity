// This is a generated file, modify: generate/templates/_TransformValues.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/_TransformValues.h"

#include "tool_mutex.h"

Napi::Object _TransformValues::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(env, "TransformValues",
                                      {
                                          InstanceMethod<&_TransformValues::Move>("Move"),
                                          InstanceMethod<&_TransformValues::Move_async>("Move_async"),
                                          InstanceMethod<&_TransformValues::Rotate>("Rotate"),
                                          InstanceMethod<&_TransformValues::Rotate_async>("Rotate_async"),
                                          InstanceMethod<&_TransformValues::GetMatrix>("GetMatrix"),
                                          InstanceMethod<&_TransformValues::GetMatrix_async>("GetMatrix_async"),
                                          InstanceMethod<&_TransformValues::SetFixed>("SetFixed"),
                                          InstanceMethod<&_TransformValues::SetFixed_async>("SetFixed_async"),
                                          InstanceMethod<&_TransformValues::SetFixedPoint>("SetFixedPoint"),
                                          InstanceMethod<&_TransformValues::SetFixedPoint_async>("SetFixedPoint_async"),
                                          InstanceMethod<&_TransformValues::Id>("Id"),

                                      });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("TransformValues", func);

    return exports;
}

_TransformValues::_TransformValues(const Napi::CallbackInfo &info) : Napi::ObjectWrap<_TransformValues>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 0

    )
    {

        TransformValues *underlying = new TransformValues();
        if (underlying == NULL)
        {
            Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
            return;
        }
        this->_underlying = underlying;
    }
    else if (info.Length() == 1 &&
             ((info[0].IsObject() && info[0].ToObject().InstanceOf(Matrix3D::GetConstructor(env))))

    )
    {
        if (info[0].IsNull() || info[0].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'm'").ThrowAsJavaScriptException();
            return;
        }
        const class Matrix3D *m_ = Matrix3D::Unwrap(info[0].ToObject());

        const MbMatrix3D &m = *m_->_underlying;

        TransformValues *underlying = new TransformValues(m);
        if (underlying == NULL)
        {
            Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
            return;
        }
        this->_underlying = underlying;
    }
    else if (info.Length() == 4 &&
             ((info[0].IsObject() && info[0].ToObject().InstanceOf(Matrix3D::GetConstructor(env)))) &&
             ((info[1].IsObject() && info[1].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))) &&
             ((info[2].IsBoolean()) || (info[2].IsNull() || info[2].IsUndefined())) &&
             ((info[3].IsBoolean()) || (info[3].IsNull() || info[3].IsUndefined()))

    )
    {
        if (info[0].IsNull() || info[0].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'm'").ThrowAsJavaScriptException();
            return;
        }
        const class Matrix3D *m_ = Matrix3D::Unwrap(info[0].ToObject());

        const MbMatrix3D &m = *m_->_underlying;

        if (info[1].IsNull() || info[1].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'f'").ThrowAsJavaScriptException();
            return;
        }
        const class CartPoint3D *f_ = CartPoint3D::Unwrap(info[1].ToObject());

        const MbCartPoint3D &f = *f_->_underlying;

        bool fix = info[2].ToBoolean();

        bool iso = info[3].ToBoolean();

        TransformValues *underlying = new TransformValues(m, f, fix, iso);
        if (underlying == NULL)
        {
            Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
            return;
        }
        this->_underlying = underlying;
    }
    else if (info.Length() == 4 && ((info[0].IsNumber())) && ((info[1].IsNumber())) && ((info[2].IsNumber())) &&
             ((info[3].IsObject() && info[3].ToObject().InstanceOf(CartPoint3D::GetConstructor(env))))

    )
    {
        double sX = info[0].ToNumber().DoubleValue();

        double sY = info[1].ToNumber().DoubleValue();

        double sZ = info[2].ToNumber().DoubleValue();

        if (info[3].IsNull() || info[3].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'fP'").ThrowAsJavaScriptException();
            return;
        }
        const class CartPoint3D *fP_ = CartPoint3D::Unwrap(info[3].ToObject());

        const MbCartPoint3D &fP = *fP_->_underlying;

        TransformValues *underlying = new TransformValues(sX, sY, sZ, fP);
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

Napi::Object _TransformValues::NewInstance(Napi::Env env, TransformValues *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("TransformValues");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    _TransformValues *unwrapped = _TransformValues::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function _TransformValues::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("TransformValues");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value _TransformValues::Move(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Vector3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Vector3D to is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'to'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Vector3D *to_ = Vector3D::Unwrap(info[0].ToObject());

    const MbVector3D &to = *to_->_underlying;

    _underlying->Move(to

    );

    return env.Undefined();
}

Napi::Value _TransformValues::Move_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Vector3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Vector3D to is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'to'"));
        return deferred.Promise();
    }
    const class Vector3D *to_ = Vector3D::Unwrap(info[0].ToObject());

    const MbVector3D &to = *to_->_underlying;

    _TransformValues_Move_AsyncWorker *asyncWorker = new _TransformValues_Move_AsyncWorker(_underlying, deferred,

                                                                                           to);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value _TransformValues::Rotate(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Axis3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Axis3D axis is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        Napi::Error::New(env, "number ang is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'axis'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Axis3D *axis_ = Axis3D::Unwrap(info[0].ToObject());

    const MbAxis3D &axis = *axis_->_underlying;

    double ang = info[1].ToNumber().DoubleValue();

    _underlying->Rotate(axis, ang

    );

    return env.Undefined();
}

Napi::Value _TransformValues::Rotate_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Axis3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Axis3D axis is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number ang is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'axis'"));
        return deferred.Promise();
    }
    const class Axis3D *axis_ = Axis3D::Unwrap(info[0].ToObject());

    const MbAxis3D &axis = *axis_->_underlying;

    double ang = info[1].ToNumber().DoubleValue();

    _TransformValues_Rotate_AsyncWorker *asyncWorker = new _TransformValues_Rotate_AsyncWorker(_underlying, deferred,

                                                                                               axis,

                                                                                               ang);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value _TransformValues::GetMatrix(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbMatrix3D &_result = _underlying->GetMatrix(

    );

    Napi::Value _to;

    _to = Matrix3D::NewInstance(env, new MbMatrix3D(_result));

    return _to;
}

Napi::Value _TransformValues::GetMatrix_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    _TransformValues_GetMatrix_AsyncWorker *asyncWorker =
        new _TransformValues_GetMatrix_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value _TransformValues::SetFixed(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsBoolean()))
    {
        Napi::Error::New(env, "boolean b is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    bool b = info[0].ToBoolean();

    _underlying->SetFixed(b

    );

    return env.Undefined();
}

Napi::Value _TransformValues::SetFixed_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean b is required."));
        return deferred.Promise();
    }

    bool b = info[0].ToBoolean();

    _TransformValues_SetFixed_AsyncWorker *asyncWorker =
        new _TransformValues_SetFixed_AsyncWorker(_underlying, deferred,

                                                  b);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value _TransformValues::SetFixedPoint(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbCartPoint3D &_result = _underlying->SetFixedPoint(

    );

    Napi::Value _to;

    _to = CartPoint3D::NewInstance(env, new MbCartPoint3D(_result));

    return _to;
}

Napi::Value _TransformValues::SetFixedPoint_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    _TransformValues_SetFixedPoint_AsyncWorker *asyncWorker =
        new _TransformValues_SetFixedPoint_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value _TransformValues::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

_TransformValues_Move_AsyncWorker::_TransformValues_Move_AsyncWorker(TransformValues *_underlying,
                                                                     Napi::Promise::Deferred const &d,
                                                                     const MbVector3D &to)
    : _underlying(_underlying), PromiseWorker(d), to(to){};

void _TransformValues_Move_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Move(to);

    ExitParallelRegion();
}

void _TransformValues_Move_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void _TransformValues_Move_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
_TransformValues_Rotate_AsyncWorker::_TransformValues_Rotate_AsyncWorker(TransformValues *_underlying,
                                                                         Napi::Promise::Deferred const &d,
                                                                         const MbAxis3D &axis, double ang)
    : _underlying(_underlying), PromiseWorker(d), axis(axis), ang(ang){};

void _TransformValues_Rotate_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Rotate(axis, ang);

    ExitParallelRegion();
}

void _TransformValues_Rotate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void _TransformValues_Rotate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
_TransformValues_GetMatrix_AsyncWorker::_TransformValues_GetMatrix_AsyncWorker(TransformValues *_underlying,
                                                                               Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void _TransformValues_GetMatrix_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbMatrix3D &_result = _underlying->GetMatrix();

    this->_result = new (MbMatrix3D)(_result);

    ExitParallelRegion();
}

void _TransformValues_GetMatrix_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbMatrix3D *_result = this->_result;
    _to = Matrix3D::NewInstance(env, (MbMatrix3D *)&(_result));

    deferred.Resolve(_to);
}

void _TransformValues_GetMatrix_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
_TransformValues_SetFixed_AsyncWorker::_TransformValues_SetFixed_AsyncWorker(TransformValues *_underlying,
                                                                             Napi::Promise::Deferred const &d, bool b)
    : _underlying(_underlying), PromiseWorker(d), b(b){};

void _TransformValues_SetFixed_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetFixed(b);

    ExitParallelRegion();
}

void _TransformValues_SetFixed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void _TransformValues_SetFixed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
_TransformValues_SetFixedPoint_AsyncWorker::_TransformValues_SetFixedPoint_AsyncWorker(TransformValues *_underlying,
                                                                                       Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void _TransformValues_SetFixedPoint_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint3D &_result = _underlying->SetFixedPoint();

    this->_result = new (MbCartPoint3D)(_result);

    ExitParallelRegion();
}

void _TransformValues_SetFixedPoint_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbCartPoint3D *_result = this->_result;
    _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)&(_result));

    deferred.Resolve(_to);
}

void _TransformValues_SetFixedPoint_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                        Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
