// This is a generated file, modify: generate/templates/EdgeFacesIndexes.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/EdgeFacesIndexes.h"

#include "tool_mutex.h"

Napi::Object EdgeFacesIndexes::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(
        env, "EdgeFacesIndexes",
        {
            InstanceMethod<&EdgeFacesIndexes::Id>("Id"),

            InstanceAccessor<&EdgeFacesIndexes::GetValue_edgeIndex, &EdgeFacesIndexes::SetValue_edgeIndex>("edgeIndex"),
            InstanceAccessor<&EdgeFacesIndexes::GetValue_facePIndex, &EdgeFacesIndexes::SetValue_facePIndex>(
                "facePIndex"),
            InstanceAccessor<&EdgeFacesIndexes::GetValue_faceMIndex, &EdgeFacesIndexes::SetValue_faceMIndex>(
                "faceMIndex"),
            InstanceAccessor<&EdgeFacesIndexes::GetValue_itemName, &EdgeFacesIndexes::SetValue_itemName>("itemName"),
        });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("EdgeFacesIndexes", func);

    return exports;
}

EdgeFacesIndexes::EdgeFacesIndexes(const Napi::CallbackInfo &info) : Napi::ObjectWrap<EdgeFacesIndexes>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 0

    )
    {

        MbEdgeFacesIndexes *underlying = new MbEdgeFacesIndexes();
        if (underlying == NULL)
        {
            Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
            return;
        }
        this->_underlying = underlying;
    }
    else
    {
        Napi::Error::New(env, "No matching constructor").ThrowAsJavaScriptException();
        return;
    }
}

Napi::Object EdgeFacesIndexes::NewInstance(Napi::Env env, MbEdgeFacesIndexes *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("EdgeFacesIndexes");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    EdgeFacesIndexes *unwrapped = EdgeFacesIndexes::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function EdgeFacesIndexes::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("EdgeFacesIndexes");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value EdgeFacesIndexes::GetValue_edgeIndex(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    size_t edgeIndex = _underlying->edgeIndex;
    _to = Napi::Number::New(env, edgeIndex);

    return _to;
}

void EdgeFacesIndexes::SetValue_edgeIndex(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    size_t edgeIndex = info[0].ToNumber().Int64Value();

    _underlying->edgeIndex = edgeIndex;
}
Napi::Value EdgeFacesIndexes::GetValue_facePIndex(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    size_t facePIndex = _underlying->facePIndex;
    _to = Napi::Number::New(env, facePIndex);

    return _to;
}

void EdgeFacesIndexes::SetValue_facePIndex(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    size_t facePIndex = info[0].ToNumber().Int64Value();

    _underlying->facePIndex = facePIndex;
}
Napi::Value EdgeFacesIndexes::GetValue_faceMIndex(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    size_t faceMIndex = _underlying->faceMIndex;
    _to = Napi::Number::New(env, faceMIndex);

    return _to;
}

void EdgeFacesIndexes::SetValue_faceMIndex(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    size_t faceMIndex = info[0].ToNumber().Int64Value();

    _underlying->faceMIndex = faceMIndex;
}
Napi::Value EdgeFacesIndexes::GetValue_itemName(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    SimpleName itemName = _underlying->itemName;
    _to = Napi::Number::New(env, itemName);

    return _to;
}

void EdgeFacesIndexes::SetValue_itemName(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    int itemName = info[0].ToNumber().Int64Value();

    _underlying->itemName = itemName;
}

Napi::Value EdgeFacesIndexes::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}
