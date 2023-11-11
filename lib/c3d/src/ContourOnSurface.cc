// This is a generated file, modify: generate/templates/ContourOnSurface.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/ContourOnSurface.h"

#include "tool_mutex.h"

Napi::Object ContourOnSurface::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func =
        DefineClass(env, "ContourOnSurface",
                    {
                        InstanceMethod<&ContourOnSurface::GetContour>("GetContour"),
                        InstanceMethod<&ContourOnSurface::GetContour_async>("GetContour_async"),
                        InstanceMethod<&ContourOnSurface::GetSurface>("GetSurface"),
                        InstanceMethod<&ContourOnSurface::GetSurface_async>("GetSurface_async"),
                        InstanceMethod<&ContourOnSurface::GetSegment>("GetSegment"),
                        InstanceMethod<&ContourOnSurface::GetSegment_async>("GetSegment_async"),
                        InstanceMethod<&ContourOnSurface::GetSegmentsCount>("GetSegmentsCount"),
                        InstanceMethod<&ContourOnSurface::GetSegmentsCount_async>("GetSegmentsCount_async"),
                        InstanceMethod<&ContourOnSurface::GetPlaneCurve>("GetPlaneCurve"),
                        InstanceMethod<&ContourOnSurface::GetPlaneCurve_async>("GetPlaneCurve_async"),
                        InstanceMethod<&ContourOnSurface::IsPlanar>("IsPlanar"),
                        InstanceMethod<&ContourOnSurface::IsPlanar_async>("IsPlanar_async"),
                        InstanceMethod<&ContourOnSurface::IsClosed>("IsClosed"),
                        InstanceMethod<&ContourOnSurface::IsClosed_async>("IsClosed_async"),
                        InstanceMethod<&ContourOnSurface::IsTouch>("IsTouch"),
                        InstanceMethod<&ContourOnSurface::IsTouch_async>("IsTouch_async"),
                        InstanceMethod<&ContourOnSurface::GetTMax>("GetTMax"),
                        InstanceMethod<&ContourOnSurface::GetTMax_async>("GetTMax_async"),
                        InstanceMethod<&ContourOnSurface::GetTMin>("GetTMin"),
                        InstanceMethod<&ContourOnSurface::GetTMin_async>("GetTMin_async"),
                        InstanceMethod<&ContourOnSurface::GetPeriod>("GetPeriod"),
                        InstanceMethod<&ContourOnSurface::GetPeriod_async>("GetPeriod_async"),
                        InstanceMethod<&ContourOnSurface::IsPeriodic>("IsPeriodic"),
                        InstanceMethod<&ContourOnSurface::IsPeriodic_async>("IsPeriodic_async"),
                        InstanceMethod<&ContourOnSurface::IsStraight>("IsStraight"),
                        InstanceMethod<&ContourOnSurface::IsStraight_async>("IsStraight_async"),
                        InstanceMethod<&ContourOnSurface::Trimmed>("Trimmed"),
                        InstanceMethod<&ContourOnSurface::Trimmed_async>("Trimmed_async"),
                        InstanceMethod<&ContourOnSurface::Normal>("Normal"),
                        InstanceMethod<&ContourOnSurface::Normal_async>("Normal_async"),
                        InstanceMethod<&ContourOnSurface::Tangent>("Tangent"),
                        InstanceMethod<&ContourOnSurface::Tangent_async>("Tangent_async"),
                        InstanceMethod<&ContourOnSurface::BNormal>("BNormal"),
                        InstanceMethod<&ContourOnSurface::BNormal_async>("BNormal_async"),
                        InstanceMethod<&ContourOnSurface::GetCentre>("GetCentre"),
                        InstanceMethod<&ContourOnSurface::GetCentre_async>("GetCentre_async"),
                        InstanceMethod<&ContourOnSurface::GetLimitPoint>("GetLimitPoint"),
                        InstanceMethod<&ContourOnSurface::GetLimitPoint_async>("GetLimitPoint_async"),
                        InstanceMethod<&ContourOnSurface::PointOn>("PointOn"),
                        InstanceMethod<&ContourOnSurface::PointOn_async>("PointOn_async"),
                        InstanceMethod<&ContourOnSurface::_PointOn>("_PointOn"),
                        InstanceMethod<&ContourOnSurface::_PointOn_async>("_PointOn_async"),
                        InstanceMethod<&ContourOnSurface::NearPointProjection>("NearPointProjection"),
                        InstanceMethod<&ContourOnSurface::NearPointProjection_async>("NearPointProjection_async"),
                        InstanceMethod<&ContourOnSurface::GetSurfaceCurve>("GetSurfaceCurve"),
                        InstanceMethod<&ContourOnSurface::GetSurfaceCurve_async>("GetSurfaceCurve_async"),
                        InstanceMethod<&ContourOnSurface::GetWeightCentre>("GetWeightCentre"),
                        InstanceMethod<&ContourOnSurface::GetWeightCentre_async>("GetWeightCentre_async"),
                        InstanceMethod<&ContourOnSurface::GetBasisCurve>("GetBasisCurve"),
                        InstanceMethod<&ContourOnSurface::GetBasisCurve_async>("GetBasisCurve_async"),
                        InstanceMethod<&ContourOnSurface::GetBasisPoints>("GetBasisPoints"),
                        InstanceMethod<&ContourOnSurface::GetBasisPoints_async>("GetBasisPoints_async"),
                        InstanceMethod<&ContourOnSurface::SetBasisPoints>("SetBasisPoints"),
                        InstanceMethod<&ContourOnSurface::SetBasisPoints_async>("SetBasisPoints_async"),
                        InstanceMethod<&ContourOnSurface::Inverse>("Inverse"),
                        InstanceMethod<&ContourOnSurface::Inverse_async>("Inverse_async"),
                        InstanceMethod<&ContourOnSurface::GetProjection>("GetProjection"),
                        InstanceMethod<&ContourOnSurface::GetProjection_async>("GetProjection_async"),
                        InstanceMethod<&ContourOnSurface::GetCircleAxis>("GetCircleAxis"),
                        InstanceMethod<&ContourOnSurface::GetCircleAxis_async>("GetCircleAxis_async"),
                        InstanceMethod<&ContourOnSurface::IsA>("IsA"),
                        InstanceMethod<&ContourOnSurface::IsA_async>("IsA_async"),
                        InstanceMethod<&ContourOnSurface::Type>("Type"),
                        InstanceMethod<&ContourOnSurface::Type_async>("Type_async"),
                        InstanceMethod<&ContourOnSurface::Family>("Family"),
                        InstanceMethod<&ContourOnSurface::Family_async>("Family_async"),
                        InstanceMethod<&ContourOnSurface::Transform>("Transform"),
                        InstanceMethod<&ContourOnSurface::Transform_async>("Transform_async"),
                        InstanceMethod<&ContourOnSurface::Move>("Move"),
                        InstanceMethod<&ContourOnSurface::Move_async>("Move_async"),
                        InstanceMethod<&ContourOnSurface::Rotate>("Rotate"),
                        InstanceMethod<&ContourOnSurface::Rotate_async>("Rotate_async"),
                        InstanceMethod<&ContourOnSurface::Refresh>("Refresh"),
                        InstanceMethod<&ContourOnSurface::Refresh_async>("Refresh_async"),
                        InstanceMethod<&ContourOnSurface::Duplicate>("Duplicate"),
                        InstanceMethod<&ContourOnSurface::Duplicate_async>("Duplicate_async"),
                        InstanceMethod<&ContourOnSurface::AddYourGabaritTo>("AddYourGabaritTo"),
                        InstanceMethod<&ContourOnSurface::AddYourGabaritTo_async>("AddYourGabaritTo_async"),
                        InstanceMethod<&ContourOnSurface::GetUseCount>("GetUseCount"),
                        InstanceMethod<&ContourOnSurface::GetUseCount_async>("GetUseCount_async"),
                        InstanceMethod<&ContourOnSurface::AddRef>("AddRef"),
                        InstanceMethod<&ContourOnSurface::AddRef_async>("AddRef_async"),
                        InstanceMethod<&ContourOnSurface::Id>("Id"),

                    });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("ContourOnSurface", func);

    Napi::Object global = env.Global();
    Napi::Object Object = global.Get("Object").ToObject();
    Napi::Function setPrototypeOf = Napi::Function(env, Object.Get("setPrototypeOf"));
    Napi::Value prototype = func.Get("prototype");

    Napi::Function superFunc = Curve3D::GetConstructor(env);
    Napi::FunctionReference *superConstructor = new Napi::FunctionReference();
    *superConstructor = Napi::Persistent(superFunc);

    Napi::Value superPrototype = superFunc.Get("prototype");
    setPrototypeOf.Call({prototype, superPrototype});
    setPrototypeOf.Call({func, superFunc});

    return exports;
}

