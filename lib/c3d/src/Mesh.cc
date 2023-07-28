// This is a generated file, modify: generate/templates/Mesh.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/Mesh.h"

#include "tool_mutex.h"

Napi::Object Mesh::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "Mesh", {
        InstanceMethod<&Mesh::GetBuffers>("GetBuffers"),
        InstanceMethod<&Mesh::GetBuffers_async>("GetBuffers_async"),
        InstanceMethod<&Mesh::GetApexes>("GetApexes"),
        InstanceMethod<&Mesh::GetApexes_async>("GetApexes_async"),
        InstanceMethod<&Mesh::GetEdges>("GetEdges"),
        InstanceMethod<&Mesh::GetEdges_async>("GetEdges_async"),
        InstanceMethod<&Mesh::GetMeshType>("GetMeshType"),
        InstanceMethod<&Mesh::GetMeshType_async>("GetMeshType_async"),
        InstanceMethod<&Mesh::ConvertAllToTriangles>("ConvertAllToTriangles"),
        InstanceMethod<&Mesh::ConvertAllToTriangles_async>("ConvertAllToTriangles_async"),
        InstanceMethod<&Mesh::IsClosed>("IsClosed"),
        InstanceMethod<&Mesh::IsClosed_async>("IsClosed_async"),
        InstanceMethod<&Mesh::AddGrid>("AddGrid"),
        InstanceMethod<&Mesh::AddGrid_async>("AddGrid_async"),
        InstanceMethod<&Mesh::AddExistingGrid>("AddExistingGrid"),
        InstanceMethod<&Mesh::AddExistingGrid_async>("AddExistingGrid_async"),
        InstanceMethod<&Mesh::GetGrids>("GetGrids"),
        InstanceMethod<&Mesh::GetGrids_async>("GetGrids_async"),
        InstanceMethod<&Mesh::CreateGridSearchTrees>("CreateGridSearchTrees"),
        InstanceMethod<&Mesh::CreateGridSearchTrees_async>("CreateGridSearchTrees_async"),
        InstanceMethod<&Mesh::LineIntersection>("LineIntersection"),
        InstanceMethod<&Mesh::LineIntersection_async>("LineIntersection_async"),
        InstanceMethod<&Mesh::NearestMesh>("NearestMesh"),
        InstanceMethod<&Mesh::NearestMesh_async>("NearestMesh_async"),
        InstanceMethod<&Mesh::CreateMesh>("CreateMesh"),
        InstanceMethod<&Mesh::CreateMesh_async>("CreateMesh_async"),
        InstanceMethod<&Mesh::CalculateMesh>("CalculateMesh"),
        InstanceMethod<&Mesh::CalculateMesh_async>("CalculateMesh_async"),
        InstanceMethod<&Mesh::GetItemName>("GetItemName"),
        InstanceMethod<&Mesh::GetItemName_async>("GetItemName_async"),
        InstanceMethod<&Mesh::SetItemName>("SetItemName"),
        InstanceMethod<&Mesh::SetItemName_async>("SetItemName_async"),
        InstanceMethod<&Mesh::RebuildItem>("RebuildItem"),
        InstanceMethod<&Mesh::RebuildItem_async>("RebuildItem_async"),
        InstanceMethod<&Mesh::GetItemByPath>("GetItemByPath"),
        InstanceMethod<&Mesh::GetItemByPath_async>("GetItemByPath_async"),
        InstanceMethod<&Mesh::IsA>("IsA"),
        InstanceMethod<&Mesh::IsA_async>("IsA_async"),
        InstanceMethod<&Mesh::Type>("Type"),
        InstanceMethod<&Mesh::Type_async>("Type_async"),
        InstanceMethod<&Mesh::Family>("Family"),
        InstanceMethod<&Mesh::Family_async>("Family_async"),
        InstanceMethod<&Mesh::Transform>("Transform"),
        InstanceMethod<&Mesh::Transform_async>("Transform_async"),
        InstanceMethod<&Mesh::Move>("Move"),
        InstanceMethod<&Mesh::Move_async>("Move_async"),
        InstanceMethod<&Mesh::Rotate>("Rotate"),
        InstanceMethod<&Mesh::Rotate_async>("Rotate_async"),
        InstanceMethod<&Mesh::Refresh>("Refresh"),
        InstanceMethod<&Mesh::Refresh_async>("Refresh_async"),
        InstanceMethod<&Mesh::Duplicate>("Duplicate"),
        InstanceMethod<&Mesh::Duplicate_async>("Duplicate_async"),
        InstanceMethod<&Mesh::AddYourGabaritTo>("AddYourGabaritTo"),
        InstanceMethod<&Mesh::AddYourGabaritTo_async>("AddYourGabaritTo_async"),
        InstanceMethod<&Mesh::GetUseCount>("GetUseCount"),
        InstanceMethod<&Mesh::GetUseCount_async>("GetUseCount_async"),
        InstanceMethod<&Mesh::AddRef>("AddRef"),
        InstanceMethod<&Mesh::AddRef_async>("AddRef_async"),
        InstanceMethod<&Mesh::SetStyle>("SetStyle"),
        InstanceMethod<&Mesh::SetStyle_async>("SetStyle_async"),
        InstanceMethod<&Mesh::GetStyle>("GetStyle"),
        InstanceMethod<&Mesh::GetStyle_async>("GetStyle_async"),
        InstanceMethod<&Mesh::SetColor>("SetColor"),
        InstanceMethod<&Mesh::SetColor_async>("SetColor_async"),
        InstanceMethod<&Mesh::GetColor>("GetColor"),
        InstanceMethod<&Mesh::GetColor_async>("GetColor_async"),
        InstanceMethod<&Mesh::AttributesConvert>("AttributesConvert"),
        InstanceMethod<&Mesh::AttributesConvert_async>("AttributesConvert_async"),
        InstanceMethod<&Mesh::GetCreatorsCount>("GetCreatorsCount"),
        InstanceMethod<&Mesh::GetCreatorsCount_async>("GetCreatorsCount_async"),
        InstanceMethod<&Mesh::GetCreator>("GetCreator"),
        InstanceMethod<&Mesh::GetCreator_async>("GetCreator_async"),
        InstanceMethod<&Mesh::SetCreator>("SetCreator"),
        InstanceMethod<&Mesh::SetCreator_async>("SetCreator_async"),
        InstanceMethod<&Mesh::DetachCreator>("DetachCreator"),
        InstanceMethod<&Mesh::DetachCreator_async>("DetachCreator_async"),
        InstanceMethod<&Mesh::AddCreator>("AddCreator"),
        InstanceMethod<&Mesh::AddCreator_async>("AddCreator_async"),
        InstanceMethod<&Mesh::GetCreators>("GetCreators"),
        InstanceMethod<&Mesh::GetCreators_async>("GetCreators_async"),
        InstanceMethod<&Mesh::DeleteCreator>("DeleteCreator"),
        InstanceMethod<&Mesh::DeleteCreator_async>("DeleteCreator_async"),
        InstanceMethod<&Mesh::GetActiveCreatorsCount>("GetActiveCreatorsCount"),
        InstanceMethod<&Mesh::GetActiveCreatorsCount_async>("GetActiveCreatorsCount_async"),
            InstanceMethod<&Mesh::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Mesh", func);

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

Mesh::Mesh(const Napi::CallbackInfo& info) : Napi::ObjectWrap<Mesh>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        if (info.Length() == 1&&                ((
                info[0].IsBoolean()
        )   
)


        ) {
                 bool doExact = info[0].ToBoolean();


                MbMesh *underlying = new MbMesh(doExact);
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

Napi::Object Mesh::NewInstance(Napi::Env env, MbMesh *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Mesh");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Mesh *unwrapped = Mesh::Unwrap(inst);
underlying->AddRef();    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Mesh::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Mesh");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}




        Napi::Value Mesh::GetMeshType(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeSpaceType  _result = _underlying->GetMeshType
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Mesh::GetMeshType_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Mesh_GetMeshType_AsyncWorker* asyncWorker = new Mesh_GetMeshType_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::ConvertAllToTriangles(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->ConvertAllToTriangles
(

);



    return env.Undefined();


        }

    Napi::Value Mesh::ConvertAllToTriangles_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Mesh_ConvertAllToTriangles_AsyncWorker* asyncWorker = new Mesh_ConvertAllToTriangles_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::IsClosed(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->IsClosed
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value Mesh::IsClosed_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Mesh_IsClosed_AsyncWorker* asyncWorker = new Mesh_IsClosed_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::AddGrid(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbGrid * _result = _underlying->AddGrid
(

);



    Napi::Value _to;

            if (_result != NULL) {
        _to = Grid::NewInstance(env, (MbGrid *)_result);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value Mesh::AddGrid_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Mesh_AddGrid_AsyncWorker* asyncWorker = new Mesh_AddGrid_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::AddExistingGrid(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Grid::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Grid gr is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'gr'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Grid *gr_ = Grid::Unwrap(info[0].ToObject());
        
         MbGrid & gr =*gr_->_underlying;
        



_underlying->AddGrid
(
        gr

);



    return env.Undefined();


        }

    Napi::Value Mesh::AddExistingGrid_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Grid::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Grid gr is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'gr'"));
                return deferred.Promise();
        }
        const class Grid *gr_ = Grid::Unwrap(info[0].ToObject());
        
         MbGrid & gr =*gr_->_underlying;
        

        Mesh_AddExistingGrid_AsyncWorker* asyncWorker = new Mesh_AddExistingGrid_AsyncWorker(
_underlying,            deferred
,
                
                gr        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::GetGrids(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                    RPArray<MbGrid> *result = new RPArray<MbGrid>;




_underlying->GetGrids
(
        *result

);



    Napi::Value _to;

            Napi::Array arr_result = Napi::Array::New(env);
    for (size_t i = 0; i < result->Count(); i++) {
            arr_result[i] = Grid::NewInstance(env,
                
                    (*result)[i]
                
            );
    }
    _to = arr_result;

            return _to;


        }

    Napi::Value Mesh::GetGrids_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Mesh_GetGrids_AsyncWorker* asyncWorker = new Mesh_GetGrids_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::CreateGridSearchTrees(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            

             bool forcedNew = info[0].ToBoolean();



_underlying->CreateGridSearchTrees
(
        info.Length() == 0 || info[0].IsNull() ? false : forcedNew

);



    return env.Undefined();


        }

    Napi::Value Mesh::CreateGridSearchTrees_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                     bool forcedNew = info[0].ToBoolean();

        Mesh_CreateGridSearchTrees_AsyncWorker* asyncWorker = new Mesh_CreateGridSearchTrees_AsyncWorker(
_underlying,            deferred
,
                
                forcedNew        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::LineIntersection(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(FloatAxis3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "FloatAxis3D line is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    MbFloatPoint3D *crossPnt = new MbFloatPoint3D;
        float tRes;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'line'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class FloatAxis3D *line_ = FloatAxis3D::Unwrap(info[0].ToObject());
        
        const MbFloatAxis3D & line =*line_->_underlying;
        



 bool  _result = _underlying->LineIntersection
(
        line
,        *crossPnt
,        tRes

);



        Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

        _toReturn.Set(Napi::String::New(env, "_result"), _to);
            if (crossPnt != NULL) {
        _to = FloatPoint3D::NewInstance(env, (MbFloatPoint3D *)crossPnt);
    } else {
        _to = env.Null();
    }

        _toReturn.Set(Napi::String::New(env, "crossPnt"), _to);
            _to = Napi::Number::New(env, tRes);

        _toReturn.Set(Napi::String::New(env, "tRes"), _to);
            return _toReturn;


        }

    Napi::Value Mesh::LineIntersection_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(FloatAxis3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "FloatAxis3D line is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'line'"));
                return deferred.Promise();
        }
        const class FloatAxis3D *line_ = FloatAxis3D::Unwrap(info[0].ToObject());
        
        const MbFloatAxis3D & line =*line_->_underlying;
        

        Mesh_LineIntersection_AsyncWorker* asyncWorker = new Mesh_LineIntersection_AsyncWorker(
_underlying,            deferred
,
                
                line        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::NearestMesh(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "SpaceType sType is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    Napi::Error::New(env, "TopologyType tType is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 2 || !(
              info[2].IsNumber()
)) {
                    Napi::Error::New(env, "PlaneType pType is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 3 || !(
              (info[3].IsObject() && info[3].ToObject().InstanceOf(Axis3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Axis3D axis is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 4 || !(
              info[4].IsNumber()
)) {
                    Napi::Error::New(env, "number maxDistance is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 5 || !(
              info[5].IsBoolean()
)) {
                    Napi::Error::New(env, "boolean gridPriority is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    double t;
        double dMin;
         MbItem * find = NULL;
        SimpleName findName;
         MbRefItem * element = NULL;
        SimpleName elementName;
        MbPath *path = new MbPath;
        MbMatrix3D *from = new MbMatrix3D;


            const MbeSpaceType sType = static_cast<MbeSpaceType>(info[0].ToNumber().Uint32Value());

            const MbeTopologyType tType = static_cast<MbeTopologyType>(info[1].ToNumber().Uint32Value());

            const MbePlaneType pType = static_cast<MbePlaneType>(info[2].ToNumber().Uint32Value());

                if (info[3].IsNull() || info[3].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'axis'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Axis3D *axis_ = Axis3D::Unwrap(info[3].ToObject());
        
        const MbAxis3D & axis =*axis_->_underlying;
        

             double maxDistance = info[4].ToNumber().DoubleValue();

             bool gridPriority = info[5].ToBoolean();



 bool  success = _underlying->NearestMesh
(
        sType
,        tType
,        pType
,        axis
,        maxDistance
,        gridPriority
,        t
,        dMin
,        find
,        findName
,        element
,        elementName
,        *path
,        *from

);



        Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

            _to = Napi::Boolean::New(env, success);

        _toReturn.Set(Napi::String::New(env, "success"), _to);
            _to = Napi::Number::New(env, t);

        _toReturn.Set(Napi::String::New(env, "t"), _to);
            _to = Napi::Number::New(env, dMin);

        _toReturn.Set(Napi::String::New(env, "dMin"), _to);
            if (find != NULL) {
        _to = Item::NewInstance(env, (MbItem *)find);
    } else {
        _to = env.Null();
    }

        _toReturn.Set(Napi::String::New(env, "find"), _to);
            _to = Napi::Number::New(env, findName);

        _toReturn.Set(Napi::String::New(env, "findName"), _to);
            if (element != NULL) {
        _to = RefItem::NewInstance(env, (MbRefItem *)element);
    } else {
        _to = env.Null();
    }

        _toReturn.Set(Napi::String::New(env, "element"), _to);
            _to = Napi::Number::New(env, elementName);

        _toReturn.Set(Napi::String::New(env, "elementName"), _to);
            if (path != NULL) {
        _to = Path::NewInstance(env, (MbPath *)path);
    } else {
        _to = env.Null();
    }

        _toReturn.Set(Napi::String::New(env, "path"), _to);
            if (from != NULL) {
        _to = Matrix3D::NewInstance(env, (MbMatrix3D *)from);
    } else {
        _to = env.Null();
    }

        _toReturn.Set(Napi::String::New(env, "from"), _to);
            return _toReturn;


        }

    Napi::Value Mesh::NearestMesh_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "SpaceType sType is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "TopologyType tType is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 2 || !(
              info[2].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "PlaneType pType is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 3 || !(
              (info[3].IsObject() && info[3].ToObject().InstanceOf(Axis3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Axis3D axis is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 4 || !(
              info[4].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number maxDistance is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 5 || !(
              info[5].IsBoolean()
)) {
                    deferred.Reject(Napi::String::New(env, "boolean gridPriority is required."));
                    return deferred.Promise();
            }


                    const MbeSpaceType sType = static_cast<MbeSpaceType>(info[0].ToNumber().Uint32Value());

                    const MbeTopologyType tType = static_cast<MbeTopologyType>(info[1].ToNumber().Uint32Value());

                    const MbePlaneType pType = static_cast<MbePlaneType>(info[2].ToNumber().Uint32Value());

                        if (info[3].IsNull() || info[3].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'axis'"));
                return deferred.Promise();
        }
        const class Axis3D *axis_ = Axis3D::Unwrap(info[3].ToObject());
        
        const MbAxis3D & axis =*axis_->_underlying;
        

                     double maxDistance = info[4].ToNumber().DoubleValue();

                     bool gridPriority = info[5].ToBoolean();

        Mesh_NearestMesh_AsyncWorker* asyncWorker = new Mesh_NearestMesh_AsyncWorker(
_underlying,            deferred
,
                
                sType,
                
                tType,
                
                pType,
                
                axis,
                
                maxDistance,
                
                gridPriority        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::CreateMesh(const Napi::CallbackInfo& info) {
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

    Napi::Value Mesh::CreateMesh_async(const Napi::CallbackInfo& info) {
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

        Mesh_CreateMesh_AsyncWorker* asyncWorker = new Mesh_CreateMesh_AsyncWorker(
_underlying,            deferred
,
                
                stepData,
                
                note,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::CalculateMesh(const Napi::CallbackInfo& info) {
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

    Napi::Value Mesh::CalculateMesh_async(const Napi::CallbackInfo& info) {
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
        

        Mesh_CalculateMesh_AsyncWorker* asyncWorker = new Mesh_CalculateMesh_AsyncWorker(
_underlying,            deferred
,
                
                stepData,
                
                note        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::GetItemName(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 SimpleName  _result = _underlying->GetItemName
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Mesh::GetItemName_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Mesh_GetItemName_AsyncWorker* asyncWorker = new Mesh_GetItemName_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::SetItemName(const Napi::CallbackInfo& info) {
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

    Napi::Value Mesh::SetItemName_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "SimpleName name is required."));
                    return deferred.Promise();
            }


                     int name = info[0].ToNumber().Int64Value();

        Mesh_SetItemName_AsyncWorker* asyncWorker = new Mesh_SetItemName_AsyncWorker(
_underlying,            deferred
,
                
                name        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::RebuildItem(const Napi::CallbackInfo& info) {
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

    Napi::Value Mesh::RebuildItem_async(const Napi::CallbackInfo& info) {
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

        Mesh_RebuildItem_AsyncWorker* asyncWorker = new Mesh_RebuildItem_AsyncWorker(
_underlying,            deferred
,
                
                sameShell,
                
                progInd        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::GetItemByPath(const Napi::CallbackInfo& info) {
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

    Napi::Value Mesh::GetItemByPath_async(const Napi::CallbackInfo& info) {
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

        Mesh_GetItemByPath_AsyncWorker* asyncWorker = new Mesh_GetItemByPath_AsyncWorker(
_underlying,            deferred
,
                
                path,
                
                ind,
                
                from,
                
                currInd        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::IsA(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeSpaceType  _result = _underlying->IsA
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Mesh::IsA_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Mesh_IsA_AsyncWorker* asyncWorker = new Mesh_IsA_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::Type(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeSpaceType  _result = _underlying->Type
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Mesh::Type_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Mesh_Type_AsyncWorker* asyncWorker = new Mesh_Type_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::Family(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeSpaceType  _result = _underlying->Family
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Mesh::Family_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Mesh_Family_AsyncWorker* asyncWorker = new Mesh_Family_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::Transform(const Napi::CallbackInfo& info) {
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

    Napi::Value Mesh::Transform_async(const Napi::CallbackInfo& info) {
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

        Mesh_Transform_AsyncWorker* asyncWorker = new Mesh_Transform_AsyncWorker(
_underlying,            deferred
,
                
                mat,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::Move(const Napi::CallbackInfo& info) {
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

    Napi::Value Mesh::Move_async(const Napi::CallbackInfo& info) {
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

        Mesh_Move_AsyncWorker* asyncWorker = new Mesh_Move_AsyncWorker(
_underlying,            deferred
,
                
                v,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::Rotate(const Napi::CallbackInfo& info) {
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

    Napi::Value Mesh::Rotate_async(const Napi::CallbackInfo& info) {
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

        Mesh_Rotate_AsyncWorker* asyncWorker = new Mesh_Rotate_AsyncWorker(
_underlying,            deferred
,
                
                axis,
                
                angle,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::Refresh(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->Refresh
(

);



    return env.Undefined();


        }

    Napi::Value Mesh::Refresh_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Mesh_Refresh_AsyncWorker* asyncWorker = new Mesh_Refresh_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::Duplicate(const Napi::CallbackInfo& info) {
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

    Napi::Value Mesh::Duplicate_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                            MbRegDuplicate * iReg = NULL;
        if (!(info[0].IsNull() || info[0].IsUndefined())) {
            RegDuplicate *iReg_ = RegDuplicate::Unwrap(info[0].ToObject());
                iReg =   iReg_->_underlying;
        }

        Mesh_Duplicate_AsyncWorker* asyncWorker = new Mesh_Duplicate_AsyncWorker(
_underlying,            deferred
,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::AddYourGabaritTo(const Napi::CallbackInfo& info) {
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

    Napi::Value Mesh::AddYourGabaritTo_async(const Napi::CallbackInfo& info) {
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
        

        Mesh_AddYourGabaritTo_AsyncWorker* asyncWorker = new Mesh_AddYourGabaritTo_AsyncWorker(
_underlying,            deferred
,
                
                cube        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::GetUseCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 refcount_t  _result = _underlying->GetUseCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Mesh::GetUseCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Mesh_GetUseCount_AsyncWorker* asyncWorker = new Mesh_GetUseCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::AddRef(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->AddRef
(

);



    return env.Undefined();


        }

    Napi::Value Mesh::AddRef_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Mesh_AddRef_AsyncWorker* asyncWorker = new Mesh_AddRef_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::SetStyle(const Napi::CallbackInfo& info) {
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

    Napi::Value Mesh::SetStyle_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "int s is required."));
                    return deferred.Promise();
            }


                     int s = info[0].ToNumber().Int64Value();

        Mesh_SetStyle_AsyncWorker* asyncWorker = new Mesh_SetStyle_AsyncWorker(
_underlying,            deferred
,
                
                s        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::GetStyle(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 int  _result = _underlying->GetStyle
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Mesh::GetStyle_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Mesh_GetStyle_AsyncWorker* asyncWorker = new Mesh_GetStyle_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::SetColor(const Napi::CallbackInfo& info) {
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

    Napi::Value Mesh::SetColor_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "uint32 c is required."));
                    return deferred.Promise();
            }


                     int c = info[0].ToNumber().Int64Value();

        Mesh_SetColor_AsyncWorker* asyncWorker = new Mesh_SetColor_AsyncWorker(
_underlying,            deferred
,
                
                c        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::GetColor(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 uint32  _result = _underlying->GetColor
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Mesh::GetColor_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Mesh_GetColor_AsyncWorker* asyncWorker = new Mesh_GetColor_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::AttributesConvert(const Napi::CallbackInfo& info) {
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

    Napi::Value Mesh::AttributesConvert_async(const Napi::CallbackInfo& info) {
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
        

        Mesh_AttributesConvert_AsyncWorker* asyncWorker = new Mesh_AttributesConvert_AsyncWorker(
_underlying,            deferred
,
                
                other        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::GetCreatorsCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 size_t  _result = _underlying->GetCreatorsCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Mesh::GetCreatorsCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Mesh_GetCreatorsCount_AsyncWorker* asyncWorker = new Mesh_GetCreatorsCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::GetCreator(const Napi::CallbackInfo& info) {
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

    Napi::Value Mesh::GetCreator_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number ind is required."));
                    return deferred.Promise();
            }


                     size_t ind = info[0].ToNumber().Int64Value();

        Mesh_GetCreator_AsyncWorker* asyncWorker = new Mesh_GetCreator_AsyncWorker(
_underlying,            deferred
,
                
                ind        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::SetCreator(const Napi::CallbackInfo& info) {
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

    Napi::Value Mesh::SetCreator_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number ind is required."));
                    return deferred.Promise();
            }


                     size_t ind = info[0].ToNumber().Int64Value();

        Mesh_SetCreator_AsyncWorker* asyncWorker = new Mesh_SetCreator_AsyncWorker(
_underlying,            deferred
,
                
                ind        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::DetachCreator(const Napi::CallbackInfo& info) {
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

    Napi::Value Mesh::DetachCreator_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number ind is required."));
                    return deferred.Promise();
            }


                     size_t ind = info[0].ToNumber().Int64Value();

        Mesh_DetachCreator_AsyncWorker* asyncWorker = new Mesh_DetachCreator_AsyncWorker(
_underlying,            deferred
,
                
                ind        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::AddCreator(const Napi::CallbackInfo& info) {
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

    Napi::Value Mesh::AddCreator_async(const Napi::CallbackInfo& info) {
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

        Mesh_AddCreator_AsyncWorker* asyncWorker = new Mesh_AddCreator_AsyncWorker(
_underlying,            deferred
,
                
                creator,
                
                addSame        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::GetCreators(const Napi::CallbackInfo& info) {
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

    Napi::Value Mesh::GetCreators_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Mesh_GetCreators_AsyncWorker* asyncWorker = new Mesh_GetCreators_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::DeleteCreator(const Napi::CallbackInfo& info) {
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

    Napi::Value Mesh::DeleteCreator_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number ind is required."));
                    return deferred.Promise();
            }


                     size_t ind = info[0].ToNumber().Int64Value();

        Mesh_DeleteCreator_AsyncWorker* asyncWorker = new Mesh_DeleteCreator_AsyncWorker(
_underlying,            deferred
,
                
                ind        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Mesh::GetActiveCreatorsCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 size_t  _result = _underlying->GetActiveCreatorsCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Mesh::GetActiveCreatorsCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Mesh_GetActiveCreatorsCount_AsyncWorker* asyncWorker = new Mesh_GetActiveCreatorsCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }



    Napi::Value Mesh::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }

Mesh::~Mesh() {
    // std::cout << "calling ::DeleteItem on Mesh for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

    Mesh_GetMeshType_AsyncWorker::Mesh_GetMeshType_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Mesh_GetMeshType_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeSpaceType  _result = _underlying->GetMeshType(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Mesh_GetMeshType_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeSpaceType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Mesh_GetMeshType_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_ConvertAllToTriangles_AsyncWorker::Mesh_ConvertAllToTriangles_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Mesh_ConvertAllToTriangles_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->ConvertAllToTriangles(
        );



        
        ExitParallelRegion();
    }

    void Mesh_ConvertAllToTriangles_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Mesh_ConvertAllToTriangles_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_IsClosed_AsyncWorker::Mesh_IsClosed_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Mesh_IsClosed_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsClosed(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Mesh_IsClosed_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void Mesh_IsClosed_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_AddGrid_AsyncWorker::Mesh_AddGrid_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Mesh_AddGrid_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbGrid * _result = _underlying->AddGrid(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Mesh_AddGrid_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbGrid * _result = this->_result;
                if (_result != NULL) {
        _to = Grid::NewInstance(env, (MbGrid *)_result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void Mesh_AddGrid_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_AddExistingGrid_AsyncWorker::Mesh_AddExistingGrid_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
,
                         MbGrid & gr    )
        :_underlying(_underlying),PromiseWorker(d),
                        gr(gr)
{};

    void Mesh_AddExistingGrid_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddGrid(
                        gr
        );



        
        ExitParallelRegion();
    }

    void Mesh_AddExistingGrid_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Mesh_AddExistingGrid_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_GetGrids_AsyncWorker::Mesh_GetGrids_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Mesh_GetGrids_AsyncWorker::Execute() {
        EnterParallelRegion();

                RPArray<MbGrid> *result = new RPArray<MbGrid>;


        
        _underlying->GetGrids(
                        *result
        );


                this->result = result;

        
        ExitParallelRegion();
    }

    void Mesh_GetGrids_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             RPArray<MbGrid> * result = this->result;
                Napi::Array arr_result = Napi::Array::New(env);
    for (size_t i = 0; i < result->Count(); i++) {
            arr_result[i] = Grid::NewInstance(env,
                
                    (*result)[i]
                
            );
    }
    _to = arr_result;

            deferred.Resolve(_to);
    }

    void Mesh_GetGrids_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_CreateGridSearchTrees_AsyncWorker::Mesh_CreateGridSearchTrees_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
,
                         bool  forcedNew    )
        :_underlying(_underlying),PromiseWorker(d),
                        forcedNew(forcedNew)
{};

    void Mesh_CreateGridSearchTrees_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->CreateGridSearchTrees(
                        forcedNew
        );



        
        ExitParallelRegion();
    }

    void Mesh_CreateGridSearchTrees_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Mesh_CreateGridSearchTrees_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_LineIntersection_AsyncWorker::Mesh_LineIntersection_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbFloatAxis3D & line    )
        :_underlying(_underlying),PromiseWorker(d),
                        line(line)
{};

    void Mesh_LineIntersection_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbFloatPoint3D *crossPnt = new MbFloatPoint3D;
        float tRes;


        
         bool  _result = _underlying->LineIntersection(
                        line
,                        *crossPnt
,                        tRes
        );


                this->_result = _result;
                this->crossPnt = crossPnt;
                this->tRes = tRes;

        
        ExitParallelRegion();
    }

    void Mesh_LineIntersection_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            Napi::Object _toReturn = Napi::Object::New(env);

                 bool  _result = this->_result;
                    _to = Napi::Boolean::New(env, _result);

                _toReturn.Set(Napi::String::New(env, "_result"), _to);
                 MbFloatPoint3D * crossPnt = this->crossPnt;
                    if (crossPnt != NULL) {
        _to = FloatPoint3D::NewInstance(env, (MbFloatPoint3D *)crossPnt);
    } else {
        _to = env.Null();
    }

                _toReturn.Set(Napi::String::New(env, "crossPnt"), _to);
                 float  tRes = this->tRes;
                    _to = Napi::Number::New(env, tRes);

                _toReturn.Set(Napi::String::New(env, "tRes"), _to);

            deferred.Resolve(_toReturn);
    }

    void Mesh_LineIntersection_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_NearestMesh_AsyncWorker::Mesh_NearestMesh_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
,
                         MbeSpaceType  sType,
                         MbeTopologyType  tType,
                         MbePlaneType  pType,
                        const MbAxis3D & axis,
                         double  maxDistance,
                         bool  gridPriority    )
        :_underlying(_underlying),PromiseWorker(d),
                        sType(sType)
,
                        tType(tType)
,
                        pType(pType)
,
                        axis(axis)
,
                        maxDistance(maxDistance)
,
                        gridPriority(gridPriority)
{};

    void Mesh_NearestMesh_AsyncWorker::Execute() {
        EnterParallelRegion();

                double t;
        double dMin;
         MbItem * find = NULL;
        SimpleName findName;
         MbRefItem * element = NULL;
        SimpleName elementName;
        MbPath *path = new MbPath;
        MbMatrix3D *from = new MbMatrix3D;


        
         bool  success = _underlying->NearestMesh(
                        sType
,                        tType
,                        pType
,                        axis
,                        maxDistance
,                        gridPriority
,                        t
,                        dMin
,                        find
,                        findName
,                        element
,                        elementName
,                        *path
,                        *from
        );


                this->success = success;
                this->t = t;
                this->dMin = dMin;
                this->find = find;
                this->findName = findName;
                this->element = element;
                this->elementName = elementName;
                this->path = path;
                this->from = from;

        
        ExitParallelRegion();
    }

    void Mesh_NearestMesh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            Napi::Object _toReturn = Napi::Object::New(env);

                 bool  success = this->success;
                    _to = Napi::Boolean::New(env, success);

                _toReturn.Set(Napi::String::New(env, "success"), _to);
                 double  t = this->t;
                    _to = Napi::Number::New(env, t);

                _toReturn.Set(Napi::String::New(env, "t"), _to);
                 double  dMin = this->dMin;
                    _to = Napi::Number::New(env, dMin);

                _toReturn.Set(Napi::String::New(env, "dMin"), _to);
                 MbItem * find = this->find;
                    if (find != NULL) {
        _to = Item::NewInstance(env, (MbItem *)find);
    } else {
        _to = env.Null();
    }

                _toReturn.Set(Napi::String::New(env, "find"), _to);
                 SimpleName  findName = this->findName;
                    _to = Napi::Number::New(env, findName);

                _toReturn.Set(Napi::String::New(env, "findName"), _to);
                 MbRefItem * element = this->element;
                    if (element != NULL) {
        _to = RefItem::NewInstance(env, (MbRefItem *)element);
    } else {
        _to = env.Null();
    }

                _toReturn.Set(Napi::String::New(env, "element"), _to);
                 SimpleName  elementName = this->elementName;
                    _to = Napi::Number::New(env, elementName);

                _toReturn.Set(Napi::String::New(env, "elementName"), _to);
                 MbPath * path = this->path;
                    if (path != NULL) {
        _to = Path::NewInstance(env, (MbPath *)path);
    } else {
        _to = env.Null();
    }

                _toReturn.Set(Napi::String::New(env, "path"), _to);
                 MbMatrix3D * from = this->from;
                    if (from != NULL) {
        _to = Matrix3D::NewInstance(env, (MbMatrix3D *)from);
    } else {
        _to = env.Null();
    }

                _toReturn.Set(Napi::String::New(env, "from"), _to);

            deferred.Resolve(_toReturn);
    }

    void Mesh_NearestMesh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_CreateMesh_AsyncWorker::Mesh_CreateMesh_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
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

    void Mesh_CreateMesh_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbItem * _result = _underlying->CreateMesh(
                        stepData
,                        note
,                        iReg
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Mesh_CreateMesh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Mesh_CreateMesh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_CalculateMesh_AsyncWorker::Mesh_CalculateMesh_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbStepData & stepData,
                        const MbFormNote & note    )
        :_underlying(_underlying),PromiseWorker(d),
                        stepData(stepData)
,
                        note(note)
{};

    void Mesh_CalculateMesh_AsyncWorker::Execute() {
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

    void Mesh_CalculateMesh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Mesh_CalculateMesh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_GetItemName_AsyncWorker::Mesh_GetItemName_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Mesh_GetItemName_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         SimpleName  _result = _underlying->GetItemName(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Mesh_GetItemName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             SimpleName  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Mesh_GetItemName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_SetItemName_AsyncWorker::Mesh_SetItemName_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
,
                         SimpleName  name    )
        :_underlying(_underlying),PromiseWorker(d),
                        name(name)
{};

    void Mesh_SetItemName_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetItemName(
                        name
        );



        
        ExitParallelRegion();
    }

    void Mesh_SetItemName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Mesh_SetItemName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_RebuildItem_AsyncWorker::Mesh_RebuildItem_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
,
                         MbeCopyMode  sameShell,
                         ProgressIndicator * progInd    )
        :_underlying(_underlying),PromiseWorker(d),
                        sameShell(sameShell)
,
                        progInd(progInd)
{};

    void Mesh_RebuildItem_AsyncWorker::Execute() {
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

    void Mesh_RebuildItem_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Mesh_RebuildItem_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_GetItemByPath_AsyncWorker::Mesh_GetItemByPath_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
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

    void Mesh_GetItemByPath_AsyncWorker::Execute() {
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

    void Mesh_GetItemByPath_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Mesh_GetItemByPath_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_IsA_AsyncWorker::Mesh_IsA_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Mesh_IsA_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeSpaceType  _result = _underlying->IsA(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Mesh_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeSpaceType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Mesh_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_Type_AsyncWorker::Mesh_Type_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Mesh_Type_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeSpaceType  _result = _underlying->Type(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Mesh_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeSpaceType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Mesh_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_Family_AsyncWorker::Mesh_Family_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Mesh_Family_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeSpaceType  _result = _underlying->Family(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Mesh_Family_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeSpaceType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Mesh_Family_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_Transform_AsyncWorker::Mesh_Transform_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbMatrix3D & mat,
                         MbRegTransform * iReg    )
        :_underlying(_underlying),PromiseWorker(d),
                        mat(mat)
,
                        iReg(iReg)
{};

    void Mesh_Transform_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Transform(
                        mat
,                        iReg
        );



        
        ExitParallelRegion();
    }

    void Mesh_Transform_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Mesh_Transform_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_Move_AsyncWorker::Mesh_Move_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbVector3D & v,
                         MbRegTransform * iReg    )
        :_underlying(_underlying),PromiseWorker(d),
                        v(v)
,
                        iReg(iReg)
{};

    void Mesh_Move_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Move(
                        v
,                        iReg
        );



        
        ExitParallelRegion();
    }

    void Mesh_Move_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Mesh_Move_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_Rotate_AsyncWorker::Mesh_Rotate_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
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

    void Mesh_Rotate_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Rotate(
                        axis
,                        angle
,                        iReg
        );



        
        ExitParallelRegion();
    }

    void Mesh_Rotate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Mesh_Rotate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_Refresh_AsyncWorker::Mesh_Refresh_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Mesh_Refresh_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Refresh(
        );



        
        ExitParallelRegion();
    }

    void Mesh_Refresh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Mesh_Refresh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_Duplicate_AsyncWorker::Mesh_Duplicate_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
,
                         MbRegDuplicate * iReg    )
        :_underlying(_underlying),PromiseWorker(d),
                        iReg(iReg)
{};

    void Mesh_Duplicate_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbSpaceItem & _result = _underlying->Duplicate(
                        iReg
        );


                this->_result = (MbSpaceItem *)&(_result);

        
        ExitParallelRegion();
    }

    void Mesh_Duplicate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbSpaceItem * _result = this->_result;
                _to = SpaceItem::NewInstance(env, (MbSpaceItem *)&(_result));

            deferred.Resolve(_to);
    }

    void Mesh_Duplicate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_AddYourGabaritTo_AsyncWorker::Mesh_AddYourGabaritTo_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
,
                         MbCube & cube    )
        :_underlying(_underlying),PromiseWorker(d),
                        cube(cube)
{};

    void Mesh_AddYourGabaritTo_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddYourGabaritTo(
                        cube
        );



        
        ExitParallelRegion();
    }

    void Mesh_AddYourGabaritTo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Mesh_AddYourGabaritTo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_GetUseCount_AsyncWorker::Mesh_GetUseCount_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Mesh_GetUseCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         refcount_t  _result = _underlying->GetUseCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Mesh_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             refcount_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Mesh_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_AddRef_AsyncWorker::Mesh_AddRef_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Mesh_AddRef_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddRef(
        );



        
        ExitParallelRegion();
    }

    void Mesh_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Mesh_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_SetStyle_AsyncWorker::Mesh_SetStyle_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
,
                         int  s    )
        :_underlying(_underlying),PromiseWorker(d),
                        s(s)
{};

    void Mesh_SetStyle_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetStyle(
                        s
        );



        
        ExitParallelRegion();
    }

    void Mesh_SetStyle_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Mesh_SetStyle_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_GetStyle_AsyncWorker::Mesh_GetStyle_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Mesh_GetStyle_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         int  _result = _underlying->GetStyle(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Mesh_GetStyle_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             int  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Mesh_GetStyle_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_SetColor_AsyncWorker::Mesh_SetColor_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
,
                         uint32  c    )
        :_underlying(_underlying),PromiseWorker(d),
                        c(c)
{};

    void Mesh_SetColor_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetColor(
                        c
        );



        
        ExitParallelRegion();
    }

    void Mesh_SetColor_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Mesh_SetColor_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_GetColor_AsyncWorker::Mesh_GetColor_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Mesh_GetColor_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         uint32  _result = _underlying->GetColor(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Mesh_GetColor_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             uint32  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Mesh_GetColor_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_AttributesConvert_AsyncWorker::Mesh_AttributesConvert_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
,
                         MbGrid & other    )
        :_underlying(_underlying),PromiseWorker(d),
                        other(other)
{};

    void Mesh_AttributesConvert_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AttributesConvert(
                        other
        );



        
        ExitParallelRegion();
    }

    void Mesh_AttributesConvert_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Mesh_AttributesConvert_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_GetCreatorsCount_AsyncWorker::Mesh_GetCreatorsCount_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Mesh_GetCreatorsCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         size_t  _result = _underlying->GetCreatorsCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Mesh_GetCreatorsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             size_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Mesh_GetCreatorsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_GetCreator_AsyncWorker::Mesh_GetCreator_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
,
                         size_t  ind    )
        :_underlying(_underlying),PromiseWorker(d),
                        ind(ind)
{};

    void Mesh_GetCreator_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        const MbCreator * _result = _underlying->GetCreator(
                        ind
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Mesh_GetCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Mesh_GetCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_SetCreator_AsyncWorker::Mesh_SetCreator_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
,
                         size_t  ind    )
        :_underlying(_underlying),PromiseWorker(d),
                        ind(ind)
{};

    void Mesh_SetCreator_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbCreator * _result = _underlying->SetCreator(
                        ind
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Mesh_SetCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Mesh_SetCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_DetachCreator_AsyncWorker::Mesh_DetachCreator_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
,
                         size_t  ind    )
        :_underlying(_underlying),PromiseWorker(d),
                        ind(ind)
{};

    void Mesh_DetachCreator_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbCreator * _result = _underlying->DetachCreator(
                        ind
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Mesh_DetachCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Mesh_DetachCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_AddCreator_AsyncWorker::Mesh_AddCreator_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbCreator * creator,
                         bool  addSame    )
        :_underlying(_underlying),PromiseWorker(d),
                        creator(creator)
,
                        addSame(addSame)
{};

    void Mesh_AddCreator_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->AddCreator(
                        creator
,                        addSame
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Mesh_AddCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void Mesh_AddCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_GetCreators_AsyncWorker::Mesh_GetCreators_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Mesh_GetCreators_AsyncWorker::Execute() {
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

    void Mesh_GetCreators_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Mesh_GetCreators_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_DeleteCreator_AsyncWorker::Mesh_DeleteCreator_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
,
                         size_t  ind    )
        :_underlying(_underlying),PromiseWorker(d),
                        ind(ind)
{};

    void Mesh_DeleteCreator_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->DeleteCreator(
                        ind
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Mesh_DeleteCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void Mesh_DeleteCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Mesh_GetActiveCreatorsCount_AsyncWorker::Mesh_GetActiveCreatorsCount_AsyncWorker(
MbMesh * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Mesh_GetActiveCreatorsCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         size_t  _result = _underlying->GetActiveCreatorsCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Mesh_GetActiveCreatorsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             size_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Mesh_GetActiveCreatorsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

