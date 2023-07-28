// This is a generated file, modify: generate/templates/RegionBooleanParams.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/RegionBooleanParams.h"

#include "tool_mutex.h"

Napi::Object RegionBooleanParams::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "RegionBooleanParams", {
            InstanceMethod<&RegionBooleanParams::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("RegionBooleanParams", func);


    return exports;
}

RegionBooleanParams::RegionBooleanParams(const Napi::CallbackInfo& info) : Napi::ObjectWrap<RegionBooleanParams>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        if (info.Length() == 3&&                ((
                info[0].IsNumber()
        )   
)
 &&         ((
                info[1].IsBoolean()
        )   
         || (info[1].IsNull() || info[1].IsUndefined())
)
 &&         ((
                info[2].IsBoolean()
        )   
         || (info[2].IsNull() || info[2].IsUndefined())
)


        ) {
                const RegionOperationType type = static_cast<RegionOperationType>(info[0].ToNumber().Uint32Value());

                 bool selfTouch = info[1].ToBoolean();

                 bool mergeCrvs = info[2].ToBoolean();


                MbRegionBooleanParams *underlying = new MbRegionBooleanParams(type,selfTouch,mergeCrvs);
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

Napi::Object RegionBooleanParams::NewInstance(Napi::Env env, MbRegionBooleanParams *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("RegionBooleanParams");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    RegionBooleanParams *unwrapped = RegionBooleanParams::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function RegionBooleanParams::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("RegionBooleanParams");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}




    Napi::Value RegionBooleanParams::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }



