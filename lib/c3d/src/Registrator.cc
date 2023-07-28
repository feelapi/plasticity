// This is a generated file, modify: generate/templates/Registrator.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/Registrator.h"
#include "../include/Error.h"

#include "tool_mutex.h"

Napi::Object Registrator::Init(Napi::Env env, Napi::Object exports) {
    Napi::Object object = Napi::Object::New(env);

    object.Set("AutoReg", Napi::Function::New<&Registrator::AutoReg>(env));
    object.Set("AutoReg_async", Napi::Function::New<&Registrator::AutoReg_async>(env));

    exports.Set("Registrator", object);

    return exports;
}

        Napi::Value Registrator::AutoReg(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                     MbAutoRegDuplicate * autoReg = NULL;
         MbRegDuplicate * iReg = NULL;




::AutoReg
(
        autoReg
,        iReg

);



        Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

            if (autoReg != NULL) {
        _to = AutoRegDuplicate::NewInstance(env, (MbAutoRegDuplicate *)autoReg);
    } else {
        _to = env.Null();
    }

        _toReturn.Set(Napi::String::New(env, "autoReg"), _to);
            if (iReg != NULL) {
        _to = RegDuplicate::NewInstance(env, (MbRegDuplicate *)iReg);
    } else {
        _to = env.Null();
    }

        _toReturn.Set(Napi::String::New(env, "iReg"), _to);
            return _toReturn;


        }

    Napi::Value Registrator::AutoReg_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Registrator_AutoReg_AsyncWorker* asyncWorker = new Registrator_AutoReg_AsyncWorker(
            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }


    Registrator_AutoReg_AsyncWorker::Registrator_AutoReg_AsyncWorker(
        Napi::Promise::Deferred const &d
    )
        :PromiseWorker(d){};

    void Registrator_AutoReg_AsyncWorker::Execute() {
        EnterParallelRegion();

                 MbAutoRegDuplicate * autoReg = NULL;
         MbRegDuplicate * iReg = NULL;


        
        ::AutoReg(
                        autoReg
,                        iReg
        );


                this->autoReg = autoReg;
                this->iReg = iReg;

        
        ExitParallelRegion();
    }

    void Registrator_AutoReg_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            Napi::Object _toReturn = Napi::Object::New(env);

                 MbAutoRegDuplicate * autoReg = this->autoReg;
                    if (autoReg != NULL) {
        _to = AutoRegDuplicate::NewInstance(env, (MbAutoRegDuplicate *)autoReg);
    } else {
        _to = env.Null();
    }

                _toReturn.Set(Napi::String::New(env, "autoReg"), _to);
                 MbRegDuplicate * iReg = this->iReg;
                    if (iReg != NULL) {
        _to = RegDuplicate::NewInstance(env, (MbRegDuplicate *)iReg);
    } else {
        _to = env.Null();
    }

                _toReturn.Set(Napi::String::New(env, "iReg"), _to);

            deferred.Resolve(_toReturn);
    }

    void Registrator_AutoReg_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

