// This is a generated file, modify: generate/templates/PointOnCurve.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/PointOnCurve.h"

#include "tool_mutex.h"

Napi::Object PointOnCurve::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "PointOnCurve", {

        InstanceAccessor<&PointOnCurve::GetValue_t, &PointOnCurve::SetValue_t>("t"),
        InstanceAccessor<&PointOnCurve::GetValue_curve, &PointOnCurve::SetValue_curve>("curve"),
    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("PointOnCurve", func);


    return exports;
}

PointOnCurve::PointOnCurve(const Napi::CallbackInfo& info) : Napi::ObjectWrap<PointOnCurve>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        if (info.Length() == 2&&                ((
                info[0].IsNumber()
        )   
)
 &&         ((
                info[1].IsObject() &&
                    info[1].ToObject().InstanceOf(Curve::GetConstructor(env))
        )   
)


        ) {
                 double t = info[0].ToNumber().DoubleValue();

                    if (info[1].IsNull() || info[1].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'curve'").ThrowAsJavaScriptException();
                return;
        }
        const class Curve *curve_ = Curve::Unwrap(info[1].ToObject());
        
        const MbCurve * curve =curve_->_underlying;
        


                MbPointOnCurve<MbCurve> underlying(t,curve);
            this->_underlying = underlying;
        } else {
            Napi::Error::New(env, "No matching constructor").ThrowAsJavaScriptException();
            return;
        }
}

Napi::Object PointOnCurve::NewInstance(Napi::Env env, MbPointOnCurve<MbCurve> underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("PointOnCurve");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    PointOnCurve *unwrapped = PointOnCurve::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function PointOnCurve::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("PointOnCurve");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}



Napi::Value PointOnCurve::GetValue_t(const Napi::CallbackInfo &info) {
    Napi::Env env = info.Env();
    Napi::Value _to;
     double  t = _underlying.t;
        _to = Napi::Number::New(env, t);

    return _to;
}

void PointOnCurve::SetValue_t(const Napi::CallbackInfo &info, const Napi::Value &value) {
    Napi::Env env = info.Env();
         double t = info[0].ToNumber().DoubleValue();

    _underlying.t = t;
}
Napi::Value PointOnCurve::GetValue_curve(const Napi::CallbackInfo &info) {
    Napi::Env env = info.Env();
    Napi::Value _to;
    const MbCurve * curve = _underlying.curve;
        curve->AddRef();
        if (curve != NULL) {
        _to = Curve::NewInstance(env, (MbCurve *)curve);
    } else {
        _to = env.Null();
    }

    return _to;
}

void PointOnCurve::SetValue_curve(const Napi::CallbackInfo &info, const Napi::Value &value) {
    Napi::Env env = info.Env();
            if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'curve'").ThrowAsJavaScriptException();
                return;
        }
        const class Curve *curve_ = Curve::Unwrap(info[0].ToObject());
        
        const MbCurve * curve =curve_->_underlying;
        

    _underlying.curve = curve;
}




