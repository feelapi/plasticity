// This is a generated file, modify: generate/templates/Function.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/Function.h"

#include "tool_mutex.h"

Napi::Object Function::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "Function", {
            InstanceMethod<&Function::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Function", func);


    return exports;
}

Function::Function(const Napi::CallbackInfo& info) : Napi::ObjectWrap<Function>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        Napi::Error::New(env, "Function cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object Function::NewInstance(Napi::Env env, MbFunction *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Function");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Function *unwrapped = Function::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Function::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Function");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}




    Napi::Value Function::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }



