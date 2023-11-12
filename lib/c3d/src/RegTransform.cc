// This is a generated file, modify: generate/templates/RegTransform.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/RegTransform.h"

#include "tool_mutex.h"

Napi::Object RegTransform::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(env, "RegTransform",
                                      {
                                          InstanceMethod<&RegTransform::Id>("Id"),

                                      });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("RegTransform", func);

    return exports;
}

RegTransform::RegTransform(const Napi::CallbackInfo &info) : Napi::ObjectWrap<RegTransform>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    Napi::Error::New(env, "RegTransform cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object RegTransform::NewInstance(Napi::Env env, MbRegTransform *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("RegTransform");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    RegTransform *unwrapped = RegTransform::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function RegTransform::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("RegTransform");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value RegTransform::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}
