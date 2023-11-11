// This is a generated file, modify: generate/templates/SweptSide.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/SweptSide.h"

#include "tool_mutex.h"

Napi::Object SweptSide::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(
        env, "SweptSide",
        {

            InstanceAccessor<&SweptSide::GetValue_way, &SweptSide::SetValue_way>("way"),
            InstanceAccessor<&SweptSide::GetValue_rake, &SweptSide::SetValue_rake>("rake"),
            InstanceAccessor<&SweptSide::GetValue_distance, &SweptSide::SetValue_distance>("distance"),
            InstanceAccessor<&SweptSide::GetValue_scalarValue, &SweptSide::SetValue_scalarValue>("scalarValue"),
        });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("SweptSide", func);

    return exports;
}

SweptSide::SweptSide(const Napi::CallbackInfo &info) : Napi::ObjectWrap<SweptSide>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    Napi::Error::New(env, "SweptSide cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object SweptSide::NewInstance(Napi::Env env, MbSweptSide underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("SweptSide");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    SweptSide *unwrapped = SweptSide::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function SweptSide::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("SweptSide");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value SweptSide::GetValue_way(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    MbSweptWay way = _underlying.way;
    _to = Napi::Number::New(env, way);

    return _to;
}

void SweptSide::SetValue_way(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    const MbSweptWay way = static_cast<MbSweptWay>(info[0].ToNumber().Uint32Value());

    _underlying.way = way;
}
Napi::Value SweptSide::GetValue_rake(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    double rake = _underlying.rake;
    _to = Napi::Number::New(env, rake);

    return _to;
}

void SweptSide::SetValue_rake(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    double rake = info[0].ToNumber().DoubleValue();

    _underlying.rake = rake;
}
Napi::Value SweptSide::GetValue_distance(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    double distance = _underlying.distance;
    _to = Napi::Number::New(env, distance);

    return _to;
}

void SweptSide::SetValue_distance(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    double distance = info[0].ToNumber().DoubleValue();

    _underlying.distance = distance;
}
Napi::Value SweptSide::GetValue_scalarValue(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    double scalarValue = _underlying.scalarValue;
    _to = Napi::Number::New(env, scalarValue);

    return _to;
}

void SweptSide::SetValue_scalarValue(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    double scalarValue = info[0].ToNumber().DoubleValue();

    _underlying.scalarValue = scalarValue;
}
