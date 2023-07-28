// This is a generated file, modify: generate/templates/NameMaker.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/NameMaker.h"

#include "tool_mutex.h"

Napi::Object NameMaker::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "NameMaker", {
        InstanceMethod<&NameMaker::IsChild>("IsChild"),
        InstanceMethod<&NameMaker::IsChild_async>("IsChild_async"),
        InstanceMethod<&NameMaker::GetMainName>("GetMainName"),
        InstanceMethod<&NameMaker::GetMainName_async>("GetMainName_async"),
        InstanceMethod<&NameMaker::GetUseCount>("GetUseCount"),
        InstanceMethod<&NameMaker::GetUseCount_async>("GetUseCount_async"),
        InstanceMethod<&NameMaker::AddRef>("AddRef"),
        InstanceMethod<&NameMaker::AddRef_async>("AddRef_async"),
            InstanceMethod<&NameMaker::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("NameMaker", func);

    Napi::Object global = env.Global();
    Napi::Object Object = global.Get("Object").ToObject();
    Napi::Function setPrototypeOf = Napi::Function(env, Object.Get("setPrototypeOf"));
    Napi::Value prototype = func.Get("prototype");

    Napi::Function superFunc = RefItem::GetConstructor(env);
    Napi::FunctionReference* superConstructor = new Napi::FunctionReference();
    *superConstructor = Napi::Persistent(superFunc);

    Napi::Value superPrototype = superFunc.Get("prototype");
    setPrototypeOf.Call({prototype, superPrototype});
    setPrototypeOf.Call({func, superFunc});

    return exports;
}

NameMaker::NameMaker(const Napi::CallbackInfo& info) : Napi::ObjectWrap<NameMaker>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        Napi::Error::New(env, "NameMaker cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object NameMaker::NewInstance(Napi::Env env, MbNameMaker *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("NameMaker");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    NameMaker *unwrapped = NameMaker::Unwrap(inst);
underlying->AddRef();    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function NameMaker::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("NameMaker");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

        Napi::Value NameMaker::IsChild(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(TopologyItem::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "TopologyItem t is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 't'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class TopologyItem *t_ = TopologyItem::Unwrap(info[0].ToObject());
        
        const MbTopologyItem & t =*t_->_underlying;
        



 bool  _result = _underlying->IsChild
(
        t

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value NameMaker::IsChild_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(TopologyItem::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "TopologyItem t is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 't'"));
                return deferred.Promise();
        }
        const class TopologyItem *t_ = TopologyItem::Unwrap(info[0].ToObject());
        
        const MbTopologyItem & t =*t_->_underlying;
        

        NameMaker_IsChild_AsyncWorker* asyncWorker = new NameMaker_IsChild_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value NameMaker::GetMainName(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 SimpleName  _result = _underlying->GetMainName
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value NameMaker::GetMainName_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        NameMaker_GetMainName_AsyncWorker* asyncWorker = new NameMaker_GetMainName_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value NameMaker::GetUseCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 refcount_t  _result = _underlying->GetUseCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value NameMaker::GetUseCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        NameMaker_GetUseCount_AsyncWorker* asyncWorker = new NameMaker_GetUseCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value NameMaker::AddRef(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->AddRef
(

);



    return env.Undefined();


        }

    Napi::Value NameMaker::AddRef_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        NameMaker_AddRef_AsyncWorker* asyncWorker = new NameMaker_AddRef_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }



    Napi::Value NameMaker::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }

NameMaker::~NameMaker() {
    // std::cout << "calling ::DeleteItem on NameMaker for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

    NameMaker_IsChild_AsyncWorker::NameMaker_IsChild_AsyncWorker(
MbNameMaker * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbTopologyItem & t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void NameMaker_IsChild_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsChild(
                        t
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void NameMaker_IsChild_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void NameMaker_IsChild_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    NameMaker_GetMainName_AsyncWorker::NameMaker_GetMainName_AsyncWorker(
MbNameMaker * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void NameMaker_GetMainName_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         SimpleName  _result = _underlying->GetMainName(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void NameMaker_GetMainName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             SimpleName  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void NameMaker_GetMainName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    NameMaker_GetUseCount_AsyncWorker::NameMaker_GetUseCount_AsyncWorker(
MbNameMaker * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void NameMaker_GetUseCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         refcount_t  _result = _underlying->GetUseCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void NameMaker_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             refcount_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void NameMaker_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    NameMaker_AddRef_AsyncWorker::NameMaker_AddRef_AsyncWorker(
MbNameMaker * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void NameMaker_AddRef_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddRef(
        );



        
        ExitParallelRegion();
    }

    void NameMaker_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void NameMaker_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

