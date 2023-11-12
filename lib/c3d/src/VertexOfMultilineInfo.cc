// This is a generated file, modify: generate/templates/VertexOfMultilineInfo.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/VertexOfMultilineInfo.h"

#include "tool_mutex.h"

Napi::Object VertexOfMultilineInfo::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(env, "VertexOfMultilineInfo",
                                      {
                                          InstanceMethod<&VertexOfMultilineInfo::Id>("Id"),

                                      });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("VertexOfMultilineInfo", func);

    return exports;
}

VertexOfMultilineInfo::VertexOfMultilineInfo(const Napi::CallbackInfo &info)
    : Napi::ObjectWrap<VertexOfMultilineInfo>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 0

    )
    {

        StVertexOfMultilineInfo *underlying = new StVertexOfMultilineInfo();
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

Napi::Object VertexOfMultilineInfo::NewInstance(Napi::Env env, StVertexOfMultilineInfo *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("VertexOfMultilineInfo");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    VertexOfMultilineInfo *unwrapped = VertexOfMultilineInfo::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function VertexOfMultilineInfo::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("VertexOfMultilineInfo");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value VertexOfMultilineInfo::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}
