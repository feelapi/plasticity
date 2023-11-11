// This is a generated file, modify: generate/templates/Grid.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/Grid.h"

#include "tool_mutex.h"

Napi::Object Grid::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(env, "Grid",
                                      {
                                          InstanceMethod<&Grid::SetStepData>("SetStepData"),
                                          InstanceMethod<&Grid::SetStepData_async>("SetStepData_async"),
                                          InstanceMethod<&Grid::IsSearchTreeReady>("IsSearchTreeReady"),
                                          InstanceMethod<&Grid::IsSearchTreeReady_async>("IsSearchTreeReady_async"),
                                          InstanceMethod<&Grid::CreateSearchTree>("CreateSearchTree"),
                                          InstanceMethod<&Grid::CreateSearchTree_async>("CreateSearchTree_async"),
                                          InstanceMethod<&Grid::DeleteSearchTree>("DeleteSearchTree"),
                                          InstanceMethod<&Grid::DeleteSearchTree_async>("DeleteSearchTree_async"),
                                          InstanceMethod<&Grid::GetCube>("GetCube"),
                                          InstanceMethod<&Grid::GetCube_async>("GetCube_async"),
                                          InstanceMethod<&Grid::CreateGridTopology>("CreateGridTopology"),
                                          InstanceMethod<&Grid::CreateGridTopology_async>("CreateGridTopology_async"),
                                          InstanceMethod<&Grid::IsGridTopologyReady>("IsGridTopologyReady"),
                                          InstanceMethod<&Grid::IsGridTopologyReady_async>("IsGridTopologyReady_async"),
                                          InstanceMethod<&Grid::GetBuffers>("GetBuffers"),
                                          InstanceMethod<&Grid::GetBuffers_async>("GetBuffers_async"),
                                          InstanceMethod<&Grid::SetItem>("SetItem"),
                                          InstanceMethod<&Grid::SetItem_async>("SetItem_async"),
                                          InstanceMethod<&Grid::SetPrimitiveName>("SetPrimitiveName"),
                                          InstanceMethod<&Grid::SetPrimitiveName_async>("SetPrimitiveName_async"),
                                          InstanceMethod<&Grid::SetPrimitiveType>("SetPrimitiveType"),
                                          InstanceMethod<&Grid::SetPrimitiveType_async>("SetPrimitiveType_async"),
                                          InstanceMethod<&Grid::GetUseCount>("GetUseCount"),
                                          InstanceMethod<&Grid::GetUseCount_async>("GetUseCount_async"),
                                          InstanceMethod<&Grid::AddRef>("AddRef"),
                                          InstanceMethod<&Grid::AddRef_async>("AddRef_async"),
                                          InstanceMethod<&Grid::SetStyle>("SetStyle"),
                                          InstanceMethod<&Grid::SetStyle_async>("SetStyle_async"),
                                          InstanceMethod<&Grid::GetStyle>("GetStyle"),
                                          InstanceMethod<&Grid::GetStyle_async>("GetStyle_async"),
                                          InstanceMethod<&Grid::SetColor>("SetColor"),
                                          InstanceMethod<&Grid::SetColor_async>("SetColor_async"),
                                          InstanceMethod<&Grid::GetColor>("GetColor"),
                                          InstanceMethod<&Grid::GetColor_async>("GetColor_async"),
                                          InstanceMethod<&Grid::AttributesConvert>("AttributesConvert"),
                                          InstanceMethod<&Grid::AttributesConvert_async>("AttributesConvert_async"),
                                          InstanceMethod<&Grid::Id>("Id"),

                                      });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Grid", func);

    Napi::Object global = env.Global();
    Napi::Object Object = global.Get("Object").ToObject();
    Napi::Function setPrototypeOf = Napi::Function(env, Object.Get("setPrototypeOf"));
    Napi::Value prototype = func.Get("prototype");

    Napi::Function superFunc = Primitive::GetConstructor(env);
    Napi::FunctionReference *superConstructor = new Napi::FunctionReference();
    *superConstructor = Napi::Persistent(superFunc);

    Napi::Value superPrototype = superFunc.Get("prototype");
    setPrototypeOf.Call({prototype, superPrototype});
    setPrototypeOf.Call({func, superFunc});

    return exports;
}

Grid::Grid(const Napi::CallbackInfo &info) : Napi::ObjectWrap<Grid>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    Napi::Error::New(env, "Grid cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object Grid::NewInstance(Napi::Env env, MbGrid *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Grid");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Grid *unwrapped = Grid::Unwrap(inst);
    underlying->AddRef();
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Grid::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Grid");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value Grid::SetStepData(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(StepData::GetConstructor(env)))))
    {
        Napi::Error::New(env, "StepData stData is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'stData'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class StepData *stData_ = StepData::Unwrap(info[0].ToObject());

    const MbStepData &stData = *stData_->_underlying;

    _underlying->SetStepData(stData

    );

    return env.Undefined();
}

Napi::Value Grid::SetStepData_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(StepData::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "StepData stData is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'stData'"));
        return deferred.Promise();
    }
    const class StepData *stData_ = StepData::Unwrap(info[0].ToObject());

    const MbStepData &stData = *stData_->_underlying;

    Grid_SetStepData_AsyncWorker *asyncWorker = new Grid_SetStepData_AsyncWorker(_underlying, deferred,

                                                                                 stData);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Grid::IsSearchTreeReady(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool _result = _underlying->IsSearchTreeReady(

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value Grid::IsSearchTreeReady_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Grid_IsSearchTreeReady_AsyncWorker *asyncWorker = new Grid_IsSearchTreeReady_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Grid::CreateSearchTree(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool _result = _underlying->CreateSearchTree(

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value Grid::CreateSearchTree_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Grid_CreateSearchTree_AsyncWorker *asyncWorker = new Grid_CreateSearchTree_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Grid::DeleteSearchTree(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->DeleteSearchTree(

    );

    return env.Undefined();
}

Napi::Value Grid::DeleteSearchTree_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Grid_DeleteSearchTree_AsyncWorker *asyncWorker = new Grid_DeleteSearchTree_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Grid::GetCube(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbCube &_result = _underlying->GetCube(

    );

    Napi::Value _to;

    _to = Cube::NewInstance(env, new MbCube(_result));

    return _to;
}

Napi::Value Grid::GetCube_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Grid_GetCube_AsyncWorker *asyncWorker = new Grid_GetCube_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Grid::CreateGridTopology(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsBoolean()))
    {
        Napi::Error::New(env, "boolean keepExisting is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    bool keepExisting = info[0].ToBoolean();

    _underlying->CreateGridTopology(keepExisting

    );

    return env.Undefined();
}

Napi::Value Grid::CreateGridTopology_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean keepExisting is required."));
        return deferred.Promise();
    }

    bool keepExisting = info[0].ToBoolean();

    Grid_CreateGridTopology_AsyncWorker *asyncWorker = new Grid_CreateGridTopology_AsyncWorker(_underlying, deferred,

                                                                                               keepExisting);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Grid::IsGridTopologyReady(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool _result = _underlying->IsGridTopologyReady(

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value Grid::IsGridTopologyReady_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Grid_IsGridTopologyReady_AsyncWorker *asyncWorker = new Grid_IsGridTopologyReady_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value Grid::SetItem(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(RefItem::GetConstructor(env)))))
    {
        Napi::Error::New(env, "RefItem g is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'g'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class RefItem *g_ = RefItem::Unwrap(info[0].ToObject());

    const MbRefItem *g = g_->_underlying;

    _underlying->SetItem(g

    );

    return env.Undefined();
}

Napi::Value Grid::SetItem_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(RefItem::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "RefItem g is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'g'"));
        return deferred.Promise();
    }
    const class RefItem *g_ = RefItem::Unwrap(info[0].ToObject());

    const MbRefItem *g = g_->_underlying;

    Grid_SetItem_AsyncWorker *asyncWorker = new Grid_SetItem_AsyncWorker(_underlying, deferred,

                                                                         g);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Grid::SetPrimitiveName(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "SimpleName n is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    int n = info[0].ToNumber().Int64Value();

    _underlying->SetPrimitiveName(n

    );

    return env.Undefined();
}

Napi::Value Grid::SetPrimitiveName_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "SimpleName n is required."));
        return deferred.Promise();
    }

    int n = info[0].ToNumber().Int64Value();

    Grid_SetPrimitiveName_AsyncWorker *asyncWorker = new Grid_SetPrimitiveName_AsyncWorker(_underlying, deferred,

                                                                                           n);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Grid::SetPrimitiveType(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "RefType t is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    const MbeRefType t = static_cast<MbeRefType>(info[0].ToNumber().Uint32Value());

    _underlying->SetPrimitiveType(t

    );

    return env.Undefined();
}

Napi::Value Grid::SetPrimitiveType_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "RefType t is required."));
        return deferred.Promise();
    }

    const MbeRefType t = static_cast<MbeRefType>(info[0].ToNumber().Uint32Value());

    Grid_SetPrimitiveType_AsyncWorker *asyncWorker = new Grid_SetPrimitiveType_AsyncWorker(_underlying, deferred,

                                                                                           t);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Grid::GetUseCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    refcount_t _result = _underlying->GetUseCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Grid::GetUseCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Grid_GetUseCount_AsyncWorker *asyncWorker = new Grid_GetUseCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Grid::AddRef(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->AddRef(

    );

    return env.Undefined();
}

Napi::Value Grid::AddRef_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Grid_AddRef_AsyncWorker *asyncWorker = new Grid_AddRef_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Grid::SetStyle(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "int s is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    int s = info[0].ToNumber().Int64Value();

    _underlying->SetStyle(s

    );

    return env.Undefined();
}

Napi::Value Grid::SetStyle_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "int s is required."));
        return deferred.Promise();
    }

    int s = info[0].ToNumber().Int64Value();

    Grid_SetStyle_AsyncWorker *asyncWorker = new Grid_SetStyle_AsyncWorker(_underlying, deferred,

                                                                           s);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Grid::GetStyle(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    int _result = _underlying->GetStyle(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Grid::GetStyle_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Grid_GetStyle_AsyncWorker *asyncWorker = new Grid_GetStyle_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Grid::SetColor(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "uint32 c is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    int c = info[0].ToNumber().Int64Value();

    _underlying->SetColor(c

    );

    return env.Undefined();
}

Napi::Value Grid::SetColor_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "uint32 c is required."));
        return deferred.Promise();
    }

    int c = info[0].ToNumber().Int64Value();

    Grid_SetColor_AsyncWorker *asyncWorker = new Grid_SetColor_AsyncWorker(_underlying, deferred,

                                                                           c);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Grid::GetColor(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    uint32 _result = _underlying->GetColor(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Grid::GetColor_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Grid_GetColor_AsyncWorker *asyncWorker = new Grid_GetColor_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Grid::AttributesConvert(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Grid::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Grid other is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'other'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Grid *other_ = Grid::Unwrap(info[0].ToObject());

    MbGrid &other = *other_->_underlying;

    _underlying->AttributesConvert(other

    );

    return env.Undefined();
}

Napi::Value Grid::AttributesConvert_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Grid::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Grid other is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'other'"));
        return deferred.Promise();
    }
    const class Grid *other_ = Grid::Unwrap(info[0].ToObject());

    MbGrid &other = *other_->_underlying;

    Grid_AttributesConvert_AsyncWorker *asyncWorker = new Grid_AttributesConvert_AsyncWorker(_underlying, deferred,

                                                                                             other);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value Grid::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

Grid::~Grid()
{
    // std::cout << "calling ::DeleteItem on Grid for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

Grid_SetStepData_AsyncWorker::Grid_SetStepData_AsyncWorker(MbGrid *_underlying, Napi::Promise::Deferred const &d,
                                                           const MbStepData &stData)
    : _underlying(_underlying), PromiseWorker(d), stData(stData){};

void Grid_SetStepData_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetStepData(stData);

    ExitParallelRegion();
}

void Grid_SetStepData_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Grid_SetStepData_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Grid_IsSearchTreeReady_AsyncWorker::Grid_IsSearchTreeReady_AsyncWorker(MbGrid *_underlying,
                                                                       Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Grid_IsSearchTreeReady_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsSearchTreeReady();

    this->_result = _result;

    ExitParallelRegion();
}

void Grid_IsSearchTreeReady_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void Grid_IsSearchTreeReady_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Grid_CreateSearchTree_AsyncWorker::Grid_CreateSearchTree_AsyncWorker(MbGrid *_underlying,
                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Grid_CreateSearchTree_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->CreateSearchTree();

    this->_result = _result;

    ExitParallelRegion();
}

void Grid_CreateSearchTree_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void Grid_CreateSearchTree_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Grid_DeleteSearchTree_AsyncWorker::Grid_DeleteSearchTree_AsyncWorker(MbGrid *_underlying,
                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Grid_DeleteSearchTree_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->DeleteSearchTree();

    ExitParallelRegion();
}

void Grid_DeleteSearchTree_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Grid_DeleteSearchTree_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Grid_GetCube_AsyncWorker::Grid_GetCube_AsyncWorker(MbGrid *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Grid_GetCube_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbCube &_result = _underlying->GetCube();

    this->_result = new (MbCube)(_result);

    ExitParallelRegion();
}

void Grid_GetCube_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbCube *_result = this->_result;
    _to = Cube::NewInstance(env, (MbCube *)&(_result));

    deferred.Resolve(_to);
}

void Grid_GetCube_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Grid_CreateGridTopology_AsyncWorker::Grid_CreateGridTopology_AsyncWorker(MbGrid *_underlying,
                                                                         Napi::Promise::Deferred const &d,
                                                                         bool keepExisting)
    : _underlying(_underlying), PromiseWorker(d), keepExisting(keepExisting){};

void Grid_CreateGridTopology_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->CreateGridTopology(keepExisting);

    ExitParallelRegion();
}

void Grid_CreateGridTopology_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Grid_CreateGridTopology_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Grid_IsGridTopologyReady_AsyncWorker::Grid_IsGridTopologyReady_AsyncWorker(MbGrid *_underlying,
                                                                           Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Grid_IsGridTopologyReady_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->IsGridTopologyReady();

    this->_result = _result;

    ExitParallelRegion();
}

void Grid_IsGridTopologyReady_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void Grid_IsGridTopologyReady_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Grid_SetItem_AsyncWorker::Grid_SetItem_AsyncWorker(MbGrid *_underlying, Napi::Promise::Deferred const &d,
                                                   const MbRefItem *g)
    : _underlying(_underlying), PromiseWorker(d), g(g){};

void Grid_SetItem_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetItem(g);

    ExitParallelRegion();
}

void Grid_SetItem_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Grid_SetItem_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Grid_SetPrimitiveName_AsyncWorker::Grid_SetPrimitiveName_AsyncWorker(MbGrid *_underlying,
                                                                     Napi::Promise::Deferred const &d, SimpleName n)
    : _underlying(_underlying), PromiseWorker(d), n(n){};

void Grid_SetPrimitiveName_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetPrimitiveName(n);

    ExitParallelRegion();
}

void Grid_SetPrimitiveName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Grid_SetPrimitiveName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Grid_SetPrimitiveType_AsyncWorker::Grid_SetPrimitiveType_AsyncWorker(MbGrid *_underlying,
                                                                     Napi::Promise::Deferred const &d, MbeRefType t)
    : _underlying(_underlying), PromiseWorker(d), t(t){};

void Grid_SetPrimitiveType_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetPrimitiveType(t);

    ExitParallelRegion();
}

void Grid_SetPrimitiveType_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Grid_SetPrimitiveType_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Grid_GetUseCount_AsyncWorker::Grid_GetUseCount_AsyncWorker(MbGrid *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Grid_GetUseCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    refcount_t _result = _underlying->GetUseCount();

    this->_result = _result;

    ExitParallelRegion();
}

void Grid_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    refcount_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Grid_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Grid_AddRef_AsyncWorker::Grid_AddRef_AsyncWorker(MbGrid *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Grid_AddRef_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddRef();

    ExitParallelRegion();
}

void Grid_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Grid_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Grid_SetStyle_AsyncWorker::Grid_SetStyle_AsyncWorker(MbGrid *_underlying, Napi::Promise::Deferred const &d, int s)
    : _underlying(_underlying), PromiseWorker(d), s(s){};

void Grid_SetStyle_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetStyle(s);

    ExitParallelRegion();
}

void Grid_SetStyle_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Grid_SetStyle_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Grid_GetStyle_AsyncWorker::Grid_GetStyle_AsyncWorker(MbGrid *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Grid_GetStyle_AsyncWorker::Execute()
{
    EnterParallelRegion();

    int _result = _underlying->GetStyle();

    this->_result = _result;

    ExitParallelRegion();
}

void Grid_GetStyle_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    int _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Grid_GetStyle_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Grid_SetColor_AsyncWorker::Grid_SetColor_AsyncWorker(MbGrid *_underlying, Napi::Promise::Deferred const &d, uint32 c)
    : _underlying(_underlying), PromiseWorker(d), c(c){};

void Grid_SetColor_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetColor(c);

    ExitParallelRegion();
}

void Grid_SetColor_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Grid_SetColor_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Grid_GetColor_AsyncWorker::Grid_GetColor_AsyncWorker(MbGrid *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Grid_GetColor_AsyncWorker::Execute()
{
    EnterParallelRegion();

    uint32 _result = _underlying->GetColor();

    this->_result = _result;

    ExitParallelRegion();
}

void Grid_GetColor_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    uint32 _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Grid_GetColor_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Grid_AttributesConvert_AsyncWorker::Grid_AttributesConvert_AsyncWorker(MbGrid *_underlying,
                                                                       Napi::Promise::Deferred const &d, MbGrid &other)
    : _underlying(_underlying), PromiseWorker(d), other(other){};

void Grid_AttributesConvert_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AttributesConvert(other);

    ExitParallelRegion();
}

void Grid_AttributesConvert_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Grid_AttributesConvert_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
