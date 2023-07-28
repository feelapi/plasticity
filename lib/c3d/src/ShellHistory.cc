// This is a generated file, modify: generate/templates/ShellHistory.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/ShellHistory.h"

#include "tool_mutex.h"

Napi::Object ShellHistory::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "ShellHistory", {
        InstanceMethod<&ShellHistory::InitOrigins>("InitOrigins"),
        InstanceMethod<&ShellHistory::InitOrigins_async>("InitOrigins_async"),
        InstanceMethod<&ShellHistory::SetOrigins>("SetOrigins"),
        InstanceMethod<&ShellHistory::SetOrigins_async>("SetOrigins_async"),
        InstanceMethod<&ShellHistory::SetOriginFaces>("SetOriginFaces"),
        InstanceMethod<&ShellHistory::SetOriginFaces_async>("SetOriginFaces_async"),
        InstanceMethod<&ShellHistory::SetCopyFaces>("SetCopyFaces"),
        InstanceMethod<&ShellHistory::SetCopyFaces_async>("SetCopyFaces_async"),
            InstanceMethod<&ShellHistory::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("ShellHistory", func);


    return exports;
}

ShellHistory::ShellHistory(const Napi::CallbackInfo& info) : Napi::ObjectWrap<ShellHistory>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        if (info.Length() == 0        

        ) {

                MbShellHistory *underlying = new MbShellHistory();
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

Napi::Object ShellHistory::NewInstance(Napi::Env env, MbShellHistory *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("ShellHistory");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    ShellHistory *unwrapped = ShellHistory::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function ShellHistory::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("ShellHistory");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

        Napi::Value ShellHistory::InitOrigins(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsArray()
)) {
                    Napi::Error::New(env, "Array origin is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                RPArray<MbFace>  origin;
if (!(info[0].IsNull() || info[0].IsUndefined())) {
    const Napi::Array origin_ = Napi::Array(env, info[0]);
        origin =  RPArray<MbFace>(origin_.Length(), 1);

    for (size_t i = 0; i < origin_.Length(); i++) {
        if (origin_[i].IsNull() || origin_[i].IsUndefined()) {
            std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i << "]. This is probably a mistake, so skipping\n";
            continue;
        }
            if (!origin_[i].IsObject() || !origin_[i].ToObject().InstanceOf(Face::GetConstructor(env))) {
                    Napi::Error::New(env, "Face origin is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            } else {
                origin.Add(Face::Unwrap(origin_[i].ToObject())->_underlying);
            }
    }
}




_underlying->InitOrigins
(
        origin

);



    return env.Undefined();


        }

    Napi::Value ShellHistory::InitOrigins_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsArray()
)) {
                    deferred.Reject(Napi::String::New(env, "Array origin is required."));
                    return deferred.Promise();
            }


                        RPArray<MbFace> * origin;
if (!(info[0].IsNull() || info[0].IsUndefined())) {
    const Napi::Array origin_ = Napi::Array(env, info[0]);
        origin = new RPArray<MbFace>(origin_.Length(), 1);

    for (size_t i = 0; i < origin_.Length(); i++) {
        if (origin_[i].IsNull() || origin_[i].IsUndefined()) {
            std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i << "]. This is probably a mistake, so skipping\n";
            continue;
        }
            if (!origin_[i].IsObject() || !origin_[i].ToObject().InstanceOf(Face::GetConstructor(env))) {
                    deferred.Reject(Napi::String::New(env, "Face origin is required."));
                    return deferred.Promise();
            } else {
                origin->Add(Face::Unwrap(origin_[i].ToObject())->_underlying);
            }
    }
}


        ShellHistory_InitOrigins_AsyncWorker* asyncWorker = new ShellHistory_InitOrigins_AsyncWorker(
_underlying,            deferred
,
                                *origin                        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ShellHistory::SetOrigins(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(FaceShell::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "FaceShell shell is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'shell'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class FaceShell *shell_ = FaceShell::Unwrap(info[0].ToObject());
        
         MbFaceShell & shell =*shell_->_underlying;
        



_underlying->SetOrigins
(
        shell

);



    return env.Undefined();


        }

    Napi::Value ShellHistory::SetOrigins_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(FaceShell::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "FaceShell shell is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'shell'"));
                return deferred.Promise();
        }
        const class FaceShell *shell_ = FaceShell::Unwrap(info[0].ToObject());
        
         MbFaceShell & shell =*shell_->_underlying;
        

        ShellHistory_SetOrigins_AsyncWorker* asyncWorker = new ShellHistory_SetOrigins_AsyncWorker(
_underlying,            deferred
,
                
                shell        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ShellHistory::SetOriginFaces(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 RPArray<MbFace> & _result = _underlying->SetOriginFaces
(

);



    Napi::Value _to;

            Napi::Array arr__result = Napi::Array::New(env);
    for (size_t i = 0; i < _result.Count(); i++) {
            arr__result[i] = Face::NewInstance(env,
                
                    (_result)[i]
                
            );
    }
    _to = arr__result;

            return _to;


        }

    Napi::Value ShellHistory::SetOriginFaces_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ShellHistory_SetOriginFaces_AsyncWorker* asyncWorker = new ShellHistory_SetOriginFaces_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ShellHistory::SetCopyFaces(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 RPArray<MbFace> & _result = _underlying->SetCopyFaces
(

);



    Napi::Value _to;

            Napi::Array arr__result = Napi::Array::New(env);
    for (size_t i = 0; i < _result.Count(); i++) {
            arr__result[i] = Face::NewInstance(env,
                
                    (_result)[i]
                
            );
    }
    _to = arr__result;

            return _to;


        }

    Napi::Value ShellHistory::SetCopyFaces_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ShellHistory_SetCopyFaces_AsyncWorker* asyncWorker = new ShellHistory_SetCopyFaces_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }



    Napi::Value ShellHistory::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }


    ShellHistory_InitOrigins_AsyncWorker::ShellHistory_InitOrigins_AsyncWorker(
MbShellHistory * _underlying,        Napi::Promise::Deferred const &d
,
                        const RPArray<MbFace> & origin    )
        :_underlying(_underlying),PromiseWorker(d),
                        origin(origin)
{};

    void ShellHistory_InitOrigins_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->InitOrigins(
                        origin
        );



        
        ExitParallelRegion();
    }

    void ShellHistory_InitOrigins_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void ShellHistory_InitOrigins_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ShellHistory_SetOrigins_AsyncWorker::ShellHistory_SetOrigins_AsyncWorker(
MbShellHistory * _underlying,        Napi::Promise::Deferred const &d
,
                         MbFaceShell & shell    )
        :_underlying(_underlying),PromiseWorker(d),
                        shell(shell)
{};

    void ShellHistory_SetOrigins_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetOrigins(
                        shell
        );



        
        ExitParallelRegion();
    }

    void ShellHistory_SetOrigins_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void ShellHistory_SetOrigins_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ShellHistory_SetOriginFaces_AsyncWorker::ShellHistory_SetOriginFaces_AsyncWorker(
MbShellHistory * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ShellHistory_SetOriginFaces_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         RPArray<MbFace> & _result = _underlying->SetOriginFaces(
        );


                        this->_result = new RPArray<MbFace>(_result.Count());
                        for (size_t i = 0; i < _result.Count(); i++) {
                            (*this->_result)[i] = _result[i];
                        }

        
        ExitParallelRegion();
    }

    void ShellHistory_SetOriginFaces_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             RPArray<MbFace> * _result = this->_result;
                Napi::Array arr__result = Napi::Array::New(env);
    for (size_t i = 0; i < _result->Count(); i++) {
            arr__result[i] = Face::NewInstance(env,
                
                    (*_result)[i]
                
            );
    }
    _to = arr__result;

            deferred.Resolve(_to);
    }

    void ShellHistory_SetOriginFaces_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ShellHistory_SetCopyFaces_AsyncWorker::ShellHistory_SetCopyFaces_AsyncWorker(
MbShellHistory * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ShellHistory_SetCopyFaces_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         RPArray<MbFace> & _result = _underlying->SetCopyFaces(
        );


                        this->_result = new RPArray<MbFace>(_result.Count());
                        for (size_t i = 0; i < _result.Count(); i++) {
                            (*this->_result)[i] = _result[i];
                        }

        
        ExitParallelRegion();
    }

    void ShellHistory_SetCopyFaces_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             RPArray<MbFace> * _result = this->_result;
                Napi::Array arr__result = Napi::Array::New(env);
    for (size_t i = 0; i < _result->Count(); i++) {
            arr__result[i] = Face::NewInstance(env,
                
                    (*_result)[i]
                
            );
    }
    _to = arr__result;

            deferred.Resolve(_to);
    }

    void ShellHistory_SetCopyFaces_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

