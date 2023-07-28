// This is a generated file, modify: generate/templates/Rect2D.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/Rect2D.h"

#include "tool_mutex.h"

Napi::Object Rect2D::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "Rect2D", {
            InstanceMethod<&Rect2D::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Rect2D", func);


    return exports;
}

Rect2D::Rect2D(const Napi::CallbackInfo& info) : Napi::ObjectWrap<Rect2D>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        Napi::Error::New(env, "Rect2D cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object Rect2D::NewInstance(Napi::Env env, MbRect2D *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Rect2D");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Rect2D *unwrapped = Rect2D::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Rect2D::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Rect2D");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}




    Napi::Value Rect2D::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }



