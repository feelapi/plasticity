// This is a generated file, modify: generate/templates/CartPoint.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/CartPoint.h"

#include "tool_mutex.h"

Napi::Object CartPoint::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(env, "CartPoint",
                                      {
                                          InstanceMethod<&CartPoint::Id>("Id"),

                                          InstanceAccessor<&CartPoint::GetValue_x, &CartPoint::SetValue_x>("x"),
                                          InstanceAccessor<&CartPoint::GetValue_y, &CartPoint::SetValue_y>("y"),
                                      });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("CartPoint", func);

    return exports;
}

CartPoint::CartPoint(const Napi::CallbackInfo &info) : Napi::ObjectWrap<CartPoint>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 2 && ((info[0].IsNumber())) && ((info[1].IsNumber()))

    )
    {
        double xx = info[0].ToNumber().DoubleValue();

        double yy = info[1].ToNumber().DoubleValue();

        MbCartPoint *underlying = new MbCartPoint(xx, yy);
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

Napi::Object CartPoint::NewInstance(Napi::Env env, MbCartPoint *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("CartPoint");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    CartPoint *unwrapped = CartPoint::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function CartPoint::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("CartPoint");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value CartPoint::GetValue_x(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    double x = _underlying->x;
    _to = Napi::Number::New(env, x);

    return _to;
}

void CartPoint::SetValue_x(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    double x = info[0].ToNumber().DoubleValue();

    _underlying->x = x;
}
Napi::Value CartPoint::GetValue_y(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    double y = _underlying->y;
    _to = Napi::Number::New(env, y);

    return _to;
}

void CartPoint::SetValue_y(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    double y = info[0].ToNumber().DoubleValue();

    _underlying->y = y;
}

Napi::Value CartPoint::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}
