// This is a generated file, modify: generate/templates/Cube.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/Cube.h"

#include "tool_mutex.h"

Napi::Object Cube::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(env, "Cube",
                                      {
                                          InstanceMethod<&Cube::CalculateMatrix>("CalculateMatrix"),
                                          InstanceMethod<&Cube::CalculateMatrix_async>("CalculateMatrix_async"),
                                          InstanceMethod<&Cube::ProjectionRect>("ProjectionRect"),
                                          InstanceMethod<&Cube::ProjectionRect_async>("ProjectionRect_async"),
                                          InstanceMethod<&Cube::Intersect>("Intersect"),
                                          InstanceMethod<&Cube::Intersect_async>("Intersect_async"),
                                          InstanceMethod<&Cube::Id>("Id"),

                                          InstanceAccessor<&Cube::GetValue_pmin, &Cube::SetValue_pmin>("pmin"),
                                          InstanceAccessor<&Cube::GetValue_pmax, &Cube::SetValue_pmax>("pmax"),
                                      });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Cube", func);

    return exports;
}

Cube::Cube(const Napi::CallbackInfo &info) : Napi::ObjectWrap<Cube>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 0

    )
    {

        MbCube *underlying = new MbCube();
        if (underlying == NULL)
        {
            Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
            return;
        }
        this->_underlying = underlying;
    }
    else if (info.Length() == 3 &&
             ((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))) &&
             ((info[1].IsObject() && info[1].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))) &&
             ((info[2].IsBoolean()) || (info[2].IsNull() || info[2].IsUndefined()))

    )
    {
        if (info[0].IsNull() || info[0].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'p0'").ThrowAsJavaScriptException();
            return;
        }
        const class CartPoint3D *p0_ = CartPoint3D::Unwrap(info[0].ToObject());

        const MbCartPoint3D &p0 = *p0_->_underlying;

        if (info[1].IsNull() || info[1].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'p1'").ThrowAsJavaScriptException();
            return;
        }
        const class CartPoint3D *p1_ = CartPoint3D::Unwrap(info[1].ToObject());

        const MbCartPoint3D &p1 = *p1_->_underlying;

        bool normalize = info[2].ToBoolean();

        MbCube *underlying = new MbCube(p0, p1, normalize);
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

Napi::Object Cube::NewInstance(Napi::Env env, MbCube *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Cube");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Cube *unwrapped = Cube::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Cube::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Cube");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value Cube::CalculateMatrix(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number pIndex is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 ||
        !((info[1].IsObject() && info[1].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "CartPoint3D point is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 ||
        !((info[2].IsObject() && info[2].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "CartPoint3D fixedPoint is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 3 || !(info[3].IsBoolean()))
    {
        Napi::Error::New(env, "boolean useFixed is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 4 || !(info[4].IsBoolean()))
    {
        Napi::Error::New(env, "boolean isotropy is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbMatrix3D *matrix = new MbMatrix3D;

    size_t pIndex = info[0].ToNumber().Int64Value();

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'point'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class CartPoint3D *point_ = CartPoint3D::Unwrap(info[1].ToObject());

    const MbCartPoint3D &point = *point_->_underlying;

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'fixedPoint'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class CartPoint3D *fixedPoint_ = CartPoint3D::Unwrap(info[2].ToObject());

    const MbCartPoint3D &fixedPoint = *fixedPoint_->_underlying;

    bool useFixed = info[3].ToBoolean();

    bool isotropy = info[4].ToBoolean();

    bool _result = _underlying->CalculateMatrix(pIndex, point, fixedPoint, useFixed, isotropy, *matrix

    );

    Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    _toReturn.Set(Napi::String::New(env, "_result"), _to);
    if (matrix != NULL)
    {
        _to = Matrix3D::NewInstance(env, (MbMatrix3D *)matrix);
    }
    else
    {
        _to = env.Null();
    }

    _toReturn.Set(Napi::String::New(env, "matrix"), _to);
    return _toReturn;
}

Napi::Value Cube::CalculateMatrix_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number pIndex is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 ||
        !((info[1].IsObject() && info[1].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "CartPoint3D point is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 ||
        !((info[2].IsObject() && info[2].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "CartPoint3D fixedPoint is required."));
        return deferred.Promise();
    }
    if (info.Length() == 3 || !(info[3].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean useFixed is required."));
        return deferred.Promise();
    }
    if (info.Length() == 4 || !(info[4].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean isotropy is required."));
        return deferred.Promise();
    }

    size_t pIndex = info[0].ToNumber().Int64Value();

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'point'"));
        return deferred.Promise();
    }
    const class CartPoint3D *point_ = CartPoint3D::Unwrap(info[1].ToObject());

    const MbCartPoint3D &point = *point_->_underlying;

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'fixedPoint'"));
        return deferred.Promise();
    }
    const class CartPoint3D *fixedPoint_ = CartPoint3D::Unwrap(info[2].ToObject());

    const MbCartPoint3D &fixedPoint = *fixedPoint_->_underlying;

    bool useFixed = info[3].ToBoolean();

    bool isotropy = info[4].ToBoolean();

    Cube_CalculateMatrix_AsyncWorker *asyncWorker = new Cube_CalculateMatrix_AsyncWorker(_underlying, deferred,

                                                                                         pIndex,

                                                                                         point,

                                                                                         fixedPoint,

                                                                                         useFixed,

                                                                                         isotropy);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Cube::ProjectionRect(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 ||
        !((info[0].IsObject() && info[0].ToObject().InstanceOf(Placement3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Placement3D place is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbRect *rect = new MbRect;

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'place'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Placement3D *place_ = Placement3D::Unwrap(info[0].ToObject());

    const MbPlacement3D &place = *place_->_underlying;

    _underlying->ProjectionRect(place, *rect

    );

    Napi::Value _to;

    if (rect != NULL)
    {
        _to = Rect::NewInstance(env, (MbRect *)rect);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value Cube::ProjectionRect_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 ||
        !((info[0].IsObject() && info[0].ToObject().InstanceOf(Placement3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Placement3D place is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'place'"));
        return deferred.Promise();
    }
    const class Placement3D *place_ = Placement3D::Unwrap(info[0].ToObject());

    const MbPlacement3D &place = *place_->_underlying;

    Cube_ProjectionRect_AsyncWorker *asyncWorker = new Cube_ProjectionRect_AsyncWorker(_underlying, deferred,

                                                                                       place);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Cube::Intersect(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Cube::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Cube other is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'other'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Cube *other_ = Cube::Unwrap(info[0].ToObject());

    const MbCube &other = *other_->_underlying;

    double eps = info[1].ToNumber().DoubleValue();

    bool _result = _underlying->Intersect(other, info.Length() == 1 || info[1].IsNull() ? c3d::MIN_RADIUS : eps

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value Cube::Intersect_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Cube::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Cube other is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'other'"));
        return deferred.Promise();
    }
    const class Cube *other_ = Cube::Unwrap(info[0].ToObject());

    const MbCube &other = *other_->_underlying;

    double eps = info[1].ToNumber().DoubleValue();

    Cube_Intersect_AsyncWorker *asyncWorker = new Cube_Intersect_AsyncWorker(_underlying, deferred,

                                                                             other,

                                                                             eps);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value Cube::GetValue_pmin(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    MbCartPoint3D pmin = _underlying->pmin;
    _to = CartPoint3D::NewInstance(env, new MbCartPoint3D(pmin));

    return _to;
}

void Cube::SetValue_pmin(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'pmin'").ThrowAsJavaScriptException();
        return;
    }
    const class CartPoint3D *pmin_ = CartPoint3D::Unwrap(info[0].ToObject());

    MbCartPoint3D pmin = *pmin_->_underlying;

    _underlying->pmin = pmin;
}
Napi::Value Cube::GetValue_pmax(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    MbCartPoint3D pmax = _underlying->pmax;
    _to = CartPoint3D::NewInstance(env, new MbCartPoint3D(pmax));

    return _to;
}

void Cube::SetValue_pmax(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'pmax'").ThrowAsJavaScriptException();
        return;
    }
    const class CartPoint3D *pmax_ = CartPoint3D::Unwrap(info[0].ToObject());

    MbCartPoint3D pmax = *pmax_->_underlying;

    _underlying->pmax = pmax;
}

Napi::Value Cube::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

Cube_CalculateMatrix_AsyncWorker::Cube_CalculateMatrix_AsyncWorker(MbCube *_underlying,
                                                                   Napi::Promise::Deferred const &d, size_t pIndex,
                                                                   const MbCartPoint3D &point,
                                                                   const MbCartPoint3D &fixedPoint, bool useFixed,
                                                                   bool isotropy)
    : _underlying(_underlying), PromiseWorker(d), pIndex(pIndex), point(point), fixedPoint(fixedPoint),
      useFixed(useFixed), isotropy(isotropy){};

void Cube_CalculateMatrix_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbMatrix3D *matrix = new MbMatrix3D;

    bool _result = _underlying->CalculateMatrix(pIndex, point, fixedPoint, useFixed, isotropy, *matrix);

    this->_result = _result;
    this->matrix = matrix;

    ExitParallelRegion();
}

void Cube_CalculateMatrix_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    Napi::Object _toReturn = Napi::Object::New(env);

    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    _toReturn.Set(Napi::String::New(env, "_result"), _to);
    MbMatrix3D *matrix = this->matrix;
    if (matrix != NULL)
    {
        _to = Matrix3D::NewInstance(env, (MbMatrix3D *)matrix);
    }
    else
    {
        _to = env.Null();
    }

    _toReturn.Set(Napi::String::New(env, "matrix"), _to);

    deferred.Resolve(_toReturn);
}

void Cube_CalculateMatrix_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Cube_ProjectionRect_AsyncWorker::Cube_ProjectionRect_AsyncWorker(MbCube *_underlying, Napi::Promise::Deferred const &d,
                                                                 const MbPlacement3D &place)
    : _underlying(_underlying), PromiseWorker(d), place(place){};

void Cube_ProjectionRect_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbRect *rect = new MbRect;

    _underlying->ProjectionRect(place, *rect);

    this->rect = rect;

    ExitParallelRegion();
}

void Cube_ProjectionRect_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbRect *rect = this->rect;
    if (rect != NULL)
    {
        _to = Rect::NewInstance(env, (MbRect *)rect);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void Cube_ProjectionRect_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Cube_Intersect_AsyncWorker::Cube_Intersect_AsyncWorker(MbCube *_underlying, Napi::Promise::Deferred const &d,
                                                       const MbCube &other, double eps)
    : _underlying(_underlying), PromiseWorker(d), other(other), eps(eps){};

void Cube_Intersect_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->Intersect(other, eps);

    this->_result = _result;

    ExitParallelRegion();
}

void Cube_Intersect_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void Cube_Intersect_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
