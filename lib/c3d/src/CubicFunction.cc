// This is a generated file, modify: generate/templates/CubicFunction.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/CubicFunction.h"

#include "tool_mutex.h"

Napi::Object CubicFunction::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "CubicFunction", {
        InstanceMethod<&CubicFunction::InsertValue>("InsertValue"),
        InstanceMethod<&CubicFunction::InsertValue_async>("InsertValue_async"),
            InstanceMethod<&CubicFunction::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("CubicFunction", func);

    Napi::Object global = env.Global();
    Napi::Object Object = global.Get("Object").ToObject();
    Napi::Function setPrototypeOf = Napi::Function(env, Object.Get("setPrototypeOf"));
    Napi::Value prototype = func.Get("prototype");

    Napi::Function superFunc = Function::GetConstructor(env);
    Napi::FunctionReference* superConstructor = new Napi::FunctionReference();
    *superConstructor = Napi::Persistent(superFunc);

    Napi::Value superPrototype = superFunc.Get("prototype");
    setPrototypeOf.Call({prototype, superPrototype});
    setPrototypeOf.Call({func, superFunc});

    return exports;
}

CubicFunction::CubicFunction(const Napi::CallbackInfo& info) : Napi::ObjectWrap<CubicFunction>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        if (info.Length() == 2&&                ((
                info[0].IsNumber()
        )   
)
 &&         ((
                info[1].IsNumber()
        )   
)


        ) {
                 double value1 = info[0].ToNumber().DoubleValue();

                 double value2 = info[1].ToNumber().DoubleValue();


                MbCubicFunction *underlying = new MbCubicFunction(value1,value2);
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

Napi::Object CubicFunction::NewInstance(Napi::Env env, MbCubicFunction *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("CubicFunction");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    CubicFunction *unwrapped = CubicFunction::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function CubicFunction::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("CubicFunction");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

        Napi::Value CubicFunction::InsertValue(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    Napi::Error::New(env, "number newValue is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

             double t = info[0].ToNumber().DoubleValue();

             double newValue = info[1].ToNumber().DoubleValue();



 bool  _result = _underlying->InsertValue
(
        t
,        newValue

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value CubicFunction::InsertValue_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number newValue is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

                     double newValue = info[1].ToNumber().DoubleValue();

        CubicFunction_InsertValue_AsyncWorker* asyncWorker = new CubicFunction_InsertValue_AsyncWorker(
_underlying,            deferred
,
                
                t,
                
                newValue        );
        asyncWorker->Queue();
        return deferred.Promise();
    }



    Napi::Value CubicFunction::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }


    CubicFunction_InsertValue_AsyncWorker::CubicFunction_InsertValue_AsyncWorker(
MbCubicFunction * _underlying,        Napi::Promise::Deferred const &d
,
                         double  t,
                         double  newValue    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
,
                        newValue(newValue)
{};

    void CubicFunction_InsertValue_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->InsertValue(
                        t
,                        newValue
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void CubicFunction_InsertValue_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void CubicFunction_InsertValue_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

