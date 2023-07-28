// This is a generated file, modify: generate/templates/Solid.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/Solid.h"

#include "tool_mutex.h"

Napi::Object Solid::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "Solid", {
        InstanceMethod<&Solid::GetEdges>("GetEdges"),
        InstanceMethod<&Solid::GetEdges_async>("GetEdges_async"),
        InstanceMethod<&Solid::GetFaces>("GetFaces"),
        InstanceMethod<&Solid::GetFaces_async>("GetFaces_async"),
        InstanceMethod<&Solid::FindFaceByName>("FindFaceByName"),
        InstanceMethod<&Solid::FindFaceByName_async>("FindFaceByName_async"),
        InstanceMethod<&Solid::FindFaceByHash>("FindFaceByHash"),
        InstanceMethod<&Solid::FindFaceByHash_async>("FindFaceByHash_async"),
        InstanceMethod<&Solid::GetFace>("GetFace"),
        InstanceMethod<&Solid::GetFace_async>("GetFace_async"),
        InstanceMethod<&Solid::GetEdge>("GetEdge"),
        InstanceMethod<&Solid::GetEdge_async>("GetEdge_async"),
        InstanceMethod<&Solid::FindEdgeByName>("FindEdgeByName"),
        InstanceMethod<&Solid::FindEdgeByName_async>("FindEdgeByName_async"),
        InstanceMethod<&Solid::GetShell>("GetShell"),
        InstanceMethod<&Solid::GetShell_async>("GetShell_async"),
        InstanceMethod<&Solid::GetFaceIndex>("GetFaceIndex"),
        InstanceMethod<&Solid::GetFaceIndex_async>("GetFaceIndex_async"),
        InstanceMethod<&Solid::GetEdgeIndex>("GetEdgeIndex"),
        InstanceMethod<&Solid::GetEdgeIndex_async>("GetEdgeIndex_async"),
        InstanceMethod<&Solid::GetBasisPoints>("GetBasisPoints"),
        InstanceMethod<&Solid::GetBasisPoints_async>("GetBasisPoints_async"),
        InstanceMethod<&Solid::SetBasisPoints>("SetBasisPoints"),
        InstanceMethod<&Solid::SetBasisPoints_async>("SetBasisPoints_async"),
        InstanceMethod<&Solid::GetItems>("GetItems"),
        InstanceMethod<&Solid::GetItems_async>("GetItems_async"),
        InstanceMethod<&Solid::IsClosed>("IsClosed"),
        InstanceMethod<&Solid::IsClosed_async>("IsClosed_async"),
        InstanceMethod<&Solid::GetCube>("GetCube"),
        InstanceMethod<&Solid::GetCube_async>("GetCube_async"),
        InstanceMethod<&Solid::SetOwnChangedThrough>("SetOwnChangedThrough"),
        InstanceMethod<&Solid::SetOwnChangedThrough_async>("SetOwnChangedThrough_async"),
        InstanceMethod<&Solid::MakeRight>("MakeRight"),
        InstanceMethod<&Solid::MakeRight_async>("MakeRight_async"),
        InstanceMethod<&Solid::IsRight>("IsRight"),
        InstanceMethod<&Solid::IsRight_async>("IsRight_async"),
        InstanceMethod<&Solid::SolidClassification>("SolidClassification"),
        InstanceMethod<&Solid::SolidClassification_async>("SolidClassification_async"),
        InstanceMethod<&Solid::CreateMesh>("CreateMesh"),
        InstanceMethod<&Solid::CreateMesh_async>("CreateMesh_async"),
        InstanceMethod<&Solid::CalculateMesh>("CalculateMesh"),
        InstanceMethod<&Solid::CalculateMesh_async>("CalculateMesh_async"),
        InstanceMethod<&Solid::GetItemName>("GetItemName"),
        InstanceMethod<&Solid::GetItemName_async>("GetItemName_async"),
        InstanceMethod<&Solid::SetItemName>("SetItemName"),
        InstanceMethod<&Solid::SetItemName_async>("SetItemName_async"),
        InstanceMethod<&Solid::RebuildItem>("RebuildItem"),
        InstanceMethod<&Solid::RebuildItem_async>("RebuildItem_async"),
        InstanceMethod<&Solid::GetItemByPath>("GetItemByPath"),
        InstanceMethod<&Solid::GetItemByPath_async>("GetItemByPath_async"),
        InstanceMethod<&Solid::IsA>("IsA"),
        InstanceMethod<&Solid::IsA_async>("IsA_async"),
        InstanceMethod<&Solid::Type>("Type"),
        InstanceMethod<&Solid::Type_async>("Type_async"),
        InstanceMethod<&Solid::Family>("Family"),
        InstanceMethod<&Solid::Family_async>("Family_async"),
        InstanceMethod<&Solid::Transform>("Transform"),
        InstanceMethod<&Solid::Transform_async>("Transform_async"),
        InstanceMethod<&Solid::Move>("Move"),
        InstanceMethod<&Solid::Move_async>("Move_async"),
        InstanceMethod<&Solid::Rotate>("Rotate"),
        InstanceMethod<&Solid::Rotate_async>("Rotate_async"),
        InstanceMethod<&Solid::Refresh>("Refresh"),
        InstanceMethod<&Solid::Refresh_async>("Refresh_async"),
        InstanceMethod<&Solid::Duplicate>("Duplicate"),
        InstanceMethod<&Solid::Duplicate_async>("Duplicate_async"),
        InstanceMethod<&Solid::AddYourGabaritTo>("AddYourGabaritTo"),
        InstanceMethod<&Solid::AddYourGabaritTo_async>("AddYourGabaritTo_async"),
        InstanceMethod<&Solid::GetUseCount>("GetUseCount"),
        InstanceMethod<&Solid::GetUseCount_async>("GetUseCount_async"),
        InstanceMethod<&Solid::AddRef>("AddRef"),
        InstanceMethod<&Solid::AddRef_async>("AddRef_async"),
        InstanceMethod<&Solid::SetStyle>("SetStyle"),
        InstanceMethod<&Solid::SetStyle_async>("SetStyle_async"),
        InstanceMethod<&Solid::GetStyle>("GetStyle"),
        InstanceMethod<&Solid::GetStyle_async>("GetStyle_async"),
        InstanceMethod<&Solid::SetColor>("SetColor"),
        InstanceMethod<&Solid::SetColor_async>("SetColor_async"),
        InstanceMethod<&Solid::GetColor>("GetColor"),
        InstanceMethod<&Solid::GetColor_async>("GetColor_async"),
        InstanceMethod<&Solid::AttributesConvert>("AttributesConvert"),
        InstanceMethod<&Solid::AttributesConvert_async>("AttributesConvert_async"),
        InstanceMethod<&Solid::GetCreatorsCount>("GetCreatorsCount"),
        InstanceMethod<&Solid::GetCreatorsCount_async>("GetCreatorsCount_async"),
        InstanceMethod<&Solid::GetCreator>("GetCreator"),
        InstanceMethod<&Solid::GetCreator_async>("GetCreator_async"),
        InstanceMethod<&Solid::SetCreator>("SetCreator"),
        InstanceMethod<&Solid::SetCreator_async>("SetCreator_async"),
        InstanceMethod<&Solid::DetachCreator>("DetachCreator"),
        InstanceMethod<&Solid::DetachCreator_async>("DetachCreator_async"),
        InstanceMethod<&Solid::AddCreator>("AddCreator"),
        InstanceMethod<&Solid::AddCreator_async>("AddCreator_async"),
        InstanceMethod<&Solid::GetCreators>("GetCreators"),
        InstanceMethod<&Solid::GetCreators_async>("GetCreators_async"),
        InstanceMethod<&Solid::DeleteCreator>("DeleteCreator"),
        InstanceMethod<&Solid::DeleteCreator_async>("DeleteCreator_async"),
        InstanceMethod<&Solid::GetActiveCreatorsCount>("GetActiveCreatorsCount"),
        InstanceMethod<&Solid::GetActiveCreatorsCount_async>("GetActiveCreatorsCount_async"),
            InstanceMethod<&Solid::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Solid", func);

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

Solid::Solid(const Napi::CallbackInfo& info) : Napi::ObjectWrap<Solid>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        if (info.Length() == 2&&                ((
                info[0].IsObject() &&
                    info[0].ToObject().InstanceOf(FaceShell::GetConstructor(env))
        )   
)
 &&         ((
                info[1].IsObject() &&
                    info[1].ToObject().InstanceOf(Creator::GetConstructor(env))
        )   
)


        ) {
                    if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'shell'").ThrowAsJavaScriptException();
                return;
        }
        const class FaceShell *shell_ = FaceShell::Unwrap(info[0].ToObject());
        
         MbFaceShell * shell =shell_->_underlying;
        

                    if (info[1].IsNull() || info[1].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'creator'").ThrowAsJavaScriptException();
                return;
        }
        const class Creator *creator_ = Creator::Unwrap(info[1].ToObject());
        
         MbCreator * creator =creator_->_underlying;
        


                MbSolid *underlying = new MbSolid(shell,creator);
                if (underlying == NULL) {
                    Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
                    return;
                }
underlying->AddRef();            this->_underlying = underlying;
        } else if (info.Length() == 3&&                ((
                info[0].IsObject() &&
                    info[0].ToObject().InstanceOf(FaceShell::GetConstructor(env))
        )   
)
 &&         ((
                info[1].IsObject() &&
                    info[1].ToObject().InstanceOf(Solid::GetConstructor(env))
        )   
)
 &&         ((
                info[2].IsObject() &&
                    info[2].ToObject().InstanceOf(Creator::GetConstructor(env))
        )   
         || (info[2].IsNull() || info[2].IsUndefined())
)


        ) {
                    if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'shell'").ThrowAsJavaScriptException();
                return;
        }
        const class FaceShell *shell_ = FaceShell::Unwrap(info[0].ToObject());
        
         MbFaceShell & shell =*shell_->_underlying;
        

                    if (info[1].IsNull() || info[1].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'solid'").ThrowAsJavaScriptException();
                return;
        }
        const class Solid *solid_ = Solid::Unwrap(info[1].ToObject());
        
        const MbSolid & solid =*solid_->_underlying;
        

                        MbCreator * creator = NULL;
        if (!(info[2].IsNull() || info[2].IsUndefined())) {
            Creator *creator_ = Creator::Unwrap(info[2].ToObject());
                creator =   creator_->_underlying;
        }


                MbSolid *underlying = new MbSolid(shell,solid,creator);
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

