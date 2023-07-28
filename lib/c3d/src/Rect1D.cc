// This is a generated file, modify: generate/templates/Rect1D.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/Rect1D.h"

#include "tool_mutex.h"

Napi::Object Rect1D::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "Rect1D", {
            InstanceMethod<&Rect1D::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Rect1D", func);


    return exports;
}

Rect1D::Rect1D(const Napi::CallbackInfo& info) : Napi::ObjectWrap<Rect1D>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        Napi::Error::New(env, "Rect1D cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object Rect1D::NewInstance(Napi::Env env, MbRect1D *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Rect1D");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Rect1D *unwrapped = Rect1D::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Rect1D::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Rect1D");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}




    Napi::Value Rect1D::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }



