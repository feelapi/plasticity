// This is a generated file, modify: generate/templates/SimpleCreator.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/SimpleCreator.h"

#include "tool_mutex.h"

Napi::Object SimpleCreator::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "SimpleCreator", {
        InstanceMethod<&SimpleCreator::IsA>("IsA"),
        InstanceMethod<&SimpleCreator::IsA_async>("IsA_async"),
        InstanceMethod<&SimpleCreator::Type>("Type"),
        InstanceMethod<&SimpleCreator::Type_async>("Type_async"),
        InstanceMethod<&SimpleCreator::GetBasisPoints>("GetBasisPoints"),
        InstanceMethod<&SimpleCreator::GetBasisPoints_async>("GetBasisPoints_async"),
        InstanceMethod<&SimpleCreator::SetBasisPoints>("SetBasisPoints"),
        InstanceMethod<&SimpleCreator::SetBasisPoints_async>("SetBasisPoints_async"),
        InstanceMethod<&SimpleCreator::GetBasisItems>("GetBasisItems"),
        InstanceMethod<&SimpleCreator::GetBasisItems_async>("GetBasisItems_async"),
        InstanceMethod<&SimpleCreator::GetCreatorsCount>("GetCreatorsCount"),
        InstanceMethod<&SimpleCreator::GetCreatorsCount_async>("GetCreatorsCount_async"),
        InstanceMethod<&SimpleCreator::GetYourNameMaker>("GetYourNameMaker"),
        InstanceMethod<&SimpleCreator::GetYourNameMaker_async>("GetYourNameMaker_async"),
        InstanceMethod<&SimpleCreator::GetStatus>("GetStatus"),
        InstanceMethod<&SimpleCreator::GetStatus_async>("GetStatus_async"),
        InstanceMethod<&SimpleCreator::SetStatus>("SetStatus"),
        InstanceMethod<&SimpleCreator::SetStatus_async>("SetStatus_async"),
        InstanceMethod<&SimpleCreator::CreateShell>("CreateShell"),
        InstanceMethod<&SimpleCreator::CreateShell_async>("CreateShell_async"),
        InstanceMethod<&SimpleCreator::GetMainName>("GetMainName"),
        InstanceMethod<&SimpleCreator::GetMainName_async>("GetMainName_async"),
        InstanceMethod<&SimpleCreator::GetUseCount>("GetUseCount"),
        InstanceMethod<&SimpleCreator::GetUseCount_async>("GetUseCount_async"),
        InstanceMethod<&SimpleCreator::AddRef>("AddRef"),
        InstanceMethod<&SimpleCreator::AddRef_async>("AddRef_async"),
            InstanceMethod<&SimpleCreator::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("SimpleCreator", func);

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

SimpleCreator::SimpleCreator(const Napi::CallbackInfo& info) : Napi::ObjectWrap<SimpleCreator>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        Napi::Error::New(env, "SimpleCreator cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object SimpleCreator::NewInstance(Napi::Env env, MbSimpleCreator *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("SimpleCreator");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    SimpleCreator *unwrapped = SimpleCreator::Unwrap(inst);
underlying->AddRef();    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function SimpleCreator::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("SimpleCreator");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

        Napi::Value SimpleCreator::IsA(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeCreatorType  _result = _underlying->IsA
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value SimpleCreator::IsA_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        SimpleCreator_IsA_AsyncWorker* asyncWorker = new SimpleCreator_IsA_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value SimpleCreator::Type(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeCreatorType  _result = _underlying->Type
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value SimpleCreator::Type_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        SimpleCreator_Type_AsyncWorker* asyncWorker = new SimpleCreator_Type_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value SimpleCreator::GetBasisPoints(const Napi::CallbackInfo& info) {
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

    Napi::Value SimpleCreator::GetBasisPoints_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        SimpleCreator_GetBasisPoints_AsyncWorker* asyncWorker = new SimpleCreator_GetBasisPoints_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value SimpleCreator::SetBasisPoints(const Napi::CallbackInfo& info) {
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

    Napi::Value SimpleCreator::SetBasisPoints_async(const Napi::CallbackInfo& info) {
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
        

        SimpleCreator_SetBasisPoints_AsyncWorker* asyncWorker = new SimpleCreator_SetBasisPoints_AsyncWorker(
_underlying,            deferred
,
                
                cd        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value SimpleCreator::GetBasisItems(const Napi::CallbackInfo& info) {
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

    Napi::Value SimpleCreator::GetBasisItems_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        SimpleCreator_GetBasisItems_AsyncWorker* asyncWorker = new SimpleCreator_GetBasisItems_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value SimpleCreator::GetCreatorsCount(const Napi::CallbackInfo& info) {
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

    Napi::Value SimpleCreator::GetCreatorsCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "CreatorType ct is required."));
                    return deferred.Promise();
            }


                    const MbeCreatorType ct = static_cast<MbeCreatorType>(info[0].ToNumber().Uint32Value());

        SimpleCreator_GetCreatorsCount_AsyncWorker* asyncWorker = new SimpleCreator_GetCreatorsCount_AsyncWorker(
_underlying,            deferred
,
                
                ct        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value SimpleCreator::GetYourNameMaker(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



const MbSNameMaker & _result = _underlying->GetYourNameMaker
(

);



    Napi::Value _to;

            _to = SNameMaker::NewInstance(env, (MbSNameMaker *)&(_result));

            return _to;


        }

    Napi::Value SimpleCreator::GetYourNameMaker_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        SimpleCreator_GetYourNameMaker_AsyncWorker* asyncWorker = new SimpleCreator_GetYourNameMaker_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value SimpleCreator::GetStatus(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeProcessState  _result = _underlying->GetStatus
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value SimpleCreator::GetStatus_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        SimpleCreator_GetStatus_AsyncWorker* asyncWorker = new SimpleCreator_GetStatus_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value SimpleCreator::SetStatus(const Napi::CallbackInfo& info) {
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

    Napi::Value SimpleCreator::SetStatus_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "ProcessState l is required."));
                    return deferred.Promise();
            }


                    const MbeProcessState l = static_cast<MbeProcessState>(info[0].ToNumber().Uint32Value());

        SimpleCreator_SetStatus_AsyncWorker* asyncWorker = new SimpleCreator_SetStatus_AsyncWorker(
_underlying,            deferred
,
                
                l        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value SimpleCreator::CreateShell(const Napi::CallbackInfo& info) {
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

    Napi::Value SimpleCreator::CreateShell_async(const Napi::CallbackInfo& info) {
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

        SimpleCreator_CreateShell_AsyncWorker* asyncWorker = new SimpleCreator_CreateShell_AsyncWorker(
_underlying,            deferred
,
                
                shell,
                
                sameShell        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value SimpleCreator::GetMainName(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 SimpleName  _result = _underlying->GetMainName
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value SimpleCreator::GetMainName_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        SimpleCreator_GetMainName_AsyncWorker* asyncWorker = new SimpleCreator_GetMainName_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value SimpleCreator::GetUseCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 refcount_t  _result = _underlying->GetUseCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value SimpleCreator::GetUseCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        SimpleCreator_GetUseCount_AsyncWorker* asyncWorker = new SimpleCreator_GetUseCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value SimpleCreator::AddRef(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->AddRef
(

);



    return env.Undefined();


        }

    Napi::Value SimpleCreator::AddRef_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        SimpleCreator_AddRef_AsyncWorker* asyncWorker = new SimpleCreator_AddRef_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }



    Napi::Value SimpleCreator::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }

SimpleCreator::~SimpleCreator() {
    // std::cout << "calling ::DeleteItem on SimpleCreator for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

    SimpleCreator_IsA_AsyncWorker::SimpleCreator_IsA_AsyncWorker(
MbSimpleCreator * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void SimpleCreator_IsA_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeCreatorType  _result = _underlying->IsA(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void SimpleCreator_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeCreatorType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void SimpleCreator_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    SimpleCreator_Type_AsyncWorker::SimpleCreator_Type_AsyncWorker(
MbSimpleCreator * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void SimpleCreator_Type_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeCreatorType  _result = _underlying->Type(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void SimpleCreator_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeCreatorType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void SimpleCreator_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    SimpleCreator_GetBasisPoints_AsyncWorker::SimpleCreator_GetBasisPoints_AsyncWorker(
MbSimpleCreator * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void SimpleCreator_GetBasisPoints_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbControlData3D *cd = new MbControlData3D;


        
        _underlying->GetBasisPoints(
                        *cd
        );


                this->cd = cd;

        
        ExitParallelRegion();
    }

    void SimpleCreator_GetBasisPoints_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void SimpleCreator_GetBasisPoints_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    SimpleCreator_SetBasisPoints_AsyncWorker::SimpleCreator_SetBasisPoints_AsyncWorker(
MbSimpleCreator * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbControlData3D & cd    )
        :_underlying(_underlying),PromiseWorker(d),
                        cd(cd)
{};

    void SimpleCreator_SetBasisPoints_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetBasisPoints(
                        cd
        );



        
        ExitParallelRegion();
    }

    void SimpleCreator_SetBasisPoints_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void SimpleCreator_SetBasisPoints_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    SimpleCreator_GetBasisItems_AsyncWorker::SimpleCreator_GetBasisItems_AsyncWorker(
MbSimpleCreator * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void SimpleCreator_GetBasisItems_AsyncWorker::Execute() {
        EnterParallelRegion();

                RPArray<MbSpaceItem> *items = new RPArray<MbSpaceItem>;


        
        _underlying->GetBasisItems(
                        *items
        );


                this->items = items;

        
        ExitParallelRegion();
    }

    void SimpleCreator_GetBasisItems_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void SimpleCreator_GetBasisItems_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    SimpleCreator_GetCreatorsCount_AsyncWorker::SimpleCreator_GetCreatorsCount_AsyncWorker(
MbSimpleCreator * _underlying,        Napi::Promise::Deferred const &d
,
                         MbeCreatorType  ct    )
        :_underlying(_underlying),PromiseWorker(d),
                        ct(ct)
{};

    void SimpleCreator_GetCreatorsCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         size_t  _result = _underlying->GetCreatorsCount(
                        ct
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void SimpleCreator_GetCreatorsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             size_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void SimpleCreator_GetCreatorsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    SimpleCreator_GetYourNameMaker_AsyncWorker::SimpleCreator_GetYourNameMaker_AsyncWorker(
MbSimpleCreator * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void SimpleCreator_GetYourNameMaker_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        const MbSNameMaker & _result = _underlying->GetYourNameMaker(
        );


                this->_result = (MbSNameMaker *)&(_result);

        
        ExitParallelRegion();
    }

    void SimpleCreator_GetYourNameMaker_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            const MbSNameMaker * _result = this->_result;
                _to = SNameMaker::NewInstance(env, (MbSNameMaker *)&(_result));

            deferred.Resolve(_to);
    }

    void SimpleCreator_GetYourNameMaker_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    SimpleCreator_GetStatus_AsyncWorker::SimpleCreator_GetStatus_AsyncWorker(
MbSimpleCreator * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void SimpleCreator_GetStatus_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeProcessState  _result = _underlying->GetStatus(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void SimpleCreator_GetStatus_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeProcessState  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void SimpleCreator_GetStatus_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    SimpleCreator_SetStatus_AsyncWorker::SimpleCreator_SetStatus_AsyncWorker(
MbSimpleCreator * _underlying,        Napi::Promise::Deferred const &d
,
                         MbeProcessState  l    )
        :_underlying(_underlying),PromiseWorker(d),
                        l(l)
{};

    void SimpleCreator_SetStatus_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetStatus(
                        l
        );



        
        ExitParallelRegion();
    }

    void SimpleCreator_SetStatus_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void SimpleCreator_SetStatus_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    SimpleCreator_CreateShell_AsyncWorker::SimpleCreator_CreateShell_AsyncWorker(
MbSimpleCreator * _underlying,        Napi::Promise::Deferred const &d
,
                         MbFaceShell * shell,
                         MbeCopyMode  sameShell    )
        :_underlying(_underlying),PromiseWorker(d),
                        shell(shell)
,
                        sameShell(sameShell)
{};

    void SimpleCreator_CreateShell_AsyncWorker::Execute() {
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

    void SimpleCreator_CreateShell_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void SimpleCreator_CreateShell_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    SimpleCreator_GetMainName_AsyncWorker::SimpleCreator_GetMainName_AsyncWorker(
MbSimpleCreator * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void SimpleCreator_GetMainName_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         SimpleName  _result = _underlying->GetMainName(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void SimpleCreator_GetMainName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             SimpleName  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void SimpleCreator_GetMainName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    SimpleCreator_GetUseCount_AsyncWorker::SimpleCreator_GetUseCount_AsyncWorker(
MbSimpleCreator * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void SimpleCreator_GetUseCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         refcount_t  _result = _underlying->GetUseCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void SimpleCreator_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             refcount_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void SimpleCreator_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    SimpleCreator_AddRef_AsyncWorker::SimpleCreator_AddRef_AsyncWorker(
MbSimpleCreator * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void SimpleCreator_AddRef_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddRef(
        );



        
        ExitParallelRegion();
    }

    void SimpleCreator_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void SimpleCreator_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

