// This is a generated file, modify: generate/templates/Face.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/Face.h"

#include "tool_mutex.h"

Napi::Object Face::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "Face", {
        InstanceMethod<&Face::GetAnyPointOn>("GetAnyPointOn"),
        InstanceMethod<&Face::GetAnyPointOn_async>("GetAnyPointOn_async"),
        InstanceMethod<&Face::Normal>("Normal"),
        InstanceMethod<&Face::Normal_async>("Normal_async"),
        InstanceMethod<&Face::Point>("Point"),
        InstanceMethod<&Face::Point_async>("Point_async"),
        InstanceMethod<&Face::GetPlacement>("GetPlacement"),
        InstanceMethod<&Face::GetPlacement_async>("GetPlacement_async"),
        InstanceMethod<&Face::GetPlanePlacement>("GetPlanePlacement"),
        InstanceMethod<&Face::GetPlanePlacement_async>("GetPlanePlacement_async"),
        InstanceMethod<&Face::GetControlPlacement>("GetControlPlacement"),
        InstanceMethod<&Face::GetControlPlacement_async>("GetControlPlacement_async"),
        InstanceMethod<&Face::GetSurfacePlacement>("GetSurfacePlacement"),
        InstanceMethod<&Face::GetSurfacePlacement_async>("GetSurfacePlacement_async"),
        InstanceMethod<&Face::OrientPlacement>("OrientPlacement"),
        InstanceMethod<&Face::OrientPlacement_async>("OrientPlacement_async"),
        InstanceMethod<&Face::NearPointProjection>("NearPointProjection"),
        InstanceMethod<&Face::NearPointProjection_async>("NearPointProjection_async"),
        InstanceMethod<&Face::GetFaceParam>("GetFaceParam"),
        InstanceMethod<&Face::GetFaceParam_async>("GetFaceParam_async"),
        InstanceMethod<&Face::GetSurfaceParam>("GetSurfaceParam"),
        InstanceMethod<&Face::GetSurfaceParam_async>("GetSurfaceParam_async"),
        InstanceMethod<&Face::GetOuterEdges>("GetOuterEdges"),
        InstanceMethod<&Face::GetOuterEdges_async>("GetOuterEdges_async"),
        InstanceMethod<&Face::GetEdges>("GetEdges"),
        InstanceMethod<&Face::GetEdges_async>("GetEdges_async"),
        InstanceMethod<&Face::IsSame>("IsSame"),
        InstanceMethod<&Face::IsSame_async>("IsSame_async"),
        InstanceMethod<&Face::GetNeighborFaces>("GetNeighborFaces"),
        InstanceMethod<&Face::GetNeighborFaces_async>("GetNeighborFaces_async"),
        InstanceMethod<&Face::GetBoundaryEdges>("GetBoundaryEdges"),
        InstanceMethod<&Face::GetBoundaryEdges_async>("GetBoundaryEdges_async"),
        InstanceMethod<&Face::GetSurfaceCurvesData>("GetSurfaceCurvesData"),
        InstanceMethod<&Face::GetSurfaceCurvesData_async>("GetSurfaceCurvesData_async"),
        InstanceMethod<&Face::HasNeighborFace>("HasNeighborFace"),
        InstanceMethod<&Face::HasNeighborFace_async>("HasNeighborFace_async"),
        InstanceMethod<&Face::GetLoopsCount>("GetLoopsCount"),
        InstanceMethod<&Face::GetLoopsCount_async>("GetLoopsCount_async"),
        InstanceMethod<&Face::GetSurface>("GetSurface"),
        InstanceMethod<&Face::GetSurface_async>("GetSurface_async"),
        InstanceMethod<&Face::GetLoop>("GetLoop"),
        InstanceMethod<&Face::GetLoop_async>("GetLoop_async"),
        InstanceMethod<&Face::IsSameSense>("IsSameSense"),
        InstanceMethod<&Face::IsSameSense_async>("IsSameSense_async"),
        InstanceMethod<&Face::DataDuplicate>("DataDuplicate"),
        InstanceMethod<&Face::DataDuplicate_async>("DataDuplicate_async"),
        InstanceMethod<&Face::IsPlanar>("IsPlanar"),
        InstanceMethod<&Face::IsPlanar_async>("IsPlanar_async"),
        InstanceMethod<&Face::GetCylinderAxis>("GetCylinderAxis"),
        InstanceMethod<&Face::GetCylinderAxis_async>("GetCylinderAxis_async"),
        InstanceMethod<&Face::UpdateSurfaceBounds>("UpdateSurfaceBounds"),
        InstanceMethod<&Face::UpdateSurfaceBounds_async>("UpdateSurfaceBounds_async"),
        InstanceMethod<&Face::IsOwnChangedItem>("IsOwnChangedItem"),
        InstanceMethod<&Face::IsOwnChangedItem_async>("IsOwnChangedItem_async"),
        InstanceMethod<&Face::IsA>("IsA"),
        InstanceMethod<&Face::IsA_async>("IsA_async"),
        InstanceMethod<&Face::GetName>("GetName"),
        InstanceMethod<&Face::GetName_async>("GetName_async"),
        InstanceMethod<&Face::GetMainName>("GetMainName"),
        InstanceMethod<&Face::GetMainName_async>("GetMainName_async"),
        InstanceMethod<&Face::GetFirstName>("GetFirstName"),
        InstanceMethod<&Face::GetFirstName_async>("GetFirstName_async"),
        InstanceMethod<&Face::GetNameHash>("GetNameHash"),
        InstanceMethod<&Face::GetNameHash_async>("GetNameHash_async"),
        InstanceMethod<&Face::AddYourGabaritTo>("AddYourGabaritTo"),
        InstanceMethod<&Face::AddYourGabaritTo_async>("AddYourGabaritTo_async"),
        InstanceMethod<&Face::CalculateMesh>("CalculateMesh"),
        InstanceMethod<&Face::CalculateMesh_async>("CalculateMesh_async"),
        InstanceMethod<&Face::GetOwnChanged>("GetOwnChanged"),
        InstanceMethod<&Face::GetOwnChanged_async>("GetOwnChanged_async"),
        InstanceMethod<&Face::GetUseCount>("GetUseCount"),
        InstanceMethod<&Face::GetUseCount_async>("GetUseCount_async"),
        InstanceMethod<&Face::AddRef>("AddRef"),
        InstanceMethod<&Face::AddRef_async>("AddRef_async"),
        InstanceMethod<&Face::SetStyle>("SetStyle"),
        InstanceMethod<&Face::SetStyle_async>("SetStyle_async"),
        InstanceMethod<&Face::GetStyle>("GetStyle"),
        InstanceMethod<&Face::GetStyle_async>("GetStyle_async"),
        InstanceMethod<&Face::SetColor>("SetColor"),
        InstanceMethod<&Face::SetColor_async>("SetColor_async"),
        InstanceMethod<&Face::GetColor>("GetColor"),
        InstanceMethod<&Face::GetColor_async>("GetColor_async"),
        InstanceMethod<&Face::AttributesConvert>("AttributesConvert"),
        InstanceMethod<&Face::AttributesConvert_async>("AttributesConvert_async"),
            InstanceMethod<&Face::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Face", func);

    Napi::Object global = env.Global();
    Napi::Object Object = global.Get("Object").ToObject();
    Napi::Function setPrototypeOf = Napi::Function(env, Object.Get("setPrototypeOf"));
    Napi::Value prototype = func.Get("prototype");

    Napi::Function superFunc = TopologyItem::GetConstructor(env);
    Napi::FunctionReference* superConstructor = new Napi::FunctionReference();
    *superConstructor = Napi::Persistent(superFunc);

    Napi::Value superPrototype = superFunc.Get("prototype");
    setPrototypeOf.Call({prototype, superPrototype});
    setPrototypeOf.Call({func, superFunc});

    return exports;
}

