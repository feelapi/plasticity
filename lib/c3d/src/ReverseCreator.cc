// This is a generated file, modify: generate/templates/ReverseCreator.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/ReverseCreator.h"

#include "tool_mutex.h"

Napi::Object ReverseCreator::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "ReverseCreator", {
        InstanceMethod<&ReverseCreator::IsA>("IsA"),
        InstanceMethod<&ReverseCreator::IsA_async>("IsA_async"),
        InstanceMethod<&ReverseCreator::Type>("Type"),
        InstanceMethod<&ReverseCreator::Type_async>("Type_async"),
        InstanceMethod<&ReverseCreator::GetBasisPoints>("GetBasisPoints"),
        InstanceMethod<&ReverseCreator::GetBasisPoints_async>("GetBasisPoints_async"),
        InstanceMethod<&ReverseCreator::SetBasisPoints>("SetBasisPoints"),
        InstanceMethod<&ReverseCreator::SetBasisPoints_async>("SetBasisPoints_async"),
        InstanceMethod<&ReverseCreator::GetBasisItems>("GetBasisItems"),
        InstanceMethod<&ReverseCreator::GetBasisItems_async>("GetBasisItems_async"),
        InstanceMethod<&ReverseCreator::GetCreatorsCount>("GetCreatorsCount"),
        InstanceMethod<&ReverseCreator::GetCreatorsCount_async>("GetCreatorsCount_async"),
        InstanceMethod<&ReverseCreator::GetYourNameMaker>("GetYourNameMaker"),
        InstanceMethod<&ReverseCreator::GetYourNameMaker_async>("GetYourNameMaker_async"),
        InstanceMethod<&ReverseCreator::GetStatus>("GetStatus"),
        InstanceMethod<&ReverseCreator::GetStatus_async>("GetStatus_async"),
        InstanceMethod<&ReverseCreator::SetStatus>("SetStatus"),
        InstanceMethod<&ReverseCreator::SetStatus_async>("SetStatus_async"),
        InstanceMethod<&ReverseCreator::CreateShell>("CreateShell"),
        InstanceMethod<&ReverseCreator::CreateShell_async>("CreateShell_async"),
        InstanceMethod<&ReverseCreator::GetMainName>("GetMainName"),
        InstanceMethod<&ReverseCreator::GetMainName_async>("GetMainName_async"),
        InstanceMethod<&ReverseCreator::GetUseCount>("GetUseCount"),
        InstanceMethod<&ReverseCreator::GetUseCount_async>("GetUseCount_async"),
        InstanceMethod<&ReverseCreator::AddRef>("AddRef"),
        InstanceMethod<&ReverseCreator::AddRef_async>("AddRef_async"),
            InstanceMethod<&ReverseCreator::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("ReverseCreator", func);

    Napi::Object global = env.Global();
    Napi::Object Object = global.Get("Object").ToObject();
    Napi::Function setPrototypeOf = Napi::Function(env, Object.Get("setPrototypeOf"));
    Napi::Value prototype = func.Get("prototype");

    Napi::Function superFunc = Creator::GetConstructor(env);
    Napi::FunctionReference* superConstructor = new Napi::FunctionReference();
    *superConstructor = Napi::Persistent(superFunc);

    Napi::Value superPrototype = superFunc.Get("prototype");
    setPrototypeOf.Call({prototype, superPrototype});
    setPrototypeOf.Call({func, superFunc});

    return exports;
}

ReverseCreator::ReverseCreator(const Napi::CallbackInfo& info) : Napi::ObjectWrap<ReverseCreator>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        Napi::Error::New(env, "ReverseCreator cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object ReverseCreator::NewInstance(Napi::Env env, MbReverseCreator *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("ReverseCreator");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    ReverseCreator *unwrapped = ReverseCreator::Unwrap(inst);
underlying->AddRef();    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function ReverseCreator::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("ReverseCreator");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

        Napi::Value ReverseCreator::IsA(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeCreatorType  _result = _underlying->IsA
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value ReverseCreator::IsA_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ReverseCreator_IsA_AsyncWorker* asyncWorker = new ReverseCreator_IsA_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ReverseCreator::Type(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeCreatorType  _result = _underlying->Type
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value ReverseCreator::Type_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ReverseCreator_Type_AsyncWorker* asyncWorker = new ReverseCreator_Type_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ReverseCreator::GetBasisPoints(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                    MbControlData3D *cd = new MbControlData3D;




_underlying->GetBasisPoints
(
        *cd

);



    Napi::Value _to;

            if (cd != NULL) {
        _to = ControlData3D::NewInstance(env, (MbControlData3D *)cd);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value ReverseCreator::GetBasisPoints_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ReverseCreator_GetBasisPoints_AsyncWorker* asyncWorker = new ReverseCreator_GetBasisPoints_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ReverseCreator::SetBasisPoints(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(ControlData3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "ControlData3D cd is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'cd'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class ControlData3D *cd_ = ControlData3D::Unwrap(info[0].ToObject());
        
        const MbControlData3D & cd =*cd_->_underlying;
        



_underlying->SetBasisPoints
(
        cd

);



    return env.Undefined();


        }

    Napi::Value ReverseCreator::SetBasisPoints_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(ControlData3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "ControlData3D cd is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'cd'"));
                return deferred.Promise();
        }
        const class ControlData3D *cd_ = ControlData3D::Unwrap(info[0].ToObject());
        
        const MbControlData3D & cd =*cd_->_underlying;
        

        ReverseCreator_SetBasisPoints_AsyncWorker* asyncWorker = new ReverseCreator_SetBasisPoints_AsyncWorker(
_underlying,            deferred
,
                
                cd        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ReverseCreator::GetBasisItems(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                    RPArray<MbSpaceItem> *items = new RPArray<MbSpaceItem>;




_underlying->GetBasisItems
(
        *items

);



    Napi::Value _to;

            Napi::Array arr_items = Napi::Array::New(env);
    for (size_t i = 0; i < items->Count(); i++) {
            arr_items[i] = SpaceItem::NewInstance(env,
                
                    (*items)[i]
                
            );
    }
    _to = arr_items;

            return _to;


        }

    Napi::Value ReverseCreator::GetBasisItems_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ReverseCreator_GetBasisItems_AsyncWorker* asyncWorker = new ReverseCreator_GetBasisItems_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ReverseCreator::GetCreatorsCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "CreatorType ct is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

            const MbeCreatorType ct = static_cast<MbeCreatorType>(info[0].ToNumber().Uint32Value());



 size_t  _result = _underlying->GetCreatorsCount
(
        ct

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value ReverseCreator::GetCreatorsCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "CreatorType ct is required."));
                    return deferred.Promise();
            }


                    const MbeCreatorType ct = static_cast<MbeCreatorType>(info[0].ToNumber().Uint32Value());

        ReverseCreator_GetCreatorsCount_AsyncWorker* asyncWorker = new ReverseCreator_GetCreatorsCount_AsyncWorker(
_underlying,            deferred
,
                
                ct        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ReverseCreator::GetYourNameMaker(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



const MbSNameMaker & _result = _underlying->GetYourNameMaker
(

);



    Napi::Value _to;

            _to = SNameMaker::NewInstance(env, (MbSNameMaker *)&(_result));

            return _to;


        }

    Napi::Value ReverseCreator::GetYourNameMaker_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ReverseCreator_GetYourNameMaker_AsyncWorker* asyncWorker = new ReverseCreator_GetYourNameMaker_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ReverseCreator::GetStatus(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeProcessState  _result = _underlying->GetStatus
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value ReverseCreator::GetStatus_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ReverseCreator_GetStatus_AsyncWorker* asyncWorker = new ReverseCreator_GetStatus_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ReverseCreator::SetStatus(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "ProcessState l is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

            const MbeProcessState l = static_cast<MbeProcessState>(info[0].ToNumber().Uint32Value());



_underlying->SetStatus
(
        l

);



    return env.Undefined();


        }

    Napi::Value ReverseCreator::SetStatus_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "ProcessState l is required."));
                    return deferred.Promise();
            }


                    const MbeProcessState l = static_cast<MbeProcessState>(info[0].ToNumber().Uint32Value());

        ReverseCreator_SetStatus_AsyncWorker* asyncWorker = new ReverseCreator_SetStatus_AsyncWorker(
_underlying,            deferred
,
                
                l        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ReverseCreator::CreateShell(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(FaceShell::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "FaceShell shell is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    Napi::Error::New(env, "CopyMode sameShell is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    RPArray<MbSpaceItem> *items = new RPArray<MbSpaceItem>;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'shell'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class FaceShell *shell_ = FaceShell::Unwrap(info[0].ToObject());
        
         MbFaceShell * shell =shell_->_underlying;
        

            const MbeCopyMode sameShell = static_cast<MbeCopyMode>(info[1].ToNumber().Uint32Value());



 bool  success = _underlying->CreateShell
(
        shell
,        sameShell
,        items

);



        Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

            _to = Napi::Boolean::New(env, success);

        _toReturn.Set(Napi::String::New(env, "success"), _to);
            Napi::Array arr_items = Napi::Array::New(env);
    for (size_t i = 0; i < items->Count(); i++) {
            arr_items[i] = SpaceItem::NewInstance(env,
                
                    (*items)[i]
                
            );
    }
    _to = arr_items;

        _toReturn.Set(Napi::String::New(env, "items"), _to);
            return _toReturn;


        }

    Napi::Value ReverseCreator::CreateShell_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(FaceShell::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "FaceShell shell is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "CopyMode sameShell is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'shell'"));
                return deferred.Promise();
        }
        const class FaceShell *shell_ = FaceShell::Unwrap(info[0].ToObject());
        
         MbFaceShell * shell =shell_->_underlying;
        

                    const MbeCopyMode sameShell = static_cast<MbeCopyMode>(info[1].ToNumber().Uint32Value());

        ReverseCreator_CreateShell_AsyncWorker* asyncWorker = new ReverseCreator_CreateShell_AsyncWorker(
_underlying,            deferred
,
                
                shell,
                
                sameShell        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ReverseCreator::GetMainName(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 SimpleName  _result = _underlying->GetMainName
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value ReverseCreator::GetMainName_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ReverseCreator_GetMainName_AsyncWorker* asyncWorker = new ReverseCreator_GetMainName_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ReverseCreator::GetUseCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 refcount_t  _result = _underlying->GetUseCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value ReverseCreator::GetUseCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ReverseCreator_GetUseCount_AsyncWorker* asyncWorker = new ReverseCreator_GetUseCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ReverseCreator::AddRef(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->AddRef
(

);



    return env.Undefined();


        }

    Napi::Value ReverseCreator::AddRef_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ReverseCreator_AddRef_AsyncWorker* asyncWorker = new ReverseCreator_AddRef_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }



    Napi::Value ReverseCreator::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }

ReverseCreator::~ReverseCreator() {
    // std::cout << "calling ::DeleteItem on ReverseCreator for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

    ReverseCreator_IsA_AsyncWorker::ReverseCreator_IsA_AsyncWorker(
MbReverseCreator * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ReverseCreator_IsA_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeCreatorType  _result = _underlying->IsA(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void ReverseCreator_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeCreatorType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void ReverseCreator_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ReverseCreator_Type_AsyncWorker::ReverseCreator_Type_AsyncWorker(
MbReverseCreator * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ReverseCreator_Type_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeCreatorType  _result = _underlying->Type(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void ReverseCreator_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeCreatorType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void ReverseCreator_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ReverseCreator_GetBasisPoints_AsyncWorker::ReverseCreator_GetBasisPoints_AsyncWorker(
MbReverseCreator * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ReverseCreator_GetBasisPoints_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbControlData3D *cd = new MbControlData3D;


        
        _underlying->GetBasisPoints(
                        *cd
        );


                this->cd = cd;

        
        ExitParallelRegion();
    }

    void ReverseCreator_GetBasisPoints_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbControlData3D * cd = this->cd;
                if (cd != NULL) {
        _to = ControlData3D::NewInstance(env, (MbControlData3D *)cd);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void ReverseCreator_GetBasisPoints_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ReverseCreator_SetBasisPoints_AsyncWorker::ReverseCreator_SetBasisPoints_AsyncWorker(
MbReverseCreator * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbControlData3D & cd    )
        :_underlying(_underlying),PromiseWorker(d),
                        cd(cd)
{};

    void ReverseCreator_SetBasisPoints_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetBasisPoints(
                        cd
        );



        
        ExitParallelRegion();
    }

    void ReverseCreator_SetBasisPoints_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void ReverseCreator_SetBasisPoints_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ReverseCreator_GetBasisItems_AsyncWorker::ReverseCreator_GetBasisItems_AsyncWorker(
MbReverseCreator * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ReverseCreator_GetBasisItems_AsyncWorker::Execute() {
        EnterParallelRegion();

                RPArray<MbSpaceItem> *items = new RPArray<MbSpaceItem>;


        
        _underlying->GetBasisItems(
                        *items
        );


                this->items = items;

        
        ExitParallelRegion();
    }

    void ReverseCreator_GetBasisItems_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             RPArray<MbSpaceItem> * items = this->items;
                Napi::Array arr_items = Napi::Array::New(env);
    for (size_t i = 0; i < items->Count(); i++) {
            arr_items[i] = SpaceItem::NewInstance(env,
                
                    (*items)[i]
                
            );
    }
    _to = arr_items;

            deferred.Resolve(_to);
    }

    void ReverseCreator_GetBasisItems_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ReverseCreator_GetCreatorsCount_AsyncWorker::ReverseCreator_GetCreatorsCount_AsyncWorker(
MbReverseCreator * _underlying,        Napi::Promise::Deferred const &d
,
                         MbeCreatorType  ct    )
        :_underlying(_underlying),PromiseWorker(d),
                        ct(ct)
{};

    void ReverseCreator_GetCreatorsCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         size_t  _result = _underlying->GetCreatorsCount(
                        ct
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void ReverseCreator_GetCreatorsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             size_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void ReverseCreator_GetCreatorsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ReverseCreator_GetYourNameMaker_AsyncWorker::ReverseCreator_GetYourNameMaker_AsyncWorker(
MbReverseCreator * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ReverseCreator_GetYourNameMaker_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        const MbSNameMaker & _result = _underlying->GetYourNameMaker(
        );


                this->_result = (MbSNameMaker *)&(_result);

        
        ExitParallelRegion();
    }

    void ReverseCreator_GetYourNameMaker_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            const MbSNameMaker * _result = this->_result;
                _to = SNameMaker::NewInstance(env, (MbSNameMaker *)&(_result));

            deferred.Resolve(_to);
    }

    void ReverseCreator_GetYourNameMaker_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ReverseCreator_GetStatus_AsyncWorker::ReverseCreator_GetStatus_AsyncWorker(
MbReverseCreator * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ReverseCreator_GetStatus_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeProcessState  _result = _underlying->GetStatus(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void ReverseCreator_GetStatus_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeProcessState  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void ReverseCreator_GetStatus_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ReverseCreator_SetStatus_AsyncWorker::ReverseCreator_SetStatus_AsyncWorker(
MbReverseCreator * _underlying,        Napi::Promise::Deferred const &d
,
                         MbeProcessState  l    )
        :_underlying(_underlying),PromiseWorker(d),
                        l(l)
{};

    void ReverseCreator_SetStatus_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetStatus(
                        l
        );



        
        ExitParallelRegion();
    }

    void ReverseCreator_SetStatus_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void ReverseCreator_SetStatus_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ReverseCreator_CreateShell_AsyncWorker::ReverseCreator_CreateShell_AsyncWorker(
MbReverseCreator * _underlying,        Napi::Promise::Deferred const &d
,
                         MbFaceShell * shell,
                         MbeCopyMode  sameShell    )
        :_underlying(_underlying),PromiseWorker(d),
                        shell(shell)
,
                        sameShell(sameShell)
{};

    void ReverseCreator_CreateShell_AsyncWorker::Execute() {
        EnterParallelRegion();

                RPArray<MbSpaceItem> *items = new RPArray<MbSpaceItem>;


        
         bool  success = _underlying->CreateShell(
                        shell
,                        sameShell
,                        items
        );


                this->success = success;
                this->items = items;

        
        ExitParallelRegion();
    }

    void ReverseCreator_CreateShell_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            Napi::Object _toReturn = Napi::Object::New(env);

                 bool  success = this->success;
                    _to = Napi::Boolean::New(env, success);

                _toReturn.Set(Napi::String::New(env, "success"), _to);
                 RPArray<MbSpaceItem> * items = this->items;
                    Napi::Array arr_items = Napi::Array::New(env);
    for (size_t i = 0; i < items->Count(); i++) {
            arr_items[i] = SpaceItem::NewInstance(env,
                
                    (*items)[i]
                
            );
    }
    _to = arr_items;

                _toReturn.Set(Napi::String::New(env, "items"), _to);

            deferred.Resolve(_toReturn);
    }

    void ReverseCreator_CreateShell_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ReverseCreator_GetMainName_AsyncWorker::ReverseCreator_GetMainName_AsyncWorker(
MbReverseCreator * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ReverseCreator_GetMainName_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         SimpleName  _result = _underlying->GetMainName(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void ReverseCreator_GetMainName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             SimpleName  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void ReverseCreator_GetMainName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ReverseCreator_GetUseCount_AsyncWorker::ReverseCreator_GetUseCount_AsyncWorker(
MbReverseCreator * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ReverseCreator_GetUseCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         refcount_t  _result = _underlying->GetUseCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void ReverseCreator_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             refcount_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void ReverseCreator_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ReverseCreator_AddRef_AsyncWorker::ReverseCreator_AddRef_AsyncWorker(
MbReverseCreator * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ReverseCreator_AddRef_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddRef(
        );



        
        ExitParallelRegion();
    }

    void ReverseCreator_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void ReverseCreator_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

