// This is a generated file, modify: generate/templates/Homogeneous3D.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/Homogeneous3D.h"

#include "tool_mutex.h"

Napi::Object Homogeneous3D::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "Homogeneous3D", {
            InstanceMethod<&Homogeneous3D::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Homogeneous3D", func);


    return exports;
}

Homogeneous3D::Homogeneous3D(const Napi::CallbackInfo& info) : Napi::ObjectWrap<Homogeneous3D>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        if (info.Length() == 4&&                ((
                info[0].IsNumber()
        )   
)
 &&         ((
                info[1].IsNumber()
        )   
)
 &&         ((
                info[2].IsNumber()
        )   
)
 &&         ((
                info[3].IsNumber()
        )   
)


        ) {
                 double initX = info[0].ToNumber().DoubleValue();

                 double initY = info[1].ToNumber().DoubleValue();

                 double initZ = info[2].ToNumber().DoubleValue();

                 double initW = info[3].ToNumber().DoubleValue();


                MbHomogeneous3D *underlying = new MbHomogeneous3D(initX,initY,initZ,initW);
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

Napi::Object Homogeneous3D::NewInstance(Napi::Env env, MbHomogeneous3D *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Homogeneous3D");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Homogeneous3D *unwrapped = Homogeneous3D::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Homogeneous3D::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Homogeneous3D");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}




    Napi::Value Homogeneous3D::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }



