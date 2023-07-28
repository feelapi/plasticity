// This is a generated file, modify: generate/templates/ActionCurve.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/ActionCurve.h"
#include "../include/Error.h"

#include "tool_mutex.h"

Napi::Object ActionCurve::Init(Napi::Env env, Napi::Object exports) {
    Napi::Object object = Napi::Object::New(env);

    object.Set("Arc", Napi::Function::New<&ActionCurve::Arc>(env));
    object.Set("Arc_async", Napi::Function::New<&ActionCurve::Arc_async>(env));
    object.Set("SplineCurve", Napi::Function::New<&ActionCurve::SplineCurve>(env));
    object.Set("SplineCurve_async", Napi::Function::New<&ActionCurve::SplineCurve_async>(env));
    object.Set("OffsetContour", Napi::Function::New<&ActionCurve::OffsetContour>(env));
    object.Set("OffsetContour_async", Napi::Function::New<&ActionCurve::OffsetContour_async>(env));
    object.Set("SurfaceBoundContour", Napi::Function::New<&ActionCurve::SurfaceBoundContour>(env));
    object.Set("SurfaceBoundContour_async", Napi::Function::New<&ActionCurve::SurfaceBoundContour_async>(env));
    object.Set("Line", Napi::Function::New<&ActionCurve::Line>(env));
    object.Set("Line_async", Napi::Function::New<&ActionCurve::Line_async>(env));
    object.Set("Segment", Napi::Function::New<&ActionCurve::Segment>(env));
    object.Set("Segment_async", Napi::Function::New<&ActionCurve::Segment_async>(env));
    object.Set("RegularPolygon", Napi::Function::New<&ActionCurve::RegularPolygon>(env));
    object.Set("RegularPolygon_async", Napi::Function::New<&ActionCurve::RegularPolygon_async>(env));
    object.Set("NurbsCopy", Napi::Function::New<&ActionCurve::NurbsCopy>(env));
    object.Set("NurbsCopy_async", Napi::Function::New<&ActionCurve::NurbsCopy_async>(env));
    object.Set("DuplicateCurve", Napi::Function::New<&ActionCurve::DuplicateCurve>(env));
    object.Set("DuplicateCurve_async", Napi::Function::New<&ActionCurve::DuplicateCurve_async>(env));

    exports.Set("ActionCurve", object);

    return exports;
}

        Napi::Value ActionCurve::Arc(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "CartPoint center is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsArray()
)) {
                    Napi::Error::New(env, "Array points is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 2 || !(
              info[2].IsBoolean()
)) {
                    Napi::Error::New(env, "boolean curveClosed is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 3 || !(
              info[3].IsNumber()
)) {
                    Napi::Error::New(env, "number angle is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 4 || !(
              info[4].IsNumber()
)) {
                    Napi::Error::New(env, "number a is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 5 || !(
              info[5].IsNumber()
)) {
                    Napi::Error::New(env, "number b is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                     MbCurve * result = NULL;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'center'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class CartPoint *center_ = CartPoint::Unwrap(info[0].ToObject());
        
        const MbCartPoint & center =*center_->_underlying;
        

                SArray<MbCartPoint>  points;
if (!(info[1].IsNull() || info[1].IsUndefined())) {
    const Napi::Array points_ = Napi::Array(env, info[1]);
        points =  SArray<MbCartPoint>(points_.Length(), 1);

    for (size_t i = 0; i < points_.Length(); i++) {
        if (points_[i].IsNull() || points_[i].IsUndefined()) {
            std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i << "]. This is probably a mistake, so skipping\n";
            continue;
        }
            if (!points_[i].IsObject() || !points_[i].ToObject().InstanceOf(CartPoint::GetConstructor(env))) {
                    Napi::Error::New(env, "CartPoint points is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            } else {
                points.Add(*CartPoint::Unwrap(points_[i].ToObject())->_underlying);
            }
    }
}


             bool curveClosed = info[2].ToBoolean();

             double angle = info[3].ToNumber().DoubleValue();

             double a = info[4].ToNumber().DoubleValue();

             double b = info[5].ToNumber().DoubleValue();



 MbResultType  _result = ::Arc
(
        center
,        points
,        curveClosed
,        angle
,        a
,        b
,        result

);


if (_result == rt_Success) {

    Napi::Value _to;

            if (result != NULL) {
        _to = Curve::NewInstance(env, (MbCurve *)result);
    } else {
        _to = env.Null();
    }

            return _to;

} else {
    std::ostringstream msg;
    msg << "Operation Arc failed with error: " << Error::GetSolidErrorResId(_result);
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("code", Napi::Number::New(env, _result));
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value ActionCurve::Arc_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "CartPoint center is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsArray()
)) {
                    deferred.Reject(Napi::String::New(env, "Array points is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 2 || !(
              info[2].IsBoolean()
)) {
                    deferred.Reject(Napi::String::New(env, "boolean curveClosed is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 3 || !(
              info[3].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number angle is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 4 || !(
              info[4].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number a is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 5 || !(
              info[5].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number b is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'center'"));
                return deferred.Promise();
        }
        const class CartPoint *center_ = CartPoint::Unwrap(info[0].ToObject());
        
        const MbCartPoint & center =*center_->_underlying;
        

                        SArray<MbCartPoint> * points;
if (!(info[1].IsNull() || info[1].IsUndefined())) {
    const Napi::Array points_ = Napi::Array(env, info[1]);
        points = new SArray<MbCartPoint>(points_.Length(), 1);

    for (size_t i = 0; i < points_.Length(); i++) {
        if (points_[i].IsNull() || points_[i].IsUndefined()) {
            std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i << "]. This is probably a mistake, so skipping\n";
            continue;
        }
            if (!points_[i].IsObject() || !points_[i].ToObject().InstanceOf(CartPoint::GetConstructor(env))) {
                    deferred.Reject(Napi::String::New(env, "CartPoint points is required."));
                    return deferred.Promise();
            } else {
                points->Add(*CartPoint::Unwrap(points_[i].ToObject())->_underlying);
            }
    }
}


                     bool curveClosed = info[2].ToBoolean();

                     double angle = info[3].ToNumber().DoubleValue();

                     double a = info[4].ToNumber().DoubleValue();

                     double b = info[5].ToNumber().DoubleValue();

        ActionCurve_Arc_AsyncWorker* asyncWorker = new ActionCurve_Arc_AsyncWorker(
            deferred
,
                
                center,
                                *points                ,
                
                curveClosed,
                
                angle,
                
                a,
                
                b        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ActionCurve::SplineCurve(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsArray()
)) {
                    Napi::Error::New(env, "Array points is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsBoolean()
)) {
                    Napi::Error::New(env, "boolean closed is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 2 || !(
              info[2].IsNumber()
)) {
                    Napi::Error::New(env, "PlaneType curveType is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                     MbCurve * result = NULL;


                SArray<MbCartPoint>  points;
if (!(info[0].IsNull() || info[0].IsUndefined())) {
    const Napi::Array points_ = Napi::Array(env, info[0]);
        points =  SArray<MbCartPoint>(points_.Length(), 1);

    for (size_t i = 0; i < points_.Length(); i++) {
        if (points_[i].IsNull() || points_[i].IsUndefined()) {
            std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i << "]. This is probably a mistake, so skipping\n";
            continue;
        }
            if (!points_[i].IsObject() || !points_[i].ToObject().InstanceOf(CartPoint::GetConstructor(env))) {
                    Napi::Error::New(env, "CartPoint points is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            } else {
                points.Add(*CartPoint::Unwrap(points_[i].ToObject())->_underlying);
            }
    }
}


             bool closed = info[1].ToBoolean();

            const MbePlaneType curveType = static_cast<MbePlaneType>(info[2].ToNumber().Uint32Value());



 MbResultType  _result = ::SplineCurve
(
        points
,        closed
,        curveType
,        result

);


if (_result == rt_Success) {

    Napi::Value _to;

            if (result != NULL) {
        _to = Curve::NewInstance(env, (MbCurve *)result);
    } else {
        _to = env.Null();
    }

            return _to;

} else {
    std::ostringstream msg;
    msg << "Operation SplineCurve failed with error: " << Error::GetSolidErrorResId(_result);
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("code", Napi::Number::New(env, _result));
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value ActionCurve::SplineCurve_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsArray()
)) {
                    deferred.Reject(Napi::String::New(env, "Array points is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsBoolean()
)) {
                    deferred.Reject(Napi::String::New(env, "boolean closed is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 2 || !(
              info[2].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "PlaneType curveType is required."));
                    return deferred.Promise();
            }


                        SArray<MbCartPoint> * points;
if (!(info[0].IsNull() || info[0].IsUndefined())) {
    const Napi::Array points_ = Napi::Array(env, info[0]);
        points = new SArray<MbCartPoint>(points_.Length(), 1);

    for (size_t i = 0; i < points_.Length(); i++) {
        if (points_[i].IsNull() || points_[i].IsUndefined()) {
            std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i << "]. This is probably a mistake, so skipping\n";
            continue;
        }
            if (!points_[i].IsObject() || !points_[i].ToObject().InstanceOf(CartPoint::GetConstructor(env))) {
                    deferred.Reject(Napi::String::New(env, "CartPoint points is required."));
                    return deferred.Promise();
            } else {
                points->Add(*CartPoint::Unwrap(points_[i].ToObject())->_underlying);
            }
    }
}


                     bool closed = info[1].ToBoolean();

                    const MbePlaneType curveType = static_cast<MbePlaneType>(info[2].ToNumber().Uint32Value());

        ActionCurve_SplineCurve_AsyncWorker* asyncWorker = new ActionCurve_SplineCurve_AsyncWorker(
            deferred
,
                                *points                ,
                
                closed,
                
                curveType        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ActionCurve::OffsetContour(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Contour::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Contour cntr is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    Napi::Error::New(env, "number rad is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 2 || !(
              info[2].IsNumber()
)) {
                    Napi::Error::New(env, "number xEpsilon is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 3 || !(
              info[3].IsNumber()
)) {
                    Napi::Error::New(env, "number yEpsilon is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 4 || !(
              info[4].IsBoolean()
)) {
                    Napi::Error::New(env, "boolean modifySegments is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'cntr'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Contour *cntr_ = Contour::Unwrap(info[0].ToObject());
        
        const MbContour & cntr =*cntr_->_underlying;
        

             double rad = info[1].ToNumber().DoubleValue();

             double xEpsilon = info[2].ToNumber().DoubleValue();

             double yEpsilon = info[3].ToNumber().DoubleValue();

             bool modifySegments = info[4].ToBoolean();

             int version = info[5].ToNumber().Int64Value();



 MbContour * _result = ::OffsetContour
(
        cntr
,        rad
,        xEpsilon
,        yEpsilon
,        modifySegments
,        info.Length() == 5 || info[5].IsNull() ? Math::DefaultMathVersion() : version

);



    Napi::Value _to;

            if (_result != NULL) {
        _to = Contour::NewInstance(env, (MbContour *)_result);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value ActionCurve::OffsetContour_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Contour::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Contour cntr is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number rad is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 2 || !(
              info[2].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number xEpsilon is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 3 || !(
              info[3].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number yEpsilon is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 4 || !(
              info[4].IsBoolean()
)) {
                    deferred.Reject(Napi::String::New(env, "boolean modifySegments is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'cntr'"));
                return deferred.Promise();
        }
        const class Contour *cntr_ = Contour::Unwrap(info[0].ToObject());
        
        const MbContour & cntr =*cntr_->_underlying;
        

                     double rad = info[1].ToNumber().DoubleValue();

                     double xEpsilon = info[2].ToNumber().DoubleValue();

                     double yEpsilon = info[3].ToNumber().DoubleValue();

                     bool modifySegments = info[4].ToBoolean();

                     int version = info[5].ToNumber().Int64Value();

        ActionCurve_OffsetContour_AsyncWorker* asyncWorker = new ActionCurve_OffsetContour_AsyncWorker(
            deferred
,
                
                cntr,
                
                rad,
                
                xEpsilon,
                
                yEpsilon,
                
                modifySegments,
                
                version        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ActionCurve::SurfaceBoundContour(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Surface::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Surface surface is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(Curve3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Curve3D spaceCurve is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                     MbContour * result = NULL;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'surface'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Surface *surface_ = Surface::Unwrap(info[0].ToObject());
        
        const MbSurface & surface =*surface_->_underlying;
        

                if (info[1].IsNull() || info[1].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'spaceCurve'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Curve3D *spaceCurve_ = Curve3D::Unwrap(info[1].ToObject());
        
        const MbCurve3D & spaceCurve =*spaceCurve_->_underlying;
        

             int version = info[2].ToNumber().Int64Value();



 MbResultType  _result = ::SurfaceBoundContour
(
        surface
,        spaceCurve
,        info.Length() == 2 || info[2].IsNull() ? Math::DefaultMathVersion() : version
,        result

);


if (_result == rt_Success) {

    Napi::Value _to;

            if (result != NULL) {
        _to = Contour::NewInstance(env, (MbContour *)result);
    } else {
        _to = env.Null();
    }

            return _to;

} else {
    std::ostringstream msg;
    msg << "Operation SurfaceBoundContour failed with error: " << Error::GetSolidErrorResId(_result);
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("code", Napi::Number::New(env, _result));
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value ActionCurve::SurfaceBoundContour_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Surface::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Surface surface is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(Curve3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Curve3D spaceCurve is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'surface'"));
                return deferred.Promise();
        }
        const class Surface *surface_ = Surface::Unwrap(info[0].ToObject());
        
        const MbSurface & surface =*surface_->_underlying;
        

                        if (info[1].IsNull() || info[1].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'spaceCurve'"));
                return deferred.Promise();
        }
        const class Curve3D *spaceCurve_ = Curve3D::Unwrap(info[1].ToObject());
        
        const MbCurve3D & spaceCurve =*spaceCurve_->_underlying;
        

                     int version = info[2].ToNumber().Int64Value();

        ActionCurve_SurfaceBoundContour_AsyncWorker* asyncWorker = new ActionCurve_SurfaceBoundContour_AsyncWorker(
            deferred
,
                
                surface,
                
                spaceCurve,
                
                version        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ActionCurve::Line(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "CartPoint point1 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(CartPoint::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "CartPoint point2 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                     MbCurve * result = NULL;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'point1'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class CartPoint *point1_ = CartPoint::Unwrap(info[0].ToObject());
        
        const MbCartPoint & point1 =*point1_->_underlying;
        

                if (info[1].IsNull() || info[1].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'point2'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class CartPoint *point2_ = CartPoint::Unwrap(info[1].ToObject());
        
        const MbCartPoint & point2 =*point2_->_underlying;
        



 MbResultType  _result = ::Line
(
        point1
,        point2
,        result

);


if (_result == rt_Success) {

    Napi::Value _to;

            if (result != NULL) {
        _to = Curve::NewInstance(env, (MbCurve *)result);
    } else {
        _to = env.Null();
    }

            return _to;

} else {
    std::ostringstream msg;
    msg << "Operation Line failed with error: " << Error::GetSolidErrorResId(_result);
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("code", Napi::Number::New(env, _result));
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value ActionCurve::Line_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "CartPoint point1 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(CartPoint::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "CartPoint point2 is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'point1'"));
                return deferred.Promise();
        }
        const class CartPoint *point1_ = CartPoint::Unwrap(info[0].ToObject());
        
        const MbCartPoint & point1 =*point1_->_underlying;
        

                        if (info[1].IsNull() || info[1].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'point2'"));
                return deferred.Promise();
        }
        const class CartPoint *point2_ = CartPoint::Unwrap(info[1].ToObject());
        
        const MbCartPoint & point2 =*point2_->_underlying;
        

        ActionCurve_Line_AsyncWorker* asyncWorker = new ActionCurve_Line_AsyncWorker(
            deferred
,
                
                point1,
                
                point2        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ActionCurve::Segment(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "CartPoint point1 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(CartPoint::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "CartPoint point2 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                     MbCurve * result = NULL;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'point1'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class CartPoint *point1_ = CartPoint::Unwrap(info[0].ToObject());
        
        const MbCartPoint & point1 =*point1_->_underlying;
        

                if (info[1].IsNull() || info[1].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'point2'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class CartPoint *point2_ = CartPoint::Unwrap(info[1].ToObject());
        
        const MbCartPoint & point2 =*point2_->_underlying;
        



 MbResultType  _result = ::Segment
(
        point1
,        point2
,        result

);


if (_result == rt_Success) {

    Napi::Value _to;

            if (result != NULL) {
        _to = Curve::NewInstance(env, (MbCurve *)result);
    } else {
        _to = env.Null();
    }

            return _to;

} else {
    std::ostringstream msg;
    msg << "Operation Segment failed with error: " << Error::GetSolidErrorResId(_result);
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("code", Napi::Number::New(env, _result));
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value ActionCurve::Segment_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "CartPoint point1 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(CartPoint::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "CartPoint point2 is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'point1'"));
                return deferred.Promise();
        }
        const class CartPoint *point1_ = CartPoint::Unwrap(info[0].ToObject());
        
        const MbCartPoint & point1 =*point1_->_underlying;
        

                        if (info[1].IsNull() || info[1].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'point2'"));
                return deferred.Promise();
        }
        const class CartPoint *point2_ = CartPoint::Unwrap(info[1].ToObject());
        
        const MbCartPoint & point2 =*point2_->_underlying;
        

        ActionCurve_Segment_AsyncWorker* asyncWorker = new ActionCurve_Segment_AsyncWorker(
            deferred
,
                
                point1,
                
                point2        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ActionCurve::RegularPolygon(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "CartPoint centre is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(CartPoint::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "CartPoint point is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 2 || !(
              info[2].IsNumber()
)) {
                    Napi::Error::New(env, "number vertexCount is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 3 || !(
              info[3].IsBoolean()
)) {
                    Napi::Error::New(env, "boolean describe is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                     MbCurve * result = NULL;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'centre'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class CartPoint *centre_ = CartPoint::Unwrap(info[0].ToObject());
        
        const MbCartPoint & centre =*centre_->_underlying;
        

                if (info[1].IsNull() || info[1].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'point'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class CartPoint *point_ = CartPoint::Unwrap(info[1].ToObject());
        
        const MbCartPoint & point =*point_->_underlying;
        

             size_t vertexCount = info[2].ToNumber().Int64Value();

             bool describe = info[3].ToBoolean();



 MbResultType  _result = ::RegularPolygon
(
        centre
,        point
,        vertexCount
,        describe
,        result

);


if (_result == rt_Success) {

    Napi::Value _to;

            if (result != NULL) {
        _to = Curve::NewInstance(env, (MbCurve *)result);
    } else {
        _to = env.Null();
    }

            return _to;

} else {
    std::ostringstream msg;
    msg << "Operation RegularPolygon failed with error: " << Error::GetSolidErrorResId(_result);
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("code", Napi::Number::New(env, _result));
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value ActionCurve::RegularPolygon_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "CartPoint centre is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(CartPoint::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "CartPoint point is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 2 || !(
              info[2].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number vertexCount is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 3 || !(
              info[3].IsBoolean()
)) {
                    deferred.Reject(Napi::String::New(env, "boolean describe is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'centre'"));
                return deferred.Promise();
        }
        const class CartPoint *centre_ = CartPoint::Unwrap(info[0].ToObject());
        
        const MbCartPoint & centre =*centre_->_underlying;
        

                        if (info[1].IsNull() || info[1].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'point'"));
                return deferred.Promise();
        }
        const class CartPoint *point_ = CartPoint::Unwrap(info[1].ToObject());
        
        const MbCartPoint & point =*point_->_underlying;
        

                     size_t vertexCount = info[2].ToNumber().Int64Value();

                     bool describe = info[3].ToBoolean();

        ActionCurve_RegularPolygon_AsyncWorker* asyncWorker = new ActionCurve_RegularPolygon_AsyncWorker(
            deferred
,
                
                centre,
                
                point,
                
                vertexCount,
                
                describe        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ActionCurve::NurbsCopy(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Curve::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Curve curve is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                     MbCurve * result = NULL;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'curve'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Curve *curve_ = Curve::Unwrap(info[0].ToObject());
        
        const MbCurve & curve =*curve_->_underlying;
        



 MbResultType  _result = ::NurbsCopy
(
        curve
,        result

);


if (_result == rt_Success) {

    Napi::Value _to;

            if (result != NULL) {
        _to = Curve::NewInstance(env, (MbCurve *)result);
    } else {
        _to = env.Null();
    }

            return _to;

} else {
    std::ostringstream msg;
    msg << "Operation NurbsCopy failed with error: " << Error::GetSolidErrorResId(_result);
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("code", Napi::Number::New(env, _result));
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value ActionCurve::NurbsCopy_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Curve::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Curve curve is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'curve'"));
                return deferred.Promise();
        }
        const class Curve *curve_ = Curve::Unwrap(info[0].ToObject());
        
        const MbCurve & curve =*curve_->_underlying;
        

        ActionCurve_NurbsCopy_AsyncWorker* asyncWorker = new ActionCurve_NurbsCopy_AsyncWorker(
            deferred
,
                
                curve        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ActionCurve::DuplicateCurve(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Curve::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Curve curve is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'curve'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Curve *curve_ = Curve::Unwrap(info[0].ToObject());
        
        const MbCurve & curve =*curve_->_underlying;
        

             int version = info[1].ToNumber().Int64Value();



 MbCurve * _result = ::DuplicateCurve
(
        curve
,        info.Length() == 1 || info[1].IsNull() ? Math::DefaultMathVersion() : version

);



    Napi::Value _to;

            if (_result != NULL) {
        _to = Curve::NewInstance(env, (MbCurve *)_result);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value ActionCurve::DuplicateCurve_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Curve::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Curve curve is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'curve'"));
                return deferred.Promise();
        }
        const class Curve *curve_ = Curve::Unwrap(info[0].ToObject());
        
        const MbCurve & curve =*curve_->_underlying;
        

                     int version = info[1].ToNumber().Int64Value();

        ActionCurve_DuplicateCurve_AsyncWorker* asyncWorker = new ActionCurve_DuplicateCurve_AsyncWorker(
            deferred
,
                
                curve,
                
                version        );
        asyncWorker->Queue();
        return deferred.Promise();
    }


    ActionCurve_Arc_AsyncWorker::ActionCurve_Arc_AsyncWorker(
        Napi::Promise::Deferred const &d
,
                        const MbCartPoint & center,
                        const SArray<MbCartPoint> & points,
                         bool  curveClosed,
                         double  angle,
                         double & a,
                         double & b    )
        :PromiseWorker(d),
                        center(center)
,
                        points(points)
,
                        curveClosed(curveClosed)
,
                        angle(angle)
,
                        a(a)
,
                        b(b)
{};

    void ActionCurve_Arc_AsyncWorker::Execute() {
        EnterParallelRegion();

                 MbCurve * result = NULL;


        
         MbResultType  _result = ::Arc(
                        center
,                        points
,                        curveClosed
,                        angle
,                        a
,                        b
,                        result
        );

        this->resultType = _result;
        if (_result == rt_Success) {

                this->result = result;

                } else {
            std::ostringstream msg;
            msg << "Operation Arc failed with error: " << Error::GetSolidErrorResId(_result);
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void ActionCurve_Arc_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbCurve * result = this->result;
                if (result != NULL) {
        _to = Curve::NewInstance(env, (MbCurve *)result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void ActionCurve_Arc_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ActionCurve_SplineCurve_AsyncWorker::ActionCurve_SplineCurve_AsyncWorker(
        Napi::Promise::Deferred const &d
,
                        const SArray<MbCartPoint> & points,
                         bool  closed,
                         MbePlaneType  curveType    )
        :PromiseWorker(d),
                        points(points)
,
                        closed(closed)
,
                        curveType(curveType)
{};

    void ActionCurve_SplineCurve_AsyncWorker::Execute() {
        EnterParallelRegion();

                 MbCurve * result = NULL;


        
         MbResultType  _result = ::SplineCurve(
                        points
,                        closed
,                        curveType
,                        result
        );

        this->resultType = _result;
        if (_result == rt_Success) {

                this->result = result;

                } else {
            std::ostringstream msg;
            msg << "Operation SplineCurve failed with error: " << Error::GetSolidErrorResId(_result);
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void ActionCurve_SplineCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbCurve * result = this->result;
                if (result != NULL) {
        _to = Curve::NewInstance(env, (MbCurve *)result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void ActionCurve_SplineCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ActionCurve_OffsetContour_AsyncWorker::ActionCurve_OffsetContour_AsyncWorker(
        Napi::Promise::Deferred const &d
,
                        const MbContour & cntr,
                         double  rad,
                         double  xEpsilon,
                         double  yEpsilon,
                         bool  modifySegments,
                         VERSION  version    )
        :PromiseWorker(d),
                        cntr(cntr)
,
                        rad(rad)
,
                        xEpsilon(xEpsilon)
,
                        yEpsilon(yEpsilon)
,
                        modifySegments(modifySegments)
,
                        version(version)
{};

    void ActionCurve_OffsetContour_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbContour * _result = ::OffsetContour(
                        cntr
,                        rad
,                        xEpsilon
,                        yEpsilon
,                        modifySegments
,                        version
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void ActionCurve_OffsetContour_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbContour * _result = this->_result;
                if (_result != NULL) {
        _to = Contour::NewInstance(env, (MbContour *)_result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void ActionCurve_OffsetContour_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ActionCurve_SurfaceBoundContour_AsyncWorker::ActionCurve_SurfaceBoundContour_AsyncWorker(
        Napi::Promise::Deferred const &d
,
                        const MbSurface & surface,
                        const MbCurve3D & spaceCurve,
                         VERSION  version    )
        :PromiseWorker(d),
                        surface(surface)
,
                        spaceCurve(spaceCurve)
,
                        version(version)
{};

    void ActionCurve_SurfaceBoundContour_AsyncWorker::Execute() {
        EnterParallelRegion();

                 MbContour * result = NULL;


        
         MbResultType  _result = ::SurfaceBoundContour(
                        surface
,                        spaceCurve
,                        version
,                        result
        );

        this->resultType = _result;
        if (_result == rt_Success) {

                this->result = result;

                } else {
            std::ostringstream msg;
            msg << "Operation SurfaceBoundContour failed with error: " << Error::GetSolidErrorResId(_result);
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void ActionCurve_SurfaceBoundContour_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbContour * result = this->result;
                if (result != NULL) {
        _to = Contour::NewInstance(env, (MbContour *)result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void ActionCurve_SurfaceBoundContour_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ActionCurve_Line_AsyncWorker::ActionCurve_Line_AsyncWorker(
        Napi::Promise::Deferred const &d
,
                        const MbCartPoint & point1,
                        const MbCartPoint & point2    )
        :PromiseWorker(d),
                        point1(point1)
,
                        point2(point2)
{};

    void ActionCurve_Line_AsyncWorker::Execute() {
        EnterParallelRegion();

                 MbCurve * result = NULL;


        
         MbResultType  _result = ::Line(
                        point1
,                        point2
,                        result
        );

        this->resultType = _result;
        if (_result == rt_Success) {

                this->result = result;

                } else {
            std::ostringstream msg;
            msg << "Operation Line failed with error: " << Error::GetSolidErrorResId(_result);
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void ActionCurve_Line_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbCurve * result = this->result;
                if (result != NULL) {
        _to = Curve::NewInstance(env, (MbCurve *)result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void ActionCurve_Line_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ActionCurve_Segment_AsyncWorker::ActionCurve_Segment_AsyncWorker(
        Napi::Promise::Deferred const &d
,
                        const MbCartPoint & point1,
                        const MbCartPoint & point2    )
        :PromiseWorker(d),
                        point1(point1)
,
                        point2(point2)
{};

    void ActionCurve_Segment_AsyncWorker::Execute() {
        EnterParallelRegion();

                 MbCurve * result = NULL;


        
         MbResultType  _result = ::Segment(
                        point1
,                        point2
,                        result
        );

        this->resultType = _result;
        if (_result == rt_Success) {

                this->result = result;

                } else {
            std::ostringstream msg;
            msg << "Operation Segment failed with error: " << Error::GetSolidErrorResId(_result);
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void ActionCurve_Segment_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbCurve * result = this->result;
                if (result != NULL) {
        _to = Curve::NewInstance(env, (MbCurve *)result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void ActionCurve_Segment_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ActionCurve_RegularPolygon_AsyncWorker::ActionCurve_RegularPolygon_AsyncWorker(
        Napi::Promise::Deferred const &d
,
                        const MbCartPoint & centre,
                        const MbCartPoint & point,
                         size_t  vertexCount,
                         bool  describe    )
        :PromiseWorker(d),
                        centre(centre)
,
                        point(point)
,
                        vertexCount(vertexCount)
,
                        describe(describe)
{};

    void ActionCurve_RegularPolygon_AsyncWorker::Execute() {
        EnterParallelRegion();

                 MbCurve * result = NULL;


        
         MbResultType  _result = ::RegularPolygon(
                        centre
,                        point
,                        vertexCount
,                        describe
,                        result
        );

        this->resultType = _result;
        if (_result == rt_Success) {

                this->result = result;

                } else {
            std::ostringstream msg;
            msg << "Operation RegularPolygon failed with error: " << Error::GetSolidErrorResId(_result);
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void ActionCurve_RegularPolygon_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbCurve * result = this->result;
                if (result != NULL) {
        _to = Curve::NewInstance(env, (MbCurve *)result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void ActionCurve_RegularPolygon_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ActionCurve_NurbsCopy_AsyncWorker::ActionCurve_NurbsCopy_AsyncWorker(
        Napi::Promise::Deferred const &d
,
                        const MbCurve & curve    )
        :PromiseWorker(d),
                        curve(curve)
{};

    void ActionCurve_NurbsCopy_AsyncWorker::Execute() {
        EnterParallelRegion();

                 MbCurve * result = NULL;


        
         MbResultType  _result = ::NurbsCopy(
                        curve
,                        result
        );

        this->resultType = _result;
        if (_result == rt_Success) {

                this->result = result;

                } else {
            std::ostringstream msg;
            msg << "Operation NurbsCopy failed with error: " << Error::GetSolidErrorResId(_result);
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void ActionCurve_NurbsCopy_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbCurve * result = this->result;
                if (result != NULL) {
        _to = Curve::NewInstance(env, (MbCurve *)result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void ActionCurve_NurbsCopy_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ActionCurve_DuplicateCurve_AsyncWorker::ActionCurve_DuplicateCurve_AsyncWorker(
        Napi::Promise::Deferred const &d
,
                        const MbCurve & curve,
                         VERSION  version    )
        :PromiseWorker(d),
                        curve(curve)
,
                        version(version)
{};

    void ActionCurve_DuplicateCurve_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbCurve * _result = ::DuplicateCurve(
                        curve
,                        version
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void ActionCurve_DuplicateCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbCurve * _result = this->_result;
                if (_result != NULL) {
        _to = Curve::NewInstance(env, (MbCurve *)_result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void ActionCurve_DuplicateCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

