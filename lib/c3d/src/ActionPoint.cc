// This is a generated file, modify: generate/templates/ActionPoint.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/ActionPoint.h"
#include "../include/Error.h"

#include "tool_mutex.h"

Napi::Object ActionPoint::Init(Napi::Env env, Napi::Object exports)
{
    Napi::Object object = Napi::Object::New(env);

    object.Set("LineLineNearestPoints", Napi::Function::New<&ActionPoint::LineLineNearestPoints>(env));
    object.Set("LineLineNearestPoints_async", Napi::Function::New<&ActionPoint::LineLineNearestPoints_async>(env));
    object.Set("CurveCurveIntersection2D", Napi::Function::New<&ActionPoint::CurveCurveIntersection2D>(env));
    object.Set("CurveCurveIntersection2D_async",
               Napi::Function::New<&ActionPoint::CurveCurveIntersection2D_async>(env));
    object.Set("CurveCurveIntersection3D", Napi::Function::New<&ActionPoint::CurveCurveIntersection3D>(env));
    object.Set("CurveCurveIntersection3D_async",
               Napi::Function::New<&ActionPoint::CurveCurveIntersection3D_async>(env));
    object.Set("CurveCurveCrossing", Napi::Function::New<&ActionPoint::CurveCurveCrossing>(env));
    object.Set("CurveCurveCrossing_async", Napi::Function::New<&ActionPoint::CurveCurveCrossing_async>(env));

    exports.Set("ActionPoint", object);

    return exports;
}

Napi::Value ActionPoint::LineLineNearestPoints(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Line3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Line3D line1 is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !((info[1].IsObject() && info[1].ToObject().InstanceOf(Line3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Line3D line2 is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 ||
        !((info[2].IsObject() && info[2].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "CartPoint3D p1 is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 3 ||
        !((info[3].IsObject() && info[3].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "CartPoint3D p2 is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'line1'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Line3D *line1_ = Line3D::Unwrap(info[0].ToObject());

    const MbLine3D &line1 = *line1_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'line2'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Line3D *line2_ = Line3D::Unwrap(info[1].ToObject());

    const MbLine3D &line2 = *line2_->_underlying;

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'p1'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class CartPoint3D *p1_ = CartPoint3D::Unwrap(info[2].ToObject());

    MbCartPoint3D &p1 = *p1_->_underlying;

    if (info[3].IsNull() || info[3].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'p2'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class CartPoint3D *p2_ = CartPoint3D::Unwrap(info[3].ToObject());

    MbCartPoint3D &p2 = *p2_->_underlying;

    double _result = ::LineLineNearestPoints(line1, line2, p1, p2

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ActionPoint::LineLineNearestPoints_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Line3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Line3D line1 is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !((info[1].IsObject() && info[1].ToObject().InstanceOf(Line3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Line3D line2 is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 ||
        !((info[2].IsObject() && info[2].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "CartPoint3D p1 is required."));
        return deferred.Promise();
    }
    if (info.Length() == 3 ||
        !((info[3].IsObject() && info[3].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "CartPoint3D p2 is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'line1'"));
        return deferred.Promise();
    }
    const class Line3D *line1_ = Line3D::Unwrap(info[0].ToObject());

    const MbLine3D &line1 = *line1_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'line2'"));
        return deferred.Promise();
    }
    const class Line3D *line2_ = Line3D::Unwrap(info[1].ToObject());

    const MbLine3D &line2 = *line2_->_underlying;

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'p1'"));
        return deferred.Promise();
    }
    const class CartPoint3D *p1_ = CartPoint3D::Unwrap(info[2].ToObject());

    MbCartPoint3D &p1 = *p1_->_underlying;

    if (info[3].IsNull() || info[3].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'p2'"));
        return deferred.Promise();
    }
    const class CartPoint3D *p2_ = CartPoint3D::Unwrap(info[3].ToObject());

    MbCartPoint3D &p2 = *p2_->_underlying;

    ActionPoint_LineLineNearestPoints_AsyncWorker *asyncWorker =
        new ActionPoint_LineLineNearestPoints_AsyncWorker(deferred,

                                                          line1,

                                                          line2,

                                                          p1,

                                                          p2);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionPoint::CurveCurveIntersection2D(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Curve::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Curve curve1 is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !((info[1].IsObject() && info[1].ToObject().InstanceOf(Curve::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Curve curve2 is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 || !(info[2].IsNumber()))
    {
        Napi::Error::New(env, "number xEpsilon is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 3 || !(info[3].IsNumber()))
    {
        Napi::Error::New(env, "number yEpsilon is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 4 || !(info[4].IsBoolean()))
    {
        Napi::Error::New(env, "boolean touchInclude is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    SArray<double> *result1 = new SArray<double>;
    SArray<double> *result2 = new SArray<double>;

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'curve1'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Curve *curve1_ = Curve::Unwrap(info[0].ToObject());

    const MbCurve &curve1 = *curve1_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'curve2'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Curve *curve2_ = Curve::Unwrap(info[1].ToObject());

    const MbCurve &curve2 = *curve2_->_underlying;

    double xEpsilon = info[2].ToNumber().DoubleValue();

    double yEpsilon = info[3].ToNumber().DoubleValue();

    bool touchInclude = info[4].ToBoolean();

    bool allowInaccuracy = info[5].ToBoolean();

    ptrdiff_t count = ::CurveCurveIntersection(curve1, curve2, *result1, *result2, xEpsilon, yEpsilon, touchInclude,
                                               info.Length() == 5 || info[5].IsNull() ? true : allowInaccuracy

    );

    Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

    _to = Napi::Number::New(env, count);

    _toReturn.Set(Napi::String::New(env, "count"), _to);
    Napi::Array arr_result1 = Napi::Array::New(env);
    for (size_t i = 0; i < result1->Count(); i++)
    {
        arr_result1[i] = (*result1)[i];
    }
    _to = arr_result1;

    _toReturn.Set(Napi::String::New(env, "result1"), _to);
    Napi::Array arr_result2 = Napi::Array::New(env);
    for (size_t i = 0; i < result2->Count(); i++)
    {
        arr_result2[i] = (*result2)[i];
    }
    _to = arr_result2;

    _toReturn.Set(Napi::String::New(env, "result2"), _to);
    return _toReturn;
}

Napi::Value ActionPoint::CurveCurveIntersection2D_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Curve::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Curve curve1 is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !((info[1].IsObject() && info[1].ToObject().InstanceOf(Curve::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Curve curve2 is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 || !(info[2].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number xEpsilon is required."));
        return deferred.Promise();
    }
    if (info.Length() == 3 || !(info[3].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number yEpsilon is required."));
        return deferred.Promise();
    }
    if (info.Length() == 4 || !(info[4].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean touchInclude is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'curve1'"));
        return deferred.Promise();
    }
    const class Curve *curve1_ = Curve::Unwrap(info[0].ToObject());

    const MbCurve &curve1 = *curve1_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'curve2'"));
        return deferred.Promise();
    }
    const class Curve *curve2_ = Curve::Unwrap(info[1].ToObject());

    const MbCurve &curve2 = *curve2_->_underlying;

    double xEpsilon = info[2].ToNumber().DoubleValue();

    double yEpsilon = info[3].ToNumber().DoubleValue();

    bool touchInclude = info[4].ToBoolean();

    bool allowInaccuracy = info[5].ToBoolean();

    ActionPoint_CurveCurveIntersection2D_AsyncWorker *asyncWorker =
        new ActionPoint_CurveCurveIntersection2D_AsyncWorker(deferred,

                                                             curve1,

                                                             curve2,

                                                             xEpsilon,

                                                             yEpsilon,

                                                             touchInclude,

                                                             allowInaccuracy);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionPoint::CurveCurveIntersection3D(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Curve3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Curve3D curve1 is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !((info[1].IsObject() && info[1].ToObject().InstanceOf(Curve3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Curve3D curve2 is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 || !(info[2].IsNumber()))
    {
        Napi::Error::New(env, "number mEps is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    SArray<double> *result1 = new SArray<double>;
    SArray<double> *result2 = new SArray<double>;

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'curve1'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Curve3D *curve1_ = Curve3D::Unwrap(info[0].ToObject());

    const MbCurve3D &curve1 = *curve1_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'curve2'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Curve3D *curve2_ = Curve3D::Unwrap(info[1].ToObject());

    const MbCurve3D &curve2 = *curve2_->_underlying;

    double mEps = info[2].ToNumber().DoubleValue();

    ptrdiff_t count = ::CurveCurveIntersection(curve1, curve2, *result1, *result2, mEps

    );

    Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

    _to = Napi::Number::New(env, count);

    _toReturn.Set(Napi::String::New(env, "count"), _to);
    Napi::Array arr_result1 = Napi::Array::New(env);
    for (size_t i = 0; i < result1->Count(); i++)
    {
        arr_result1[i] = (*result1)[i];
    }
    _to = arr_result1;

    _toReturn.Set(Napi::String::New(env, "result1"), _to);
    Napi::Array arr_result2 = Napi::Array::New(env);
    for (size_t i = 0; i < result2->Count(); i++)
    {
        arr_result2[i] = (*result2)[i];
    }
    _to = arr_result2;

    _toReturn.Set(Napi::String::New(env, "result2"), _to);
    return _toReturn;
}

Napi::Value ActionPoint::CurveCurveIntersection3D_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Curve3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Curve3D curve1 is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !((info[1].IsObject() && info[1].ToObject().InstanceOf(Curve3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Curve3D curve2 is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 || !(info[2].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number mEps is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'curve1'"));
        return deferred.Promise();
    }
    const class Curve3D *curve1_ = Curve3D::Unwrap(info[0].ToObject());

    const MbCurve3D &curve1 = *curve1_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'curve2'"));
        return deferred.Promise();
    }
    const class Curve3D *curve2_ = Curve3D::Unwrap(info[1].ToObject());

    const MbCurve3D &curve2 = *curve2_->_underlying;

    double mEps = info[2].ToNumber().DoubleValue();

    ActionPoint_CurveCurveIntersection3D_AsyncWorker *asyncWorker =
        new ActionPoint_CurveCurveIntersection3D_AsyncWorker(deferred,

                                                             curve1,

                                                             curve2,

                                                             mEps);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionPoint::CurveCurveCrossing(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Curve3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Curve3D curve1 is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !((info[1].IsObject() && info[1].ToObject().InstanceOf(Curve3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Curve3D curve2 is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    SArray<double> *result1 = new SArray<double>;
    SArray<double> *result2 = new SArray<double>;

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'curve1'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Curve3D *curve1_ = Curve3D::Unwrap(info[0].ToObject());

    const MbCurve3D &curve1 = *curve1_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'curve2'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Curve3D *curve2_ = Curve3D::Unwrap(info[1].ToObject());

    const MbCurve3D &curve2 = *curve2_->_underlying;

    double mEps = info[2].ToNumber().DoubleValue();

    ptrdiff_t count = ::CurveCurveCrossing(curve1, curve2, *result1, *result2,
                                           info.Length() == 2 || info[2].IsNull() ? Math::metricRegion : mEps

    );

    Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

    _to = Napi::Number::New(env, count);

    _toReturn.Set(Napi::String::New(env, "count"), _to);
    Napi::Array arr_result1 = Napi::Array::New(env);
    for (size_t i = 0; i < result1->Count(); i++)
    {
        arr_result1[i] = (*result1)[i];
    }
    _to = arr_result1;

    _toReturn.Set(Napi::String::New(env, "result1"), _to);
    Napi::Array arr_result2 = Napi::Array::New(env);
    for (size_t i = 0; i < result2->Count(); i++)
    {
        arr_result2[i] = (*result2)[i];
    }
    _to = arr_result2;

    _toReturn.Set(Napi::String::New(env, "result2"), _to);
    return _toReturn;
}

Napi::Value ActionPoint::CurveCurveCrossing_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Curve3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Curve3D curve1 is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !((info[1].IsObject() && info[1].ToObject().InstanceOf(Curve3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Curve3D curve2 is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'curve1'"));
        return deferred.Promise();
    }
    const class Curve3D *curve1_ = Curve3D::Unwrap(info[0].ToObject());

    const MbCurve3D &curve1 = *curve1_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'curve2'"));
        return deferred.Promise();
    }
    const class Curve3D *curve2_ = Curve3D::Unwrap(info[1].ToObject());

    const MbCurve3D &curve2 = *curve2_->_underlying;

    double mEps = info[2].ToNumber().DoubleValue();

    ActionPoint_CurveCurveCrossing_AsyncWorker *asyncWorker = new ActionPoint_CurveCurveCrossing_AsyncWorker(deferred,

                                                                                                             curve1,

                                                                                                             curve2,

                                                                                                             mEps);
    asyncWorker->Queue();
    return deferred.Promise();
}

ActionPoint_LineLineNearestPoints_AsyncWorker::ActionPoint_LineLineNearestPoints_AsyncWorker(
    Napi::Promise::Deferred const &d, const MbLine3D &line1, const MbLine3D &line2, MbCartPoint3D &p1,
    MbCartPoint3D &p2)
    : PromiseWorker(d), line1(line1), line2(line2), p1(p1), p2(p2){};

void ActionPoint_LineLineNearestPoints_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = ::LineLineNearestPoints(line1, line2, p1, p2);

    this->_result = _result;

    ExitParallelRegion();
}

void ActionPoint_LineLineNearestPoints_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ActionPoint_LineLineNearestPoints_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                           Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionPoint_CurveCurveIntersection2D_AsyncWorker::ActionPoint_CurveCurveIntersection2D_AsyncWorker(
    Napi::Promise::Deferred const &d, const MbCurve &curve1, const MbCurve &curve2, double xEpsilon, double yEpsilon,
    bool touchInclude, bool allowInaccuracy)
    : PromiseWorker(d), curve1(curve1), curve2(curve2), xEpsilon(xEpsilon), yEpsilon(yEpsilon),
      touchInclude(touchInclude), allowInaccuracy(allowInaccuracy){};

void ActionPoint_CurveCurveIntersection2D_AsyncWorker::Execute()
{
    EnterParallelRegion();

    SArray<double> *result1 = new SArray<double>;
    SArray<double> *result2 = new SArray<double>;

    ptrdiff_t count =
        ::CurveCurveIntersection(curve1, curve2, *result1, *result2, xEpsilon, yEpsilon, touchInclude, allowInaccuracy);

    this->count = count;
    this->result1 = result1;
    this->result2 = result2;

    ExitParallelRegion();
}

void ActionPoint_CurveCurveIntersection2D_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    Napi::Object _toReturn = Napi::Object::New(env);

    ptrdiff_t count = this->count;
    _to = Napi::Number::New(env, count);

    _toReturn.Set(Napi::String::New(env, "count"), _to);
    SArray<double> *result1 = this->result1;
    Napi::Array arr_result1 = Napi::Array::New(env);
    for (size_t i = 0; i < result1->Count(); i++)
    {
        arr_result1[i] = (*result1)[i];
    }
    _to = arr_result1;

    _toReturn.Set(Napi::String::New(env, "result1"), _to);
    SArray<double> *result2 = this->result2;
    Napi::Array arr_result2 = Napi::Array::New(env);
    for (size_t i = 0; i < result2->Count(); i++)
    {
        arr_result2[i] = (*result2)[i];
    }
    _to = arr_result2;

    _toReturn.Set(Napi::String::New(env, "result2"), _to);

    deferred.Resolve(_toReturn);
}

void ActionPoint_CurveCurveIntersection2D_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                              Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionPoint_CurveCurveIntersection3D_AsyncWorker::ActionPoint_CurveCurveIntersection3D_AsyncWorker(
    Napi::Promise::Deferred const &d, const MbCurve3D &curve1, const MbCurve3D &curve2, double mEps)
    : PromiseWorker(d), curve1(curve1), curve2(curve2), mEps(mEps){};

void ActionPoint_CurveCurveIntersection3D_AsyncWorker::Execute()
{
    EnterParallelRegion();

    SArray<double> *result1 = new SArray<double>;
    SArray<double> *result2 = new SArray<double>;

    ptrdiff_t count = ::CurveCurveIntersection(curve1, curve2, *result1, *result2, mEps);

    this->count = count;
    this->result1 = result1;
    this->result2 = result2;

    ExitParallelRegion();
}

void ActionPoint_CurveCurveIntersection3D_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    Napi::Object _toReturn = Napi::Object::New(env);

    ptrdiff_t count = this->count;
    _to = Napi::Number::New(env, count);

    _toReturn.Set(Napi::String::New(env, "count"), _to);
    SArray<double> *result1 = this->result1;
    Napi::Array arr_result1 = Napi::Array::New(env);
    for (size_t i = 0; i < result1->Count(); i++)
    {
        arr_result1[i] = (*result1)[i];
    }
    _to = arr_result1;

    _toReturn.Set(Napi::String::New(env, "result1"), _to);
    SArray<double> *result2 = this->result2;
    Napi::Array arr_result2 = Napi::Array::New(env);
    for (size_t i = 0; i < result2->Count(); i++)
    {
        arr_result2[i] = (*result2)[i];
    }
    _to = arr_result2;

    _toReturn.Set(Napi::String::New(env, "result2"), _to);

    deferred.Resolve(_toReturn);
}

void ActionPoint_CurveCurveIntersection3D_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                              Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionPoint_CurveCurveCrossing_AsyncWorker::ActionPoint_CurveCurveCrossing_AsyncWorker(Napi::Promise::Deferred const &d,
                                                                                       const MbCurve3D &curve1,
                                                                                       const MbCurve3D &curve2,
                                                                                       double mEps)
    : PromiseWorker(d), curve1(curve1), curve2(curve2), mEps(mEps){};

void ActionPoint_CurveCurveCrossing_AsyncWorker::Execute()
{
    EnterParallelRegion();

    SArray<double> *result1 = new SArray<double>;
    SArray<double> *result2 = new SArray<double>;

    ptrdiff_t count = ::CurveCurveCrossing(curve1, curve2, *result1, *result2, mEps);

    this->count = count;
    this->result1 = result1;
    this->result2 = result2;

    ExitParallelRegion();
}

void ActionPoint_CurveCurveCrossing_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    Napi::Object _toReturn = Napi::Object::New(env);

    ptrdiff_t count = this->count;
    _to = Napi::Number::New(env, count);

    _toReturn.Set(Napi::String::New(env, "count"), _to);
    SArray<double> *result1 = this->result1;
    Napi::Array arr_result1 = Napi::Array::New(env);
    for (size_t i = 0; i < result1->Count(); i++)
    {
        arr_result1[i] = (*result1)[i];
    }
    _to = arr_result1;

    _toReturn.Set(Napi::String::New(env, "result1"), _to);
    SArray<double> *result2 = this->result2;
    Napi::Array arr_result2 = Napi::Array::New(env);
    for (size_t i = 0; i < result2->Count(); i++)
    {
        arr_result2[i] = (*result2)[i];
    }
    _to = arr_result2;

    _toReturn.Set(Napi::String::New(env, "result2"), _to);

    deferred.Resolve(_toReturn);
}

void ActionPoint_CurveCurveCrossing_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                        Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
