// This is a generated file, modify: generate/templates/SplitShell.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/SplitShell.h"

#include "tool_mutex.h"

Napi::Object SplitShell::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "SplitShell", {
        InstanceMethod<&SplitShell::IsA>("IsA"),
        InstanceMethod<&SplitShell::IsA_async>("IsA_async"),
        InstanceMethod<&SplitShell::Type>("Type"),
        InstanceMethod<&SplitShell::Type_async>("Type_async"),
        InstanceMethod<&SplitShell::GetBasisPoints>("GetBasisPoints"),
        InstanceMethod<&SplitShell::GetBasisPoints_async>("GetBasisPoints_async"),
        InstanceMethod<&SplitShell::SetBasisPoints>("SetBasisPoints"),
        InstanceMethod<&SplitShell::SetBasisPoints_async>("SetBasisPoints_async"),
        InstanceMethod<&SplitShell::GetBasisItems>("GetBasisItems"),
        InstanceMethod<&SplitShell::GetBasisItems_async>("GetBasisItems_async"),
        InstanceMethod<&SplitShell::GetCreatorsCount>("GetCreatorsCount"),
        InstanceMethod<&SplitShell::GetCreatorsCount_async>("GetCreatorsCount_async"),
        InstanceMethod<&SplitShell::GetYourNameMaker>("GetYourNameMaker"),
        InstanceMethod<&SplitShell::GetYourNameMaker_async>("GetYourNameMaker_async"),
        InstanceMethod<&SplitShell::GetStatus>("GetStatus"),
        InstanceMethod<&SplitShell::GetStatus_async>("GetStatus_async"),
        InstanceMethod<&SplitShell::SetStatus>("SetStatus"),
        InstanceMethod<&SplitShell::SetStatus_async>("SetStatus_async"),
        InstanceMethod<&SplitShell::CreateShell>("CreateShell"),
        InstanceMethod<&SplitShell::CreateShell_async>("CreateShell_async"),
        InstanceMethod<&SplitShell::GetMainName>("GetMainName"),
        InstanceMethod<&SplitShell::GetMainName_async>("GetMainName_async"),
        InstanceMethod<&SplitShell::GetUseCount>("GetUseCount"),
        InstanceMethod<&SplitShell::GetUseCount_async>("GetUseCount_async"),
        InstanceMethod<&SplitShell::AddRef>("AddRef"),
        InstanceMethod<&SplitShell::AddRef_async>("AddRef_async"),
            InstanceMethod<&SplitShell::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("SplitShell", func);

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

SplitShell::SplitShell(const Napi::CallbackInfo& info) : Napi::ObjectWrap<SplitShell>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        Napi::Error::New(env, "SplitShell cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object SplitShell::NewInstance(Napi::Env env, MbSplitShell *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("SplitShell");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    SplitShell *unwrapped = SplitShell::Unwrap(inst);
underlying->AddRef();    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function SplitShell::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("SplitShell");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

        Napi::Value SplitShell::IsA(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeCreatorType  _result = _underlying->IsA
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value SplitShell::IsA_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        SplitShell_IsA_AsyncWorker* asyncWorker = new SplitShell_IsA_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value SplitShell::Type(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeCreatorType  _result = _underlying->Type
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value SplitShell::Type_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        SplitShell_Type_AsyncWorker* asyncWorker = new SplitShell_Type_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value SplitShell::GetBasisPoints(const Napi::CallbackInfo& info) {
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

    Napi::Value SplitShell::GetBasisPoints_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        SplitShell_GetBasisPoints_AsyncWorker* asyncWorker = new SplitShell_GetBasisPoints_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value SplitShell::SetBasisPoints(const Napi::CallbackInfo& info) {
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

    Napi::Value SplitShell::SetBasisPoints_async(const Napi::CallbackInfo& info) {
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
        

        SplitShell_SetBasisPoints_AsyncWorker* asyncWorker = new SplitShell_SetBasisPoints_AsyncWorker(
_underlying,            deferred
,
                
                cd        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value SplitShell::GetBasisItems(const Napi::CallbackInfo& info) {
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

    Napi::Value SplitShell::GetBasisItems_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        SplitShell_GetBasisItems_AsyncWorker* asyncWorker = new SplitShell_GetBasisItems_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value SplitShell::GetCreatorsCount(const Napi::CallbackInfo& info) {
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

    Napi::Value SplitShell::GetCreatorsCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "CreatorType ct is required."));
                    return deferred.Promise();
            }


                    const MbeCreatorType ct = static_cast<MbeCreatorType>(info[0].ToNumber().Uint32Value());

        SplitShell_GetCreatorsCount_AsyncWorker* asyncWorker = new SplitShell_GetCreatorsCount_AsyncWorker(
_underlying,            deferred
,
                
                ct        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value SplitShell::GetYourNameMaker(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



const MbSNameMaker & _result = _underlying->GetYourNameMaker
(

);



    Napi::Value _to;

            _to = SNameMaker::NewInstance(env, (MbSNameMaker *)&(_result));

            return _to;


        }

    Napi::Value SplitShell::GetYourNameMaker_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        SplitShell_GetYourNameMaker_AsyncWorker* asyncWorker = new SplitShell_GetYourNameMaker_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value SplitShell::GetStatus(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeProcessState  _result = _underlying->GetStatus
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value SplitShell::GetStatus_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        SplitShell_GetStatus_AsyncWorker* asyncWorker = new SplitShell_GetStatus_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value SplitShell::SetStatus(const Napi::CallbackInfo& info) {
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

    Napi::Value SplitShell::SetStatus_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "ProcessState l is required."));
                    return deferred.Promise();
            }


                    const MbeProcessState l = static_cast<MbeProcessState>(info[0].ToNumber().Uint32Value());

        SplitShell_SetStatus_AsyncWorker* asyncWorker = new SplitShell_SetStatus_AsyncWorker(
_underlying,            deferred
,
                
                l        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value SplitShell::CreateShell(const Napi::CallbackInfo& info) {
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

    Napi::Value SplitShell::CreateShell_async(const Napi::CallbackInfo& info) {
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

        SplitShell_CreateShell_AsyncWorker* asyncWorker = new SplitShell_CreateShell_AsyncWorker(
_underlying,            deferred
,
                
                shell,
                
                sameShell        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value SplitShell::GetMainName(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 SimpleName  _result = _underlying->GetMainName
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value SplitShell::GetMainName_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        SplitShell_GetMainName_AsyncWorker* asyncWorker = new SplitShell_GetMainName_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value SplitShell::GetUseCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 refcount_t  _result = _underlying->GetUseCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value SplitShell::GetUseCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        SplitShell_GetUseCount_AsyncWorker* asyncWorker = new SplitShell_GetUseCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value SplitShell::AddRef(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->AddRef
(

);



    return env.Undefined();


        }

    Napi::Value SplitShell::AddRef_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        SplitShell_AddRef_AsyncWorker* asyncWorker = new SplitShell_AddRef_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }



    Napi::Value SplitShell::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }

SplitShell::~SplitShell() {
    // std::cout << "calling ::DeleteItem on SplitShell for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

    SplitShell_IsA_AsyncWorker::SplitShell_IsA_AsyncWorker(
MbSplitShell * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void SplitShell_IsA_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeCreatorType  _result = _underlying->IsA(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void SplitShell_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeCreatorType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void SplitShell_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    SplitShell_Type_AsyncWorker::SplitShell_Type_AsyncWorker(
MbSplitShell * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void SplitShell_Type_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeCreatorType  _result = _underlying->Type(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void SplitShell_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeCreatorType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void SplitShell_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    SplitShell_GetBasisPoints_AsyncWorker::SplitShell_GetBasisPoints_AsyncWorker(
MbSplitShell * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void SplitShell_GetBasisPoints_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbControlData3D *cd = new MbControlData3D;


        
        _underlying->GetBasisPoints(
                        *cd
        );


                this->cd = cd;

        
        ExitParallelRegion();
    }

    void SplitShell_GetBasisPoints_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void SplitShell_GetBasisPoints_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    SplitShell_SetBasisPoints_AsyncWorker::SplitShell_SetBasisPoints_AsyncWorker(
MbSplitShell * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbControlData3D & cd    )
        :_underlying(_underlying),PromiseWorker(d),
                        cd(cd)
{};

    void SplitShell_SetBasisPoints_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetBasisPoints(
                        cd
        );



        
        ExitParallelRegion();
    }

    void SplitShell_SetBasisPoints_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void SplitShell_SetBasisPoints_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    SplitShell_GetBasisItems_AsyncWorker::SplitShell_GetBasisItems_AsyncWorker(
MbSplitShell * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void SplitShell_GetBasisItems_AsyncWorker::Execute() {
        EnterParallelRegion();

                RPArray<MbSpaceItem> *items = new RPArray<MbSpaceItem>;


        
        _underlying->GetBasisItems(
                        *items
        );


                this->items = items;

        
        ExitParallelRegion();
    }

    void SplitShell_GetBasisItems_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void SplitShell_GetBasisItems_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    SplitShell_GetCreatorsCount_AsyncWorker::SplitShell_GetCreatorsCount_AsyncWorker(
MbSplitShell * _underlying,        Napi::Promise::Deferred const &d
,
                         MbeCreatorType  ct    )
        :_underlying(_underlying),PromiseWorker(d),
                        ct(ct)
{};

    void SplitShell_GetCreatorsCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         size_t  _result = _underlying->GetCreatorsCount(
                        ct
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void SplitShell_GetCreatorsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             size_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void SplitShell_GetCreatorsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    SplitShell_GetYourNameMaker_AsyncWorker::SplitShell_GetYourNameMaker_AsyncWorker(
MbSplitShell * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void SplitShell_GetYourNameMaker_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        const MbSNameMaker & _result = _underlying->GetYourNameMaker(
        );


                this->_result = (MbSNameMaker *)&(_result);

        
        ExitParallelRegion();
    }

    void SplitShell_GetYourNameMaker_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            const MbSNameMaker * _result = this->_result;
                _to = SNameMaker::NewInstance(env, (MbSNameMaker *)&(_result));

            deferred.Resolve(_to);
    }

    void SplitShell_GetYourNameMaker_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    SplitShell_GetStatus_AsyncWorker::SplitShell_GetStatus_AsyncWorker(
MbSplitShell * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void SplitShell_GetStatus_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeProcessState  _result = _underlying->GetStatus(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void SplitShell_GetStatus_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeProcessState  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void SplitShell_GetStatus_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    SplitShell_SetStatus_AsyncWorker::SplitShell_SetStatus_AsyncWorker(
MbSplitShell * _underlying,        Napi::Promise::Deferred const &d
,
                         MbeProcessState  l    )
        :_underlying(_underlying),PromiseWorker(d),
                        l(l)
{};

    void SplitShell_SetStatus_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetStatus(
                        l
        );



        
        ExitParallelRegion();
    }

    void SplitShell_SetStatus_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void SplitShell_SetStatus_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    SplitShell_CreateShell_AsyncWorker::SplitShell_CreateShell_AsyncWorker(
MbSplitShell * _underlying,        Napi::Promise::Deferred const &d
,
                         MbFaceShell * shell,
                         MbeCopyMode  sameShell    )
        :_underlying(_underlying),PromiseWorker(d),
                        shell(shell)
,
                        sameShell(sameShell)
{};

    void SplitShell_CreateShell_AsyncWorker::Execute() {
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

    void SplitShell_CreateShell_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void SplitShell_CreateShell_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    SplitShell_GetMainName_AsyncWorker::SplitShell_GetMainName_AsyncWorker(
MbSplitShell * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void SplitShell_GetMainName_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         SimpleName  _result = _underlying->GetMainName(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void SplitShell_GetMainName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             SimpleName  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void SplitShell_GetMainName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    SplitShell_GetUseCount_AsyncWorker::SplitShell_GetUseCount_AsyncWorker(
MbSplitShell * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void SplitShell_GetUseCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         refcount_t  _result = _underlying->GetUseCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void SplitShell_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             refcount_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void SplitShell_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    SplitShell_AddRef_AsyncWorker::SplitShell_AddRef_AsyncWorker(
MbSplitShell * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void SplitShell_AddRef_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddRef(
        );



        
        ExitParallelRegion();
    }

    void SplitShell_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void SplitShell_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

