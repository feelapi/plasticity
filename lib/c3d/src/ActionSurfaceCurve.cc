// This is a generated file, modify: generate/templates/ActionSurfaceCurve.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/ActionSurfaceCurve.h"
#include "../include/Error.h"

#include "tool_mutex.h"

Napi::Object ActionSurfaceCurve::Init(Napi::Env env, Napi::Object exports) {
    Napi::Object object = Napi::Object::New(env);

    object.Set("CreateContourFillets", Napi::Function::New<&ActionSurfaceCurve::CreateContourFillets>(env));
    object.Set("CreateContourFillets_async", Napi::Function::New<&ActionSurfaceCurve::CreateContourFillets_async>(env));
    object.Set("OffsetPlaneCurve", Napi::Function::New<&ActionSurfaceCurve::OffsetPlaneCurve>(env));
    object.Set("OffsetPlaneCurve_async", Napi::Function::New<&ActionSurfaceCurve::OffsetPlaneCurve_async>(env));
    object.Set("OffsetSurfaceCurve", Napi::Function::New<&ActionSurfaceCurve::OffsetSurfaceCurve>(env));
    object.Set("OffsetSurfaceCurve_async", Napi::Function::New<&ActionSurfaceCurve::OffsetSurfaceCurve_async>(env));
    object.Set("OffsetCurve", Napi::Function::New<&ActionSurfaceCurve::OffsetCurve>(env));
    object.Set("OffsetCurve_async", Napi::Function::New<&ActionSurfaceCurve::OffsetCurve_async>(env));
    object.Set("FilletCurve", Napi::Function::New<&ActionSurfaceCurve::FilletCurve>(env));
    object.Set("FilletCurve_async", Napi::Function::New<&ActionSurfaceCurve::FilletCurve_async>(env));
    object.Set("BridgeCurve", Napi::Function::New<&ActionSurfaceCurve::BridgeCurve>(env));
    object.Set("BridgeCurve_async", Napi::Function::New<&ActionSurfaceCurve::BridgeCurve_async>(env));
    object.Set("ConnectingSpline", Napi::Function::New<&ActionSurfaceCurve::ConnectingSpline>(env));
    object.Set("ConnectingSpline_async", Napi::Function::New<&ActionSurfaceCurve::ConnectingSpline_async>(env));
    object.Set("CurveProjection", Napi::Function::New<&ActionSurfaceCurve::CurveProjection>(env));
    object.Set("CurveProjection_async", Napi::Function::New<&ActionSurfaceCurve::CurveProjection_async>(env));

    exports.Set("ActionSurfaceCurve", object);

    return exports;
}

        Napi::Value ActionSurfaceCurve::CreateContourFillets(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Contour3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Contour3D contour is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsArray()
)) {
                    Napi::Error::New(env, "Array radiuses is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 2 || !(
              info[2].IsNumber()
)) {
                    Napi::Error::New(env, "ConnectingType type is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                     MbCurve3D * result = NULL;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'contour'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Contour3D *contour_ = Contour3D::Unwrap(info[0].ToObject());
        
        const MbContour3D & contour =*contour_->_underlying;
        

                SArray<double>  radiuses;
if (!(info[1].IsNull() || info[1].IsUndefined())) {
    const Napi::Array radiuses_ = Napi::Array(env, info[1]);
        radiuses =  SArray<double>(radiuses_.Length(), 1);

    for (size_t i = 0; i < radiuses_.Length(); i++) {
        if (radiuses_[i].IsNull() || radiuses_[i].IsUndefined()) {
            std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i << "]. This is probably a mistake, so skipping\n";
            continue;
        }
            if (!radiuses_[i].IsNumber()) {
                    Napi::Error::New(env, "number radiuses is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            } else {
                radiuses.Add(radiuses_[i].ToNumber().DoubleValue());
            }
    }
}


            const MbeConnectingType type = static_cast<MbeConnectingType>(info[2].ToNumber().Uint32Value());



 MbResultType  _result = ::CreateContourFillets
(
        contour
,        radiuses
,        result
,        type

);


if (_result == rt_Success) {

    Napi::Value _to;

            if (result != NULL) {
        _to = Curve3D::NewInstance(env, (MbCurve3D *)result);
    } else {
        _to = env.Null();
    }

            return _to;

} else {
    std::ostringstream msg;
    msg << "Operation CreateContourFillets failed with error: " << Error::GetSolidErrorResId(_result);
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("code", Napi::Number::New(env, _result));
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value ActionSurfaceCurve::CreateContourFillets_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Contour3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Contour3D contour is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsArray()
)) {
                    deferred.Reject(Napi::String::New(env, "Array radiuses is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 2 || !(
              info[2].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "ConnectingType type is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'contour'"));
                return deferred.Promise();
        }
        const class Contour3D *contour_ = Contour3D::Unwrap(info[0].ToObject());
        
        const MbContour3D & contour =*contour_->_underlying;
        

                        SArray<double> * radiuses;
if (!(info[1].IsNull() || info[1].IsUndefined())) {
    const Napi::Array radiuses_ = Napi::Array(env, info[1]);
        radiuses = new SArray<double>(radiuses_.Length(), 1);

    for (size_t i = 0; i < radiuses_.Length(); i++) {
        if (radiuses_[i].IsNull() || radiuses_[i].IsUndefined()) {
            std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i << "]. This is probably a mistake, so skipping\n";
            continue;
        }
            if (!radiuses_[i].IsNumber()) {
                    deferred.Reject(Napi::String::New(env, "number radiuses is required."));
                    return deferred.Promise();
            } else {
                radiuses->Add(radiuses_[i].ToNumber().DoubleValue());
            }
    }
}


                    const MbeConnectingType type = static_cast<MbeConnectingType>(info[2].ToNumber().Uint32Value());

        ActionSurfaceCurve_CreateContourFillets_AsyncWorker* asyncWorker = new ActionSurfaceCurve_CreateContourFillets_AsyncWorker(
            deferred
,
                
                contour,
                                *radiuses                ,
                
                type        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ActionSurfaceCurve::OffsetPlaneCurve(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Curve3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Curve3D curve is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    Napi::Error::New(env, "number dist is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                     MbCurve3D * result = NULL;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'curve'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Curve3D *curve_ = Curve3D::Unwrap(info[0].ToObject());
        
        const MbCurve3D & curve =*curve_->_underlying;
        

             double dist = info[1].ToNumber().DoubleValue();



 MbResultType  _result = ::OffsetPlaneCurve
(
        curve
,        dist
,        result

);


if (_result == rt_Success) {

    Napi::Value _to;

            if (result != NULL) {
        _to = Curve3D::NewInstance(env, (MbCurve3D *)result);
    } else {
        _to = env.Null();
    }

            return _to;

} else {
    std::ostringstream msg;
    msg << "Operation OffsetPlaneCurve failed with error: " << Error::GetSolidErrorResId(_result);
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("code", Napi::Number::New(env, _result));
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value ActionSurfaceCurve::OffsetPlaneCurve_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Curve3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Curve3D curve is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number dist is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'curve'"));
                return deferred.Promise();
        }
        const class Curve3D *curve_ = Curve3D::Unwrap(info[0].ToObject());
        
        const MbCurve3D & curve =*curve_->_underlying;
        

                     double dist = info[1].ToNumber().DoubleValue();

        ActionSurfaceCurve_OffsetPlaneCurve_AsyncWorker* asyncWorker = new ActionSurfaceCurve_OffsetPlaneCurve_AsyncWorker(
            deferred
,
                
                curve,
                
                dist        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ActionSurfaceCurve::OffsetSurfaceCurve(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Curve3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Curve3D curve is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(SurfaceOffsetCurveParams::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "SurfaceOffsetCurveParams params is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    SPtr<MbWireFrame> result;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'curve'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Curve3D *curve_ = Curve3D::Unwrap(info[0].ToObject());
        
        const MbCurve3D & curve =*curve_->_underlying;
        

                if (info[1].IsNull() || info[1].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'params'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class SurfaceOffsetCurveParams *params_ = SurfaceOffsetCurveParams::Unwrap(info[1].ToObject());
        
        const MbSurfaceOffsetCurveParams & params =*params_->_underlying;
        



 MbResultType  _result = ::OffsetCurve
(
        curve
,        params
,        result

);


if (_result == rt_Success) {

    Napi::Value _to;

            _to = WireFrame::NewInstance(env, result.detach());

            return _to;

} else {
    std::ostringstream msg;
    msg << "Operation OffsetCurve failed with error: " << Error::GetSolidErrorResId(_result);
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("code", Napi::Number::New(env, _result));
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value ActionSurfaceCurve::OffsetSurfaceCurve_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Curve3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Curve3D curve is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(SurfaceOffsetCurveParams::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "SurfaceOffsetCurveParams params is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'curve'"));
                return deferred.Promise();
        }
        const class Curve3D *curve_ = Curve3D::Unwrap(info[0].ToObject());
        
        const MbCurve3D & curve =*curve_->_underlying;
        

                        if (info[1].IsNull() || info[1].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'params'"));
                return deferred.Promise();
        }
        const class SurfaceOffsetCurveParams *params_ = SurfaceOffsetCurveParams::Unwrap(info[1].ToObject());
        
        const MbSurfaceOffsetCurveParams & params =*params_->_underlying;
        

        ActionSurfaceCurve_OffsetSurfaceCurve_AsyncWorker* asyncWorker = new ActionSurfaceCurve_OffsetSurfaceCurve_AsyncWorker(
            deferred
,
                
                curve,
                
                params        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ActionSurfaceCurve::OffsetCurve(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Curve3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Curve3D initCurve is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(SpatialOffsetCurveParams::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "SpatialOffsetCurveParams params is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    SPtr<MbWireFrame> result;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'initCurve'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Curve3D *initCurve_ = Curve3D::Unwrap(info[0].ToObject());
        
        const MbCurve3D & initCurve =*initCurve_->_underlying;
        

                if (info[1].IsNull() || info[1].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'params'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class SpatialOffsetCurveParams *params_ = SpatialOffsetCurveParams::Unwrap(info[1].ToObject());
        
        const MbSpatialOffsetCurveParams & params =*params_->_underlying;
        



 MbResultType  _result = ::OffsetCurve
(
        initCurve
,        params
,        result

);


if (_result == rt_Success) {

    Napi::Value _to;

            _to = WireFrame::NewInstance(env, result.detach());

            return _to;

} else {
    std::ostringstream msg;
    msg << "Operation OffsetCurve failed with error: " << Error::GetSolidErrorResId(_result);
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("code", Napi::Number::New(env, _result));
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value ActionSurfaceCurve::OffsetCurve_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Curve3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Curve3D initCurve is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(SpatialOffsetCurveParams::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "SpatialOffsetCurveParams params is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'initCurve'"));
                return deferred.Promise();
        }
        const class Curve3D *initCurve_ = Curve3D::Unwrap(info[0].ToObject());
        
        const MbCurve3D & initCurve =*initCurve_->_underlying;
        

                        if (info[1].IsNull() || info[1].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'params'"));
                return deferred.Promise();
        }
        const class SpatialOffsetCurveParams *params_ = SpatialOffsetCurveParams::Unwrap(info[1].ToObject());
        
        const MbSpatialOffsetCurveParams & params =*params_->_underlying;
        

        ActionSurfaceCurve_OffsetCurve_AsyncWorker* asyncWorker = new ActionSurfaceCurve_OffsetCurve_AsyncWorker(
            deferred
,
                
                initCurve,
                
                params        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ActionSurfaceCurve::FilletCurve(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Curve3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Curve3D curve1 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    Napi::Error::New(env, "number t1 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 2 || !(
              (info[2].IsObject() && info[2].ToObject().InstanceOf(Curve3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Curve3D curve2 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 3 || !(
              info[3].IsNumber()
)) {
                    Napi::Error::New(env, "number t2 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 4 || !(
              info[4].IsNumber()
)) {
                    Napi::Error::New(env, "number radius is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 5 || !(
              info[5].IsBoolean()
)) {
                    Napi::Error::New(env, "boolean sense is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 6 || !(
              info[6].IsNumber()
)) {
                    Napi::Error::New(env, "ConnectingType type is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 7 || !(
              (info[7].IsObject() && info[7].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "SNameMaker names is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    double w1;
        double w2;
        bool unchanged;
         MbElementarySurface * surface = NULL;
         MbWireFrame * result = NULL;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'curve1'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Curve3D *curve1_ = Curve3D::Unwrap(info[0].ToObject());
        
        const MbCurve3D & curve1 =*curve1_->_underlying;
        

             double t1 = info[1].ToNumber().DoubleValue();

                if (info[2].IsNull() || info[2].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'curve2'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Curve3D *curve2_ = Curve3D::Unwrap(info[2].ToObject());
        
        const MbCurve3D & curve2 =*curve2_->_underlying;
        

             double t2 = info[3].ToNumber().DoubleValue();

             double radius = info[4].ToNumber().DoubleValue();

             bool sense = info[5].ToBoolean();

            const MbeConnectingType type = static_cast<MbeConnectingType>(info[6].ToNumber().Uint32Value());

                if (info[7].IsNull() || info[7].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'names'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class SNameMaker *names_ = SNameMaker::Unwrap(info[7].ToObject());
        
        const MbSNameMaker & names =*names_->_underlying;
        



 MbResultType  _result = ::FilletCurve
(
        curve1
,        t1
,        w1
,        curve2
,        t2
,        w2
,        radius
,        sense
,        unchanged
,        type
,        names
,        surface
,        result

);


if (_result == rt_Success) {

        Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

            _to = Napi::Number::New(env, w1);

        _toReturn.Set(Napi::String::New(env, "w1"), _to);
            _to = Napi::Number::New(env, w2);

        _toReturn.Set(Napi::String::New(env, "w2"), _to);
            _to = Napi::Boolean::New(env, unchanged);

        _toReturn.Set(Napi::String::New(env, "unchanged"), _to);
            if (surface != NULL) {
        _to = ElementarySurface::NewInstance(env, (MbElementarySurface *)surface);
    } else {
        _to = env.Null();
    }

        _toReturn.Set(Napi::String::New(env, "surface"), _to);
            if (result != NULL) {
        _to = WireFrame::NewInstance(env, (MbWireFrame *)result);
    } else {
        _to = env.Null();
    }

        _toReturn.Set(Napi::String::New(env, "result"), _to);
            return _toReturn;

} else {
    std::ostringstream msg;
    msg << "Operation FilletCurve failed with error: " << Error::GetSolidErrorResId(_result);
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("code", Napi::Number::New(env, _result));
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value ActionSurfaceCurve::FilletCurve_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Curve3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Curve3D curve1 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t1 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 2 || !(
              (info[2].IsObject() && info[2].ToObject().InstanceOf(Curve3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Curve3D curve2 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 3 || !(
              info[3].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t2 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 4 || !(
              info[4].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number radius is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 5 || !(
              info[5].IsBoolean()
)) {
                    deferred.Reject(Napi::String::New(env, "boolean sense is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 6 || !(
              info[6].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "ConnectingType type is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 7 || !(
              (info[7].IsObject() && info[7].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "SNameMaker names is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'curve1'"));
                return deferred.Promise();
        }
        const class Curve3D *curve1_ = Curve3D::Unwrap(info[0].ToObject());
        
        const MbCurve3D & curve1 =*curve1_->_underlying;
        

                     double t1 = info[1].ToNumber().DoubleValue();

                        if (info[2].IsNull() || info[2].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'curve2'"));
                return deferred.Promise();
        }
        const class Curve3D *curve2_ = Curve3D::Unwrap(info[2].ToObject());
        
        const MbCurve3D & curve2 =*curve2_->_underlying;
        

                     double t2 = info[3].ToNumber().DoubleValue();

                     double radius = info[4].ToNumber().DoubleValue();

                     bool sense = info[5].ToBoolean();

                    const MbeConnectingType type = static_cast<MbeConnectingType>(info[6].ToNumber().Uint32Value());

                        if (info[7].IsNull() || info[7].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'names'"));
                return deferred.Promise();
        }
        const class SNameMaker *names_ = SNameMaker::Unwrap(info[7].ToObject());
        
        const MbSNameMaker & names =*names_->_underlying;
        

        ActionSurfaceCurve_FilletCurve_AsyncWorker* asyncWorker = new ActionSurfaceCurve_FilletCurve_AsyncWorker(
            deferred
,
                
                curve1,
                
                t1,
                
                curve2,
                
                t2,
                
                radius,
                
                sense,
                
                type,
                
                names        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ActionSurfaceCurve::BridgeCurve(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Curve3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Curve3D curve1 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    Napi::Error::New(env, "number t1 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 2 || !(
              info[2].IsBoolean()
)) {
                    Napi::Error::New(env, "boolean sense1 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 3 || !(
              (info[3].IsObject() && info[3].ToObject().InstanceOf(Curve3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Curve3D curve2 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 4 || !(
              info[4].IsNumber()
)) {
                    Napi::Error::New(env, "number t2 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 5 || !(
              info[5].IsBoolean()
)) {
                    Napi::Error::New(env, "boolean sense2 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 6 || !(
              (info[6].IsObject() && info[6].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "SNameMaker names is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                     MbWireFrame * result = NULL;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'curve1'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Curve3D *curve1_ = Curve3D::Unwrap(info[0].ToObject());
        
        const MbCurve3D & curve1 =*curve1_->_underlying;
        

             double t1 = info[1].ToNumber().DoubleValue();

             bool sense1 = info[2].ToBoolean();

                if (info[3].IsNull() || info[3].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'curve2'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Curve3D *curve2_ = Curve3D::Unwrap(info[3].ToObject());
        
        const MbCurve3D & curve2 =*curve2_->_underlying;
        

             double t2 = info[4].ToNumber().DoubleValue();

             bool sense2 = info[5].ToBoolean();

                if (info[6].IsNull() || info[6].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'names'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class SNameMaker *names_ = SNameMaker::Unwrap(info[6].ToObject());
        
        const MbSNameMaker & names =*names_->_underlying;
        



 MbResultType  _result = ::BridgeCurve
(
        curve1
,        t1
,        sense1
,        curve2
,        t2
,        sense2
,        names
,        result

);


if (_result == rt_Success) {

    Napi::Value _to;

            if (result != NULL) {
        _to = WireFrame::NewInstance(env, (MbWireFrame *)result);
    } else {
        _to = env.Null();
    }

            return _to;

} else {
    std::ostringstream msg;
    msg << "Operation BridgeCurve failed with error: " << Error::GetSolidErrorResId(_result);
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("code", Napi::Number::New(env, _result));
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value ActionSurfaceCurve::BridgeCurve_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Curve3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Curve3D curve1 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t1 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 2 || !(
              info[2].IsBoolean()
)) {
                    deferred.Reject(Napi::String::New(env, "boolean sense1 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 3 || !(
              (info[3].IsObject() && info[3].ToObject().InstanceOf(Curve3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Curve3D curve2 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 4 || !(
              info[4].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t2 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 5 || !(
              info[5].IsBoolean()
)) {
                    deferred.Reject(Napi::String::New(env, "boolean sense2 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 6 || !(
              (info[6].IsObject() && info[6].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "SNameMaker names is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'curve1'"));
                return deferred.Promise();
        }
        const class Curve3D *curve1_ = Curve3D::Unwrap(info[0].ToObject());
        
        const MbCurve3D & curve1 =*curve1_->_underlying;
        

                     double t1 = info[1].ToNumber().DoubleValue();

                     bool sense1 = info[2].ToBoolean();

                        if (info[3].IsNull() || info[3].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'curve2'"));
                return deferred.Promise();
        }
        const class Curve3D *curve2_ = Curve3D::Unwrap(info[3].ToObject());
        
        const MbCurve3D & curve2 =*curve2_->_underlying;
        

                     double t2 = info[4].ToNumber().DoubleValue();

                     bool sense2 = info[5].ToBoolean();

                        if (info[6].IsNull() || info[6].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'names'"));
                return deferred.Promise();
        }
        const class SNameMaker *names_ = SNameMaker::Unwrap(info[6].ToObject());
        
        const MbSNameMaker & names =*names_->_underlying;
        

        ActionSurfaceCurve_BridgeCurve_AsyncWorker* asyncWorker = new ActionSurfaceCurve_BridgeCurve_AsyncWorker(
            deferred
,
                
                curve1,
                
                t1,
                
                sense1,
                
                curve2,
                
                t2,
                
                sense2,
                
                names        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ActionSurfaceCurve::ConnectingSpline(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Curve3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Curve3D curve1 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    Napi::Error::New(env, "number t1 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 2 || !(
              info[2].IsNumber()
)) {
                    Napi::Error::New(env, "MatingType mating1 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 3 || !(
              (info[3].IsObject() && info[3].ToObject().InstanceOf(Curve3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Curve3D curve2 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 4 || !(
              info[4].IsNumber()
)) {
                    Napi::Error::New(env, "number t2 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 5 || !(
              info[5].IsNumber()
)) {
                    Napi::Error::New(env, "MatingType mating2 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 6 || !(
              info[6].IsNumber()
)) {
                    Napi::Error::New(env, "number tension1 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 7 || !(
              info[7].IsNumber()
)) {
                    Napi::Error::New(env, "number tension2 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 8 || !(
              (info[8].IsObject() && info[8].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "SNameMaker names is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                     MbWireFrame * result = NULL;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'curve1'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Curve3D *curve1_ = Curve3D::Unwrap(info[0].ToObject());
        
        const MbCurve3D & curve1 =*curve1_->_underlying;
        

             double t1 = info[1].ToNumber().DoubleValue();

            const MbeMatingType mating1 = static_cast<MbeMatingType>(info[2].ToNumber().Uint32Value());

                if (info[3].IsNull() || info[3].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'curve2'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Curve3D *curve2_ = Curve3D::Unwrap(info[3].ToObject());
        
        const MbCurve3D & curve2 =*curve2_->_underlying;
        

             double t2 = info[4].ToNumber().DoubleValue();

            const MbeMatingType mating2 = static_cast<MbeMatingType>(info[5].ToNumber().Uint32Value());

             double tension1 = info[6].ToNumber().DoubleValue();

             double tension2 = info[7].ToNumber().DoubleValue();

                if (info[8].IsNull() || info[8].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'names'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class SNameMaker *names_ = SNameMaker::Unwrap(info[8].ToObject());
        
        const MbSNameMaker & names =*names_->_underlying;
        



 MbResultType  _result = ::ConnectingSpline
(
        curve1
,        t1
,        mating1
,        curve2
,        t2
,        mating2
,        tension1
,        tension2
,        names
,        result

);


if (_result == rt_Success) {

    Napi::Value _to;

            if (result != NULL) {
        _to = WireFrame::NewInstance(env, (MbWireFrame *)result);
    } else {
        _to = env.Null();
    }

            return _to;

} else {
    std::ostringstream msg;
    msg << "Operation ConnectingSpline failed with error: " << Error::GetSolidErrorResId(_result);
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("code", Napi::Number::New(env, _result));
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value ActionSurfaceCurve::ConnectingSpline_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Curve3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Curve3D curve1 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t1 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 2 || !(
              info[2].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "MatingType mating1 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 3 || !(
              (info[3].IsObject() && info[3].ToObject().InstanceOf(Curve3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Curve3D curve2 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 4 || !(
              info[4].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t2 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 5 || !(
              info[5].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "MatingType mating2 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 6 || !(
              info[6].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number tension1 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 7 || !(
              info[7].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number tension2 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 8 || !(
              (info[8].IsObject() && info[8].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "SNameMaker names is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'curve1'"));
                return deferred.Promise();
        }
        const class Curve3D *curve1_ = Curve3D::Unwrap(info[0].ToObject());
        
        const MbCurve3D & curve1 =*curve1_->_underlying;
        

                     double t1 = info[1].ToNumber().DoubleValue();

                    const MbeMatingType mating1 = static_cast<MbeMatingType>(info[2].ToNumber().Uint32Value());

                        if (info[3].IsNull() || info[3].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'curve2'"));
                return deferred.Promise();
        }
        const class Curve3D *curve2_ = Curve3D::Unwrap(info[3].ToObject());
        
        const MbCurve3D & curve2 =*curve2_->_underlying;
        

                     double t2 = info[4].ToNumber().DoubleValue();

                    const MbeMatingType mating2 = static_cast<MbeMatingType>(info[5].ToNumber().Uint32Value());

                     double tension1 = info[6].ToNumber().DoubleValue();

                     double tension2 = info[7].ToNumber().DoubleValue();

                        if (info[8].IsNull() || info[8].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'names'"));
                return deferred.Promise();
        }
        const class SNameMaker *names_ = SNameMaker::Unwrap(info[8].ToObject());
        
        const MbSNameMaker & names =*names_->_underlying;
        

        ActionSurfaceCurve_ConnectingSpline_AsyncWorker* asyncWorker = new ActionSurfaceCurve_ConnectingSpline_AsyncWorker(
            deferred
,
                
                curve1,
                
                t1,
                
                mating1,
                
                curve2,
                
                t2,
                
                mating2,
                
                tension1,
                
                tension2,
                
                names        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ActionSurfaceCurve::CurveProjection(const Napi::CallbackInfo& info) {
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
                    Napi::Error::New(env, "Curve3D curve is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 2 || !(

              (info[2].IsNull() || info[2].IsUndefined()) ||
              (info[2].IsObject() && info[2].ToObject().InstanceOf(Vector3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Vector3D direction is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 3 || !(
              info[3].IsBoolean()
)) {
                    Napi::Error::New(env, "boolean createExact is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 4 || !(
              info[4].IsBoolean()
)) {
                    Napi::Error::New(env, "boolean truncateByBounds is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    RPArray<MbCurve3D> *result = new RPArray<MbCurve3D>;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'surface'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Surface *surface_ = Surface::Unwrap(info[0].ToObject());
        
        const MbSurface & surface =*surface_->_underlying;
        

                if (info[1].IsNull() || info[1].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'curve'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Curve3D *curve_ = Curve3D::Unwrap(info[1].ToObject());
        
        const MbCurve3D & curve =*curve_->_underlying;
        

                    MbVector3D * direction = NULL;
        if (!(info[2].IsNull() || info[2].IsUndefined())) {
            Vector3D *direction_ = Vector3D::Unwrap(info[2].ToObject());
                direction =   direction_->_underlying;
        }

             bool createExact = info[3].ToBoolean();

             bool truncateByBounds = info[4].ToBoolean();

             int version = info[5].ToNumber().Int64Value();



 MbResultType  _result = ::CurveProjection
(
        surface
,        curve
,        direction
,        createExact
,        truncateByBounds
,        *result
,        info.Length() == 5 || info[5].IsNull() ? Math::DefaultMathVersion() : version

);


if (_result == rt_Success) {

    Napi::Value _to;

            Napi::Array arr_result = Napi::Array::New(env);
    for (size_t i = 0; i < result->Count(); i++) {
            arr_result[i] = Curve3D::NewInstance(env,
                
                    (*result)[i]
                
            );
    }
    _to = arr_result;

            return _to;

} else {
    std::ostringstream msg;
    msg << "Operation CurveProjection failed with error: " << Error::GetSolidErrorResId(_result);
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("code", Napi::Number::New(env, _result));
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value ActionSurfaceCurve::CurveProjection_async(const Napi::CallbackInfo& info) {
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
                    deferred.Reject(Napi::String::New(env, "Curve3D curve is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 2 || !(

              (info[2].IsNull() || info[2].IsUndefined()) ||
              (info[2].IsObject() && info[2].ToObject().InstanceOf(Vector3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Vector3D direction is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 3 || !(
              info[3].IsBoolean()
)) {
                    deferred.Reject(Napi::String::New(env, "boolean createExact is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 4 || !(
              info[4].IsBoolean()
)) {
                    deferred.Reject(Napi::String::New(env, "boolean truncateByBounds is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'surface'"));
                return deferred.Promise();
        }
        const class Surface *surface_ = Surface::Unwrap(info[0].ToObject());
        
        const MbSurface & surface =*surface_->_underlying;
        

                        if (info[1].IsNull() || info[1].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'curve'"));
                return deferred.Promise();
        }
        const class Curve3D *curve_ = Curve3D::Unwrap(info[1].ToObject());
        
        const MbCurve3D & curve =*curve_->_underlying;
        

                            MbVector3D * direction = NULL;
        if (!(info[2].IsNull() || info[2].IsUndefined())) {
            Vector3D *direction_ = Vector3D::Unwrap(info[2].ToObject());
                direction =   direction_->_underlying;
        }

                     bool createExact = info[3].ToBoolean();

                     bool truncateByBounds = info[4].ToBoolean();

                     int version = info[5].ToNumber().Int64Value();

        ActionSurfaceCurve_CurveProjection_AsyncWorker* asyncWorker = new ActionSurfaceCurve_CurveProjection_AsyncWorker(
            deferred
,
                
                surface,
                
                curve,
                
                direction,
                
                createExact,
                
                truncateByBounds,
                
                version        );
        asyncWorker->Queue();
        return deferred.Promise();
    }


    ActionSurfaceCurve_CreateContourFillets_AsyncWorker::ActionSurfaceCurve_CreateContourFillets_AsyncWorker(
        Napi::Promise::Deferred const &d
,
                        const MbContour3D & contour,
                         SArray<double> & radiuses,
                        const MbeConnectingType  type    )
        :PromiseWorker(d),
                        contour(contour)
,
                        radiuses(radiuses)
,
                        type(type)
{};

    void ActionSurfaceCurve_CreateContourFillets_AsyncWorker::Execute() {
        EnterParallelRegion();

                 MbCurve3D * result = NULL;


        
         MbResultType  _result = ::CreateContourFillets(
                        contour
,                        radiuses
,                        result
,                        type
        );

        this->resultType = _result;
        if (_result == rt_Success) {

                this->result = result;

                } else {
            std::ostringstream msg;
            msg << "Operation CreateContourFillets failed with error: " << Error::GetSolidErrorResId(_result);
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void ActionSurfaceCurve_CreateContourFillets_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbCurve3D * result = this->result;
                if (result != NULL) {
        _to = Curve3D::NewInstance(env, (MbCurve3D *)result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void ActionSurfaceCurve_CreateContourFillets_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ActionSurfaceCurve_OffsetPlaneCurve_AsyncWorker::ActionSurfaceCurve_OffsetPlaneCurve_AsyncWorker(
        Napi::Promise::Deferred const &d
,
                        const MbCurve3D & curve,
                         double  dist    )
        :PromiseWorker(d),
                        curve(curve)
,
                        dist(dist)
{};

    void ActionSurfaceCurve_OffsetPlaneCurve_AsyncWorker::Execute() {
        EnterParallelRegion();

                 MbCurve3D * result = NULL;


        
         MbResultType  _result = ::OffsetPlaneCurve(
                        curve
,                        dist
,                        result
        );

        this->resultType = _result;
        if (_result == rt_Success) {

                this->result = result;

                } else {
            std::ostringstream msg;
            msg << "Operation OffsetPlaneCurve failed with error: " << Error::GetSolidErrorResId(_result);
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void ActionSurfaceCurve_OffsetPlaneCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbCurve3D * result = this->result;
                if (result != NULL) {
        _to = Curve3D::NewInstance(env, (MbCurve3D *)result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void ActionSurfaceCurve_OffsetPlaneCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ActionSurfaceCurve_OffsetSurfaceCurve_AsyncWorker::ActionSurfaceCurve_OffsetSurfaceCurve_AsyncWorker(
        Napi::Promise::Deferred const &d
,
                        const MbCurve3D & curve,
                        const MbSurfaceOffsetCurveParams & params    )
        :PromiseWorker(d),
                        curve(curve)
,
                        params(params)
{};

    void ActionSurfaceCurve_OffsetSurfaceCurve_AsyncWorker::Execute() {
        EnterParallelRegion();

                SPtr<MbWireFrame> result;


        
         MbResultType  _result = ::OffsetCurve(
                        curve
,                        params
,                        result
        );

        this->resultType = _result;
        if (_result == rt_Success) {

                this->result = result;

                } else {
            std::ostringstream msg;
            msg << "Operation OffsetSurfaceCurve failed with error: " << Error::GetSolidErrorResId(_result);
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void ActionSurfaceCurve_OffsetSurfaceCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            SPtr<MbWireFrame> result = this->result;
            result->AddRef();
                _to = WireFrame::NewInstance(env, result.detach());

            deferred.Resolve(_to);
    }

    void ActionSurfaceCurve_OffsetSurfaceCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ActionSurfaceCurve_OffsetCurve_AsyncWorker::ActionSurfaceCurve_OffsetCurve_AsyncWorker(
        Napi::Promise::Deferred const &d
,
                        const MbCurve3D & initCurve,
                        const MbSpatialOffsetCurveParams & params    )
        :PromiseWorker(d),
                        initCurve(initCurve)
,
                        params(params)
{};

    void ActionSurfaceCurve_OffsetCurve_AsyncWorker::Execute() {
        EnterParallelRegion();

                SPtr<MbWireFrame> result;


        
         MbResultType  _result = ::OffsetCurve(
                        initCurve
,                        params
,                        result
        );

        this->resultType = _result;
        if (_result == rt_Success) {

                this->result = result;

                } else {
            std::ostringstream msg;
            msg << "Operation OffsetCurve failed with error: " << Error::GetSolidErrorResId(_result);
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void ActionSurfaceCurve_OffsetCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            SPtr<MbWireFrame> result = this->result;
            result->AddRef();
                _to = WireFrame::NewInstance(env, result.detach());

            deferred.Resolve(_to);
    }

    void ActionSurfaceCurve_OffsetCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ActionSurfaceCurve_FilletCurve_AsyncWorker::ActionSurfaceCurve_FilletCurve_AsyncWorker(
        Napi::Promise::Deferred const &d
,
                        const MbCurve3D & curve1,
                         double & t1,
                        const MbCurve3D & curve2,
                         double & t2,
                         double & radius,
                         bool  sense,
                        const MbeConnectingType  type,
                        const MbSNameMaker & names    )
        :PromiseWorker(d),
                        curve1(curve1)
,
                        t1(t1)
,
                        curve2(curve2)
,
                        t2(t2)
,
                        radius(radius)
,
                        sense(sense)
,
                        type(type)
,
                        names(names)
{};

    void ActionSurfaceCurve_FilletCurve_AsyncWorker::Execute() {
        EnterParallelRegion();

                double w1;
        double w2;
        bool unchanged;
         MbElementarySurface * surface = NULL;
         MbWireFrame * result = NULL;


        
         MbResultType  _result = ::FilletCurve(
                        curve1
,                        t1
,                        w1
,                        curve2
,                        t2
,                        w2
,                        radius
,                        sense
,                        unchanged
,                        type
,                        names
,                        surface
,                        result
        );

        this->resultType = _result;
        if (_result == rt_Success) {

                this->w1 = w1;
                this->w2 = w2;
                this->unchanged = unchanged;
                this->surface = surface;
                this->result = result;

                } else {
            std::ostringstream msg;
            msg << "Operation FilletCurve failed with error: " << Error::GetSolidErrorResId(_result);
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void ActionSurfaceCurve_FilletCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            Napi::Object _toReturn = Napi::Object::New(env);

                 double  w1 = this->w1;
                    _to = Napi::Number::New(env, w1);

                _toReturn.Set(Napi::String::New(env, "w1"), _to);
                 double  w2 = this->w2;
                    _to = Napi::Number::New(env, w2);

                _toReturn.Set(Napi::String::New(env, "w2"), _to);
                 bool  unchanged = this->unchanged;
                    _to = Napi::Boolean::New(env, unchanged);

                _toReturn.Set(Napi::String::New(env, "unchanged"), _to);
                 MbElementarySurface * surface = this->surface;
                    if (surface != NULL) {
        _to = ElementarySurface::NewInstance(env, (MbElementarySurface *)surface);
    } else {
        _to = env.Null();
    }

                _toReturn.Set(Napi::String::New(env, "surface"), _to);
                 MbWireFrame * result = this->result;
                    if (result != NULL) {
        _to = WireFrame::NewInstance(env, (MbWireFrame *)result);
    } else {
        _to = env.Null();
    }

                _toReturn.Set(Napi::String::New(env, "result"), _to);

            deferred.Resolve(_toReturn);
    }

    void ActionSurfaceCurve_FilletCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ActionSurfaceCurve_BridgeCurve_AsyncWorker::ActionSurfaceCurve_BridgeCurve_AsyncWorker(
        Napi::Promise::Deferred const &d
,
                        const MbCurve3D & curve1,
                         double  t1,
                         bool  sense1,
                        const MbCurve3D & curve2,
                         double  t2,
                         bool  sense2,
                        const MbSNameMaker & names    )
        :PromiseWorker(d),
                        curve1(curve1)
,
                        t1(t1)
,
                        sense1(sense1)
,
                        curve2(curve2)
,
                        t2(t2)
,
                        sense2(sense2)
,
                        names(names)
{};

    void ActionSurfaceCurve_BridgeCurve_AsyncWorker::Execute() {
        EnterParallelRegion();

                 MbWireFrame * result = NULL;


        
         MbResultType  _result = ::BridgeCurve(
                        curve1
,                        t1
,                        sense1
,                        curve2
,                        t2
,                        sense2
,                        names
,                        result
        );

        this->resultType = _result;
        if (_result == rt_Success) {

                this->result = result;

                } else {
            std::ostringstream msg;
            msg << "Operation BridgeCurve failed with error: " << Error::GetSolidErrorResId(_result);
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void ActionSurfaceCurve_BridgeCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbWireFrame * result = this->result;
                if (result != NULL) {
        _to = WireFrame::NewInstance(env, (MbWireFrame *)result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void ActionSurfaceCurve_BridgeCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ActionSurfaceCurve_ConnectingSpline_AsyncWorker::ActionSurfaceCurve_ConnectingSpline_AsyncWorker(
        Napi::Promise::Deferred const &d
,
                        const MbCurve3D & curve1,
                         double  t1,
                         MbeMatingType  mating1,
                        const MbCurve3D & curve2,
                         double  t2,
                         MbeMatingType  mating2,
                         double  tension1,
                         double  tension2,
                        const MbSNameMaker & names    )
        :PromiseWorker(d),
                        curve1(curve1)
,
                        t1(t1)
,
                        mating1(mating1)
,
                        curve2(curve2)
,
                        t2(t2)
,
                        mating2(mating2)
,
                        tension1(tension1)
,
                        tension2(tension2)
,
                        names(names)
{};

    void ActionSurfaceCurve_ConnectingSpline_AsyncWorker::Execute() {
        EnterParallelRegion();

                 MbWireFrame * result = NULL;


        
         MbResultType  _result = ::ConnectingSpline(
                        curve1
,                        t1
,                        mating1
,                        curve2
,                        t2
,                        mating2
,                        tension1
,                        tension2
,                        names
,                        result
        );

        this->resultType = _result;
        if (_result == rt_Success) {

                this->result = result;

                } else {
            std::ostringstream msg;
            msg << "Operation ConnectingSpline failed with error: " << Error::GetSolidErrorResId(_result);
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void ActionSurfaceCurve_ConnectingSpline_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbWireFrame * result = this->result;
                if (result != NULL) {
        _to = WireFrame::NewInstance(env, (MbWireFrame *)result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void ActionSurfaceCurve_ConnectingSpline_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ActionSurfaceCurve_CurveProjection_AsyncWorker::ActionSurfaceCurve_CurveProjection_AsyncWorker(
        Napi::Promise::Deferred const &d
,
                        const MbSurface & surface,
                        const MbCurve3D & curve,
                         MbVector3D * direction,
                         bool  createExact,
                         bool  truncateByBounds,
                         VERSION  version    )
        :PromiseWorker(d),
                        surface(surface)
,
                        curve(curve)
,
                        direction(direction)
,
                        createExact(createExact)
,
                        truncateByBounds(truncateByBounds)
,
                        version(version)
{};

    void ActionSurfaceCurve_CurveProjection_AsyncWorker::Execute() {
        EnterParallelRegion();

                RPArray<MbCurve3D> *result = new RPArray<MbCurve3D>;


        
         MbResultType  _result = ::CurveProjection(
                        surface
,                        curve
,                        direction
,                        createExact
,                        truncateByBounds
,                        *result
,                        version
        );

        this->resultType = _result;
        if (_result == rt_Success) {

                this->result = result;

                } else {
            std::ostringstream msg;
            msg << "Operation CurveProjection failed with error: " << Error::GetSolidErrorResId(_result);
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void ActionSurfaceCurve_CurveProjection_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             RPArray<MbCurve3D> * result = this->result;
                Napi::Array arr_result = Napi::Array::New(env);
    for (size_t i = 0; i < result->Count(); i++) {
            arr_result[i] = Curve3D::NewInstance(env,
                
                    (*result)[i]
                
            );
    }
    _to = arr_result;

            deferred.Resolve(_to);
    }

    void ActionSurfaceCurve_CurveProjection_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

