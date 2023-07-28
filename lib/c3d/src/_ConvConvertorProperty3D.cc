// This is a generated file, modify: generate/templates/_ConvConvertorProperty3D.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/_ConvConvertorProperty3D.h"

#include "tool_mutex.h"

Napi::Object _ConvConvertorProperty3D::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "ConvConvertorProperty3D", {
            InstanceMethod<&_ConvConvertorProperty3D::Id>("Id"),

        InstanceAccessor<&_ConvConvertorProperty3D::GetValue_enableAutostitch, &_ConvConvertorProperty3D::SetValue_enableAutostitch>("enableAutostitch"),
        InstanceAccessor<&_ConvConvertorProperty3D::GetValue_joinSimilarFaces, &_ConvConvertorProperty3D::SetValue_joinSimilarFaces>("joinSimilarFaces"),
        InstanceAccessor<&_ConvConvertorProperty3D::GetValue_addRemovedFacesAsShells, &_ConvConvertorProperty3D::SetValue_addRemovedFacesAsShells>("addRemovedFacesAsShells"),
        InstanceAccessor<&_ConvConvertorProperty3D::GetValue_lengthUnitsFactor, &_ConvConvertorProperty3D::SetValue_lengthUnitsFactor>("lengthUnitsFactor"),
        InstanceAccessor<&_ConvConvertorProperty3D::GetValue_appUnitsFactor, &_ConvConvertorProperty3D::SetValue_appUnitsFactor>("appUnitsFactor"),
        InstanceAccessor<&_ConvConvertorProperty3D::GetValue_auditEnabled, &_ConvConvertorProperty3D::SetValue_auditEnabled>("auditEnabled"),
    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("ConvConvertorProperty3D", func);


    return exports;
}

_ConvConvertorProperty3D::_ConvConvertorProperty3D(const Napi::CallbackInfo& info) : Napi::ObjectWrap<_ConvConvertorProperty3D>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        Napi::Error::New(env, "_ConvConvertorProperty3D cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object _ConvConvertorProperty3D::NewInstance(Napi::Env env, ConvConvertorProperty3D *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("ConvConvertorProperty3D");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    _ConvConvertorProperty3D *unwrapped = _ConvConvertorProperty3D::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function _ConvConvertorProperty3D::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("ConvConvertorProperty3D");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}



Napi::Value _ConvConvertorProperty3D::GetValue_enableAutostitch(const Napi::CallbackInfo &info) {
    Napi::Env env = info.Env();
    Napi::Value _to;
     bool  enableAutostitch = _underlying->enableAutostitch;
        _to = Napi::Boolean::New(env, enableAutostitch);

    return _to;
}

void _ConvConvertorProperty3D::SetValue_enableAutostitch(const Napi::CallbackInfo &info, const Napi::Value &value) {
    Napi::Env env = info.Env();
         bool enableAutostitch = info[0].ToBoolean();

    _underlying->enableAutostitch = enableAutostitch;
}
Napi::Value _ConvConvertorProperty3D::GetValue_joinSimilarFaces(const Napi::CallbackInfo &info) {
    Napi::Env env = info.Env();
    Napi::Value _to;
     bool  joinSimilarFaces = _underlying->joinSimilarFaces;
        _to = Napi::Boolean::New(env, joinSimilarFaces);

    return _to;
}

void _ConvConvertorProperty3D::SetValue_joinSimilarFaces(const Napi::CallbackInfo &info, const Napi::Value &value) {
    Napi::Env env = info.Env();
         bool joinSimilarFaces = info[0].ToBoolean();

    _underlying->joinSimilarFaces = joinSimilarFaces;
}
Napi::Value _ConvConvertorProperty3D::GetValue_addRemovedFacesAsShells(const Napi::CallbackInfo &info) {
    Napi::Env env = info.Env();
    Napi::Value _to;
     bool  addRemovedFacesAsShells = _underlying->addRemovedFacesAsShells;
        _to = Napi::Boolean::New(env, addRemovedFacesAsShells);

    return _to;
}

void _ConvConvertorProperty3D::SetValue_addRemovedFacesAsShells(const Napi::CallbackInfo &info, const Napi::Value &value) {
    Napi::Env env = info.Env();
         bool addRemovedFacesAsShells = info[0].ToBoolean();

    _underlying->addRemovedFacesAsShells = addRemovedFacesAsShells;
}
Napi::Value _ConvConvertorProperty3D::GetValue_lengthUnitsFactor(const Napi::CallbackInfo &info) {
    Napi::Env env = info.Env();
    Napi::Value _to;
     double  lengthUnitsFactor = _underlying->lengthUnitsFactor;
        _to = Napi::Number::New(env, lengthUnitsFactor);

    return _to;
}

void _ConvConvertorProperty3D::SetValue_lengthUnitsFactor(const Napi::CallbackInfo &info, const Napi::Value &value) {
    Napi::Env env = info.Env();
         double lengthUnitsFactor = info[0].ToNumber().DoubleValue();

    _underlying->lengthUnitsFactor = lengthUnitsFactor;
}
Napi::Value _ConvConvertorProperty3D::GetValue_appUnitsFactor(const Napi::CallbackInfo &info) {
    Napi::Env env = info.Env();
    Napi::Value _to;
     double  appUnitsFactor = _underlying->appUnitsFactor;
        _to = Napi::Number::New(env, appUnitsFactor);

    return _to;
}

void _ConvConvertorProperty3D::SetValue_appUnitsFactor(const Napi::CallbackInfo &info, const Napi::Value &value) {
    Napi::Env env = info.Env();
         double appUnitsFactor = info[0].ToNumber().DoubleValue();

    _underlying->appUnitsFactor = appUnitsFactor;
}
Napi::Value _ConvConvertorProperty3D::GetValue_auditEnabled(const Napi::CallbackInfo &info) {
    Napi::Env env = info.Env();
    Napi::Value _to;
     bool  auditEnabled = _underlying->auditEnabled;
        _to = Napi::Boolean::New(env, auditEnabled);

    return _to;
}

void _ConvConvertorProperty3D::SetValue_auditEnabled(const Napi::CallbackInfo &info, const Napi::Value &value) {
    Napi::Env env = info.Env();
         bool auditEnabled = info[0].ToBoolean();

    _underlying->auditEnabled = auditEnabled;
}

    Napi::Value _ConvConvertorProperty3D::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }



