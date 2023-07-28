// This is a generated file, modify: generate/templates/ChamferSolid.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/ChamferSolid.h"

#include "tool_mutex.h"

Napi::Object ChamferSolid::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "ChamferSolid", {
        InstanceMethod<&ChamferSolid::GetParameters>("GetParameters"),
        InstanceMethod<&ChamferSolid::GetParameters_async>("GetParameters_async"),
        InstanceMethod<&ChamferSolid::SetParameters>("SetParameters"),
        InstanceMethod<&ChamferSolid::SetParameters_async>("SetParameters_async"),
        InstanceMethod<&ChamferSolid::IsA>("IsA"),
        InstanceMethod<&ChamferSolid::IsA_async>("IsA_async"),
        InstanceMethod<&ChamferSolid::Type>("Type"),
        InstanceMethod<&ChamferSolid::Type_async>("Type_async"),
        InstanceMethod<&ChamferSolid::GetBasisPoints>("GetBasisPoints"),
        InstanceMethod<&ChamferSolid::GetBasisPoints_async>("GetBasisPoints_async"),
        InstanceMethod<&ChamferSolid::SetBasisPoints>("SetBasisPoints"),
        InstanceMethod<&ChamferSolid::SetBasisPoints_async>("SetBasisPoints_async"),
        InstanceMethod<&ChamferSolid::GetBasisItems>("GetBasisItems"),
        InstanceMethod<&ChamferSolid::GetBasisItems_async>("GetBasisItems_async"),
        InstanceMethod<&ChamferSolid::GetCreatorsCount>("GetCreatorsCount"),
        InstanceMethod<&ChamferSolid::GetCreatorsCount_async>("GetCreatorsCount_async"),
        InstanceMethod<&ChamferSolid::GetYourNameMaker>("GetYourNameMaker"),
        InstanceMethod<&ChamferSolid::GetYourNameMaker_async>("GetYourNameMaker_async"),
        InstanceMethod<&ChamferSolid::GetStatus>("GetStatus"),
        InstanceMethod<&ChamferSolid::GetStatus_async>("GetStatus_async"),
        InstanceMethod<&ChamferSolid::SetStatus>("SetStatus"),
        InstanceMethod<&ChamferSolid::SetStatus_async>("SetStatus_async"),
        InstanceMethod<&ChamferSolid::CreateShell>("CreateShell"),
        InstanceMethod<&ChamferSolid::CreateShell_async>("CreateShell_async"),
        InstanceMethod<&ChamferSolid::GetMainName>("GetMainName"),
        InstanceMethod<&ChamferSolid::GetMainName_async>("GetMainName_async"),
        InstanceMethod<&ChamferSolid::GetUseCount>("GetUseCount"),
        InstanceMethod<&ChamferSolid::GetUseCount_async>("GetUseCount_async"),
        InstanceMethod<&ChamferSolid::AddRef>("AddRef"),
        InstanceMethod<&ChamferSolid::AddRef_async>("AddRef_async"),
            InstanceMethod<&ChamferSolid::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("ChamferSolid", func);

    Napi::Object global = env.Global();
    Napi::Object Object = global.Get("Object").ToObject();
    Napi::Function setPrototypeOf = Napi::Function(env, Object.Get("setPrototypeOf"));
    Napi::Value prototype = func.Get("prototype");

    Napi::Function superFunc = SmoothSolid::GetConstructor(env);
    Napi::FunctionReference* superConstructor = new Napi::FunctionReference();
    *superConstructor = Napi::Persistent(superFunc);

    Napi::Value superPrototype = superFunc.Get("prototype");
    setPrototypeOf.Call({prototype, superPrototype});
    setPrototypeOf.Call({func, superFunc});

    return exports;
}

