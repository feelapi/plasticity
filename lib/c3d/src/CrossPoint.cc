// This is a generated file, modify: generate/templates/CrossPoint.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/CrossPoint.h"

#include "tool_mutex.h"

Napi::Object CrossPoint::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func =
        DefineClass(env, "CrossPoint",
                    {

                        InstanceAccessor<&CrossPoint::GetValue_p, &CrossPoint::SetValue_p>("p"),
                        InstanceAccessor<&CrossPoint::GetValue_on1, &CrossPoint::SetValue_on1>("on1"),
                        InstanceAccessor<&CrossPoint::GetValue_on2, &CrossPoint::SetValue_on2>("on2"),
                        InstanceAccessor<&CrossPoint::GetValue_form, &CrossPoint::SetValue_form>("form"),
                    });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("CrossPoint", func);

    return exports;
}

CrossPoint::CrossPoint(const Napi::CallbackInfo &info) : Napi::ObjectWrap<CrossPoint>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 3 && ((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint::GetConstructor(env)))) &&
        ((info[1].IsObject() && info[1].ToObject().InstanceOf(PointOnCurve::GetConstructor(env)))) &&
        ((info[2].IsObject() && info[2].ToObject().InstanceOf(PointOnCurve::GetConstructor(env))))

    )
    {
        if (info[0].IsNull() || info[0].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'pnt'").ThrowAsJavaScriptException();
            return;
        }
        const class CartPoint *pnt_ = CartPoint::Unwrap(info[0].ToObject());

        const MbCartPoint &pnt = *pnt_->_underlying;

        if (info[1].IsNull() || info[1].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'pOn1'").ThrowAsJavaScriptException();
            return;
        }
        const class PointOnCurve *pOn1_ = PointOnCurve::Unwrap(info[1].ToObject());

        const MbPointOnCurve<MbCurve> &pOn1 = pOn1_->_underlying;

        if (info[2].IsNull() || info[2].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'pOn2'").ThrowAsJavaScriptException();
            return;
        }
        const class PointOnCurve *pOn2_ = PointOnCurve::Unwrap(info[2].ToObject());

        const MbPointOnCurve<MbCurve> &pOn2 = pOn2_->_underlying;

        MbCrossPoint underlying(pnt, pOn1, pOn2);
        this->_underlying = underlying;
    }
    else
    {
        Napi::Error::New(env, "No matching constructor").ThrowAsJavaScriptException();
        return;
    }
}

Napi::Object CrossPoint::NewInstance(Napi::Env env, MbCrossPoint underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("CrossPoint");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    CrossPoint *unwrapped = CrossPoint::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function CrossPoint::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("CrossPoint");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value CrossPoint::GetValue_p(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    MbCartPoint p = _underlying.p;
    _to = CartPoint::NewInstance(env, new MbCartPoint(p));

    return _to;
}

void CrossPoint::SetValue_p(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'p'").ThrowAsJavaScriptException();
        return;
    }
    const class CartPoint *p_ = CartPoint::Unwrap(info[0].ToObject());

    MbCartPoint p = *p_->_underlying;

    _underlying.p = p;
}
Napi::Value CrossPoint::GetValue_on1(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    MbPointOnCurve<MbCurve> on1 = _underlying.on1;
    _to = PointOnCurve::NewInstance(env, on1);

    return _to;
}

void CrossPoint::SetValue_on1(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'on1'").ThrowAsJavaScriptException();
        return;
    }
    const class PointOnCurve *on1_ = PointOnCurve::Unwrap(info[0].ToObject());

    MbPointOnCurve<MbCurve> on1 = on1_->_underlying;

    _underlying.on1 = on1;
}
Napi::Value CrossPoint::GetValue_on2(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    MbPointOnCurve<MbCurve> on2 = _underlying.on2;
    _to = PointOnCurve::NewInstance(env, on2);

    return _to;
}

void CrossPoint::SetValue_on2(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'on2'").ThrowAsJavaScriptException();
        return;
    }
    const class PointOnCurve *on2_ = PointOnCurve::Unwrap(info[0].ToObject());

    MbPointOnCurve<MbCurve> on2 = on2_->_underlying;

    _underlying.on2 = on2;
}
Napi::Value CrossPoint::GetValue_form(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    MbeIntersectionType form = _underlying.form;
    _to = Napi::Number::New(env, form);

    return _to;
}

void CrossPoint::SetValue_form(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    const MbeIntersectionType form = static_cast<MbeIntersectionType>(info[0].ToNumber().Uint32Value());

    _underlying.form = form;
}
