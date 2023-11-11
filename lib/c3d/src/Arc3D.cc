// This is a generated file, modify: generate/templates/Arc3D.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/Arc3D.h"

#include "tool_mutex.h"

Napi::Object Arc3D::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func =
        DefineClass(env, "Arc3D",
                    {
                        InstanceMethod<&Arc3D::SetLimitPoint>("SetLimitPoint"),
                        InstanceMethod<&Arc3D::SetLimitPoint_async>("SetLimitPoint_async"),
                        InstanceMethod<&Arc3D::SetRadius>("SetRadius"),
                        InstanceMethod<&Arc3D::SetRadius_async>("SetRadius_async"),
                        InstanceMethod<&Arc3D::SetRadiusA>("SetRadiusA"),
                        InstanceMethod<&Arc3D::SetRadiusA_async>("SetRadiusA_async"),
                        InstanceMethod<&Arc3D::SetRadiusB>("SetRadiusB"),
                        InstanceMethod<&Arc3D::SetRadiusB_async>("SetRadiusB_async"),
                        InstanceMethod<&Arc3D::GetRadius>("GetRadius"),
                        InstanceMethod<&Arc3D::GetRadius_async>("GetRadius_async"),
                        InstanceMethod<&Arc3D::GetRadiusA>("GetRadiusA"),
                        InstanceMethod<&Arc3D::GetRadiusA_async>("GetRadiusA_async"),
                        InstanceMethod<&Arc3D::GetRadiusB>("GetRadiusB"),
                        InstanceMethod<&Arc3D::GetRadiusB_async>("GetRadiusB_async"),
                        InstanceMethod<&Arc3D::GetAngle>("GetAngle"),
                        InstanceMethod<&Arc3D::GetAngle_async>("GetAngle_async"),
                        InstanceMethod<&Arc3D::SetAngle>("SetAngle"),
                        InstanceMethod<&Arc3D::SetAngle_async>("SetAngle_async"),
                        InstanceMethod<&Arc3D::MakeTrimmed>("MakeTrimmed"),
                        InstanceMethod<&Arc3D::MakeTrimmed_async>("MakeTrimmed_async"),
                        InstanceMethod<&Arc3D::GetTrim1>("GetTrim1"),
                        InstanceMethod<&Arc3D::GetTrim1_async>("GetTrim1_async"),
                        InstanceMethod<&Arc3D::GetTrim2>("GetTrim2"),
                        InstanceMethod<&Arc3D::GetTrim2_async>("GetTrim2_async"),
                        InstanceMethod<&Arc3D::GetPlaneCurve>("GetPlaneCurve"),
                        InstanceMethod<&Arc3D::GetPlaneCurve_async>("GetPlaneCurve_async"),
                        InstanceMethod<&Arc3D::IsPlanar>("IsPlanar"),
                        InstanceMethod<&Arc3D::IsPlanar_async>("IsPlanar_async"),
                        InstanceMethod<&Arc3D::IsClosed>("IsClosed"),
                        InstanceMethod<&Arc3D::IsClosed_async>("IsClosed_async"),
                        InstanceMethod<&Arc3D::IsTouch>("IsTouch"),
                        InstanceMethod<&Arc3D::IsTouch_async>("IsTouch_async"),
                        InstanceMethod<&Arc3D::GetTMax>("GetTMax"),
                        InstanceMethod<&Arc3D::GetTMax_async>("GetTMax_async"),
                        InstanceMethod<&Arc3D::GetTMin>("GetTMin"),
                        InstanceMethod<&Arc3D::GetTMin_async>("GetTMin_async"),
                        InstanceMethod<&Arc3D::GetPeriod>("GetPeriod"),
                        InstanceMethod<&Arc3D::GetPeriod_async>("GetPeriod_async"),
                        InstanceMethod<&Arc3D::IsPeriodic>("IsPeriodic"),
                        InstanceMethod<&Arc3D::IsPeriodic_async>("IsPeriodic_async"),
                        InstanceMethod<&Arc3D::IsStraight>("IsStraight"),
                        InstanceMethod<&Arc3D::IsStraight_async>("IsStraight_async"),
                        InstanceMethod<&Arc3D::Trimmed>("Trimmed"),
                        InstanceMethod<&Arc3D::Trimmed_async>("Trimmed_async"),
                        InstanceMethod<&Arc3D::Normal>("Normal"),
                        InstanceMethod<&Arc3D::Normal_async>("Normal_async"),
                        InstanceMethod<&Arc3D::Tangent>("Tangent"),
                        InstanceMethod<&Arc3D::Tangent_async>("Tangent_async"),
                        InstanceMethod<&Arc3D::BNormal>("BNormal"),
                        InstanceMethod<&Arc3D::BNormal_async>("BNormal_async"),
                        InstanceMethod<&Arc3D::GetCentre>("GetCentre"),
                        InstanceMethod<&Arc3D::GetCentre_async>("GetCentre_async"),
                        InstanceMethod<&Arc3D::GetLimitPoint>("GetLimitPoint"),
                        InstanceMethod<&Arc3D::GetLimitPoint_async>("GetLimitPoint_async"),
                        InstanceMethod<&Arc3D::PointOn>("PointOn"),
                        InstanceMethod<&Arc3D::PointOn_async>("PointOn_async"),
                        InstanceMethod<&Arc3D::_PointOn>("_PointOn"),
                        InstanceMethod<&Arc3D::_PointOn_async>("_PointOn_async"),
                        InstanceMethod<&Arc3D::NearPointProjection>("NearPointProjection"),
                        InstanceMethod<&Arc3D::NearPointProjection_async>("NearPointProjection_async"),
                        InstanceMethod<&Arc3D::GetSurfaceCurve>("GetSurfaceCurve"),
                        InstanceMethod<&Arc3D::GetSurfaceCurve_async>("GetSurfaceCurve_async"),
                        InstanceMethod<&Arc3D::GetWeightCentre>("GetWeightCentre"),
                        InstanceMethod<&Arc3D::GetWeightCentre_async>("GetWeightCentre_async"),
                        InstanceMethod<&Arc3D::GetBasisCurve>("GetBasisCurve"),
                        InstanceMethod<&Arc3D::GetBasisCurve_async>("GetBasisCurve_async"),
                        InstanceMethod<&Arc3D::GetBasisPoints>("GetBasisPoints"),
                        InstanceMethod<&Arc3D::GetBasisPoints_async>("GetBasisPoints_async"),
                        InstanceMethod<&Arc3D::SetBasisPoints>("SetBasisPoints"),
                        InstanceMethod<&Arc3D::SetBasisPoints_async>("SetBasisPoints_async"),
                        InstanceMethod<&Arc3D::Inverse>("Inverse"),
                        InstanceMethod<&Arc3D::Inverse_async>("Inverse_async"),
                        InstanceMethod<&Arc3D::GetProjection>("GetProjection"),
                        InstanceMethod<&Arc3D::GetProjection_async>("GetProjection_async"),
                        InstanceMethod<&Arc3D::GetCircleAxis>("GetCircleAxis"),
                        InstanceMethod<&Arc3D::GetCircleAxis_async>("GetCircleAxis_async"),
                        InstanceMethod<&Arc3D::IsA>("IsA"),
                        InstanceMethod<&Arc3D::IsA_async>("IsA_async"),
                        InstanceMethod<&Arc3D::Type>("Type"),
                        InstanceMethod<&Arc3D::Type_async>("Type_async"),
                        InstanceMethod<&Arc3D::Family>("Family"),
                        InstanceMethod<&Arc3D::Family_async>("Family_async"),
                        InstanceMethod<&Arc3D::Transform>("Transform"),
                        InstanceMethod<&Arc3D::Transform_async>("Transform_async"),
                        InstanceMethod<&Arc3D::Move>("Move"),
                        InstanceMethod<&Arc3D::Move_async>("Move_async"),
                        InstanceMethod<&Arc3D::Rotate>("Rotate"),
                        InstanceMethod<&Arc3D::Rotate_async>("Rotate_async"),
                        InstanceMethod<&Arc3D::Refresh>("Refresh"),
                        InstanceMethod<&Arc3D::Refresh_async>("Refresh_async"),
                        InstanceMethod<&Arc3D::Duplicate>("Duplicate"),
                        InstanceMethod<&Arc3D::Duplicate_async>("Duplicate_async"),
                        InstanceMethod<&Arc3D::AddYourGabaritTo>("AddYourGabaritTo"),
                        InstanceMethod<&Arc3D::AddYourGabaritTo_async>("AddYourGabaritTo_async"),
                        InstanceMethod<&Arc3D::GetUseCount>("GetUseCount"),
                        InstanceMethod<&Arc3D::GetUseCount_async>("GetUseCount_async"),
                        InstanceMethod<&Arc3D::AddRef>("AddRef"),
                        InstanceMethod<&Arc3D::AddRef_async>("AddRef_async"),
                        InstanceMethod<&Arc3D::Id>("Id"),

                    });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Arc3D", func);

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

Arc3D::Arc3D(const Napi::CallbackInfo &info) : Napi::ObjectWrap<Arc3D>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 5 &&
        ((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))) &&
        ((info[1].IsObject() && info[1].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))) &&
        ((info[2].IsObject() && info[2].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))) &&
        ((info[3].IsNumber())) && ((info[4].IsBoolean()))

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

        if (info[2].IsNull() || info[2].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'p2'").ThrowAsJavaScriptException();
            return;
        }
        const class CartPoint3D *p2_ = CartPoint3D::Unwrap(info[2].ToObject());

        const MbCartPoint3D &p2 = *p2_->_underlying;

        int n = info[3].ToNumber().Int64Value();

        bool closed = info[4].ToBoolean();

        MbArc3D *underlying = new MbArc3D(p0, p1, p2, n, closed);
        if (underlying == NULL)
        {
            Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
            return;
        }
        underlying->AddRef();
        this->_underlying = underlying;
    }
    else if (info.Length() == 4 &&
             ((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))) &&
             ((info[1].IsObject() && info[1].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))) &&
             ((info[2].IsObject() && info[2].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))) &&
             ((info[3].IsNumber()) || (info[3].IsNull() || info[3].IsUndefined()))

    )
    {
        if (info[0].IsNull() || info[0].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'pc'").ThrowAsJavaScriptException();
            return;
        }
        const class CartPoint3D *pc_ = CartPoint3D::Unwrap(info[0].ToObject());

        const MbCartPoint3D &pc = *pc_->_underlying;

        if (info[1].IsNull() || info[1].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'p1'").ThrowAsJavaScriptException();
            return;
        }
        const class CartPoint3D *p1_ = CartPoint3D::Unwrap(info[1].ToObject());

        const MbCartPoint3D &p1 = *p1_->_underlying;

        if (info[2].IsNull() || info[2].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'p2'").ThrowAsJavaScriptException();
            return;
        }
        const class CartPoint3D *p2_ = CartPoint3D::Unwrap(info[2].ToObject());

        const MbCartPoint3D &p2 = *p2_->_underlying;

        int initSense = info[3].ToNumber().Int64Value();

        MbArc3D *underlying = new MbArc3D(pc, p1, p2, initSense);
        if (underlying == NULL)
        {
            Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
            return;
        }
        underlying->AddRef();
        this->_underlying = underlying;
    }
    else if (info.Length() == 4 &&
             ((info[0].IsObject() && info[0].ToObject().InstanceOf(Placement3D::GetConstructor(env)))) &&
             ((info[1].IsNumber())) && ((info[2].IsNumber())) && ((info[3].IsNumber()))

    )
    {
        if (info[0].IsNull() || info[0].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'place'").ThrowAsJavaScriptException();
            return;
        }
        const class Placement3D *place_ = Placement3D::Unwrap(info[0].ToObject());

        const MbPlacement3D &place = *place_->_underlying;

        double aa = info[1].ToNumber().DoubleValue();

        double bb = info[2].ToNumber().DoubleValue();

        double angle = info[3].ToNumber().DoubleValue();

        MbArc3D *underlying = new MbArc3D(place, aa, bb, angle);
        if (underlying == NULL)
        {
            Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
            return;
        }
        underlying->AddRef();
        this->_underlying = underlying;
    }
    else if (info.Length() == 5 &&
             ((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))) &&
             ((info[1].IsObject() && info[1].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))) &&
             ((info[2].IsObject() && info[2].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))) &&
             ((info[3].IsObject() && info[3].ToObject().InstanceOf(Vector3D::GetConstructor(env)))) &&
             ((info[4].IsNumber()))

    )
    {
        if (info[0].IsNull() || info[0].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'pc'").ThrowAsJavaScriptException();
            return;
        }
        const class CartPoint3D *pc_ = CartPoint3D::Unwrap(info[0].ToObject());

        const MbCartPoint3D &pc = *pc_->_underlying;

        if (info[1].IsNull() || info[1].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'p1'").ThrowAsJavaScriptException();
            return;
        }
        const class CartPoint3D *p1_ = CartPoint3D::Unwrap(info[1].ToObject());

        const MbCartPoint3D &p1 = *p1_->_underlying;

        if (info[2].IsNull() || info[2].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'p2'").ThrowAsJavaScriptException();
            return;
        }
        const class CartPoint3D *p2_ = CartPoint3D::Unwrap(info[2].ToObject());

        const MbCartPoint3D &p2 = *p2_->_underlying;

        if (info[3].IsNull() || info[3].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'aZ'").ThrowAsJavaScriptException();
            return;
        }
        const class Vector3D *aZ_ = Vector3D::Unwrap(info[3].ToObject());

        const MbVector3D &aZ = *aZ_->_underlying;

        int initSense = info[4].ToNumber().Int64Value();

        MbArc3D *underlying = new MbArc3D(pc, p1, p2, aZ, initSense);
        if (underlying == NULL)
        {
            Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
            return;
        }
        underlying->AddRef();
        this->_underlying = underlying;
    }
    else if (info.Length() == 2 && ((info[0].IsObject() && info[0].ToObject().InstanceOf(Arc::GetConstructor(env)))) &&
             ((info[1].IsObject() && info[1].ToObject().InstanceOf(Placement3D::GetConstructor(env))))

    )
    {
        if (info[0].IsNull() || info[0].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'ellipse'").ThrowAsJavaScriptException();
            return;
        }
        const class Arc *ellipse_ = Arc::Unwrap(info[0].ToObject());

        const MbArc &ellipse = *ellipse_->_underlying;

        if (info[1].IsNull() || info[1].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'place'").ThrowAsJavaScriptException();
            return;
        }
        const class Placement3D *place_ = Placement3D::Unwrap(info[1].ToObject());

        const MbPlacement3D &place = *place_->_underlying;

        MbArc3D *underlying = new MbArc3D(ellipse, place);
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

Napi::Object Arc3D::NewInstance(Napi::Env env, MbArc3D *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Arc3D");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Arc3D *unwrapped = Arc3D::Unwrap(inst);
    underlying->AddRef();
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Arc3D::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Arc3D");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value Arc3D::SetLimitPoint(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "ptrdiff_t number is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 ||
        !((info[1].IsObject() && info[1].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "CartPoint3D pnt is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    int number = info[0].ToNumber().Int64Value();

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'pnt'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class CartPoint3D *pnt_ = CartPoint3D::Unwrap(info[1].ToObject());

    const MbCartPoint3D &pnt = *pnt_->_underlying;

    _underlying->SetLimitPoint(number, pnt

    );

    return env.Undefined();
}

Napi::Value Arc3D::SetLimitPoint_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "ptrdiff_t number is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 ||
        !((info[1].IsObject() && info[1].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "CartPoint3D pnt is required."));
        return deferred.Promise();
    }

    int number = info[0].ToNumber().Int64Value();

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'pnt'"));
        return deferred.Promise();
    }
    const class CartPoint3D *pnt_ = CartPoint3D::Unwrap(info[1].ToObject());

    const MbCartPoint3D &pnt = *pnt_->_underlying;

    Arc3D_SetLimitPoint_AsyncWorker *asyncWorker = new Arc3D_SetLimitPoint_AsyncWorker(_underlying, deferred,

                                                                                       number,

                                                                                       pnt);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::SetRadius(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number r is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    double r = info[0].ToNumber().DoubleValue();

    _underlying->SetRadius(r

    );

    return env.Undefined();
}

Napi::Value Arc3D::SetRadius_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number r is required."));
        return deferred.Promise();
    }

    double r = info[0].ToNumber().DoubleValue();

    Arc3D_SetRadius_AsyncWorker *asyncWorker = new Arc3D_SetRadius_AsyncWorker(_underlying, deferred,

                                                                               r);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::SetRadiusA(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number r is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    double r = info[0].ToNumber().DoubleValue();

    _underlying->SetRadiusA(r

    );

    return env.Undefined();
}

Napi::Value Arc3D::SetRadiusA_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number r is required."));
        return deferred.Promise();
    }

    double r = info[0].ToNumber().DoubleValue();

    Arc3D_SetRadiusA_AsyncWorker *asyncWorker = new Arc3D_SetRadiusA_AsyncWorker(_underlying, deferred,

                                                                                 r);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::SetRadiusB(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number r is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    double r = info[0].ToNumber().DoubleValue();

    _underlying->SetRadiusB(r

    );

    return env.Undefined();
}

Napi::Value Arc3D::SetRadiusB_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number r is required."));
        return deferred.Promise();
    }

    double r = info[0].ToNumber().DoubleValue();

    Arc3D_SetRadiusB_AsyncWorker *asyncWorker = new Arc3D_SetRadiusB_AsyncWorker(_underlying, deferred,

                                                                                 r);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::GetRadius(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetRadius(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Arc3D::GetRadius_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Arc3D_GetRadius_AsyncWorker *asyncWorker = new Arc3D_GetRadius_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::GetRadiusA(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetRadiusA(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Arc3D::GetRadiusA_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Arc3D_GetRadiusA_AsyncWorker *asyncWorker = new Arc3D_GetRadiusA_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::GetRadiusB(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetRadiusB(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Arc3D::GetRadiusB_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Arc3D_GetRadiusB_AsyncWorker *asyncWorker = new Arc3D_GetRadiusB_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::GetAngle(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetAngle(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Arc3D::GetAngle_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Arc3D_GetAngle_AsyncWorker *asyncWorker = new Arc3D_GetAngle_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::SetAngle(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number ang is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    double ang = info[0].ToNumber().DoubleValue();

    _underlying->SetAngle(ang

    );

    return env.Undefined();
}

Napi::Value Arc3D::SetAngle_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number ang is required."));
        return deferred.Promise();
    }

    double ang = info[0].ToNumber().DoubleValue();

    Arc3D_SetAngle_AsyncWorker *asyncWorker = new Arc3D_SetAngle_AsyncWorker(_underlying, deferred,

                                                                             ang);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::MakeTrimmed(const Napi::CallbackInfo &info)
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

    double t1 = info[0].ToNumber().DoubleValue();

    double t2 = info[1].ToNumber().DoubleValue();

    bool _result = _underlying->MakeTrimmed(t1, t2

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value Arc3D::MakeTrimmed_async(const Napi::CallbackInfo &info)
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

    double t1 = info[0].ToNumber().DoubleValue();

    double t2 = info[1].ToNumber().DoubleValue();

    Arc3D_MakeTrimmed_AsyncWorker *asyncWorker = new Arc3D_MakeTrimmed_AsyncWorker(_underlying, deferred,

                                                                                   t1,

                                                                                   t2);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::GetTrim1(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetTrim1(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Arc3D::GetTrim1_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Arc3D_GetTrim1_AsyncWorker *asyncWorker = new Arc3D_GetTrim1_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::GetTrim2(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetTrim2(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Arc3D::GetTrim2_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Arc3D_GetTrim2_AsyncWorker *asyncWorker = new Arc3D_GetTrim2_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::GetPlaneCurve(const Napi::CallbackInfo &info)
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

Napi::Value Arc3D::GetPlaneCurve_async(const Napi::CallbackInfo &info)
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

    Arc3D_GetPlaneCurve_AsyncWorker *asyncWorker = new Arc3D_GetPlaneCurve_AsyncWorker(_underlying, deferred,

                                                                                       saveParams,

                                                                                       params);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::IsPlanar(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double accuracy = info[0].ToNumber().DoubleValue();

    bool _result = _underlying->IsPlanar(info.Length() == 0 || info[0].IsNull() ? METRIC_EPSILON : accuracy

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value Arc3D::IsPlanar_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    double accuracy = info[0].ToNumber().DoubleValue();

    Arc3D_IsPlanar_AsyncWorker *asyncWorker = new Arc3D_IsPlanar_AsyncWorker(_underlying, deferred,

                                                                             accuracy);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::IsClosed(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool _result = _underlying->IsClosed(

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value Arc3D::IsClosed_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Arc3D_IsClosed_AsyncWorker *asyncWorker = new Arc3D_IsClosed_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::IsTouch(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool _result = _underlying->IsTouch(

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value Arc3D::IsTouch_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Arc3D_IsTouch_AsyncWorker *asyncWorker = new Arc3D_IsTouch_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::GetTMax(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetTMax(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Arc3D::GetTMax_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Arc3D_GetTMax_AsyncWorker *asyncWorker = new Arc3D_GetTMax_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::GetTMin(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetTMin(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Arc3D::GetTMin_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Arc3D_GetTMin_AsyncWorker *asyncWorker = new Arc3D_GetTMin_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::GetPeriod(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    double _result = _underlying->GetPeriod(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Arc3D::GetPeriod_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Arc3D_GetPeriod_AsyncWorker *asyncWorker = new Arc3D_GetPeriod_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::IsPeriodic(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool _result = _underlying->IsPeriodic(

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value Arc3D::IsPeriodic_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Arc3D_IsPeriodic_AsyncWorker *asyncWorker = new Arc3D_IsPeriodic_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::IsStraight(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool ignoreParams = info[0].ToBoolean();

    bool _result = _underlying->IsStraight(info.Length() == 0 || info[0].IsNull() ? false : ignoreParams

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value Arc3D::IsStraight_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    bool ignoreParams = info[0].ToBoolean();

    Arc3D_IsStraight_AsyncWorker *asyncWorker = new Arc3D_IsStraight_AsyncWorker(_underlying, deferred,

                                                                                 ignoreParams);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::Trimmed(const Napi::CallbackInfo &info)
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

Napi::Value Arc3D::Trimmed_async(const Napi::CallbackInfo &info)
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

    Arc3D_Trimmed_AsyncWorker *asyncWorker = new Arc3D_Trimmed_AsyncWorker(_underlying, deferred,

                                                                           t1,

                                                                           t2,

                                                                           sense);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::Normal(const Napi::CallbackInfo &info)
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

Napi::Value Arc3D::Normal_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Arc3D_Normal_AsyncWorker *asyncWorker = new Arc3D_Normal_AsyncWorker(_underlying, deferred,

                                                                         t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::Tangent(const Napi::CallbackInfo &info)
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

Napi::Value Arc3D::Tangent_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Arc3D_Tangent_AsyncWorker *asyncWorker = new Arc3D_Tangent_AsyncWorker(_underlying, deferred,

                                                                           t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::BNormal(const Napi::CallbackInfo &info)
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

Napi::Value Arc3D::BNormal_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Arc3D_BNormal_AsyncWorker *asyncWorker = new Arc3D_BNormal_AsyncWorker(_underlying, deferred,

                                                                           t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::GetCentre(const Napi::CallbackInfo &info)
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

Napi::Value Arc3D::GetCentre_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Arc3D_GetCentre_AsyncWorker *asyncWorker = new Arc3D_GetCentre_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::GetLimitPoint(const Napi::CallbackInfo &info)
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

Napi::Value Arc3D::GetLimitPoint_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "ptrdiff_t number is required."));
        return deferred.Promise();
    }

    int number = info[0].ToNumber().Int64Value();

    Arc3D_GetLimitPoint_AsyncWorker *asyncWorker = new Arc3D_GetLimitPoint_AsyncWorker(_underlying, deferred,

                                                                                       number);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::PointOn(const Napi::CallbackInfo &info)
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

Napi::Value Arc3D::PointOn_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Arc3D_PointOn_AsyncWorker *asyncWorker = new Arc3D_PointOn_AsyncWorker(_underlying, deferred,

                                                                           t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::_PointOn(const Napi::CallbackInfo &info)
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

Napi::Value Arc3D::_PointOn_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number t is required."));
        return deferred.Promise();
    }

    double t = info[0].ToNumber().DoubleValue();

    Arc3D__PointOn_AsyncWorker *asyncWorker = new Arc3D__PointOn_AsyncWorker(_underlying, deferred,

                                                                             t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::NearPointProjection(const Napi::CallbackInfo &info)
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

Napi::Value Arc3D::NearPointProjection_async(const Napi::CallbackInfo &info)
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

    Arc3D_NearPointProjection_AsyncWorker *asyncWorker =
        new Arc3D_NearPointProjection_AsyncWorker(_underlying, deferred,

                                                  pnt,

                                                  ext,

                                                  tRange);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::GetSurfaceCurve(const Napi::CallbackInfo &info)
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

Napi::Value Arc3D::GetSurfaceCurve_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    int version = info[0].ToNumber().Int64Value();

    Arc3D_GetSurfaceCurve_AsyncWorker *asyncWorker = new Arc3D_GetSurfaceCurve_AsyncWorker(_underlying, deferred,

                                                                                           version);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::GetWeightCentre(const Napi::CallbackInfo &info)
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

Napi::Value Arc3D::GetWeightCentre_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Arc3D_GetWeightCentre_AsyncWorker *asyncWorker = new Arc3D_GetWeightCentre_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::GetBasisCurve(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbCurve3D &_result = _underlying->GetBasisCurve(

    );

    Napi::Value _to;

    _to = Curve3D::NewInstance(env, (MbCurve3D *)&(_result));

    return _to;
}

Napi::Value Arc3D::GetBasisCurve_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Arc3D_GetBasisCurve_AsyncWorker *asyncWorker = new Arc3D_GetBasisCurve_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::GetBasisPoints(const Napi::CallbackInfo &info)
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

Napi::Value Arc3D::GetBasisPoints_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Arc3D_GetBasisPoints_AsyncWorker *asyncWorker = new Arc3D_GetBasisPoints_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::SetBasisPoints(const Napi::CallbackInfo &info)
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

Napi::Value Arc3D::SetBasisPoints_async(const Napi::CallbackInfo &info)
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

    Arc3D_SetBasisPoints_AsyncWorker *asyncWorker = new Arc3D_SetBasisPoints_AsyncWorker(_underlying, deferred,

                                                                                         cd);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::Inverse(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->Inverse(

    );

    return env.Undefined();
}

Napi::Value Arc3D::Inverse_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Arc3D_Inverse_AsyncWorker *asyncWorker = new Arc3D_Inverse_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::GetProjection(const Napi::CallbackInfo &info)
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

Napi::Value Arc3D::GetProjection_async(const Napi::CallbackInfo &info)
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

    Arc3D_GetProjection_AsyncWorker *asyncWorker = new Arc3D_GetProjection_AsyncWorker(_underlying, deferred,

                                                                                       place,

                                                                                       version);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::GetCircleAxis(const Napi::CallbackInfo &info)
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

Napi::Value Arc3D::GetCircleAxis_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Arc3D_GetCircleAxis_AsyncWorker *asyncWorker = new Arc3D_GetCircleAxis_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::IsA(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeSpaceType _result = _underlying->IsA(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Arc3D::IsA_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Arc3D_IsA_AsyncWorker *asyncWorker = new Arc3D_IsA_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::Type(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeSpaceType _result = _underlying->Type(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Arc3D::Type_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Arc3D_Type_AsyncWorker *asyncWorker = new Arc3D_Type_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::Family(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeSpaceType _result = _underlying->Family(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Arc3D::Family_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Arc3D_Family_AsyncWorker *asyncWorker = new Arc3D_Family_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::Transform(const Napi::CallbackInfo &info)
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

Napi::Value Arc3D::Transform_async(const Napi::CallbackInfo &info)
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

    Arc3D_Transform_AsyncWorker *asyncWorker = new Arc3D_Transform_AsyncWorker(_underlying, deferred,

                                                                               mat,

                                                                               iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::Move(const Napi::CallbackInfo &info)
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

Napi::Value Arc3D::Move_async(const Napi::CallbackInfo &info)
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

    Arc3D_Move_AsyncWorker *asyncWorker = new Arc3D_Move_AsyncWorker(_underlying, deferred,

                                                                     v,

                                                                     iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::Rotate(const Napi::CallbackInfo &info)
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

Napi::Value Arc3D::Rotate_async(const Napi::CallbackInfo &info)
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

    Arc3D_Rotate_AsyncWorker *asyncWorker = new Arc3D_Rotate_AsyncWorker(_underlying, deferred,

                                                                         axis,

                                                                         angle,

                                                                         iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::Refresh(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->Refresh(

    );

    return env.Undefined();
}

Napi::Value Arc3D::Refresh_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Arc3D_Refresh_AsyncWorker *asyncWorker = new Arc3D_Refresh_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::Duplicate(const Napi::CallbackInfo &info)
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

Napi::Value Arc3D::Duplicate_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    MbRegDuplicate *iReg = NULL;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        RegDuplicate *iReg_ = RegDuplicate::Unwrap(info[0].ToObject());
        iReg = iReg_->_underlying;
    }

    Arc3D_Duplicate_AsyncWorker *asyncWorker = new Arc3D_Duplicate_AsyncWorker(_underlying, deferred,

                                                                               iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::AddYourGabaritTo(const Napi::CallbackInfo &info)
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

Napi::Value Arc3D::AddYourGabaritTo_async(const Napi::CallbackInfo &info)
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

    Arc3D_AddYourGabaritTo_AsyncWorker *asyncWorker = new Arc3D_AddYourGabaritTo_AsyncWorker(_underlying, deferred,

                                                                                             cube);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::GetUseCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    refcount_t _result = _underlying->GetUseCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Arc3D::GetUseCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Arc3D_GetUseCount_AsyncWorker *asyncWorker = new Arc3D_GetUseCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Arc3D::AddRef(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->AddRef(

    );

    return env.Undefined();
}

Napi::Value Arc3D::AddRef_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Arc3D_AddRef_AsyncWorker *asyncWorker = new Arc3D_AddRef_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value Arc3D::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

Arc3D::~Arc3D()
{
    // std::cout << "calling ::DeleteItem on Arc3D for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

Arc3D_SetLimitPoint_AsyncWorker::Arc3D_SetLimitPoint_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d,
                                                                 ptrdiff_t number, const MbCartPoint3D &pnt)
    : _underlying(_underlying), PromiseWorker(d), number(number), pnt(pnt){};

void Arc3D_SetLimitPoint_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetLimitPoint(number, pnt);

    ExitParallelRegion();
}

void Arc3D_SetLimitPoint_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Arc3D_SetLimitPoint_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_SetRadius_AsyncWorker::Arc3D_SetRadius_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d,
                                                         double r)
    : _underlying(_underlying), PromiseWorker(d), r(r){};

void Arc3D_SetRadius_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetRadius(r);

    ExitParallelRegion();
}

void Arc3D_SetRadius_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Arc3D_SetRadius_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_SetRadiusA_AsyncWorker::Arc3D_SetRadiusA_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d,
                                                           double r)
    : _underlying(_underlying), PromiseWorker(d), r(r){};

void Arc3D_SetRadiusA_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetRadiusA(r);

    ExitParallelRegion();
}

void Arc3D_SetRadiusA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Arc3D_SetRadiusA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_SetRadiusB_AsyncWorker::Arc3D_SetRadiusB_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d,
                                                           double r)
    : _underlying(_underlying), PromiseWorker(d), r(r){};

void Arc3D_SetRadiusB_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetRadiusB(r);

    ExitParallelRegion();
}

void Arc3D_SetRadiusB_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Arc3D_SetRadiusB_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_GetRadius_AsyncWorker::Arc3D_GetRadius_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Arc3D_GetRadius_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetRadius();

    this->_result = _result;

    ExitParallelRegion();
}

void Arc3D_GetRadius_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Arc3D_GetRadius_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_GetRadiusA_AsyncWorker::Arc3D_GetRadiusA_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Arc3D_GetRadiusA_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetRadiusA();

    this->_result = _result;

    ExitParallelRegion();
}

void Arc3D_GetRadiusA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Arc3D_GetRadiusA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_GetRadiusB_AsyncWorker::Arc3D_GetRadiusB_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Arc3D_GetRadiusB_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetRadiusB();

    this->_result = _result;

    ExitParallelRegion();
}

void Arc3D_GetRadiusB_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Arc3D_GetRadiusB_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_GetAngle_AsyncWorker::Arc3D_GetAngle_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Arc3D_GetAngle_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetAngle();

    this->_result = _result;

    ExitParallelRegion();
}

void Arc3D_GetAngle_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Arc3D_GetAngle_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_SetAngle_AsyncWorker::Arc3D_SetAngle_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d,
                                                       double ang)
    : _underlying(_underlying), PromiseWorker(d), ang(ang){};

void Arc3D_SetAngle_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetAngle(ang);

    ExitParallelRegion();
}

void Arc3D_SetAngle_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Arc3D_SetAngle_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_MakeTrimmed_AsyncWorker::Arc3D_MakeTrimmed_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d,
                                                             double t1, double t2)
    : _underlying(_underlying), PromiseWorker(d), t1(t1), t2(t2){};

void Arc3D_MakeTrimmed_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->MakeTrimmed(t1, t2);

    this->_result = _result;

    ExitParallelRegion();
}

void Arc3D_MakeTrimmed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void Arc3D_MakeTrimmed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_GetTrim1_AsyncWorker::Arc3D_GetTrim1_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Arc3D_GetTrim1_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetTrim1();

    this->_result = _result;

    ExitParallelRegion();
}

void Arc3D_GetTrim1_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Arc3D_GetTrim1_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_GetTrim2_AsyncWorker::Arc3D_GetTrim2_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Arc3D_GetTrim2_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetTrim2();

    this->_result = _result;

    ExitParallelRegion();
}

void Arc3D_GetTrim2_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Arc3D_GetTrim2_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_GetPlaneCurve_AsyncWorker::Arc3D_GetPlaneCurve_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d,
                                                                 bool saveParams, PlanarCheckParams params)
    : _underlying(_underlying), PromiseWorker(d), saveParams(saveParams), params(params){};

void Arc3D_GetPlaneCurve_AsyncWorker::Execute()
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

void Arc3D_GetPlaneCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Arc3D_GetPlaneCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_IsPlanar_AsyncWorker::Arc3D_IsPlanar_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d,
                                                       double accuracy)
    : _underlying(_underlying), PromiseWorker(d), accuracy(accuracy){};

void Arc3D_IsPlanar_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsPlanar(accuracy);

    this->_result = _result;

    ExitParallelRegion();
}

void Arc3D_IsPlanar_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void Arc3D_IsPlanar_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_IsClosed_AsyncWorker::Arc3D_IsClosed_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Arc3D_IsClosed_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsClosed();

    this->_result = _result;

    ExitParallelRegion();
}

void Arc3D_IsClosed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void Arc3D_IsClosed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_IsTouch_AsyncWorker::Arc3D_IsTouch_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Arc3D_IsTouch_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsTouch();

    this->_result = _result;

    ExitParallelRegion();
}

void Arc3D_IsTouch_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void Arc3D_IsTouch_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_GetTMax_AsyncWorker::Arc3D_GetTMax_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Arc3D_GetTMax_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetTMax();

    this->_result = _result;

    ExitParallelRegion();
}

void Arc3D_GetTMax_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Arc3D_GetTMax_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_GetTMin_AsyncWorker::Arc3D_GetTMin_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Arc3D_GetTMin_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetTMin();

    this->_result = _result;

    ExitParallelRegion();
}

void Arc3D_GetTMin_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Arc3D_GetTMin_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_GetPeriod_AsyncWorker::Arc3D_GetPeriod_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Arc3D_GetPeriod_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = _underlying->GetPeriod();

    this->_result = _result;

    ExitParallelRegion();
}

void Arc3D_GetPeriod_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Arc3D_GetPeriod_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_IsPeriodic_AsyncWorker::Arc3D_IsPeriodic_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Arc3D_IsPeriodic_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsPeriodic();

    this->_result = _result;

    ExitParallelRegion();
}

void Arc3D_IsPeriodic_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void Arc3D_IsPeriodic_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_IsStraight_AsyncWorker::Arc3D_IsStraight_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d,
                                                           bool ignoreParams)
    : _underlying(_underlying), PromiseWorker(d), ignoreParams(ignoreParams){};

void Arc3D_IsStraight_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsStraight(ignoreParams);

    this->_result = _result;

    ExitParallelRegion();
}

void Arc3D_IsStraight_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void Arc3D_IsStraight_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_Trimmed_AsyncWorker::Arc3D_Trimmed_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d, double t1,
                                                     double t2, int sense)
    : _underlying(_underlying), PromiseWorker(d), t1(t1), t2(t2), sense(sense){};

void Arc3D_Trimmed_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCurve3D *_result = _underlying->Trimmed(t1, t2, sense);

    this->_result = _result;

    ExitParallelRegion();
}

void Arc3D_Trimmed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Arc3D_Trimmed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_Normal_AsyncWorker::Arc3D_Normal_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Arc3D_Normal_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector3D *n = new MbVector3D;

    _underlying->Normal(t, *n);

    this->n = n;

    ExitParallelRegion();
}

void Arc3D_Normal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Arc3D_Normal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_Tangent_AsyncWorker::Arc3D_Tangent_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Arc3D_Tangent_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector3D *tan = new MbVector3D;

    _underlying->Tangent(t, *tan);

    this->tan = tan;

    ExitParallelRegion();
}

void Arc3D_Tangent_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Arc3D_Tangent_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_BNormal_AsyncWorker::Arc3D_BNormal_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Arc3D_BNormal_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbVector3D *b = new MbVector3D;

    _underlying->BNormal(t, *b);

    this->b = b;

    ExitParallelRegion();
}

void Arc3D_BNormal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Arc3D_BNormal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_GetCentre_AsyncWorker::Arc3D_GetCentre_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Arc3D_GetCentre_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint3D *c = new MbCartPoint3D;

    _underlying->GetCentre(*c);

    this->c = c;

    ExitParallelRegion();
}

void Arc3D_GetCentre_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Arc3D_GetCentre_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_GetLimitPoint_AsyncWorker::Arc3D_GetLimitPoint_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d,
                                                                 ptrdiff_t number)
    : _underlying(_underlying), PromiseWorker(d), number(number){};

void Arc3D_GetLimitPoint_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint3D *point = new MbCartPoint3D;

    _underlying->GetLimitPoint(number, *point);

    this->point = point;

    ExitParallelRegion();
}

void Arc3D_GetLimitPoint_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Arc3D_GetLimitPoint_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_PointOn_AsyncWorker::Arc3D_PointOn_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d, double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Arc3D_PointOn_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint3D *p = new MbCartPoint3D;

    _underlying->PointOn(t, *p);

    this->p = p;

    ExitParallelRegion();
}

void Arc3D_PointOn_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Arc3D_PointOn_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D__PointOn_AsyncWorker::Arc3D__PointOn_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d,
                                                       double &t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Arc3D__PointOn_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint3D *p = new MbCartPoint3D;

    _underlying->_PointOn(t, *p);

    this->p = p;

    ExitParallelRegion();
}

void Arc3D__PointOn_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Arc3D__PointOn_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_NearPointProjection_AsyncWorker::Arc3D_NearPointProjection_AsyncWorker(MbArc3D *_underlying,
                                                                             Napi::Promise::Deferred const &d,
                                                                             const MbCartPoint3D &pnt, bool ext,
                                                                             MbRect1D *tRange)
    : _underlying(_underlying), PromiseWorker(d), pnt(pnt), ext(ext), tRange(tRange){};

void Arc3D_NearPointProjection_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double t;

    bool success = _underlying->NearPointProjection(pnt, t, ext, tRange);

    this->success = success;
    this->t = t;

    ExitParallelRegion();
}

void Arc3D_NearPointProjection_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Arc3D_NearPointProjection_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_GetSurfaceCurve_AsyncWorker::Arc3D_GetSurfaceCurve_AsyncWorker(MbArc3D *_underlying,
                                                                     Napi::Promise::Deferred const &d, VERSION version)
    : _underlying(_underlying), PromiseWorker(d), version(version){};

void Arc3D_GetSurfaceCurve_AsyncWorker::Execute()
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

void Arc3D_GetSurfaceCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Arc3D_GetSurfaceCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_GetWeightCentre_AsyncWorker::Arc3D_GetWeightCentre_AsyncWorker(MbArc3D *_underlying,
                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Arc3D_GetWeightCentre_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCartPoint3D *point = new MbCartPoint3D;

    _underlying->GetWeightCentre(*point);

    this->point = point;

    ExitParallelRegion();
}

void Arc3D_GetWeightCentre_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Arc3D_GetWeightCentre_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_GetBasisCurve_AsyncWorker::Arc3D_GetBasisCurve_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Arc3D_GetBasisCurve_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbCurve3D &_result = _underlying->GetBasisCurve();

    this->_result = (MbCurve3D *)&(_result);

    ExitParallelRegion();
}

void Arc3D_GetBasisCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbCurve3D *_result = this->_result;
    _to = Curve3D::NewInstance(env, (MbCurve3D *)&(_result));

    deferred.Resolve(_to);
}

void Arc3D_GetBasisCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_GetBasisPoints_AsyncWorker::Arc3D_GetBasisPoints_AsyncWorker(MbArc3D *_underlying,
                                                                   Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Arc3D_GetBasisPoints_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbControlData3D *cd = new MbControlData3D;

    _underlying->GetBasisPoints(*cd);

    this->cd = cd;

    ExitParallelRegion();
}

void Arc3D_GetBasisPoints_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Arc3D_GetBasisPoints_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_SetBasisPoints_AsyncWorker::Arc3D_SetBasisPoints_AsyncWorker(MbArc3D *_underlying,
                                                                   Napi::Promise::Deferred const &d,
                                                                   const MbControlData3D &cd)
    : _underlying(_underlying), PromiseWorker(d), cd(cd){};

void Arc3D_SetBasisPoints_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetBasisPoints(cd);

    ExitParallelRegion();
}

void Arc3D_SetBasisPoints_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Arc3D_SetBasisPoints_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_Inverse_AsyncWorker::Arc3D_Inverse_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Arc3D_Inverse_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Inverse();

    ExitParallelRegion();
}

void Arc3D_Inverse_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Arc3D_Inverse_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_GetProjection_AsyncWorker::Arc3D_GetProjection_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d,
                                                                 const MbPlacement3D &place, VERSION version)
    : _underlying(_underlying), PromiseWorker(d), place(place), version(version){};

void Arc3D_GetProjection_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCurve *_result = _underlying->GetProjection(place, version);

    this->_result = _result;

    ExitParallelRegion();
}

void Arc3D_GetProjection_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Arc3D_GetProjection_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_GetCircleAxis_AsyncWorker::Arc3D_GetCircleAxis_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Arc3D_GetCircleAxis_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbAxis3D *axis = new MbAxis3D;

    bool success = _underlying->GetCircleAxis(*axis);

    this->success = success;
    this->axis = axis;

    ExitParallelRegion();
}

void Arc3D_GetCircleAxis_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Arc3D_GetCircleAxis_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_IsA_AsyncWorker::Arc3D_IsA_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Arc3D_IsA_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeSpaceType _result = _underlying->IsA();

    this->_result = _result;

    ExitParallelRegion();
}

void Arc3D_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeSpaceType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Arc3D_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_Type_AsyncWorker::Arc3D_Type_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Arc3D_Type_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeSpaceType _result = _underlying->Type();

    this->_result = _result;

    ExitParallelRegion();
}

void Arc3D_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeSpaceType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Arc3D_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_Family_AsyncWorker::Arc3D_Family_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Arc3D_Family_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeSpaceType _result = _underlying->Family();

    this->_result = _result;

    ExitParallelRegion();
}

void Arc3D_Family_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeSpaceType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Arc3D_Family_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_Transform_AsyncWorker::Arc3D_Transform_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d,
                                                         const MbMatrix3D &mat, MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), mat(mat), iReg(iReg){};

void Arc3D_Transform_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Transform(mat, iReg);

    ExitParallelRegion();
}

void Arc3D_Transform_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Arc3D_Transform_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_Move_AsyncWorker::Arc3D_Move_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d,
                                               const MbVector3D &v, MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), v(v), iReg(iReg){};

void Arc3D_Move_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Move(v, iReg);

    ExitParallelRegion();
}

void Arc3D_Move_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Arc3D_Move_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_Rotate_AsyncWorker::Arc3D_Rotate_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d,
                                                   const MbAxis3D &axis, double angle, MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), axis(axis), angle(angle), iReg(iReg){};

void Arc3D_Rotate_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Rotate(axis, angle, iReg);

    ExitParallelRegion();
}

void Arc3D_Rotate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Arc3D_Rotate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_Refresh_AsyncWorker::Arc3D_Refresh_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Arc3D_Refresh_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Refresh();

    ExitParallelRegion();
}

void Arc3D_Refresh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Arc3D_Refresh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_Duplicate_AsyncWorker::Arc3D_Duplicate_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d,
                                                         MbRegDuplicate *iReg)
    : _underlying(_underlying), PromiseWorker(d), iReg(iReg){};

void Arc3D_Duplicate_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbSpaceItem &_result = _underlying->Duplicate(iReg);

    this->_result = (MbSpaceItem *)&(_result);

    ExitParallelRegion();
}

void Arc3D_Duplicate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbSpaceItem *_result = this->_result;
    _to = SpaceItem::NewInstance(env, (MbSpaceItem *)&(_result));

    deferred.Resolve(_to);
}

void Arc3D_Duplicate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_AddYourGabaritTo_AsyncWorker::Arc3D_AddYourGabaritTo_AsyncWorker(MbArc3D *_underlying,
                                                                       Napi::Promise::Deferred const &d, MbCube &cube)
    : _underlying(_underlying), PromiseWorker(d), cube(cube){};

void Arc3D_AddYourGabaritTo_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddYourGabaritTo(cube);

    ExitParallelRegion();
}

void Arc3D_AddYourGabaritTo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Arc3D_AddYourGabaritTo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_GetUseCount_AsyncWorker::Arc3D_GetUseCount_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Arc3D_GetUseCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    refcount_t _result = _underlying->GetUseCount();

    this->_result = _result;

    ExitParallelRegion();
}

void Arc3D_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    refcount_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Arc3D_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Arc3D_AddRef_AsyncWorker::Arc3D_AddRef_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Arc3D_AddRef_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddRef();

    ExitParallelRegion();
}

void Arc3D_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Arc3D_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
