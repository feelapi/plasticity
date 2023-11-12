// This is a generated file, modify: generate/templates/ActionCurve3D.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/ActionCurve3D.h"
#include "../include/Error.h"

#include "tool_mutex.h"

Napi::Object ActionCurve3D::Init(Napi::Env env, Napi::Object exports)
{
    Napi::Object object = Napi::Object::New(env);

    object.Set("Arc", Napi::Function::New<&ActionCurve3D::Arc>(env));
    object.Set("Arc_async", Napi::Function::New<&ActionCurve3D::Arc_async>(env));
    object.Set("Segment", Napi::Function::New<&ActionCurve3D::Segment>(env));
    object.Set("Segment_async", Napi::Function::New<&ActionCurve3D::Segment_async>(env));
    object.Set("SplineCurve", Napi::Function::New<&ActionCurve3D::SplineCurve>(env));
    object.Set("SplineCurve_async", Napi::Function::New<&ActionCurve3D::SplineCurve_async>(env));
    object.Set("CreateContour", Napi::Function::New<&ActionCurve3D::CreateContour>(env));
    object.Set("CreateContour_async", Napi::Function::New<&ActionCurve3D::CreateContour_async>(env));
    object.Set("AddCurveToContour", Napi::Function::New<&ActionCurve3D::AddCurveToContour>(env));
    object.Set("AddCurveToContour_async", Napi::Function::New<&ActionCurve3D::AddCurveToContour_async>(env));
    object.Set("RegularPolygon", Napi::Function::New<&ActionCurve3D::RegularPolygon>(env));
    object.Set("RegularPolygon_async", Napi::Function::New<&ActionCurve3D::RegularPolygon_async>(env));
    object.Set("SpiralCurve", Napi::Function::New<&ActionCurve3D::SpiralCurve>(env));
    object.Set("SpiralCurve_async", Napi::Function::New<&ActionCurve3D::SpiralCurve_async>(env));
    object.Set("CreateContours", Napi::Function::New<&ActionCurve3D::CreateContours>(env));
    object.Set("CreateContours_async", Napi::Function::New<&ActionCurve3D::CreateContours_async>(env));
    object.Set("PlaneCurve", Napi::Function::New<&ActionCurve3D::PlaneCurve>(env));
    object.Set("PlaneCurve_async", Napi::Function::New<&ActionCurve3D::PlaneCurve_async>(env));
    object.Set("DuplicateCurve", Napi::Function::New<&ActionCurve3D::DuplicateCurve>(env));
    object.Set("DuplicateCurve_async", Napi::Function::New<&ActionCurve3D::DuplicateCurve_async>(env));
    object.Set("NurbsCopy", Napi::Function::New<&ActionCurve3D::NurbsCopy>(env));
    object.Set("NurbsCopy_async", Napi::Function::New<&ActionCurve3D::NurbsCopy_async>(env));

    exports.Set("ActionCurve3D", object);

    return exports;
}

