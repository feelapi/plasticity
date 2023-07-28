// This is a generated file, modify: generate/templates/_RevolutionValues.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/_RevolutionValues.h"

#include "tool_mutex.h"

Napi::Object _RevolutionValues::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "RevolutionValues", {
        InstanceMethod<&_RevolutionValues::CheckSelfInt>("CheckSelfInt"),
        InstanceMethod<&_RevolutionValues::CheckSelfInt_async>("CheckSelfInt_async"),
        InstanceMethod<&_RevolutionValues::SetCheckSelfInt>("SetCheckSelfInt"),
        InstanceMethod<&_RevolutionValues::SetCheckSelfInt_async>("SetCheckSelfInt_async"),
            InstanceMethod<&_RevolutionValues::Id>("Id"),

        InstanceAccessor<&_RevolutionValues::GetValue_shape, &_RevolutionValues::SetValue_shape>("shape"),
        InstanceAccessor<&_RevolutionValues::GetValue_side1, &_RevolutionValues::SetValue_side1>("side1"),
        InstanceAccessor<&_RevolutionValues::GetValue_side2, &_RevolutionValues::SetValue_side2>("side2"),
        InstanceAccessor<&_RevolutionValues::GetValue_thickness1, &_RevolutionValues::SetValue_thickness1>("thickness1"),
        InstanceAccessor<&_RevolutionValues::GetValue_thickness2, &_RevolutionValues::SetValue_thickness2>("thickness2"),
        InstanceAccessor<&_RevolutionValues::GetValue_shellClosed, &_RevolutionValues::SetValue_shellClosed>("shellClosed"),
    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("RevolutionValues", func);

    Napi::Object global = env.Global();
    Napi::Object Object = global.Get("Object").ToObject();
    Napi::Function setPrototypeOf = Napi::Function(env, Object.Get("setPrototypeOf"));
    Napi::Value prototype = func.Get("prototype");

    Napi::Function superFunc = _SweptValuesAndSides::GetConstructor(env);
    Napi::FunctionReference* superConstructor = new Napi::FunctionReference();
    *superConstructor = Napi::Persistent(superFunc);

    Napi::Value superPrototype = superFunc.Get("prototype");
    setPrototypeOf.Call({prototype, superPrototype});
    setPrototypeOf.Call({func, superFunc});

    return exports;
}

_RevolutionValues::_RevolutionValues(const Napi::CallbackInfo& info) : Napi::ObjectWrap<_RevolutionValues>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        if (info.Length() == 0        

        ) {

                RevolutionValues *underlying = new RevolutionValues();
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

Napi::Object _RevolutionValues::NewInstance(Napi::Env env, RevolutionValues *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("RevolutionValues");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    _RevolutionValues *unwrapped = _RevolutionValues::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function _RevolutionValues::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("RevolutionValues");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

        Napi::Value _RevolutionValues::CheckSelfInt(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->CheckSelfInt
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value _RevolutionValues::CheckSelfInt_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        _RevolutionValues_CheckSelfInt_AsyncWorker* asyncWorker = new _RevolutionValues_CheckSelfInt_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value _RevolutionValues::SetCheckSelfInt(const Napi::CallbackInfo& info) {
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

    Napi::Value _RevolutionValues::SetCheckSelfInt_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsBoolean()
)) {
                    deferred.Reject(Napi::String::New(env, "boolean c is required."));
                    return deferred.Promise();
            }


                     bool c = info[0].ToBoolean();

        _RevolutionValues_SetCheckSelfInt_AsyncWorker* asyncWorker = new _RevolutionValues_SetCheckSelfInt_AsyncWorker(
_underlying,            deferred
,
                
                c        );
        asyncWorker->Queue();
        return deferred.Promise();
    }


Napi::Value _RevolutionValues::GetValue_shape(const Napi::CallbackInfo &info) {
    Napi::Env env = info.Env();
    Napi::Value _to;
     int  shape = _underlying->shape;
        _to = Napi::Number::New(env, shape);

    return _to;
}

void _RevolutionValues::SetValue_shape(const Napi::CallbackInfo &info, const Napi::Value &value) {
    Napi::Env env = info.Env();
         int shape = info[0].ToNumber().Int64Value();

    _underlying->shape = shape;
}
Napi::Value _RevolutionValues::GetValue_side1(const Napi::CallbackInfo &info) {
    Napi::Env env = info.Env();
    Napi::Value _to;
     MbSweptSide  side1 = _underlying->side1;
        _to = SweptSide::NewInstance(env, side1);

    return _to;
}

void _RevolutionValues::SetValue_side1(const Napi::CallbackInfo &info, const Napi::Value &value) {
    Napi::Env env = info.Env();
            if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'side1'").ThrowAsJavaScriptException();
                return;
        }
        const class SweptSide *side1_ = SweptSide::Unwrap(info[0].ToObject());
        
         MbSweptSide  side1 =side1_->_underlying;
        

    _underlying->side1 = side1;
}
Napi::Value _RevolutionValues::GetValue_side2(const Napi::CallbackInfo &info) {
    Napi::Env env = info.Env();
    Napi::Value _to;
     MbSweptSide  side2 = _underlying->side2;
        _to = SweptSide::NewInstance(env, side2);

    return _to;
}

void _RevolutionValues::SetValue_side2(const Napi::CallbackInfo &info, const Napi::Value &value) {
    Napi::Env env = info.Env();
            if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'side2'").ThrowAsJavaScriptException();
                return;
        }
        const class SweptSide *side2_ = SweptSide::Unwrap(info[0].ToObject());
        
         MbSweptSide  side2 =side2_->_underlying;
        

    _underlying->side2 = side2;
}
Napi::Value _RevolutionValues::GetValue_thickness1(const Napi::CallbackInfo &info) {
    Napi::Env env = info.Env();
    Napi::Value _to;
     double  thickness1 = _underlying->thickness1;
        _to = Napi::Number::New(env, thickness1);

    return _to;
}

void _RevolutionValues::SetValue_thickness1(const Napi::CallbackInfo &info, const Napi::Value &value) {
    Napi::Env env = info.Env();
         double thickness1 = info[0].ToNumber().DoubleValue();

    _underlying->thickness1 = thickness1;
}
Napi::Value _RevolutionValues::GetValue_thickness2(const Napi::CallbackInfo &info) {
    Napi::Env env = info.Env();
    Napi::Value _to;
     double  thickness2 = _underlying->thickness2;
        _to = Napi::Number::New(env, thickness2);

    return _to;
}

void _RevolutionValues::SetValue_thickness2(const Napi::CallbackInfo &info, const Napi::Value &value) {
    Napi::Env env = info.Env();
         double thickness2 = info[0].ToNumber().DoubleValue();

    _underlying->thickness2 = thickness2;
}
Napi::Value _RevolutionValues::GetValue_shellClosed(const Napi::CallbackInfo &info) {
    Napi::Env env = info.Env();
    Napi::Value _to;
     bool  shellClosed = _underlying->shellClosed;
        _to = Napi::Boolean::New(env, shellClosed);

    return _to;
}

void _RevolutionValues::SetValue_shellClosed(const Napi::CallbackInfo &info, const Napi::Value &value) {
    Napi::Env env = info.Env();
         bool shellClosed = info[0].ToBoolean();

    _underlying->shellClosed = shellClosed;
}

    Napi::Value _RevolutionValues::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }


    _RevolutionValues_CheckSelfInt_AsyncWorker::_RevolutionValues_CheckSelfInt_AsyncWorker(
RevolutionValues * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void _RevolutionValues_CheckSelfInt_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->CheckSelfInt(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void _RevolutionValues_CheckSelfInt_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void _RevolutionValues_CheckSelfInt_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    _RevolutionValues_SetCheckSelfInt_AsyncWorker::_RevolutionValues_SetCheckSelfInt_AsyncWorker(
RevolutionValues * _underlying,        Napi::Promise::Deferred const &d
,
                         bool  c    )
        :_underlying(_underlying),PromiseWorker(d),
                        c(c)
{};

    void _RevolutionValues_SetCheckSelfInt_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetCheckSelfInt(
                        c
        );



        
        ExitParallelRegion();
    }

    void _RevolutionValues_SetCheckSelfInt_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void _RevolutionValues_SetCheckSelfInt_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

