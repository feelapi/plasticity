// This is a generated file, modify: generate/templates/_EvolutionValues.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/_EvolutionValues.h"

#include "tool_mutex.h"

Napi::Object _EvolutionValues::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "EvolutionValues", {
        InstanceMethod<&_EvolutionValues::SetParallel>("SetParallel"),
        InstanceMethod<&_EvolutionValues::SetParallel_async>("SetParallel_async"),
        InstanceMethod<&_EvolutionValues::SetKeepingAngle>("SetKeepingAngle"),
        InstanceMethod<&_EvolutionValues::SetKeepingAngle_async>("SetKeepingAngle_async"),
        InstanceMethod<&_EvolutionValues::SetOrthogonal>("SetOrthogonal"),
        InstanceMethod<&_EvolutionValues::SetOrthogonal_async>("SetOrthogonal_async"),
        InstanceMethod<&_EvolutionValues::CheckSelfInt>("CheckSelfInt"),
        InstanceMethod<&_EvolutionValues::CheckSelfInt_async>("CheckSelfInt_async"),
        InstanceMethod<&_EvolutionValues::SetCheckSelfInt>("SetCheckSelfInt"),
        InstanceMethod<&_EvolutionValues::SetCheckSelfInt_async>("SetCheckSelfInt_async"),
            InstanceMethod<&_EvolutionValues::Id>("Id"),

        InstanceAccessor<&_EvolutionValues::GetValue_range, &_EvolutionValues::SetValue_range>("range"),
        InstanceAccessor<&_EvolutionValues::GetValue_thickness1, &_EvolutionValues::SetValue_thickness1>("thickness1"),
        InstanceAccessor<&_EvolutionValues::GetValue_thickness2, &_EvolutionValues::SetValue_thickness2>("thickness2"),
        InstanceAccessor<&_EvolutionValues::GetValue_shellClosed, &_EvolutionValues::SetValue_shellClosed>("shellClosed"),
    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("EvolutionValues", func);

    Napi::Object global = env.Global();
    Napi::Object Object = global.Get("Object").ToObject();
    Napi::Function setPrototypeOf = Napi::Function(env, Object.Get("setPrototypeOf"));
    Napi::Value prototype = func.Get("prototype");

    Napi::Function superFunc = _SweptValues::GetConstructor(env);
    Napi::FunctionReference* superConstructor = new Napi::FunctionReference();
    *superConstructor = Napi::Persistent(superFunc);

    Napi::Value superPrototype = superFunc.Get("prototype");
    setPrototypeOf.Call({prototype, superPrototype});
    setPrototypeOf.Call({func, superFunc});

    return exports;
}

