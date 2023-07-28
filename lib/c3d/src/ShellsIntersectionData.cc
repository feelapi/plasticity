// This is a generated file, modify: generate/templates/ShellsIntersectionData.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/ShellsIntersectionData.h"

#include "tool_mutex.h"

Napi::Object ShellsIntersectionData::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "ShellsIntersectionData", {
        InstanceMethod<&ShellsIntersectionData::IsSolid>("IsSolid"),
        InstanceMethod<&ShellsIntersectionData::IsSolid_async>("IsSolid_async"),
        InstanceMethod<&ShellsIntersectionData::IsSurface>("IsSurface"),
        InstanceMethod<&ShellsIntersectionData::IsSurface_async>("IsSurface_async"),
            InstanceMethod<&ShellsIntersectionData::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("ShellsIntersectionData", func);


    return exports;
}

ShellsIntersectionData::ShellsIntersectionData(const Napi::CallbackInfo& info) : Napi::ObjectWrap<ShellsIntersectionData>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        Napi::Error::New(env, "ShellsIntersectionData cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object ShellsIntersectionData::NewInstance(Napi::Env env, MbShellsIntersectionData *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("ShellsIntersectionData");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    ShellsIntersectionData *unwrapped = ShellsIntersectionData::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function ShellsIntersectionData::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("ShellsIntersectionData");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

        Napi::Value ShellsIntersectionData::IsSolid(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->IsSolid
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value ShellsIntersectionData::IsSolid_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ShellsIntersectionData_IsSolid_AsyncWorker* asyncWorker = new ShellsIntersectionData_IsSolid_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ShellsIntersectionData::IsSurface(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->IsSurface
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value ShellsIntersectionData::IsSurface_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ShellsIntersectionData_IsSurface_AsyncWorker* asyncWorker = new ShellsIntersectionData_IsSurface_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }



    Napi::Value ShellsIntersectionData::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }


    ShellsIntersectionData_IsSolid_AsyncWorker::ShellsIntersectionData_IsSolid_AsyncWorker(
MbShellsIntersectionData * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ShellsIntersectionData_IsSolid_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsSolid(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void ShellsIntersectionData_IsSolid_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void ShellsIntersectionData_IsSolid_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ShellsIntersectionData_IsSurface_AsyncWorker::ShellsIntersectionData_IsSurface_AsyncWorker(
MbShellsIntersectionData * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ShellsIntersectionData_IsSurface_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsSurface(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void ShellsIntersectionData_IsSurface_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void ShellsIntersectionData_IsSurface_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