Napi::Value ActionCurve3D::Arc(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 ||
        !((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "CartPoint3D centre is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsArray()))
    {
        Napi::Error::New(env, "Array points is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 || !(info[2].IsBoolean()))
    {
        Napi::Error::New(env, "boolean curveClosed is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 3 || !(info[3].IsNumber()))
    {
        Napi::Error::New(env, "number angle is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 4 || !(info[4].IsNumber()))
    {
        Napi::Error::New(env, "number a is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 5 || !(info[5].IsNumber()))
    {
        Napi::Error::New(env, "number b is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbCurve3D *result = NULL;

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'centre'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class CartPoint3D *centre_ = CartPoint3D::Unwrap(info[0].ToObject());

    const MbCartPoint3D &centre = *centre_->_underlying;

    SArray<MbCartPoint3D> points;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        const Napi::Array points_ = Napi::Array(env, info[1]);
        points = SArray<MbCartPoint3D>(points_.Length(), 1);

        for (size_t i = 0; i < points_.Length(); i++)
        {
            if (points_[i].IsNull() || points_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!points_[i].IsObject() || !points_[i].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))
            {
                Napi::Error::New(env, "CartPoint3D points is required.").ThrowAsJavaScriptException();
                return env.Undefined();
            }
            else
            {
                points.Add(*CartPoint3D::Unwrap(points_[i].ToObject())->_underlying);
            }
        }
    }

    bool curveClosed = info[2].ToBoolean();

    double angle = info[3].ToNumber().DoubleValue();

    double a = info[4].ToNumber().DoubleValue();

    double b = info[5].ToNumber().DoubleValue();

    MbResultType _result = ::Arc(centre, points, curveClosed, angle, a, b, result

    );

    if (_result == rt_Success)
    {

        Napi::Value _to;

        if (result != NULL)
        {
            _to = Curve3D::NewInstance(env, (MbCurve3D *)result);
        }
        else
        {
            _to = env.Null();
        }

        return _to;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation Arc failed with error: " << Error::GetSolidErrorResId(_result);
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("code", Napi::Number::New(env, _result));
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ActionCurve3D::Arc_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 ||
        !((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "CartPoint3D centre is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsArray()))
    {
        deferred.Reject(Napi::String::New(env, "Array points is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 || !(info[2].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean curveClosed is required."));
        return deferred.Promise();
    }
    if (info.Length() == 3 || !(info[3].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number angle is required."));
        return deferred.Promise();
    }
    if (info.Length() == 4 || !(info[4].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number a is required."));
        return deferred.Promise();
    }
    if (info.Length() == 5 || !(info[5].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number b is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'centre'"));
        return deferred.Promise();
    }
    const class CartPoint3D *centre_ = CartPoint3D::Unwrap(info[0].ToObject());

    const MbCartPoint3D &centre = *centre_->_underlying;

    SArray<MbCartPoint3D> *points;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        const Napi::Array points_ = Napi::Array(env, info[1]);
        points = new SArray<MbCartPoint3D>(points_.Length(), 1);

        for (size_t i = 0; i < points_.Length(); i++)
        {
            if (points_[i].IsNull() || points_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!points_[i].IsObject() || !points_[i].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))
            {
                deferred.Reject(Napi::String::New(env, "CartPoint3D points is required."));
                return deferred.Promise();
            }
            else
            {
                points->Add(*CartPoint3D::Unwrap(points_[i].ToObject())->_underlying);
            }
        }
    }

    bool curveClosed = info[2].ToBoolean();

    double angle = info[3].ToNumber().DoubleValue();

    double a = info[4].ToNumber().DoubleValue();

    double b = info[5].ToNumber().DoubleValue();

    ActionCurve3D_Arc_AsyncWorker *asyncWorker = new ActionCurve3D_Arc_AsyncWorker(deferred,

                                                                                   centre, *points,

                                                                                   curveClosed,

                                                                                   angle,

                                                                                   a,

                                                                                   b);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionCurve3D::Segment(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 ||
        !((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "CartPoint3D point1 is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 ||
        !((info[1].IsObject() && info[1].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "CartPoint3D point2 is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbCurve3D *result = NULL;

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'point1'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class CartPoint3D *point1_ = CartPoint3D::Unwrap(info[0].ToObject());

    const MbCartPoint3D &point1 = *point1_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'point2'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class CartPoint3D *point2_ = CartPoint3D::Unwrap(info[1].ToObject());

    const MbCartPoint3D &point2 = *point2_->_underlying;

    MbResultType _result = ::Segment(point1, point2, result

    );

    if (_result == rt_Success)
    {

        Napi::Value _to;

        if (result != NULL)
        {
            _to = Curve3D::NewInstance(env, (MbCurve3D *)result);
        }
        else
        {
            _to = env.Null();
        }

        return _to;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation Segment failed with error: " << Error::GetSolidErrorResId(_result);
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("code", Napi::Number::New(env, _result));
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ActionCurve3D::Segment_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 ||
        !((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "CartPoint3D point1 is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 ||
        !((info[1].IsObject() && info[1].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "CartPoint3D point2 is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'point1'"));
        return deferred.Promise();
    }
    const class CartPoint3D *point1_ = CartPoint3D::Unwrap(info[0].ToObject());

    const MbCartPoint3D &point1 = *point1_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'point2'"));
        return deferred.Promise();
    }
    const class CartPoint3D *point2_ = CartPoint3D::Unwrap(info[1].ToObject());

    const MbCartPoint3D &point2 = *point2_->_underlying;

    ActionCurve3D_Segment_AsyncWorker *asyncWorker = new ActionCurve3D_Segment_AsyncWorker(deferred,

                                                                                           point1,

                                                                                           point2);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionCurve3D::SplineCurve(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsArray()))
    {
        Napi::Error::New(env, "Array points is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsBoolean()))
    {
        Napi::Error::New(env, "boolean closed is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 || !(info[2].IsNumber()))
    {
        Napi::Error::New(env, "SpaceType curveType is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbCurve3D *result = NULL;

    SArray<MbCartPoint3D> points;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        const Napi::Array points_ = Napi::Array(env, info[0]);
        points = SArray<MbCartPoint3D>(points_.Length(), 1);

        for (size_t i = 0; i < points_.Length(); i++)
        {
            if (points_[i].IsNull() || points_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!points_[i].IsObject() || !points_[i].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))
            {
                Napi::Error::New(env, "CartPoint3D points is required.").ThrowAsJavaScriptException();
                return env.Undefined();
            }
            else
            {
                points.Add(*CartPoint3D::Unwrap(points_[i].ToObject())->_underlying);
            }
        }
    }

    bool closed = info[1].ToBoolean();

    const MbeSpaceType curveType = static_cast<MbeSpaceType>(info[2].ToNumber().Uint32Value());

    MbResultType _result = ::SplineCurve(points, closed, curveType, result

    );

    if (_result == rt_Success)
    {

        Napi::Value _to;

        if (result != NULL)
        {
            _to = Curve3D::NewInstance(env, (MbCurve3D *)result);
        }
        else
        {
            _to = env.Null();
        }

        return _to;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation SplineCurve failed with error: " << Error::GetSolidErrorResId(_result);
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("code", Napi::Number::New(env, _result));
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ActionCurve3D::SplineCurve_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsArray()))
    {
        deferred.Reject(Napi::String::New(env, "Array points is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean closed is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 || !(info[2].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "SpaceType curveType is required."));
        return deferred.Promise();
    }

    SArray<MbCartPoint3D> *points;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        const Napi::Array points_ = Napi::Array(env, info[0]);
        points = new SArray<MbCartPoint3D>(points_.Length(), 1);

        for (size_t i = 0; i < points_.Length(); i++)
        {
            if (points_[i].IsNull() || points_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!points_[i].IsObject() || !points_[i].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))
            {
                deferred.Reject(Napi::String::New(env, "CartPoint3D points is required."));
                return deferred.Promise();
            }
            else
            {
                points->Add(*CartPoint3D::Unwrap(points_[i].ToObject())->_underlying);
            }
        }
    }

    bool closed = info[1].ToBoolean();

    const MbeSpaceType curveType = static_cast<MbeSpaceType>(info[2].ToNumber().Uint32Value());

    ActionCurve3D_SplineCurve_AsyncWorker *asyncWorker = new ActionCurve3D_SplineCurve_AsyncWorker(deferred, *points,

                                                                                                   closed,

                                                                                                   curveType);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionCurve3D::CreateContour(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Curve3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Curve3D curve is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbContour3D *result = NULL;

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'curve'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Curve3D *curve_ = Curve3D::Unwrap(info[0].ToObject());

    MbCurve3D &curve = *curve_->_underlying;

    MbResultType _result = ::CreateContour(curve, result

    );

    if (_result == rt_Success)
    {

        Napi::Value _to;

        if (result != NULL)
        {
            _to = Contour3D::NewInstance(env, (MbContour3D *)result);
        }
        else
        {
            _to = env.Null();
        }

        return _to;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation CreateContour failed with error: " << Error::GetSolidErrorResId(_result);
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("code", Napi::Number::New(env, _result));
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ActionCurve3D::CreateContour_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Curve3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Curve3D curve is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'curve'"));
        return deferred.Promise();
    }
    const class Curve3D *curve_ = Curve3D::Unwrap(info[0].ToObject());

    MbCurve3D &curve = *curve_->_underlying;

    ActionCurve3D_CreateContour_AsyncWorker *asyncWorker = new ActionCurve3D_CreateContour_AsyncWorker(deferred,

                                                                                                       curve);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionCurve3D::AddCurveToContour(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Curve3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Curve3D curve is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !((info[1].IsObject() && info[1].ToObject().InstanceOf(Curve3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Curve3D contour is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 || !(info[2].IsBoolean()))
    {
        Napi::Error::New(env, "boolean toEnd is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'curve'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Curve3D *curve_ = Curve3D::Unwrap(info[0].ToObject());

    MbCurve3D &curve = *curve_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'contour'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Curve3D *contour_ = Curve3D::Unwrap(info[1].ToObject());

    MbCurve3D &contour = *contour_->_underlying;

    bool toEnd = info[2].ToBoolean();

    MbResultType _result = ::AddCurveToContour(curve, contour, toEnd

    );

    if (_result == rt_Success)
    {

        return env.Undefined();
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation AddCurveToContour failed with error: " << Error::GetSolidErrorResId(_result);
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("code", Napi::Number::New(env, _result));
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ActionCurve3D::AddCurveToContour_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Curve3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Curve3D curve is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !((info[1].IsObject() && info[1].ToObject().InstanceOf(Curve3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Curve3D contour is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 || !(info[2].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean toEnd is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'curve'"));
        return deferred.Promise();
    }
    const class Curve3D *curve_ = Curve3D::Unwrap(info[0].ToObject());

    MbCurve3D &curve = *curve_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'contour'"));
        return deferred.Promise();
    }
    const class Curve3D *contour_ = Curve3D::Unwrap(info[1].ToObject());

    MbCurve3D &contour = *contour_->_underlying;

    bool toEnd = info[2].ToBoolean();

    ActionCurve3D_AddCurveToContour_AsyncWorker *asyncWorker = new ActionCurve3D_AddCurveToContour_AsyncWorker(deferred,

                                                                                                               curve,

                                                                                                               contour,

                                                                                                               toEnd);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionCurve3D::RegularPolygon(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 ||
        !((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "CartPoint3D centre is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 ||
        !((info[1].IsObject() && info[1].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "CartPoint3D point is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 || !((info[2].IsObject() && info[2].ToObject().InstanceOf(Vector3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Vector3D axisZ is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 3 || !(info[3].IsNumber()))
    {
        Napi::Error::New(env, "number vertexCount is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 4 || !(info[4].IsBoolean()))
    {
        Napi::Error::New(env, "boolean describe is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbCurve3D *result = NULL;

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'centre'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class CartPoint3D *centre_ = CartPoint3D::Unwrap(info[0].ToObject());

    const MbCartPoint3D &centre = *centre_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'point'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class CartPoint3D *point_ = CartPoint3D::Unwrap(info[1].ToObject());

    const MbCartPoint3D &point = *point_->_underlying;

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'axisZ'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Vector3D *axisZ_ = Vector3D::Unwrap(info[2].ToObject());

    const MbVector3D &axisZ = *axisZ_->_underlying;

    size_t vertexCount = info[3].ToNumber().Int64Value();

    bool describe = info[4].ToBoolean();

    MbResultType _result = ::RegularPolygon(centre, point, axisZ, vertexCount, describe, result

    );

    if (_result == rt_Success)
    {

        Napi::Value _to;

        if (result != NULL)
        {
            _to = Curve3D::NewInstance(env, (MbCurve3D *)result);
        }
        else
        {
            _to = env.Null();
        }

        return _to;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation RegularPolygon failed with error: " << Error::GetSolidErrorResId(_result);
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("code", Napi::Number::New(env, _result));
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ActionCurve3D::RegularPolygon_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 ||
        !((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "CartPoint3D centre is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 ||
        !((info[1].IsObject() && info[1].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "CartPoint3D point is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 || !((info[2].IsObject() && info[2].ToObject().InstanceOf(Vector3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Vector3D axisZ is required."));
        return deferred.Promise();
    }
    if (info.Length() == 3 || !(info[3].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number vertexCount is required."));
        return deferred.Promise();
    }
    if (info.Length() == 4 || !(info[4].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean describe is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'centre'"));
        return deferred.Promise();
    }
    const class CartPoint3D *centre_ = CartPoint3D::Unwrap(info[0].ToObject());

    const MbCartPoint3D &centre = *centre_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'point'"));
        return deferred.Promise();
    }
    const class CartPoint3D *point_ = CartPoint3D::Unwrap(info[1].ToObject());

    const MbCartPoint3D &point = *point_->_underlying;

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'axisZ'"));
        return deferred.Promise();
    }
    const class Vector3D *axisZ_ = Vector3D::Unwrap(info[2].ToObject());

    const MbVector3D &axisZ = *axisZ_->_underlying;

    size_t vertexCount = info[3].ToNumber().Int64Value();

    bool describe = info[4].ToBoolean();

    ActionCurve3D_RegularPolygon_AsyncWorker *asyncWorker = new ActionCurve3D_RegularPolygon_AsyncWorker(deferred,

                                                                                                         centre,

                                                                                                         point,

                                                                                                         axisZ,

                                                                                                         vertexCount,

                                                                                                         describe);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionCurve3D::SpiralCurve(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 ||
        !((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "CartPoint3D point0 is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 ||
        !((info[1].IsObject() && info[1].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "CartPoint3D point1 is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 ||
        !((info[2].IsObject() && info[2].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "CartPoint3D point2 is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 3 || !(info[3].IsNumber()))
    {
        Napi::Error::New(env, "number radius is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 4 || !(info[4].IsNumber()))
    {
        Napi::Error::New(env, "number step is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 5 || !(info[5].IsNumber()))
    {
        Napi::Error::New(env, "number angle is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 6 || !(

                                  (info[6].IsNull() || info[6].IsUndefined()) ||
                                  (info[6].IsObject() && info[6].ToObject().InstanceOf(Curve::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Curve lawCurve is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 7 || !(info[7].IsBoolean()))
    {
        Napi::Error::New(env, "boolean spiralAxis is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbCurve3D *result = NULL;

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'point0'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class CartPoint3D *point0_ = CartPoint3D::Unwrap(info[0].ToObject());

    const MbCartPoint3D &point0 = *point0_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'point1'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class CartPoint3D *point1_ = CartPoint3D::Unwrap(info[1].ToObject());

    const MbCartPoint3D &point1 = *point1_->_underlying;

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'point2'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class CartPoint3D *point2_ = CartPoint3D::Unwrap(info[2].ToObject());

    const MbCartPoint3D &point2 = *point2_->_underlying;

    double radius = info[3].ToNumber().DoubleValue();

    double step = info[4].ToNumber().DoubleValue();

    double angle = info[5].ToNumber().DoubleValue();

    MbCurve *lawCurve = NULL;
    if (!(info[6].IsNull() || info[6].IsUndefined()))
    {
        Curve *lawCurve_ = Curve::Unwrap(info[6].ToObject());
        lawCurve = lawCurve_->_underlying;
    }

    bool spiralAxis = info[7].ToBoolean();

    MbResultType _result = ::SpiralCurve(point0, point1, point2, radius, step, angle, lawCurve, spiralAxis, result

    );

    if (_result == rt_Success)
    {

        Napi::Value _to;

        if (result != NULL)
        {
            _to = Curve3D::NewInstance(env, (MbCurve3D *)result);
        }
        else
        {
            _to = env.Null();
        }

        return _to;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation SpiralCurve failed with error: " << Error::GetSolidErrorResId(_result);
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("code", Napi::Number::New(env, _result));
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ActionCurve3D::SpiralCurve_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 ||
        !((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "CartPoint3D point0 is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 ||
        !((info[1].IsObject() && info[1].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "CartPoint3D point1 is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 ||
        !((info[2].IsObject() && info[2].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "CartPoint3D point2 is required."));
        return deferred.Promise();
    }
    if (info.Length() == 3 || !(info[3].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number radius is required."));
        return deferred.Promise();
    }
    if (info.Length() == 4 || !(info[4].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number step is required."));
        return deferred.Promise();
    }
    if (info.Length() == 5 || !(info[5].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number angle is required."));
        return deferred.Promise();
    }
    if (info.Length() == 6 || !(

                                  (info[6].IsNull() || info[6].IsUndefined()) ||
                                  (info[6].IsObject() && info[6].ToObject().InstanceOf(Curve::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Curve lawCurve is required."));
        return deferred.Promise();
    }
    if (info.Length() == 7 || !(info[7].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean spiralAxis is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'point0'"));
        return deferred.Promise();
    }
    const class CartPoint3D *point0_ = CartPoint3D::Unwrap(info[0].ToObject());

    const MbCartPoint3D &point0 = *point0_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'point1'"));
        return deferred.Promise();
    }
    const class CartPoint3D *point1_ = CartPoint3D::Unwrap(info[1].ToObject());

    const MbCartPoint3D &point1 = *point1_->_underlying;

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'point2'"));
        return deferred.Promise();
    }
    const class CartPoint3D *point2_ = CartPoint3D::Unwrap(info[2].ToObject());

    const MbCartPoint3D &point2 = *point2_->_underlying;

    double radius = info[3].ToNumber().DoubleValue();

    double step = info[4].ToNumber().DoubleValue();

    double angle = info[5].ToNumber().DoubleValue();

    MbCurve *lawCurve = NULL;
    if (!(info[6].IsNull() || info[6].IsUndefined()))
    {
        Curve *lawCurve_ = Curve::Unwrap(info[6].ToObject());
        lawCurve = lawCurve_->_underlying;
    }

    bool spiralAxis = info[7].ToBoolean();

    ActionCurve3D_SpiralCurve_AsyncWorker *asyncWorker = new ActionCurve3D_SpiralCurve_AsyncWorker(deferred,

                                                                                                   point0,

                                                                                                   point1,

                                                                                                   point2,

                                                                                                   radius,

                                                                                                   step,

                                                                                                   angle,

                                                                                                   lawCurve,

                                                                                                   spiralAxis);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionCurve3D::CreateContours(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsArray()))
    {
        Napi::Error::New(env, "Array curves is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        Napi::Error::New(env, "number metricEps is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    RPArray<MbContour3D> *result = new RPArray<MbContour3D>;

    RPArray<MbCurve3D> curves;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        const Napi::Array curves_ = Napi::Array(env, info[0]);
        curves = RPArray<MbCurve3D>(curves_.Length(), 1);

        for (size_t i = 0; i < curves_.Length(); i++)
        {
            if (curves_[i].IsNull() || curves_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!curves_[i].IsObject() || !curves_[i].ToObject().InstanceOf(Curve3D::GetConstructor(env)))
            {
                Napi::Error::New(env, "Curve3D curves is required.").ThrowAsJavaScriptException();
                return env.Undefined();
            }
            else
            {
                curves.Add(Curve3D::Unwrap(curves_[i].ToObject())->_underlying);
            }
        }
    }

    double metricEps = info[1].ToNumber().DoubleValue();

    bool onlySmoothConnected = info[2].ToBoolean();

    int version = info[3].ToNumber().Int64Value();

    MbResultType _result = ::CreateContours(
        curves, metricEps, *result, info.Length() == 2 || info[2].IsNull() ? false : onlySmoothConnected,
        info.Length() == 3 || info[3].IsNull() ? Math::DefaultMathVersion() : version

    );

    if (_result == rt_Success)
    {

        Napi::Value _to;

        Napi::Array arr_result = Napi::Array::New(env);
        for (size_t i = 0; i < result->Count(); i++)
        {
            arr_result[i] = Contour3D::NewInstance(env,

                                                   (*result)[i]

            );
        }
        _to = arr_result;

        return _to;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation CreateContours failed with error: " << Error::GetSolidErrorResId(_result);
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("code", Napi::Number::New(env, _result));
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ActionCurve3D::CreateContours_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsArray()))
    {
        deferred.Reject(Napi::String::New(env, "Array curves is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number metricEps is required."));
        return deferred.Promise();
    }

    RPArray<MbCurve3D> *curves;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        const Napi::Array curves_ = Napi::Array(env, info[0]);
        curves = new RPArray<MbCurve3D>(curves_.Length(), 1);

        for (size_t i = 0; i < curves_.Length(); i++)
        {
            if (curves_[i].IsNull() || curves_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!curves_[i].IsObject() || !curves_[i].ToObject().InstanceOf(Curve3D::GetConstructor(env)))
            {
                deferred.Reject(Napi::String::New(env, "Curve3D curves is required."));
                return deferred.Promise();
            }
            else
            {
                curves->Add(Curve3D::Unwrap(curves_[i].ToObject())->_underlying);
            }
        }
    }

    double metricEps = info[1].ToNumber().DoubleValue();

    bool onlySmoothConnected = info[2].ToBoolean();

    int version = info[3].ToNumber().Int64Value();

    ActionCurve3D_CreateContours_AsyncWorker *asyncWorker =
        new ActionCurve3D_CreateContours_AsyncWorker(deferred, *curves,

                                                     metricEps,

                                                     onlySmoothConnected,

                                                     version);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionCurve3D::PlaneCurve(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 ||
        !((info[0].IsObject() && info[0].ToObject().InstanceOf(Placement3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Placement3D place is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !((info[1].IsObject() && info[1].ToObject().InstanceOf(Curve::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Curve curve is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbCurve3D *result = NULL;

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'place'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Placement3D *place_ = Placement3D::Unwrap(info[0].ToObject());

    const MbPlacement3D &place = *place_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'curve'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Curve *curve_ = Curve::Unwrap(info[1].ToObject());

    const MbCurve &curve = *curve_->_underlying;

    MbResultType _result = ::PlaneCurve(place, curve, result

    );

    if (_result == rt_Success)
    {

        Napi::Value _to;

        if (result != NULL)
        {
            _to = Curve3D::NewInstance(env, (MbCurve3D *)result);
        }
        else
        {
            _to = env.Null();
        }

        return _to;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation PlaneCurve failed with error: " << Error::GetSolidErrorResId(_result);
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("code", Napi::Number::New(env, _result));
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ActionCurve3D::PlaneCurve_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 ||
        !((info[0].IsObject() && info[0].ToObject().InstanceOf(Placement3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Placement3D place is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !((info[1].IsObject() && info[1].ToObject().InstanceOf(Curve::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Curve curve is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'place'"));
        return deferred.Promise();
    }
    const class Placement3D *place_ = Placement3D::Unwrap(info[0].ToObject());

    const MbPlacement3D &place = *place_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'curve'"));
        return deferred.Promise();
    }
    const class Curve *curve_ = Curve::Unwrap(info[1].ToObject());

    const MbCurve &curve = *curve_->_underlying;

    ActionCurve3D_PlaneCurve_AsyncWorker *asyncWorker = new ActionCurve3D_PlaneCurve_AsyncWorker(deferred,

                                                                                                 place,

                                                                                                 curve);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionCurve3D::DuplicateCurve(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Curve3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Curve3D curve is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'curve'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Curve3D *curve_ = Curve3D::Unwrap(info[0].ToObject());

    const MbCurve3D &curve = *curve_->_underlying;

    int version = info[1].ToNumber().Int64Value();

    MbCurve3D *_result =
        ::DuplicateCurve(curve, info.Length() == 1 || info[1].IsNull() ? Math::DefaultMathVersion() : version

        );

    Napi::Value _to;

    if (_result != NULL)
    {
        _to = Curve3D::NewInstance(env, (MbCurve3D *)_result);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value ActionCurve3D::DuplicateCurve_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Curve3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Curve3D curve is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'curve'"));
        return deferred.Promise();
    }
    const class Curve3D *curve_ = Curve3D::Unwrap(info[0].ToObject());

    const MbCurve3D &curve = *curve_->_underlying;

    int version = info[1].ToNumber().Int64Value();

    ActionCurve3D_DuplicateCurve_AsyncWorker *asyncWorker = new ActionCurve3D_DuplicateCurve_AsyncWorker(deferred,

                                                                                                         curve,

                                                                                                         version);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionCurve3D::NurbsCopy(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Curve3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Curve3D curve is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbCurve3D *result = NULL;

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'curve'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Curve3D *curve_ = Curve3D::Unwrap(info[0].ToObject());

    const MbCurve3D &curve = *curve_->_underlying;

    MbResultType _result = ::NurbsCopy(curve, result

    );

    if (_result == rt_Success)
    {

        Napi::Value _to;

        if (result != NULL)
        {
            _to = Curve3D::NewInstance(env, (MbCurve3D *)result);
        }
        else
        {
            _to = env.Null();
        }

        return _to;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation NurbsCopy failed with error: " << Error::GetSolidErrorResId(_result);
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("code", Napi::Number::New(env, _result));
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ActionCurve3D::NurbsCopy_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Curve3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Curve3D curve is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'curve'"));
        return deferred.Promise();
    }
    const class Curve3D *curve_ = Curve3D::Unwrap(info[0].ToObject());

    const MbCurve3D &curve = *curve_->_underlying;

    ActionCurve3D_NurbsCopy_AsyncWorker *asyncWorker = new ActionCurve3D_NurbsCopy_AsyncWorker(deferred,

                                                                                               curve);
    asyncWorker->Queue();
    return deferred.Promise();
}

ActionCurve3D_Arc_AsyncWorker::ActionCurve3D_Arc_AsyncWorker(Napi::Promise::Deferred const &d,
                                                             const MbCartPoint3D &centre,
                                                             const SArray<MbCartPoint3D> &points, bool curveClosed,
                                                             double angle, double &a, double &b)
    : PromiseWorker(d), centre(centre), points(points), curveClosed(curveClosed), angle(angle), a(a), b(b){};

void ActionCurve3D_Arc_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCurve3D *result = NULL;

    MbResultType _result = ::Arc(centre, points, curveClosed, angle, a, b, result);

    this->resultType = _result;
    if (_result == rt_Success)
    {

        this->result = result;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation Arc failed with error: " << Error::GetSolidErrorResId(_result);
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ActionCurve3D_Arc_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbCurve3D *result = this->result;
    if (result != NULL)
    {
        _to = Curve3D::NewInstance(env, (MbCurve3D *)result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void ActionCurve3D_Arc_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionCurve3D_Segment_AsyncWorker::ActionCurve3D_Segment_AsyncWorker(Napi::Promise::Deferred const &d,
                                                                     const MbCartPoint3D &point1,
                                                                     const MbCartPoint3D &point2)
    : PromiseWorker(d), point1(point1), point2(point2){};

void ActionCurve3D_Segment_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCurve3D *result = NULL;

    MbResultType _result = ::Segment(point1, point2, result);

    this->resultType = _result;
    if (_result == rt_Success)
    {

        this->result = result;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation Segment failed with error: " << Error::GetSolidErrorResId(_result);
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ActionCurve3D_Segment_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbCurve3D *result = this->result;
    if (result != NULL)
    {
        _to = Curve3D::NewInstance(env, (MbCurve3D *)result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void ActionCurve3D_Segment_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionCurve3D_SplineCurve_AsyncWorker::ActionCurve3D_SplineCurve_AsyncWorker(Napi::Promise::Deferred const &d,
                                                                             const SArray<MbCartPoint3D> &points,
                                                                             bool closed, MbeSpaceType curveType)
    : PromiseWorker(d), points(points), closed(closed), curveType(curveType){};

void ActionCurve3D_SplineCurve_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCurve3D *result = NULL;

    MbResultType _result = ::SplineCurve(points, closed, curveType, result);

    this->resultType = _result;
    if (_result == rt_Success)
    {

        this->result = result;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation SplineCurve failed with error: " << Error::GetSolidErrorResId(_result);
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ActionCurve3D_SplineCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbCurve3D *result = this->result;
    if (result != NULL)
    {
        _to = Curve3D::NewInstance(env, (MbCurve3D *)result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void ActionCurve3D_SplineCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionCurve3D_CreateContour_AsyncWorker::ActionCurve3D_CreateContour_AsyncWorker(Napi::Promise::Deferred const &d,
                                                                                 MbCurve3D &curve)
    : PromiseWorker(d), curve(curve){};

void ActionCurve3D_CreateContour_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbContour3D *result = NULL;

    MbResultType _result = ::CreateContour(curve, result);

    this->resultType = _result;
    if (_result == rt_Success)
    {

        this->result = result;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation CreateContour failed with error: " << Error::GetSolidErrorResId(_result);
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ActionCurve3D_CreateContour_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbContour3D *result = this->result;
    if (result != NULL)
    {
        _to = Contour3D::NewInstance(env, (MbContour3D *)result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void ActionCurve3D_CreateContour_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionCurve3D_AddCurveToContour_AsyncWorker::ActionCurve3D_AddCurveToContour_AsyncWorker(
    Napi::Promise::Deferred const &d, MbCurve3D &curve, MbCurve3D &contour, bool toEnd)
    : PromiseWorker(d), curve(curve), contour(contour), toEnd(toEnd){};

void ActionCurve3D_AddCurveToContour_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbResultType _result = ::AddCurveToContour(curve, contour, toEnd);

    this->resultType = _result;
    if (_result == rt_Success)
    {
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation AddCurveToContour failed with error: " << Error::GetSolidErrorResId(_result);
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ActionCurve3D_AddCurveToContour_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void ActionCurve3D_AddCurveToContour_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                         Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionCurve3D_RegularPolygon_AsyncWorker::ActionCurve3D_RegularPolygon_AsyncWorker(Napi::Promise::Deferred const &d,
                                                                                   const MbCartPoint3D &centre,
                                                                                   const MbCartPoint3D &point,
                                                                                   const MbVector3D &axisZ,
                                                                                   size_t vertexCount, bool describe)
    : PromiseWorker(d), centre(centre), point(point), axisZ(axisZ), vertexCount(vertexCount), describe(describe){};

void ActionCurve3D_RegularPolygon_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCurve3D *result = NULL;

    MbResultType _result = ::RegularPolygon(centre, point, axisZ, vertexCount, describe, result);

    this->resultType = _result;
    if (_result == rt_Success)
    {

        this->result = result;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation RegularPolygon failed with error: " << Error::GetSolidErrorResId(_result);
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ActionCurve3D_RegularPolygon_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbCurve3D *result = this->result;
    if (result != NULL)
    {
        _to = Curve3D::NewInstance(env, (MbCurve3D *)result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void ActionCurve3D_RegularPolygon_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionCurve3D_SpiralCurve_AsyncWorker::ActionCurve3D_SpiralCurve_AsyncWorker(
    Napi::Promise::Deferred const &d, const MbCartPoint3D &point0, const MbCartPoint3D &point1,
    const MbCartPoint3D &point2, double radius, double step, double angle, MbCurve *lawCurve, bool spiralAxis)
    : PromiseWorker(d), point0(point0), point1(point1), point2(point2), radius(radius), step(step), angle(angle),
      lawCurve(lawCurve), spiralAxis(spiralAxis){};

void ActionCurve3D_SpiralCurve_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCurve3D *result = NULL;

    MbResultType _result = ::SpiralCurve(point0, point1, point2, radius, step, angle, lawCurve, spiralAxis, result);

    this->resultType = _result;
    if (_result == rt_Success)
    {

        this->result = result;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation SpiralCurve failed with error: " << Error::GetSolidErrorResId(_result);
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ActionCurve3D_SpiralCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbCurve3D *result = this->result;
    if (result != NULL)
    {
        _to = Curve3D::NewInstance(env, (MbCurve3D *)result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void ActionCurve3D_SpiralCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionCurve3D_CreateContours_AsyncWorker::ActionCurve3D_CreateContours_AsyncWorker(Napi::Promise::Deferred const &d,
                                                                                   RPArray<MbCurve3D> &curves,
                                                                                   double metricEps,
                                                                                   bool onlySmoothConnected,
                                                                                   VERSION version)
    : PromiseWorker(d), curves(curves), metricEps(metricEps), onlySmoothConnected(onlySmoothConnected),
      version(version){};

void ActionCurve3D_CreateContours_AsyncWorker::Execute()
{
    EnterParallelRegion();

    RPArray<MbContour3D> *result = new RPArray<MbContour3D>;

    MbResultType _result = ::CreateContours(curves, metricEps, *result, onlySmoothConnected, version);

    this->resultType = _result;
    if (_result == rt_Success)
    {

        this->result = result;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation CreateContours failed with error: " << Error::GetSolidErrorResId(_result);
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ActionCurve3D_CreateContours_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    RPArray<MbContour3D> *result = this->result;
    Napi::Array arr_result = Napi::Array::New(env);
    for (size_t i = 0; i < result->Count(); i++)
    {
        arr_result[i] = Contour3D::NewInstance(env,

                                               (*result)[i]

        );
    }
    _to = arr_result;

    deferred.Resolve(_to);
}

void ActionCurve3D_CreateContours_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionCurve3D_PlaneCurve_AsyncWorker::ActionCurve3D_PlaneCurve_AsyncWorker(Napi::Promise::Deferred const &d,
                                                                           const MbPlacement3D &place,
                                                                           const MbCurve &curve)
    : PromiseWorker(d), place(place), curve(curve){};

void ActionCurve3D_PlaneCurve_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCurve3D *result = NULL;

    MbResultType _result = ::PlaneCurve(place, curve, result);

    this->resultType = _result;
    if (_result == rt_Success)
    {

        this->result = result;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation PlaneCurve failed with error: " << Error::GetSolidErrorResId(_result);
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ActionCurve3D_PlaneCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbCurve3D *result = this->result;
    if (result != NULL)
    {
        _to = Curve3D::NewInstance(env, (MbCurve3D *)result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void ActionCurve3D_PlaneCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionCurve3D_DuplicateCurve_AsyncWorker::ActionCurve3D_DuplicateCurve_AsyncWorker(Napi::Promise::Deferred const &d,
                                                                                   const MbCurve3D &curve,
                                                                                   VERSION version)
    : PromiseWorker(d), curve(curve), version(version){};

void ActionCurve3D_DuplicateCurve_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCurve3D *_result = ::DuplicateCurve(curve, version);

    this->_result = _result;

    ExitParallelRegion();
}

void ActionCurve3D_DuplicateCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbCurve3D *_result = this->_result;
    if (_result != NULL)
    {
        _to = Curve3D::NewInstance(env, (MbCurve3D *)_result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void ActionCurve3D_DuplicateCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionCurve3D_NurbsCopy_AsyncWorker::ActionCurve3D_NurbsCopy_AsyncWorker(Napi::Promise::Deferred const &d,
                                                                         const MbCurve3D &curve)
    : PromiseWorker(d), curve(curve){};

void ActionCurve3D_NurbsCopy_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCurve3D *result = NULL;

    MbResultType _result = ::NurbsCopy(curve, result);

    this->resultType = _result;
    if (_result == rt_Success)
    {

        this->result = result;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation NurbsCopy failed with error: " << Error::GetSolidErrorResId(_result);
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ActionCurve3D_NurbsCopy_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbCurve3D *result = this->result;
    if (result != NULL)
    {
        _to = Curve3D::NewInstance(env, (MbCurve3D *)result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void ActionCurve3D_NurbsCopy_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
