// This is a generated file, modify: generate/templates/FaceShell.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/FaceShell.h"

#include "tool_mutex.h"

Napi::Object FaceShell::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func =
        DefineClass(env, "FaceShell",
                    {
                        InstanceMethod<&FaceShell::GetBoundaryEdges>("GetBoundaryEdges"),
                        InstanceMethod<&FaceShell::GetBoundaryEdges_async>("GetBoundaryEdges_async"),
                        InstanceMethod<&FaceShell::GetFaces>("GetFaces"),
                        InstanceMethod<&FaceShell::GetFaces_async>("GetFaces_async"),
                        InstanceMethod<&FaceShell::FindFacesIndexByEdges>("FindFacesIndexByEdges"),
                        InstanceMethod<&FaceShell::FindFacesIndexByEdges_async>("FindFacesIndexByEdges_async"),
                        InstanceMethod<&FaceShell::FindEdgesByFacesIndex>("FindEdgesByFacesIndex"),
                        InstanceMethod<&FaceShell::FindEdgesByFacesIndex_async>("FindEdgesByFacesIndex_async"),
                        InstanceMethod<&FaceShell::Copy>("Copy"),
                        InstanceMethod<&FaceShell::Copy_async>("Copy_async"),
                        InstanceMethod<&FaceShell::GetEdge>("GetEdge"),
                        InstanceMethod<&FaceShell::GetEdge_async>("GetEdge_async"),
                        InstanceMethod<&FaceShell::SetOwnChangedThrough>("SetOwnChangedThrough"),
                        InstanceMethod<&FaceShell::SetOwnChangedThrough_async>("SetOwnChangedThrough_async"),
                        InstanceMethod<&FaceShell::GetUseCount>("GetUseCount"),
                        InstanceMethod<&FaceShell::GetUseCount_async>("GetUseCount_async"),
                        InstanceMethod<&FaceShell::AddRef>("AddRef"),
                        InstanceMethod<&FaceShell::AddRef_async>("AddRef_async"),
                        InstanceMethod<&FaceShell::Id>("Id"),

                    });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("FaceShell", func);

    Napi::Object global = env.Global();
    Napi::Object Object = global.Get("Object").ToObject();
    Napi::Function setPrototypeOf = Napi::Function(env, Object.Get("setPrototypeOf"));
    Napi::Value prototype = func.Get("prototype");

    Napi::Function superFunc = TopItem::GetConstructor(env);
    Napi::FunctionReference *superConstructor = new Napi::FunctionReference();
    *superConstructor = Napi::Persistent(superFunc);

    Napi::Value superPrototype = superFunc.Get("prototype");
    setPrototypeOf.Call({prototype, superPrototype});
    setPrototypeOf.Call({func, superFunc});

    return exports;
}

FaceShell::FaceShell(const Napi::CallbackInfo &info) : Napi::ObjectWrap<FaceShell>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 0

    )
    {

        MbFaceShell *underlying = new MbFaceShell();
        if (underlying == NULL)
        {
            Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
            return;
        }
        underlying->AddRef();
        this->_underlying = underlying;
    }
    else
    {
        Napi::Error::New(env, "No matching constructor").ThrowAsJavaScriptException();
        return;
    }
}

Napi::Object FaceShell::NewInstance(Napi::Env env, MbFaceShell *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("FaceShell");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    FaceShell *unwrapped = FaceShell::Unwrap(inst);
    underlying->AddRef();
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function FaceShell::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("FaceShell");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value FaceShell::GetBoundaryEdges(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    RPArray<MbCurveEdge> *edges = new RPArray<MbCurveEdge>;

    _underlying->GetBoundaryEdges(*edges

    );

    Napi::Value _to;

    Napi::Array arr_edges = Napi::Array::New(env);
    for (size_t i = 0; i < edges->Count(); i++)
    {
        arr_edges[i] = CurveEdge::NewInstance(env,

                                              (*edges)[i]

        );
    }
    _to = arr_edges;

    return _to;
}

Napi::Value FaceShell::GetBoundaryEdges_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    FaceShell_GetBoundaryEdges_AsyncWorker *asyncWorker =
        new FaceShell_GetBoundaryEdges_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value FaceShell::GetFaces(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    RPArray<MbFace> *faces = new RPArray<MbFace>;

    _underlying->GetFaces(*faces

    );

    Napi::Value _to;

    Napi::Array arr_faces = Napi::Array::New(env);
    for (size_t i = 0; i < faces->Count(); i++)
    {
        arr_faces[i] = Face::NewInstance(env,

                                         (*faces)[i]

        );
    }
    _to = arr_faces;

    return _to;
}

Napi::Value FaceShell::GetFaces_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    FaceShell_GetFaces_AsyncWorker *asyncWorker = new FaceShell_GetFaces_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value FaceShell::FindFacesIndexByEdges(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsArray()))
    {
        Napi::Error::New(env, "Array init is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    RPArray<MbFunction> *functions = new RPArray<MbFunction>;
    RPArray<MbCurve3D> *slideways = new RPArray<MbCurve3D>;
    SArray<MbEdgeFacesIndexes> *indexes = new SArray<MbEdgeFacesIndexes>;

    SArray<MbEdgeFunction> init;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        const Napi::Array init_ = Napi::Array(env, info[0]);
        init = SArray<MbEdgeFunction>(init_.Length(), 1);

        for (size_t i = 0; i < init_.Length(); i++)
        {
            if (init_[i].IsNull() || init_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!init_[i].IsObject() || !init_[i].ToObject().InstanceOf(EdgeFunction::GetConstructor(env)))
            {
                Napi::Error::New(env, "EdgeFunction init is required.").ThrowAsJavaScriptException();
                return env.Undefined();
            }
            else
            {
                init.Add(*EdgeFunction::Unwrap(init_[i].ToObject())->_underlying);
            }
        }
    }

    bool _result = _underlying->FindFacesIndexByEdges(init, *functions, *slideways, *indexes

    );

    if (_result)
    {

        Napi::Object _toReturn = Napi::Object::New(env);
        Napi::Value _to;

        Napi::Array arr_functions = Napi::Array::New(env);
        for (size_t i = 0; i < functions->Count(); i++)
        {
            arr_functions[i] = Function::NewInstance(env,

                                                     (*functions)[i]

            );
        }
        _to = arr_functions;

        _toReturn.Set(Napi::String::New(env, "functions"), _to);
        Napi::Array arr_slideways = Napi::Array::New(env);
        for (size_t i = 0; i < slideways->Count(); i++)
        {
            arr_slideways[i] = Curve3D::NewInstance(env,

                                                    (*slideways)[i]

            );
        }
        _to = arr_slideways;

        _toReturn.Set(Napi::String::New(env, "slideways"), _to);
        Napi::Array arr_indexes = Napi::Array::New(env);
        for (size_t i = 0; i < indexes->Count(); i++)
        {
            arr_indexes[i] = EdgeFacesIndexes::NewInstance(env,

                                                           new MbEdgeFacesIndexes((*indexes)[i])

            );
        }
        _to = arr_indexes;

        _toReturn.Set(Napi::String::New(env, "indexes"), _to);
        return _toReturn;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation FindFacesIndexByEdges failed";
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value FaceShell::FindFacesIndexByEdges_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsArray()))
    {
        deferred.Reject(Napi::String::New(env, "Array init is required."));
        return deferred.Promise();
    }

    SArray<MbEdgeFunction> *init;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        const Napi::Array init_ = Napi::Array(env, info[0]);
        init = new SArray<MbEdgeFunction>(init_.Length(), 1);

        for (size_t i = 0; i < init_.Length(); i++)
        {
            if (init_[i].IsNull() || init_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!init_[i].IsObject() || !init_[i].ToObject().InstanceOf(EdgeFunction::GetConstructor(env)))
            {
                deferred.Reject(Napi::String::New(env, "EdgeFunction init is required."));
                return deferred.Promise();
            }
            else
            {
                init->Add(*EdgeFunction::Unwrap(init_[i].ToObject())->_underlying);
            }
        }
    }

    FaceShell_FindFacesIndexByEdges_AsyncWorker *asyncWorker =
        new FaceShell_FindFacesIndexByEdges_AsyncWorker(_underlying, deferred, *init);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value FaceShell::FindEdgesByFacesIndex(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsArray()))
    {
        Napi::Error::New(env, "Array indexes is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsArray()))
    {
        Napi::Error::New(env, "Array initFunctions is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 || !(info[2].IsArray()))
    {
        Napi::Error::New(env, "Array initSlideways is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    RPArray<MbFunction> *functions = new RPArray<MbFunction>;
    RPArray<MbCurve3D> *slideways = new RPArray<MbCurve3D>;
    RPArray<MbCurveEdge> *initCurves = new RPArray<MbCurveEdge>;

    SArray<MbEdgeFacesIndexes> indexes;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        const Napi::Array indexes_ = Napi::Array(env, info[0]);
        indexes = SArray<MbEdgeFacesIndexes>(indexes_.Length(), 1);

        for (size_t i = 0; i < indexes_.Length(); i++)
        {
            if (indexes_[i].IsNull() || indexes_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!indexes_[i].IsObject() || !indexes_[i].ToObject().InstanceOf(EdgeFacesIndexes::GetConstructor(env)))
            {
                Napi::Error::New(env, "EdgeFacesIndexes indexes is required.").ThrowAsJavaScriptException();
                return env.Undefined();
            }
            else
            {
                indexes.Add(*EdgeFacesIndexes::Unwrap(indexes_[i].ToObject())->_underlying);
            }
        }
    }

    RPArray<MbFunction> initFunctions;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        const Napi::Array initFunctions_ = Napi::Array(env, info[1]);
        initFunctions = RPArray<MbFunction>(initFunctions_.Length(), 1);

        for (size_t i = 0; i < initFunctions_.Length(); i++)
        {
            if (initFunctions_[i].IsNull() || initFunctions_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!initFunctions_[i].IsObject() ||
                !initFunctions_[i].ToObject().InstanceOf(Function::GetConstructor(env)))
            {
                Napi::Error::New(env, "Function initFunctions is required.").ThrowAsJavaScriptException();
                return env.Undefined();
            }
            else
            {
                initFunctions.Add(Function::Unwrap(initFunctions_[i].ToObject())->_underlying);
            }
        }
    }

    RPArray<MbCurve3D> initSlideways;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        const Napi::Array initSlideways_ = Napi::Array(env, info[2]);
        initSlideways = RPArray<MbCurve3D>(initSlideways_.Length(), 1);

        for (size_t i = 0; i < initSlideways_.Length(); i++)
        {
            if (initSlideways_[i].IsNull() || initSlideways_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!initSlideways_[i].IsObject() || !initSlideways_[i].ToObject().InstanceOf(Curve3D::GetConstructor(env)))
            {
                Napi::Error::New(env, "Curve3D initSlideways is required.").ThrowAsJavaScriptException();
                return env.Undefined();
            }
            else
            {
                initSlideways.Add(Curve3D::Unwrap(initSlideways_[i].ToObject())->_underlying);
            }
        }
    }

    bool _result =
        _underlying->FindEdgesByFacesIndex(indexes, functions, slideways, *initCurves, initFunctions, initSlideways

        );

    if (_result)
    {

        Napi::Object _toReturn = Napi::Object::New(env);
        Napi::Value _to;

        Napi::Array arr_functions = Napi::Array::New(env);
        for (size_t i = 0; i < functions->Count(); i++)
        {
            arr_functions[i] = Function::NewInstance(env,

                                                     (*functions)[i]

            );
        }
        _to = arr_functions;

        _toReturn.Set(Napi::String::New(env, "functions"), _to);
        Napi::Array arr_slideways = Napi::Array::New(env);
        for (size_t i = 0; i < slideways->Count(); i++)
        {
            arr_slideways[i] = Curve3D::NewInstance(env,

                                                    (*slideways)[i]

            );
        }
        _to = arr_slideways;

        _toReturn.Set(Napi::String::New(env, "slideways"), _to);
        Napi::Array arr_initCurves = Napi::Array::New(env);
        for (size_t i = 0; i < initCurves->Count(); i++)
        {
            arr_initCurves[i] = CurveEdge::NewInstance(env,

                                                       (*initCurves)[i]

            );
        }
        _to = arr_initCurves;

        _toReturn.Set(Napi::String::New(env, "initCurves"), _to);
        return _toReturn;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation FindEdgesByFacesIndex failed";
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value FaceShell::FindEdgesByFacesIndex_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsArray()))
    {
        deferred.Reject(Napi::String::New(env, "Array indexes is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsArray()))
    {
        deferred.Reject(Napi::String::New(env, "Array initFunctions is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 || !(info[2].IsArray()))
    {
        deferred.Reject(Napi::String::New(env, "Array initSlideways is required."));
        return deferred.Promise();
    }

    SArray<MbEdgeFacesIndexes> *indexes;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        const Napi::Array indexes_ = Napi::Array(env, info[0]);
        indexes = new SArray<MbEdgeFacesIndexes>(indexes_.Length(), 1);

        for (size_t i = 0; i < indexes_.Length(); i++)
        {
            if (indexes_[i].IsNull() || indexes_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!indexes_[i].IsObject() || !indexes_[i].ToObject().InstanceOf(EdgeFacesIndexes::GetConstructor(env)))
            {
                deferred.Reject(Napi::String::New(env, "EdgeFacesIndexes indexes is required."));
                return deferred.Promise();
            }
            else
            {
                indexes->Add(*EdgeFacesIndexes::Unwrap(indexes_[i].ToObject())->_underlying);
            }
        }
    }

    RPArray<MbFunction> *initFunctions;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        const Napi::Array initFunctions_ = Napi::Array(env, info[1]);
        initFunctions = new RPArray<MbFunction>(initFunctions_.Length(), 1);

        for (size_t i = 0; i < initFunctions_.Length(); i++)
        {
            if (initFunctions_[i].IsNull() || initFunctions_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!initFunctions_[i].IsObject() ||
                !initFunctions_[i].ToObject().InstanceOf(Function::GetConstructor(env)))
            {
                deferred.Reject(Napi::String::New(env, "Function initFunctions is required."));
                return deferred.Promise();
            }
            else
            {
                initFunctions->Add(Function::Unwrap(initFunctions_[i].ToObject())->_underlying);
            }
        }
    }

    RPArray<MbCurve3D> *initSlideways;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        const Napi::Array initSlideways_ = Napi::Array(env, info[2]);
        initSlideways = new RPArray<MbCurve3D>(initSlideways_.Length(), 1);

        for (size_t i = 0; i < initSlideways_.Length(); i++)
        {
            if (initSlideways_[i].IsNull() || initSlideways_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!initSlideways_[i].IsObject() || !initSlideways_[i].ToObject().InstanceOf(Curve3D::GetConstructor(env)))
            {
                deferred.Reject(Napi::String::New(env, "Curve3D initSlideways is required."));
                return deferred.Promise();
            }
            else
            {
                initSlideways->Add(Curve3D::Unwrap(initSlideways_[i].ToObject())->_underlying);
            }
        }
    }

    FaceShell_FindEdgesByFacesIndex_AsyncWorker *asyncWorker = new FaceShell_FindEdgesByFacesIndex_AsyncWorker(
        _underlying, deferred, *indexes, *initFunctions, *initSlideways);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value FaceShell::Copy(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "CopyMode sameShell is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    const MbeCopyMode sameShell = static_cast<MbeCopyMode>(info[0].ToNumber().Uint32Value());

    MbShellHistory *history = NULL;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        ShellHistory *history_ = ShellHistory::Unwrap(info[1].ToObject());
        history = history_->_underlying;
    }

    MbRegDuplicate *iReg = NULL;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        RegDuplicate *iReg_ = RegDuplicate::Unwrap(info[2].ToObject());
        iReg = iReg_->_underlying;
    }

    MbFaceShell *_result = _underlying->Copy(sameShell, info.Length() == 1 || info[1].IsNull() ? NULL : history,
                                             info.Length() == 2 || info[2].IsNull() ? NULL : iReg

    );

    Napi::Value _to;

    if (_result != NULL)
    {
        _to = FaceShell::NewInstance(env, (MbFaceShell *)_result);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value FaceShell::Copy_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "CopyMode sameShell is required."));
        return deferred.Promise();
    }

    const MbeCopyMode sameShell = static_cast<MbeCopyMode>(info[0].ToNumber().Uint32Value());

    MbShellHistory *history = NULL;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        ShellHistory *history_ = ShellHistory::Unwrap(info[1].ToObject());
        history = history_->_underlying;
    }

    MbRegDuplicate *iReg = NULL;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        RegDuplicate *iReg_ = RegDuplicate::Unwrap(info[2].ToObject());
        iReg = iReg_->_underlying;
    }

    FaceShell_Copy_AsyncWorker *asyncWorker = new FaceShell_Copy_AsyncWorker(_underlying, deferred,

                                                                             sameShell,

                                                                             history,

                                                                             iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value FaceShell::GetEdge(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number index is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    size_t index = info[0].ToNumber().Int64Value();

    MbCurveEdge *_result = _underlying->GetEdge(index

    );

    Napi::Value _to;

    if (_result != NULL)
    {
        _to = CurveEdge::NewInstance(env, (MbCurveEdge *)_result);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value FaceShell::GetEdge_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number index is required."));
        return deferred.Promise();
    }

    size_t index = info[0].ToNumber().Int64Value();

    FaceShell_GetEdge_AsyncWorker *asyncWorker = new FaceShell_GetEdge_AsyncWorker(_underlying, deferred,

                                                                                   index);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value FaceShell::SetOwnChangedThrough(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "ChangedType n is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    const MbeChangedType n = static_cast<MbeChangedType>(info[0].ToNumber().Uint32Value());

    _underlying->SetOwnChangedThrough(n

    );

    return env.Undefined();
}

Napi::Value FaceShell::SetOwnChangedThrough_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "ChangedType n is required."));
        return deferred.Promise();
    }

    const MbeChangedType n = static_cast<MbeChangedType>(info[0].ToNumber().Uint32Value());

    FaceShell_SetOwnChangedThrough_AsyncWorker *asyncWorker =
        new FaceShell_SetOwnChangedThrough_AsyncWorker(_underlying, deferred,

                                                       n);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value FaceShell::GetUseCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    refcount_t _result = _underlying->GetUseCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value FaceShell::GetUseCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    FaceShell_GetUseCount_AsyncWorker *asyncWorker = new FaceShell_GetUseCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value FaceShell::AddRef(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->AddRef(

    );

    return env.Undefined();
}

Napi::Value FaceShell::AddRef_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    FaceShell_AddRef_AsyncWorker *asyncWorker = new FaceShell_AddRef_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value FaceShell::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

FaceShell::~FaceShell()
{
    // std::cout << "calling ::DeleteItem on FaceShell for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

FaceShell_GetBoundaryEdges_AsyncWorker::FaceShell_GetBoundaryEdges_AsyncWorker(MbFaceShell *_underlying,
                                                                               Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void FaceShell_GetBoundaryEdges_AsyncWorker::Execute()
{
    EnterParallelRegion();

    RPArray<MbCurveEdge> *edges = new RPArray<MbCurveEdge>;

    _underlying->GetBoundaryEdges(*edges);

    this->edges = edges;

    ExitParallelRegion();
}

void FaceShell_GetBoundaryEdges_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    RPArray<MbCurveEdge> *edges = this->edges;
    Napi::Array arr_edges = Napi::Array::New(env);
    for (size_t i = 0; i < edges->Count(); i++)
    {
        arr_edges[i] = CurveEdge::NewInstance(env,

                                              (*edges)[i]

        );
    }
    _to = arr_edges;

    deferred.Resolve(_to);
}

void FaceShell_GetBoundaryEdges_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
FaceShell_GetFaces_AsyncWorker::FaceShell_GetFaces_AsyncWorker(MbFaceShell *_underlying,
                                                               Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void FaceShell_GetFaces_AsyncWorker::Execute()
{
    EnterParallelRegion();

    RPArray<MbFace> *faces = new RPArray<MbFace>;

    _underlying->GetFaces(*faces);

    this->faces = faces;

    ExitParallelRegion();
}

void FaceShell_GetFaces_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    RPArray<MbFace> *faces = this->faces;
    Napi::Array arr_faces = Napi::Array::New(env);
    for (size_t i = 0; i < faces->Count(); i++)
    {
        arr_faces[i] = Face::NewInstance(env,

                                         (*faces)[i]

        );
    }
    _to = arr_faces;

    deferred.Resolve(_to);
}

void FaceShell_GetFaces_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
FaceShell_FindFacesIndexByEdges_AsyncWorker::FaceShell_FindFacesIndexByEdges_AsyncWorker(
    MbFaceShell *_underlying, Napi::Promise::Deferred const &d, const SArray<MbEdgeFunction> &init)
    : _underlying(_underlying), PromiseWorker(d), init(init){};

void FaceShell_FindFacesIndexByEdges_AsyncWorker::Execute()
{
    EnterParallelRegion();

    RPArray<MbFunction> *functions = new RPArray<MbFunction>;
    RPArray<MbCurve3D> *slideways = new RPArray<MbCurve3D>;
    SArray<MbEdgeFacesIndexes> *indexes = new SArray<MbEdgeFacesIndexes>;

    bool _result = _underlying->FindFacesIndexByEdges(init, *functions, *slideways, *indexes);

    if (_result)
    {

        this->functions = functions;
        this->slideways = slideways;
        this->indexes = indexes;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation FindFacesIndexByEdges failed";
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void FaceShell_FindFacesIndexByEdges_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    Napi::Object _toReturn = Napi::Object::New(env);

    RPArray<MbFunction> *functions = this->functions;
    Napi::Array arr_functions = Napi::Array::New(env);
    for (size_t i = 0; i < functions->Count(); i++)
    {
        arr_functions[i] = Function::NewInstance(env,

                                                 (*functions)[i]

        );
    }
    _to = arr_functions;

    _toReturn.Set(Napi::String::New(env, "functions"), _to);
    RPArray<MbCurve3D> *slideways = this->slideways;
    Napi::Array arr_slideways = Napi::Array::New(env);
    for (size_t i = 0; i < slideways->Count(); i++)
    {
        arr_slideways[i] = Curve3D::NewInstance(env,

                                                (*slideways)[i]

        );
    }
    _to = arr_slideways;

    _toReturn.Set(Napi::String::New(env, "slideways"), _to);
    SArray<MbEdgeFacesIndexes> *indexes = this->indexes;
    Napi::Array arr_indexes = Napi::Array::New(env);
    for (size_t i = 0; i < indexes->Count(); i++)
    {
        arr_indexes[i] = EdgeFacesIndexes::NewInstance(env,

                                                       new MbEdgeFacesIndexes((*indexes)[i])

        );
    }
    _to = arr_indexes;

    _toReturn.Set(Napi::String::New(env, "indexes"), _to);

    deferred.Resolve(_toReturn);
}

void FaceShell_FindFacesIndexByEdges_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                         Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
FaceShell_FindEdgesByFacesIndex_AsyncWorker::FaceShell_FindEdgesByFacesIndex_AsyncWorker(
    MbFaceShell *_underlying, Napi::Promise::Deferred const &d, const SArray<MbEdgeFacesIndexes> &indexes,
    RPArray<MbFunction> &initFunctions, RPArray<MbCurve3D> &initSlideways)
    : _underlying(_underlying), PromiseWorker(d), indexes(indexes), initFunctions(initFunctions),
      initSlideways(initSlideways){};

void FaceShell_FindEdgesByFacesIndex_AsyncWorker::Execute()
{
    EnterParallelRegion();

    RPArray<MbFunction> *functions = new RPArray<MbFunction>;
    RPArray<MbCurve3D> *slideways = new RPArray<MbCurve3D>;
    RPArray<MbCurveEdge> *initCurves = new RPArray<MbCurveEdge>;

    bool _result =
        _underlying->FindEdgesByFacesIndex(indexes, functions, slideways, *initCurves, initFunctions, initSlideways);

    if (_result)
    {

        this->functions = functions;
        this->slideways = slideways;
        this->initCurves = initCurves;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation FindEdgesByFacesIndex failed";
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void FaceShell_FindEdgesByFacesIndex_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    Napi::Object _toReturn = Napi::Object::New(env);

    RPArray<MbFunction> *functions = this->functions;
    Napi::Array arr_functions = Napi::Array::New(env);
    for (size_t i = 0; i < functions->Count(); i++)
    {
        arr_functions[i] = Function::NewInstance(env,

                                                 (*functions)[i]

        );
    }
    _to = arr_functions;

    _toReturn.Set(Napi::String::New(env, "functions"), _to);
    RPArray<MbCurve3D> *slideways = this->slideways;
    Napi::Array arr_slideways = Napi::Array::New(env);
    for (size_t i = 0; i < slideways->Count(); i++)
    {
        arr_slideways[i] = Curve3D::NewInstance(env,

                                                (*slideways)[i]

        );
    }
    _to = arr_slideways;

    _toReturn.Set(Napi::String::New(env, "slideways"), _to);
    RPArray<MbCurveEdge> *initCurves = this->initCurves;
    Napi::Array arr_initCurves = Napi::Array::New(env);
    for (size_t i = 0; i < initCurves->Count(); i++)
    {
        arr_initCurves[i] = CurveEdge::NewInstance(env,

                                                   (*initCurves)[i]

        );
    }
    _to = arr_initCurves;

    _toReturn.Set(Napi::String::New(env, "initCurves"), _to);

    deferred.Resolve(_toReturn);
}

void FaceShell_FindEdgesByFacesIndex_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                         Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
FaceShell_Copy_AsyncWorker::FaceShell_Copy_AsyncWorker(MbFaceShell *_underlying, Napi::Promise::Deferred const &d,
                                                       MbeCopyMode sameShell, MbShellHistory *history,
                                                       MbRegDuplicate *iReg)
    : _underlying(_underlying), PromiseWorker(d), sameShell(sameShell), history(history), iReg(iReg){};

void FaceShell_Copy_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbFaceShell *_result = _underlying->Copy(sameShell, history, iReg);

    this->_result = _result;

    ExitParallelRegion();
}

void FaceShell_Copy_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbFaceShell *_result = this->_result;
    if (_result != NULL)
    {
        _to = FaceShell::NewInstance(env, (MbFaceShell *)_result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void FaceShell_Copy_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
FaceShell_GetEdge_AsyncWorker::FaceShell_GetEdge_AsyncWorker(MbFaceShell *_underlying, Napi::Promise::Deferred const &d,
                                                             size_t index)
    : _underlying(_underlying), PromiseWorker(d), index(index){};

void FaceShell_GetEdge_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCurveEdge *_result = _underlying->GetEdge(index);

    this->_result = _result;

    ExitParallelRegion();
}

void FaceShell_GetEdge_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbCurveEdge *_result = this->_result;
    if (_result != NULL)
    {
        _to = CurveEdge::NewInstance(env, (MbCurveEdge *)_result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void FaceShell_GetEdge_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
FaceShell_SetOwnChangedThrough_AsyncWorker::FaceShell_SetOwnChangedThrough_AsyncWorker(MbFaceShell *_underlying,
                                                                                       Napi::Promise::Deferred const &d,
                                                                                       MbeChangedType n)
    : _underlying(_underlying), PromiseWorker(d), n(n){};

void FaceShell_SetOwnChangedThrough_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetOwnChangedThrough(n);

    ExitParallelRegion();
}

void FaceShell_SetOwnChangedThrough_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void FaceShell_SetOwnChangedThrough_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                        Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
FaceShell_GetUseCount_AsyncWorker::FaceShell_GetUseCount_AsyncWorker(MbFaceShell *_underlying,
                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void FaceShell_GetUseCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    refcount_t _result = _underlying->GetUseCount();

    this->_result = _result;

    ExitParallelRegion();
}

void FaceShell_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    refcount_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void FaceShell_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
FaceShell_AddRef_AsyncWorker::FaceShell_AddRef_AsyncWorker(MbFaceShell *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void FaceShell_AddRef_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddRef();

    ExitParallelRegion();
}

void FaceShell_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void FaceShell_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
