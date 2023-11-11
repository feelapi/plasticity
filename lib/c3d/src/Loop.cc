// This is a generated file, modify: generate/templates/Loop.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/Loop.h"

#include "tool_mutex.h"

Napi::Object Loop::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func =
        DefineClass(env, "Loop",
                    {
                        InstanceMethod<&Loop::MakeContourOnSurface>("MakeContourOnSurface"),
                        InstanceMethod<&Loop::MakeContourOnSurface_async>("MakeContourOnSurface_async"),
                        InstanceMethod<&Loop::GetEdgesCount>("GetEdgesCount"),
                        InstanceMethod<&Loop::GetEdgesCount_async>("GetEdgesCount_async"),
                        InstanceMethod<&Loop::GetOrientedEdge>("GetOrientedEdge"),
                        InstanceMethod<&Loop::GetOrientedEdge_async>("GetOrientedEdge_async"),
                        InstanceMethod<&Loop::GetEdges>("GetEdges"),
                        InstanceMethod<&Loop::GetEdges_async>("GetEdges_async"),
                        InstanceMethod<&Loop::GetUseCount>("GetUseCount"),
                        InstanceMethod<&Loop::GetUseCount_async>("GetUseCount_async"),
                        InstanceMethod<&Loop::AddRef>("AddRef"),
                        InstanceMethod<&Loop::AddRef_async>("AddRef_async"),
                        InstanceMethod<&Loop::Id>("Id"),

                    });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Loop", func);

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

Loop::Loop(const Napi::CallbackInfo &info) : Napi::ObjectWrap<Loop>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    Napi::Error::New(env, "Loop cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object Loop::NewInstance(Napi::Env env, MbLoop *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Loop");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Loop *unwrapped = Loop::Unwrap(inst);
    underlying->AddRef();
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Loop::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Loop");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value Loop::MakeContourOnSurface(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Surface::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Surface surf is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsBoolean()))
    {
        Napi::Error::New(env, "boolean faceSense is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 || !(info[2].IsBoolean()))
    {
        Napi::Error::New(env, "boolean doExact is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'surf'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Surface *surf_ = Surface::Unwrap(info[0].ToObject());

    const MbSurface &surf = *surf_->_underlying;

    bool faceSense = info[1].ToBoolean();

    bool doExact = info[2].ToBoolean();

    MbContourOnSurface &_result = _underlying->MakeContourOnSurface(surf, faceSense, doExact

    );

    Napi::Value _to;

    _to = ContourOnSurface::NewInstance(env, (MbContourOnSurface *)&(_result));

    return _to;
}

Napi::Value Loop::MakeContourOnSurface_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Surface::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Surface surf is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean faceSense is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 || !(info[2].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean doExact is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'surf'"));
        return deferred.Promise();
    }
    const class Surface *surf_ = Surface::Unwrap(info[0].ToObject());

    const MbSurface &surf = *surf_->_underlying;

    bool faceSense = info[1].ToBoolean();

    bool doExact = info[2].ToBoolean();

    Loop_MakeContourOnSurface_AsyncWorker *asyncWorker =
        new Loop_MakeContourOnSurface_AsyncWorker(_underlying, deferred,

                                                  surf,

                                                  faceSense,

                                                  doExact);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Loop::GetEdgesCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    ptrdiff_t _result = _underlying->GetEdgesCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Loop::GetEdgesCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Loop_GetEdgesCount_AsyncWorker *asyncWorker = new Loop_GetEdgesCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Loop::GetOrientedEdge(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number index is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    size_t index = info[0].ToNumber().Int64Value();

    MbOrientedEdge *_result = _underlying->GetOrientedEdge(index

    );

    Napi::Value _to;

    if (_result != NULL)
    {
        _to = OrientedEdge::NewInstance(env, (MbOrientedEdge *)_result);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value Loop::GetOrientedEdge_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number index is required."));
        return deferred.Promise();
    }

    size_t index = info[0].ToNumber().Int64Value();

    Loop_GetOrientedEdge_AsyncWorker *asyncWorker = new Loop_GetOrientedEdge_AsyncWorker(_underlying, deferred,

                                                                                         index);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Loop::GetEdges(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    RPArray<MbCurveEdge> *edges = new RPArray<MbCurveEdge>;

    bool findSame = info[0].ToBoolean();

    _underlying->GetEdges(*edges, info.Length() == 0 || info[0].IsNull() ? true : findSame

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

Napi::Value Loop::GetEdges_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    bool findSame = info[0].ToBoolean();

    Loop_GetEdges_AsyncWorker *asyncWorker = new Loop_GetEdges_AsyncWorker(_underlying, deferred,

                                                                           findSame);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Loop::GetUseCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    refcount_t _result = _underlying->GetUseCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Loop::GetUseCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Loop_GetUseCount_AsyncWorker *asyncWorker = new Loop_GetUseCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Loop::AddRef(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->AddRef(

    );

    return env.Undefined();
}

Napi::Value Loop::AddRef_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Loop_AddRef_AsyncWorker *asyncWorker = new Loop_AddRef_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value Loop::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

Loop::~Loop()
{
    // std::cout << "calling ::DeleteItem on Loop for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

Loop_MakeContourOnSurface_AsyncWorker::Loop_MakeContourOnSurface_AsyncWorker(MbLoop *_underlying,
                                                                             Napi::Promise::Deferred const &d,
                                                                             const MbSurface &surf, bool faceSense,
                                                                             bool doExact)
    : _underlying(_underlying), PromiseWorker(d), surf(surf), faceSense(faceSense), doExact(doExact){};

void Loop_MakeContourOnSurface_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbContourOnSurface &_result = _underlying->MakeContourOnSurface(surf, faceSense, doExact);

    this->_result = (MbContourOnSurface *)&(_result);

    ExitParallelRegion();
}

void Loop_MakeContourOnSurface_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbContourOnSurface *_result = this->_result;
    _to = ContourOnSurface::NewInstance(env, (MbContourOnSurface *)&(_result));

    deferred.Resolve(_to);
}

void Loop_MakeContourOnSurface_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Loop_GetEdgesCount_AsyncWorker::Loop_GetEdgesCount_AsyncWorker(MbLoop *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Loop_GetEdgesCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    ptrdiff_t _result = _underlying->GetEdgesCount();

    this->_result = _result;

    ExitParallelRegion();
}

void Loop_GetEdgesCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    ptrdiff_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Loop_GetEdgesCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Loop_GetOrientedEdge_AsyncWorker::Loop_GetOrientedEdge_AsyncWorker(MbLoop *_underlying,
                                                                   Napi::Promise::Deferred const &d, size_t index)
    : _underlying(_underlying), PromiseWorker(d), index(index){};

void Loop_GetOrientedEdge_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbOrientedEdge *_result = _underlying->GetOrientedEdge(index);

    this->_result = _result;

    ExitParallelRegion();
}

void Loop_GetOrientedEdge_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbOrientedEdge *_result = this->_result;
    if (_result != NULL)
    {
        _to = OrientedEdge::NewInstance(env, (MbOrientedEdge *)_result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void Loop_GetOrientedEdge_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Loop_GetEdges_AsyncWorker::Loop_GetEdges_AsyncWorker(MbLoop *_underlying, Napi::Promise::Deferred const &d,
                                                     bool findSame)
    : _underlying(_underlying), PromiseWorker(d), findSame(findSame){};

void Loop_GetEdges_AsyncWorker::Execute()
{
    EnterParallelRegion();

    RPArray<MbCurveEdge> *edges = new RPArray<MbCurveEdge>;

    _underlying->GetEdges(*edges, findSame);

    this->edges = edges;

    ExitParallelRegion();
}

void Loop_GetEdges_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Loop_GetEdges_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Loop_GetUseCount_AsyncWorker::Loop_GetUseCount_AsyncWorker(MbLoop *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Loop_GetUseCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    refcount_t _result = _underlying->GetUseCount();

    this->_result = _result;

    ExitParallelRegion();
}

void Loop_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    refcount_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Loop_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Loop_AddRef_AsyncWorker::Loop_AddRef_AsyncWorker(MbLoop *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Loop_AddRef_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddRef();

    ExitParallelRegion();
}

void Loop_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Loop_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
