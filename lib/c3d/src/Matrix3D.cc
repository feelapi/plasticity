// This is a generated file, modify: generate/templates/Matrix3D.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/Matrix3D.h"

#include "tool_mutex.h"

Napi::Object Matrix3D::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(env, "Matrix3D",
                                      {
                                          InstanceMethod<&Matrix3D::Scale>("Scale"),
                                          InstanceMethod<&Matrix3D::Scale_async>("Scale_async"),
                                          InstanceMethod<&Matrix3D::Rotate>("Rotate"),
                                          InstanceMethod<&Matrix3D::Rotate_async>("Rotate_async"),
                                          InstanceMethod<&Matrix3D::Symmetry>("Symmetry"),
                                          InstanceMethod<&Matrix3D::Symmetry_async>("Symmetry_async"),
                                          InstanceMethod<&Matrix3D::GetRow>("GetRow"),
                                          InstanceMethod<&Matrix3D::GetRow_async>("GetRow_async"),
                                          InstanceMethod<&Matrix3D::GetColumn>("GetColumn"),
                                          InstanceMethod<&Matrix3D::GetColumn_async>("GetColumn_async"),
                                          InstanceMethod<&Matrix3D::SetRow>("SetRow"),
                                          InstanceMethod<&Matrix3D::SetRow_async>("SetRow_async"),
                                          InstanceMethod<&Matrix3D::SetColumn>("SetColumn"),
                                          InstanceMethod<&Matrix3D::SetColumn_async>("SetColumn_async"),
                                          InstanceMethod<&Matrix3D::GetAxisX>("GetAxisX"),
                                          InstanceMethod<&Matrix3D::GetAxisX_async>("GetAxisX_async"),
                                          InstanceMethod<&Matrix3D::GetAxisY>("GetAxisY"),
                                          InstanceMethod<&Matrix3D::GetAxisY_async>("GetAxisY_async"),
                                          InstanceMethod<&Matrix3D::GetAxisZ>("GetAxisZ"),
                                          InstanceMethod<&Matrix3D::GetAxisZ_async>("GetAxisZ_async"),
                                          InstanceMethod<&Matrix3D::GetOrigin>("GetOrigin"),
                                          InstanceMethod<&Matrix3D::GetOrigin_async>("GetOrigin_async"),
                                          InstanceMethod<&Matrix3D::El>("El"),
                                          InstanceMethod<&Matrix3D::El_async>("El_async"),
                                          InstanceMethod<&Matrix3D::GetOffset>("GetOffset"),
                                          InstanceMethod<&Matrix3D::GetOffset_async>("GetOffset_async"),
                                          InstanceMethod<&Matrix3D::Div>("Div"),
                                          InstanceMethod<&Matrix3D::Div_async>("Div_async"),
                                          InstanceMethod<&Matrix3D::Adj>("Adj"),
                                          InstanceMethod<&Matrix3D::Adj_async>("Adj_async"),
                                          InstanceMethod<&Matrix3D::SetOffset>("SetOffset"),
                                          InstanceMethod<&Matrix3D::SetOffset_async>("SetOffset_async"),
                                          InstanceMethod<&Matrix3D::Id>("Id"),

                                      });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Matrix3D", func);

    return exports;
}

