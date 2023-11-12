// This is a generated file, modify: generate/templates/TopologyItem.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/TopologyItem.h"

#include "tool_mutex.h"

Napi::Object TopologyItem::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func =
        DefineClass(env, "TopologyItem",
                    {
                        InstanceMethod<&TopologyItem::IsA>("IsA"),
                        InstanceMethod<&TopologyItem::IsA_async>("IsA_async"),
                        InstanceMethod<&TopologyItem::GetName>("GetName"),
                        InstanceMethod<&TopologyItem::GetName_async>("GetName_async"),
                        InstanceMethod<&TopologyItem::GetMainName>("GetMainName"),
                        InstanceMethod<&TopologyItem::GetMainName_async>("GetMainName_async"),
                        InstanceMethod<&TopologyItem::GetFirstName>("GetFirstName"),
                        InstanceMethod<&TopologyItem::GetFirstName_async>("GetFirstName_async"),
                        InstanceMethod<&TopologyItem::GetNameHash>("GetNameHash"),
                        InstanceMethod<&TopologyItem::GetNameHash_async>("GetNameHash_async"),
                        InstanceMethod<&TopologyItem::AddYourGabaritTo>("AddYourGabaritTo"),
                        InstanceMethod<&TopologyItem::AddYourGabaritTo_async>("AddYourGabaritTo_async"),
                        InstanceMethod<&TopologyItem::Cast>("Cast"),
                        InstanceMethod<&TopologyItem::Cast_async>("Cast_async"),
                        InstanceMethod<&TopologyItem::CalculateMesh>("CalculateMesh"),
                        InstanceMethod<&TopologyItem::CalculateMesh_async>("CalculateMesh_async"),
                        InstanceMethod<&TopologyItem::GetOwnChanged>("GetOwnChanged"),
                        InstanceMethod<&TopologyItem::GetOwnChanged_async>("GetOwnChanged_async"),
                        InstanceMethod<&TopologyItem::GetUseCount>("GetUseCount"),
                        InstanceMethod<&TopologyItem::GetUseCount_async>("GetUseCount_async"),
                        InstanceMethod<&TopologyItem::AddRef>("AddRef"),
                        InstanceMethod<&TopologyItem::AddRef_async>("AddRef_async"),
                        InstanceMethod<&TopologyItem::SetStyle>("SetStyle"),
                        InstanceMethod<&TopologyItem::SetStyle_async>("SetStyle_async"),
                        InstanceMethod<&TopologyItem::GetStyle>("GetStyle"),
                        InstanceMethod<&TopologyItem::GetStyle_async>("GetStyle_async"),
                        InstanceMethod<&TopologyItem::SetColor>("SetColor"),
                        InstanceMethod<&TopologyItem::SetColor_async>("SetColor_async"),
                        InstanceMethod<&TopologyItem::GetColor>("GetColor"),
                        InstanceMethod<&TopologyItem::GetColor_async>("GetColor_async"),
                        InstanceMethod<&TopologyItem::AttributesConvert>("AttributesConvert"),
                        InstanceMethod<&TopologyItem::AttributesConvert_async>("AttributesConvert_async"),
                        InstanceMethod<&TopologyItem::Id>("Id"),

                    });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("TopologyItem", func);

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

