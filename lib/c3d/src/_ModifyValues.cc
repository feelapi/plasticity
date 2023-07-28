// This is a generated file, modify: generate/templates/_ModifyValues.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/_ModifyValues.h"

#include "tool_mutex.h"

Napi::Object _ModifyValues::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "ModifyValues", {
            InstanceMethod<&_ModifyValues::Id>("Id"),

        InstanceAccessor<&_ModifyValues::GetValue_way, &_ModifyValues::SetValue_way>("way"),
        InstanceAccessor<&_ModifyValues::GetValue_direction, &_ModifyValues::SetValue_direction>("direction"),
    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("ModifyValues", func);


    return exports;
}

_ModifyValues::_ModifyValues(const Napi::CallbackInfo& info) : Napi::ObjectWrap<_ModifyValues>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        if (info.Length() == 0        

        ) {

                ModifyValues *underlying = new ModifyValues();
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

Napi::Object _ModifyValues::NewInstance(Napi::Env env, ModifyValues *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("ModifyValues");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    _ModifyValues *unwrapped = _ModifyValues::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function _ModifyValues::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("ModifyValues");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}



Napi::Value _ModifyValues::GetValue_way(const Napi::CallbackInfo &info) {
    Napi::Env env = info.Env();
    Napi::Value _to;
     MbeModifyingType  way = _underlying->way;
        _to = Napi::Number::New(env, way);

    return _to;
}

void _ModifyValues::SetValue_way(const Napi::CallbackInfo &info, const Napi::Value &value) {
    Napi::Env env = info.Env();
        const MbeModifyingType way = static_cast<MbeModifyingType>(info[0].ToNumber().Uint32Value());

    _underlying->way = way;
}
Napi::Value _ModifyValues::GetValue_direction(const Napi::CallbackInfo &info) {
    Napi::Env env = info.Env();
    Napi::Value _to;
     MbVector3D  direction = _underlying->direction;
        _to = Vector3D::NewInstance(env, new MbVector3D(direction));

    return _to;
}

void _ModifyValues::SetValue_direction(const Napi::CallbackInfo &info, const Napi::Value &value) {
    Napi::Env env = info.Env();
            if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'direction'").ThrowAsJavaScriptException();
                return;
        }
        const class Vector3D *direction_ = Vector3D::Unwrap(info[0].ToObject());
        
         MbVector3D  direction =*direction_->_underlying;
        

    _underlying->direction = direction;
}

    Napi::Value _ModifyValues::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }



