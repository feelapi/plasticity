// This is a generated file, modify: generate/templates/SymmetrySolid.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/SymmetrySolid.h"

#include "tool_mutex.h"

Napi::Object SymmetrySolid::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "SymmetrySolid", {
        InstanceMethod<&SymmetrySolid::IsA>("IsA"),
        InstanceMethod<&SymmetrySolid::IsA_async>("IsA_async"),
        InstanceMethod<&SymmetrySolid::Type>("Type"),
        InstanceMethod<&SymmetrySolid::Type_async>("Type_async"),
        InstanceMethod<&SymmetrySolid::GetBasisPoints>("GetBasisPoints"),
        InstanceMethod<&SymmetrySolid::GetBasisPoints_async>("GetBasisPoints_async"),
        InstanceMethod<&SymmetrySolid::SetBasisPoints>("SetBasisPoints"),
        InstanceMethod<&SymmetrySolid::SetBasisPoints_async>("SetBasisPoints_async"),
        InstanceMethod<&SymmetrySolid::GetBasisItems>("GetBasisItems"),
        InstanceMethod<&SymmetrySolid::GetBasisItems_async>("GetBasisItems_async"),
        InstanceMethod<&SymmetrySolid::GetCreatorsCount>("GetCreatorsCount"),
        InstanceMethod<&SymmetrySolid::GetCreatorsCount_async>("GetCreatorsCount_async"),
        InstanceMethod<&SymmetrySolid::GetYourNameMaker>("GetYourNameMaker"),
        InstanceMethod<&SymmetrySolid::GetYourNameMaker_async>("GetYourNameMaker_async"),
        InstanceMethod<&SymmetrySolid::GetStatus>("GetStatus"),
        InstanceMethod<&SymmetrySolid::GetStatus_async>("GetStatus_async"),
        InstanceMethod<&SymmetrySolid::SetStatus>("SetStatus"),
        InstanceMethod<&SymmetrySolid::SetStatus_async>("SetStatus_async"),
        InstanceMethod<&SymmetrySolid::CreateShell>("CreateShell"),
        InstanceMethod<&SymmetrySolid::CreateShell_async>("CreateShell_async"),
        InstanceMethod<&SymmetrySolid::GetMainName>("GetMainName"),
        InstanceMethod<&SymmetrySolid::GetMainName_async>("GetMainName_async"),
        InstanceMethod<&SymmetrySolid::GetUseCount>("GetUseCount"),
        InstanceMethod<&SymmetrySolid::GetUseCount_async>("GetUseCount_async"),
        InstanceMethod<&SymmetrySolid::AddRef>("AddRef"),
        InstanceMethod<&SymmetrySolid::AddRef_async>("AddRef_async"),
            InstanceMethod<&SymmetrySolid::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("SymmetrySolid", func);

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

SymmetrySolid::SymmetrySolid(const Napi::CallbackInfo& info) : Napi::ObjectWrap<SymmetrySolid>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        Napi::Error::New(env, "SymmetrySolid cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object SymmetrySolid::NewInstance(Napi::Env env, MbSymmetrySolid *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("SymmetrySolid");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    SymmetrySolid *unwrapped = SymmetrySolid::Unwrap(inst);
underlying->AddRef();    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function SymmetrySolid::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("SymmetrySolid");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

        Napi::Value SymmetrySolid::IsA(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeCreatorType  _result = _underlying->IsA
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value SymmetrySolid::IsA_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        SymmetrySolid_IsA_AsyncWorker* asyncWorker = new SymmetrySolid_IsA_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value SymmetrySolid::Type(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeCreatorType  _result = _underlying->Type
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value SymmetrySolid::Type_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        SymmetrySolid_Type_AsyncWorker* asyncWorker = new SymmetrySolid_Type_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value SymmetrySolid::GetBasisPoints(const Napi::CallbackInfo& info) {
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

    Napi::Value SymmetrySolid::GetBasisPoints_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        SymmetrySolid_GetBasisPoints_AsyncWorker* asyncWorker = new SymmetrySolid_GetBasisPoints_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value SymmetrySolid::SetBasisPoints(const Napi::CallbackInfo& info) {
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

    Napi::Value SymmetrySolid::SetBasisPoints_async(const Napi::CallbackInfo& info) {
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
        

        SymmetrySolid_SetBasisPoints_AsyncWorker* asyncWorker = new SymmetrySolid_SetBasisPoints_AsyncWorker(
_underlying,            deferred
,
                
                cd        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value SymmetrySolid::GetBasisItems(const Napi::CallbackInfo& info) {
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

    Napi::Value SymmetrySolid::GetBasisItems_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        SymmetrySolid_GetBasisItems_AsyncWorker* asyncWorker = new SymmetrySolid_GetBasisItems_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value SymmetrySolid::GetCreatorsCount(const Napi::CallbackInfo& info) {
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

    Napi::Value SymmetrySolid::GetCreatorsCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "CreatorType ct is required."));
                    return deferred.Promise();
            }


                    const MbeCreatorType ct = static_cast<MbeCreatorType>(info[0].ToNumber().Uint32Value());

        SymmetrySolid_GetCreatorsCount_AsyncWorker* asyncWorker = new SymmetrySolid_GetCreatorsCount_AsyncWorker(
_underlying,            deferred
,
                
                ct        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value SymmetrySolid::GetYourNameMaker(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



const MbSNameMaker & _result = _underlying->GetYourNameMaker
(

);



    Napi::Value _to;

            _to = SNameMaker::NewInstance(env, (MbSNameMaker *)&(_result));

            return _to;


        }

    Napi::Value SymmetrySolid::GetYourNameMaker_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        SymmetrySolid_GetYourNameMaker_AsyncWorker* asyncWorker = new SymmetrySolid_GetYourNameMaker_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value SymmetrySolid::GetStatus(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeProcessState  _result = _underlying->GetStatus
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value SymmetrySolid::GetStatus_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        SymmetrySolid_GetStatus_AsyncWorker* asyncWorker = new SymmetrySolid_GetStatus_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value SymmetrySolid::SetStatus(const Napi::CallbackInfo& info) {
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

    Napi::Value SymmetrySolid::SetStatus_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "ProcessState l is required."));
                    return deferred.Promise();
            }


                    const MbeProcessState l = static_cast<MbeProcessState>(info[0].ToNumber().Uint32Value());

        SymmetrySolid_SetStatus_AsyncWorker* asyncWorker = new SymmetrySolid_SetStatus_AsyncWorker(
_underlying,            deferred
,
                
                l        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value SymmetrySolid::CreateShell(const Napi::CallbackInfo& info) {
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

    Napi::Value SymmetrySolid::CreateShell_async(const Napi::CallbackInfo& info) {
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

        SymmetrySolid_CreateShell_AsyncWorker* asyncWorker = new SymmetrySolid_CreateShell_AsyncWorker(
_underlying,            deferred
,
                
                shell,
                
                sameShell        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value SymmetrySolid::GetMainName(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 SimpleName  _result = _underlying->GetMainName
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value SymmetrySolid::GetMainName_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        SymmetrySolid_GetMainName_AsyncWorker* asyncWorker = new SymmetrySolid_GetMainName_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value SymmetrySolid::GetUseCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 refcount_t  _result = _underlying->GetUseCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value SymmetrySolid::GetUseCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        SymmetrySolid_GetUseCount_AsyncWorker* asyncWorker = new SymmetrySolid_GetUseCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value SymmetrySolid::AddRef(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->AddRef
(

);



    return env.Undefined();


        }

    Napi::Value SymmetrySolid::AddRef_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        SymmetrySolid_AddRef_AsyncWorker* asyncWorker = new SymmetrySolid_AddRef_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }



    Napi::Value SymmetrySolid::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }

SymmetrySolid::~SymmetrySolid() {
    // std::cout << "calling ::DeleteItem on SymmetrySolid for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

    SymmetrySolid_IsA_AsyncWorker::SymmetrySolid_IsA_AsyncWorker(
MbSymmetrySolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void SymmetrySolid_IsA_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeCreatorType  _result = _underlying->IsA(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void SymmetrySolid_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeCreatorType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void SymmetrySolid_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    SymmetrySolid_Type_AsyncWorker::SymmetrySolid_Type_AsyncWorker(
MbSymmetrySolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void SymmetrySolid_Type_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeCreatorType  _result = _underlying->Type(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void SymmetrySolid_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeCreatorType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void SymmetrySolid_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    SymmetrySolid_GetBasisPoints_AsyncWorker::SymmetrySolid_GetBasisPoints_AsyncWorker(
MbSymmetrySolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void SymmetrySolid_GetBasisPoints_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbControlData3D *cd = new MbControlData3D;


        
        _underlying->GetBasisPoints(
                        *cd
        );


                this->cd = cd;

        
        ExitParallelRegion();
    }

    void SymmetrySolid_GetBasisPoints_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void SymmetrySolid_GetBasisPoints_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    SymmetrySolid_SetBasisPoints_AsyncWorker::SymmetrySolid_SetBasisPoints_AsyncWorker(
MbSymmetrySolid * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbControlData3D & cd    )
        :_underlying(_underlying),PromiseWorker(d),
                        cd(cd)
{};

    void SymmetrySolid_SetBasisPoints_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetBasisPoints(
                        cd
        );



        
        ExitParallelRegion();
    }

    void SymmetrySolid_SetBasisPoints_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void SymmetrySolid_SetBasisPoints_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    SymmetrySolid_GetBasisItems_AsyncWorker::SymmetrySolid_GetBasisItems_AsyncWorker(
MbSymmetrySolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void SymmetrySolid_GetBasisItems_AsyncWorker::Execute() {
        EnterParallelRegion();

                RPArray<MbSpaceItem> *items = new RPArray<MbSpaceItem>;


        
        _underlying->GetBasisItems(
                        *items
        );


                this->items = items;

        
        ExitParallelRegion();
    }

    void SymmetrySolid_GetBasisItems_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void SymmetrySolid_GetBasisItems_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    SymmetrySolid_GetCreatorsCount_AsyncWorker::SymmetrySolid_GetCreatorsCount_AsyncWorker(
MbSymmetrySolid * _underlying,        Napi::Promise::Deferred const &d
,
                         MbeCreatorType  ct    )
        :_underlying(_underlying),PromiseWorker(d),
                        ct(ct)
{};

    void SymmetrySolid_GetCreatorsCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         size_t  _result = _underlying->GetCreatorsCount(
                        ct
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void SymmetrySolid_GetCreatorsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             size_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void SymmetrySolid_GetCreatorsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    SymmetrySolid_GetYourNameMaker_AsyncWorker::SymmetrySolid_GetYourNameMaker_AsyncWorker(
MbSymmetrySolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void SymmetrySolid_GetYourNameMaker_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        const MbSNameMaker & _result = _underlying->GetYourNameMaker(
        );


                this->_result = (MbSNameMaker *)&(_result);

        
        ExitParallelRegion();
    }

    void SymmetrySolid_GetYourNameMaker_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            const MbSNameMaker * _result = this->_result;
                _to = SNameMaker::NewInstance(env, (MbSNameMaker *)&(_result));

            deferred.Resolve(_to);
    }

    void SymmetrySolid_GetYourNameMaker_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    SymmetrySolid_GetStatus_AsyncWorker::SymmetrySolid_GetStatus_AsyncWorker(
MbSymmetrySolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void SymmetrySolid_GetStatus_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeProcessState  _result = _underlying->GetStatus(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void SymmetrySolid_GetStatus_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeProcessState  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void SymmetrySolid_GetStatus_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    SymmetrySolid_SetStatus_AsyncWorker::SymmetrySolid_SetStatus_AsyncWorker(
MbSymmetrySolid * _underlying,        Napi::Promise::Deferred const &d
,
                         MbeProcessState  l    )
        :_underlying(_underlying),PromiseWorker(d),
                        l(l)
{};

    void SymmetrySolid_SetStatus_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetStatus(
                        l
        );



        
        ExitParallelRegion();
    }

    void SymmetrySolid_SetStatus_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void SymmetrySolid_SetStatus_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    SymmetrySolid_CreateShell_AsyncWorker::SymmetrySolid_CreateShell_AsyncWorker(
MbSymmetrySolid * _underlying,        Napi::Promise::Deferred const &d
,
                         MbFaceShell * shell,
                         MbeCopyMode  sameShell    )
        :_underlying(_underlying),PromiseWorker(d),
                        shell(shell)
,
                        sameShell(sameShell)
{};

    void SymmetrySolid_CreateShell_AsyncWorker::Execute() {
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

    void SymmetrySolid_CreateShell_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void SymmetrySolid_CreateShell_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    SymmetrySolid_GetMainName_AsyncWorker::SymmetrySolid_GetMainName_AsyncWorker(
MbSymmetrySolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void SymmetrySolid_GetMainName_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         SimpleName  _result = _underlying->GetMainName(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void SymmetrySolid_GetMainName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             SimpleName  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void SymmetrySolid_GetMainName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    SymmetrySolid_GetUseCount_AsyncWorker::SymmetrySolid_GetUseCount_AsyncWorker(
MbSymmetrySolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void SymmetrySolid_GetUseCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         refcount_t  _result = _underlying->GetUseCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void SymmetrySolid_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             refcount_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void SymmetrySolid_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    SymmetrySolid_AddRef_AsyncWorker::SymmetrySolid_AddRef_AsyncWorker(
MbSymmetrySolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void SymmetrySolid_AddRef_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddRef(
        );



        
        ExitParallelRegion();
    }

    void SymmetrySolid_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void SymmetrySolid_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