ChamferSolid::ChamferSolid(const Napi::CallbackInfo& info) : Napi::ObjectWrap<ChamferSolid>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        Napi::Error::New(env, "ChamferSolid cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object ChamferSolid::NewInstance(Napi::Env env, MbChamferSolid *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("ChamferSolid");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    ChamferSolid *unwrapped = ChamferSolid::Unwrap(inst);
underlying->AddRef();    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function ChamferSolid::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("ChamferSolid");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

        Napi::Value ChamferSolid::GetParameters(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                    SmoothValues *params = new SmoothValues;




_underlying->GetParameters
(
        *params

);



    Napi::Value _to;

            if (params != NULL) {
        _to = _SmoothValues::NewInstance(env, (SmoothValues *)params);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value ChamferSolid::GetParameters_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ChamferSolid_GetParameters_AsyncWorker* asyncWorker = new ChamferSolid_GetParameters_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ChamferSolid::SetParameters(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(_SmoothValues::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "SmoothValues params is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'params'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class _SmoothValues *params_ = _SmoothValues::Unwrap(info[0].ToObject());
        
        const SmoothValues & params =*params_->_underlying;
        



_underlying->SetParameters
(
        params

);



    return env.Undefined();


        }

    Napi::Value ChamferSolid::SetParameters_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(_SmoothValues::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "SmoothValues params is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'params'"));
                return deferred.Promise();
        }
        const class _SmoothValues *params_ = _SmoothValues::Unwrap(info[0].ToObject());
        
        const SmoothValues & params =*params_->_underlying;
        

        ChamferSolid_SetParameters_AsyncWorker* asyncWorker = new ChamferSolid_SetParameters_AsyncWorker(
_underlying,            deferred
,
                
                params        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ChamferSolid::IsA(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeCreatorType  _result = _underlying->IsA
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value ChamferSolid::IsA_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ChamferSolid_IsA_AsyncWorker* asyncWorker = new ChamferSolid_IsA_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ChamferSolid::Type(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeCreatorType  _result = _underlying->Type
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value ChamferSolid::Type_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ChamferSolid_Type_AsyncWorker* asyncWorker = new ChamferSolid_Type_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ChamferSolid::GetBasisPoints(const Napi::CallbackInfo& info) {
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

    Napi::Value ChamferSolid::GetBasisPoints_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ChamferSolid_GetBasisPoints_AsyncWorker* asyncWorker = new ChamferSolid_GetBasisPoints_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ChamferSolid::SetBasisPoints(const Napi::CallbackInfo& info) {
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

    Napi::Value ChamferSolid::SetBasisPoints_async(const Napi::CallbackInfo& info) {
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
        

        ChamferSolid_SetBasisPoints_AsyncWorker* asyncWorker = new ChamferSolid_SetBasisPoints_AsyncWorker(
_underlying,            deferred
,
                
                cd        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ChamferSolid::GetBasisItems(const Napi::CallbackInfo& info) {
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

    Napi::Value ChamferSolid::GetBasisItems_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ChamferSolid_GetBasisItems_AsyncWorker* asyncWorker = new ChamferSolid_GetBasisItems_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ChamferSolid::GetCreatorsCount(const Napi::CallbackInfo& info) {
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

    Napi::Value ChamferSolid::GetCreatorsCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "CreatorType ct is required."));
                    return deferred.Promise();
            }


                    const MbeCreatorType ct = static_cast<MbeCreatorType>(info[0].ToNumber().Uint32Value());

        ChamferSolid_GetCreatorsCount_AsyncWorker* asyncWorker = new ChamferSolid_GetCreatorsCount_AsyncWorker(
_underlying,            deferred
,
                
                ct        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ChamferSolid::GetYourNameMaker(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



const MbSNameMaker & _result = _underlying->GetYourNameMaker
(

);



    Napi::Value _to;

            _to = SNameMaker::NewInstance(env, (MbSNameMaker *)&(_result));

            return _to;


        }

    Napi::Value ChamferSolid::GetYourNameMaker_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ChamferSolid_GetYourNameMaker_AsyncWorker* asyncWorker = new ChamferSolid_GetYourNameMaker_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ChamferSolid::GetStatus(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeProcessState  _result = _underlying->GetStatus
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value ChamferSolid::GetStatus_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ChamferSolid_GetStatus_AsyncWorker* asyncWorker = new ChamferSolid_GetStatus_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ChamferSolid::SetStatus(const Napi::CallbackInfo& info) {
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

    Napi::Value ChamferSolid::SetStatus_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "ProcessState l is required."));
                    return deferred.Promise();
            }


                    const MbeProcessState l = static_cast<MbeProcessState>(info[0].ToNumber().Uint32Value());

        ChamferSolid_SetStatus_AsyncWorker* asyncWorker = new ChamferSolid_SetStatus_AsyncWorker(
_underlying,            deferred
,
                
                l        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ChamferSolid::CreateShell(const Napi::CallbackInfo& info) {
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

    Napi::Value ChamferSolid::CreateShell_async(const Napi::CallbackInfo& info) {
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

        ChamferSolid_CreateShell_AsyncWorker* asyncWorker = new ChamferSolid_CreateShell_AsyncWorker(
_underlying,            deferred
,
                
                shell,
                
                sameShell        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ChamferSolid::GetMainName(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 SimpleName  _result = _underlying->GetMainName
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value ChamferSolid::GetMainName_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ChamferSolid_GetMainName_AsyncWorker* asyncWorker = new ChamferSolid_GetMainName_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ChamferSolid::GetUseCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 refcount_t  _result = _underlying->GetUseCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value ChamferSolid::GetUseCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ChamferSolid_GetUseCount_AsyncWorker* asyncWorker = new ChamferSolid_GetUseCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ChamferSolid::AddRef(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->AddRef
(

);



    return env.Undefined();


        }

    Napi::Value ChamferSolid::AddRef_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ChamferSolid_AddRef_AsyncWorker* asyncWorker = new ChamferSolid_AddRef_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }



    Napi::Value ChamferSolid::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }

ChamferSolid::~ChamferSolid() {
    // std::cout << "calling ::DeleteItem on ChamferSolid for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

    ChamferSolid_GetParameters_AsyncWorker::ChamferSolid_GetParameters_AsyncWorker(
MbChamferSolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ChamferSolid_GetParameters_AsyncWorker::Execute() {
        EnterParallelRegion();

                SmoothValues *params = new SmoothValues;


        
        _underlying->GetParameters(
                        *params
        );


                this->params = params;

        
        ExitParallelRegion();
    }

    void ChamferSolid_GetParameters_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             SmoothValues * params = this->params;
                if (params != NULL) {
        _to = _SmoothValues::NewInstance(env, (SmoothValues *)params);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void ChamferSolid_GetParameters_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ChamferSolid_SetParameters_AsyncWorker::ChamferSolid_SetParameters_AsyncWorker(
MbChamferSolid * _underlying,        Napi::Promise::Deferred const &d
,
                        const SmoothValues & params    )
        :_underlying(_underlying),PromiseWorker(d),
                        params(params)
{};

    void ChamferSolid_SetParameters_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetParameters(
                        params
        );



        
        ExitParallelRegion();
    }

    void ChamferSolid_SetParameters_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void ChamferSolid_SetParameters_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ChamferSolid_IsA_AsyncWorker::ChamferSolid_IsA_AsyncWorker(
MbChamferSolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ChamferSolid_IsA_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeCreatorType  _result = _underlying->IsA(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void ChamferSolid_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeCreatorType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void ChamferSolid_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ChamferSolid_Type_AsyncWorker::ChamferSolid_Type_AsyncWorker(
MbChamferSolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ChamferSolid_Type_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeCreatorType  _result = _underlying->Type(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void ChamferSolid_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeCreatorType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void ChamferSolid_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ChamferSolid_GetBasisPoints_AsyncWorker::ChamferSolid_GetBasisPoints_AsyncWorker(
MbChamferSolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ChamferSolid_GetBasisPoints_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbControlData3D *cd = new MbControlData3D;


        
        _underlying->GetBasisPoints(
                        *cd
        );


                this->cd = cd;

        
        ExitParallelRegion();
    }

    void ChamferSolid_GetBasisPoints_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void ChamferSolid_GetBasisPoints_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ChamferSolid_SetBasisPoints_AsyncWorker::ChamferSolid_SetBasisPoints_AsyncWorker(
MbChamferSolid * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbControlData3D & cd    )
        :_underlying(_underlying),PromiseWorker(d),
                        cd(cd)
{};

    void ChamferSolid_SetBasisPoints_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetBasisPoints(
                        cd
        );



        
        ExitParallelRegion();
    }

    void ChamferSolid_SetBasisPoints_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void ChamferSolid_SetBasisPoints_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ChamferSolid_GetBasisItems_AsyncWorker::ChamferSolid_GetBasisItems_AsyncWorker(
MbChamferSolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ChamferSolid_GetBasisItems_AsyncWorker::Execute() {
        EnterParallelRegion();

                RPArray<MbSpaceItem> *items = new RPArray<MbSpaceItem>;


        
        _underlying->GetBasisItems(
                        *items
        );


                this->items = items;

        
        ExitParallelRegion();
    }

    void ChamferSolid_GetBasisItems_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void ChamferSolid_GetBasisItems_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ChamferSolid_GetCreatorsCount_AsyncWorker::ChamferSolid_GetCreatorsCount_AsyncWorker(
MbChamferSolid * _underlying,        Napi::Promise::Deferred const &d
,
                         MbeCreatorType  ct    )
        :_underlying(_underlying),PromiseWorker(d),
                        ct(ct)
{};

    void ChamferSolid_GetCreatorsCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         size_t  _result = _underlying->GetCreatorsCount(
                        ct
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void ChamferSolid_GetCreatorsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             size_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void ChamferSolid_GetCreatorsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ChamferSolid_GetYourNameMaker_AsyncWorker::ChamferSolid_GetYourNameMaker_AsyncWorker(
MbChamferSolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ChamferSolid_GetYourNameMaker_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        const MbSNameMaker & _result = _underlying->GetYourNameMaker(
        );


                this->_result = (MbSNameMaker *)&(_result);

        
        ExitParallelRegion();
    }

    void ChamferSolid_GetYourNameMaker_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            const MbSNameMaker * _result = this->_result;
                _to = SNameMaker::NewInstance(env, (MbSNameMaker *)&(_result));

            deferred.Resolve(_to);
    }

    void ChamferSolid_GetYourNameMaker_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ChamferSolid_GetStatus_AsyncWorker::ChamferSolid_GetStatus_AsyncWorker(
MbChamferSolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ChamferSolid_GetStatus_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeProcessState  _result = _underlying->GetStatus(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void ChamferSolid_GetStatus_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeProcessState  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void ChamferSolid_GetStatus_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ChamferSolid_SetStatus_AsyncWorker::ChamferSolid_SetStatus_AsyncWorker(
MbChamferSolid * _underlying,        Napi::Promise::Deferred const &d
,
                         MbeProcessState  l    )
        :_underlying(_underlying),PromiseWorker(d),
                        l(l)
{};

    void ChamferSolid_SetStatus_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetStatus(
                        l
        );



        
        ExitParallelRegion();
    }

    void ChamferSolid_SetStatus_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void ChamferSolid_SetStatus_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ChamferSolid_CreateShell_AsyncWorker::ChamferSolid_CreateShell_AsyncWorker(
MbChamferSolid * _underlying,        Napi::Promise::Deferred const &d
,
                         MbFaceShell * shell,
                         MbeCopyMode  sameShell    )
        :_underlying(_underlying),PromiseWorker(d),
                        shell(shell)
,
                        sameShell(sameShell)
{};

    void ChamferSolid_CreateShell_AsyncWorker::Execute() {
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

    void ChamferSolid_CreateShell_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void ChamferSolid_CreateShell_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ChamferSolid_GetMainName_AsyncWorker::ChamferSolid_GetMainName_AsyncWorker(
MbChamferSolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ChamferSolid_GetMainName_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         SimpleName  _result = _underlying->GetMainName(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void ChamferSolid_GetMainName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             SimpleName  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void ChamferSolid_GetMainName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ChamferSolid_GetUseCount_AsyncWorker::ChamferSolid_GetUseCount_AsyncWorker(
MbChamferSolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ChamferSolid_GetUseCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         refcount_t  _result = _underlying->GetUseCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void ChamferSolid_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             refcount_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void ChamferSolid_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ChamferSolid_AddRef_AsyncWorker::ChamferSolid_AddRef_AsyncWorker(
MbChamferSolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ChamferSolid_AddRef_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddRef(
        );



        
        ExitParallelRegion();
    }

    void ChamferSolid_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void ChamferSolid_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