Face::Face(const Napi::CallbackInfo& info) : Napi::ObjectWrap<Face>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        Napi::Error::New(env, "Face cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object Face::NewInstance(Napi::Env env, MbFace *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Face");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Face *unwrapped = Face::Unwrap(inst);
underlying->AddRef();    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Face::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Face");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

        Napi::Value Face::GetAnyPointOn(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                    MbCartPoint3D *point = new MbCartPoint3D;
        MbVector3D *normal = new MbVector3D;




 bool  _result = _underlying->GetAnyPointOn
(
        *point
,        *normal

);



        Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

        _toReturn.Set(Napi::String::New(env, "_result"), _to);
            if (point != NULL) {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)point);
    } else {
        _to = env.Null();
    }

        _toReturn.Set(Napi::String::New(env, "point"), _to);
            if (normal != NULL) {
        _to = Vector3D::NewInstance(env, (MbVector3D *)normal);
    } else {
        _to = env.Null();
    }

        _toReturn.Set(Napi::String::New(env, "normal"), _to);
            return _toReturn;


        }

    Napi::Value Face::GetAnyPointOn_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Face_GetAnyPointOn_AsyncWorker* asyncWorker = new Face_GetAnyPointOn_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::Normal(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number u is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    Napi::Error::New(env, "number v is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    MbVector3D *result = new MbVector3D;


             double u = info[0].ToNumber().DoubleValue();

             double v = info[1].ToNumber().DoubleValue();



_underlying->Normal
(
        u
,        v
,        *result

);



    Napi::Value _to;

            if (result != NULL) {
        _to = Vector3D::NewInstance(env, (MbVector3D *)result);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value Face::Normal_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number u is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number v is required."));
                    return deferred.Promise();
            }


                     double u = info[0].ToNumber().DoubleValue();

                     double v = info[1].ToNumber().DoubleValue();

        Face_Normal_AsyncWorker* asyncWorker = new Face_Normal_AsyncWorker(
_underlying,            deferred
,
                
                u,
                
                v        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::Point(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number faceU is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    Napi::Error::New(env, "number faceV is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    MbCartPoint3D *point = new MbCartPoint3D;


             double faceU = info[0].ToNumber().DoubleValue();

             double faceV = info[1].ToNumber().DoubleValue();



_underlying->Point
(
        faceU
,        faceV
,        *point

);



    Napi::Value _to;

            if (point != NULL) {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)point);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value Face::Point_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number faceU is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number faceV is required."));
                    return deferred.Promise();
            }


                     double faceU = info[0].ToNumber().DoubleValue();

                     double faceV = info[1].ToNumber().DoubleValue();

        Face_Point_AsyncWorker* asyncWorker = new Face_Point_AsyncWorker(
_underlying,            deferred
,
                
                faceU,
                
                faceV        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::GetPlacement(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                     MbPlacement3D * result = NULL;




 bool  _result = _underlying->GetPlacement
(
        result

);


if (_result) {

    Napi::Value _to;

            if (result != NULL) {
        _to = Placement3D::NewInstance(env, (MbPlacement3D *)result);
    } else {
        _to = env.Null();
    }

            return _to;

} else {
    std::ostringstream msg;
    msg << "Operation GetPlacement failed";
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value Face::GetPlacement_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Face_GetPlacement_AsyncWorker* asyncWorker = new Face_GetPlacement_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::GetPlanePlacement(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                    MbPlacement3D *result = new MbPlacement3D;




 bool  _result = _underlying->GetPlanePlacement
(
        *result

);


if (_result) {

    Napi::Value _to;

            if (result != NULL) {
        _to = Placement3D::NewInstance(env, (MbPlacement3D *)result);
    } else {
        _to = env.Null();
    }

            return _to;

} else {
    std::ostringstream msg;
    msg << "Operation GetPlanePlacement failed";
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value Face::GetPlanePlacement_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Face_GetPlanePlacement_AsyncWorker* asyncWorker = new Face_GetPlanePlacement_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::GetControlPlacement(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                    MbPlacement3D *result = new MbPlacement3D;




 bool  _result = _underlying->GetControlPlacement
(
        *result

);


if (_result) {

    Napi::Value _to;

            if (result != NULL) {
        _to = Placement3D::NewInstance(env, (MbPlacement3D *)result);
    } else {
        _to = env.Null();
    }

            return _to;

} else {
    std::ostringstream msg;
    msg << "Operation GetControlPlacement failed";
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value Face::GetControlPlacement_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Face_GetControlPlacement_AsyncWorker* asyncWorker = new Face_GetControlPlacement_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::GetSurfacePlacement(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                    MbPlacement3D *result = new MbPlacement3D;




 bool  _result = _underlying->GetSurfacePlacement
(
        *result

);


if (_result) {

    Napi::Value _to;

            if (result != NULL) {
        _to = Placement3D::NewInstance(env, (MbPlacement3D *)result);
    } else {
        _to = env.Null();
    }

            return _to;

} else {
    std::ostringstream msg;
    msg << "Operation GetSurfacePlacement failed";
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value Face::GetSurfacePlacement_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Face_GetSurfacePlacement_AsyncWorker* asyncWorker = new Face_GetSurfacePlacement_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::OrientPlacement(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Placement3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Placement3D result is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'result'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Placement3D *result_ = Placement3D::Unwrap(info[0].ToObject());
        
         MbPlacement3D & result =*result_->_underlying;
        



 bool  _result = _underlying->OrientPlacement
(
        result

);


if (_result) {

    return env.Undefined();

} else {
    std::ostringstream msg;
    msg << "Operation OrientPlacement failed";
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value Face::OrientPlacement_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Placement3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Placement3D result is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'result'"));
                return deferred.Promise();
        }
        const class Placement3D *result_ = Placement3D::Unwrap(info[0].ToObject());
        
         MbPlacement3D & result =*result_->_underlying;
        

        Face_OrientPlacement_AsyncWorker* asyncWorker = new Face_OrientPlacement_AsyncWorker(
_underlying,            deferred
,
                
                result        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::NearPointProjection(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "CartPoint3D point is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    double u;
        double v;
        MbVector3D *normal = new MbVector3D;
        c3d::IndicesPair *edgeLoc = new c3d::IndicesPair;
        ptrdiff_t corner;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'point'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class CartPoint3D *point_ = CartPoint3D::Unwrap(info[0].ToObject());
        
        const MbCartPoint3D & point =*point_->_underlying;
        



 MbeItemLocation  location = _underlying->NearPointProjection
(
        point
,        u
,        v
,        *normal
,        *edgeLoc
,        corner

);



        Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

            _to = Napi::Number::New(env, location);

        _toReturn.Set(Napi::String::New(env, "location"), _to);
            _to = Napi::Number::New(env, u);

        _toReturn.Set(Napi::String::New(env, "u"), _to);
            _to = Napi::Number::New(env, v);

        _toReturn.Set(Napi::String::New(env, "v"), _to);
            if (normal != NULL) {
        _to = Vector3D::NewInstance(env, (MbVector3D *)normal);
    } else {
        _to = env.Null();
    }

        _toReturn.Set(Napi::String::New(env, "normal"), _to);
            Napi::Uint32Array arr_edgeLoc = Napi::Uint32Array::New(env, 2);
    arr_edgeLoc[0] = Napi::Number::New(env, edgeLoc->first);
    _to = arr_edgeLoc;

        _toReturn.Set(Napi::String::New(env, "edgeLoc"), _to);
            _to = Napi::Number::New(env, corner);

        _toReturn.Set(Napi::String::New(env, "corner"), _to);
            return _toReturn;


        }

    Napi::Value Face::NearPointProjection_async(const Napi::CallbackInfo& info) {
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
        

        Face_NearPointProjection_AsyncWorker* asyncWorker = new Face_NearPointProjection_AsyncWorker(
_underlying,            deferred
,
                
                point        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::GetFaceParam(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number surfaceU is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    Napi::Error::New(env, "number surfaceV is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    double faceU;
        double faceV;


            const double surfaceU = info[0].ToNumber().DoubleValue();

            const double surfaceV = info[1].ToNumber().DoubleValue();



_underlying->GetFaceParam
(
        surfaceU
,        surfaceV
,        faceU
,        faceV

);



        Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

            _to = Napi::Number::New(env, faceU);

        _toReturn.Set(Napi::String::New(env, "faceU"), _to);
            _to = Napi::Number::New(env, faceV);

        _toReturn.Set(Napi::String::New(env, "faceV"), _to);
            return _toReturn;


        }

    Napi::Value Face::GetFaceParam_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number surfaceU is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number surfaceV is required."));
                    return deferred.Promise();
            }


                    const double surfaceU = info[0].ToNumber().DoubleValue();

                    const double surfaceV = info[1].ToNumber().DoubleValue();

        Face_GetFaceParam_AsyncWorker* asyncWorker = new Face_GetFaceParam_AsyncWorker(
_underlying,            deferred
,
                
                surfaceU,
                
                surfaceV        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::GetSurfaceParam(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number faceU is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    Napi::Error::New(env, "number faceV is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    double surfaceU;
        double surfaceV;


            const double faceU = info[0].ToNumber().DoubleValue();

            const double faceV = info[1].ToNumber().DoubleValue();



_underlying->GetSurfaceParam
(
        faceU
,        faceV
,        surfaceU
,        surfaceV

);



        Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

            _to = Napi::Number::New(env, surfaceU);

        _toReturn.Set(Napi::String::New(env, "surfaceU"), _to);
            _to = Napi::Number::New(env, surfaceV);

        _toReturn.Set(Napi::String::New(env, "surfaceV"), _to);
            return _toReturn;


        }

    Napi::Value Face::GetSurfaceParam_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number faceU is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number faceV is required."));
                    return deferred.Promise();
            }


                    const double faceU = info[0].ToNumber().DoubleValue();

                    const double faceV = info[1].ToNumber().DoubleValue();

        Face_GetSurfaceParam_AsyncWorker* asyncWorker = new Face_GetSurfaceParam_AsyncWorker(
_underlying,            deferred
,
                
                faceU,
                
                faceV        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::GetOuterEdges(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                    RPArray<MbCurveEdge> *edges = new RPArray<MbCurveEdge>;


             size_t mapThreshold = info[0].ToNumber().Int64Value();



_underlying->GetOuterEdges
(
        *edges
,        info.Length() == 0 || info[0].IsNull() ? 50 : mapThreshold

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

    Napi::Value Face::GetOuterEdges_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                     size_t mapThreshold = info[0].ToNumber().Int64Value();

        Face_GetOuterEdges_AsyncWorker* asyncWorker = new Face_GetOuterEdges_AsyncWorker(
_underlying,            deferred
,
                
                mapThreshold        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::GetEdges(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                    RPArray<MbCurveEdge> *edges = new RPArray<MbCurveEdge>;


             size_t mapThreshold = info[0].ToNumber().Int64Value();



_underlying->GetEdges
(
        *edges
,        info.Length() == 0 || info[0].IsNull() ? 50 : mapThreshold

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

    Napi::Value Face::GetEdges_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                     size_t mapThreshold = info[0].ToNumber().Int64Value();

        Face_GetEdges_AsyncWorker* asyncWorker = new Face_GetEdges_AsyncWorker(
_underlying,            deferred
,
                
                mapThreshold        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::IsSame(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(TopologyItem::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "TopologyItem other is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    Napi::Error::New(env, "number accuracy is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'other'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class TopologyItem *other_ = TopologyItem::Unwrap(info[0].ToObject());
        
        const MbTopologyItem & other =*other_->_underlying;
        

             double accuracy = info[1].ToNumber().DoubleValue();



 bool  _result = _underlying->IsSame
(
        other
,        accuracy

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value Face::IsSame_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(TopologyItem::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "TopologyItem other is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number accuracy is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'other'"));
                return deferred.Promise();
        }
        const class TopologyItem *other_ = TopologyItem::Unwrap(info[0].ToObject());
        
        const MbTopologyItem & other =*other_->_underlying;
        

                     double accuracy = info[1].ToNumber().DoubleValue();

        Face_IsSame_AsyncWorker* asyncWorker = new Face_IsSame_AsyncWorker(
_underlying,            deferred
,
                
                other,
                
                accuracy        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::GetNeighborFaces(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                    RPArray<MbFace> *faces = new RPArray<MbFace>;




_underlying->GetNeighborFaces
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

    Napi::Value Face::GetNeighborFaces_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Face_GetNeighborFaces_AsyncWorker* asyncWorker = new Face_GetNeighborFaces_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::GetBoundaryEdges(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                    RPArray<MbCurveEdge> *edges = new RPArray<MbCurveEdge>;




_underlying->GetBoundaryEdges
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

    Napi::Value Face::GetBoundaryEdges_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Face_GetBoundaryEdges_AsyncWorker* asyncWorker = new Face_GetBoundaryEdges_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::GetSurfaceCurvesData(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                    RPArray<MbContour> *contours = new RPArray<MbContour>;




 MbSurface * surface = _underlying->GetSurfaceCurvesData
(
        *contours

);



        Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

            if (surface != NULL) {
        _to = Surface::NewInstance(env, (MbSurface *)surface);
    } else {
        _to = env.Null();
    }

        _toReturn.Set(Napi::String::New(env, "surface"), _to);
            Napi::Array arr_contours = Napi::Array::New(env);
    for (size_t i = 0; i < contours->Count(); i++) {
            arr_contours[i] = Contour::NewInstance(env,
                
                    (*contours)[i]
                
            );
    }
    _to = arr_contours;

        _toReturn.Set(Napi::String::New(env, "contours"), _to);
            return _toReturn;


        }

    Napi::Value Face::GetSurfaceCurvesData_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Face_GetSurfaceCurvesData_AsyncWorker* asyncWorker = new Face_GetSurfaceCurvesData_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::HasNeighborFace(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->HasNeighborFace
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value Face::HasNeighborFace_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Face_HasNeighborFace_AsyncWorker* asyncWorker = new Face_HasNeighborFace_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::GetLoopsCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 size_t  _result = _underlying->GetLoopsCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Face::GetLoopsCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Face_GetLoopsCount_AsyncWorker* asyncWorker = new Face_GetLoopsCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::GetSurface(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



const MbSurface & _result = _underlying->GetSurface
(

);



    Napi::Value _to;

            _to = Surface::NewInstance(env, (MbSurface *)&(_result));

            return _to;


        }

    Napi::Value Face::GetSurface_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Face_GetSurface_AsyncWorker* asyncWorker = new Face_GetSurface_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::GetLoop(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number index is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

             size_t index = info[0].ToNumber().Int64Value();



 MbLoop * _result = _underlying->GetLoop
(
        index

);



    Napi::Value _to;

            if (_result != NULL) {
        _to = Loop::NewInstance(env, (MbLoop *)_result);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value Face::GetLoop_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number index is required."));
                    return deferred.Promise();
            }


                     size_t index = info[0].ToNumber().Int64Value();

        Face_GetLoop_AsyncWorker* asyncWorker = new Face_GetLoop_AsyncWorker(
_underlying,            deferred
,
                
                index        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::IsSameSense(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->IsSameSense
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value Face::IsSameSense_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Face_IsSameSense_AsyncWorker* asyncWorker = new Face_IsSameSense_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::DataDuplicate(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            

                    MbRegDuplicate * dup = NULL;
        if (!(info[0].IsNull() || info[0].IsUndefined())) {
            RegDuplicate *dup_ = RegDuplicate::Unwrap(info[0].ToObject());
                dup =   dup_->_underlying;
        }



 MbFace * _result = _underlying->DataDuplicate
(
        info.Length() == 0 || info[0].IsNull() ? NULL : dup

);



    Napi::Value _to;

            if (_result != NULL) {
        _to = Face::NewInstance(env, (MbFace *)_result);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value Face::DataDuplicate_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                            MbRegDuplicate * dup = NULL;
        if (!(info[0].IsNull() || info[0].IsUndefined())) {
            RegDuplicate *dup_ = RegDuplicate::Unwrap(info[0].ToObject());
                dup =   dup_->_underlying;
        }

        Face_DataDuplicate_AsyncWorker* asyncWorker = new Face_DataDuplicate_AsyncWorker(
_underlying,            deferred
,
                
                dup        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::IsPlanar(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->IsPlanar
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value Face::IsPlanar_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Face_IsPlanar_AsyncWorker* asyncWorker = new Face_IsPlanar_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::GetCylinderAxis(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                    MbAxis3D *axis = new MbAxis3D;




 bool  _result = _underlying->GetCylinderAxis
(
        *axis

);


if (_result) {

    Napi::Value _to;

            if (axis != NULL) {
        _to = Axis3D::NewInstance(env, (MbAxis3D *)axis);
    } else {
        _to = env.Null();
    }

            return _to;

} else {
    std::ostringstream msg;
    msg << "Operation GetCylinderAxis failed";
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value Face::GetCylinderAxis_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Face_GetCylinderAxis_AsyncWorker* asyncWorker = new Face_GetCylinderAxis_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::UpdateSurfaceBounds(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            

             bool curveBoundedOnly = info[0].ToBoolean();



 bool  _result = _underlying->UpdateSurfaceBounds
(
        info.Length() == 0 || info[0].IsNull() ? true : curveBoundedOnly

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value Face::UpdateSurfaceBounds_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                     bool curveBoundedOnly = info[0].ToBoolean();

        Face_UpdateSurfaceBounds_AsyncWorker* asyncWorker = new Face_UpdateSurfaceBounds_AsyncWorker(
_underlying,            deferred
,
                
                curveBoundedOnly        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::IsOwnChangedItem(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            

             bool checkVertices = info[0].ToBoolean();



 bool  _result = _underlying->IsOwnChangedItem
(
        info.Length() == 0 || info[0].IsNull() ? false : checkVertices

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value Face::IsOwnChangedItem_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                     bool checkVertices = info[0].ToBoolean();

        Face_IsOwnChangedItem_AsyncWorker* asyncWorker = new Face_IsOwnChangedItem_AsyncWorker(
_underlying,            deferred
,
                
                checkVertices        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::IsA(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeTopologyType  _result = _underlying->IsA
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Face::IsA_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Face_IsA_AsyncWorker* asyncWorker = new Face_IsA_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::GetName(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



const MbName & _result = _underlying->GetName
(

);



    Napi::Value _to;

            _to = Name::NewInstance(env, new MbName(_result));

            return _to;


        }

    Napi::Value Face::GetName_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Face_GetName_AsyncWorker* asyncWorker = new Face_GetName_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::GetMainName(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 SimpleName  _result = _underlying->GetMainName
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Face::GetMainName_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Face_GetMainName_AsyncWorker* asyncWorker = new Face_GetMainName_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::GetFirstName(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 SimpleName  _result = _underlying->GetFirstName
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Face::GetFirstName_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Face_GetFirstName_AsyncWorker* asyncWorker = new Face_GetFirstName_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::GetNameHash(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 SimpleName  _result = _underlying->GetNameHash
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Face::GetNameHash_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Face_GetNameHash_AsyncWorker* asyncWorker = new Face_GetNameHash_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::AddYourGabaritTo(const Napi::CallbackInfo& info) {
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

    Napi::Value Face::AddYourGabaritTo_async(const Napi::CallbackInfo& info) {
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
        

        Face_AddYourGabaritTo_AsyncWorker* asyncWorker = new Face_AddYourGabaritTo_AsyncWorker(
_underlying,            deferred
,
                
                cube        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::CalculateMesh(const Napi::CallbackInfo& info) {
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

    Napi::Value Face::CalculateMesh_async(const Napi::CallbackInfo& info) {
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
        

        Face_CalculateMesh_AsyncWorker* asyncWorker = new Face_CalculateMesh_AsyncWorker(
_underlying,            deferred
,
                
                stepData,
                
                note        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::GetOwnChanged(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->GetOwnChanged
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value Face::GetOwnChanged_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Face_GetOwnChanged_AsyncWorker* asyncWorker = new Face_GetOwnChanged_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::GetUseCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 refcount_t  _result = _underlying->GetUseCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Face::GetUseCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Face_GetUseCount_AsyncWorker* asyncWorker = new Face_GetUseCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::AddRef(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->AddRef
(

);



    return env.Undefined();


        }

    Napi::Value Face::AddRef_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Face_AddRef_AsyncWorker* asyncWorker = new Face_AddRef_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::SetStyle(const Napi::CallbackInfo& info) {
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

    Napi::Value Face::SetStyle_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "int s is required."));
                    return deferred.Promise();
            }


                     int s = info[0].ToNumber().Int64Value();

        Face_SetStyle_AsyncWorker* asyncWorker = new Face_SetStyle_AsyncWorker(
_underlying,            deferred
,
                
                s        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::GetStyle(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 int  _result = _underlying->GetStyle
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Face::GetStyle_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Face_GetStyle_AsyncWorker* asyncWorker = new Face_GetStyle_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::SetColor(const Napi::CallbackInfo& info) {
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

    Napi::Value Face::SetColor_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "uint32 c is required."));
                    return deferred.Promise();
            }


                     int c = info[0].ToNumber().Int64Value();

        Face_SetColor_AsyncWorker* asyncWorker = new Face_SetColor_AsyncWorker(
_underlying,            deferred
,
                
                c        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::GetColor(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 uint32  _result = _underlying->GetColor
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Face::GetColor_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Face_GetColor_AsyncWorker* asyncWorker = new Face_GetColor_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Face::AttributesConvert(const Napi::CallbackInfo& info) {
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

    Napi::Value Face::AttributesConvert_async(const Napi::CallbackInfo& info) {
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
        

        Face_AttributesConvert_AsyncWorker* asyncWorker = new Face_AttributesConvert_AsyncWorker(
_underlying,            deferred
,
                
                other        );
        asyncWorker->Queue();
        return deferred.Promise();
    }



    Napi::Value Face::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }

Face::~Face() {
    // std::cout << "calling ::DeleteItem on Face for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

    Face_GetAnyPointOn_AsyncWorker::Face_GetAnyPointOn_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Face_GetAnyPointOn_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbCartPoint3D *point = new MbCartPoint3D;
        MbVector3D *normal = new MbVector3D;


        
         bool  _result = _underlying->GetAnyPointOn(
                        *point
,                        *normal
        );


                this->_result = _result;
                this->point = point;
                this->normal = normal;

        
        ExitParallelRegion();
    }

    void Face_GetAnyPointOn_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            Napi::Object _toReturn = Napi::Object::New(env);

                 bool  _result = this->_result;
                    _to = Napi::Boolean::New(env, _result);

                _toReturn.Set(Napi::String::New(env, "_result"), _to);
                 MbCartPoint3D * point = this->point;
                    if (point != NULL) {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)point);
    } else {
        _to = env.Null();
    }

                _toReturn.Set(Napi::String::New(env, "point"), _to);
                 MbVector3D * normal = this->normal;
                    if (normal != NULL) {
        _to = Vector3D::NewInstance(env, (MbVector3D *)normal);
    } else {
        _to = env.Null();
    }

                _toReturn.Set(Napi::String::New(env, "normal"), _to);

            deferred.Resolve(_toReturn);
    }

    void Face_GetAnyPointOn_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_Normal_AsyncWorker::Face_Normal_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
,
                         double  u,
                         double  v    )
        :_underlying(_underlying),PromiseWorker(d),
                        u(u)
,
                        v(v)
{};

    void Face_Normal_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector3D *result = new MbVector3D;


        
        _underlying->Normal(
                        u
,                        v
,                        *result
        );


                this->result = result;

        
        ExitParallelRegion();
    }

    void Face_Normal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbVector3D * result = this->result;
                if (result != NULL) {
        _to = Vector3D::NewInstance(env, (MbVector3D *)result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void Face_Normal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_Point_AsyncWorker::Face_Point_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
,
                         double  faceU,
                         double  faceV    )
        :_underlying(_underlying),PromiseWorker(d),
                        faceU(faceU)
,
                        faceV(faceV)
{};

    void Face_Point_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbCartPoint3D *point = new MbCartPoint3D;


        
        _underlying->Point(
                        faceU
,                        faceV
,                        *point
        );


                this->point = point;

        
        ExitParallelRegion();
    }

    void Face_Point_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbCartPoint3D * point = this->point;
                if (point != NULL) {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)point);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void Face_Point_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_GetPlacement_AsyncWorker::Face_GetPlacement_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Face_GetPlacement_AsyncWorker::Execute() {
        EnterParallelRegion();

                 MbPlacement3D * result = NULL;


        
         bool  _result = _underlying->GetPlacement(
                        result
        );

        if (_result) {

                this->result = result;

                } else {
            std::ostringstream msg;
            msg << "Operation GetPlacement failed";
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void Face_GetPlacement_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbPlacement3D * result = this->result;
                if (result != NULL) {
        _to = Placement3D::NewInstance(env, (MbPlacement3D *)result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void Face_GetPlacement_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_GetPlanePlacement_AsyncWorker::Face_GetPlanePlacement_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Face_GetPlanePlacement_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbPlacement3D *result = new MbPlacement3D;


        
         bool  _result = _underlying->GetPlanePlacement(
                        *result
        );

        if (_result) {

                this->result = result;

                } else {
            std::ostringstream msg;
            msg << "Operation GetPlanePlacement failed";
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void Face_GetPlanePlacement_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbPlacement3D * result = this->result;
                if (result != NULL) {
        _to = Placement3D::NewInstance(env, (MbPlacement3D *)result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void Face_GetPlanePlacement_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_GetControlPlacement_AsyncWorker::Face_GetControlPlacement_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Face_GetControlPlacement_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbPlacement3D *result = new MbPlacement3D;


        
         bool  _result = _underlying->GetControlPlacement(
                        *result
        );

        if (_result) {

                this->result = result;

                } else {
            std::ostringstream msg;
            msg << "Operation GetControlPlacement failed";
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void Face_GetControlPlacement_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbPlacement3D * result = this->result;
                if (result != NULL) {
        _to = Placement3D::NewInstance(env, (MbPlacement3D *)result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void Face_GetControlPlacement_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_GetSurfacePlacement_AsyncWorker::Face_GetSurfacePlacement_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Face_GetSurfacePlacement_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbPlacement3D *result = new MbPlacement3D;


        
         bool  _result = _underlying->GetSurfacePlacement(
                        *result
        );

        if (_result) {

                this->result = result;

                } else {
            std::ostringstream msg;
            msg << "Operation GetSurfacePlacement failed";
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void Face_GetSurfacePlacement_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbPlacement3D * result = this->result;
                if (result != NULL) {
        _to = Placement3D::NewInstance(env, (MbPlacement3D *)result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void Face_GetSurfacePlacement_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_OrientPlacement_AsyncWorker::Face_OrientPlacement_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
,
                         MbPlacement3D & result    )
        :_underlying(_underlying),PromiseWorker(d),
                        result(result)
{};

    void Face_OrientPlacement_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->OrientPlacement(
                        result
        );

        if (_result) {


                } else {
            std::ostringstream msg;
            msg << "Operation OrientPlacement failed";
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void Face_OrientPlacement_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Face_OrientPlacement_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_NearPointProjection_AsyncWorker::Face_NearPointProjection_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbCartPoint3D & point    )
        :_underlying(_underlying),PromiseWorker(d),
                        point(point)
{};

    void Face_NearPointProjection_AsyncWorker::Execute() {
        EnterParallelRegion();

                double u;
        double v;
        MbVector3D *normal = new MbVector3D;
        c3d::IndicesPair *edgeLoc = new c3d::IndicesPair;
        ptrdiff_t corner;


        
         MbeItemLocation  location = _underlying->NearPointProjection(
                        point
,                        u
,                        v
,                        *normal
,                        *edgeLoc
,                        corner
        );


                this->location = location;
                this->u = u;
                this->v = v;
                this->normal = normal;
                this->edgeLoc = edgeLoc;
                this->corner = corner;

        
        ExitParallelRegion();
    }

    void Face_NearPointProjection_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            Napi::Object _toReturn = Napi::Object::New(env);

                 MbeItemLocation  location = this->location;
                    _to = Napi::Number::New(env, location);

                _toReturn.Set(Napi::String::New(env, "location"), _to);
                 double  u = this->u;
                    _to = Napi::Number::New(env, u);

                _toReturn.Set(Napi::String::New(env, "u"), _to);
                 double  v = this->v;
                    _to = Napi::Number::New(env, v);

                _toReturn.Set(Napi::String::New(env, "v"), _to);
                 MbVector3D * normal = this->normal;
                    if (normal != NULL) {
        _to = Vector3D::NewInstance(env, (MbVector3D *)normal);
    } else {
        _to = env.Null();
    }

                _toReturn.Set(Napi::String::New(env, "normal"), _to);
                 c3d::IndicesPair * edgeLoc = this->edgeLoc;
                    Napi::Uint32Array arr_edgeLoc = Napi::Uint32Array::New(env, 2);
    arr_edgeLoc[0] = Napi::Number::New(env, edgeLoc->first);
    _to = arr_edgeLoc;

                _toReturn.Set(Napi::String::New(env, "edgeLoc"), _to);
                 ptrdiff_t  corner = this->corner;
                    _to = Napi::Number::New(env, corner);

                _toReturn.Set(Napi::String::New(env, "corner"), _to);

            deferred.Resolve(_toReturn);
    }

    void Face_NearPointProjection_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_GetFaceParam_AsyncWorker::Face_GetFaceParam_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
,
                        const double  surfaceU,
                        const double  surfaceV    )
        :_underlying(_underlying),PromiseWorker(d),
                        surfaceU(surfaceU)
,
                        surfaceV(surfaceV)
{};

    void Face_GetFaceParam_AsyncWorker::Execute() {
        EnterParallelRegion();

                double faceU;
        double faceV;


        
        _underlying->GetFaceParam(
                        surfaceU
,                        surfaceV
,                        faceU
,                        faceV
        );


                this->faceU = faceU;
                this->faceV = faceV;

        
        ExitParallelRegion();
    }

    void Face_GetFaceParam_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            Napi::Object _toReturn = Napi::Object::New(env);

                 double  faceU = this->faceU;
                    _to = Napi::Number::New(env, faceU);

                _toReturn.Set(Napi::String::New(env, "faceU"), _to);
                 double  faceV = this->faceV;
                    _to = Napi::Number::New(env, faceV);

                _toReturn.Set(Napi::String::New(env, "faceV"), _to);

            deferred.Resolve(_toReturn);
    }

    void Face_GetFaceParam_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_GetSurfaceParam_AsyncWorker::Face_GetSurfaceParam_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
,
                        const double  faceU,
                        const double  faceV    )
        :_underlying(_underlying),PromiseWorker(d),
                        faceU(faceU)
,
                        faceV(faceV)
{};

    void Face_GetSurfaceParam_AsyncWorker::Execute() {
        EnterParallelRegion();

                double surfaceU;
        double surfaceV;


        
        _underlying->GetSurfaceParam(
                        faceU
,                        faceV
,                        surfaceU
,                        surfaceV
        );


                this->surfaceU = surfaceU;
                this->surfaceV = surfaceV;

        
        ExitParallelRegion();
    }

    void Face_GetSurfaceParam_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            Napi::Object _toReturn = Napi::Object::New(env);

                 double  surfaceU = this->surfaceU;
                    _to = Napi::Number::New(env, surfaceU);

                _toReturn.Set(Napi::String::New(env, "surfaceU"), _to);
                 double  surfaceV = this->surfaceV;
                    _to = Napi::Number::New(env, surfaceV);

                _toReturn.Set(Napi::String::New(env, "surfaceV"), _to);

            deferred.Resolve(_toReturn);
    }

    void Face_GetSurfaceParam_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_GetOuterEdges_AsyncWorker::Face_GetOuterEdges_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
,
                         size_t  mapThreshold    )
        :_underlying(_underlying),PromiseWorker(d),
                        mapThreshold(mapThreshold)
{};

    void Face_GetOuterEdges_AsyncWorker::Execute() {
        EnterParallelRegion();

                RPArray<MbCurveEdge> *edges = new RPArray<MbCurveEdge>;


        
        _underlying->GetOuterEdges(
                        *edges
,                        mapThreshold
        );


                this->edges = edges;

        
        ExitParallelRegion();
    }

    void Face_GetOuterEdges_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Face_GetOuterEdges_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_GetEdges_AsyncWorker::Face_GetEdges_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
,
                         size_t  mapThreshold    )
        :_underlying(_underlying),PromiseWorker(d),
                        mapThreshold(mapThreshold)
{};

    void Face_GetEdges_AsyncWorker::Execute() {
        EnterParallelRegion();

                RPArray<MbCurveEdge> *edges = new RPArray<MbCurveEdge>;


        
        _underlying->GetEdges(
                        *edges
,                        mapThreshold
        );


                this->edges = edges;

        
        ExitParallelRegion();
    }

    void Face_GetEdges_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Face_GetEdges_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_IsSame_AsyncWorker::Face_IsSame_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbTopologyItem & other,
                         double  accuracy    )
        :_underlying(_underlying),PromiseWorker(d),
                        other(other)
,
                        accuracy(accuracy)
{};

    void Face_IsSame_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsSame(
                        other
,                        accuracy
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Face_IsSame_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void Face_IsSame_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_GetNeighborFaces_AsyncWorker::Face_GetNeighborFaces_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Face_GetNeighborFaces_AsyncWorker::Execute() {
        EnterParallelRegion();

                RPArray<MbFace> *faces = new RPArray<MbFace>;


        
        _underlying->GetNeighborFaces(
                        *faces
        );


                this->faces = faces;

        
        ExitParallelRegion();
    }

    void Face_GetNeighborFaces_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Face_GetNeighborFaces_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_GetBoundaryEdges_AsyncWorker::Face_GetBoundaryEdges_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Face_GetBoundaryEdges_AsyncWorker::Execute() {
        EnterParallelRegion();

                RPArray<MbCurveEdge> *edges = new RPArray<MbCurveEdge>;


        
        _underlying->GetBoundaryEdges(
                        *edges
        );


                this->edges = edges;

        
        ExitParallelRegion();
    }

    void Face_GetBoundaryEdges_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Face_GetBoundaryEdges_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_GetSurfaceCurvesData_AsyncWorker::Face_GetSurfaceCurvesData_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Face_GetSurfaceCurvesData_AsyncWorker::Execute() {
        EnterParallelRegion();

                RPArray<MbContour> *contours = new RPArray<MbContour>;


        
         MbSurface * surface = _underlying->GetSurfaceCurvesData(
                        *contours
        );


                this->surface = surface;
                this->contours = contours;

        
        ExitParallelRegion();
    }

    void Face_GetSurfaceCurvesData_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            Napi::Object _toReturn = Napi::Object::New(env);

                 MbSurface * surface = this->surface;
                    if (surface != NULL) {
        _to = Surface::NewInstance(env, (MbSurface *)surface);
    } else {
        _to = env.Null();
    }

                _toReturn.Set(Napi::String::New(env, "surface"), _to);
                 RPArray<MbContour> * contours = this->contours;
                    Napi::Array arr_contours = Napi::Array::New(env);
    for (size_t i = 0; i < contours->Count(); i++) {
            arr_contours[i] = Contour::NewInstance(env,
                
                    (*contours)[i]
                
            );
    }
    _to = arr_contours;

                _toReturn.Set(Napi::String::New(env, "contours"), _to);

            deferred.Resolve(_toReturn);
    }

    void Face_GetSurfaceCurvesData_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_HasNeighborFace_AsyncWorker::Face_HasNeighborFace_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Face_HasNeighborFace_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->HasNeighborFace(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Face_HasNeighborFace_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void Face_HasNeighborFace_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_GetLoopsCount_AsyncWorker::Face_GetLoopsCount_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Face_GetLoopsCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         size_t  _result = _underlying->GetLoopsCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Face_GetLoopsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             size_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Face_GetLoopsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_GetSurface_AsyncWorker::Face_GetSurface_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Face_GetSurface_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        const MbSurface & _result = _underlying->GetSurface(
        );


                this->_result = (MbSurface *)&(_result);

        
        ExitParallelRegion();
    }

    void Face_GetSurface_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            const MbSurface * _result = this->_result;
                _to = Surface::NewInstance(env, (MbSurface *)&(_result));

            deferred.Resolve(_to);
    }

    void Face_GetSurface_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_GetLoop_AsyncWorker::Face_GetLoop_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
,
                         size_t  index    )
        :_underlying(_underlying),PromiseWorker(d),
                        index(index)
{};

    void Face_GetLoop_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbLoop * _result = _underlying->GetLoop(
                        index
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Face_GetLoop_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbLoop * _result = this->_result;
                if (_result != NULL) {
        _to = Loop::NewInstance(env, (MbLoop *)_result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void Face_GetLoop_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_IsSameSense_AsyncWorker::Face_IsSameSense_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Face_IsSameSense_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsSameSense(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Face_IsSameSense_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void Face_IsSameSense_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_DataDuplicate_AsyncWorker::Face_DataDuplicate_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
,
                         MbRegDuplicate * dup    )
        :_underlying(_underlying),PromiseWorker(d),
                        dup(dup)
{};

    void Face_DataDuplicate_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbFace * _result = _underlying->DataDuplicate(
                        dup
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Face_DataDuplicate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbFace * _result = this->_result;
                if (_result != NULL) {
        _to = Face::NewInstance(env, (MbFace *)_result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void Face_DataDuplicate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_IsPlanar_AsyncWorker::Face_IsPlanar_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Face_IsPlanar_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsPlanar(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Face_IsPlanar_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void Face_IsPlanar_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_GetCylinderAxis_AsyncWorker::Face_GetCylinderAxis_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Face_GetCylinderAxis_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbAxis3D *axis = new MbAxis3D;


        
         bool  _result = _underlying->GetCylinderAxis(
                        *axis
        );

        if (_result) {

                this->axis = axis;

                } else {
            std::ostringstream msg;
            msg << "Operation GetCylinderAxis failed";
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void Face_GetCylinderAxis_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbAxis3D * axis = this->axis;
                if (axis != NULL) {
        _to = Axis3D::NewInstance(env, (MbAxis3D *)axis);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void Face_GetCylinderAxis_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_UpdateSurfaceBounds_AsyncWorker::Face_UpdateSurfaceBounds_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
,
                         bool  curveBoundedOnly    )
        :_underlying(_underlying),PromiseWorker(d),
                        curveBoundedOnly(curveBoundedOnly)
{};

    void Face_UpdateSurfaceBounds_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->UpdateSurfaceBounds(
                        curveBoundedOnly
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Face_UpdateSurfaceBounds_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void Face_UpdateSurfaceBounds_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_IsOwnChangedItem_AsyncWorker::Face_IsOwnChangedItem_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
,
                         bool  checkVertices    )
        :_underlying(_underlying),PromiseWorker(d),
                        checkVertices(checkVertices)
{};

    void Face_IsOwnChangedItem_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsOwnChangedItem(
                        checkVertices
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Face_IsOwnChangedItem_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void Face_IsOwnChangedItem_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_IsA_AsyncWorker::Face_IsA_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Face_IsA_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeTopologyType  _result = _underlying->IsA(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Face_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeTopologyType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Face_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_GetName_AsyncWorker::Face_GetName_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Face_GetName_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        const MbName & _result = _underlying->GetName(
        );


                        this->_result = new (MbName)(_result);

        
        ExitParallelRegion();
    }

    void Face_GetName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            const MbName * _result = this->_result;
                _to = Name::NewInstance(env, (MbName *)&(_result));

            deferred.Resolve(_to);
    }

    void Face_GetName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_GetMainName_AsyncWorker::Face_GetMainName_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Face_GetMainName_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         SimpleName  _result = _underlying->GetMainName(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Face_GetMainName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             SimpleName  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Face_GetMainName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_GetFirstName_AsyncWorker::Face_GetFirstName_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Face_GetFirstName_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         SimpleName  _result = _underlying->GetFirstName(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Face_GetFirstName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             SimpleName  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Face_GetFirstName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_GetNameHash_AsyncWorker::Face_GetNameHash_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Face_GetNameHash_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         SimpleName  _result = _underlying->GetNameHash(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Face_GetNameHash_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             SimpleName  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Face_GetNameHash_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_AddYourGabaritTo_AsyncWorker::Face_AddYourGabaritTo_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
,
                         MbCube & cube    )
        :_underlying(_underlying),PromiseWorker(d),
                        cube(cube)
{};

    void Face_AddYourGabaritTo_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddYourGabaritTo(
                        cube
        );



        
        ExitParallelRegion();
    }

    void Face_AddYourGabaritTo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Face_AddYourGabaritTo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_CalculateMesh_AsyncWorker::Face_CalculateMesh_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbStepData & stepData,
                        const MbFormNote & note    )
        :_underlying(_underlying),PromiseWorker(d),
                        stepData(stepData)
,
                        note(note)
{};

    void Face_CalculateMesh_AsyncWorker::Execute() {
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

    void Face_CalculateMesh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void Face_CalculateMesh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_GetOwnChanged_AsyncWorker::Face_GetOwnChanged_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Face_GetOwnChanged_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->GetOwnChanged(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Face_GetOwnChanged_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void Face_GetOwnChanged_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_GetUseCount_AsyncWorker::Face_GetUseCount_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Face_GetUseCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         refcount_t  _result = _underlying->GetUseCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Face_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             refcount_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Face_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_AddRef_AsyncWorker::Face_AddRef_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Face_AddRef_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddRef(
        );



        
        ExitParallelRegion();
    }

    void Face_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Face_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_SetStyle_AsyncWorker::Face_SetStyle_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
,
                         int  s    )
        :_underlying(_underlying),PromiseWorker(d),
                        s(s)
{};

    void Face_SetStyle_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetStyle(
                        s
        );



        
        ExitParallelRegion();
    }

    void Face_SetStyle_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Face_SetStyle_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_GetStyle_AsyncWorker::Face_GetStyle_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Face_GetStyle_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         int  _result = _underlying->GetStyle(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Face_GetStyle_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             int  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Face_GetStyle_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_SetColor_AsyncWorker::Face_SetColor_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
,
                         uint32  c    )
        :_underlying(_underlying),PromiseWorker(d),
                        c(c)
{};

    void Face_SetColor_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetColor(
                        c
        );



        
        ExitParallelRegion();
    }

    void Face_SetColor_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Face_SetColor_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_GetColor_AsyncWorker::Face_GetColor_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Face_GetColor_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         uint32  _result = _underlying->GetColor(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Face_GetColor_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             uint32  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Face_GetColor_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Face_AttributesConvert_AsyncWorker::Face_AttributesConvert_AsyncWorker(
MbFace * _underlying,        Napi::Promise::Deferred const &d
,
                         MbGrid & other    )
        :_underlying(_underlying),PromiseWorker(d),
                        other(other)
{};

    void Face_AttributesConvert_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AttributesConvert(
                        other
        );



        
        ExitParallelRegion();
    }

    void Face_AttributesConvert_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Face_AttributesConvert_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

