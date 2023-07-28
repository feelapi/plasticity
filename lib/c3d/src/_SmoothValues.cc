// This is a generated file, modify: generate/templates/_SmoothValues.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/_SmoothValues.h"

#include "tool_mutex.h"

Napi::Object _SmoothValues::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "SmoothValues", {
            InstanceMethod<&_SmoothValues::Id>("Id"),

        InstanceAccessor<&_SmoothValues::GetValue_distance1, &_SmoothValues::SetValue_distance1>("distance1"),
        InstanceAccessor<&_SmoothValues::GetValue_distance2, &_SmoothValues::SetValue_distance2>("distance2"),
        InstanceAccessor<&_SmoothValues::GetValue_conic, &_SmoothValues::SetValue_conic>("conic"),
        InstanceAccessor<&_SmoothValues::GetValue_begLength, &_SmoothValues::SetValue_begLength>("begLength"),
        InstanceAccessor<&_SmoothValues::GetValue_endLength, &_SmoothValues::SetValue_endLength>("endLength"),
        InstanceAccessor<&_SmoothValues::GetValue_form, &_SmoothValues::SetValue_form>("form"),
        InstanceAccessor<&_SmoothValues::GetValue_smoothCorner, &_SmoothValues::SetValue_smoothCorner>("smoothCorner"),
        InstanceAccessor<&_SmoothValues::GetValue_prolong, &_SmoothValues::SetValue_prolong>("prolong"),
        InstanceAccessor<&_SmoothValues::GetValue_keepCant, &_SmoothValues::SetValue_keepCant>("keepCant"),
        InstanceAccessor<&_SmoothValues::GetValue_strict, &_SmoothValues::SetValue_strict>("strict"),
        InstanceAccessor<&_SmoothValues::GetValue_equable, &_SmoothValues::SetValue_equable>("equable"),
    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("SmoothValues", func);


    return exports;
}

_SmoothValues::_SmoothValues(const Napi::CallbackInfo& info) : Napi::ObjectWrap<_SmoothValues>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        if (info.Length() == 0        

        ) {

                SmoothValues *underlying = new SmoothValues();
                if (underlying == NULL) {
                    Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
                    return;
                }
            this->_underlying = underlying;
        } else if (info.Length() == 10&&                ((
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
 &&         ((
                info[4].IsBoolean()
        )   
)
 &&         ((
                info[5].IsNumber()
        )   
)
 &&         ((
                info[6].IsBoolean()
        )   
)
 &&         ((
                info[7].IsBoolean()
        )   
)
 &&         ((
                info[8].IsBoolean()
        )   
)
 &&         ((
                info[9].IsBoolean()
        )   
)


        ) {
                 double d1 = info[0].ToNumber().DoubleValue();

                 double d2 = info[1].ToNumber().DoubleValue();

                const MbeSmoothForm f = static_cast<MbeSmoothForm>(info[2].ToNumber().Uint32Value());

                 double c = info[3].ToNumber().DoubleValue();

                 bool pro = info[4].ToBoolean();

                const SmoothValues::CornerForm cor = static_cast<SmoothValues::CornerForm>(info[5].ToNumber().Uint32Value());

                 bool autoS = info[6].ToBoolean();

                 bool keep = info[7].ToBoolean();

                 bool str = info[8].ToBoolean();

                 bool equ = info[9].ToBoolean();


                SmoothValues *underlying = new SmoothValues(d1,d2,f,c,pro,cor,autoS,keep,str,equ);
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

Napi::Object _SmoothValues::NewInstance(Napi::Env env, SmoothValues *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("SmoothValues");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    _SmoothValues *unwrapped = _SmoothValues::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function _SmoothValues::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("SmoothValues");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}



Napi::Value _SmoothValues::GetValue_distance1(const Napi::CallbackInfo &info) {
    Napi::Env env = info.Env();
    Napi::Value _to;
     double  distance1 = _underlying->distance1;
        _to = Napi::Number::New(env, distance1);

    return _to;
}

void _SmoothValues::SetValue_distance1(const Napi::CallbackInfo &info, const Napi::Value &value) {
    Napi::Env env = info.Env();
         double distance1 = info[0].ToNumber().DoubleValue();

    _underlying->distance1 = distance1;
}
Napi::Value _SmoothValues::GetValue_distance2(const Napi::CallbackInfo &info) {
    Napi::Env env = info.Env();
    Napi::Value _to;
     double  distance2 = _underlying->distance2;
        _to = Napi::Number::New(env, distance2);

    return _to;
}

void _SmoothValues::SetValue_distance2(const Napi::CallbackInfo &info, const Napi::Value &value) {
    Napi::Env env = info.Env();
         double distance2 = info[0].ToNumber().DoubleValue();

    _underlying->distance2 = distance2;
}
Napi::Value _SmoothValues::GetValue_conic(const Napi::CallbackInfo &info) {
    Napi::Env env = info.Env();
    Napi::Value _to;
     double  conic = _underlying->conic;
        _to = Napi::Number::New(env, conic);

    return _to;
}

void _SmoothValues::SetValue_conic(const Napi::CallbackInfo &info, const Napi::Value &value) {
    Napi::Env env = info.Env();
         double conic = info[0].ToNumber().DoubleValue();

    _underlying->conic = conic;
}
Napi::Value _SmoothValues::GetValue_begLength(const Napi::CallbackInfo &info) {
    Napi::Env env = info.Env();
    Napi::Value _to;
     double  begLength = _underlying->begLength;
        _to = Napi::Number::New(env, begLength);

    return _to;
}

void _SmoothValues::SetValue_begLength(const Napi::CallbackInfo &info, const Napi::Value &value) {
    Napi::Env env = info.Env();
         double begLength = info[0].ToNumber().DoubleValue();

    _underlying->begLength = begLength;
}
Napi::Value _SmoothValues::GetValue_endLength(const Napi::CallbackInfo &info) {
    Napi::Env env = info.Env();
    Napi::Value _to;
     double  endLength = _underlying->endLength;
        _to = Napi::Number::New(env, endLength);

    return _to;
}

void _SmoothValues::SetValue_endLength(const Napi::CallbackInfo &info, const Napi::Value &value) {
    Napi::Env env = info.Env();
         double endLength = info[0].ToNumber().DoubleValue();

    _underlying->endLength = endLength;
}
Napi::Value _SmoothValues::GetValue_form(const Napi::CallbackInfo &info) {
    Napi::Env env = info.Env();
    Napi::Value _to;
     MbeSmoothForm  form = _underlying->form;
        _to = Napi::Number::New(env, form);

    return _to;
}

void _SmoothValues::SetValue_form(const Napi::CallbackInfo &info, const Napi::Value &value) {
    Napi::Env env = info.Env();
        const MbeSmoothForm form = static_cast<MbeSmoothForm>(info[0].ToNumber().Uint32Value());

    _underlying->form = form;
}
Napi::Value _SmoothValues::GetValue_smoothCorner(const Napi::CallbackInfo &info) {
    Napi::Env env = info.Env();
    Napi::Value _to;
     SmoothValues::CornerForm  smoothCorner = _underlying->smoothCorner;
        _to = Napi::Number::New(env, smoothCorner);

    return _to;
}

void _SmoothValues::SetValue_smoothCorner(const Napi::CallbackInfo &info, const Napi::Value &value) {
    Napi::Env env = info.Env();
        const SmoothValues::CornerForm smoothCorner = static_cast<SmoothValues::CornerForm>(info[0].ToNumber().Uint32Value());

    _underlying->smoothCorner = smoothCorner;
}
Napi::Value _SmoothValues::GetValue_prolong(const Napi::CallbackInfo &info) {
    Napi::Env env = info.Env();
    Napi::Value _to;
     bool  prolong = _underlying->prolong;
        _to = Napi::Boolean::New(env, prolong);

    return _to;
}

void _SmoothValues::SetValue_prolong(const Napi::CallbackInfo &info, const Napi::Value &value) {
    Napi::Env env = info.Env();
         bool prolong = info[0].ToBoolean();

    _underlying->prolong = prolong;
}
Napi::Value _SmoothValues::GetValue_keepCant(const Napi::CallbackInfo &info) {
    Napi::Env env = info.Env();
    Napi::Value _to;
     ThreeStates  keepCant = _underlying->keepCant;
        _to = Napi::Number::New(env, keepCant);

    return _to;
}

void _SmoothValues::SetValue_keepCant(const Napi::CallbackInfo &info, const Napi::Value &value) {
    Napi::Env env = info.Env();
        const ThreeStates keepCant = static_cast<ThreeStates>(info[0].ToNumber().Uint32Value());

    _underlying->keepCant = keepCant;
}
Napi::Value _SmoothValues::GetValue_strict(const Napi::CallbackInfo &info) {
    Napi::Env env = info.Env();
    Napi::Value _to;
     bool  strict = _underlying->strict;
        _to = Napi::Boolean::New(env, strict);

    return _to;
}

void _SmoothValues::SetValue_strict(const Napi::CallbackInfo &info, const Napi::Value &value) {
    Napi::Env env = info.Env();
         bool strict = info[0].ToBoolean();

    _underlying->strict = strict;
}
Napi::Value _SmoothValues::GetValue_equable(const Napi::CallbackInfo &info) {
    Napi::Env env = info.Env();
    Napi::Value _to;
     bool  equable = _underlying->equable;
        _to = Napi::Boolean::New(env, equable);

    return _to;
}

void _SmoothValues::SetValue_equable(const Napi::CallbackInfo &info, const Napi::Value &value) {
    Napi::Env env = info.Env();
         bool equable = info[0].ToBoolean();

    _underlying->equable = equable;
}

    Napi::Value _SmoothValues::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }



