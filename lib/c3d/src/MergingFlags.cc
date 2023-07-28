// This is a generated file, modify: generate/templates/MergingFlags.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/MergingFlags.h"

#include "tool_mutex.h"

Napi::Object MergingFlags::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "MergingFlags", {
        InstanceMethod<&MergingFlags::SetMergingFaces>("SetMergingFaces"),
        InstanceMethod<&MergingFlags::SetMergingFaces_async>("SetMergingFaces_async"),
        InstanceMethod<&MergingFlags::SetMergingEdges>("SetMergingEdges"),
        InstanceMethod<&MergingFlags::SetMergingEdges_async>("SetMergingEdges_async"),
            InstanceMethod<&MergingFlags::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("MergingFlags", func);


    return exports;
}

MergingFlags::MergingFlags(const Napi::CallbackInfo& info) : Napi::ObjectWrap<MergingFlags>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        if (info.Length() == 0        

        ) {

                MbMergingFlags *underlying = new MbMergingFlags();
                if (underlying == NULL) {
                    Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
                    return;
                }
            this->_underlying = underlying;
        } else if (info.Length() == 2&&                ((
                info[0].IsBoolean()
        )   
)
 &&         ((
                info[1].IsBoolean()
        )   
)


        ) {
                 bool mergeFaces = info[0].ToBoolean();

                 bool mergeEdges = info[1].ToBoolean();


                MbMergingFlags *underlying = new MbMergingFlags(mergeFaces,mergeEdges);
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

Napi::Object MergingFlags::NewInstance(Napi::Env env, MbMergingFlags *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("MergingFlags");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    MergingFlags *unwrapped = MergingFlags::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function MergingFlags::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("MergingFlags");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

        Napi::Value MergingFlags::SetMergingFaces(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsBoolean()
)) {
                    Napi::Error::New(env, "boolean s is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

             bool s = info[0].ToBoolean();



_underlying->SetMergingFaces
(
        s

);



    return env.Undefined();


        }

    Napi::Value MergingFlags::SetMergingFaces_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsBoolean()
)) {
                    deferred.Reject(Napi::String::New(env, "boolean s is required."));
                    return deferred.Promise();
            }


                     bool s = info[0].ToBoolean();

        MergingFlags_SetMergingFaces_AsyncWorker* asyncWorker = new MergingFlags_SetMergingFaces_AsyncWorker(
_underlying,            deferred
,
                
                s        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value MergingFlags::SetMergingEdges(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsBoolean()
)) {
                    Napi::Error::New(env, "boolean s is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

             bool s = info[0].ToBoolean();



_underlying->SetMergingEdges
(
        s

);



    return env.Undefined();


        }

    Napi::Value MergingFlags::SetMergingEdges_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsBoolean()
)) {
                    deferred.Reject(Napi::String::New(env, "boolean s is required."));
                    return deferred.Promise();
            }


                     bool s = info[0].ToBoolean();

        MergingFlags_SetMergingEdges_AsyncWorker* asyncWorker = new MergingFlags_SetMergingEdges_AsyncWorker(
_underlying,            deferred
,
                
                s        );
        asyncWorker->Queue();
        return deferred.Promise();
    }



    Napi::Value MergingFlags::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }


    MergingFlags_SetMergingFaces_AsyncWorker::MergingFlags_SetMergingFaces_AsyncWorker(
MbMergingFlags * _underlying,        Napi::Promise::Deferred const &d
,
                         bool  s    )
        :_underlying(_underlying),PromiseWorker(d),
                        s(s)
{};

    void MergingFlags_SetMergingFaces_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetMergingFaces(
                        s
        );



        
        ExitParallelRegion();
    }

    void MergingFlags_SetMergingFaces_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void MergingFlags_SetMergingFaces_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    MergingFlags_SetMergingEdges_AsyncWorker::MergingFlags_SetMergingEdges_AsyncWorker(
MbMergingFlags * _underlying,        Napi::Promise::Deferred const &d
,
                         bool  s    )
        :_underlying(_underlying),PromiseWorker(d),
                        s(s)
{};

    void MergingFlags_SetMergingEdges_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetMergingEdges(
                        s
        );



        
        ExitParallelRegion();
    }

    void MergingFlags_SetMergingEdges_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void MergingFlags_SetMergingEdges_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

