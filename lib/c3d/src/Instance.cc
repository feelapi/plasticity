// This is a generated file, modify: generate/templates/Instance.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/Instance.h"

#include "tool_mutex.h"

Napi::Object Instance::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "Instance", {
        InstanceMethod<&Instance::GetItem>("GetItem"),
        InstanceMethod<&Instance::GetItem_async>("GetItem_async"),
        InstanceMethod<&Instance::CreateMesh>("CreateMesh"),
        InstanceMethod<&Instance::CreateMesh_async>("CreateMesh_async"),
        InstanceMethod<&Instance::CalculateMesh>("CalculateMesh"),
        InstanceMethod<&Instance::CalculateMesh_async>("CalculateMesh_async"),
        InstanceMethod<&Instance::GetItemName>("GetItemName"),
        InstanceMethod<&Instance::GetItemName_async>("GetItemName_async"),
        InstanceMethod<&Instance::SetItemName>("SetItemName"),
        InstanceMethod<&Instance::SetItemName_async>("SetItemName_async"),
        InstanceMethod<&Instance::RebuildItem>("RebuildItem"),
        InstanceMethod<&Instance::RebuildItem_async>("RebuildItem_async"),
        InstanceMethod<&Instance::GetItemByPath>("GetItemByPath"),
        InstanceMethod<&Instance::GetItemByPath_async>("GetItemByPath_async"),
        InstanceMethod<&Instance::IsA>("IsA"),
        InstanceMethod<&Instance::IsA_async>("IsA_async"),
        InstanceMethod<&Instance::Type>("Type"),
        InstanceMethod<&Instance::Type_async>("Type_async"),
        InstanceMethod<&Instance::Family>("Family"),
        InstanceMethod<&Instance::Family_async>("Family_async"),
        InstanceMethod<&Instance::Transform>("Transform"),
        InstanceMethod<&Instance::Transform_async>("Transform_async"),
        InstanceMethod<&Instance::Move>("Move"),
        InstanceMethod<&Instance::Move_async>("Move_async"),
        InstanceMethod<&Instance::Rotate>("Rotate"),
        InstanceMethod<&Instance::Rotate_async>("Rotate_async"),
        InstanceMethod<&Instance::Refresh>("Refresh"),
        InstanceMethod<&Instance::Refresh_async>("Refresh_async"),
        InstanceMethod<&Instance::Duplicate>("Duplicate"),
        InstanceMethod<&Instance::Duplicate_async>("Duplicate_async"),
        InstanceMethod<&Instance::AddYourGabaritTo>("AddYourGabaritTo"),
        InstanceMethod<&Instance::AddYourGabaritTo_async>("AddYourGabaritTo_async"),
        InstanceMethod<&Instance::GetUseCount>("GetUseCount"),
        InstanceMethod<&Instance::GetUseCount_async>("GetUseCount_async"),
        InstanceMethod<&Instance::AddRef>("AddRef"),
        InstanceMethod<&Instance::AddRef_async>("AddRef_async"),
        InstanceMethod<&Instance::SetStyle>("SetStyle"),
        InstanceMethod<&Instance::SetStyle_async>("SetStyle_async"),
        InstanceMethod<&Instance::GetStyle>("GetStyle"),
        InstanceMethod<&Instance::GetStyle_async>("GetStyle_async"),
        InstanceMethod<&Instance::SetColor>("SetColor"),
        InstanceMethod<&Instance::SetColor_async>("SetColor_async"),
        InstanceMethod<&Instance::GetColor>("GetColor"),
        InstanceMethod<&Instance::GetColor_async>("GetColor_async"),
        InstanceMethod<&Instance::AttributesConvert>("AttributesConvert"),
        InstanceMethod<&Instance::AttributesConvert_async>("AttributesConvert_async"),
        InstanceMethod<&Instance::GetCreatorsCount>("GetCreatorsCount"),
        InstanceMethod<&Instance::GetCreatorsCount_async>("GetCreatorsCount_async"),
        InstanceMethod<&Instance::GetCreator>("GetCreator"),
        InstanceMethod<&Instance::GetCreator_async>("GetCreator_async"),
        InstanceMethod<&Instance::SetCreator>("SetCreator"),
        InstanceMethod<&Instance::SetCreator_async>("SetCreator_async"),
        InstanceMethod<&Instance::DetachCreator>("DetachCreator"),
        InstanceMethod<&Instance::DetachCreator_async>("DetachCreator_async"),
        InstanceMethod<&Instance::AddCreator>("AddCreator"),
        InstanceMethod<&Instance::AddCreator_async>("AddCreator_async"),
        InstanceMethod<&Instance::GetCreators>("GetCreators"),
        InstanceMethod<&Instance::GetCreators_async>("GetCreators_async"),
        InstanceMethod<&Instance::DeleteCreator>("DeleteCreator"),
        InstanceMethod<&Instance::DeleteCreator_async>("DeleteCreator_async"),
        InstanceMethod<&Instance::GetActiveCreatorsCount>("GetActiveCreatorsCount"),
        InstanceMethod<&Instance::GetActiveCreatorsCount_async>("GetActiveCreatorsCount_async"),
            InstanceMethod<&Instance::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Instance", func);

    Napi::Object global = env.Global();
    Napi::Object Object = global.Get("Object").ToObject();
    Napi::Function setPrototypeOf = Napi::Function(env, Object.Get("setPrototypeOf"));
    Napi::Value prototype = func.Get("prototype");

    Napi::Function superFunc = Item::GetConstructor(env);
    Napi::FunctionReference* superConstructor = new Napi::FunctionReference();
    *superConstructor = Napi::Persistent(superFunc);

    Napi::Value superPrototype = superFunc.Get("prototype");
    setPrototypeOf.Call({prototype, superPrototype});
    setPrototypeOf.Call({func, superFunc});

    return exports;
}

Instance::Instance(const Napi::CallbackInfo& info) : Napi::ObjectWrap<Instance>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        Napi::Error::New(env, "Instance cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object Instance::NewInstance(Napi::Env env, MbInstance *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Instance");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Instance *unwrapped = Instance::Unwrap(inst);
underlying->AddRef();    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Instance::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Instance");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

        Napi::Value Instance::GetItem(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



const MbItem * _result = _underlying->GetItem
(

);



    Napi::Value _to;

            if (_result != NULL) {
        _to = Item::NewInstance(env, (MbItem *)_result);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value Instance::GetItem_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Instance_GetItem_AsyncWorker* asyncWorker = new Instance_GetItem_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Instance::CreateMesh(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(StepData::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "StepData stepData is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(FormNote::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "FormNote note is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'stepData'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class StepData *stepData_ = StepData::Unwrap(info[0].ToObject());
        
        const MbStepData & stepData =*stepData_->_underlying;
        

                if (info[1].IsNull() || info[1].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'note'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class FormNote *note_ = FormNote::Unwrap(info[1].ToObject());
        
        const MbFormNote & note =*note_->_underlying;
        

                    MbRegDuplicate * iReg = NULL;
        if (!(info[2].IsNull() || info[2].IsUndefined())) {
            RegDuplicate *iReg_ = RegDuplicate::Unwrap(info[2].ToObject());
                iReg =   iReg_->_underlying;
        }



 MbItem * _result = _underlying->CreateMesh
(
        stepData
,        note
,        info.Length() == 2 || info[2].IsNull() ? NULL : iReg

);



    Napi::Value _to;

            if (_result != NULL) {
        _to = Item::NewInstance(env, (MbItem *)_result);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value Instance::CreateMesh_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(StepData::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "StepData stepData is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(FormNote::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "FormNote note is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'stepData'"));
                return deferred.Promise();
        }
        const class StepData *stepData_ = StepData::Unwrap(info[0].ToObject());
        
        const MbStepData & stepData =*stepData_->_underlying;
        

                        if (info[1].IsNull() || info[1].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'note'"));
                return deferred.Promise();
        }
        const class FormNote *note_ = FormNote::Unwrap(info[1].ToObject());
        
        const MbFormNote & note =*note_->_underlying;
        

                            MbRegDuplicate * iReg = NULL;
        if (!(info[2].IsNull() || info[2].IsUndefined())) {
            RegDuplicate *iReg_ = RegDuplicate::Unwrap(info[2].ToObject());
                iReg =   iReg_->_underlying;
        }

        Instance_CreateMesh_AsyncWorker* asyncWorker = new Instance_CreateMesh_AsyncWorker(
_underlying,            deferred
,
                
                stepData,
                
                note,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Instance::CalculateMesh(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(StepData::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "StepData stepData is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(FormNote::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "FormNote note is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    MbMesh *mesh = new MbMesh;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'stepData'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class StepData *stepData_ = StepData::Unwrap(info[0].ToObject());
        
        const MbStepData & stepData =*stepData_->_underlying;
        

                if (info[1].IsNull() || info[1].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'note'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class FormNote *note_ = FormNote::Unwrap(info[1].ToObject());
        
        const MbFormNote & note =*note_->_underlying;
        



_underlying->CalculateMesh
(
        stepData
,        note
,        *mesh

);



    Napi::Value _to;

            if (mesh != NULL) {
        _to = Mesh::NewInstance(env, (MbMesh *)mesh);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value Instance::CalculateMesh_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(StepData::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "StepData stepData is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(FormNote::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "FormNote note is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'stepData'"));
                return deferred.Promise();
        }
        const class StepData *stepData_ = StepData::Unwrap(info[0].ToObject());
        
        const MbStepData & stepData =*stepData_->_underlying;
        

                        if (info[1].IsNull() || info[1].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'note'"));
                return deferred.Promise();
        }
        const class FormNote *note_ = FormNote::Unwrap(info[1].ToObject());
        
        const MbFormNote & note =*note_->_underlying;
        

        Instance_CalculateMesh_AsyncWorker* asyncWorker = new Instance_CalculateMesh_AsyncWorker(
_underlying,            deferred
,
                
                stepData,
                
                note        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Instance::GetItemName(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 SimpleName  _result = _underlying->GetItemName
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Instance::GetItemName_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Instance_GetItemName_AsyncWorker* asyncWorker = new Instance_GetItemName_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Instance::SetItemName(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "SimpleName name is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

             int name = info[0].ToNumber().Int64Value();



_underlying->SetItemName
(
        name

);



    return env.Undefined();


        }

    Napi::Value Instance::SetItemName_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "SimpleName name is required."));
                    return deferred.Promise();
            }


                     int name = info[0].ToNumber().Int64Value();

        Instance_SetItemName_AsyncWorker* asyncWorker = new Instance_SetItemName_AsyncWorker(
_underlying,            deferred
,
                
                name        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Instance::RebuildItem(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "CopyMode sameShell is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    RPArray<MbSpaceItem> *items = new RPArray<MbSpaceItem>;


            const MbeCopyMode sameShell = static_cast<MbeCopyMode>(info[0].ToNumber().Uint32Value());

                    ProgressIndicator * progInd = NULL;
        if (!(info[1].IsNull() || info[1].IsUndefined())) {
            ProgressIndicator *progInd_ = ProgressIndicator::Unwrap(info[1].ToObject());
                progInd =   progInd_;
        }



 bool  _result = _underlying->RebuildItem
(
        sameShell
,        items
,        info.Length() == 1 || info[1].IsNull() ? NULL : progInd

);


if (_result) {

    Napi::Value _to;

            Napi::Array arr_items = Napi::Array::New(env);
    for (size_t i = 0; i < items->Count(); i++) {
            arr_items[i] = SpaceItem::NewInstance(env,
                
                    (*items)[i]
                
            );
    }
    _to = arr_items;

            return _to;

} else {
    std::ostringstream msg;
    msg << "Operation RebuildItem failed";
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value Instance::RebuildItem_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "CopyMode sameShell is required."));
                    return deferred.Promise();
            }


                    const MbeCopyMode sameShell = static_cast<MbeCopyMode>(info[0].ToNumber().Uint32Value());

                            ProgressIndicator * progInd = NULL;
        if (!(info[1].IsNull() || info[1].IsUndefined())) {
            ProgressIndicator *progInd_ = ProgressIndicator::Unwrap(info[1].ToObject());
                progInd =   progInd_;
        }

        Instance_RebuildItem_AsyncWorker* asyncWorker = new Instance_RebuildItem_AsyncWorker(
_underlying,            deferred
,
                
                sameShell,
                
                progInd        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Instance::GetItemByPath(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Path::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Path path is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    Napi::Error::New(env, "number ind is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 2 || !(
              (info[2].IsObject() && info[2].ToObject().InstanceOf(Matrix3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Matrix3D from is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'path'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Path *path_ = Path::Unwrap(info[0].ToObject());
        
        const MbPath & path =*path_->_underlying;
        

             size_t ind = info[1].ToNumber().Int64Value();

                if (info[2].IsNull() || info[2].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'from'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Matrix3D *from_ = Matrix3D::Unwrap(info[2].ToObject());
        
         MbMatrix3D & from =*from_->_underlying;
        

             size_t currInd = info[3].ToNumber().Int64Value();



const MbItem * _result = _underlying->GetItemByPath
(
        path
,        ind
,        from
,        info.Length() == 3 || info[3].IsNull() ? 0 : currInd

);



    Napi::Value _to;

            if (_result != NULL) {
        _to = Item::NewInstance(env, (MbItem *)_result);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value Instance::GetItemByPath_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Path::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Path path is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number ind is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 2 || !(
              (info[2].IsObject() && info[2].ToObject().InstanceOf(Matrix3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Matrix3D from is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'path'"));
                return deferred.Promise();
        }
        const class Path *path_ = Path::Unwrap(info[0].ToObject());
        
        const MbPath & path =*path_->_underlying;
        

                     size_t ind = info[1].ToNumber().Int64Value();

                        if (info[2].IsNull() || info[2].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'from'"));
                return deferred.Promise();
        }
        const class Matrix3D *from_ = Matrix3D::Unwrap(info[2].ToObject());
        
         MbMatrix3D & from =*from_->_underlying;
        

                     size_t currInd = info[3].ToNumber().Int64Value();

        Instance_GetItemByPath_AsyncWorker* asyncWorker = new Instance_GetItemByPath_AsyncWorker(
_underlying,            deferred
,
                
                path,
                
                ind,
                
                from,
                
                currInd        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Instance::IsA(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeSpaceType  _result = _underlying->IsA
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Instance::IsA_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Instance_IsA_AsyncWorker* asyncWorker = new Instance_IsA_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Instance::Type(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeSpaceType  _result = _underlying->Type
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Instance::Type_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Instance_Type_AsyncWorker* asyncWorker = new Instance_Type_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Instance::Family(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeSpaceType  _result = _underlying->Family
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Instance::Family_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Instance_Family_AsyncWorker* asyncWorker = new Instance_Family_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Instance::Transform(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Matrix3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Matrix3D mat is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'mat'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Matrix3D *mat_ = Matrix3D::Unwrap(info[0].ToObject());
        
        const MbMatrix3D & mat =*mat_->_underlying;
        

                    MbRegTransform * iReg = NULL;
        if (!(info[1].IsNull() || info[1].IsUndefined())) {
            RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
                iReg =   iReg_->_underlying;
        }



_underlying->Transform
(
        mat
,        info.Length() == 1 || info[1].IsNull() ? NULL : iReg

);



    return env.Undefined();


        }

    Napi::Value Instance::Transform_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Matrix3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Matrix3D mat is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'mat'"));
                return deferred.Promise();
        }
        const class Matrix3D *mat_ = Matrix3D::Unwrap(info[0].ToObject());
        
        const MbMatrix3D & mat =*mat_->_underlying;
        

                            MbRegTransform * iReg = NULL;
        if (!(info[1].IsNull() || info[1].IsUndefined())) {
            RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
                iReg =   iReg_->_underlying;
        }

        Instance_Transform_AsyncWorker* asyncWorker = new Instance_Transform_AsyncWorker(
_underlying,            deferred
,
                
                mat,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Instance::Move(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Vector3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Vector3D v is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'v'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Vector3D *v_ = Vector3D::Unwrap(info[0].ToObject());
        
        const MbVector3D & v =*v_->_underlying;
        

                    MbRegTransform * iReg = NULL;
        if (!(info[1].IsNull() || info[1].IsUndefined())) {
            RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
                iReg =   iReg_->_underlying;
        }



_underlying->Move
(
        v
,        info.Length() == 1 || info[1].IsNull() ? NULL : iReg

);



    return env.Undefined();


        }

    Napi::Value Instance::Move_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Vector3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Vector3D v is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'v'"));
                return deferred.Promise();
        }
        const class Vector3D *v_ = Vector3D::Unwrap(info[0].ToObject());
        
        const MbVector3D & v =*v_->_underlying;
        

                            MbRegTransform * iReg = NULL;
        if (!(info[1].IsNull() || info[1].IsUndefined())) {
            RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
                iReg =   iReg_->_underlying;
        }

        Instance_Move_AsyncWorker* asyncWorker = new Instance_Move_AsyncWorker(
_underlying,            deferred
,
                
                v,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Instance::Rotate(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Axis3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Axis3D axis is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    Napi::Error::New(env, "number angle is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'axis'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Axis3D *axis_ = Axis3D::Unwrap(info[0].ToObject());
        
        const MbAxis3D & axis =*axis_->_underlying;
        

             double angle = info[1].ToNumber().DoubleValue();

                    MbRegTransform * iReg = NULL;
        if (!(info[2].IsNull() || info[2].IsUndefined())) {
            RegTransform *iReg_ = RegTransform::Unwrap(info[2].ToObject());
                iReg =   iReg_->_underlying;
        }



_underlying->Rotate
(
        axis
,        angle
,        info.Length() == 2 || info[2].IsNull() ? NULL : iReg

);



    return env.Undefined();


        }

    Napi::Value Instance::Rotate_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Axis3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Axis3D axis is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number angle is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'axis'"));
                return deferred.Promise();
        }
        const class Axis3D *axis_ = Axis3D::Unwrap(info[0].ToObject());
        
        const MbAxis3D & axis =*axis_->_underlying;
        

                     double angle = info[1].ToNumber().DoubleValue();

                            MbRegTransform * iReg = NULL;
        if (!(info[2].IsNull() || info[2].IsUndefined())) {
            RegTransform *iReg_ = RegTransform::Unwrap(info[2].ToObject());
                iReg =   iReg_->_underlying;
        }

        Instance_Rotate_AsyncWorker* asyncWorker = new Instance_Rotate_AsyncWorker(
_underlying,            deferred
,
                
                axis,
                
                angle,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Instance::Refresh(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->Refresh
(

);



    return env.Undefined();


        }

    Napi::Value Instance::Refresh_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Instance_Refresh_AsyncWorker* asyncWorker = new Instance_Refresh_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Instance::Duplicate(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            

                    MbRegDuplicate * iReg = NULL;
        if (!(info[0].IsNull() || info[0].IsUndefined())) {
            RegDuplicate *iReg_ = RegDuplicate::Unwrap(info[0].ToObject());
                iReg =   iReg_->_underlying;
        }



 MbSpaceItem & _result = _underlying->Duplicate
(
        info.Length() == 0 || info[0].IsNull() ? NULL : iReg

);



    Napi::Value _to;

            _to = SpaceItem::NewInstance(env, (MbSpaceItem *)&(_result));

            return _to;


        }

    Napi::Value Instance::Duplicate_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                            MbRegDuplicate * iReg = NULL;
        if (!(info[0].IsNull() || info[0].IsUndefined())) {
            RegDuplicate *iReg_ = RegDuplicate::Unwrap(info[0].ToObject());
                iReg =   iReg_->_underlying;
        }

        Instance_Duplicate_AsyncWorker* asyncWorker = new Instance_Duplicate_AsyncWorker(
_underlying,            deferred
,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Instance::AddYourGabaritTo(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Cube::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Cube cube is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'cube'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Cube *cube_ = Cube::Unwrap(info[0].ToObject());
        
         MbCube & cube =*cube_->_underlying;
        



_underlying->AddYourGabaritTo
(
        cube

);



    return env.Undefined();


        }

    Napi::Value Instance::AddYourGabaritTo_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Cube::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Cube cube is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'cube'"));
                return deferred.Promise();
        }
        const class Cube *cube_ = Cube::Unwrap(info[0].ToObject());
        
         MbCube & cube =*cube_->_underlying;
        

        Instance_AddYourGabaritTo_AsyncWorker* asyncWorker = new Instance_AddYourGabaritTo_AsyncWorker(
_underlying,            deferred
,
                
                cube        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Instance::GetUseCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 refcount_t  _result = _underlying->GetUseCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Instance::GetUseCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Instance_GetUseCount_AsyncWorker* asyncWorker = new Instance_GetUseCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Instance::AddRef(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->AddRef
(

);



    return env.Undefined();


        }

    Napi::Value Instance::AddRef_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Instance_AddRef_AsyncWorker* asyncWorker = new Instance_AddRef_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Instance::SetStyle(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "int s is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

             int s = info[0].ToNumber().Int64Value();



_underlying->SetStyle
(
        s

);



    return env.Undefined();


        }

    Napi::Value Instance::SetStyle_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "int s is required."));
                    return deferred.Promise();
            }


                     int s = info[0].ToNumber().Int64Value();

        Instance_SetStyle_AsyncWorker* asyncWorker = new Instance_SetStyle_AsyncWorker(
_underlying,            deferred
,
                
                s        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Instance::GetStyle(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 int  _result = _underlying->GetStyle
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Instance::GetStyle_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Instance_GetStyle_AsyncWorker* asyncWorker = new Instance_GetStyle_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Instance::SetColor(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "uint32 c is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

             int c = info[0].ToNumber().Int64Value();



_underlying->SetColor
(
        c

);



    return env.Undefined();


        }

    Napi::Value Instance::SetColor_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "uint32 c is required."));
                    return deferred.Promise();
            }


                     int c = info[0].ToNumber().Int64Value();

        Instance_SetColor_AsyncWorker* asyncWorker = new Instance_SetColor_AsyncWorker(
_underlying,            deferred
,
                
                c        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Instance::GetColor(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 uint32  _result = _underlying->GetColor
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Instance::GetColor_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Instance_GetColor_AsyncWorker* asyncWorker = new Instance_GetColor_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Instance::AttributesConvert(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Grid::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Grid other is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'other'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Grid *other_ = Grid::Unwrap(info[0].ToObject());
        
         MbGrid & other =*other_->_underlying;
        



_underlying->AttributesConvert
(
        other

);



    return env.Undefined();


        }

    Napi::Value Instance::AttributesConvert_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Grid::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Grid other is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'other'"));
                return deferred.Promise();
        }
        const class Grid *other_ = Grid::Unwrap(info[0].ToObject());
        
         MbGrid & other =*other_->_underlying;
        

        Instance_AttributesConvert_AsyncWorker* asyncWorker = new Instance_AttributesConvert_AsyncWorker(
_underlying,            deferred
,
                
                other        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Instance::GetCreatorsCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 size_t  _result = _underlying->GetCreatorsCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Instance::GetCreatorsCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Instance_GetCreatorsCount_AsyncWorker* asyncWorker = new Instance_GetCreatorsCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Instance::GetCreator(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number ind is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

             size_t ind = info[0].ToNumber().Int64Value();



const MbCreator * _result = _underlying->GetCreator
(
        ind

);



    Napi::Value _to;

            if (_result != NULL) {
        _to = Creator::NewInstance(env, (MbCreator *)_result);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value Instance::GetCreator_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number ind is required."));
                    return deferred.Promise();
            }


                     size_t ind = info[0].ToNumber().Int64Value();

        Instance_GetCreator_AsyncWorker* asyncWorker = new Instance_GetCreator_AsyncWorker(
_underlying,            deferred
,
                
                ind        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Instance::SetCreator(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number ind is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

             size_t ind = info[0].ToNumber().Int64Value();



 MbCreator * _result = _underlying->SetCreator
(
        ind

);



    Napi::Value _to;

            if (_result != NULL) {
        _to = Creator::NewInstance(env, (MbCreator *)_result);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value Instance::SetCreator_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number ind is required."));
                    return deferred.Promise();
            }


                     size_t ind = info[0].ToNumber().Int64Value();

        Instance_SetCreator_AsyncWorker* asyncWorker = new Instance_SetCreator_AsyncWorker(
_underlying,            deferred
,
                
                ind        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Instance::DetachCreator(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number ind is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

             size_t ind = info[0].ToNumber().Int64Value();



 MbCreator * _result = _underlying->DetachCreator
(
        ind

);



    Napi::Value _to;

            if (_result != NULL) {
        _to = Creator::NewInstance(env, (MbCreator *)_result);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value Instance::DetachCreator_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number ind is required."));
                    return deferred.Promise();
            }


                     size_t ind = info[0].ToNumber().Int64Value();

        Instance_DetachCreator_AsyncWorker* asyncWorker = new Instance_DetachCreator_AsyncWorker(
_underlying,            deferred
,
                
                ind        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Instance::AddCreator(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Creator::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Creator creator is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'creator'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Creator *creator_ = Creator::Unwrap(info[0].ToObject());
        
        const MbCreator * creator =creator_->_underlying;
        

             bool addSame = info[1].ToBoolean();



 bool  _result = _underlying->AddCreator
(
        creator
,        info.Length() == 1 || info[1].IsNull() ? false : addSame

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value Instance::AddCreator_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Creator::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Creator creator is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'creator'"));
                return deferred.Promise();
        }
        const class Creator *creator_ = Creator::Unwrap(info[0].ToObject());
        
        const MbCreator * creator =creator_->_underlying;
        

                     bool addSame = info[1].ToBoolean();

        Instance_AddCreator_AsyncWorker* asyncWorker = new Instance_AddCreator_AsyncWorker(
_underlying,            deferred
,
                
                creator,
                
                addSame        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Instance::GetCreators(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                    RPArray<MbCreator> *creators = new RPArray<MbCreator>;




 bool  _result = _underlying->GetCreators
(
        *creators

);


if (_result) {

    Napi::Value _to;

            Napi::Array arr_creators = Napi::Array::New(env);
    for (size_t i = 0; i < creators->Count(); i++) {
            arr_creators[i] = Creator::NewInstance(env,
                
                    (*creators)[i]
                
            );
    }
    _to = arr_creators;

            return _to;

} else {
    std::ostringstream msg;
    msg << "Operation GetCreators failed";
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value Instance::GetCreators_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Instance_GetCreators_AsyncWorker* asyncWorker = new Instance_GetCreators_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Instance::DeleteCreator(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number ind is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

             size_t ind = info[0].ToNumber().Int64Value();



 bool  _result = _underlying->DeleteCreator
(
        ind

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value Instance::DeleteCreator_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number ind is required."));
                    return deferred.Promise();
            }


                     size_t ind = info[0].ToNumber().Int64Value();

        Instance_DeleteCreator_AsyncWorker* asyncWorker = new Instance_DeleteCreator_AsyncWorker(
_underlying,            deferred
,
                
                ind        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Instance::GetActiveCreatorsCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 size_t  _result = _underlying->GetActiveCreatorsCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Instance::GetActiveCreatorsCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Instance_GetActiveCreatorsCount_AsyncWorker* asyncWorker = new Instance_GetActiveCreatorsCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }



    Napi::Value Instance::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }

Instance::~Instance() {
    // std::cout << "calling ::DeleteItem on Instance for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

    Instance_GetItem_AsyncWorker::Instance_GetItem_AsyncWorker(
MbInstance * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Instance_GetItem_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        const MbItem * _result = _underlying->GetItem(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Instance_GetItem_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            const MbItem * _result = this->_result;
                if (_result != NULL) {
        _to = Item::NewInstance(env, (MbItem *)_result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void Instance_GetItem_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Instance_CreateMesh_AsyncWorker::Instance_CreateMesh_AsyncWorker(
MbInstance * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbStepData & stepData,
                        const MbFormNote & note,
                         MbRegDuplicate * iReg    )
        :_underlying(_underlying),PromiseWorker(d),
                        stepData(stepData)
,
                        note(note)
,
                        iReg(iReg)
{};

    void Instance_CreateMesh_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbItem * _result = _underlying->CreateMesh(
                        stepData
,                        note
,                        iReg
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Instance_CreateMesh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbItem * _result = this->_result;
                if (_result != NULL) {
        _to = Item::NewInstance(env, (MbItem *)_result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void Instance_CreateMesh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Instance_CalculateMesh_AsyncWorker::Instance_CalculateMesh_AsyncWorker(
MbInstance * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbStepData & stepData,
                        const MbFormNote & note    )
        :_underlying(_underlying),PromiseWorker(d),
                        stepData(stepData)
,
                        note(note)
{};

    void Instance_CalculateMesh_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbMesh *mesh = new MbMesh;


        
        _underlying->CalculateMesh(
                        stepData
,                        note
,                        *mesh
        );


                this->mesh = mesh;

        
        ExitParallelRegion();
    }

    void Instance_CalculateMesh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbMesh * mesh = this->mesh;
                if (mesh != NULL) {
        _to = Mesh::NewInstance(env, (MbMesh *)mesh);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void Instance_CalculateMesh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Instance_GetItemName_AsyncWorker::Instance_GetItemName_AsyncWorker(
MbInstance * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Instance_GetItemName_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         SimpleName  _result = _underlying->GetItemName(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Instance_GetItemName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             SimpleName  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Instance_GetItemName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Instance_SetItemName_AsyncWorker::Instance_SetItemName_AsyncWorker(
MbInstance * _underlying,        Napi::Promise::Deferred const &d
,
                         SimpleName  name    )
        :_underlying(_underlying),PromiseWorker(d),
                        name(name)
{};

    void Instance_SetItemName_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetItemName(
                        name
        );



        
        ExitParallelRegion();
    }

    void Instance_SetItemName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Instance_SetItemName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Instance_RebuildItem_AsyncWorker::Instance_RebuildItem_AsyncWorker(
MbInstance * _underlying,        Napi::Promise::Deferred const &d
,
                         MbeCopyMode  sameShell,
                         ProgressIndicator * progInd    )
        :_underlying(_underlying),PromiseWorker(d),
                        sameShell(sameShell)
,
                        progInd(progInd)
{};

    void Instance_RebuildItem_AsyncWorker::Execute() {
        EnterParallelRegion();

                RPArray<MbSpaceItem> *items = new RPArray<MbSpaceItem>;


        
         bool  _result = _underlying->RebuildItem(
                        sameShell
,                        items
,                        progInd
        );

        if (_result) {

                this->items = items;

                } else {
            std::ostringstream msg;
            msg << "Operation RebuildItem failed";
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void Instance_RebuildItem_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Instance_RebuildItem_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Instance_GetItemByPath_AsyncWorker::Instance_GetItemByPath_AsyncWorker(
MbInstance * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbPath & path,
                         size_t  ind,
                         MbMatrix3D & from,
                         size_t  currInd    )
        :_underlying(_underlying),PromiseWorker(d),
                        path(path)
,
                        ind(ind)
,
                        from(from)
,
                        currInd(currInd)
{};

    void Instance_GetItemByPath_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        const MbItem * _result = _underlying->GetItemByPath(
                        path
,                        ind
,                        from
,                        currInd
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Instance_GetItemByPath_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            const MbItem * _result = this->_result;
                if (_result != NULL) {
        _to = Item::NewInstance(env, (MbItem *)_result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void Instance_GetItemByPath_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Instance_IsA_AsyncWorker::Instance_IsA_AsyncWorker(
MbInstance * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Instance_IsA_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeSpaceType  _result = _underlying->IsA(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Instance_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeSpaceType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Instance_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Instance_Type_AsyncWorker::Instance_Type_AsyncWorker(
MbInstance * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Instance_Type_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeSpaceType  _result = _underlying->Type(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Instance_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeSpaceType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Instance_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Instance_Family_AsyncWorker::Instance_Family_AsyncWorker(
MbInstance * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Instance_Family_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeSpaceType  _result = _underlying->Family(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Instance_Family_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeSpaceType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Instance_Family_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Instance_Transform_AsyncWorker::Instance_Transform_AsyncWorker(
MbInstance * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbMatrix3D & mat,
                         MbRegTransform * iReg    )
        :_underlying(_underlying),PromiseWorker(d),
                        mat(mat)
,
                        iReg(iReg)
{};

    void Instance_Transform_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Transform(
                        mat
,                        iReg
        );



        
        ExitParallelRegion();
    }

    void Instance_Transform_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Instance_Transform_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Instance_Move_AsyncWorker::Instance_Move_AsyncWorker(
MbInstance * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbVector3D & v,
                         MbRegTransform * iReg    )
        :_underlying(_underlying),PromiseWorker(d),
                        v(v)
,
                        iReg(iReg)
{};

    void Instance_Move_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Move(
                        v
,                        iReg
        );



        
        ExitParallelRegion();
    }

    void Instance_Move_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Instance_Move_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Instance_Rotate_AsyncWorker::Instance_Rotate_AsyncWorker(
MbInstance * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbAxis3D & axis,
                         double  angle,
                         MbRegTransform * iReg    )
        :_underlying(_underlying),PromiseWorker(d),
                        axis(axis)
,
                        angle(angle)
,
                        iReg(iReg)
{};

    void Instance_Rotate_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Rotate(
                        axis
,                        angle
,                        iReg
        );



        
        ExitParallelRegion();
    }

    void Instance_Rotate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Instance_Rotate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Instance_Refresh_AsyncWorker::Instance_Refresh_AsyncWorker(
MbInstance * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Instance_Refresh_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Refresh(
        );



        
        ExitParallelRegion();
    }

    void Instance_Refresh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Instance_Refresh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Instance_Duplicate_AsyncWorker::Instance_Duplicate_AsyncWorker(
MbInstance * _underlying,        Napi::Promise::Deferred const &d
,
                         MbRegDuplicate * iReg    )
        :_underlying(_underlying),PromiseWorker(d),
                        iReg(iReg)
{};

    void Instance_Duplicate_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbSpaceItem & _result = _underlying->Duplicate(
                        iReg
        );


                this->_result = (MbSpaceItem *)&(_result);

        
        ExitParallelRegion();
    }

    void Instance_Duplicate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbSpaceItem * _result = this->_result;
                _to = SpaceItem::NewInstance(env, (MbSpaceItem *)&(_result));

            deferred.Resolve(_to);
    }

    void Instance_Duplicate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Instance_AddYourGabaritTo_AsyncWorker::Instance_AddYourGabaritTo_AsyncWorker(
MbInstance * _underlying,        Napi::Promise::Deferred const &d
,
                         MbCube & cube    )
        :_underlying(_underlying),PromiseWorker(d),
                        cube(cube)
{};

    void Instance_AddYourGabaritTo_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddYourGabaritTo(
                        cube
        );



        
        ExitParallelRegion();
    }

    void Instance_AddYourGabaritTo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Instance_AddYourGabaritTo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Instance_GetUseCount_AsyncWorker::Instance_GetUseCount_AsyncWorker(
MbInstance * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Instance_GetUseCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         refcount_t  _result = _underlying->GetUseCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Instance_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             refcount_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Instance_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Instance_AddRef_AsyncWorker::Instance_AddRef_AsyncWorker(
MbInstance * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Instance_AddRef_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddRef(
        );



        
        ExitParallelRegion();
    }

    void Instance_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Instance_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Instance_SetStyle_AsyncWorker::Instance_SetStyle_AsyncWorker(
MbInstance * _underlying,        Napi::Promise::Deferred const &d
,
                         int  s    )
        :_underlying(_underlying),PromiseWorker(d),
                        s(s)
{};

    void Instance_SetStyle_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetStyle(
                        s
        );



        
        ExitParallelRegion();
    }

    void Instance_SetStyle_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Instance_SetStyle_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Instance_GetStyle_AsyncWorker::Instance_GetStyle_AsyncWorker(
MbInstance * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Instance_GetStyle_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         int  _result = _underlying->GetStyle(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Instance_GetStyle_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             int  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Instance_GetStyle_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Instance_SetColor_AsyncWorker::Instance_SetColor_AsyncWorker(
MbInstance * _underlying,        Napi::Promise::Deferred const &d
,
                         uint32  c    )
        :_underlying(_underlying),PromiseWorker(d),
                        c(c)
{};

    void Instance_SetColor_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetColor(
                        c
        );



        
        ExitParallelRegion();
    }

    void Instance_SetColor_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Instance_SetColor_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Instance_GetColor_AsyncWorker::Instance_GetColor_AsyncWorker(
MbInstance * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Instance_GetColor_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         uint32  _result = _underlying->GetColor(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Instance_GetColor_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             uint32  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Instance_GetColor_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Instance_AttributesConvert_AsyncWorker::Instance_AttributesConvert_AsyncWorker(
MbInstance * _underlying,        Napi::Promise::Deferred const &d
,
                         MbGrid & other    )
        :_underlying(_underlying),PromiseWorker(d),
                        other(other)
{};

    void Instance_AttributesConvert_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AttributesConvert(
                        other
        );



        
        ExitParallelRegion();
    }

    void Instance_AttributesConvert_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Instance_AttributesConvert_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Instance_GetCreatorsCount_AsyncWorker::Instance_GetCreatorsCount_AsyncWorker(
MbInstance * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Instance_GetCreatorsCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         size_t  _result = _underlying->GetCreatorsCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Instance_GetCreatorsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             size_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Instance_GetCreatorsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Instance_GetCreator_AsyncWorker::Instance_GetCreator_AsyncWorker(
MbInstance * _underlying,        Napi::Promise::Deferred const &d
,
                         size_t  ind    )
        :_underlying(_underlying),PromiseWorker(d),
                        ind(ind)
{};

    void Instance_GetCreator_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        const MbCreator * _result = _underlying->GetCreator(
                        ind
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Instance_GetCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            const MbCreator * _result = this->_result;
                if (_result != NULL) {
        _to = Creator::NewInstance(env, (MbCreator *)_result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void Instance_GetCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Instance_SetCreator_AsyncWorker::Instance_SetCreator_AsyncWorker(
MbInstance * _underlying,        Napi::Promise::Deferred const &d
,
                         size_t  ind    )
        :_underlying(_underlying),PromiseWorker(d),
                        ind(ind)
{};

    void Instance_SetCreator_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbCreator * _result = _underlying->SetCreator(
                        ind
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Instance_SetCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbCreator * _result = this->_result;
                if (_result != NULL) {
        _to = Creator::NewInstance(env, (MbCreator *)_result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void Instance_SetCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Instance_DetachCreator_AsyncWorker::Instance_DetachCreator_AsyncWorker(
MbInstance * _underlying,        Napi::Promise::Deferred const &d
,
                         size_t  ind    )
        :_underlying(_underlying),PromiseWorker(d),
                        ind(ind)
{};

    void Instance_DetachCreator_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbCreator * _result = _underlying->DetachCreator(
                        ind
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Instance_DetachCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbCreator * _result = this->_result;
                if (_result != NULL) {
        _to = Creator::NewInstance(env, (MbCreator *)_result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void Instance_DetachCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Instance_AddCreator_AsyncWorker::Instance_AddCreator_AsyncWorker(
MbInstance * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbCreator * creator,
                         bool  addSame    )
        :_underlying(_underlying),PromiseWorker(d),
                        creator(creator)
,
                        addSame(addSame)
{};

    void Instance_AddCreator_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->AddCreator(
                        creator
,                        addSame
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Instance_AddCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void Instance_AddCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Instance_GetCreators_AsyncWorker::Instance_GetCreators_AsyncWorker(
MbInstance * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Instance_GetCreators_AsyncWorker::Execute() {
        EnterParallelRegion();

                RPArray<MbCreator> *creators = new RPArray<MbCreator>;


        
         bool  _result = _underlying->GetCreators(
                        *creators
        );

        if (_result) {

                this->creators = creators;

                } else {
            std::ostringstream msg;
            msg << "Operation GetCreators failed";
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void Instance_GetCreators_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             RPArray<MbCreator> * creators = this->creators;
                Napi::Array arr_creators = Napi::Array::New(env);
    for (size_t i = 0; i < creators->Count(); i++) {
            arr_creators[i] = Creator::NewInstance(env,
                
                    (*creators)[i]
                
            );
    }
    _to = arr_creators;

            deferred.Resolve(_to);
    }

    void Instance_GetCreators_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Instance_DeleteCreator_AsyncWorker::Instance_DeleteCreator_AsyncWorker(
MbInstance * _underlying,        Napi::Promise::Deferred const &d
,
                         size_t  ind    )
        :_underlying(_underlying),PromiseWorker(d),
                        ind(ind)
{};

    void Instance_DeleteCreator_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->DeleteCreator(
                        ind
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Instance_DeleteCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void Instance_DeleteCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Instance_GetActiveCreatorsCount_AsyncWorker::Instance_GetActiveCreatorsCount_AsyncWorker(
MbInstance * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Instance_GetActiveCreatorsCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         size_t  _result = _underlying->GetActiveCreatorsCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Instance_GetActiveCreatorsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             size_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Instance_GetActiveCreatorsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

