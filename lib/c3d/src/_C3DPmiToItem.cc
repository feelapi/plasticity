// This is a generated file, modify: generate/templates/_C3DPmiToItem.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/_C3DPmiToItem.h"

#include "tool_mutex.h"

Napi::Object _C3DPmiToItem::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "C3DPmiToItem", {
            InstanceMethod<&_C3DPmiToItem::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("C3DPmiToItem", func);


    return exports;
}

_C3DPmiToItem::_C3DPmiToItem(const Napi::CallbackInfo& info) : Napi::ObjectWrap<_C3DPmiToItem>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        Napi::Error::New(env, "_C3DPmiToItem cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object _C3DPmiToItem::NewInstance(Napi::Env env, C3DPmiToItem *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("C3DPmiToItem");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    _C3DPmiToItem *unwrapped = _C3DPmiToItem::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function _C3DPmiToItem::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("C3DPmiToItem");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}




    Napi::Value _C3DPmiToItem::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }



