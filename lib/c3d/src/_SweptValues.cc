// This is a generated file, modify: generate/templates/_SweptValues.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/_SweptValues.h"

#include "tool_mutex.h"

Napi::Object _SweptValues::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "SweptValues", {
        InstanceMethod<&_SweptValues::CheckSelfInt>("CheckSelfInt"),
        InstanceMethod<&_SweptValues::CheckSelfInt_async>("CheckSelfInt_async"),
        InstanceMethod<&_SweptValues::SetCheckSelfInt>("SetCheckSelfInt"),
        InstanceMethod<&_SweptValues::SetCheckSelfInt_async>("SetCheckSelfInt_async"),
            InstanceMethod<&_SweptValues::Id>("Id"),

        InstanceAccessor<&_SweptValues::GetValue_thickness1, &_SweptValues::SetValue_thickness1>("thickness1"),
        InstanceAccessor<&_SweptValues::GetValue_thickness2, &_SweptValues::SetValue_thickness2>("thickness2"),
        InstanceAccessor<&_SweptValues::GetValue_shellClosed, &_SweptValues::SetValue_shellClosed>("shellClosed"),
    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("SweptValues", func);


    return exports;
}

_SweptValues::_SweptValues(const Napi::CallbackInfo& info) : Napi::ObjectWrap<_SweptValues>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        if (info.Length() == 0        

        ) {

                SweptValues *underlying = new SweptValues();
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

Napi::Object _SweptValues::NewInstance(Napi::Env env, SweptValues *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("SweptValues");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    _SweptValues *unwrapped = _SweptValues::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function _SweptValues::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("SweptValues");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

        Napi::Value _SweptValues::CheckSelfInt(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->CheckSelfInt
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value _SweptValues::CheckSelfInt_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        _SweptValues_CheckSelfInt_AsyncWorker* asyncWorker = new _SweptValues_CheckSelfInt_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value _SweptValues::SetCheckSelfInt(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsBoolean()
)) {
                    Napi::Error::New(env, "boolean c is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

             bool c = info[0].ToBoolean();



_underlying->SetCheckSelfInt
(
        c

);



    return env.Undefined();


        }

    Napi::Value _SweptValues::SetCheckSelfInt_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsBoolean()
)) {
                    deferred.Reject(Napi::String::New(env, "boolean c is required."));
                    return deferred.Promise();
            }


                     bool c = info[0].ToBoolean();

        _SweptValues_SetCheckSelfInt_AsyncWorker* asyncWorker = new _SweptValues_SetCheckSelfInt_AsyncWorker(
_underlying,            deferred
,
                
                c        );
        asyncWorker->Queue();
        return deferred.Promise();
    }


Napi::Value _SweptValues::GetValue_thickness1(const Napi::CallbackInfo &info) {
    Napi::Env env = info.Env();
    Napi::Value _to;
     double  thickness1 = _underlying->thickness1;
        _to = Napi::Number::New(env, thickness1);

    return _to;
}

void _SweptValues::SetValue_thickness1(const Napi::CallbackInfo &info, const Napi::Value &value) {
    Napi::Env env = info.Env();
         double thickness1 = info[0].ToNumber().DoubleValue();

    _underlying->thickness1 = thickness1;
}
Napi::Value _SweptValues::GetValue_thickness2(const Napi::CallbackInfo &info) {
    Napi::Env env = info.Env();
    Napi::Value _to;
     double  thickness2 = _underlying->thickness2;
        _to = Napi::Number::New(env, thickness2);

    return _to;
}

void _SweptValues::SetValue_thickness2(const Napi::CallbackInfo &info, const Napi::Value &value) {
    Napi::Env env = info.Env();
         double thickness2 = info[0].ToNumber().DoubleValue();

    _underlying->thickness2 = thickness2;
}
Napi::Value _SweptValues::GetValue_shellClosed(const Napi::CallbackInfo &info) {
    Napi::Env env = info.Env();
    Napi::Value _to;
     bool  shellClosed = _underlying->shellClosed;
        _to = Napi::Boolean::New(env, shellClosed);

    return _to;
}

void _SweptValues::SetValue_shellClosed(const Napi::CallbackInfo &info, const Napi::Value &value) {
    Napi::Env env = info.Env();
         bool shellClosed = info[0].ToBoolean();

    _underlying->shellClosed = shellClosed;
}

    Napi::Value _SweptValues::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }


    _SweptValues_CheckSelfInt_AsyncWorker::_SweptValues_CheckSelfInt_AsyncWorker(
SweptValues * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void _SweptValues_CheckSelfInt_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->CheckSelfInt(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void _SweptValues_CheckSelfInt_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void _SweptValues_CheckSelfInt_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    _SweptValues_SetCheckSelfInt_AsyncWorker::_SweptValues_SetCheckSelfInt_AsyncWorker(
SweptValues * _underlying,        Napi::Promise::Deferred const &d
,
                         bool  c    )
        :_underlying(_underlying),PromiseWorker(d),
                        c(c)
{};

    void _SweptValues_SetCheckSelfInt_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetCheckSelfInt(
                        c
        );



        
        ExitParallelRegion();
    }

    void _SweptValues_SetCheckSelfInt_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void _SweptValues_SetCheckSelfInt_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

