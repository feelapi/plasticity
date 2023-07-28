// This is a generated file, modify: generate/templates/Vector.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/Vector.h"

#include "tool_mutex.h"

Napi::Object Vector::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "Vector", {
            InstanceMethod<&Vector::Id>("Id"),

        InstanceAccessor<&Vector::GetValue_x, &Vector::SetValue_x>("x"),
        InstanceAccessor<&Vector::GetValue_y, &Vector::SetValue_y>("y"),
    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Vector", func);


    return exports;
}

Vector::Vector(const Napi::CallbackInfo& info) : Napi::ObjectWrap<Vector>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        if (info.Length() == 2&&                ((
                info[0].IsNumber()
        )   
)
 &&         ((
                info[1].IsNumber()
        )   
)


        ) {
                 double xx = info[0].ToNumber().DoubleValue();

                 double yy = info[1].ToNumber().DoubleValue();


                MbVector *underlying = new MbVector(xx,yy);
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

Napi::Object Vector::NewInstance(Napi::Env env, MbVector *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Vector");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Vector *unwrapped = Vector::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Vector::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Vector");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}



Napi::Value Vector::GetValue_x(const Napi::CallbackInfo &info) {
    Napi::Env env = info.Env();
    Napi::Value _to;
     double  x = _underlying->x;
        _to = Napi::Number::New(env, x);

    return _to;
}

void Vector::SetValue_x(const Napi::CallbackInfo &info, const Napi::Value &value) {
    Napi::Env env = info.Env();
         double x = info[0].ToNumber().DoubleValue();

    _underlying->x = x;
}
Napi::Value Vector::GetValue_y(const Napi::CallbackInfo &info) {
    Napi::Env env = info.Env();
    Napi::Value _to;
     double  y = _underlying->y;
        _to = Napi::Number::New(env, y);

    return _to;
}

void Vector::SetValue_y(const Napi::CallbackInfo &info, const Napi::Value &value) {
    Napi::Env env = info.Env();
         double y = info[0].ToNumber().DoubleValue();

    _underlying->y = y;
}

    Napi::Value Vector::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }



