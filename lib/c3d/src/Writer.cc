// This is a generated file, modify: generate/templates/Writer.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/Writer.h"
#include "../include/Error.h"

#include "tool_mutex.h"

Napi::Object Writer::Init(Napi::Env env, Napi::Object exports) {
    Napi::Object object = Napi::Object::New(env);

    object.Set("WriteItems", Napi::Function::New<&Writer::WriteItems>(env));
    object.Set("WriteItems_async", Napi::Function::New<&Writer::WriteItems_async>(env));
    object.Set("ReadItems", Napi::Function::New<&Writer::ReadItems>(env));
    object.Set("ReadItems_async", Napi::Function::New<&Writer::ReadItems_async>(env));

    exports.Set("Writer", object);

    return exports;
}

        Napi::Value Writer::WriteItems(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Model::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Model model is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    const char * memory = NULL;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'model'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Model *model_ = Model::Unwrap(info[0].ToObject());
        
        const MbModel & model =*model_->_underlying;
        



 size_t  size = ::WriteItems
(
        model
,        memory

);



        Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

            _to = Napi::Number::New(env, size);

        _toReturn.Set(Napi::String::New(env, "size"), _to);
            _to = Napi::Buffer<char>::New(env, (char *)memory, size,
        [](Napi::Env, char *finalizeData)
        {
            delete[] finalizeData;
        });

        _toReturn.Set(Napi::String::New(env, "memory"), _to);
            return _toReturn;


        }

    Napi::Value Writer::WriteItems_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Model::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Model model is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'model'"));
                return deferred.Promise();
        }
        const class Model *model_ = Model::Unwrap(info[0].ToObject());
        
        const MbModel & model =*model_->_underlying;
        

        Writer_WriteItems_AsyncWorker* asyncWorker = new Writer_WriteItems_AsyncWorker(
            deferred
,
                
                model        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Writer::ReadItems(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsBuffer()
)) {
                    Napi::Error::New(env, "Buffer memory is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                     MbModel * model = NULL;


            const char * memory = Napi::Buffer<const char>(env, info[0]).Data();



::ReadItems
(
        memory
,        model

);



    Napi::Value _to;

            if (model != NULL) {
        _to = Model::NewInstance(env, (MbModel *)model);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value Writer::ReadItems_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsBuffer()
)) {
                    deferred.Reject(Napi::String::New(env, "Buffer memory is required."));
                    return deferred.Promise();
            }


                    const char * memory = Napi::Buffer<const char>(env, info[0]).Data();

        Writer_ReadItems_AsyncWorker* asyncWorker = new Writer_ReadItems_AsyncWorker(
            deferred
,
                
                memory        );
        asyncWorker->Queue();
        return deferred.Promise();
    }


    Writer_WriteItems_AsyncWorker::Writer_WriteItems_AsyncWorker(
        Napi::Promise::Deferred const &d
,
                        const MbModel & model    )
        :PromiseWorker(d),
                        model(model)
{};

    void Writer_WriteItems_AsyncWorker::Execute() {
        EnterParallelRegion();

                const char * memory = NULL;


        
         size_t  size = ::WriteItems(
                        model
,                        memory
        );


                this->size = size;
                this->memory = memory;

        
        ExitParallelRegion();
    }

    void Writer_WriteItems_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            Napi::Object _toReturn = Napi::Object::New(env);

                 size_t  size = this->size;
                    _to = Napi::Number::New(env, size);

                _toReturn.Set(Napi::String::New(env, "size"), _to);
                const char * memory = this->memory;
                    _to = Napi::Buffer<char>::New(env, (char *)memory, size,
        [](Napi::Env, char *finalizeData)
        {
            delete[] finalizeData;
        });

                _toReturn.Set(Napi::String::New(env, "memory"), _to);

            deferred.Resolve(_toReturn);
    }

    void Writer_WriteItems_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Writer_ReadItems_AsyncWorker::Writer_ReadItems_AsyncWorker(
        Napi::Promise::Deferred const &d
,
                        const void * memory    )
        :PromiseWorker(d),
                        memory(memory)
{};

    void Writer_ReadItems_AsyncWorker::Execute() {
        EnterParallelRegion();

                 MbModel * model = NULL;


        
        ::ReadItems(
                        memory
,                        model
        );


                this->model = model;

        
        ExitParallelRegion();
    }

    void Writer_ReadItems_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbModel * model = this->model;
                if (model != NULL) {
        _to = Model::NewInstance(env, (MbModel *)model);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void Writer_ReadItems_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