Napi::Object Solid::NewInstance(Napi::Env env, MbSolid *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Solid");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Solid *unwrapped = Solid::Unwrap(inst);
underlying->AddRef();    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Solid::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Solid");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

        Napi::Value Solid::GetEdges(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                    RPArray<MbCurveEdge> *edges = new RPArray<MbCurveEdge>;




_underlying->GetEdges
(
        *edges

);



    Napi::Value _to;

            Napi::Array arr_edges = Napi::Array::New(env);
    for (size_t i = 0; i < edges->Count(); i++) {
            arr_edges[i] = CurveEdge::NewInstance(env,
                
                    (*edges)[i]
                
            );
    }
    _to = arr_edges;

            return _to;


        }

    Napi::Value Solid::GetEdges_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Solid_GetEdges_AsyncWorker* asyncWorker = new Solid_GetEdges_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::GetFaces(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                    RPArray<MbFace> *faces = new RPArray<MbFace>;




_underlying->GetFaces
(
        *faces

);



    Napi::Value _to;

            Napi::Array arr_faces = Napi::Array::New(env);
    for (size_t i = 0; i < faces->Count(); i++) {
            arr_faces[i] = Face::NewInstance(env,
                
                    (*faces)[i]
                
            );
    }
    _to = arr_faces;

            return _to;


        }

    Napi::Value Solid::GetFaces_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Solid_GetFaces_AsyncWorker* asyncWorker = new Solid_GetFaces_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::FindFaceByName(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Name::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Name name is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'name'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Name *name_ = Name::Unwrap(info[0].ToObject());
        
        const MbName & name =*name_->_underlying;
        



const MbFace * _result = _underlying->FindFaceByName
(
        name

);



    Napi::Value _to;

            if (_result != NULL) {
        _to = Face::NewInstance(env, (MbFace *)_result);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value Solid::FindFaceByName_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Name::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Name name is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'name'"));
                return deferred.Promise();
        }
        const class Name *name_ = Name::Unwrap(info[0].ToObject());
        
        const MbName & name =*name_->_underlying;
        

        Solid_FindFaceByName_AsyncWorker* asyncWorker = new Solid_FindFaceByName_AsyncWorker(
_underlying,            deferred
,
                
                name        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::FindFaceByHash(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "SimpleName h is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

            const int h = info[0].ToNumber().Int64Value();



const MbFace * _result = _underlying->FindFaceByHash
(
        h

);



    Napi::Value _to;

            if (_result != NULL) {
        _to = Face::NewInstance(env, (MbFace *)_result);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value Solid::FindFaceByHash_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "SimpleName h is required."));
                    return deferred.Promise();
            }


                    const int h = info[0].ToNumber().Int64Value();

        Solid_FindFaceByHash_AsyncWorker* asyncWorker = new Solid_FindFaceByHash_AsyncWorker(
_underlying,            deferred
,
                
                h        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::GetFace(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number index is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

             size_t index = info[0].ToNumber().Int64Value();



const MbFace * _result = _underlying->GetFace
(
        index

);



    Napi::Value _to;

            if (_result != NULL) {
        _to = Face::NewInstance(env, (MbFace *)_result);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value Solid::GetFace_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number index is required."));
                    return deferred.Promise();
            }


                     size_t index = info[0].ToNumber().Int64Value();

        Solid_GetFace_AsyncWorker* asyncWorker = new Solid_GetFace_AsyncWorker(
_underlying,            deferred
,
                
                index        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::GetEdge(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number index is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

             size_t index = info[0].ToNumber().Int64Value();



 MbCurveEdge * _result = _underlying->GetEdge
(
        index

);



    Napi::Value _to;

            if (_result != NULL) {
        _to = CurveEdge::NewInstance(env, (MbCurveEdge *)_result);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value Solid::GetEdge_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number index is required."));
                    return deferred.Promise();
            }


                     size_t index = info[0].ToNumber().Int64Value();

        Solid_GetEdge_AsyncWorker* asyncWorker = new Solid_GetEdge_AsyncWorker(
_underlying,            deferred
,
                
                index        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::FindEdgeByName(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Name::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Name name is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'name'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Name *name_ = Name::Unwrap(info[0].ToObject());
        
        const MbName & name =*name_->_underlying;
        



 MbCurveEdge * _result = _underlying->FindEdgeByName
(
        name

);



    Napi::Value _to;

            if (_result != NULL) {
        _to = CurveEdge::NewInstance(env, (MbCurveEdge *)_result);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value Solid::FindEdgeByName_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Name::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Name name is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'name'"));
                return deferred.Promise();
        }
        const class Name *name_ = Name::Unwrap(info[0].ToObject());
        
        const MbName & name =*name_->_underlying;
        

        Solid_FindEdgeByName_AsyncWorker* asyncWorker = new Solid_FindEdgeByName_AsyncWorker(
_underlying,            deferred
,
                
                name        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::GetShell(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbFaceShell * _result = _underlying->GetShell
(

);



    Napi::Value _to;

            if (_result != NULL) {
        _to = FaceShell::NewInstance(env, (MbFaceShell *)_result);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value Solid::GetShell_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Solid_GetShell_AsyncWorker* asyncWorker = new Solid_GetShell_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::GetFaceIndex(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Face::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Face face is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'face'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Face *face_ = Face::Unwrap(info[0].ToObject());
        
        const MbFace & face =*face_->_underlying;
        



 size_t  _result = _underlying->GetFaceIndex
(
        face

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Solid::GetFaceIndex_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Face::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Face face is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'face'"));
                return deferred.Promise();
        }
        const class Face *face_ = Face::Unwrap(info[0].ToObject());
        
        const MbFace & face =*face_->_underlying;
        

        Solid_GetFaceIndex_AsyncWorker* asyncWorker = new Solid_GetFaceIndex_AsyncWorker(
_underlying,            deferred
,
                
                face        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::GetEdgeIndex(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CurveEdge::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "CurveEdge edge is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'edge'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class CurveEdge *edge_ = CurveEdge::Unwrap(info[0].ToObject());
        
        const MbCurveEdge & edge =*edge_->_underlying;
        



 size_t  _result = _underlying->GetEdgeIndex
(
        edge

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Solid::GetEdgeIndex_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CurveEdge::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "CurveEdge edge is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'edge'"));
                return deferred.Promise();
        }
        const class CurveEdge *edge_ = CurveEdge::Unwrap(info[0].ToObject());
        
        const MbCurveEdge & edge =*edge_->_underlying;
        

        Solid_GetEdgeIndex_AsyncWorker* asyncWorker = new Solid_GetEdgeIndex_AsyncWorker(
_underlying,            deferred
,
                
                edge        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::GetBasisPoints(const Napi::CallbackInfo& info) {
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

    Napi::Value Solid::GetBasisPoints_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Solid_GetBasisPoints_AsyncWorker* asyncWorker = new Solid_GetBasisPoints_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::SetBasisPoints(const Napi::CallbackInfo& info) {
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

    Napi::Value Solid::SetBasisPoints_async(const Napi::CallbackInfo& info) {
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
        

        Solid_SetBasisPoints_AsyncWorker* asyncWorker = new Solid_SetBasisPoints_AsyncWorker(
_underlying,            deferred
,
                
                cd        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::GetItems(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                    RPArray<MbTopologyItem> *items = new RPArray<MbTopologyItem>;




_underlying->GetItems
(
        *items

);



    Napi::Value _to;

            Napi::Array arr_items = Napi::Array::New(env);
    for (size_t i = 0; i < items->Count(); i++) {
            arr_items[i] = TopologyItem::NewInstance(env,
                
                    (*items)[i]
                
            );
    }
    _to = arr_items;

            return _to;


        }

    Napi::Value Solid::GetItems_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Solid_GetItems_AsyncWorker* asyncWorker = new Solid_GetItems_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::IsClosed(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->IsClosed
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value Solid::IsClosed_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Solid_IsClosed_AsyncWorker* asyncWorker = new Solid_IsClosed_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::GetCube(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



const MbCube  _result = _underlying->GetCube
(

);



    Napi::Value _to;

            _to = Cube::NewInstance(env, new MbCube(_result));

            return _to;


        }

    Napi::Value Solid::GetCube_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Solid_GetCube_AsyncWorker* asyncWorker = new Solid_GetCube_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::SetOwnChangedThrough(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "ChangedType type is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

            const MbeChangedType type = static_cast<MbeChangedType>(info[0].ToNumber().Uint32Value());



_underlying->SetOwnChangedThrough
(
        type

);



    return env.Undefined();


        }

    Napi::Value Solid::SetOwnChangedThrough_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "ChangedType type is required."));
                    return deferred.Promise();
            }


                    const MbeChangedType type = static_cast<MbeChangedType>(info[0].ToNumber().Uint32Value());

        Solid_SetOwnChangedThrough_AsyncWorker* asyncWorker = new Solid_SetOwnChangedThrough_AsyncWorker(
_underlying,            deferred
,
                
                type        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::MakeRight(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->MakeRight
(

);



    return env.Undefined();


        }

    Napi::Value Solid::MakeRight_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Solid_MakeRight_AsyncWorker* asyncWorker = new Solid_MakeRight_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::IsRight(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->IsRight
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value Solid::IsRight_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Solid_IsRight_AsyncWorker* asyncWorker = new Solid_IsRight_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::SolidClassification(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Solid::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Solid solid is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'solid'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Solid *solid_ = Solid::Unwrap(info[0].ToObject());
        
        const MbSolid & solid =*solid_->_underlying;
        

             double epsilon = info[1].ToNumber().DoubleValue();



 MbeItemLocation  _result = _underlying->SolidClassification
(
        solid
,        info.Length() == 1 || info[1].IsNull() ? Math::metricRegion : epsilon

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Solid::SolidClassification_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Solid::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Solid solid is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'solid'"));
                return deferred.Promise();
        }
        const class Solid *solid_ = Solid::Unwrap(info[0].ToObject());
        
        const MbSolid & solid =*solid_->_underlying;
        

                     double epsilon = info[1].ToNumber().DoubleValue();

        Solid_SolidClassification_AsyncWorker* asyncWorker = new Solid_SolidClassification_AsyncWorker(
_underlying,            deferred
,
                
                solid,
                
                epsilon        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::CreateMesh(const Napi::CallbackInfo& info) {
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

    Napi::Value Solid::CreateMesh_async(const Napi::CallbackInfo& info) {
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

        Solid_CreateMesh_AsyncWorker* asyncWorker = new Solid_CreateMesh_AsyncWorker(
_underlying,            deferred
,
                
                stepData,
                
                note,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::CalculateMesh(const Napi::CallbackInfo& info) {
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

    Napi::Value Solid::CalculateMesh_async(const Napi::CallbackInfo& info) {
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
        

        Solid_CalculateMesh_AsyncWorker* asyncWorker = new Solid_CalculateMesh_AsyncWorker(
_underlying,            deferred
,
                
                stepData,
                
                note        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::GetItemName(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 SimpleName  _result = _underlying->GetItemName
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Solid::GetItemName_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Solid_GetItemName_AsyncWorker* asyncWorker = new Solid_GetItemName_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::SetItemName(const Napi::CallbackInfo& info) {
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

    Napi::Value Solid::SetItemName_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "SimpleName name is required."));
                    return deferred.Promise();
            }


                     int name = info[0].ToNumber().Int64Value();

        Solid_SetItemName_AsyncWorker* asyncWorker = new Solid_SetItemName_AsyncWorker(
_underlying,            deferred
,
                
                name        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::RebuildItem(const Napi::CallbackInfo& info) {
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

    Napi::Value Solid::RebuildItem_async(const Napi::CallbackInfo& info) {
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

        Solid_RebuildItem_AsyncWorker* asyncWorker = new Solid_RebuildItem_AsyncWorker(
_underlying,            deferred
,
                
                sameShell,
                
                progInd        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::GetItemByPath(const Napi::CallbackInfo& info) {
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

    Napi::Value Solid::GetItemByPath_async(const Napi::CallbackInfo& info) {
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

        Solid_GetItemByPath_AsyncWorker* asyncWorker = new Solid_GetItemByPath_AsyncWorker(
_underlying,            deferred
,
                
                path,
                
                ind,
                
                from,
                
                currInd        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::IsA(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeSpaceType  _result = _underlying->IsA
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Solid::IsA_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Solid_IsA_AsyncWorker* asyncWorker = new Solid_IsA_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::Type(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeSpaceType  _result = _underlying->Type
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Solid::Type_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Solid_Type_AsyncWorker* asyncWorker = new Solid_Type_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::Family(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeSpaceType  _result = _underlying->Family
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Solid::Family_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Solid_Family_AsyncWorker* asyncWorker = new Solid_Family_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::Transform(const Napi::CallbackInfo& info) {
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

    Napi::Value Solid::Transform_async(const Napi::CallbackInfo& info) {
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

        Solid_Transform_AsyncWorker* asyncWorker = new Solid_Transform_AsyncWorker(
_underlying,            deferred
,
                
                mat,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::Move(const Napi::CallbackInfo& info) {
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

    Napi::Value Solid::Move_async(const Napi::CallbackInfo& info) {
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

        Solid_Move_AsyncWorker* asyncWorker = new Solid_Move_AsyncWorker(
_underlying,            deferred
,
                
                v,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::Rotate(const Napi::CallbackInfo& info) {
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

    Napi::Value Solid::Rotate_async(const Napi::CallbackInfo& info) {
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

        Solid_Rotate_AsyncWorker* asyncWorker = new Solid_Rotate_AsyncWorker(
_underlying,            deferred
,
                
                axis,
                
                angle,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::Refresh(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->Refresh
(

);



    return env.Undefined();


        }

    Napi::Value Solid::Refresh_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Solid_Refresh_AsyncWorker* asyncWorker = new Solid_Refresh_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::Duplicate(const Napi::CallbackInfo& info) {
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

    Napi::Value Solid::Duplicate_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                            MbRegDuplicate * iReg = NULL;
        if (!(info[0].IsNull() || info[0].IsUndefined())) {
            RegDuplicate *iReg_ = RegDuplicate::Unwrap(info[0].ToObject());
                iReg =   iReg_->_underlying;
        }

        Solid_Duplicate_AsyncWorker* asyncWorker = new Solid_Duplicate_AsyncWorker(
_underlying,            deferred
,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::AddYourGabaritTo(const Napi::CallbackInfo& info) {
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

    Napi::Value Solid::AddYourGabaritTo_async(const Napi::CallbackInfo& info) {
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
        

        Solid_AddYourGabaritTo_AsyncWorker* asyncWorker = new Solid_AddYourGabaritTo_AsyncWorker(
_underlying,            deferred
,
                
                cube        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::GetUseCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 refcount_t  _result = _underlying->GetUseCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Solid::GetUseCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Solid_GetUseCount_AsyncWorker* asyncWorker = new Solid_GetUseCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::AddRef(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->AddRef
(

);



    return env.Undefined();


        }

    Napi::Value Solid::AddRef_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Solid_AddRef_AsyncWorker* asyncWorker = new Solid_AddRef_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::SetStyle(const Napi::CallbackInfo& info) {
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

    Napi::Value Solid::SetStyle_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "int s is required."));
                    return deferred.Promise();
            }


                     int s = info[0].ToNumber().Int64Value();

        Solid_SetStyle_AsyncWorker* asyncWorker = new Solid_SetStyle_AsyncWorker(
_underlying,            deferred
,
                
                s        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::GetStyle(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 int  _result = _underlying->GetStyle
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Solid::GetStyle_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Solid_GetStyle_AsyncWorker* asyncWorker = new Solid_GetStyle_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::SetColor(const Napi::CallbackInfo& info) {
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

    Napi::Value Solid::SetColor_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "uint32 c is required."));
                    return deferred.Promise();
            }


                     int c = info[0].ToNumber().Int64Value();

        Solid_SetColor_AsyncWorker* asyncWorker = new Solid_SetColor_AsyncWorker(
_underlying,            deferred
,
                
                c        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::GetColor(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 uint32  _result = _underlying->GetColor
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Solid::GetColor_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Solid_GetColor_AsyncWorker* asyncWorker = new Solid_GetColor_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::AttributesConvert(const Napi::CallbackInfo& info) {
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

    Napi::Value Solid::AttributesConvert_async(const Napi::CallbackInfo& info) {
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
        

        Solid_AttributesConvert_AsyncWorker* asyncWorker = new Solid_AttributesConvert_AsyncWorker(
_underlying,            deferred
,
                
                other        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::GetCreatorsCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 size_t  _result = _underlying->GetCreatorsCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Solid::GetCreatorsCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Solid_GetCreatorsCount_AsyncWorker* asyncWorker = new Solid_GetCreatorsCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::GetCreator(const Napi::CallbackInfo& info) {
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

    Napi::Value Solid::GetCreator_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number ind is required."));
                    return deferred.Promise();
            }


                     size_t ind = info[0].ToNumber().Int64Value();

        Solid_GetCreator_AsyncWorker* asyncWorker = new Solid_GetCreator_AsyncWorker(
_underlying,            deferred
,
                
                ind        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::SetCreator(const Napi::CallbackInfo& info) {
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

    Napi::Value Solid::SetCreator_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number ind is required."));
                    return deferred.Promise();
            }


                     size_t ind = info[0].ToNumber().Int64Value();

        Solid_SetCreator_AsyncWorker* asyncWorker = new Solid_SetCreator_AsyncWorker(
_underlying,            deferred
,
                
                ind        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::DetachCreator(const Napi::CallbackInfo& info) {
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

    Napi::Value Solid::DetachCreator_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number ind is required."));
                    return deferred.Promise();
            }


                     size_t ind = info[0].ToNumber().Int64Value();

        Solid_DetachCreator_AsyncWorker* asyncWorker = new Solid_DetachCreator_AsyncWorker(
_underlying,            deferred
,
                
                ind        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::AddCreator(const Napi::CallbackInfo& info) {
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

    Napi::Value Solid::AddCreator_async(const Napi::CallbackInfo& info) {
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

        Solid_AddCreator_AsyncWorker* asyncWorker = new Solid_AddCreator_AsyncWorker(
_underlying,            deferred
,
                
                creator,
                
                addSame        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::GetCreators(const Napi::CallbackInfo& info) {
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

    Napi::Value Solid::GetCreators_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Solid_GetCreators_AsyncWorker* asyncWorker = new Solid_GetCreators_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::DeleteCreator(const Napi::CallbackInfo& info) {
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

    Napi::Value Solid::DeleteCreator_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number ind is required."));
                    return deferred.Promise();
            }


                     size_t ind = info[0].ToNumber().Int64Value();

        Solid_DeleteCreator_AsyncWorker* asyncWorker = new Solid_DeleteCreator_AsyncWorker(
_underlying,            deferred
,
                
                ind        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Solid::GetActiveCreatorsCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 size_t  _result = _underlying->GetActiveCreatorsCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Solid::GetActiveCreatorsCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Solid_GetActiveCreatorsCount_AsyncWorker* asyncWorker = new Solid_GetActiveCreatorsCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }



    Napi::Value Solid::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }

Solid::~Solid() {
    // std::cout << "calling ::DeleteItem on Solid for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

    Solid_GetEdges_AsyncWorker::Solid_GetEdges_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Solid_GetEdges_AsyncWorker::Execute() {
        EnterParallelRegion();

                RPArray<MbCurveEdge> *edges = new RPArray<MbCurveEdge>;


        
        _underlying->GetEdges(
                        *edges
        );


                this->edges = edges;

        
        ExitParallelRegion();
    }

    void Solid_GetEdges_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             RPArray<MbCurveEdge> * edges = this->edges;
                Napi::Array arr_edges = Napi::Array::New(env);
    for (size_t i = 0; i < edges->Count(); i++) {
            arr_edges[i] = CurveEdge::NewInstance(env,
                
                    (*edges)[i]
                
            );
    }
    _to = arr_edges;

            deferred.Resolve(_to);
    }

    void Solid_GetEdges_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_GetFaces_AsyncWorker::Solid_GetFaces_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Solid_GetFaces_AsyncWorker::Execute() {
        EnterParallelRegion();

                RPArray<MbFace> *faces = new RPArray<MbFace>;


        
        _underlying->GetFaces(
                        *faces
        );


                this->faces = faces;

        
        ExitParallelRegion();
    }

    void Solid_GetFaces_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             RPArray<MbFace> * faces = this->faces;
                Napi::Array arr_faces = Napi::Array::New(env);
    for (size_t i = 0; i < faces->Count(); i++) {
            arr_faces[i] = Face::NewInstance(env,
                
                    (*faces)[i]
                
            );
    }
    _to = arr_faces;

            deferred.Resolve(_to);
    }

    void Solid_GetFaces_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_FindFaceByName_AsyncWorker::Solid_FindFaceByName_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbName & name    )
        :_underlying(_underlying),PromiseWorker(d),
                        name(name)
{};

    void Solid_FindFaceByName_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        const MbFace * _result = _underlying->FindFaceByName(
                        name
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Solid_FindFaceByName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            const MbFace * _result = this->_result;
                if (_result != NULL) {
        _to = Face::NewInstance(env, (MbFace *)_result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void Solid_FindFaceByName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_FindFaceByHash_AsyncWorker::Solid_FindFaceByHash_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
,
                        const SimpleName  h    )
        :_underlying(_underlying),PromiseWorker(d),
                        h(h)
{};

    void Solid_FindFaceByHash_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        const MbFace * _result = _underlying->FindFaceByHash(
                        h
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Solid_FindFaceByHash_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            const MbFace * _result = this->_result;
                if (_result != NULL) {
        _to = Face::NewInstance(env, (MbFace *)_result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void Solid_FindFaceByHash_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_GetFace_AsyncWorker::Solid_GetFace_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
,
                         size_t  index    )
        :_underlying(_underlying),PromiseWorker(d),
                        index(index)
{};

    void Solid_GetFace_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        const MbFace * _result = _underlying->GetFace(
                        index
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Solid_GetFace_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            const MbFace * _result = this->_result;
                if (_result != NULL) {
        _to = Face::NewInstance(env, (MbFace *)_result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void Solid_GetFace_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_GetEdge_AsyncWorker::Solid_GetEdge_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
,
                         size_t  index    )
        :_underlying(_underlying),PromiseWorker(d),
                        index(index)
{};

    void Solid_GetEdge_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbCurveEdge * _result = _underlying->GetEdge(
                        index
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Solid_GetEdge_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbCurveEdge * _result = this->_result;
                if (_result != NULL) {
        _to = CurveEdge::NewInstance(env, (MbCurveEdge *)_result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void Solid_GetEdge_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_FindEdgeByName_AsyncWorker::Solid_FindEdgeByName_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbName & name    )
        :_underlying(_underlying),PromiseWorker(d),
                        name(name)
{};

    void Solid_FindEdgeByName_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbCurveEdge * _result = _underlying->FindEdgeByName(
                        name
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Solid_FindEdgeByName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbCurveEdge * _result = this->_result;
                if (_result != NULL) {
        _to = CurveEdge::NewInstance(env, (MbCurveEdge *)_result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void Solid_FindEdgeByName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_GetShell_AsyncWorker::Solid_GetShell_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Solid_GetShell_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbFaceShell * _result = _underlying->GetShell(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Solid_GetShell_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbFaceShell * _result = this->_result;
                if (_result != NULL) {
        _to = FaceShell::NewInstance(env, (MbFaceShell *)_result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void Solid_GetShell_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_GetFaceIndex_AsyncWorker::Solid_GetFaceIndex_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbFace & face    )
        :_underlying(_underlying),PromiseWorker(d),
                        face(face)
{};

    void Solid_GetFaceIndex_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         size_t  _result = _underlying->GetFaceIndex(
                        face
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Solid_GetFaceIndex_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             size_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Solid_GetFaceIndex_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_GetEdgeIndex_AsyncWorker::Solid_GetEdgeIndex_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbCurveEdge & edge    )
        :_underlying(_underlying),PromiseWorker(d),
                        edge(edge)
{};

    void Solid_GetEdgeIndex_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         size_t  _result = _underlying->GetEdgeIndex(
                        edge
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Solid_GetEdgeIndex_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             size_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Solid_GetEdgeIndex_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_GetBasisPoints_AsyncWorker::Solid_GetBasisPoints_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Solid_GetBasisPoints_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbControlData3D *cd = new MbControlData3D;


        
        _underlying->GetBasisPoints(
                        *cd
        );


                this->cd = cd;

        
        ExitParallelRegion();
    }

    void Solid_GetBasisPoints_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Solid_GetBasisPoints_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_SetBasisPoints_AsyncWorker::Solid_SetBasisPoints_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbControlData3D & cd    )
        :_underlying(_underlying),PromiseWorker(d),
                        cd(cd)
{};

    void Solid_SetBasisPoints_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetBasisPoints(
                        cd
        );



        
        ExitParallelRegion();
    }

    void Solid_SetBasisPoints_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Solid_SetBasisPoints_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_GetItems_AsyncWorker::Solid_GetItems_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Solid_GetItems_AsyncWorker::Execute() {
        EnterParallelRegion();

                RPArray<MbTopologyItem> *items = new RPArray<MbTopologyItem>;


        
        _underlying->GetItems(
                        *items
        );


                this->items = items;

        
        ExitParallelRegion();
    }

    void Solid_GetItems_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             RPArray<MbTopologyItem> * items = this->items;
                Napi::Array arr_items = Napi::Array::New(env);
    for (size_t i = 0; i < items->Count(); i++) {
            arr_items[i] = TopologyItem::NewInstance(env,
                
                    (*items)[i]
                
            );
    }
    _to = arr_items;

            deferred.Resolve(_to);
    }

    void Solid_GetItems_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_IsClosed_AsyncWorker::Solid_IsClosed_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Solid_IsClosed_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsClosed(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Solid_IsClosed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void Solid_IsClosed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_GetCube_AsyncWorker::Solid_GetCube_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Solid_GetCube_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        const MbCube  _result = _underlying->GetCube(
        );


                        this->_result = new (MbCube)(_result);

        
        ExitParallelRegion();
    }

    void Solid_GetCube_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            const MbCube * _result = this->_result;
                _to = Cube::NewInstance(env, (MbCube *)&(_result));

            deferred.Resolve(_to);
    }

    void Solid_GetCube_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_SetOwnChangedThrough_AsyncWorker::Solid_SetOwnChangedThrough_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
,
                         MbeChangedType  type    )
        :_underlying(_underlying),PromiseWorker(d),
                        type(type)
{};

    void Solid_SetOwnChangedThrough_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetOwnChangedThrough(
                        type
        );



        
        ExitParallelRegion();
    }

    void Solid_SetOwnChangedThrough_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Solid_SetOwnChangedThrough_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_MakeRight_AsyncWorker::Solid_MakeRight_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Solid_MakeRight_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->MakeRight(
        );



        
        ExitParallelRegion();
    }

    void Solid_MakeRight_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Solid_MakeRight_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_IsRight_AsyncWorker::Solid_IsRight_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Solid_IsRight_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsRight(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Solid_IsRight_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void Solid_IsRight_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_SolidClassification_AsyncWorker::Solid_SolidClassification_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbSolid & solid,
                         double  epsilon    )
        :_underlying(_underlying),PromiseWorker(d),
                        solid(solid)
,
                        epsilon(epsilon)
{};

    void Solid_SolidClassification_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeItemLocation  _result = _underlying->SolidClassification(
                        solid
,                        epsilon
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Solid_SolidClassification_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeItemLocation  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Solid_SolidClassification_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_CreateMesh_AsyncWorker::Solid_CreateMesh_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
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

    void Solid_CreateMesh_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbItem * _result = _underlying->CreateMesh(
                        stepData
,                        note
,                        iReg
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Solid_CreateMesh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Solid_CreateMesh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_CalculateMesh_AsyncWorker::Solid_CalculateMesh_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbStepData & stepData,
                        const MbFormNote & note    )
        :_underlying(_underlying),PromiseWorker(d),
                        stepData(stepData)
,
                        note(note)
{};

    void Solid_CalculateMesh_AsyncWorker::Execute() {
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

    void Solid_CalculateMesh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Solid_CalculateMesh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_GetItemName_AsyncWorker::Solid_GetItemName_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Solid_GetItemName_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         SimpleName  _result = _underlying->GetItemName(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Solid_GetItemName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             SimpleName  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Solid_GetItemName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_SetItemName_AsyncWorker::Solid_SetItemName_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
,
                         SimpleName  name    )
        :_underlying(_underlying),PromiseWorker(d),
                        name(name)
{};

    void Solid_SetItemName_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetItemName(
                        name
        );



        
        ExitParallelRegion();
    }

    void Solid_SetItemName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Solid_SetItemName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_RebuildItem_AsyncWorker::Solid_RebuildItem_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
,
                         MbeCopyMode  sameShell,
                         ProgressIndicator * progInd    )
        :_underlying(_underlying),PromiseWorker(d),
                        sameShell(sameShell)
,
                        progInd(progInd)
{};

    void Solid_RebuildItem_AsyncWorker::Execute() {
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

    void Solid_RebuildItem_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Solid_RebuildItem_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_GetItemByPath_AsyncWorker::Solid_GetItemByPath_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
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

    void Solid_GetItemByPath_AsyncWorker::Execute() {
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

    void Solid_GetItemByPath_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Solid_GetItemByPath_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_IsA_AsyncWorker::Solid_IsA_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Solid_IsA_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeSpaceType  _result = _underlying->IsA(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Solid_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeSpaceType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Solid_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_Type_AsyncWorker::Solid_Type_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Solid_Type_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeSpaceType  _result = _underlying->Type(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Solid_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeSpaceType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Solid_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_Family_AsyncWorker::Solid_Family_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Solid_Family_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeSpaceType  _result = _underlying->Family(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Solid_Family_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeSpaceType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Solid_Family_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_Transform_AsyncWorker::Solid_Transform_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbMatrix3D & mat,
                         MbRegTransform * iReg    )
        :_underlying(_underlying),PromiseWorker(d),
                        mat(mat)
,
                        iReg(iReg)
{};

    void Solid_Transform_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Transform(
                        mat
,                        iReg
        );



        
        ExitParallelRegion();
    }

    void Solid_Transform_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Solid_Transform_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_Move_AsyncWorker::Solid_Move_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbVector3D & v,
                         MbRegTransform * iReg    )
        :_underlying(_underlying),PromiseWorker(d),
                        v(v)
,
                        iReg(iReg)
{};

    void Solid_Move_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Move(
                        v
,                        iReg
        );



        
        ExitParallelRegion();
    }

    void Solid_Move_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Solid_Move_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_Rotate_AsyncWorker::Solid_Rotate_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
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

    void Solid_Rotate_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Rotate(
                        axis
,                        angle
,                        iReg
        );



        
        ExitParallelRegion();
    }

    void Solid_Rotate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Solid_Rotate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_Refresh_AsyncWorker::Solid_Refresh_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Solid_Refresh_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Refresh(
        );



        
        ExitParallelRegion();
    }

    void Solid_Refresh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Solid_Refresh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_Duplicate_AsyncWorker::Solid_Duplicate_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
,
                         MbRegDuplicate * iReg    )
        :_underlying(_underlying),PromiseWorker(d),
                        iReg(iReg)
{};

    void Solid_Duplicate_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbSpaceItem & _result = _underlying->Duplicate(
                        iReg
        );


                this->_result = (MbSpaceItem *)&(_result);

        
        ExitParallelRegion();
    }

    void Solid_Duplicate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbSpaceItem * _result = this->_result;
                _to = SpaceItem::NewInstance(env, (MbSpaceItem *)&(_result));

            deferred.Resolve(_to);
    }

    void Solid_Duplicate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_AddYourGabaritTo_AsyncWorker::Solid_AddYourGabaritTo_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
,
                         MbCube & cube    )
        :_underlying(_underlying),PromiseWorker(d),
                        cube(cube)
{};

    void Solid_AddYourGabaritTo_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddYourGabaritTo(
                        cube
        );



        
        ExitParallelRegion();
    }

    void Solid_AddYourGabaritTo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Solid_AddYourGabaritTo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_GetUseCount_AsyncWorker::Solid_GetUseCount_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Solid_GetUseCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         refcount_t  _result = _underlying->GetUseCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Solid_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             refcount_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Solid_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_AddRef_AsyncWorker::Solid_AddRef_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Solid_AddRef_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddRef(
        );



        
        ExitParallelRegion();
    }

    void Solid_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Solid_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_SetStyle_AsyncWorker::Solid_SetStyle_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
,
                         int  s    )
        :_underlying(_underlying),PromiseWorker(d),
                        s(s)
{};

    void Solid_SetStyle_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetStyle(
                        s
        );



        
        ExitParallelRegion();
    }

    void Solid_SetStyle_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Solid_SetStyle_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_GetStyle_AsyncWorker::Solid_GetStyle_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Solid_GetStyle_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         int  _result = _underlying->GetStyle(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Solid_GetStyle_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             int  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Solid_GetStyle_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_SetColor_AsyncWorker::Solid_SetColor_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
,
                         uint32  c    )
        :_underlying(_underlying),PromiseWorker(d),
                        c(c)
{};

    void Solid_SetColor_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetColor(
                        c
        );



        
        ExitParallelRegion();
    }

    void Solid_SetColor_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Solid_SetColor_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_GetColor_AsyncWorker::Solid_GetColor_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Solid_GetColor_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         uint32  _result = _underlying->GetColor(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Solid_GetColor_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             uint32  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Solid_GetColor_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_AttributesConvert_AsyncWorker::Solid_AttributesConvert_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
,
                         MbGrid & other    )
        :_underlying(_underlying),PromiseWorker(d),
                        other(other)
{};

    void Solid_AttributesConvert_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AttributesConvert(
                        other
        );



        
        ExitParallelRegion();
    }

    void Solid_AttributesConvert_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Solid_AttributesConvert_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_GetCreatorsCount_AsyncWorker::Solid_GetCreatorsCount_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Solid_GetCreatorsCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         size_t  _result = _underlying->GetCreatorsCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Solid_GetCreatorsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             size_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Solid_GetCreatorsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_GetCreator_AsyncWorker::Solid_GetCreator_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
,
                         size_t  ind    )
        :_underlying(_underlying),PromiseWorker(d),
                        ind(ind)
{};

    void Solid_GetCreator_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        const MbCreator * _result = _underlying->GetCreator(
                        ind
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Solid_GetCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Solid_GetCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_SetCreator_AsyncWorker::Solid_SetCreator_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
,
                         size_t  ind    )
        :_underlying(_underlying),PromiseWorker(d),
                        ind(ind)
{};

    void Solid_SetCreator_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbCreator * _result = _underlying->SetCreator(
                        ind
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Solid_SetCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Solid_SetCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_DetachCreator_AsyncWorker::Solid_DetachCreator_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
,
                         size_t  ind    )
        :_underlying(_underlying),PromiseWorker(d),
                        ind(ind)
{};

    void Solid_DetachCreator_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbCreator * _result = _underlying->DetachCreator(
                        ind
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Solid_DetachCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Solid_DetachCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_AddCreator_AsyncWorker::Solid_AddCreator_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbCreator * creator,
                         bool  addSame    )
        :_underlying(_underlying),PromiseWorker(d),
                        creator(creator)
,
                        addSame(addSame)
{};

    void Solid_AddCreator_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->AddCreator(
                        creator
,                        addSame
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Solid_AddCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void Solid_AddCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_GetCreators_AsyncWorker::Solid_GetCreators_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Solid_GetCreators_AsyncWorker::Execute() {
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

    void Solid_GetCreators_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Solid_GetCreators_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_DeleteCreator_AsyncWorker::Solid_DeleteCreator_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
,
                         size_t  ind    )
        :_underlying(_underlying),PromiseWorker(d),
                        ind(ind)
{};

    void Solid_DeleteCreator_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->DeleteCreator(
                        ind
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Solid_DeleteCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void Solid_DeleteCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Solid_GetActiveCreatorsCount_AsyncWorker::Solid_GetActiveCreatorsCount_AsyncWorker(
MbSolid * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Solid_GetActiveCreatorsCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         size_t  _result = _underlying->GetActiveCreatorsCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Solid_GetActiveCreatorsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             size_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Solid_GetActiveCreatorsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

