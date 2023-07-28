// This is a generated file, modify: generate/templates/AutoRegDuplicate.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/AutoRegDuplicate.h"

#include "tool_mutex.h"

Napi::Object AutoRegDuplicate::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "AutoRegDuplicate", {
            InstanceMethod<&AutoRegDuplicate::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("AutoRegDuplicate", func);


    return exports;
}

AutoRegDuplicate::AutoRegDuplicate(const Napi::CallbackInfo& info) : Napi::ObjectWrap<AutoRegDuplicate>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        Napi::Error::New(env, "AutoRegDuplicate cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object AutoRegDuplicate::NewInstance(Napi::Env env, MbAutoRegDuplicate *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("AutoRegDuplicate");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    AutoRegDuplicate *unwrapped = AutoRegDuplicate::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function AutoRegDuplicate::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("AutoRegDuplicate");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}




    Napi::Value AutoRegDuplicate::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }



