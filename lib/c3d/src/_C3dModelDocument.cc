// This is a generated file, modify: generate/templates/_C3dModelDocument.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/_C3dModelDocument.h"

#include "tool_mutex.h"

Napi::Object _C3dModelDocument::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(env, "C3dModelDocument",
                                      {
                                          InstanceMethod<&_C3dModelDocument::Id>("Id"),

                                      });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("C3dModelDocument", func);

    return exports;
}

_C3dModelDocument::_C3dModelDocument(const Napi::CallbackInfo &info) : Napi::ObjectWrap<_C3dModelDocument>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 0

    )
    {

        C3dModelDocument *underlying = new C3dModelDocument();
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

Napi::Object _C3dModelDocument::NewInstance(Napi::Env env, C3dModelDocument *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("C3dModelDocument");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    _C3dModelDocument *unwrapped = _C3dModelDocument::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function _C3dModelDocument::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("C3dModelDocument");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value _C3dModelDocument::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}
