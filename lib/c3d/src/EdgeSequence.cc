// This is a generated file, modify: generate/templates/EdgeSequence.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/EdgeSequence.h"

#include "tool_mutex.h"

Napi::Object EdgeSequence::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func =
        DefineClass(env, "EdgeSequence",
                    {
                        InstanceMethod<&EdgeSequence::Id>("Id"),

                        InstanceAccessor<&EdgeSequence::GetValue_closed, &EdgeSequence::SetValue_closed>("closed"),
                    });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("EdgeSequence", func);

    return exports;
}

EdgeSequence::EdgeSequence(const Napi::CallbackInfo &info) : Napi::ObjectWrap<EdgeSequence>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    Napi::Error::New(env, "EdgeSequence cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object EdgeSequence::NewInstance(Napi::Env env, MbEdgeSequence *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("EdgeSequence");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    EdgeSequence *unwrapped = EdgeSequence::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function EdgeSequence::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("EdgeSequence");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value EdgeSequence::GetValue_closed(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Value _to;
    bool closed = _underlying->closed;
    _to = Napi::Boolean::New(env, closed);

    return _to;
}

void EdgeSequence::SetValue_closed(const Napi::CallbackInfo &info, const Napi::Value &value)
{
    Napi::Env env = info.Env();
    bool closed = info[0].ToBoolean();

    _underlying->closed = closed;
}

Napi::Value EdgeSequence::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

EdgeSequence::~EdgeSequence()
{
    // std::cout << "calling DeleteMatItem on EdgeSequence for " << this->_underlying->GetUseCount() << "\n";
    DeleteMatItem(this->_underlying);
}