Matrix3D::Matrix3D(const Napi::CallbackInfo &info) : Napi::ObjectWrap<Matrix3D>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 0

    )
    {

        MbMatrix3D *underlying = new MbMatrix3D();
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

Napi::Object Matrix3D::NewInstance(Napi::Env env, MbMatrix3D *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Matrix3D");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Matrix3D *unwrapped = Matrix3D::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Matrix3D::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Matrix3D");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value Matrix3D::Scale(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number sx is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        Napi::Error::New(env, "number sy is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 || !(info[2].IsNumber()))
    {
        Napi::Error::New(env, "number sz is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    double sx = info[0].ToNumber().DoubleValue();

    double sy = info[1].ToNumber().DoubleValue();

    double sz = info[2].ToNumber().DoubleValue();

    _underlying->Scale(sx, sy, sz

    );

    return env.Undefined();
}

Napi::Value Matrix3D::Scale_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number sx is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number sy is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 || !(info[2].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number sz is required."));
        return deferred.Promise();
    }

    double sx = info[0].ToNumber().DoubleValue();

    double sy = info[1].ToNumber().DoubleValue();

    double sz = info[2].ToNumber().DoubleValue();

    Matrix3D_Scale_AsyncWorker *asyncWorker = new Matrix3D_Scale_AsyncWorker(_underlying, deferred,

                                                                             sx,

                                                                             sy,

                                                                             sz);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Matrix3D::Rotate(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Axis3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Axis3D axis is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        Napi::Error::New(env, "number angle is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'axis'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Axis3D *axis_ = Axis3D::Unwrap(info[0].ToObject());

    const MbAxis3D &axis = *axis_->_underlying;

    double angle = info[1].ToNumber().DoubleValue();

    MbMatrix3D &_result = _underlying->Rotate(axis, angle

    );

    Napi::Value _to;

    _to = Matrix3D::NewInstance(env, new MbMatrix3D(_result));

    return _to;
}

Napi::Value Matrix3D::Rotate_async(const Napi::CallbackInfo &info)
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
        deferred.Reject(Napi::String::New(env, "number angle is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'axis'"));
        return deferred.Promise();
    }
    const class Axis3D *axis_ = Axis3D::Unwrap(info[0].ToObject());

    const MbAxis3D &axis = *axis_->_underlying;

    double angle = info[1].ToNumber().DoubleValue();

    Matrix3D_Rotate_AsyncWorker *asyncWorker = new Matrix3D_Rotate_AsyncWorker(_underlying, deferred,

                                                                               axis,

                                                                               angle);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Matrix3D::Symmetry(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 ||
        !((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "CartPoint3D origin is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !((info[1].IsObject() && info[1].ToObject().InstanceOf(Vector3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Vector3D normal is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'origin'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class CartPoint3D *origin_ = CartPoint3D::Unwrap(info[0].ToObject());

    const MbCartPoint3D &origin = *origin_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'normal'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Vector3D *normal_ = Vector3D::Unwrap(info[1].ToObject());

    MbVector3D &normal = *normal_->_underlying;

    _underlying->Symmetry(origin, normal

    );

    return env.Undefined();
}

Napi::Value Matrix3D::Symmetry_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 ||
        !((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "CartPoint3D origin is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !((info[1].IsObject() && info[1].ToObject().InstanceOf(Vector3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Vector3D normal is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'origin'"));
        return deferred.Promise();
    }
    const class CartPoint3D *origin_ = CartPoint3D::Unwrap(info[0].ToObject());

    const MbCartPoint3D &origin = *origin_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'normal'"));
        return deferred.Promise();
    }
    const class Vector3D *normal_ = Vector3D::Unwrap(info[1].ToObject());

    MbVector3D &normal = *normal_->_underlying;

    Matrix3D_Symmetry_AsyncWorker *asyncWorker = new Matrix3D_Symmetry_AsyncWorker(_underlying, deferred,

                                                                                   origin,

                                                                                   normal);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Matrix3D::GetRow(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number i is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    size_t i = info[0].ToNumber().Int64Value();

    MbVector3D _result = _underlying->GetRow(i

    );

    Napi::Value _to;

    _to = Vector3D::NewInstance(env, new MbVector3D(_result));

    return _to;
}

Napi::Value Matrix3D::GetRow_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number i is required."));
        return deferred.Promise();
    }

    size_t i = info[0].ToNumber().Int64Value();

    Matrix3D_GetRow_AsyncWorker *asyncWorker = new Matrix3D_GetRow_AsyncWorker(_underlying, deferred,

                                                                               i);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Matrix3D::GetColumn(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number i is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    size_t i = info[0].ToNumber().Int64Value();

    MbVector3D _result = _underlying->GetColumn(i

    );

    Napi::Value _to;

    _to = Vector3D::NewInstance(env, new MbVector3D(_result));

    return _to;
}

Napi::Value Matrix3D::GetColumn_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number i is required."));
        return deferred.Promise();
    }

    size_t i = info[0].ToNumber().Int64Value();

    Matrix3D_GetColumn_AsyncWorker *asyncWorker = new Matrix3D_GetColumn_AsyncWorker(_underlying, deferred,

                                                                                     i);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Matrix3D::SetRow(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number i is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 ||
        !((info[1].IsObject() && info[1].ToObject().InstanceOf(Homogeneous3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Homogeneous3D h is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    size_t i = info[0].ToNumber().Int64Value();

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'h'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Homogeneous3D *h_ = Homogeneous3D::Unwrap(info[1].ToObject());

    MbHomogeneous3D h = *h_->_underlying;

    _underlying->SetRow(i, h

    );

    return env.Undefined();
}

Napi::Value Matrix3D::SetRow_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number i is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 ||
        !((info[1].IsObject() && info[1].ToObject().InstanceOf(Homogeneous3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Homogeneous3D h is required."));
        return deferred.Promise();
    }

    size_t i = info[0].ToNumber().Int64Value();

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'h'"));
        return deferred.Promise();
    }
    const class Homogeneous3D *h_ = Homogeneous3D::Unwrap(info[1].ToObject());

    MbHomogeneous3D h = *h_->_underlying;

    Matrix3D_SetRow_AsyncWorker *asyncWorker = new Matrix3D_SetRow_AsyncWorker(_underlying, deferred,

                                                                               i,

                                                                               h);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Matrix3D::SetColumn(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number i is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 ||
        !((info[1].IsObject() && info[1].ToObject().InstanceOf(Homogeneous3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Homogeneous3D h is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    size_t i = info[0].ToNumber().Int64Value();

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'h'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Homogeneous3D *h_ = Homogeneous3D::Unwrap(info[1].ToObject());

    MbHomogeneous3D h = *h_->_underlying;

    _underlying->SetColumn(i, h

    );

    return env.Undefined();
}

Napi::Value Matrix3D::SetColumn_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number i is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 ||
        !((info[1].IsObject() && info[1].ToObject().InstanceOf(Homogeneous3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Homogeneous3D h is required."));
        return deferred.Promise();
    }

    size_t i = info[0].ToNumber().Int64Value();

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'h'"));
        return deferred.Promise();
    }
    const class Homogeneous3D *h_ = Homogeneous3D::Unwrap(info[1].ToObject());

    MbHomogeneous3D h = *h_->_underlying;

    Matrix3D_SetColumn_AsyncWorker *asyncWorker = new Matrix3D_SetColumn_AsyncWorker(_underlying, deferred,

                                                                                     i,

                                                                                     h);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Matrix3D::GetAxisX(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbVector3D &_result = _underlying->GetAxisX(

    );

    Napi::Value _to;

    _to = Vector3D::NewInstance(env, new MbVector3D(_result));

    return _to;
}

Napi::Value Matrix3D::GetAxisX_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Matrix3D_GetAxisX_AsyncWorker *asyncWorker = new Matrix3D_GetAxisX_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Matrix3D::GetAxisY(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbVector3D &_result = _underlying->GetAxisY(

    );

    Napi::Value _to;

    _to = Vector3D::NewInstance(env, new MbVector3D(_result));

    return _to;
}

Napi::Value Matrix3D::GetAxisY_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Matrix3D_GetAxisY_AsyncWorker *asyncWorker = new Matrix3D_GetAxisY_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Matrix3D::GetAxisZ(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbVector3D &_result = _underlying->GetAxisZ(

    );

    Napi::Value _to;

    _to = Vector3D::NewInstance(env, new MbVector3D(_result));

    return _to;
}

Napi::Value Matrix3D::GetAxisZ_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Matrix3D_GetAxisZ_AsyncWorker *asyncWorker = new Matrix3D_GetAxisZ_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Matrix3D::GetOrigin(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbVector3D &_result = _underlying->GetOrigin(

    );

    Napi::Value _to;

    _to = Vector3D::NewInstance(env, new MbVector3D(_result));

    return _to;
}

Napi::Value Matrix3D::GetOrigin_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Matrix3D_GetOrigin_AsyncWorker *asyncWorker = new Matrix3D_GetOrigin_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Matrix3D::El(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number i is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        Napi::Error::New(env, "number j is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    size_t i = info[0].ToNumber().Int64Value();

    size_t j = info[1].ToNumber().Int64Value();

    double _result = _underlying->El(i, j

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Matrix3D::El_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number i is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number j is required."));
        return deferred.Promise();
    }

    size_t i = info[0].ToNumber().Int64Value();

    size_t j = info[1].ToNumber().Int64Value();

    Matrix3D_El_AsyncWorker *asyncWorker = new Matrix3D_El_AsyncWorker(_underlying, deferred,

                                                                       i,

                                                                       j);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Matrix3D::GetOffset(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbCartPoint3D *p = new MbCartPoint3D;

    _underlying->GetOffset(*p

    );

    Napi::Value _to;

    if (p != NULL)
    {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)p);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value Matrix3D::GetOffset_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Matrix3D_GetOffset_AsyncWorker *asyncWorker = new Matrix3D_GetOffset_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Matrix3D::Div(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Matrix3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Matrix3D from is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'from'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Matrix3D *from_ = Matrix3D::Unwrap(info[0].ToObject());

    MbMatrix3D &from = *from_->_underlying;

    MbMatrix3D &_result = _underlying->Div(from

    );

    Napi::Value _to;

    _to = Matrix3D::NewInstance(env, new MbMatrix3D(_result));

    return _to;
}

Napi::Value Matrix3D::Div_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Matrix3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Matrix3D from is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'from'"));
        return deferred.Promise();
    }
    const class Matrix3D *from_ = Matrix3D::Unwrap(info[0].ToObject());

    MbMatrix3D &from = *from_->_underlying;

    Matrix3D_Div_AsyncWorker *asyncWorker = new Matrix3D_Div_AsyncWorker(_underlying, deferred,

                                                                         from);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Matrix3D::Adj(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->Adj(

    );

    return env.Undefined();
}

Napi::Value Matrix3D::Adj_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Matrix3D_Adj_AsyncWorker *asyncWorker = new Matrix3D_Adj_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Matrix3D::SetOffset(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 ||
        !((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "CartPoint3D p is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'p'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class CartPoint3D *p_ = CartPoint3D::Unwrap(info[0].ToObject());

    const MbCartPoint3D &p = *p_->_underlying;

    _underlying->SetOffset(p

    );

    return env.Undefined();
}

Napi::Value Matrix3D::SetOffset_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 ||
        !((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "CartPoint3D p is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'p'"));
        return deferred.Promise();
    }
    const class CartPoint3D *p_ = CartPoint3D::Unwrap(info[0].ToObject());

    const MbCartPoint3D &p = *p_->_underlying;

    Matrix3D_SetOffset_AsyncWorker *asyncWorker = new Matrix3D_SetOffset_AsyncWorker(_underlying, deferred,

                                                                                     p);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value Matrix3D::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

Matrix3D_Scale_AsyncWorker::Matrix3D_Scale_AsyncWorker(MbMatrix3D *_underlying, Napi::Promise::Deferred const &d,
                                                       double sx, double sy, double sz)
    : _underlying(_underlying), PromiseWorker(d), sx(sx), sy(sy), sz(sz){};

void Matrix3D_Scale_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Scale(sx, sy, sz);

    ExitParallelRegion();
}

void Matrix3D_Scale_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Matrix3D_Scale_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Matrix3D_Rotate_AsyncWorker::Matrix3D_Rotate_AsyncWorker(MbMatrix3D *_underlying, Napi::Promise::Deferred const &d,
                                                         const MbAxis3D &axis, double angle)
    : _underlying(_underlying), PromiseWorker(d), axis(axis), angle(angle){};

void Matrix3D_Rotate_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbMatrix3D &_result = _underlying->Rotate(axis, angle);

    this->_result = new (MbMatrix3D)(_result);

    ExitParallelRegion();
}

void Matrix3D_Rotate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbMatrix3D *_result = this->_result;
    _to = Matrix3D::NewInstance(env, (MbMatrix3D *)&(_result));

    deferred.Resolve(_to);
}

void Matrix3D_Rotate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Matrix3D_Symmetry_AsyncWorker::Matrix3D_Symmetry_AsyncWorker(MbMatrix3D *_underlying, Napi::Promise::Deferred const &d,
                                                             const MbCartPoint3D &origin, MbVector3D &normal)
    : _underlying(_underlying), PromiseWorker(d), origin(origin), normal(normal){};

void Matrix3D_Symmetry_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Symmetry(origin, normal);

    ExitParallelRegion();
}

void Matrix3D_Symmetry_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Matrix3D_Symmetry_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Matrix3D_GetRow_AsyncWorker::Matrix3D_GetRow_AsyncWorker(MbMatrix3D *_underlying, Napi::Promise::Deferred const &d,
                                                         size_t i)
    : _underlying(_underlying), PromiseWorker(d), i(i){};

void Matrix3D_GetRow_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector3D _result = _underlying->GetRow(i);

    this->_result = new (MbVector3D)(_result);

    ExitParallelRegion();
}

void Matrix3D_GetRow_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbVector3D *_result = this->_result;
    _to = Vector3D::NewInstance(env, (MbVector3D *)&(_result));

    deferred.Resolve(_to);
}

void Matrix3D_GetRow_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Matrix3D_GetColumn_AsyncWorker::Matrix3D_GetColumn_AsyncWorker(MbMatrix3D *_underlying,
                                                               Napi::Promise::Deferred const &d, size_t i)
    : _underlying(_underlying), PromiseWorker(d), i(i){};

void Matrix3D_GetColumn_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector3D _result = _underlying->GetColumn(i);

    this->_result = new (MbVector3D)(_result);

    ExitParallelRegion();
}

void Matrix3D_GetColumn_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbVector3D *_result = this->_result;
    _to = Vector3D::NewInstance(env, (MbVector3D *)&(_result));

    deferred.Resolve(_to);
}

void Matrix3D_GetColumn_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Matrix3D_SetRow_AsyncWorker::Matrix3D_SetRow_AsyncWorker(MbMatrix3D *_underlying, Napi::Promise::Deferred const &d,
                                                         size_t i, MbHomogeneous3D h)
    : _underlying(_underlying), PromiseWorker(d), i(i), h(h){};

void Matrix3D_SetRow_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetRow(i, h);

    ExitParallelRegion();
}

void Matrix3D_SetRow_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Matrix3D_SetRow_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Matrix3D_SetColumn_AsyncWorker::Matrix3D_SetColumn_AsyncWorker(MbMatrix3D *_underlying,
                                                               Napi::Promise::Deferred const &d, size_t i,
                                                               MbHomogeneous3D h)
    : _underlying(_underlying), PromiseWorker(d), i(i), h(h){};

void Matrix3D_SetColumn_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetColumn(i, h);

    ExitParallelRegion();
}

void Matrix3D_SetColumn_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Matrix3D_SetColumn_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Matrix3D_GetAxisX_AsyncWorker::Matrix3D_GetAxisX_AsyncWorker(MbMatrix3D *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Matrix3D_GetAxisX_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbVector3D &_result = _underlying->GetAxisX();

    this->_result = new (MbVector3D)(_result);

    ExitParallelRegion();
}

void Matrix3D_GetAxisX_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbVector3D *_result = this->_result;
    _to = Vector3D::NewInstance(env, (MbVector3D *)&(_result));

    deferred.Resolve(_to);
}

void Matrix3D_GetAxisX_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Matrix3D_GetAxisY_AsyncWorker::Matrix3D_GetAxisY_AsyncWorker(MbMatrix3D *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Matrix3D_GetAxisY_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbVector3D &_result = _underlying->GetAxisY();

    this->_result = new (MbVector3D)(_result);

    ExitParallelRegion();
}

void Matrix3D_GetAxisY_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbVector3D *_result = this->_result;
    _to = Vector3D::NewInstance(env, (MbVector3D *)&(_result));

    deferred.Resolve(_to);
}

void Matrix3D_GetAxisY_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Matrix3D_GetAxisZ_AsyncWorker::Matrix3D_GetAxisZ_AsyncWorker(MbMatrix3D *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Matrix3D_GetAxisZ_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbVector3D &_result = _underlying->GetAxisZ();

    this->_result = new (MbVector3D)(_result);

    ExitParallelRegion();
}

void Matrix3D_GetAxisZ_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbVector3D *_result = this->_result;
    _to = Vector3D::NewInstance(env, (MbVector3D *)&(_result));

    deferred.Resolve(_to);
}

void Matrix3D_GetAxisZ_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Matrix3D_GetOrigin_AsyncWorker::Matrix3D_GetOrigin_AsyncWorker(MbMatrix3D *_underlying,
                                                               Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Matrix3D_GetOrigin_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbVector3D &_result = _underlying->GetOrigin();

    this->_result = new (MbVector3D)(_result);

    ExitParallelRegion();
}

void Matrix3D_GetOrigin_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbVector3D *_result = this->_result;
    _to = Vector3D::NewInstance(env, (MbVector3D *)&(_result));

    deferred.Resolve(_to);
}

void Matrix3D_GetOrigin_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Matrix3D_El_AsyncWorker::Matrix3D_El_AsyncWorker(MbMatrix3D *_underlying, Napi::Promise::Deferred const &d, size_t i,
                                                 size_t j)
    : _underlying(_underlying), PromiseWorker(d), i(i), j(j){};

void Matrix3D_El_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->El(i, j);

    this->_result = _result;

    ExitParallelRegion();
}

void Matrix3D_El_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Matrix3D_El_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Matrix3D_GetOffset_AsyncWorker::Matrix3D_GetOffset_AsyncWorker(MbMatrix3D *_underlying,
                                                               Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Matrix3D_GetOffset_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint3D *p = new MbCartPoint3D;

    _underlying->GetOffset(*p);

    this->p = p;

    ExitParallelRegion();
}

void Matrix3D_GetOffset_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbCartPoint3D *p = this->p;
    if (p != NULL)
    {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)p);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void Matrix3D_GetOffset_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Matrix3D_Div_AsyncWorker::Matrix3D_Div_AsyncWorker(MbMatrix3D *_underlying, Napi::Promise::Deferred const &d,
                                                   MbMatrix3D &from)
    : _underlying(_underlying), PromiseWorker(d), from(from){};

void Matrix3D_Div_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbMatrix3D &_result = _underlying->Div(from);

    this->_result = new (MbMatrix3D)(_result);

    ExitParallelRegion();
}

void Matrix3D_Div_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbMatrix3D *_result = this->_result;
    _to = Matrix3D::NewInstance(env, (MbMatrix3D *)&(_result));

    deferred.Resolve(_to);
}

void Matrix3D_Div_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Matrix3D_Adj_AsyncWorker::Matrix3D_Adj_AsyncWorker(MbMatrix3D *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Matrix3D_Adj_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Adj();

    ExitParallelRegion();
}

void Matrix3D_Adj_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Matrix3D_Adj_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Matrix3D_SetOffset_AsyncWorker::Matrix3D_SetOffset_AsyncWorker(MbMatrix3D *_underlying,
                                                               Napi::Promise::Deferred const &d, const MbCartPoint3D &p)
    : _underlying(_underlying), PromiseWorker(d), p(p){};

void Matrix3D_SetOffset_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetOffset(p);

    ExitParallelRegion();
}

void Matrix3D_SetOffset_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Matrix3D_SetOffset_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