ContourOnSurface::ContourOnSurface(const Napi::CallbackInfo &info) : Napi::ObjectWrap<ContourOnSurface>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 3 && ((info[0].IsObject() && info[0].ToObject().InstanceOf(Surface::GetConstructor(env)))) &&
        ((info[1].IsObject() && info[1].ToObject().InstanceOf(Contour::GetConstructor(env)))) &&
        ((info[2].IsBoolean()) || (info[2].IsNull() || info[2].IsUndefined()))

    )
    {
        if (info[0].IsNull() || info[0].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'surface'").ThrowAsJavaScriptException();
            return;
        }
        const class Surface *surface_ = Surface::Unwrap(info[0].ToObject());

        const MbSurface &surface = *surface_->_underlying;

        if (info[1].IsNull() || info[1].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'contour'").ThrowAsJavaScriptException();
            return;
        }
        const class Contour *contour_ = Contour::Unwrap(info[1].ToObject());

        const MbContour &contour = *contour_->_underlying;

        bool same = info[2].ToBoolean();

        MbContourOnSurface *underlying = new MbContourOnSurface(surface, contour, same);
        if (underlying == NULL)
        {
            Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
            return;
        }
        underlying->AddRef();
        this->_underlying = underlying;
    }
    else if (info.Length() == 2 &&
             ((info[0].IsObject() && info[0].ToObject().InstanceOf(Surface::GetConstructor(env)))) &&
             ((info[1].IsNumber()))

    )
    {
        if (info[0].IsNull() || info[0].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'surf'").ThrowAsJavaScriptException();
            return;
        }
        const class Surface *surf_ = Surface::Unwrap(info[0].ToObject());

        const MbSurface &surf = *surf_->_underlying;

        int sense = info[1].ToNumber().Int64Value();

        MbContourOnSurface *underlying = new MbContourOnSurface(surf, sense);
        if (underlying == NULL)
        {
            Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
            return;
        }
        underlying->AddRef();
        this->_underlying = underlying;
    }
    else
    {
        Napi::Error::New(env, "No matching constructor").ThrowAsJavaScriptException();
        return;
    }
}

Napi::Object ContourOnSurface::NewInstance(Napi::Env env, MbContourOnSurface *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("ContourOnSurface");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    ContourOnSurface *unwrapped = ContourOnSurface::Unwrap(inst);
    underlying->AddRef();
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function ContourOnSurface::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("ContourOnSurface");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value ContourOnSurface::GetContour(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbContour &_result = _underlying->GetContour(

    );

    Napi::Value _to;

    _to = Contour::NewInstance(env, (MbContour *)&(_result));

    return _to;
}

Napi::Value ContourOnSurface::GetContour_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ContourOnSurface_GetContour_AsyncWorker *asyncWorker =
        new ContourOnSurface_GetContour_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::GetSurface(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbSurface &_result = _underlying->GetSurface(

    );

    Napi::Value _to;

    _to = Surface::NewInstance(env, (MbSurface *)&(_result));

    return _to;
}

Napi::Value ContourOnSurface::GetSurface_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ContourOnSurface_GetSurface_AsyncWorker *asyncWorker =
        new ContourOnSurface_GetSurface_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::GetSegment(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number index is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    size_t index = info[0].ToNumber().Int64Value();

    const MbCurve *_result = _underlying->GetSegment(index

    );

    Napi::Value _to;

    if (_result != NULL)
    {
        _to = Curve::NewInstance(env, (MbCurve *)_result);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value ContourOnSurface::GetSegment_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number index is required."));
        return deferred.Promise();
    }

    size_t index = info[0].ToNumber().Int64Value();

    ContourOnSurface_GetSegment_AsyncWorker *asyncWorker =
        new ContourOnSurface_GetSegment_AsyncWorker(_underlying, deferred,

                                                    index);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::GetSegmentsCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    size_t _result = _underlying->GetSegmentsCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ContourOnSurface::GetSegmentsCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ContourOnSurface_GetSegmentsCount_AsyncWorker *asyncWorker =
        new ContourOnSurface_GetSegmentsCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::GetPlaneCurve(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsBoolean()))
    {
        Napi::Error::New(env, "boolean saveParams is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbCurve *curve2d = NULL;
    MbPlacement3D *placement = new MbPlacement3D;

    bool saveParams = info[0].ToBoolean();

    PlanarCheckParams params;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        _PlanarCheckParams *params_ = _PlanarCheckParams::Unwrap(info[1].ToObject());
        params = *params_->_underlying;
    }

    bool _result = _underlying->GetPlaneCurve(curve2d, *placement, saveParams,
                                              info.Length() == 1 || info[1].IsNull() ? PlanarCheckParams() : params

    );

    if (_result)
    {

        Napi::Object _toReturn = Napi::Object::New(env);
        Napi::Value _to;

        if (curve2d != NULL)
        {
            _to = Curve::NewInstance(env, (MbCurve *)curve2d);
        }
        else
        {
            _to = env.Null();
        }

        _toReturn.Set(Napi::String::New(env, "curve2d"), _to);
        if (placement != NULL)
        {
            _to = Placement3D::NewInstance(env, (MbPlacement3D *)placement);
        }
        else
        {
            _to = env.Null();
        }

        _toReturn.Set(Napi::String::New(env, "placement"), _to);
        return _toReturn;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation GetPlaneCurve failed";
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ContourOnSurface::GetPlaneCurve_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean saveParams is required."));
        return deferred.Promise();
    }

    bool saveParams = info[0].ToBoolean();

    PlanarCheckParams params;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        _PlanarCheckParams *params_ = _PlanarCheckParams::Unwrap(info[1].ToObject());
        params = *params_->_underlying;
    }

    ContourOnSurface_GetPlaneCurve_AsyncWorker *asyncWorker =
        new ContourOnSurface_GetPlaneCurve_AsyncWorker(_underlying, deferred,

                                                       saveParams,

                                                       params);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::IsPlanar(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double accuracy = info[0].ToNumber().DoubleValue();

    bool _result = _underlying->IsPlanar(info.Length() == 0 || info[0].IsNull() ? METRIC_EPSILON : accuracy

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value ContourOnSurface::IsPlanar_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    double accuracy = info[0].ToNumber().DoubleValue();

    ContourOnSurface_IsPlanar_AsyncWorker *asyncWorker =
        new ContourOnSurface_IsPlanar_AsyncWorker(_underlying, deferred,

                                                  accuracy);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::IsClosed(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool _result = _underlying->IsClosed(

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value ContourOnSurface::IsClosed_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ContourOnSurface_IsClosed_AsyncWorker *asyncWorker =
        new ContourOnSurface_IsClosed_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::IsTouch(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool _result = _underlying->IsTouch(

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value ContourOnSurface::IsTouch_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ContourOnSurface_IsTouch_AsyncWorker *asyncWorker = new ContourOnSurface_IsTouch_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::GetTMax(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetTMax(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ContourOnSurface::GetTMax_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ContourOnSurface_GetTMax_AsyncWorker *asyncWorker = new ContourOnSurface_GetTMax_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::GetTMin(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetTMin(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ContourOnSurface::GetTMin_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ContourOnSurface_GetTMin_AsyncWorker *asyncWorker = new ContourOnSurface_GetTMin_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::GetPeriod(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetPeriod(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ContourOnSurface::GetPeriod_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ContourOnSurface_GetPeriod_AsyncWorker *asyncWorker =
        new ContourOnSurface_GetPeriod_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::IsPeriodic(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool _result = _underlying->IsPeriodic(

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value ContourOnSurface::IsPeriodic_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ContourOnSurface_IsPeriodic_AsyncWorker *asyncWorker =
        new ContourOnSurface_IsPeriodic_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::IsStraight(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool ignoreParams = info[0].ToBoolean();

    bool _result = _underlying->IsStraight(info.Length() == 0 || info[0].IsNull() ? false : ignoreParams

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value ContourOnSurface::IsStraight_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    bool ignoreParams = info[0].ToBoolean();

    ContourOnSurface_IsStraight_AsyncWorker *asyncWorker =
        new ContourOnSurface_IsStraight_AsyncWorker(_underlying, deferred,

                                                    ignoreParams);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::Trimmed(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number t1 is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        Napi::Error::New(env, "number t2 is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 || !(info[2].IsNumber()))
    {
        Napi::Error::New(env, "int sense is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    double t1 = info[0].ToNumber().DoubleValue();

    double t2 = info[1].ToNumber().DoubleValue();

    int sense = info[2].ToNumber().Int64Value();

    MbCurve3D *_result = _underlying->Trimmed(t1, t2, sense

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

Napi::Value ContourOnSurface::Trimmed_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t1 is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t2 is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 || !(info[2].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "int sense is required."));
        return deferred.Promise();
    }

    double t1 = info[0].ToNumber().DoubleValue();

    double t2 = info[1].ToNumber().DoubleValue();

    int sense = info[2].ToNumber().Int64Value();

    ContourOnSurface_Trimmed_AsyncWorker *asyncWorker = new ContourOnSurface_Trimmed_AsyncWorker(_underlying, deferred,

                                                                                                 t1,

                                                                                                 t2,

                                                                                                 sense);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::Normal(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbVector3D *n = new MbVector3D;

    double t = info[0].ToNumber().DoubleValue();

    _underlying->Normal(t, *n

    );

    Napi::Value _to;

    if (n != NULL)
    {
        _to = Vector3D::NewInstance(env, (MbVector3D *)n);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value ContourOnSurface::Normal_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    ContourOnSurface_Normal_AsyncWorker *asyncWorker = new ContourOnSurface_Normal_AsyncWorker(_underlying, deferred,

                                                                                               t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::Tangent(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbVector3D *tan = new MbVector3D;

    double t = info[0].ToNumber().DoubleValue();

    _underlying->Tangent(t, *tan

    );

    Napi::Value _to;

    if (tan != NULL)
    {
        _to = Vector3D::NewInstance(env, (MbVector3D *)tan);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value ContourOnSurface::Tangent_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    ContourOnSurface_Tangent_AsyncWorker *asyncWorker = new ContourOnSurface_Tangent_AsyncWorker(_underlying, deferred,

                                                                                                 t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::BNormal(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbVector3D *b = new MbVector3D;

    double t = info[0].ToNumber().DoubleValue();

    _underlying->BNormal(t, *b

    );

    Napi::Value _to;

    if (b != NULL)
    {
        _to = Vector3D::NewInstance(env, (MbVector3D *)b);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value ContourOnSurface::BNormal_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    ContourOnSurface_BNormal_AsyncWorker *asyncWorker = new ContourOnSurface_BNormal_AsyncWorker(_underlying, deferred,

                                                                                                 t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::GetCentre(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbCartPoint3D *c = new MbCartPoint3D;

    _underlying->GetCentre(*c

    );

    Napi::Value _to;

    if (c != NULL)
    {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)c);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value ContourOnSurface::GetCentre_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ContourOnSurface_GetCentre_AsyncWorker *asyncWorker =
        new ContourOnSurface_GetCentre_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::GetLimitPoint(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "ptrdiff_t number is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbCartPoint3D *point = new MbCartPoint3D;

    int number = info[0].ToNumber().Int64Value();

    _underlying->GetLimitPoint(number, *point

    );

    Napi::Value _to;

    if (point != NULL)
    {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)point);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value ContourOnSurface::GetLimitPoint_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "ptrdiff_t number is required."));
        return deferred.Promise();
    }

    int number = info[0].ToNumber().Int64Value();

    ContourOnSurface_GetLimitPoint_AsyncWorker *asyncWorker =
        new ContourOnSurface_GetLimitPoint_AsyncWorker(_underlying, deferred,

                                                       number);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::PointOn(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbCartPoint3D *p = new MbCartPoint3D;

    double t = info[0].ToNumber().DoubleValue();

    _underlying->PointOn(t, *p

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

Napi::Value ContourOnSurface::PointOn_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    ContourOnSurface_PointOn_AsyncWorker *asyncWorker = new ContourOnSurface_PointOn_AsyncWorker(_underlying, deferred,

                                                                                                 t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::_PointOn(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbCartPoint3D *p = new MbCartPoint3D;

    double t = info[0].ToNumber().DoubleValue();

    _underlying->_PointOn(t, *p

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

Napi::Value ContourOnSurface::_PointOn_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    ContourOnSurface__PointOn_AsyncWorker *asyncWorker =
        new ContourOnSurface__PointOn_AsyncWorker(_underlying, deferred,

                                                  t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::NearPointProjection(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 ||
        !((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "CartPoint3D pnt is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsBoolean()))
    {
        Napi::Error::New(env, "boolean ext is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    double t;

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'pnt'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class CartPoint3D *pnt_ = CartPoint3D::Unwrap(info[0].ToObject());

    const MbCartPoint3D &pnt = *pnt_->_underlying;

    bool ext = info[1].ToBoolean();

    MbRect1D *tRange = NULL;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        Rect1D *tRange_ = Rect1D::Unwrap(info[2].ToObject());
        tRange = tRange_->_underlying;
    }

    bool success = _underlying->NearPointProjection(pnt, t, ext, info.Length() == 2 || info[2].IsNull() ? NULL : tRange

    );

    Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

    _to = Napi::Boolean::New(env, success);

    _toReturn.Set(Napi::String::New(env, "success"), _to);
    _to = Napi::Number::New(env, t);

    _toReturn.Set(Napi::String::New(env, "t"), _to);
    return _toReturn;
}

Napi::Value ContourOnSurface::NearPointProjection_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 ||
        !((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "CartPoint3D pnt is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean ext is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'pnt'"));
        return deferred.Promise();
    }
    const class CartPoint3D *pnt_ = CartPoint3D::Unwrap(info[0].ToObject());

    const MbCartPoint3D &pnt = *pnt_->_underlying;

    bool ext = info[1].ToBoolean();

    MbRect1D *tRange = NULL;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        Rect1D *tRange_ = Rect1D::Unwrap(info[2].ToObject());
        tRange = tRange_->_underlying;
    }

    ContourOnSurface_NearPointProjection_AsyncWorker *asyncWorker =
        new ContourOnSurface_NearPointProjection_AsyncWorker(_underlying, deferred,

                                                             pnt,

                                                             ext,

                                                             tRange);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::GetSurfaceCurve(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbCurve *curve2d = NULL;
    MbSurface *surface = NULL;

    int version = info[0].ToNumber().Int64Value();

    bool _result = _underlying->GetSurfaceCurve(
        curve2d, surface, info.Length() == 0 || info[0].IsNull() ? Math::DefaultMathVersion() : version

    );

    if (_result)
    {

        Napi::Object _toReturn = Napi::Object::New(env);
        Napi::Value _to;

        if (curve2d != NULL)
        {
            _to = Curve::NewInstance(env, (MbCurve *)curve2d);
        }
        else
        {
            _to = env.Null();
        }

        _toReturn.Set(Napi::String::New(env, "curve2d"), _to);
        if (surface != NULL)
        {
            _to = Surface::NewInstance(env, (MbSurface *)surface);
        }
        else
        {
            _to = env.Null();
        }

        _toReturn.Set(Napi::String::New(env, "surface"), _to);
        return _toReturn;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation GetSurfaceCurve failed";
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ContourOnSurface::GetSurfaceCurve_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    int version = info[0].ToNumber().Int64Value();

    ContourOnSurface_GetSurfaceCurve_AsyncWorker *asyncWorker =
        new ContourOnSurface_GetSurfaceCurve_AsyncWorker(_underlying, deferred,

                                                         version);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::GetWeightCentre(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbCartPoint3D *point = new MbCartPoint3D;

    _underlying->GetWeightCentre(*point

    );

    Napi::Value _to;

    if (point != NULL)
    {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)point);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value ContourOnSurface::GetWeightCentre_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ContourOnSurface_GetWeightCentre_AsyncWorker *asyncWorker =
        new ContourOnSurface_GetWeightCentre_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::GetBasisCurve(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbCurve3D &_result = _underlying->GetBasisCurve(

    );

    Napi::Value _to;

    _to = Curve3D::NewInstance(env, (MbCurve3D *)&(_result));

    return _to;
}

Napi::Value ContourOnSurface::GetBasisCurve_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ContourOnSurface_GetBasisCurve_AsyncWorker *asyncWorker =
        new ContourOnSurface_GetBasisCurve_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::GetBasisPoints(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbControlData3D *cd = new MbControlData3D;

    _underlying->GetBasisPoints(*cd

    );

    Napi::Value _to;

    if (cd != NULL)
    {
        _to = ControlData3D::NewInstance(env, (MbControlData3D *)cd);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value ContourOnSurface::GetBasisPoints_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ContourOnSurface_GetBasisPoints_AsyncWorker *asyncWorker =
        new ContourOnSurface_GetBasisPoints_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::SetBasisPoints(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 ||
        !((info[0].IsObject() && info[0].ToObject().InstanceOf(ControlData3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "ControlData3D cd is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'cd'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class ControlData3D *cd_ = ControlData3D::Unwrap(info[0].ToObject());

    const MbControlData3D &cd = *cd_->_underlying;

    _underlying->SetBasisPoints(cd

    );

    return env.Undefined();
}

Napi::Value ContourOnSurface::SetBasisPoints_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 ||
        !((info[0].IsObject() && info[0].ToObject().InstanceOf(ControlData3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "ControlData3D cd is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'cd'"));
        return deferred.Promise();
    }
    const class ControlData3D *cd_ = ControlData3D::Unwrap(info[0].ToObject());

    const MbControlData3D &cd = *cd_->_underlying;

    ContourOnSurface_SetBasisPoints_AsyncWorker *asyncWorker =
        new ContourOnSurface_SetBasisPoints_AsyncWorker(_underlying, deferred,

                                                        cd);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::Inverse(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->Inverse(

    );

    return env.Undefined();
}

Napi::Value ContourOnSurface::Inverse_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ContourOnSurface_Inverse_AsyncWorker *asyncWorker = new ContourOnSurface_Inverse_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::GetProjection(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 ||
        !((info[0].IsObject() && info[0].ToObject().InstanceOf(Placement3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Placement3D place is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'place'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Placement3D *place_ = Placement3D::Unwrap(info[0].ToObject());

    const MbPlacement3D &place = *place_->_underlying;

    int version = info[1].ToNumber().Int64Value();

    MbCurve *_result =
        _underlying->GetProjection(place, info.Length() == 1 || info[1].IsNull() ? Math::DefaultMathVersion() : version

        );

    Napi::Value _to;

    if (_result != NULL)
    {
        _to = Curve::NewInstance(env, (MbCurve *)_result);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value ContourOnSurface::GetProjection_async(const Napi::CallbackInfo &info)
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

    int version = info[1].ToNumber().Int64Value();

    ContourOnSurface_GetProjection_AsyncWorker *asyncWorker =
        new ContourOnSurface_GetProjection_AsyncWorker(_underlying, deferred,

                                                       place,

                                                       version);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::GetCircleAxis(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbAxis3D *axis = new MbAxis3D;

    bool success = _underlying->GetCircleAxis(*axis

    );

    Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

    _to = Napi::Boolean::New(env, success);

    _toReturn.Set(Napi::String::New(env, "success"), _to);
    if (axis != NULL)
    {
        _to = Axis3D::NewInstance(env, (MbAxis3D *)axis);
    }
    else
    {
        _to = env.Null();
    }

    _toReturn.Set(Napi::String::New(env, "axis"), _to);
    return _toReturn;
}

Napi::Value ContourOnSurface::GetCircleAxis_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ContourOnSurface_GetCircleAxis_AsyncWorker *asyncWorker =
        new ContourOnSurface_GetCircleAxis_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::IsA(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeSpaceType _result = _underlying->IsA(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ContourOnSurface::IsA_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ContourOnSurface_IsA_AsyncWorker *asyncWorker = new ContourOnSurface_IsA_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::Type(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeSpaceType _result = _underlying->Type(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ContourOnSurface::Type_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ContourOnSurface_Type_AsyncWorker *asyncWorker = new ContourOnSurface_Type_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::Family(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeSpaceType _result = _underlying->Family(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ContourOnSurface::Family_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ContourOnSurface_Family_AsyncWorker *asyncWorker = new ContourOnSurface_Family_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::Transform(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Matrix3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Matrix3D mat is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'mat'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Matrix3D *mat_ = Matrix3D::Unwrap(info[0].ToObject());

    const MbMatrix3D &mat = *mat_->_underlying;

    MbRegTransform *iReg = NULL;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
        iReg = iReg_->_underlying;
    }

    _underlying->Transform(mat, info.Length() == 1 || info[1].IsNull() ? NULL : iReg

    );

    return env.Undefined();
}

Napi::Value ContourOnSurface::Transform_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Matrix3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Matrix3D mat is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'mat'"));
        return deferred.Promise();
    }
    const class Matrix3D *mat_ = Matrix3D::Unwrap(info[0].ToObject());

    const MbMatrix3D &mat = *mat_->_underlying;

    MbRegTransform *iReg = NULL;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
        iReg = iReg_->_underlying;
    }

    ContourOnSurface_Transform_AsyncWorker *asyncWorker =
        new ContourOnSurface_Transform_AsyncWorker(_underlying, deferred,

                                                   mat,

                                                   iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::Move(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Vector3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Vector3D v is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'v'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Vector3D *v_ = Vector3D::Unwrap(info[0].ToObject());

    const MbVector3D &v = *v_->_underlying;

    MbRegTransform *iReg = NULL;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
        iReg = iReg_->_underlying;
    }

    _underlying->Move(v, info.Length() == 1 || info[1].IsNull() ? NULL : iReg

    );

    return env.Undefined();
}

Napi::Value ContourOnSurface::Move_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Vector3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Vector3D v is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'v'"));
        return deferred.Promise();
    }
    const class Vector3D *v_ = Vector3D::Unwrap(info[0].ToObject());

    const MbVector3D &v = *v_->_underlying;

    MbRegTransform *iReg = NULL;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
        iReg = iReg_->_underlying;
    }

    ContourOnSurface_Move_AsyncWorker *asyncWorker = new ContourOnSurface_Move_AsyncWorker(_underlying, deferred,

                                                                                           v,

                                                                                           iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::Rotate(const Napi::CallbackInfo &info)
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

    MbRegTransform *iReg = NULL;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[2].ToObject());
        iReg = iReg_->_underlying;
    }

    _underlying->Rotate(axis, angle, info.Length() == 2 || info[2].IsNull() ? NULL : iReg

    );

    return env.Undefined();
}

Napi::Value ContourOnSurface::Rotate_async(const Napi::CallbackInfo &info)
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

    MbRegTransform *iReg = NULL;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[2].ToObject());
        iReg = iReg_->_underlying;
    }

    ContourOnSurface_Rotate_AsyncWorker *asyncWorker = new ContourOnSurface_Rotate_AsyncWorker(_underlying, deferred,

                                                                                               axis,

                                                                                               angle,

                                                                                               iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::Refresh(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->Refresh(

    );

    return env.Undefined();
}

Napi::Value ContourOnSurface::Refresh_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ContourOnSurface_Refresh_AsyncWorker *asyncWorker = new ContourOnSurface_Refresh_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::Duplicate(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbRegDuplicate *iReg = NULL;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        RegDuplicate *iReg_ = RegDuplicate::Unwrap(info[0].ToObject());
        iReg = iReg_->_underlying;
    }

    MbSpaceItem &_result = _underlying->Duplicate(info.Length() == 0 || info[0].IsNull() ? NULL : iReg

    );

    Napi::Value _to;

    _to = SpaceItem::NewInstance(env, (MbSpaceItem *)&(_result));

    return _to;
}

Napi::Value ContourOnSurface::Duplicate_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    MbRegDuplicate *iReg = NULL;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        RegDuplicate *iReg_ = RegDuplicate::Unwrap(info[0].ToObject());
        iReg = iReg_->_underlying;
    }

    ContourOnSurface_Duplicate_AsyncWorker *asyncWorker =
        new ContourOnSurface_Duplicate_AsyncWorker(_underlying, deferred,

                                                   iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::AddYourGabaritTo(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Cube::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Cube cube is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'cube'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Cube *cube_ = Cube::Unwrap(info[0].ToObject());

    MbCube &cube = *cube_->_underlying;

    _underlying->AddYourGabaritTo(cube

    );

    return env.Undefined();
}

Napi::Value ContourOnSurface::AddYourGabaritTo_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Cube::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Cube cube is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'cube'"));
        return deferred.Promise();
    }
    const class Cube *cube_ = Cube::Unwrap(info[0].ToObject());

    MbCube &cube = *cube_->_underlying;

    ContourOnSurface_AddYourGabaritTo_AsyncWorker *asyncWorker =
        new ContourOnSurface_AddYourGabaritTo_AsyncWorker(_underlying, deferred,

                                                          cube);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::GetUseCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    refcount_t _result = _underlying->GetUseCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ContourOnSurface::GetUseCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ContourOnSurface_GetUseCount_AsyncWorker *asyncWorker =
        new ContourOnSurface_GetUseCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourOnSurface::AddRef(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->AddRef(

    );

    return env.Undefined();
}

Napi::Value ContourOnSurface::AddRef_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ContourOnSurface_AddRef_AsyncWorker *asyncWorker = new ContourOnSurface_AddRef_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value ContourOnSurface::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

ContourOnSurface::~ContourOnSurface()
{
    // std::cout << "calling ::DeleteItem on ContourOnSurface for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

ContourOnSurface_GetContour_AsyncWorker::ContourOnSurface_GetContour_AsyncWorker(MbContourOnSurface *_underlying,
                                                                                 Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ContourOnSurface_GetContour_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbContour &_result = _underlying->GetContour();

    this->_result = (MbContour *)&(_result);

    ExitParallelRegion();
}

void ContourOnSurface_GetContour_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbContour *_result = this->_result;
    _to = Contour::NewInstance(env, (MbContour *)&(_result));

    deferred.Resolve(_to);
}

void ContourOnSurface_GetContour_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_GetSurface_AsyncWorker::ContourOnSurface_GetSurface_AsyncWorker(MbContourOnSurface *_underlying,
                                                                                 Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ContourOnSurface_GetSurface_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbSurface &_result = _underlying->GetSurface();

    this->_result = (MbSurface *)&(_result);

    ExitParallelRegion();
}

void ContourOnSurface_GetSurface_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbSurface *_result = this->_result;
    _to = Surface::NewInstance(env, (MbSurface *)&(_result));

    deferred.Resolve(_to);
}

void ContourOnSurface_GetSurface_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_GetSegment_AsyncWorker::ContourOnSurface_GetSegment_AsyncWorker(MbContourOnSurface *_underlying,
                                                                                 Napi::Promise::Deferred const &d,
                                                                                 size_t index)
    : _underlying(_underlying), PromiseWorker(d), index(index){};

void ContourOnSurface_GetSegment_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbCurve *_result = _underlying->GetSegment(index);

    this->_result = _result;

    ExitParallelRegion();
}

void ContourOnSurface_GetSegment_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbCurve *_result = this->_result;
    if (_result != NULL)
    {
        _to = Curve::NewInstance(env, (MbCurve *)_result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void ContourOnSurface_GetSegment_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_GetSegmentsCount_AsyncWorker::ContourOnSurface_GetSegmentsCount_AsyncWorker(
    MbContourOnSurface *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ContourOnSurface_GetSegmentsCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    size_t _result = _underlying->GetSegmentsCount();

    this->_result = _result;

    ExitParallelRegion();
}

void ContourOnSurface_GetSegmentsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    size_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ContourOnSurface_GetSegmentsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                           Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_GetPlaneCurve_AsyncWorker::ContourOnSurface_GetPlaneCurve_AsyncWorker(MbContourOnSurface *_underlying,
                                                                                       Napi::Promise::Deferred const &d,
                                                                                       bool saveParams,
                                                                                       PlanarCheckParams params)
    : _underlying(_underlying), PromiseWorker(d), saveParams(saveParams), params(params){};

void ContourOnSurface_GetPlaneCurve_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCurve *curve2d = NULL;
    MbPlacement3D *placement = new MbPlacement3D;

    bool _result = _underlying->GetPlaneCurve(curve2d, *placement, saveParams, params);

    if (_result)
    {

        this->curve2d = curve2d;
        this->placement = placement;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation GetPlaneCurve failed";
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ContourOnSurface_GetPlaneCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    Napi::Object _toReturn = Napi::Object::New(env);

    MbCurve *curve2d = this->curve2d;
    if (curve2d != NULL)
    {
        _to = Curve::NewInstance(env, (MbCurve *)curve2d);
    }
    else
    {
        _to = env.Null();
    }

    _toReturn.Set(Napi::String::New(env, "curve2d"), _to);
    MbPlacement3D *placement = this->placement;
    if (placement != NULL)
    {
        _to = Placement3D::NewInstance(env, (MbPlacement3D *)placement);
    }
    else
    {
        _to = env.Null();
    }

    _toReturn.Set(Napi::String::New(env, "placement"), _to);

    deferred.Resolve(_toReturn);
}

void ContourOnSurface_GetPlaneCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                        Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_IsPlanar_AsyncWorker::ContourOnSurface_IsPlanar_AsyncWorker(MbContourOnSurface *_underlying,
                                                                             Napi::Promise::Deferred const &d,
                                                                             double accuracy)
    : _underlying(_underlying), PromiseWorker(d), accuracy(accuracy){};

void ContourOnSurface_IsPlanar_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsPlanar(accuracy);

    this->_result = _result;

    ExitParallelRegion();
}

void ContourOnSurface_IsPlanar_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void ContourOnSurface_IsPlanar_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_IsClosed_AsyncWorker::ContourOnSurface_IsClosed_AsyncWorker(MbContourOnSurface *_underlying,
                                                                             Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ContourOnSurface_IsClosed_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsClosed();

    this->_result = _result;

    ExitParallelRegion();
}

void ContourOnSurface_IsClosed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void ContourOnSurface_IsClosed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_IsTouch_AsyncWorker::ContourOnSurface_IsTouch_AsyncWorker(MbContourOnSurface *_underlying,
                                                                           Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ContourOnSurface_IsTouch_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsTouch();

    this->_result = _result;

    ExitParallelRegion();
}

void ContourOnSurface_IsTouch_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void ContourOnSurface_IsTouch_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_GetTMax_AsyncWorker::ContourOnSurface_GetTMax_AsyncWorker(MbContourOnSurface *_underlying,
                                                                           Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ContourOnSurface_GetTMax_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetTMax();

    this->_result = _result;

    ExitParallelRegion();
}

void ContourOnSurface_GetTMax_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ContourOnSurface_GetTMax_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_GetTMin_AsyncWorker::ContourOnSurface_GetTMin_AsyncWorker(MbContourOnSurface *_underlying,
                                                                           Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ContourOnSurface_GetTMin_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetTMin();

    this->_result = _result;

    ExitParallelRegion();
}

void ContourOnSurface_GetTMin_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ContourOnSurface_GetTMin_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_GetPeriod_AsyncWorker::ContourOnSurface_GetPeriod_AsyncWorker(MbContourOnSurface *_underlying,
                                                                               Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ContourOnSurface_GetPeriod_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetPeriod();

    this->_result = _result;

    ExitParallelRegion();
}

void ContourOnSurface_GetPeriod_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ContourOnSurface_GetPeriod_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_IsPeriodic_AsyncWorker::ContourOnSurface_IsPeriodic_AsyncWorker(MbContourOnSurface *_underlying,
                                                                                 Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ContourOnSurface_IsPeriodic_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsPeriodic();

    this->_result = _result;

    ExitParallelRegion();
}

void ContourOnSurface_IsPeriodic_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void ContourOnSurface_IsPeriodic_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_IsStraight_AsyncWorker::ContourOnSurface_IsStraight_AsyncWorker(MbContourOnSurface *_underlying,
                                                                                 Napi::Promise::Deferred const &d,
                                                                                 bool ignoreParams)
    : _underlying(_underlying), PromiseWorker(d), ignoreParams(ignoreParams){};

void ContourOnSurface_IsStraight_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsStraight(ignoreParams);

    this->_result = _result;

    ExitParallelRegion();
}

void ContourOnSurface_IsStraight_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void ContourOnSurface_IsStraight_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_Trimmed_AsyncWorker::ContourOnSurface_Trimmed_AsyncWorker(MbContourOnSurface *_underlying,
                                                                           Napi::Promise::Deferred const &d, double t1,
                                                                           double t2, int sense)
    : _underlying(_underlying), PromiseWorker(d), t1(t1), t2(t2), sense(sense){};

void ContourOnSurface_Trimmed_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCurve3D *_result = _underlying->Trimmed(t1, t2, sense);

    this->_result = _result;

    ExitParallelRegion();
}

void ContourOnSurface_Trimmed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ContourOnSurface_Trimmed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_Normal_AsyncWorker::ContourOnSurface_Normal_AsyncWorker(MbContourOnSurface *_underlying,
                                                                         Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void ContourOnSurface_Normal_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector3D *n = new MbVector3D;

    _underlying->Normal(t, *n);

    this->n = n;

    ExitParallelRegion();
}

void ContourOnSurface_Normal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbVector3D *n = this->n;
    if (n != NULL)
    {
        _to = Vector3D::NewInstance(env, (MbVector3D *)n);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void ContourOnSurface_Normal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_Tangent_AsyncWorker::ContourOnSurface_Tangent_AsyncWorker(MbContourOnSurface *_underlying,
                                                                           Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void ContourOnSurface_Tangent_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector3D *tan = new MbVector3D;

    _underlying->Tangent(t, *tan);

    this->tan = tan;

    ExitParallelRegion();
}

void ContourOnSurface_Tangent_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbVector3D *tan = this->tan;
    if (tan != NULL)
    {
        _to = Vector3D::NewInstance(env, (MbVector3D *)tan);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void ContourOnSurface_Tangent_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_BNormal_AsyncWorker::ContourOnSurface_BNormal_AsyncWorker(MbContourOnSurface *_underlying,
                                                                           Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void ContourOnSurface_BNormal_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector3D *b = new MbVector3D;

    _underlying->BNormal(t, *b);

    this->b = b;

    ExitParallelRegion();
}

void ContourOnSurface_BNormal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbVector3D *b = this->b;
    if (b != NULL)
    {
        _to = Vector3D::NewInstance(env, (MbVector3D *)b);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void ContourOnSurface_BNormal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_GetCentre_AsyncWorker::ContourOnSurface_GetCentre_AsyncWorker(MbContourOnSurface *_underlying,
                                                                               Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ContourOnSurface_GetCentre_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint3D *c = new MbCartPoint3D;

    _underlying->GetCentre(*c);

    this->c = c;

    ExitParallelRegion();
}

void ContourOnSurface_GetCentre_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbCartPoint3D *c = this->c;
    if (c != NULL)
    {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)c);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void ContourOnSurface_GetCentre_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_GetLimitPoint_AsyncWorker::ContourOnSurface_GetLimitPoint_AsyncWorker(MbContourOnSurface *_underlying,
                                                                                       Napi::Promise::Deferred const &d,
                                                                                       ptrdiff_t number)
    : _underlying(_underlying), PromiseWorker(d), number(number){};

void ContourOnSurface_GetLimitPoint_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint3D *point = new MbCartPoint3D;

    _underlying->GetLimitPoint(number, *point);

    this->point = point;

    ExitParallelRegion();
}

void ContourOnSurface_GetLimitPoint_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbCartPoint3D *point = this->point;
    if (point != NULL)
    {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)point);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void ContourOnSurface_GetLimitPoint_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                        Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_PointOn_AsyncWorker::ContourOnSurface_PointOn_AsyncWorker(MbContourOnSurface *_underlying,
                                                                           Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void ContourOnSurface_PointOn_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint3D *p = new MbCartPoint3D;

    _underlying->PointOn(t, *p);

    this->p = p;

    ExitParallelRegion();
}

void ContourOnSurface_PointOn_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ContourOnSurface_PointOn_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface__PointOn_AsyncWorker::ContourOnSurface__PointOn_AsyncWorker(MbContourOnSurface *_underlying,
                                                                             Napi::Promise::Deferred const &d,
                                                                             double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void ContourOnSurface__PointOn_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint3D *p = new MbCartPoint3D;

    _underlying->_PointOn(t, *p);

    this->p = p;

    ExitParallelRegion();
}

void ContourOnSurface__PointOn_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ContourOnSurface__PointOn_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_NearPointProjection_AsyncWorker::ContourOnSurface_NearPointProjection_AsyncWorker(
    MbContourOnSurface *_underlying, Napi::Promise::Deferred const &d, const MbCartPoint3D &pnt, bool ext,
    MbRect1D *tRange)
    : _underlying(_underlying), PromiseWorker(d), pnt(pnt), ext(ext), tRange(tRange){};

void ContourOnSurface_NearPointProjection_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double t;

    bool success = _underlying->NearPointProjection(pnt, t, ext, tRange);

    this->success = success;
    this->t = t;

    ExitParallelRegion();
}

void ContourOnSurface_NearPointProjection_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    Napi::Object _toReturn = Napi::Object::New(env);

    bool success = this->success;
    _to = Napi::Boolean::New(env, success);

    _toReturn.Set(Napi::String::New(env, "success"), _to);
    double t = this->t;
    _to = Napi::Number::New(env, t);

    _toReturn.Set(Napi::String::New(env, "t"), _to);

    deferred.Resolve(_toReturn);
}

void ContourOnSurface_NearPointProjection_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                              Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_GetSurfaceCurve_AsyncWorker::ContourOnSurface_GetSurfaceCurve_AsyncWorker(
    MbContourOnSurface *_underlying, Napi::Promise::Deferred const &d, VERSION version)
    : _underlying(_underlying), PromiseWorker(d), version(version){};

void ContourOnSurface_GetSurfaceCurve_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCurve *curve2d = NULL;
    MbSurface *surface = NULL;

    bool _result = _underlying->GetSurfaceCurve(curve2d, surface, version);

    if (_result)
    {

        this->curve2d = curve2d;
        this->surface = surface;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation GetSurfaceCurve failed";
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ContourOnSurface_GetSurfaceCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    Napi::Object _toReturn = Napi::Object::New(env);

    MbCurve *curve2d = this->curve2d;
    if (curve2d != NULL)
    {
        _to = Curve::NewInstance(env, (MbCurve *)curve2d);
    }
    else
    {
        _to = env.Null();
    }

    _toReturn.Set(Napi::String::New(env, "curve2d"), _to);
    MbSurface *surface = this->surface;
    if (surface != NULL)
    {
        _to = Surface::NewInstance(env, (MbSurface *)surface);
    }
    else
    {
        _to = env.Null();
    }

    _toReturn.Set(Napi::String::New(env, "surface"), _to);

    deferred.Resolve(_toReturn);
}

void ContourOnSurface_GetSurfaceCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                          Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_GetWeightCentre_AsyncWorker::ContourOnSurface_GetWeightCentre_AsyncWorker(
    MbContourOnSurface *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ContourOnSurface_GetWeightCentre_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint3D *point = new MbCartPoint3D;

    _underlying->GetWeightCentre(*point);

    this->point = point;

    ExitParallelRegion();
}

void ContourOnSurface_GetWeightCentre_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbCartPoint3D *point = this->point;
    if (point != NULL)
    {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)point);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void ContourOnSurface_GetWeightCentre_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                          Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_GetBasisCurve_AsyncWorker::ContourOnSurface_GetBasisCurve_AsyncWorker(MbContourOnSurface *_underlying,
                                                                                       Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ContourOnSurface_GetBasisCurve_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbCurve3D &_result = _underlying->GetBasisCurve();

    this->_result = (MbCurve3D *)&(_result);

    ExitParallelRegion();
}

void ContourOnSurface_GetBasisCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbCurve3D *_result = this->_result;
    _to = Curve3D::NewInstance(env, (MbCurve3D *)&(_result));

    deferred.Resolve(_to);
}

void ContourOnSurface_GetBasisCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                        Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_GetBasisPoints_AsyncWorker::ContourOnSurface_GetBasisPoints_AsyncWorker(
    MbContourOnSurface *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ContourOnSurface_GetBasisPoints_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbControlData3D *cd = new MbControlData3D;

    _underlying->GetBasisPoints(*cd);

    this->cd = cd;

    ExitParallelRegion();
}

void ContourOnSurface_GetBasisPoints_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbControlData3D *cd = this->cd;
    if (cd != NULL)
    {
        _to = ControlData3D::NewInstance(env, (MbControlData3D *)cd);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void ContourOnSurface_GetBasisPoints_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                         Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_SetBasisPoints_AsyncWorker::ContourOnSurface_SetBasisPoints_AsyncWorker(
    MbContourOnSurface *_underlying, Napi::Promise::Deferred const &d, const MbControlData3D &cd)
    : _underlying(_underlying), PromiseWorker(d), cd(cd){};

void ContourOnSurface_SetBasisPoints_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetBasisPoints(cd);

    ExitParallelRegion();
}

void ContourOnSurface_SetBasisPoints_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void ContourOnSurface_SetBasisPoints_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                         Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_Inverse_AsyncWorker::ContourOnSurface_Inverse_AsyncWorker(MbContourOnSurface *_underlying,
                                                                           Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ContourOnSurface_Inverse_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Inverse();

    ExitParallelRegion();
}

void ContourOnSurface_Inverse_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void ContourOnSurface_Inverse_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_GetProjection_AsyncWorker::ContourOnSurface_GetProjection_AsyncWorker(MbContourOnSurface *_underlying,
                                                                                       Napi::Promise::Deferred const &d,
                                                                                       const MbPlacement3D &place,
                                                                                       VERSION version)
    : _underlying(_underlying), PromiseWorker(d), place(place), version(version){};

void ContourOnSurface_GetProjection_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCurve *_result = _underlying->GetProjection(place, version);

    this->_result = _result;

    ExitParallelRegion();
}

void ContourOnSurface_GetProjection_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbCurve *_result = this->_result;
    if (_result != NULL)
    {
        _to = Curve::NewInstance(env, (MbCurve *)_result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void ContourOnSurface_GetProjection_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                        Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_GetCircleAxis_AsyncWorker::ContourOnSurface_GetCircleAxis_AsyncWorker(MbContourOnSurface *_underlying,
                                                                                       Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ContourOnSurface_GetCircleAxis_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbAxis3D *axis = new MbAxis3D;

    bool success = _underlying->GetCircleAxis(*axis);

    this->success = success;
    this->axis = axis;

    ExitParallelRegion();
}

void ContourOnSurface_GetCircleAxis_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    Napi::Object _toReturn = Napi::Object::New(env);

    bool success = this->success;
    _to = Napi::Boolean::New(env, success);

    _toReturn.Set(Napi::String::New(env, "success"), _to);
    MbAxis3D *axis = this->axis;
    if (axis != NULL)
    {
        _to = Axis3D::NewInstance(env, (MbAxis3D *)axis);
    }
    else
    {
        _to = env.Null();
    }

    _toReturn.Set(Napi::String::New(env, "axis"), _to);

    deferred.Resolve(_toReturn);
}

void ContourOnSurface_GetCircleAxis_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                        Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_IsA_AsyncWorker::ContourOnSurface_IsA_AsyncWorker(MbContourOnSurface *_underlying,
                                                                   Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ContourOnSurface_IsA_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeSpaceType _result = _underlying->IsA();

    this->_result = _result;

    ExitParallelRegion();
}

void ContourOnSurface_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeSpaceType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ContourOnSurface_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_Type_AsyncWorker::ContourOnSurface_Type_AsyncWorker(MbContourOnSurface *_underlying,
                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ContourOnSurface_Type_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeSpaceType _result = _underlying->Type();

    this->_result = _result;

    ExitParallelRegion();
}

void ContourOnSurface_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeSpaceType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ContourOnSurface_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_Family_AsyncWorker::ContourOnSurface_Family_AsyncWorker(MbContourOnSurface *_underlying,
                                                                         Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ContourOnSurface_Family_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeSpaceType _result = _underlying->Family();

    this->_result = _result;

    ExitParallelRegion();
}

void ContourOnSurface_Family_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeSpaceType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ContourOnSurface_Family_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_Transform_AsyncWorker::ContourOnSurface_Transform_AsyncWorker(MbContourOnSurface *_underlying,
                                                                               Napi::Promise::Deferred const &d,
                                                                               const MbMatrix3D &mat,
                                                                               MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), mat(mat), iReg(iReg){};

void ContourOnSurface_Transform_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Transform(mat, iReg);

    ExitParallelRegion();
}

void ContourOnSurface_Transform_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void ContourOnSurface_Transform_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_Move_AsyncWorker::ContourOnSurface_Move_AsyncWorker(MbContourOnSurface *_underlying,
                                                                     Napi::Promise::Deferred const &d,
                                                                     const MbVector3D &v, MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), v(v), iReg(iReg){};

void ContourOnSurface_Move_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Move(v, iReg);

    ExitParallelRegion();
}

void ContourOnSurface_Move_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void ContourOnSurface_Move_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_Rotate_AsyncWorker::ContourOnSurface_Rotate_AsyncWorker(MbContourOnSurface *_underlying,
                                                                         Napi::Promise::Deferred const &d,
                                                                         const MbAxis3D &axis, double angle,
                                                                         MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), axis(axis), angle(angle), iReg(iReg){};

void ContourOnSurface_Rotate_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Rotate(axis, angle, iReg);

    ExitParallelRegion();
}

void ContourOnSurface_Rotate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void ContourOnSurface_Rotate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_Refresh_AsyncWorker::ContourOnSurface_Refresh_AsyncWorker(MbContourOnSurface *_underlying,
                                                                           Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ContourOnSurface_Refresh_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Refresh();

    ExitParallelRegion();
}

void ContourOnSurface_Refresh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void ContourOnSurface_Refresh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_Duplicate_AsyncWorker::ContourOnSurface_Duplicate_AsyncWorker(MbContourOnSurface *_underlying,
                                                                               Napi::Promise::Deferred const &d,
                                                                               MbRegDuplicate *iReg)
    : _underlying(_underlying), PromiseWorker(d), iReg(iReg){};

void ContourOnSurface_Duplicate_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbSpaceItem &_result = _underlying->Duplicate(iReg);

    this->_result = (MbSpaceItem *)&(_result);

    ExitParallelRegion();
}

void ContourOnSurface_Duplicate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbSpaceItem *_result = this->_result;
    _to = SpaceItem::NewInstance(env, (MbSpaceItem *)&(_result));

    deferred.Resolve(_to);
}

void ContourOnSurface_Duplicate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_AddYourGabaritTo_AsyncWorker::ContourOnSurface_AddYourGabaritTo_AsyncWorker(
    MbContourOnSurface *_underlying, Napi::Promise::Deferred const &d, MbCube &cube)
    : _underlying(_underlying), PromiseWorker(d), cube(cube){};

void ContourOnSurface_AddYourGabaritTo_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddYourGabaritTo(cube);

    ExitParallelRegion();
}

void ContourOnSurface_AddYourGabaritTo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void ContourOnSurface_AddYourGabaritTo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                           Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_GetUseCount_AsyncWorker::ContourOnSurface_GetUseCount_AsyncWorker(MbContourOnSurface *_underlying,
                                                                                   Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ContourOnSurface_GetUseCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    refcount_t _result = _underlying->GetUseCount();

    this->_result = _result;

    ExitParallelRegion();
}

void ContourOnSurface_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    refcount_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ContourOnSurface_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourOnSurface_AddRef_AsyncWorker::ContourOnSurface_AddRef_AsyncWorker(MbContourOnSurface *_underlying,
                                                                         Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ContourOnSurface_AddRef_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddRef();

    ExitParallelRegion();
}

void ContourOnSurface_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void ContourOnSurface_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
