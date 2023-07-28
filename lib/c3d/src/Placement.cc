// This is a generated file, modify: generate/templates/Placement.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/Placement.h"

#include "tool_mutex.h"

Napi::Object Placement::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "Placement", {
            InstanceMethod<&Placement::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Placement", func);


    return exports;
}

Placement::Placement(const Napi::CallbackInfo& info) : Napi::ObjectWrap<Placement>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        if (info.Length() == 3&&                ((
                info[0].IsObject() &&
                    info[0].ToObject().InstanceOf(CartPoint::GetConstructor(env))
        )   
)
 &&         ((
                info[1].IsObject() &&
                    info[1].ToObject().InstanceOf(Vector::GetConstructor(env))
        )   
)
 &&         ((
                info[2].IsObject() &&
                    info[2].ToObject().InstanceOf(Vector::GetConstructor(env))
        )   
)


        ) {
                    if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'o'").ThrowAsJavaScriptException();
                return;
        }
        const class CartPoint *o_ = CartPoint::Unwrap(info[0].ToObject());
        
        const MbCartPoint & o =*o_->_underlying;
        

                    if (info[1].IsNull() || info[1].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'x'").ThrowAsJavaScriptException();
                return;
        }
        const class Vector *x_ = Vector::Unwrap(info[1].ToObject());
        
        const MbVector & x =*x_->_underlying;
        

                    if (info[2].IsNull() || info[2].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'y'").ThrowAsJavaScriptException();
                return;
        }
        const class Vector *y_ = Vector::Unwrap(info[2].ToObject());
        
        const MbVector & y =*y_->_underlying;
        


                MbPlacement *underlying = new MbPlacement(o,x,y);
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

Napi::Object Placement::NewInstance(Napi::Env env, MbPlacement *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Placement");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Placement *unwrapped = Placement::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Placement::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Placement");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}




    Napi::Value Placement::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }



