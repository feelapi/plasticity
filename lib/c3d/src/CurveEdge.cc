// This is a generated file, modify: generate/templates/CurveEdge.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/CurveEdge.h"

#include "tool_mutex.h"

Napi::Object CurveEdge::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "CurveEdge", {
        InstanceMethod<&CurveEdge::EdgeNormal>("EdgeNormal"),
        InstanceMethod<&CurveEdge::EdgeNormal_async>("EdgeNormal_async"),
        InstanceMethod<&CurveEdge::GetIntersectionCurve>("GetIntersectionCurve"),
        InstanceMethod<&CurveEdge::GetIntersectionCurve_async>("GetIntersectionCurve_async"),
        InstanceMethod<&CurveEdge::GetFacePlus>("GetFacePlus"),
        InstanceMethod<&CurveEdge::GetFacePlus_async>("GetFacePlus_async"),
        InstanceMethod<&CurveEdge::GetFaceMinus>("GetFaceMinus"),
        InstanceMethod<&CurveEdge::GetFaceMinus_async>("GetFaceMinus_async"),
        InstanceMethod<&CurveEdge::IsSplit>("IsSplit"),
        InstanceMethod<&CurveEdge::IsSplit_async>("IsSplit_async"),
        InstanceMethod<&CurveEdge::GetSpaceCurve>("GetSpaceCurve"),
        InstanceMethod<&CurveEdge::GetSpaceCurve_async>("GetSpaceCurve_async"),
        InstanceMethod<&CurveEdge::MakeCurve>("MakeCurve"),
        InstanceMethod<&CurveEdge::MakeCurve_async>("MakeCurve_async"),
        InstanceMethod<&CurveEdge::IsSmooth>("IsSmooth"),
        InstanceMethod<&CurveEdge::IsSmooth_async>("IsSmooth_async"),
        InstanceMethod<&CurveEdge::IsSeam>("IsSeam"),
        InstanceMethod<&CurveEdge::IsSeam_async>("IsSeam_async"),
        InstanceMethod<&CurveEdge::IsPole>("IsPole"),
        InstanceMethod<&CurveEdge::IsPole_async>("IsPole_async"),
        InstanceMethod<&CurveEdge::FaceNormal>("FaceNormal"),
        InstanceMethod<&CurveEdge::FaceNormal_async>("FaceNormal_async"),
        InstanceMethod<&CurveEdge::VertexNormal>("VertexNormal"),
        InstanceMethod<&CurveEdge::VertexNormal_async>("VertexNormal_async"),
        InstanceMethod<&CurveEdge::GetProlongEdges>("GetProlongEdges"),
        InstanceMethod<&CurveEdge::GetProlongEdges_async>("GetProlongEdges_async"),
        InstanceMethod<&CurveEdge::FindOrientedEdge>("FindOrientedEdge"),
        InstanceMethod<&CurveEdge::FindOrientedEdge_async>("FindOrientedEdge_async"),
        InstanceMethod<&CurveEdge::FindOrientedEdgePlus>("FindOrientedEdgePlus"),
        InstanceMethod<&CurveEdge::FindOrientedEdgePlus_async>("FindOrientedEdgePlus_async"),
        InstanceMethod<&CurveEdge::FindOrientedEdgeMinus>("FindOrientedEdgeMinus"),
        InstanceMethod<&CurveEdge::FindOrientedEdgeMinus_async>("FindOrientedEdgeMinus_async"),
        InstanceMethod<&CurveEdge::Point>("Point"),
        InstanceMethod<&CurveEdge::Point_async>("Point_async"),
        InstanceMethod<&CurveEdge::GetBegPoint>("GetBegPoint"),
        InstanceMethod<&CurveEdge::GetBegPoint_async>("GetBegPoint_async"),
        InstanceMethod<&CurveEdge::GetEndPoint>("GetEndPoint"),
        InstanceMethod<&CurveEdge::GetEndPoint_async>("GetEndPoint_async"),
        InstanceMethod<&CurveEdge::PointProjection>("PointProjection"),
        InstanceMethod<&CurveEdge::PointProjection_async>("PointProjection_async"),
        InstanceMethod<&CurveEdge::Reverse>("Reverse"),
        InstanceMethod<&CurveEdge::Reverse_async>("Reverse_async"),
        InstanceMethod<&CurveEdge::Tangent>("Tangent"),
        InstanceMethod<&CurveEdge::Tangent_async>("Tangent_async"),
        InstanceMethod<&CurveEdge::GetBegTangent>("GetBegTangent"),
        InstanceMethod<&CurveEdge::GetBegTangent_async>("GetBegTangent_async"),
        InstanceMethod<&CurveEdge::GetEndTangent>("GetEndTangent"),
        InstanceMethod<&CurveEdge::GetEndTangent_async>("GetEndTangent_async"),
        InstanceMethod<&CurveEdge::IsA>("IsA"),
        InstanceMethod<&CurveEdge::IsA_async>("IsA_async"),
        InstanceMethod<&CurveEdge::GetName>("GetName"),
        InstanceMethod<&CurveEdge::GetName_async>("GetName_async"),
        InstanceMethod<&CurveEdge::GetMainName>("GetMainName"),
        InstanceMethod<&CurveEdge::GetMainName_async>("GetMainName_async"),
        InstanceMethod<&CurveEdge::GetFirstName>("GetFirstName"),
        InstanceMethod<&CurveEdge::GetFirstName_async>("GetFirstName_async"),
        InstanceMethod<&CurveEdge::GetNameHash>("GetNameHash"),
        InstanceMethod<&CurveEdge::GetNameHash_async>("GetNameHash_async"),
        InstanceMethod<&CurveEdge::AddYourGabaritTo>("AddYourGabaritTo"),
        InstanceMethod<&CurveEdge::AddYourGabaritTo_async>("AddYourGabaritTo_async"),
        InstanceMethod<&CurveEdge::CalculateMesh>("CalculateMesh"),
        InstanceMethod<&CurveEdge::CalculateMesh_async>("CalculateMesh_async"),
        InstanceMethod<&CurveEdge::GetOwnChanged>("GetOwnChanged"),
        InstanceMethod<&CurveEdge::GetOwnChanged_async>("GetOwnChanged_async"),
        InstanceMethod<&CurveEdge::GetUseCount>("GetUseCount"),
        InstanceMethod<&CurveEdge::GetUseCount_async>("GetUseCount_async"),
        InstanceMethod<&CurveEdge::AddRef>("AddRef"),
        InstanceMethod<&CurveEdge::AddRef_async>("AddRef_async"),
        InstanceMethod<&CurveEdge::SetStyle>("SetStyle"),
        InstanceMethod<&CurveEdge::SetStyle_async>("SetStyle_async"),
        InstanceMethod<&CurveEdge::GetStyle>("GetStyle"),
        InstanceMethod<&CurveEdge::GetStyle_async>("GetStyle_async"),
        InstanceMethod<&CurveEdge::SetColor>("SetColor"),
        InstanceMethod<&CurveEdge::SetColor_async>("SetColor_async"),
        InstanceMethod<&CurveEdge::GetColor>("GetColor"),
        InstanceMethod<&CurveEdge::GetColor_async>("GetColor_async"),
        InstanceMethod<&CurveEdge::AttributesConvert>("AttributesConvert"),
        InstanceMethod<&CurveEdge::AttributesConvert_async>("AttributesConvert_async"),
            InstanceMethod<&CurveEdge::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("CurveEdge", func);

    Napi::Object global = env.Global();
    Napi::Object Object = global.Get("Object").ToObject();
    Napi::Function setPrototypeOf = Napi::Function(env, Object.Get("setPrototypeOf"));
    Napi::Value prototype = func.Get("prototype");

    Napi::Function superFunc = Edge::GetConstructor(env);
    Napi::FunctionReference* superConstructor = new Napi::FunctionReference();
    *superConstructor = Napi::Persistent(superFunc);

    Napi::Value superPrototype = superFunc.Get("prototype");
    setPrototypeOf.Call({prototype, superPrototype});
    setPrototypeOf.Call({func, superFunc});

    return exports;
}

CurveEdge::CurveEdge(const Napi::CallbackInfo& info) : Napi::ObjectWrap<CurveEdge>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        Napi::Error::New(env, "CurveEdge cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object CurveEdge::NewInstance(Napi::Env env, MbCurveEdge *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("CurveEdge");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    CurveEdge *unwrapped = CurveEdge::Unwrap(inst);
underlying->AddRef();    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function CurveEdge::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("CurveEdge");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

        Napi::Value CurveEdge::EdgeNormal(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    MbVector3D *p = new MbVector3D;


             double t = info[0].ToNumber().DoubleValue();



 bool  _result = _underlying->EdgeNormal
(
        t
,        *p

);


if (_result) {

    Napi::Value _to;

            if (p != NULL) {
        _to = Vector3D::NewInstance(env, (MbVector3D *)p);
    } else {
        _to = env.Null();
    }

            return _to;

} else {
    std::ostringstream msg;
    msg << "Operation EdgeNormal failed";
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value CurveEdge::EdgeNormal_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        CurveEdge_EdgeNormal_AsyncWorker* asyncWorker = new CurveEdge_EdgeNormal_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::GetIntersectionCurve(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



const MbSurfaceIntersectionCurve & _result = _underlying->GetIntersectionCurve
(

);



    Napi::Value _to;

            _to = SurfaceIntersectionCurve::NewInstance(env, (MbSurfaceIntersectionCurve *)&(_result));

            return _to;


        }

    Napi::Value CurveEdge::GetIntersectionCurve_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        CurveEdge_GetIntersectionCurve_AsyncWorker* asyncWorker = new CurveEdge_GetIntersectionCurve_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::GetFacePlus(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbFace * _result = _underlying->GetFacePlus
(

);



    Napi::Value _to;

            if (_result != NULL) {
        _to = Face::NewInstance(env, (MbFace *)_result);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value CurveEdge::GetFacePlus_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        CurveEdge_GetFacePlus_AsyncWorker* asyncWorker = new CurveEdge_GetFacePlus_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::GetFaceMinus(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbFace * _result = _underlying->GetFaceMinus
(

);



    Napi::Value _to;

            if (_result != NULL) {
        _to = Face::NewInstance(env, (MbFace *)_result);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value CurveEdge::GetFaceMinus_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        CurveEdge_GetFaceMinus_AsyncWorker* asyncWorker = new CurveEdge_GetFaceMinus_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::IsSplit(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            

             bool strict = info[0].ToBoolean();



 bool  _result = _underlying->IsSplit
(
        info.Length() == 0 || info[0].IsNull() ? false : strict

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value CurveEdge::IsSplit_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                     bool strict = info[0].ToBoolean();

        CurveEdge_IsSplit_AsyncWorker* asyncWorker = new CurveEdge_IsSplit_AsyncWorker(
_underlying,            deferred
,
                
                strict        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::GetSpaceCurve(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



const MbCurve3D * _result = _underlying->GetSpaceCurve
(

);



    Napi::Value _to;

            if (_result != NULL) {
        _to = Curve3D::NewInstance(env, (MbCurve3D *)_result);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value CurveEdge::GetSpaceCurve_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        CurveEdge_GetSpaceCurve_AsyncWorker* asyncWorker = new CurveEdge_GetSpaceCurve_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::MakeCurve(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbCurve3D * _result = _underlying->MakeCurve
(

);



    Napi::Value _to;

            if (_result != NULL) {
        _to = Curve3D::NewInstance(env, (MbCurve3D *)_result);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value CurveEdge::MakeCurve_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        CurveEdge_MakeCurve_AsyncWorker* asyncWorker = new CurveEdge_MakeCurve_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::IsSmooth(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->IsSmooth
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value CurveEdge::IsSmooth_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        CurveEdge_IsSmooth_AsyncWorker* asyncWorker = new CurveEdge_IsSmooth_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::IsSeam(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->IsSeam
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value CurveEdge::IsSeam_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        CurveEdge_IsSeam_AsyncWorker* asyncWorker = new CurveEdge_IsSeam_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::IsPole(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->IsPole
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value CurveEdge::IsPole_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        CurveEdge_IsPole_AsyncWorker* asyncWorker = new CurveEdge_IsPole_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::FaceNormal(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsBoolean()
)) {
                    Napi::Error::New(env, "boolean plus is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    MbVector3D *n = new MbVector3D;


             double t = info[0].ToNumber().DoubleValue();

             bool plus = info[1].ToBoolean();



 bool  _result = _underlying->FaceNormal
(
        t
,        *n
,        plus

);


if (_result) {

    Napi::Value _to;

            if (n != NULL) {
        _to = Vector3D::NewInstance(env, (MbVector3D *)n);
    } else {
        _to = env.Null();
    }

            return _to;

} else {
    std::ostringstream msg;
    msg << "Operation FaceNormal failed";
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value CurveEdge::FaceNormal_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsBoolean()
)) {
                    deferred.Reject(Napi::String::New(env, "boolean plus is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

                     bool plus = info[1].ToBoolean();

        CurveEdge_FaceNormal_AsyncWorker* asyncWorker = new CurveEdge_FaceNormal_AsyncWorker(
_underlying,            deferred
,
                
                t,
                
                plus        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::VertexNormal(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsBoolean()
)) {
                    Napi::Error::New(env, "boolean begin is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    MbVector3D *normal = new MbVector3D;


             bool begin = info[0].ToBoolean();



 bool  _result = _underlying->VertexNormal
(
        begin
,        *normal

);


if (_result) {

    Napi::Value _to;

            if (normal != NULL) {
        _to = Vector3D::NewInstance(env, (MbVector3D *)normal);
    } else {
        _to = env.Null();
    }

            return _to;

} else {
    std::ostringstream msg;
    msg << "Operation VertexNormal failed";
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value CurveEdge::VertexNormal_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsBoolean()
)) {
                    deferred.Reject(Napi::String::New(env, "boolean begin is required."));
                    return deferred.Promise();
            }


                     bool begin = info[0].ToBoolean();

        CurveEdge_VertexNormal_AsyncWorker* asyncWorker = new CurveEdge_VertexNormal_AsyncWorker(
_underlying,            deferred
,
                
                begin        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::GetProlongEdges(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                    RPArray<MbCurveEdge> *edges = new RPArray<MbCurveEdge>;




 bool  _result = _underlying->GetProlongEdges
(
        *edges

);



        Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

        _toReturn.Set(Napi::String::New(env, "_result"), _to);
            Napi::Array arr_edges = Napi::Array::New(env);
    for (size_t i = 0; i < edges->Count(); i++) {
            arr_edges[i] = CurveEdge::NewInstance(env,
                
                    (*edges)[i]
                
            );
    }
    _to = arr_edges;

        _toReturn.Set(Napi::String::New(env, "edges"), _to);
            return _toReturn;


        }

    Napi::Value CurveEdge::GetProlongEdges_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        CurveEdge_GetProlongEdges_AsyncWorker* asyncWorker = new CurveEdge_GetProlongEdges_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::FindOrientedEdge(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsBoolean()
)) {
                    Napi::Error::New(env, "boolean orient is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    const MbFace * face = NULL;
         MbLoop * findLoop = NULL;
        size_t index;


             bool orient = info[0].ToBoolean();



 bool  success = _underlying->FindOrientedEdge
(
        orient
,        face
,        findLoop
,        index

);



        Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

            _to = Napi::Boolean::New(env, success);

        _toReturn.Set(Napi::String::New(env, "success"), _to);
            if (face != NULL) {
        _to = Face::NewInstance(env, (MbFace *)face);
    } else {
        _to = env.Null();
    }

        _toReturn.Set(Napi::String::New(env, "face"), _to);
            if (findLoop != NULL) {
        _to = Loop::NewInstance(env, (MbLoop *)findLoop);
    } else {
        _to = env.Null();
    }

        _toReturn.Set(Napi::String::New(env, "findLoop"), _to);
            _to = Napi::Number::New(env, index);

        _toReturn.Set(Napi::String::New(env, "index"), _to);
            return _toReturn;


        }

    Napi::Value CurveEdge::FindOrientedEdge_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsBoolean()
)) {
                    deferred.Reject(Napi::String::New(env, "boolean orient is required."));
                    return deferred.Promise();
            }


                     bool orient = info[0].ToBoolean();

        CurveEdge_FindOrientedEdge_AsyncWorker* asyncWorker = new CurveEdge_FindOrientedEdge_AsyncWorker(
_underlying,            deferred
,
                
                orient        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::FindOrientedEdgePlus(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                    size_t loopIndex;
         MbLoop * findLoop = NULL;
        size_t index;




 bool  success = _underlying->FindOrientedEdgePlus
(
        loopIndex
,        findLoop
,        index

);



        Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

            _to = Napi::Boolean::New(env, success);

        _toReturn.Set(Napi::String::New(env, "success"), _to);
            _to = Napi::Number::New(env, loopIndex);

        _toReturn.Set(Napi::String::New(env, "loopIndex"), _to);
            if (findLoop != NULL) {
        _to = Loop::NewInstance(env, (MbLoop *)findLoop);
    } else {
        _to = env.Null();
    }

        _toReturn.Set(Napi::String::New(env, "findLoop"), _to);
            _to = Napi::Number::New(env, index);

        _toReturn.Set(Napi::String::New(env, "index"), _to);
            return _toReturn;


        }

    Napi::Value CurveEdge::FindOrientedEdgePlus_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        CurveEdge_FindOrientedEdgePlus_AsyncWorker* asyncWorker = new CurveEdge_FindOrientedEdgePlus_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::FindOrientedEdgeMinus(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                    size_t loopIndex;
         MbLoop * findLoop = NULL;
        size_t index;




 bool  success = _underlying->FindOrientedEdgeMinus
(
        loopIndex
,        findLoop
,        index

);



        Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

            _to = Napi::Boolean::New(env, success);

        _toReturn.Set(Napi::String::New(env, "success"), _to);
            _to = Napi::Number::New(env, loopIndex);

        _toReturn.Set(Napi::String::New(env, "loopIndex"), _to);
            if (findLoop != NULL) {
        _to = Loop::NewInstance(env, (MbLoop *)findLoop);
    } else {
        _to = env.Null();
    }

        _toReturn.Set(Napi::String::New(env, "findLoop"), _to);
            _to = Napi::Number::New(env, index);

        _toReturn.Set(Napi::String::New(env, "index"), _to);
            return _toReturn;


        }

    Napi::Value CurveEdge::FindOrientedEdgeMinus_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        CurveEdge_FindOrientedEdgeMinus_AsyncWorker* asyncWorker = new CurveEdge_FindOrientedEdgeMinus_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::Point(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    MbCartPoint3D *p = new MbCartPoint3D;


             double t = info[0].ToNumber().DoubleValue();



_underlying->Point
(
        t
,        *p

);



    Napi::Value _to;

            if (p != NULL) {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)p);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value CurveEdge::Point_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        CurveEdge_Point_AsyncWorker* asyncWorker = new CurveEdge_Point_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::GetBegPoint(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                    MbCartPoint3D *p = new MbCartPoint3D;




_underlying->GetBegPoint
(
        *p

);



    Napi::Value _to;

            if (p != NULL) {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)p);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value CurveEdge::GetBegPoint_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        CurveEdge_GetBegPoint_AsyncWorker* asyncWorker = new CurveEdge_GetBegPoint_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::GetEndPoint(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                    MbCartPoint3D *p = new MbCartPoint3D;




_underlying->GetEndPoint
(
        *p

);



    Napi::Value _to;

            if (p != NULL) {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)p);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value CurveEdge::GetEndPoint_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        CurveEdge_GetEndPoint_AsyncWorker* asyncWorker = new CurveEdge_GetEndPoint_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::PointProjection(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "CartPoint3D p is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'p'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class CartPoint3D *p_ = CartPoint3D::Unwrap(info[0].ToObject());
        
        const MbCartPoint3D & p =*p_->_underlying;
        



 double  _result = _underlying->PointProjection
(
        p

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value CurveEdge::PointProjection_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "CartPoint3D p is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'p'"));
                return deferred.Promise();
        }
        const class CartPoint3D *p_ = CartPoint3D::Unwrap(info[0].ToObject());
        
        const MbCartPoint3D & p =*p_->_underlying;
        

        CurveEdge_PointProjection_AsyncWorker* asyncWorker = new CurveEdge_PointProjection_AsyncWorker(
_underlying,            deferred
,
                
                p        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::Reverse(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->Reverse
(

);



    return env.Undefined();


        }

    Napi::Value CurveEdge::Reverse_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        CurveEdge_Reverse_AsyncWorker* asyncWorker = new CurveEdge_Reverse_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::Tangent(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number t is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    MbVector3D *tan = new MbVector3D;


             double t = info[0].ToNumber().DoubleValue();



_underlying->Tangent
(
        t
,        *tan

);



    Napi::Value _to;

            if (tan != NULL) {
        _to = Vector3D::NewInstance(env, (MbVector3D *)tan);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value CurveEdge::Tangent_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number t is required."));
                    return deferred.Promise();
            }


                     double t = info[0].ToNumber().DoubleValue();

        CurveEdge_Tangent_AsyncWorker* asyncWorker = new CurveEdge_Tangent_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::GetBegTangent(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                    MbVector3D *tan = new MbVector3D;




_underlying->GetBegTangent
(
        *tan

);



    Napi::Value _to;

            if (tan != NULL) {
        _to = Vector3D::NewInstance(env, (MbVector3D *)tan);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value CurveEdge::GetBegTangent_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        CurveEdge_GetBegTangent_AsyncWorker* asyncWorker = new CurveEdge_GetBegTangent_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::GetEndTangent(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                    MbVector3D *tan = new MbVector3D;




_underlying->GetEndTangent
(
        *tan

);



    Napi::Value _to;

            if (tan != NULL) {
        _to = Vector3D::NewInstance(env, (MbVector3D *)tan);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value CurveEdge::GetEndTangent_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        CurveEdge_GetEndTangent_AsyncWorker* asyncWorker = new CurveEdge_GetEndTangent_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::IsA(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbeTopologyType  _result = _underlying->IsA
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value CurveEdge::IsA_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        CurveEdge_IsA_AsyncWorker* asyncWorker = new CurveEdge_IsA_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::GetName(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



const MbName & _result = _underlying->GetName
(

);



    Napi::Value _to;

            _to = Name::NewInstance(env, new MbName(_result));

            return _to;


        }

    Napi::Value CurveEdge::GetName_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        CurveEdge_GetName_AsyncWorker* asyncWorker = new CurveEdge_GetName_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::GetMainName(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 SimpleName  _result = _underlying->GetMainName
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value CurveEdge::GetMainName_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        CurveEdge_GetMainName_AsyncWorker* asyncWorker = new CurveEdge_GetMainName_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::GetFirstName(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 SimpleName  _result = _underlying->GetFirstName
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value CurveEdge::GetFirstName_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        CurveEdge_GetFirstName_AsyncWorker* asyncWorker = new CurveEdge_GetFirstName_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::GetNameHash(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 SimpleName  _result = _underlying->GetNameHash
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value CurveEdge::GetNameHash_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        CurveEdge_GetNameHash_AsyncWorker* asyncWorker = new CurveEdge_GetNameHash_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::AddYourGabaritTo(const Napi::CallbackInfo& info) {
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

    Napi::Value CurveEdge::AddYourGabaritTo_async(const Napi::CallbackInfo& info) {
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
        

        CurveEdge_AddYourGabaritTo_AsyncWorker* asyncWorker = new CurveEdge_AddYourGabaritTo_AsyncWorker(
_underlying,            deferred
,
                
                cube        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::CalculateMesh(const Napi::CallbackInfo& info) {
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

    Napi::Value CurveEdge::CalculateMesh_async(const Napi::CallbackInfo& info) {
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
        

        CurveEdge_CalculateMesh_AsyncWorker* asyncWorker = new CurveEdge_CalculateMesh_AsyncWorker(
_underlying,            deferred
,
                
                stepData,
                
                note        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::GetOwnChanged(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->GetOwnChanged
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value CurveEdge::GetOwnChanged_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        CurveEdge_GetOwnChanged_AsyncWorker* asyncWorker = new CurveEdge_GetOwnChanged_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::GetUseCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 refcount_t  _result = _underlying->GetUseCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value CurveEdge::GetUseCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        CurveEdge_GetUseCount_AsyncWorker* asyncWorker = new CurveEdge_GetUseCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::AddRef(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->AddRef
(

);



    return env.Undefined();


        }

    Napi::Value CurveEdge::AddRef_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        CurveEdge_AddRef_AsyncWorker* asyncWorker = new CurveEdge_AddRef_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::SetStyle(const Napi::CallbackInfo& info) {
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

    Napi::Value CurveEdge::SetStyle_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "int s is required."));
                    return deferred.Promise();
            }


                     int s = info[0].ToNumber().Int64Value();

        CurveEdge_SetStyle_AsyncWorker* asyncWorker = new CurveEdge_SetStyle_AsyncWorker(
_underlying,            deferred
,
                
                s        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::GetStyle(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 int  _result = _underlying->GetStyle
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value CurveEdge::GetStyle_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        CurveEdge_GetStyle_AsyncWorker* asyncWorker = new CurveEdge_GetStyle_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::SetColor(const Napi::CallbackInfo& info) {
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

    Napi::Value CurveEdge::SetColor_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "uint32 c is required."));
                    return deferred.Promise();
            }


                     int c = info[0].ToNumber().Int64Value();

        CurveEdge_SetColor_AsyncWorker* asyncWorker = new CurveEdge_SetColor_AsyncWorker(
_underlying,            deferred
,
                
                c        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::GetColor(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 uint32  _result = _underlying->GetColor
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value CurveEdge::GetColor_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        CurveEdge_GetColor_AsyncWorker* asyncWorker = new CurveEdge_GetColor_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveEdge::AttributesConvert(const Napi::CallbackInfo& info) {
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

    Napi::Value CurveEdge::AttributesConvert_async(const Napi::CallbackInfo& info) {
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
        

        CurveEdge_AttributesConvert_AsyncWorker* asyncWorker = new CurveEdge_AttributesConvert_AsyncWorker(
_underlying,            deferred
,
                
                other        );
        asyncWorker->Queue();
        return deferred.Promise();
    }



    Napi::Value CurveEdge::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }

CurveEdge::~CurveEdge() {
    // std::cout << "calling ::DeleteItem on CurveEdge for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

    CurveEdge_EdgeNormal_AsyncWorker::CurveEdge_EdgeNormal_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
,
                         double  t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void CurveEdge_EdgeNormal_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector3D *p = new MbVector3D;


        
         bool  _result = _underlying->EdgeNormal(
                        t
,                        *p
        );

        if (_result) {

                this->p = p;

                } else {
            std::ostringstream msg;
            msg << "Operation EdgeNormal failed";
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void CurveEdge_EdgeNormal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbVector3D * p = this->p;
                if (p != NULL) {
        _to = Vector3D::NewInstance(env, (MbVector3D *)p);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void CurveEdge_EdgeNormal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_GetIntersectionCurve_AsyncWorker::CurveEdge_GetIntersectionCurve_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void CurveEdge_GetIntersectionCurve_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        const MbSurfaceIntersectionCurve & _result = _underlying->GetIntersectionCurve(
        );


                this->_result = (MbSurfaceIntersectionCurve *)&(_result);

        
        ExitParallelRegion();
    }

    void CurveEdge_GetIntersectionCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            const MbSurfaceIntersectionCurve * _result = this->_result;
                _to = SurfaceIntersectionCurve::NewInstance(env, (MbSurfaceIntersectionCurve *)&(_result));

            deferred.Resolve(_to);
    }

    void CurveEdge_GetIntersectionCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_GetFacePlus_AsyncWorker::CurveEdge_GetFacePlus_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void CurveEdge_GetFacePlus_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbFace * _result = _underlying->GetFacePlus(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void CurveEdge_GetFacePlus_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void CurveEdge_GetFacePlus_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_GetFaceMinus_AsyncWorker::CurveEdge_GetFaceMinus_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void CurveEdge_GetFaceMinus_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbFace * _result = _underlying->GetFaceMinus(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void CurveEdge_GetFaceMinus_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void CurveEdge_GetFaceMinus_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_IsSplit_AsyncWorker::CurveEdge_IsSplit_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
,
                         bool  strict    )
        :_underlying(_underlying),PromiseWorker(d),
                        strict(strict)
{};

    void CurveEdge_IsSplit_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsSplit(
                        strict
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void CurveEdge_IsSplit_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void CurveEdge_IsSplit_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_GetSpaceCurve_AsyncWorker::CurveEdge_GetSpaceCurve_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void CurveEdge_GetSpaceCurve_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        const MbCurve3D * _result = _underlying->GetSpaceCurve(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void CurveEdge_GetSpaceCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            const MbCurve3D * _result = this->_result;
                if (_result != NULL) {
        _to = Curve3D::NewInstance(env, (MbCurve3D *)_result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void CurveEdge_GetSpaceCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_MakeCurve_AsyncWorker::CurveEdge_MakeCurve_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void CurveEdge_MakeCurve_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbCurve3D * _result = _underlying->MakeCurve(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void CurveEdge_MakeCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbCurve3D * _result = this->_result;
                if (_result != NULL) {
        _to = Curve3D::NewInstance(env, (MbCurve3D *)_result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void CurveEdge_MakeCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_IsSmooth_AsyncWorker::CurveEdge_IsSmooth_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void CurveEdge_IsSmooth_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsSmooth(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void CurveEdge_IsSmooth_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void CurveEdge_IsSmooth_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_IsSeam_AsyncWorker::CurveEdge_IsSeam_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void CurveEdge_IsSeam_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsSeam(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void CurveEdge_IsSeam_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void CurveEdge_IsSeam_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_IsPole_AsyncWorker::CurveEdge_IsPole_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void CurveEdge_IsPole_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->IsPole(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void CurveEdge_IsPole_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void CurveEdge_IsPole_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_FaceNormal_AsyncWorker::CurveEdge_FaceNormal_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
,
                         double  t,
                         bool  plus    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
,
                        plus(plus)
{};

    void CurveEdge_FaceNormal_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector3D *n = new MbVector3D;


        
         bool  _result = _underlying->FaceNormal(
                        t
,                        *n
,                        plus
        );

        if (_result) {

                this->n = n;

                } else {
            std::ostringstream msg;
            msg << "Operation FaceNormal failed";
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void CurveEdge_FaceNormal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbVector3D * n = this->n;
                if (n != NULL) {
        _to = Vector3D::NewInstance(env, (MbVector3D *)n);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void CurveEdge_FaceNormal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_VertexNormal_AsyncWorker::CurveEdge_VertexNormal_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
,
                         bool  begin    )
        :_underlying(_underlying),PromiseWorker(d),
                        begin(begin)
{};

    void CurveEdge_VertexNormal_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector3D *normal = new MbVector3D;


        
         bool  _result = _underlying->VertexNormal(
                        begin
,                        *normal
        );

        if (_result) {

                this->normal = normal;

                } else {
            std::ostringstream msg;
            msg << "Operation VertexNormal failed";
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void CurveEdge_VertexNormal_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbVector3D * normal = this->normal;
                if (normal != NULL) {
        _to = Vector3D::NewInstance(env, (MbVector3D *)normal);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void CurveEdge_VertexNormal_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_GetProlongEdges_AsyncWorker::CurveEdge_GetProlongEdges_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void CurveEdge_GetProlongEdges_AsyncWorker::Execute() {
        EnterParallelRegion();

                RPArray<MbCurveEdge> *edges = new RPArray<MbCurveEdge>;


        
         bool  _result = _underlying->GetProlongEdges(
                        *edges
        );


                this->_result = _result;
                this->edges = edges;

        
        ExitParallelRegion();
    }

    void CurveEdge_GetProlongEdges_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            Napi::Object _toReturn = Napi::Object::New(env);

                 bool  _result = this->_result;
                    _to = Napi::Boolean::New(env, _result);

                _toReturn.Set(Napi::String::New(env, "_result"), _to);
                 RPArray<MbCurveEdge> * edges = this->edges;
                    Napi::Array arr_edges = Napi::Array::New(env);
    for (size_t i = 0; i < edges->Count(); i++) {
            arr_edges[i] = CurveEdge::NewInstance(env,
                
                    (*edges)[i]
                
            );
    }
    _to = arr_edges;

                _toReturn.Set(Napi::String::New(env, "edges"), _to);

            deferred.Resolve(_toReturn);
    }

    void CurveEdge_GetProlongEdges_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_FindOrientedEdge_AsyncWorker::CurveEdge_FindOrientedEdge_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
,
                         bool  orient    )
        :_underlying(_underlying),PromiseWorker(d),
                        orient(orient)
{};

    void CurveEdge_FindOrientedEdge_AsyncWorker::Execute() {
        EnterParallelRegion();

                const MbFace * face = NULL;
         MbLoop * findLoop = NULL;
        size_t index;


        
         bool  success = _underlying->FindOrientedEdge(
                        orient
,                        face
,                        findLoop
,                        index
        );


                this->success = success;
                this->face = face;
                this->findLoop = findLoop;
                this->index = index;

        
        ExitParallelRegion();
    }

    void CurveEdge_FindOrientedEdge_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            Napi::Object _toReturn = Napi::Object::New(env);

                 bool  success = this->success;
                    _to = Napi::Boolean::New(env, success);

                _toReturn.Set(Napi::String::New(env, "success"), _to);
                const MbFace * face = this->face;
                    if (face != NULL) {
        _to = Face::NewInstance(env, (MbFace *)face);
    } else {
        _to = env.Null();
    }

                _toReturn.Set(Napi::String::New(env, "face"), _to);
                 MbLoop * findLoop = this->findLoop;
                    if (findLoop != NULL) {
        _to = Loop::NewInstance(env, (MbLoop *)findLoop);
    } else {
        _to = env.Null();
    }

                _toReturn.Set(Napi::String::New(env, "findLoop"), _to);
                 size_t  index = this->index;
                    _to = Napi::Number::New(env, index);

                _toReturn.Set(Napi::String::New(env, "index"), _to);

            deferred.Resolve(_toReturn);
    }

    void CurveEdge_FindOrientedEdge_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_FindOrientedEdgePlus_AsyncWorker::CurveEdge_FindOrientedEdgePlus_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void CurveEdge_FindOrientedEdgePlus_AsyncWorker::Execute() {
        EnterParallelRegion();

                size_t loopIndex;
         MbLoop * findLoop = NULL;
        size_t index;


        
         bool  success = _underlying->FindOrientedEdgePlus(
                        loopIndex
,                        findLoop
,                        index
        );


                this->success = success;
                this->loopIndex = loopIndex;
                this->findLoop = findLoop;
                this->index = index;

        
        ExitParallelRegion();
    }

    void CurveEdge_FindOrientedEdgePlus_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            Napi::Object _toReturn = Napi::Object::New(env);

                 bool  success = this->success;
                    _to = Napi::Boolean::New(env, success);

                _toReturn.Set(Napi::String::New(env, "success"), _to);
                 size_t  loopIndex = this->loopIndex;
                    _to = Napi::Number::New(env, loopIndex);

                _toReturn.Set(Napi::String::New(env, "loopIndex"), _to);
                 MbLoop * findLoop = this->findLoop;
                    if (findLoop != NULL) {
        _to = Loop::NewInstance(env, (MbLoop *)findLoop);
    } else {
        _to = env.Null();
    }

                _toReturn.Set(Napi::String::New(env, "findLoop"), _to);
                 size_t  index = this->index;
                    _to = Napi::Number::New(env, index);

                _toReturn.Set(Napi::String::New(env, "index"), _to);

            deferred.Resolve(_toReturn);
    }

    void CurveEdge_FindOrientedEdgePlus_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_FindOrientedEdgeMinus_AsyncWorker::CurveEdge_FindOrientedEdgeMinus_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void CurveEdge_FindOrientedEdgeMinus_AsyncWorker::Execute() {
        EnterParallelRegion();

                size_t loopIndex;
         MbLoop * findLoop = NULL;
        size_t index;


        
         bool  success = _underlying->FindOrientedEdgeMinus(
                        loopIndex
,                        findLoop
,                        index
        );


                this->success = success;
                this->loopIndex = loopIndex;
                this->findLoop = findLoop;
                this->index = index;

        
        ExitParallelRegion();
    }

    void CurveEdge_FindOrientedEdgeMinus_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            Napi::Object _toReturn = Napi::Object::New(env);

                 bool  success = this->success;
                    _to = Napi::Boolean::New(env, success);

                _toReturn.Set(Napi::String::New(env, "success"), _to);
                 size_t  loopIndex = this->loopIndex;
                    _to = Napi::Number::New(env, loopIndex);

                _toReturn.Set(Napi::String::New(env, "loopIndex"), _to);
                 MbLoop * findLoop = this->findLoop;
                    if (findLoop != NULL) {
        _to = Loop::NewInstance(env, (MbLoop *)findLoop);
    } else {
        _to = env.Null();
    }

                _toReturn.Set(Napi::String::New(env, "findLoop"), _to);
                 size_t  index = this->index;
                    _to = Napi::Number::New(env, index);

                _toReturn.Set(Napi::String::New(env, "index"), _to);

            deferred.Resolve(_toReturn);
    }

    void CurveEdge_FindOrientedEdgeMinus_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_Point_AsyncWorker::CurveEdge_Point_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
,
                         double  t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void CurveEdge_Point_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbCartPoint3D *p = new MbCartPoint3D;


        
        _underlying->Point(
                        t
,                        *p
        );


                this->p = p;

        
        ExitParallelRegion();
    }

    void CurveEdge_Point_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbCartPoint3D * p = this->p;
                if (p != NULL) {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)p);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void CurveEdge_Point_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_GetBegPoint_AsyncWorker::CurveEdge_GetBegPoint_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void CurveEdge_GetBegPoint_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbCartPoint3D *p = new MbCartPoint3D;


        
        _underlying->GetBegPoint(
                        *p
        );


                this->p = p;

        
        ExitParallelRegion();
    }

    void CurveEdge_GetBegPoint_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbCartPoint3D * p = this->p;
                if (p != NULL) {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)p);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void CurveEdge_GetBegPoint_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_GetEndPoint_AsyncWorker::CurveEdge_GetEndPoint_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void CurveEdge_GetEndPoint_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbCartPoint3D *p = new MbCartPoint3D;


        
        _underlying->GetEndPoint(
                        *p
        );


                this->p = p;

        
        ExitParallelRegion();
    }

    void CurveEdge_GetEndPoint_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbCartPoint3D * p = this->p;
                if (p != NULL) {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)p);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void CurveEdge_GetEndPoint_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_PointProjection_AsyncWorker::CurveEdge_PointProjection_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbCartPoint3D & p    )
        :_underlying(_underlying),PromiseWorker(d),
                        p(p)
{};

    void CurveEdge_PointProjection_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         double  _result = _underlying->PointProjection(
                        p
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void CurveEdge_PointProjection_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             double  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void CurveEdge_PointProjection_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_Reverse_AsyncWorker::CurveEdge_Reverse_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void CurveEdge_Reverse_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Reverse(
        );



        
        ExitParallelRegion();
    }

    void CurveEdge_Reverse_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void CurveEdge_Reverse_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_Tangent_AsyncWorker::CurveEdge_Tangent_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
,
                         double  t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void CurveEdge_Tangent_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector3D *tan = new MbVector3D;


        
        _underlying->Tangent(
                        t
,                        *tan
        );


                this->tan = tan;

        
        ExitParallelRegion();
    }

    void CurveEdge_Tangent_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbVector3D * tan = this->tan;
                if (tan != NULL) {
        _to = Vector3D::NewInstance(env, (MbVector3D *)tan);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void CurveEdge_Tangent_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_GetBegTangent_AsyncWorker::CurveEdge_GetBegTangent_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void CurveEdge_GetBegTangent_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector3D *tan = new MbVector3D;


        
        _underlying->GetBegTangent(
                        *tan
        );


                this->tan = tan;

        
        ExitParallelRegion();
    }

    void CurveEdge_GetBegTangent_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbVector3D * tan = this->tan;
                if (tan != NULL) {
        _to = Vector3D::NewInstance(env, (MbVector3D *)tan);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void CurveEdge_GetBegTangent_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_GetEndTangent_AsyncWorker::CurveEdge_GetEndTangent_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void CurveEdge_GetEndTangent_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbVector3D *tan = new MbVector3D;


        
        _underlying->GetEndTangent(
                        *tan
        );


                this->tan = tan;

        
        ExitParallelRegion();
    }

    void CurveEdge_GetEndTangent_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbVector3D * tan = this->tan;
                if (tan != NULL) {
        _to = Vector3D::NewInstance(env, (MbVector3D *)tan);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void CurveEdge_GetEndTangent_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_IsA_AsyncWorker::CurveEdge_IsA_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void CurveEdge_IsA_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeTopologyType  _result = _underlying->IsA(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void CurveEdge_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeTopologyType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void CurveEdge_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_GetName_AsyncWorker::CurveEdge_GetName_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void CurveEdge_GetName_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        const MbName & _result = _underlying->GetName(
        );


                        this->_result = new (MbName)(_result);

        
        ExitParallelRegion();
    }

    void CurveEdge_GetName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            const MbName * _result = this->_result;
                _to = Name::NewInstance(env, (MbName *)&(_result));

            deferred.Resolve(_to);
    }

    void CurveEdge_GetName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_GetMainName_AsyncWorker::CurveEdge_GetMainName_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void CurveEdge_GetMainName_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         SimpleName  _result = _underlying->GetMainName(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void CurveEdge_GetMainName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             SimpleName  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void CurveEdge_GetMainName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_GetFirstName_AsyncWorker::CurveEdge_GetFirstName_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void CurveEdge_GetFirstName_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         SimpleName  _result = _underlying->GetFirstName(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void CurveEdge_GetFirstName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             SimpleName  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void CurveEdge_GetFirstName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_GetNameHash_AsyncWorker::CurveEdge_GetNameHash_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void CurveEdge_GetNameHash_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         SimpleName  _result = _underlying->GetNameHash(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void CurveEdge_GetNameHash_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             SimpleName  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void CurveEdge_GetNameHash_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_AddYourGabaritTo_AsyncWorker::CurveEdge_AddYourGabaritTo_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
,
                         MbCube & cube    )
        :_underlying(_underlying),PromiseWorker(d),
                        cube(cube)
{};

    void CurveEdge_AddYourGabaritTo_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddYourGabaritTo(
                        cube
        );



        
        ExitParallelRegion();
    }

    void CurveEdge_AddYourGabaritTo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void CurveEdge_AddYourGabaritTo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_CalculateMesh_AsyncWorker::CurveEdge_CalculateMesh_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbStepData & stepData,
                        const MbFormNote & note    )
        :_underlying(_underlying),PromiseWorker(d),
                        stepData(stepData)
,
                        note(note)
{};

    void CurveEdge_CalculateMesh_AsyncWorker::Execute() {
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

    void CurveEdge_CalculateMesh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void CurveEdge_CalculateMesh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_GetOwnChanged_AsyncWorker::CurveEdge_GetOwnChanged_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void CurveEdge_GetOwnChanged_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->GetOwnChanged(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void CurveEdge_GetOwnChanged_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void CurveEdge_GetOwnChanged_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_GetUseCount_AsyncWorker::CurveEdge_GetUseCount_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void CurveEdge_GetUseCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         refcount_t  _result = _underlying->GetUseCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void CurveEdge_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             refcount_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void CurveEdge_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_AddRef_AsyncWorker::CurveEdge_AddRef_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void CurveEdge_AddRef_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddRef(
        );



        
        ExitParallelRegion();
    }

    void CurveEdge_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void CurveEdge_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_SetStyle_AsyncWorker::CurveEdge_SetStyle_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
,
                         int  s    )
        :_underlying(_underlying),PromiseWorker(d),
                        s(s)
{};

    void CurveEdge_SetStyle_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetStyle(
                        s
        );



        
        ExitParallelRegion();
    }

    void CurveEdge_SetStyle_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void CurveEdge_SetStyle_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_GetStyle_AsyncWorker::CurveEdge_GetStyle_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void CurveEdge_GetStyle_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         int  _result = _underlying->GetStyle(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void CurveEdge_GetStyle_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             int  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void CurveEdge_GetStyle_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_SetColor_AsyncWorker::CurveEdge_SetColor_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
,
                         uint32  c    )
        :_underlying(_underlying),PromiseWorker(d),
                        c(c)
{};

    void CurveEdge_SetColor_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetColor(
                        c
        );



        
        ExitParallelRegion();
    }

    void CurveEdge_SetColor_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void CurveEdge_SetColor_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_GetColor_AsyncWorker::CurveEdge_GetColor_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void CurveEdge_GetColor_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         uint32  _result = _underlying->GetColor(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void CurveEdge_GetColor_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             uint32  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void CurveEdge_GetColor_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveEdge_AttributesConvert_AsyncWorker::CurveEdge_AttributesConvert_AsyncWorker(
MbCurveEdge * _underlying,        Napi::Promise::Deferred const &d
,
                         MbGrid & other    )
        :_underlying(_underlying),PromiseWorker(d),
                        other(other)
{};

    void CurveEdge_AttributesConvert_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AttributesConvert(
                        other
        );



        
        ExitParallelRegion();
    }

    void CurveEdge_AttributesConvert_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void CurveEdge_AttributesConvert_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

