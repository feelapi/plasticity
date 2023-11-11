// This is a generated file, modify: generate/templates/FloatPoint3D.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/FloatPoint3D.h"

#include "tool_mutex.h"

Napi::Object FloatPoint3D::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(env, "FloatPoint3D",
                                      {
                                          InstanceMethod<&FloatPoint3D::Id>("Id"),

                                          InstanceAccessor<&FloatPoint3D::GetValue_x, &FloatPoint3D::SetValue_x>("x"),
                                          InstanceAccessor<&FloatPoint3D::GetValue_y, &FloatPoint3D::SetValue_y>("y"),
                                          InstanceAccessor<&FloatPoint3D::GetValue_z, &FloatPoint3D::SetValue_z>("z"),
                                      });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("FloatPoint3D", func);

    return exports;
}

FloatPoint3D::FloatPoint3D(const Napi::CallbackInfo &info) : Napi::ObjectWrap<FloatPoint3D>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    Napi::Error::New(env, "FloatPoint3D cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object FloatPoint3D::NewInstance(Napi::Env env, MbFloatPoint3D *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("FloatPoint3D");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    FloatPoint3D *unwrapped = FloatPoint3D::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function FloatPoint3D::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("FloatPoint3D");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value FloatPoint3D::GetValue_x(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    float x = _underlying->x;
    _to = Napi::Number::New(env, x);

    return _to;
}

void FloatPoint3D::SetValue_x(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    int x = info[0].ToNumber().Int64Value();

    _underlying->x = x;
}
Napi::Value FloatPoint3D::GetValue_y(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    float y = _underlying->y;
    _to = Napi::Number::New(env, y);

    return _to;
}

void FloatPoint3D::SetValue_y(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    int y = info[0].ToNumber().Int64Value();

    _underlying->y = y;
}
Napi::Value FloatPoint3D::GetValue_z(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    float z = _underlying->z;
    _to = Napi::Number::New(env, z);

    return _to;
}

void FloatPoint3D::SetValue_z(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    int z = info[0].ToNumber().Int64Value();

    _underlying->z = z;
}

Napi::Value FloatPoint3D::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}
