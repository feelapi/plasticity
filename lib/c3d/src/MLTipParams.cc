// This is a generated file, modify: generate/templates/MLTipParams.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/MLTipParams.h"

#include "tool_mutex.h"

Napi::Object MLTipParams::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(env, "MLTipParams",
                                      {
                                          InstanceMethod<&MLTipParams::Id>("Id"),

                                      });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("MLTipParams", func);

    return exports;
}

MLTipParams::MLTipParams(const Napi::CallbackInfo &info) : Napi::ObjectWrap<MLTipParams>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 0

    )
    {

        StMLTipParams *underlying = new StMLTipParams();
        if (underlying == NULL)
        {
            Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
            return;
        }
        this->_underlying = underlying;
    }
    else if (info.Length() == 2 && ((info[0].IsNumber())) && ((info[1].IsNumber()))

    )
    {
        const EnMLTipType _tipType = static_cast<EnMLTipType>(info[0].ToNumber().Uint32Value());

        double _tipParam = info[1].ToNumber().DoubleValue();

        StMLTipParams *underlying = new StMLTipParams(_tipType, _tipParam);
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

Napi::Object MLTipParams::NewInstance(Napi::Env env, StMLTipParams *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("MLTipParams");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    MLTipParams *unwrapped = MLTipParams::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function MLTipParams::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("MLTipParams");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value MLTipParams::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}