_EvolutionValues::_EvolutionValues(const Napi::CallbackInfo& info) : Napi::ObjectWrap<_EvolutionValues>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        if (info.Length() == 0        

        ) {

                EvolutionValues *underlying = new EvolutionValues();
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

Napi::Object _EvolutionValues::NewInstance(Napi::Env env, EvolutionValues *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("EvolutionValues");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    _EvolutionValues *unwrapped = _EvolutionValues::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function _EvolutionValues::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("EvolutionValues");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

        Napi::Value _EvolutionValues::SetParallel(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->SetParallel
(

);



    return env.Undefined();


        }

    Napi::Value _EvolutionValues::SetParallel_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        _EvolutionValues_SetParallel_AsyncWorker* asyncWorker = new _EvolutionValues_SetParallel_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value _EvolutionValues::SetKeepingAngle(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->SetKeepingAngle
(

);



    return env.Undefined();


        }

    Napi::Value _EvolutionValues::SetKeepingAngle_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        _EvolutionValues_SetKeepingAngle_AsyncWorker* asyncWorker = new _EvolutionValues_SetKeepingAngle_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value _EvolutionValues::SetOrthogonal(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->SetOrthogonal
(

);



    return env.Undefined();


        }

    Napi::Value _EvolutionValues::SetOrthogonal_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        _EvolutionValues_SetOrthogonal_AsyncWorker* asyncWorker = new _EvolutionValues_SetOrthogonal_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value _EvolutionValues::CheckSelfInt(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->CheckSelfInt
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value _EvolutionValues::CheckSelfInt_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        _EvolutionValues_CheckSelfInt_AsyncWorker* asyncWorker = new _EvolutionValues_CheckSelfInt_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value _EvolutionValues::SetCheckSelfInt(const Napi::CallbackInfo& info) {
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

    Napi::Value _EvolutionValues::SetCheckSelfInt_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsBoolean()
)) {
                    deferred.Reject(Napi::String::New(env, "boolean c is required."));
                    return deferred.Promise();
            }


                     bool c = info[0].ToBoolean();

        _EvolutionValues_SetCheckSelfInt_AsyncWorker* asyncWorker = new _EvolutionValues_SetCheckSelfInt_AsyncWorker(
_underlying,            deferred
,
                
                c        );
        asyncWorker->Queue();
        return deferred.Promise();
    }


Napi::Value _EvolutionValues::GetValue_range(const Napi::CallbackInfo &info) {
    Napi::Env env = info.Env();
    Napi::Value _to;
     double  range = _underlying->range;
        _to = Napi::Number::New(env, range);

    return _to;
}

void _EvolutionValues::SetValue_range(const Napi::CallbackInfo &info, const Napi::Value &value) {
    Napi::Env env = info.Env();
         double range = info[0].ToNumber().DoubleValue();

    _underlying->range = range;
}
Napi::Value _EvolutionValues::GetValue_thickness1(const Napi::CallbackInfo &info) {
    Napi::Env env = info.Env();
    Napi::Value _to;
     double  thickness1 = _underlying->thickness1;
        _to = Napi::Number::New(env, thickness1);

    return _to;
}

void _EvolutionValues::SetValue_thickness1(const Napi::CallbackInfo &info, const Napi::Value &value) {
    Napi::Env env = info.Env();
         double thickness1 = info[0].ToNumber().DoubleValue();

    _underlying->thickness1 = thickness1;
}
Napi::Value _EvolutionValues::GetValue_thickness2(const Napi::CallbackInfo &info) {
    Napi::Env env = info.Env();
    Napi::Value _to;
     double  thickness2 = _underlying->thickness2;
        _to = Napi::Number::New(env, thickness2);

    return _to;
}

void _EvolutionValues::SetValue_thickness2(const Napi::CallbackInfo &info, const Napi::Value &value) {
    Napi::Env env = info.Env();
         double thickness2 = info[0].ToNumber().DoubleValue();

    _underlying->thickness2 = thickness2;
}
Napi::Value _EvolutionValues::GetValue_shellClosed(const Napi::CallbackInfo &info) {
    Napi::Env env = info.Env();
    Napi::Value _to;
     bool  shellClosed = _underlying->shellClosed;
        _to = Napi::Boolean::New(env, shellClosed);

    return _to;
}

void _EvolutionValues::SetValue_shellClosed(const Napi::CallbackInfo &info, const Napi::Value &value) {
    Napi::Env env = info.Env();
         bool shellClosed = info[0].ToBoolean();

    _underlying->shellClosed = shellClosed;
}

    Napi::Value _EvolutionValues::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }


    _EvolutionValues_SetParallel_AsyncWorker::_EvolutionValues_SetParallel_AsyncWorker(
EvolutionValues * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void _EvolutionValues_SetParallel_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetParallel(
        );



        
        ExitParallelRegion();
    }

    void _EvolutionValues_SetParallel_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void _EvolutionValues_SetParallel_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    _EvolutionValues_SetKeepingAngle_AsyncWorker::_EvolutionValues_SetKeepingAngle_AsyncWorker(
EvolutionValues * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void _EvolutionValues_SetKeepingAngle_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetKeepingAngle(
        );



        
        ExitParallelRegion();
    }

    void _EvolutionValues_SetKeepingAngle_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void _EvolutionValues_SetKeepingAngle_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    _EvolutionValues_SetOrthogonal_AsyncWorker::_EvolutionValues_SetOrthogonal_AsyncWorker(
EvolutionValues * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void _EvolutionValues_SetOrthogonal_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetOrthogonal(
        );



        
        ExitParallelRegion();
    }

    void _EvolutionValues_SetOrthogonal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void _EvolutionValues_SetOrthogonal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    _EvolutionValues_CheckSelfInt_AsyncWorker::_EvolutionValues_CheckSelfInt_AsyncWorker(
EvolutionValues * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void _EvolutionValues_CheckSelfInt_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->CheckSelfInt(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void _EvolutionValues_CheckSelfInt_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void _EvolutionValues_CheckSelfInt_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    _EvolutionValues_SetCheckSelfInt_AsyncWorker::_EvolutionValues_SetCheckSelfInt_AsyncWorker(
EvolutionValues * _underlying,        Napi::Promise::Deferred const &d
,
                         bool  c    )
        :_underlying(_underlying),PromiseWorker(d),
                        c(c)
{};

    void _EvolutionValues_SetCheckSelfInt_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetCheckSelfInt(
                        c
        );



        
        ExitParallelRegion();
    }

    void _EvolutionValues_SetCheckSelfInt_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void _EvolutionValues_SetCheckSelfInt_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

