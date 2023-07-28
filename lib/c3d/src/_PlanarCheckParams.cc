// This is a generated file, modify: generate/templates/_PlanarCheckParams.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/_PlanarCheckParams.h"

#include "tool_mutex.h"

Napi::Object _PlanarCheckParams::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "PlanarCheckParams", {
            InstanceMethod<&_PlanarCheckParams::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("PlanarCheckParams", func);


    return exports;
}

_PlanarCheckParams::_PlanarCheckParams(const Napi::CallbackInfo& info) : Napi::ObjectWrap<_PlanarCheckParams>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        if (info.Length() == 1&&                ((
                info[0].IsNumber()
        )   
)


        ) {
                 double accuracy = info[0].ToNumber().DoubleValue();


                PlanarCheckParams *underlying = new PlanarCheckParams(accuracy);
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

Napi::Object _PlanarCheckParams::NewInstance(Napi::Env env, PlanarCheckParams *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("PlanarCheckParams");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    _PlanarCheckParams *unwrapped = _PlanarCheckParams::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function _PlanarCheckParams::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("PlanarCheckParams");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}




    Napi::Value _PlanarCheckParams::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }



