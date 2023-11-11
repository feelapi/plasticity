// This is a generated file, modify: generate/templates/SpatialOffsetCurveParams.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/SpatialOffsetCurveParams.h"

#include "tool_mutex.h"

Napi::Object SpatialOffsetCurveParams::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(env, "SpatialOffsetCurveParams",
                                      {
                                          InstanceMethod<&SpatialOffsetCurveParams::Id>("Id"),

                                      });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("SpatialOffsetCurveParams", func);

    return exports;
}

SpatialOffsetCurveParams::SpatialOffsetCurveParams(const Napi::CallbackInfo &info)
    : Napi::ObjectWrap<SpatialOffsetCurveParams>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 2 && ((info[0].IsObject() && info[0].ToObject().InstanceOf(Vector3D::GetConstructor(env)))) &&
        ((info[1].IsObject() && info[1].ToObject().InstanceOf(SNameMaker::GetConstructor(env))))

    )
    {
        if (info[0].IsNull() || info[0].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'v'").ThrowAsJavaScriptException();
            return;
        }
        const class Vector3D *v_ = Vector3D::Unwrap(info[0].ToObject());

        const MbVector3D &v = *v_->_underlying;

        if (info[1].IsNull() || info[1].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'nm'").ThrowAsJavaScriptException();
            return;
        }
        const class SNameMaker *nm_ = SNameMaker::Unwrap(info[1].ToObject());

        const MbSNameMaker &nm = *nm_->_underlying;

        MbSpatialOffsetCurveParams *underlying = new MbSpatialOffsetCurveParams(v, nm);
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

Napi::Object SpatialOffsetCurveParams::NewInstance(Napi::Env env, MbSpatialOffsetCurveParams *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("SpatialOffsetCurveParams");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    SpatialOffsetCurveParams *unwrapped = SpatialOffsetCurveParams::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function SpatialOffsetCurveParams::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("SpatialOffsetCurveParams");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value SpatialOffsetCurveParams::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}