TopologyItem::TopologyItem(const Napi::CallbackInfo &info) : Napi::ObjectWrap<TopologyItem>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    Napi::Error::New(env, "TopologyItem cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object TopologyItem::NewInstance(Napi::Env env, MbTopologyItem *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("TopologyItem");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    TopologyItem *unwrapped = TopologyItem::Unwrap(inst);
    underlying->AddRef();
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function TopologyItem::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("TopologyItem");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value TopologyItem::IsA(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeTopologyType _result = _underlying->IsA(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value TopologyItem::IsA_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    TopologyItem_IsA_AsyncWorker *asyncWorker = new TopologyItem_IsA_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value TopologyItem::GetName(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbName &_result = _underlying->GetName(

    );

    Napi::Value _to;

    _to = Name::NewInstance(env, new MbName(_result));

    return _to;
}

Napi::Value TopologyItem::GetName_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    TopologyItem_GetName_AsyncWorker *asyncWorker = new TopologyItem_GetName_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value TopologyItem::GetMainName(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    SimpleName _result = _underlying->GetMainName(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value TopologyItem::GetMainName_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    TopologyItem_GetMainName_AsyncWorker *asyncWorker = new TopologyItem_GetMainName_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value TopologyItem::GetFirstName(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    SimpleName _result = _underlying->GetFirstName(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value TopologyItem::GetFirstName_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    TopologyItem_GetFirstName_AsyncWorker *asyncWorker =
        new TopologyItem_GetFirstName_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value TopologyItem::GetNameHash(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    SimpleName _result = _underlying->GetNameHash(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value TopologyItem::GetNameHash_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    TopologyItem_GetNameHash_AsyncWorker *asyncWorker = new TopologyItem_GetNameHash_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value TopologyItem::AddYourGabaritTo(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Cube::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Cube cube is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'cube'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Cube *cube_ = Cube::Unwrap(info[0].ToObject());

    MbCube &cube = *cube_->_underlying;

    _underlying->AddYourGabaritTo(cube

    );

    return env.Undefined();
}

Napi::Value TopologyItem::AddYourGabaritTo_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Cube::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Cube cube is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'cube'"));
        return deferred.Promise();
    }
    const class Cube *cube_ = Cube::Unwrap(info[0].ToObject());

    MbCube &cube = *cube_->_underlying;

    TopologyItem_AddYourGabaritTo_AsyncWorker *asyncWorker =
        new TopologyItem_AddYourGabaritTo_AsyncWorker(_underlying, deferred,

                                                      cube);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value TopologyItem::CalculateMesh(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(StepData::GetConstructor(env)))))
    {
        Napi::Error::New(env, "StepData stepData is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !((info[1].IsObject() && info[1].ToObject().InstanceOf(FormNote::GetConstructor(env)))))
    {
        Napi::Error::New(env, "FormNote note is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbMesh *mesh = new MbMesh;

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'stepData'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class StepData *stepData_ = StepData::Unwrap(info[0].ToObject());

    const MbStepData &stepData = *stepData_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'note'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class FormNote *note_ = FormNote::Unwrap(info[1].ToObject());

    const MbFormNote &note = *note_->_underlying;

    _underlying->CalculateMesh(stepData, note, *mesh

    );

    Napi::Value _to;

    if (mesh != NULL)
    {
        _to = Mesh::NewInstance(env, (MbMesh *)mesh);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value TopologyItem::CalculateMesh_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(StepData::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "StepData stepData is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !((info[1].IsObject() && info[1].ToObject().InstanceOf(FormNote::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "FormNote note is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'stepData'"));
        return deferred.Promise();
    }
    const class StepData *stepData_ = StepData::Unwrap(info[0].ToObject());

    const MbStepData &stepData = *stepData_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'note'"));
        return deferred.Promise();
    }
    const class FormNote *note_ = FormNote::Unwrap(info[1].ToObject());

    const MbFormNote &note = *note_->_underlying;

    TopologyItem_CalculateMesh_AsyncWorker *asyncWorker =
        new TopologyItem_CalculateMesh_AsyncWorker(_underlying, deferred,

                                                   stepData,

                                                   note);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value TopologyItem::GetOwnChanged(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool _result = _underlying->GetOwnChanged(

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value TopologyItem::GetOwnChanged_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    TopologyItem_GetOwnChanged_AsyncWorker *asyncWorker =
        new TopologyItem_GetOwnChanged_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value TopologyItem::GetUseCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    refcount_t _result = _underlying->GetUseCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value TopologyItem::GetUseCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    TopologyItem_GetUseCount_AsyncWorker *asyncWorker = new TopologyItem_GetUseCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value TopologyItem::AddRef(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->AddRef(

    );

    return env.Undefined();
}

Napi::Value TopologyItem::AddRef_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    TopologyItem_AddRef_AsyncWorker *asyncWorker = new TopologyItem_AddRef_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value TopologyItem::SetStyle(const Napi::CallbackInfo &info)
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

Napi::Value TopologyItem::SetStyle_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "int s is required."));
        return deferred.Promise();
    }

    int s = info[0].ToNumber().Int64Value();

    TopologyItem_SetStyle_AsyncWorker *asyncWorker = new TopologyItem_SetStyle_AsyncWorker(_underlying, deferred,

                                                                                           s);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value TopologyItem::GetStyle(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    int _result = _underlying->GetStyle(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value TopologyItem::GetStyle_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    TopologyItem_GetStyle_AsyncWorker *asyncWorker = new TopologyItem_GetStyle_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value TopologyItem::SetColor(const Napi::CallbackInfo &info)
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

Napi::Value TopologyItem::SetColor_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "uint32 c is required."));
        return deferred.Promise();
    }

    int c = info[0].ToNumber().Int64Value();

    TopologyItem_SetColor_AsyncWorker *asyncWorker = new TopologyItem_SetColor_AsyncWorker(_underlying, deferred,

                                                                                           c);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value TopologyItem::GetColor(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    uint32 _result = _underlying->GetColor(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value TopologyItem::GetColor_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    TopologyItem_GetColor_AsyncWorker *asyncWorker = new TopologyItem_GetColor_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value TopologyItem::AttributesConvert(const Napi::CallbackInfo &info)
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

Napi::Value TopologyItem::AttributesConvert_async(const Napi::CallbackInfo &info)
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

    TopologyItem_AttributesConvert_AsyncWorker *asyncWorker =
        new TopologyItem_AttributesConvert_AsyncWorker(_underlying, deferred,

                                                       other);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value TopologyItem::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

TopologyItem::~TopologyItem()
{
    // std::cout << "calling ::DeleteItem on TopologyItem for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

TopologyItem_IsA_AsyncWorker::TopologyItem_IsA_AsyncWorker(MbTopologyItem *_underlying,
                                                           Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void TopologyItem_IsA_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeTopologyType _result = _underlying->IsA();

    this->_result = _result;

    ExitParallelRegion();
}

void TopologyItem_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeTopologyType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void TopologyItem_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
TopologyItem_GetName_AsyncWorker::TopologyItem_GetName_AsyncWorker(MbTopologyItem *_underlying,
                                                                   Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void TopologyItem_GetName_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbName &_result = _underlying->GetName();

    this->_result = new (MbName)(_result);

    ExitParallelRegion();
}

void TopologyItem_GetName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbName *_result = this->_result;
    _to = Name::NewInstance(env, (MbName *)&(_result));

    deferred.Resolve(_to);
}

void TopologyItem_GetName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
TopologyItem_GetMainName_AsyncWorker::TopologyItem_GetMainName_AsyncWorker(MbTopologyItem *_underlying,
                                                                           Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void TopologyItem_GetMainName_AsyncWorker::Execute()
{
    EnterParallelRegion();

    SimpleName _result = _underlying->GetMainName();

    this->_result = _result;

    ExitParallelRegion();
}

void TopologyItem_GetMainName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    SimpleName _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void TopologyItem_GetMainName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
TopologyItem_GetFirstName_AsyncWorker::TopologyItem_GetFirstName_AsyncWorker(MbTopologyItem *_underlying,
                                                                             Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void TopologyItem_GetFirstName_AsyncWorker::Execute()
{
    EnterParallelRegion();

    SimpleName _result = _underlying->GetFirstName();

    this->_result = _result;

    ExitParallelRegion();
}

void TopologyItem_GetFirstName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    SimpleName _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void TopologyItem_GetFirstName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
TopologyItem_GetNameHash_AsyncWorker::TopologyItem_GetNameHash_AsyncWorker(MbTopologyItem *_underlying,
                                                                           Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void TopologyItem_GetNameHash_AsyncWorker::Execute()
{
    EnterParallelRegion();

    SimpleName _result = _underlying->GetNameHash();

    this->_result = _result;

    ExitParallelRegion();
}

void TopologyItem_GetNameHash_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    SimpleName _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void TopologyItem_GetNameHash_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
TopologyItem_AddYourGabaritTo_AsyncWorker::TopologyItem_AddYourGabaritTo_AsyncWorker(MbTopologyItem *_underlying,
                                                                                     Napi::Promise::Deferred const &d,
                                                                                     MbCube &cube)
    : _underlying(_underlying), PromiseWorker(d), cube(cube){};

void TopologyItem_AddYourGabaritTo_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddYourGabaritTo(cube);

    ExitParallelRegion();
}

void TopologyItem_AddYourGabaritTo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void TopologyItem_AddYourGabaritTo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                       Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
TopologyItem_CalculateMesh_AsyncWorker::TopologyItem_CalculateMesh_AsyncWorker(MbTopologyItem *_underlying,
                                                                               Napi::Promise::Deferred const &d,
                                                                               const MbStepData &stepData,
                                                                               const MbFormNote &note)
    : _underlying(_underlying), PromiseWorker(d), stepData(stepData), note(note){};

void TopologyItem_CalculateMesh_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbMesh *mesh = new MbMesh;

    _underlying->CalculateMesh(stepData, note, *mesh);

    this->mesh = mesh;

    ExitParallelRegion();
}

void TopologyItem_CalculateMesh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbMesh *mesh = this->mesh;
    if (mesh != NULL)
    {
        _to = Mesh::NewInstance(env, (MbMesh *)mesh);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void TopologyItem_CalculateMesh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
TopologyItem_GetOwnChanged_AsyncWorker::TopologyItem_GetOwnChanged_AsyncWorker(MbTopologyItem *_underlying,
                                                                               Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void TopologyItem_GetOwnChanged_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->GetOwnChanged();

    this->_result = _result;

    ExitParallelRegion();
}

void TopologyItem_GetOwnChanged_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void TopologyItem_GetOwnChanged_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
TopologyItem_GetUseCount_AsyncWorker::TopologyItem_GetUseCount_AsyncWorker(MbTopologyItem *_underlying,
                                                                           Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void TopologyItem_GetUseCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    refcount_t _result = _underlying->GetUseCount();

    this->_result = _result;

    ExitParallelRegion();
}

void TopologyItem_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    refcount_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void TopologyItem_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
TopologyItem_AddRef_AsyncWorker::TopologyItem_AddRef_AsyncWorker(MbTopologyItem *_underlying,
                                                                 Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void TopologyItem_AddRef_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddRef();

    ExitParallelRegion();
}

void TopologyItem_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void TopologyItem_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
TopologyItem_SetStyle_AsyncWorker::TopologyItem_SetStyle_AsyncWorker(MbTopologyItem *_underlying,
                                                                     Napi::Promise::Deferred const &d, int s)
    : _underlying(_underlying), PromiseWorker(d), s(s){};

void TopologyItem_SetStyle_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetStyle(s);

    ExitParallelRegion();
}

void TopologyItem_SetStyle_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void TopologyItem_SetStyle_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
TopologyItem_GetStyle_AsyncWorker::TopologyItem_GetStyle_AsyncWorker(MbTopologyItem *_underlying,
                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void TopologyItem_GetStyle_AsyncWorker::Execute()
{
    EnterParallelRegion();

    int _result = _underlying->GetStyle();

    this->_result = _result;

    ExitParallelRegion();
}

void TopologyItem_GetStyle_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    int _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void TopologyItem_GetStyle_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
TopologyItem_SetColor_AsyncWorker::TopologyItem_SetColor_AsyncWorker(MbTopologyItem *_underlying,
                                                                     Napi::Promise::Deferred const &d, uint32 c)
    : _underlying(_underlying), PromiseWorker(d), c(c){};

void TopologyItem_SetColor_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetColor(c);

    ExitParallelRegion();
}

void TopologyItem_SetColor_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void TopologyItem_SetColor_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
TopologyItem_GetColor_AsyncWorker::TopologyItem_GetColor_AsyncWorker(MbTopologyItem *_underlying,
                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void TopologyItem_GetColor_AsyncWorker::Execute()
{
    EnterParallelRegion();

    uint32 _result = _underlying->GetColor();

    this->_result = _result;

    ExitParallelRegion();
}

void TopologyItem_GetColor_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    uint32 _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void TopologyItem_GetColor_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
TopologyItem_AttributesConvert_AsyncWorker::TopologyItem_AttributesConvert_AsyncWorker(MbTopologyItem *_underlying,
                                                                                       Napi::Promise::Deferred const &d,
                                                                                       MbGrid &other)
    : _underlying(_underlying), PromiseWorker(d), other(other){};

void TopologyItem_AttributesConvert_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AttributesConvert(other);

    ExitParallelRegion();
}

void TopologyItem_AttributesConvert_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void TopologyItem_AttributesConvert_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                        Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
