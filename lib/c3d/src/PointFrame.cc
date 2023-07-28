// This is a generated file, modify: generate/templates/PointFrame.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/PointFrame.h"

#include "tool_mutex.h"

Napi::Object PointFrame::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "PointFrame", {
        InstanceMethod<&PointFrame::AddVertex>("AddVertex"),
        InstanceMethod<&PointFrame::AddVertex_async>("AddVertex_async"),
        InstanceMethod<&PointFrame::CreateMesh>("CreateMesh"),
        InstanceMethod<&PointFrame::CreateMesh_async>("CreateMesh_async"),
        InstanceMethod<&PointFrame::CalculateMesh>("CalculateMesh"),
        InstanceMethod<&PointFrame::CalculateMesh_async>("CalculateMesh_async"),
        InstanceMethod<&PointFrame::GetItemName>("GetItemName"),
        InstanceMethod<&PointFrame::GetItemName_async>("GetItemName_async"),
        InstanceMethod<&PointFrame::SetItemName>("SetItemName"),
        InstanceMethod<&PointFrame::SetItemName_async>("SetItemName_async"),
        InstanceMethod<&PointFrame::RebuildItem>("RebuildItem"),
        InstanceMethod<&PointFrame::RebuildItem_async>("RebuildItem_async"),
        InstanceMethod<&PointFrame::GetItemByPath>("GetItemByPath"),
        InstanceMethod<&PointFrame::GetItemByPath_async>("GetItemByPath_async"),
        InstanceMethod<&PointFrame::IsA>("IsA"),
        InstanceMethod<&PointFrame::IsA_async>("IsA_async"),
        InstanceMethod<&PointFrame::Type>("Type"),
        InstanceMethod<&PointFrame::Type_async>("Type_async"),
        InstanceMethod<&PointFrame::Family>("Family"),
        InstanceMethod<&PointFrame::Family_async>("Family_async"),
        InstanceMethod<&PointFrame::Transform>("Transform"),
        InstanceMethod<&PointFrame::Transform_async>("Transform_async"),
        InstanceMethod<&PointFrame::Move>("Move"),
        InstanceMethod<&PointFrame::Move_async>("Move_async"),
        InstanceMethod<&PointFrame::Rotate>("Rotate"),
        InstanceMethod<&PointFrame::Rotate_async>("Rotate_async"),
        InstanceMethod<&PointFrame::Refresh>("Refresh"),
        InstanceMethod<&PointFrame::Refresh_async>("Refresh_async"),
        InstanceMethod<&PointFrame::Duplicate>("Duplicate"),
        InstanceMethod<&PointFrame::Duplicate_async>("Duplicate_async"),
        InstanceMethod<&PointFrame::AddYourGabaritTo>("AddYourGabaritTo"),
        InstanceMethod<&PointFrame::AddYourGabaritTo_async>("AddYourGabaritTo_async"),
        InstanceMethod<&PointFrame::GetUseCount>("GetUseCount"),
        InstanceMethod<&PointFrame::GetUseCount_async>("GetUseCount_async"),
        InstanceMethod<&PointFrame::AddRef>("AddRef"),
        InstanceMethod<&PointFrame::AddRef_async>("AddRef_async"),
        InstanceMethod<&PointFrame::SetStyle>("SetStyle"),
        InstanceMethod<&PointFrame::SetStyle_async>("SetStyle_async"),
        InstanceMethod<&PointFrame::GetStyle>("GetStyle"),
        InstanceMethod<&PointFrame::GetStyle_async>("GetStyle_async"),
        InstanceMethod<&PointFrame::SetColor>("SetColor"),
        InstanceMethod<&PointFrame::SetColor_async>("SetColor_async"),
        InstanceMethod<&PointFrame::GetColor>("GetColor"),
        InstanceMethod<&PointFrame::GetColor_async>("GetColor_async"),
        InstanceMethod<&PointFrame::AttributesConvert>("AttributesConvert"),
        InstanceMethod<&PointFrame::AttributesConvert_async>("AttributesConvert_async"),
        InstanceMethod<&PointFrame::GetCreatorsCount>("GetCreatorsCount"),
        InstanceMethod<&PointFrame::GetCreatorsCount_async>("GetCreatorsCount_async"),
        InstanceMethod<&PointFrame::GetCreator>("GetCreator"),
        InstanceMethod<&PointFrame::GetCreator_async>("GetCreator_async"),
        InstanceMethod<&PointFrame::SetCreator>("SetCreator"),
        InstanceMethod<&PointFrame::SetCreator_async>("SetCreator_async"),
        InstanceMethod<&PointFrame::DetachCreator>("DetachCreator"),
        InstanceMethod<&PointFrame::DetachCreator_async>("DetachCreator_async"),
        InstanceMethod<&PointFrame::AddCreator>("AddCreator"),
        InstanceMethod<&PointFrame::AddCreator_async>("AddCreator_async"),
        InstanceMethod<&PointFrame::GetCreators>("GetCreators"),
        InstanceMethod<&PointFrame::GetCreators_async>("GetCreators_async"),
        InstanceMethod<&PointFrame::DeleteCreator>("DeleteCreator"),
        InstanceMethod<&PointFrame::DeleteCreator_async>("DeleteCreator_async"),
        InstanceMethod<&PointFrame::GetActiveCreatorsCount>("GetActiveCreatorsCount"),
        InstanceMethod<&PointFrame::GetActiveCreatorsCount_async>("GetActiveCreatorsCount_async"),
            InstanceMethod<&PointFrame::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("PointFrame", func);

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

PointFrame::PointFrame(const Napi::CallbackInfo& info) : Napi::ObjectWrap<PointFrame>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        if (info.Length() == 0        

        ) {

                MbPointFrame *underlying = new MbPointFrame();
                if (underlying == NULL) {
                    Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
                    return;
                }
underlying->AddRef();            this->_underlying = underlying;
        } else {
            Napi::Error::New(env, "No matching constructor").ThrowAsJavaScriptException();
            return;
        }
}

Napi::Object PointFrame::NewInstance(Napi::Env env, MbPointFrame *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("PointFrame");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    PointFrame *unwrapped = PointFrame::Unwrap(inst);
underlying->AddRef();    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function PointFrame::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("PointFrame");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

        Napi::Value PointFrame::AddVertex(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "CartPoint3D point is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'point'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class CartPoint3D *point_ = CartPoint3D::Unwrap(info[0].ToObject());
        
        const MbCartPoint3D & point =*point_->_underlying;
        



_underlying->AddVertex
(
        point

);



    return env.Undefined();


        }

    Napi::Value PointFrame::AddVertex_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "CartPoint3D point is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'point'"));
                return deferred.Promise();
        }
        const class CartPoint3D *point_ = CartPoint3D::Unwrap(info[0].ToObject());
        
        const MbCartPoint3D & point =*point_->_underlying;
        

        PointFrame_AddVertex_AsyncWorker* asyncWorker = new PointFrame_AddVertex_AsyncWorker(
_underlying,            deferred
,
                
                point        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PointFrame::CreateMesh(const Napi::CallbackInfo& info) {
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

    Napi::Value PointFrame::CreateMesh_async(const Napi::CallbackInfo& info) {
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

        PointFrame_CreateMesh_AsyncWorker* asyncWorker = new PointFrame_CreateMesh_AsyncWorker(
_underlying,            deferred
,
                
                stepData,
                
                note,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PointFrame::CalculateMesh(const Napi::CallbackInfo& info) {
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

    Napi::Value PointFrame::CalculateMesh_async(const Napi::CallbackInfo& info) {
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
        

        PointFrame_CalculateMesh_AsyncWorker* asyncWorker = new PointFrame_CalculateMesh_AsyncWorker(
_underlying,            deferred
,
                
                stepData,
                
                note        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PointFrame::GetItemName(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 SimpleName  _result = _underlying->GetItemName
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value PointFrame::GetItemName_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PointFrame_GetItemName_AsyncWorker* asyncWorker = new PointFrame_GetItemName_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PointFrame::SetItemName(const Napi::CallbackInfo& info) {
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

    Napi::Value PointFrame::SetItemName_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "SimpleName name is required."));
                    return deferred.Promise();
            }


                     int name = info[0].ToNumber().Int64Value();

        PointFrame_SetItemName_AsyncWorker* asyncWorker = new PointFrame_SetItemName_AsyncWorker(
_underlying,            deferred
,
                
                name        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PointFrame::RebuildItem(const Napi::CallbackInfo& info) {
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

    Napi::Value PointFrame::RebuildItem_async(const Napi::CallbackInfo& info) {
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

        PointFrame_RebuildItem_AsyncWorker* asyncWorker = new PointFrame_RebuildItem_AsyncWorker(
_underlying,            deferred
,
                
                sameShell,
                
                progInd        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PointFrame::GetItemByPath(const Napi::CallbackInfo& info) {
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

    Napi::Value PointFrame::GetItemByPath_async(const Napi::CallbackInfo& info) {
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

        PointFrame_GetItemByPath_AsyncWorker* asyncWorker = new PointFrame_GetItemByPath_AsyncWorker(
_underlying,            deferred
,
                
                path,
                
                ind,
                
                from,
                
                currInd        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PointFrame::IsA(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeSpaceType  _result = _underlying->IsA
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value PointFrame::IsA_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PointFrame_IsA_AsyncWorker* asyncWorker = new PointFrame_IsA_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PointFrame::Type(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeSpaceType  _result = _underlying->Type
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value PointFrame::Type_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PointFrame_Type_AsyncWorker* asyncWorker = new PointFrame_Type_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PointFrame::Family(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeSpaceType  _result = _underlying->Family
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value PointFrame::Family_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PointFrame_Family_AsyncWorker* asyncWorker = new PointFrame_Family_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PointFrame::Transform(const Napi::CallbackInfo& info) {
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

    Napi::Value PointFrame::Transform_async(const Napi::CallbackInfo& info) {
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

        PointFrame_Transform_AsyncWorker* asyncWorker = new PointFrame_Transform_AsyncWorker(
_underlying,            deferred
,
                
                mat,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PointFrame::Move(const Napi::CallbackInfo& info) {
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

    Napi::Value PointFrame::Move_async(const Napi::CallbackInfo& info) {
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

        PointFrame_Move_AsyncWorker* asyncWorker = new PointFrame_Move_AsyncWorker(
_underlying,            deferred
,
                
                v,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PointFrame::Rotate(const Napi::CallbackInfo& info) {
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

    Napi::Value PointFrame::Rotate_async(const Napi::CallbackInfo& info) {
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

        PointFrame_Rotate_AsyncWorker* asyncWorker = new PointFrame_Rotate_AsyncWorker(
_underlying,            deferred
,
                
                axis,
                
                angle,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PointFrame::Refresh(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->Refresh
(

);



    return env.Undefined();


        }

    Napi::Value PointFrame::Refresh_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PointFrame_Refresh_AsyncWorker* asyncWorker = new PointFrame_Refresh_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PointFrame::Duplicate(const Napi::CallbackInfo& info) {
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

    Napi::Value PointFrame::Duplicate_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                            MbRegDuplicate * iReg = NULL;
        if (!(info[0].IsNull() || info[0].IsUndefined())) {
            RegDuplicate *iReg_ = RegDuplicate::Unwrap(info[0].ToObject());
                iReg =   iReg_->_underlying;
        }

        PointFrame_Duplicate_AsyncWorker* asyncWorker = new PointFrame_Duplicate_AsyncWorker(
_underlying,            deferred
,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PointFrame::AddYourGabaritTo(const Napi::CallbackInfo& info) {
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

    Napi::Value PointFrame::AddYourGabaritTo_async(const Napi::CallbackInfo& info) {
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
        

        PointFrame_AddYourGabaritTo_AsyncWorker* asyncWorker = new PointFrame_AddYourGabaritTo_AsyncWorker(
_underlying,            deferred
,
                
                cube        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PointFrame::GetUseCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 refcount_t  _result = _underlying->GetUseCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value PointFrame::GetUseCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PointFrame_GetUseCount_AsyncWorker* asyncWorker = new PointFrame_GetUseCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PointFrame::AddRef(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->AddRef
(

);



    return env.Undefined();


        }

    Napi::Value PointFrame::AddRef_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PointFrame_AddRef_AsyncWorker* asyncWorker = new PointFrame_AddRef_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PointFrame::SetStyle(const Napi::CallbackInfo& info) {
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

    Napi::Value PointFrame::SetStyle_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "int s is required."));
                    return deferred.Promise();
            }


                     int s = info[0].ToNumber().Int64Value();

        PointFrame_SetStyle_AsyncWorker* asyncWorker = new PointFrame_SetStyle_AsyncWorker(
_underlying,            deferred
,
                
                s        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PointFrame::GetStyle(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 int  _result = _underlying->GetStyle
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value PointFrame::GetStyle_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PointFrame_GetStyle_AsyncWorker* asyncWorker = new PointFrame_GetStyle_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PointFrame::SetColor(const Napi::CallbackInfo& info) {
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

    Napi::Value PointFrame::SetColor_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "uint32 c is required."));
                    return deferred.Promise();
            }


                     int c = info[0].ToNumber().Int64Value();

        PointFrame_SetColor_AsyncWorker* asyncWorker = new PointFrame_SetColor_AsyncWorker(
_underlying,            deferred
,
                
                c        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PointFrame::GetColor(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 uint32  _result = _underlying->GetColor
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value PointFrame::GetColor_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PointFrame_GetColor_AsyncWorker* asyncWorker = new PointFrame_GetColor_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PointFrame::AttributesConvert(const Napi::CallbackInfo& info) {
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

    Napi::Value PointFrame::AttributesConvert_async(const Napi::CallbackInfo& info) {
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
        

        PointFrame_AttributesConvert_AsyncWorker* asyncWorker = new PointFrame_AttributesConvert_AsyncWorker(
_underlying,            deferred
,
                
                other        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PointFrame::GetCreatorsCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 size_t  _result = _underlying->GetCreatorsCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value PointFrame::GetCreatorsCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PointFrame_GetCreatorsCount_AsyncWorker* asyncWorker = new PointFrame_GetCreatorsCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PointFrame::GetCreator(const Napi::CallbackInfo& info) {
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

    Napi::Value PointFrame::GetCreator_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number ind is required."));
                    return deferred.Promise();
            }


                     size_t ind = info[0].ToNumber().Int64Value();

        PointFrame_GetCreator_AsyncWorker* asyncWorker = new PointFrame_GetCreator_AsyncWorker(
_underlying,            deferred
,
                
                ind        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PointFrame::SetCreator(const Napi::CallbackInfo& info) {
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

    Napi::Value PointFrame::SetCreator_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number ind is required."));
                    return deferred.Promise();
            }


                     size_t ind = info[0].ToNumber().Int64Value();

        PointFrame_SetCreator_AsyncWorker* asyncWorker = new PointFrame_SetCreator_AsyncWorker(
_underlying,            deferred
,
                
                ind        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PointFrame::DetachCreator(const Napi::CallbackInfo& info) {
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

    Napi::Value PointFrame::DetachCreator_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number ind is required."));
                    return deferred.Promise();
            }


                     size_t ind = info[0].ToNumber().Int64Value();

        PointFrame_DetachCreator_AsyncWorker* asyncWorker = new PointFrame_DetachCreator_AsyncWorker(
_underlying,            deferred
,
                
                ind        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PointFrame::AddCreator(const Napi::CallbackInfo& info) {
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

    Napi::Value PointFrame::AddCreator_async(const Napi::CallbackInfo& info) {
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

        PointFrame_AddCreator_AsyncWorker* asyncWorker = new PointFrame_AddCreator_AsyncWorker(
_underlying,            deferred
,
                
                creator,
                
                addSame        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PointFrame::GetCreators(const Napi::CallbackInfo& info) {
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

    Napi::Value PointFrame::GetCreators_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PointFrame_GetCreators_AsyncWorker* asyncWorker = new PointFrame_GetCreators_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PointFrame::DeleteCreator(const Napi::CallbackInfo& info) {
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

    Napi::Value PointFrame::DeleteCreator_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number ind is required."));
                    return deferred.Promise();
            }


                     size_t ind = info[0].ToNumber().Int64Value();

        PointFrame_DeleteCreator_AsyncWorker* asyncWorker = new PointFrame_DeleteCreator_AsyncWorker(
_underlying,            deferred
,
                
                ind        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PointFrame::GetActiveCreatorsCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 size_t  _result = _underlying->GetActiveCreatorsCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value PointFrame::GetActiveCreatorsCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PointFrame_GetActiveCreatorsCount_AsyncWorker* asyncWorker = new PointFrame_GetActiveCreatorsCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }



    Napi::Value PointFrame::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }

PointFrame::~PointFrame() {
    // std::cout << "calling ::DeleteItem on PointFrame for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

    PointFrame_AddVertex_AsyncWorker::PointFrame_AddVertex_AsyncWorker(
MbPointFrame * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbCartPoint3D & point    )
        :_underlying(_underlying),PromiseWorker(d),
                        point(point)
{};

    void PointFrame_AddVertex_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddVertex(
                        point
        );



        
        ExitParallelRegion();
    }

    void PointFrame_AddVertex_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void PointFrame_AddVertex_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PointFrame_CreateMesh_AsyncWorker::PointFrame_CreateMesh_AsyncWorker(
MbPointFrame * _underlying,        Napi::Promise::Deferred const &d
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

    void PointFrame_CreateMesh_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbItem * _result = _underlying->CreateMesh(
                        stepData
,                        note
,                        iReg
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PointFrame_CreateMesh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void PointFrame_CreateMesh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PointFrame_CalculateMesh_AsyncWorker::PointFrame_CalculateMesh_AsyncWorker(
MbPointFrame * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbStepData & stepData,
                        const MbFormNote & note    )
        :_underlying(_underlying),PromiseWorker(d),
                        stepData(stepData)
,
                        note(note)
{};

    void PointFrame_CalculateMesh_AsyncWorker::Execute() {
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

    void PointFrame_CalculateMesh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void PointFrame_CalculateMesh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PointFrame_GetItemName_AsyncWorker::PointFrame_GetItemName_AsyncWorker(
MbPointFrame * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PointFrame_GetItemName_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         SimpleName  _result = _underlying->GetItemName(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PointFrame_GetItemName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             SimpleName  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void PointFrame_GetItemName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PointFrame_SetItemName_AsyncWorker::PointFrame_SetItemName_AsyncWorker(
MbPointFrame * _underlying,        Napi::Promise::Deferred const &d
,
                         SimpleName  name    )
        :_underlying(_underlying),PromiseWorker(d),
                        name(name)
{};

    void PointFrame_SetItemName_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetItemName(
                        name
        );



        
        ExitParallelRegion();
    }

    void PointFrame_SetItemName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void PointFrame_SetItemName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PointFrame_RebuildItem_AsyncWorker::PointFrame_RebuildItem_AsyncWorker(
MbPointFrame * _underlying,        Napi::Promise::Deferred const &d
,
                         MbeCopyMode  sameShell,
                         ProgressIndicator * progInd    )
        :_underlying(_underlying),PromiseWorker(d),
                        sameShell(sameShell)
,
                        progInd(progInd)
{};

    void PointFrame_RebuildItem_AsyncWorker::Execute() {
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

    void PointFrame_RebuildItem_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void PointFrame_RebuildItem_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PointFrame_GetItemByPath_AsyncWorker::PointFrame_GetItemByPath_AsyncWorker(
MbPointFrame * _underlying,        Napi::Promise::Deferred const &d
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

    void PointFrame_GetItemByPath_AsyncWorker::Execute() {
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

    void PointFrame_GetItemByPath_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void PointFrame_GetItemByPath_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PointFrame_IsA_AsyncWorker::PointFrame_IsA_AsyncWorker(
MbPointFrame * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PointFrame_IsA_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeSpaceType  _result = _underlying->IsA(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PointFrame_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeSpaceType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void PointFrame_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PointFrame_Type_AsyncWorker::PointFrame_Type_AsyncWorker(
MbPointFrame * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PointFrame_Type_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeSpaceType  _result = _underlying->Type(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PointFrame_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeSpaceType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void PointFrame_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PointFrame_Family_AsyncWorker::PointFrame_Family_AsyncWorker(
MbPointFrame * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PointFrame_Family_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeSpaceType  _result = _underlying->Family(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PointFrame_Family_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeSpaceType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void PointFrame_Family_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PointFrame_Transform_AsyncWorker::PointFrame_Transform_AsyncWorker(
MbPointFrame * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbMatrix3D & mat,
                         MbRegTransform * iReg    )
        :_underlying(_underlying),PromiseWorker(d),
                        mat(mat)
,
                        iReg(iReg)
{};

    void PointFrame_Transform_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Transform(
                        mat
,                        iReg
        );



        
        ExitParallelRegion();
    }

    void PointFrame_Transform_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void PointFrame_Transform_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PointFrame_Move_AsyncWorker::PointFrame_Move_AsyncWorker(
MbPointFrame * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbVector3D & v,
                         MbRegTransform * iReg    )
        :_underlying(_underlying),PromiseWorker(d),
                        v(v)
,
                        iReg(iReg)
{};

    void PointFrame_Move_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Move(
                        v
,                        iReg
        );



        
        ExitParallelRegion();
    }

    void PointFrame_Move_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void PointFrame_Move_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PointFrame_Rotate_AsyncWorker::PointFrame_Rotate_AsyncWorker(
MbPointFrame * _underlying,        Napi::Promise::Deferred const &d
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

    void PointFrame_Rotate_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Rotate(
                        axis
,                        angle
,                        iReg
        );



        
        ExitParallelRegion();
    }

    void PointFrame_Rotate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void PointFrame_Rotate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PointFrame_Refresh_AsyncWorker::PointFrame_Refresh_AsyncWorker(
MbPointFrame * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PointFrame_Refresh_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Refresh(
        );



        
        ExitParallelRegion();
    }

    void PointFrame_Refresh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void PointFrame_Refresh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PointFrame_Duplicate_AsyncWorker::PointFrame_Duplicate_AsyncWorker(
MbPointFrame * _underlying,        Napi::Promise::Deferred const &d
,
                         MbRegDuplicate * iReg    )
        :_underlying(_underlying),PromiseWorker(d),
                        iReg(iReg)
{};

    void PointFrame_Duplicate_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbSpaceItem & _result = _underlying->Duplicate(
                        iReg
        );


                this->_result = (MbSpaceItem *)&(_result);

        
        ExitParallelRegion();
    }

    void PointFrame_Duplicate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbSpaceItem * _result = this->_result;
                _to = SpaceItem::NewInstance(env, (MbSpaceItem *)&(_result));

            deferred.Resolve(_to);
    }

    void PointFrame_Duplicate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PointFrame_AddYourGabaritTo_AsyncWorker::PointFrame_AddYourGabaritTo_AsyncWorker(
MbPointFrame * _underlying,        Napi::Promise::Deferred const &d
,
                         MbCube & cube    )
        :_underlying(_underlying),PromiseWorker(d),
                        cube(cube)
{};

    void PointFrame_AddYourGabaritTo_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddYourGabaritTo(
                        cube
        );



        
        ExitParallelRegion();
    }

    void PointFrame_AddYourGabaritTo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void PointFrame_AddYourGabaritTo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PointFrame_GetUseCount_AsyncWorker::PointFrame_GetUseCount_AsyncWorker(
MbPointFrame * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PointFrame_GetUseCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         refcount_t  _result = _underlying->GetUseCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PointFrame_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             refcount_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void PointFrame_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PointFrame_AddRef_AsyncWorker::PointFrame_AddRef_AsyncWorker(
MbPointFrame * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PointFrame_AddRef_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddRef(
        );



        
        ExitParallelRegion();
    }

    void PointFrame_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void PointFrame_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PointFrame_SetStyle_AsyncWorker::PointFrame_SetStyle_AsyncWorker(
MbPointFrame * _underlying,        Napi::Promise::Deferred const &d
,
                         int  s    )
        :_underlying(_underlying),PromiseWorker(d),
                        s(s)
{};

    void PointFrame_SetStyle_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetStyle(
                        s
        );



        
        ExitParallelRegion();
    }

    void PointFrame_SetStyle_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void PointFrame_SetStyle_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PointFrame_GetStyle_AsyncWorker::PointFrame_GetStyle_AsyncWorker(
MbPointFrame * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PointFrame_GetStyle_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         int  _result = _underlying->GetStyle(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PointFrame_GetStyle_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             int  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void PointFrame_GetStyle_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PointFrame_SetColor_AsyncWorker::PointFrame_SetColor_AsyncWorker(
MbPointFrame * _underlying,        Napi::Promise::Deferred const &d
,
                         uint32  c    )
        :_underlying(_underlying),PromiseWorker(d),
                        c(c)
{};

    void PointFrame_SetColor_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetColor(
                        c
        );



        
        ExitParallelRegion();
    }

    void PointFrame_SetColor_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void PointFrame_SetColor_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PointFrame_GetColor_AsyncWorker::PointFrame_GetColor_AsyncWorker(
MbPointFrame * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PointFrame_GetColor_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         uint32  _result = _underlying->GetColor(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PointFrame_GetColor_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             uint32  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void PointFrame_GetColor_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PointFrame_AttributesConvert_AsyncWorker::PointFrame_AttributesConvert_AsyncWorker(
MbPointFrame * _underlying,        Napi::Promise::Deferred const &d
,
                         MbGrid & other    )
        :_underlying(_underlying),PromiseWorker(d),
                        other(other)
{};

    void PointFrame_AttributesConvert_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AttributesConvert(
                        other
        );



        
        ExitParallelRegion();
    }

    void PointFrame_AttributesConvert_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void PointFrame_AttributesConvert_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PointFrame_GetCreatorsCount_AsyncWorker::PointFrame_GetCreatorsCount_AsyncWorker(
MbPointFrame * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PointFrame_GetCreatorsCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         size_t  _result = _underlying->GetCreatorsCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PointFrame_GetCreatorsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             size_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void PointFrame_GetCreatorsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PointFrame_GetCreator_AsyncWorker::PointFrame_GetCreator_AsyncWorker(
MbPointFrame * _underlying,        Napi::Promise::Deferred const &d
,
                         size_t  ind    )
        :_underlying(_underlying),PromiseWorker(d),
                        ind(ind)
{};

    void PointFrame_GetCreator_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        const MbCreator * _result = _underlying->GetCreator(
                        ind
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PointFrame_GetCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void PointFrame_GetCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PointFrame_SetCreator_AsyncWorker::PointFrame_SetCreator_AsyncWorker(
MbPointFrame * _underlying,        Napi::Promise::Deferred const &d
,
                         size_t  ind    )
        :_underlying(_underlying),PromiseWorker(d),
                        ind(ind)
{};

    void PointFrame_SetCreator_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbCreator * _result = _underlying->SetCreator(
                        ind
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PointFrame_SetCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void PointFrame_SetCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PointFrame_DetachCreator_AsyncWorker::PointFrame_DetachCreator_AsyncWorker(
MbPointFrame * _underlying,        Napi::Promise::Deferred const &d
,
                         size_t  ind    )
        :_underlying(_underlying),PromiseWorker(d),
                        ind(ind)
{};

    void PointFrame_DetachCreator_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbCreator * _result = _underlying->DetachCreator(
                        ind
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PointFrame_DetachCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void PointFrame_DetachCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PointFrame_AddCreator_AsyncWorker::PointFrame_AddCreator_AsyncWorker(
MbPointFrame * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbCreator * creator,
                         bool  addSame    )
        :_underlying(_underlying),PromiseWorker(d),
                        creator(creator)
,
                        addSame(addSame)
{};

    void PointFrame_AddCreator_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->AddCreator(
                        creator
,                        addSame
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PointFrame_AddCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void PointFrame_AddCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PointFrame_GetCreators_AsyncWorker::PointFrame_GetCreators_AsyncWorker(
MbPointFrame * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PointFrame_GetCreators_AsyncWorker::Execute() {
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

    void PointFrame_GetCreators_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void PointFrame_GetCreators_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PointFrame_DeleteCreator_AsyncWorker::PointFrame_DeleteCreator_AsyncWorker(
MbPointFrame * _underlying,        Napi::Promise::Deferred const &d
,
                         size_t  ind    )
        :_underlying(_underlying),PromiseWorker(d),
                        ind(ind)
{};

    void PointFrame_DeleteCreator_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->DeleteCreator(
                        ind
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PointFrame_DeleteCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void PointFrame_DeleteCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PointFrame_GetActiveCreatorsCount_AsyncWorker::PointFrame_GetActiveCreatorsCount_AsyncWorker(
MbPointFrame * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PointFrame_GetActiveCreatorsCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         size_t  _result = _underlying->GetActiveCreatorsCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PointFrame_GetActiveCreatorsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             size_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void PointFrame_GetActiveCreatorsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

