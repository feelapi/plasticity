// This is a generated file, modify: generate/templates/Direction.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/Direction.h"

#include "tool_mutex.h"

Napi::Object Direction::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "Direction", {
            InstanceMethod<&Direction::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Direction", func);


    return exports;
}

Direction::Direction(const Napi::CallbackInfo& info) : Napi::ObjectWrap<Direction>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        if (info.Length() == 1&&                ((
                info[0].IsNumber()
        )   
)


        ) {
                 double a = info[0].ToNumber().DoubleValue();


                MbDirection *underlying = new MbDirection(a);
                if (underlying == NULL) {
                    Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
                    return;
                }
            this->_underlying = underlying;
        } else {
            Napi::Error::New(env, "No matching constructor").ThrowAsJavaScriptException();
            return;
        }
}

Napi::Object Direction::NewInstance(Napi::Env env, MbDirection *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Direction");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Direction *unwrapped = Direction::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Direction::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Direction");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}




    Napi::Value Direction::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }



