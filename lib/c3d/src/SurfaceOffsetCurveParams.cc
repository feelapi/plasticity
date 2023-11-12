// This is a generated file, modify: generate/templates/SurfaceOffsetCurveParams.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/SurfaceOffsetCurveParams.h"

#include "tool_mutex.h"

Napi::Object SurfaceOffsetCurveParams::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(env, "SurfaceOffsetCurveParams",
                                      {
                                          InstanceMethod<&SurfaceOffsetCurveParams::Id>("Id"),

                                      });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("SurfaceOffsetCurveParams", func);

    return exports;
}

SurfaceOffsetCurveParams::SurfaceOffsetCurveParams(const Napi::CallbackInfo &info)
    : Napi::ObjectWrap<SurfaceOffsetCurveParams>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 4 && ((info[0].IsObject() && info[0].ToObject().InstanceOf(Face::GetConstructor(env)))) &&
        ((info[1].IsObject() && info[1].ToObject().InstanceOf(Axis3D::GetConstructor(env)))) &&
        ((info[2].IsNumber())) &&
        ((info[3].IsObject() && info[3].ToObject().InstanceOf(SNameMaker::GetConstructor(env))))

    )
    {
        if (info[0].IsNull() || info[0].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'f'").ThrowAsJavaScriptException();
            return;
        }
        const class Face *f_ = Face::Unwrap(info[0].ToObject());

        const MbFace &f = *f_->_underlying;

        if (info[1].IsNull() || info[1].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'a'").ThrowAsJavaScriptException();
            return;
        }
        const class Axis3D *a_ = Axis3D::Unwrap(info[1].ToObject());

        const MbAxis3D &a = *a_->_underlying;

        double d = info[2].ToNumber().DoubleValue();

        if (info[3].IsNull() || info[3].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'nm'").ThrowAsJavaScriptException();
            return;
        }
        const class SNameMaker *nm_ = SNameMaker::Unwrap(info[3].ToObject());

        const MbSNameMaker &nm = *nm_->_underlying;

        MbSurfaceOffsetCurveParams *underlying = new MbSurfaceOffsetCurveParams(f, a, d, nm);
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

Napi::Object SurfaceOffsetCurveParams::NewInstance(Napi::Env env, MbSurfaceOffsetCurveParams *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("SurfaceOffsetCurveParams");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    SurfaceOffsetCurveParams *unwrapped = SurfaceOffsetCurveParams::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function SurfaceOffsetCurveParams::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("SurfaceOffsetCurveParams");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value SurfaceOffsetCurveParams::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}
