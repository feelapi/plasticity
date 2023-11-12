// This is a generated file, modify: generate/templates/FloatAxis3D.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/FloatAxis3D.h"

#include "tool_mutex.h"

Napi::Object FloatAxis3D::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(env, "FloatAxis3D",
                                      {
                                          InstanceMethod<&FloatAxis3D::Id>("Id"),

                                      });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("FloatAxis3D", func);

    return exports;
}

FloatAxis3D::FloatAxis3D(const Napi::CallbackInfo &info) : Napi::ObjectWrap<FloatAxis3D>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 1 && ((info[0].IsObject() && info[0].ToObject().InstanceOf(Axis3D::GetConstructor(env))))

    )
    {
        if (info[0].IsNull() || info[0].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'initAxis'").ThrowAsJavaScriptException();
            return;
        }
        const class Axis3D *initAxis_ = Axis3D::Unwrap(info[0].ToObject());

        const MbAxis3D &initAxis = *initAxis_->_underlying;

        MbFloatAxis3D *underlying = new MbFloatAxis3D(initAxis);
        if (underlying == NULL)
        {
            Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
            return;
        }
        this->_underlying = underlying;
    }
    else if (info.Length() == 2 &&
             ((info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))) &&
             ((info[1].IsObject() && info[1].ToObject().InstanceOf(Vector3D::GetConstructor(env))))

    )
    {
        if (info[0].IsNull() || info[0].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'initOrigin'").ThrowAsJavaScriptException();
            return;
        }
        const class CartPoint3D *initOrigin_ = CartPoint3D::Unwrap(info[0].ToObject());

        const MbCartPoint3D &initOrigin = *initOrigin_->_underlying;

        if (info[1].IsNull() || info[1].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'initAxisZ'").ThrowAsJavaScriptException();
            return;
        }
        const class Vector3D *initAxisZ_ = Vector3D::Unwrap(info[1].ToObject());

        const MbVector3D &initAxisZ = *initAxisZ_->_underlying;

        MbFloatAxis3D *underlying = new MbFloatAxis3D(initOrigin, initAxisZ);
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

Napi::Object FloatAxis3D::NewInstance(Napi::Env env, MbFloatAxis3D *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("FloatAxis3D");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    FloatAxis3D *unwrapped = FloatAxis3D::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function FloatAxis3D::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("FloatAxis3D");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value FloatAxis3D::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}
