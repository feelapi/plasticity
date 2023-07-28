// This is a generated file, modify: generate/templates/_SolidDuplicate.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/_SolidDuplicate.h"

#include "tool_mutex.h"

Napi::Object _SolidDuplicate::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "SolidDuplicate", {
        InstanceMethod<&_SolidDuplicate::GetBuffers>("GetBuffers"),
        InstanceMethod<&_SolidDuplicate::GetBuffers_async>("GetBuffers_async"),
        InstanceMethod<&_SolidDuplicate::GetCopy>("GetCopy"),
        InstanceMethod<&_SolidDuplicate::GetCopy_async>("GetCopy_async"),
            InstanceMethod<&_SolidDuplicate::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("SolidDuplicate", func);


    return exports;
}

_SolidDuplicate::_SolidDuplicate(const Napi::CallbackInfo& info) : Napi::ObjectWrap<_SolidDuplicate>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        Napi::Error::New(env, "_SolidDuplicate cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object _SolidDuplicate::NewInstance(Napi::Env env, SolidDuplicate *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("SolidDuplicate");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    _SolidDuplicate *unwrapped = _SolidDuplicate::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function _SolidDuplicate::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("SolidDuplicate");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}


        Napi::Value _SolidDuplicate::GetCopy(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbSolid * _result = _underlying->GetCopy
(

);



    Napi::Value _to;

            if (_result != NULL) {
        _to = Solid::NewInstance(env, (MbSolid *)_result);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value _SolidDuplicate::GetCopy_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        _SolidDuplicate_GetCopy_AsyncWorker* asyncWorker = new _SolidDuplicate_GetCopy_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }



    Napi::Value _SolidDuplicate::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }


    _SolidDuplicate_GetCopy_AsyncWorker::_SolidDuplicate_GetCopy_AsyncWorker(
SolidDuplicate * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void _SolidDuplicate_GetCopy_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbSolid * _result = _underlying->GetCopy(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void _SolidDuplicate_GetCopy_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbSolid * _result = this->_result;
                if (_result != NULL) {
        _to = Solid::NewInstance(env, (MbSolid *)_result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void _SolidDuplicate_GetCopy_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

