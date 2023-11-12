// This is a generated file, modify: generate/templates/Vertex.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/Vertex.h"

#include "tool_mutex.h"

Napi::Object Vertex::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(env, "Vertex",
                                      {
                                          InstanceMethod<&Vertex::IsA>("IsA"),
                                          InstanceMethod<&Vertex::IsA_async>("IsA_async"),
                                          InstanceMethod<&Vertex::GetName>("GetName"),
                                          InstanceMethod<&Vertex::GetName_async>("GetName_async"),
                                          InstanceMethod<&Vertex::GetMainName>("GetMainName"),
                                          InstanceMethod<&Vertex::GetMainName_async>("GetMainName_async"),
                                          InstanceMethod<&Vertex::GetFirstName>("GetFirstName"),
                                          InstanceMethod<&Vertex::GetFirstName_async>("GetFirstName_async"),
                                          InstanceMethod<&Vertex::GetNameHash>("GetNameHash"),
                                          InstanceMethod<&Vertex::GetNameHash_async>("GetNameHash_async"),
                                          InstanceMethod<&Vertex::AddYourGabaritTo>("AddYourGabaritTo"),
                                          InstanceMethod<&Vertex::AddYourGabaritTo_async>("AddYourGabaritTo_async"),
                                          InstanceMethod<&Vertex::CalculateMesh>("CalculateMesh"),
                                          InstanceMethod<&Vertex::CalculateMesh_async>("CalculateMesh_async"),
                                          InstanceMethod<&Vertex::GetOwnChanged>("GetOwnChanged"),
                                          InstanceMethod<&Vertex::GetOwnChanged_async>("GetOwnChanged_async"),
                                          InstanceMethod<&Vertex::GetUseCount>("GetUseCount"),
                                          InstanceMethod<&Vertex::GetUseCount_async>("GetUseCount_async"),
                                          InstanceMethod<&Vertex::AddRef>("AddRef"),
                                          InstanceMethod<&Vertex::AddRef_async>("AddRef_async"),
                                          InstanceMethod<&Vertex::SetStyle>("SetStyle"),
                                          InstanceMethod<&Vertex::SetStyle_async>("SetStyle_async"),
                                          InstanceMethod<&Vertex::GetStyle>("GetStyle"),
                                          InstanceMethod<&Vertex::GetStyle_async>("GetStyle_async"),
                                          InstanceMethod<&Vertex::SetColor>("SetColor"),
                                          InstanceMethod<&Vertex::SetColor_async>("SetColor_async"),
                                          InstanceMethod<&Vertex::GetColor>("GetColor"),
                                          InstanceMethod<&Vertex::GetColor_async>("GetColor_async"),
                                          InstanceMethod<&Vertex::AttributesConvert>("AttributesConvert"),
                                          InstanceMethod<&Vertex::AttributesConvert_async>("AttributesConvert_async"),
                                          InstanceMethod<&Vertex::Id>("Id"),

                                      });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Vertex", func);

    Napi::Object global = env.Global();
    Napi::Object Object = global.Get("Object").ToObject();
    Napi::Function setPrototypeOf = Napi::Function(env, Object.Get("setPrototypeOf"));
    Napi::Value prototype = func.Get("prototype");

    Napi::Function superFunc = TopologyItem::GetConstructor(env);
    Napi::FunctionReference *superConstructor = new Napi::FunctionReference();
    *superConstructor = Napi::Persistent(superFunc);

    Napi::Value superPrototype = superFunc.Get("prototype");
    setPrototypeOf.Call({prototype, superPrototype});
    setPrototypeOf.Call({func, superFunc});

    return exports;
}

Vertex::Vertex(const Napi::CallbackInfo &info) : Napi::ObjectWrap<Vertex>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    Napi::Error::New(env, "Vertex cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object Vertex::NewInstance(Napi::Env env, MbVertex *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Vertex");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Vertex *unwrapped = Vertex::Unwrap(inst);
    underlying->AddRef();
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Vertex::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Vertex");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value Vertex::IsA(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeTopologyType _result = _underlying->IsA(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Vertex::IsA_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Vertex_IsA_AsyncWorker *asyncWorker = new Vertex_IsA_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Vertex::GetName(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbName &_result = _underlying->GetName(

    );

    Napi::Value _to;

    _to = Name::NewInstance(env, new MbName(_result));

    return _to;
}

Napi::Value Vertex::GetName_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Vertex_GetName_AsyncWorker *asyncWorker = new Vertex_GetName_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Vertex::GetMainName(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    SimpleName _result = _underlying->GetMainName(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Vertex::GetMainName_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Vertex_GetMainName_AsyncWorker *asyncWorker = new Vertex_GetMainName_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Vertex::GetFirstName(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    SimpleName _result = _underlying->GetFirstName(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Vertex::GetFirstName_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Vertex_GetFirstName_AsyncWorker *asyncWorker = new Vertex_GetFirstName_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Vertex::GetNameHash(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    SimpleName _result = _underlying->GetNameHash(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Vertex::GetNameHash_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Vertex_GetNameHash_AsyncWorker *asyncWorker = new Vertex_GetNameHash_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Vertex::AddYourGabaritTo(const Napi::CallbackInfo &info)
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

Napi::Value Vertex::AddYourGabaritTo_async(const Napi::CallbackInfo &info)
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

    Vertex_AddYourGabaritTo_AsyncWorker *asyncWorker = new Vertex_AddYourGabaritTo_AsyncWorker(_underlying, deferred,

                                                                                               cube);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Vertex::CalculateMesh(const Napi::CallbackInfo &info)
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

Napi::Value Vertex::CalculateMesh_async(const Napi::CallbackInfo &info)
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

    Vertex_CalculateMesh_AsyncWorker *asyncWorker = new Vertex_CalculateMesh_AsyncWorker(_underlying, deferred,

                                                                                         stepData,

                                                                                         note);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Vertex::GetOwnChanged(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    bool _result = _underlying->GetOwnChanged(

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value Vertex::GetOwnChanged_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Vertex_GetOwnChanged_AsyncWorker *asyncWorker = new Vertex_GetOwnChanged_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Vertex::GetUseCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    refcount_t _result = _underlying->GetUseCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Vertex::GetUseCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Vertex_GetUseCount_AsyncWorker *asyncWorker = new Vertex_GetUseCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Vertex::AddRef(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->AddRef(

    );

    return env.Undefined();
}

Napi::Value Vertex::AddRef_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Vertex_AddRef_AsyncWorker *asyncWorker = new Vertex_AddRef_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Vertex::SetStyle(const Napi::CallbackInfo &info)
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

Napi::Value Vertex::SetStyle_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "int s is required."));
        return deferred.Promise();
    }

    int s = info[0].ToNumber().Int64Value();

    Vertex_SetStyle_AsyncWorker *asyncWorker = new Vertex_SetStyle_AsyncWorker(_underlying, deferred,

                                                                               s);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Vertex::GetStyle(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    int _result = _underlying->GetStyle(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Vertex::GetStyle_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Vertex_GetStyle_AsyncWorker *asyncWorker = new Vertex_GetStyle_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Vertex::SetColor(const Napi::CallbackInfo &info)
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

Napi::Value Vertex::SetColor_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "uint32 c is required."));
        return deferred.Promise();
    }

    int c = info[0].ToNumber().Int64Value();

    Vertex_SetColor_AsyncWorker *asyncWorker = new Vertex_SetColor_AsyncWorker(_underlying, deferred,

                                                                               c);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Vertex::GetColor(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    uint32 _result = _underlying->GetColor(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Vertex::GetColor_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Vertex_GetColor_AsyncWorker *asyncWorker = new Vertex_GetColor_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Vertex::AttributesConvert(const Napi::CallbackInfo &info)
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

Napi::Value Vertex::AttributesConvert_async(const Napi::CallbackInfo &info)
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

    Vertex_AttributesConvert_AsyncWorker *asyncWorker = new Vertex_AttributesConvert_AsyncWorker(_underlying, deferred,

                                                                                                 other);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value Vertex::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

Vertex::~Vertex()
{
    // std::cout << "calling ::DeleteItem on Vertex for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

Vertex_IsA_AsyncWorker::Vertex_IsA_AsyncWorker(MbVertex *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Vertex_IsA_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeTopologyType _result = _underlying->IsA();

    this->_result = _result;

    ExitParallelRegion();
}

void Vertex_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeTopologyType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Vertex_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Vertex_GetName_AsyncWorker::Vertex_GetName_AsyncWorker(MbVertex *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Vertex_GetName_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbName &_result = _underlying->GetName();

    this->_result = new (MbName)(_result);

    ExitParallelRegion();
}

void Vertex_GetName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbName *_result = this->_result;
    _to = Name::NewInstance(env, (MbName *)&(_result));

    deferred.Resolve(_to);
}

void Vertex_GetName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Vertex_GetMainName_AsyncWorker::Vertex_GetMainName_AsyncWorker(MbVertex *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Vertex_GetMainName_AsyncWorker::Execute()
{
    EnterParallelRegion();

    SimpleName _result = _underlying->GetMainName();

    this->_result = _result;

    ExitParallelRegion();
}

void Vertex_GetMainName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    SimpleName _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Vertex_GetMainName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Vertex_GetFirstName_AsyncWorker::Vertex_GetFirstName_AsyncWorker(MbVertex *_underlying,
                                                                 Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Vertex_GetFirstName_AsyncWorker::Execute()
{
    EnterParallelRegion();

    SimpleName _result = _underlying->GetFirstName();

    this->_result = _result;

    ExitParallelRegion();
}

void Vertex_GetFirstName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    SimpleName _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Vertex_GetFirstName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Vertex_GetNameHash_AsyncWorker::Vertex_GetNameHash_AsyncWorker(MbVertex *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Vertex_GetNameHash_AsyncWorker::Execute()
{
    EnterParallelRegion();

    SimpleName _result = _underlying->GetNameHash();

    this->_result = _result;

    ExitParallelRegion();
}

void Vertex_GetNameHash_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    SimpleName _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Vertex_GetNameHash_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Vertex_AddYourGabaritTo_AsyncWorker::Vertex_AddYourGabaritTo_AsyncWorker(MbVertex *_underlying,
                                                                         Napi::Promise::Deferred const &d, MbCube &cube)
    : _underlying(_underlying), PromiseWorker(d), cube(cube){};

void Vertex_AddYourGabaritTo_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddYourGabaritTo(cube);

    ExitParallelRegion();
}

void Vertex_AddYourGabaritTo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Vertex_AddYourGabaritTo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Vertex_CalculateMesh_AsyncWorker::Vertex_CalculateMesh_AsyncWorker(MbVertex *_underlying,
                                                                   Napi::Promise::Deferred const &d,
                                                                   const MbStepData &stepData, const MbFormNote &note)
    : _underlying(_underlying), PromiseWorker(d), stepData(stepData), note(note){};

void Vertex_CalculateMesh_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbMesh *mesh = new MbMesh;

    _underlying->CalculateMesh(stepData, note, *mesh);

    this->mesh = mesh;

    ExitParallelRegion();
}

void Vertex_CalculateMesh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Vertex_CalculateMesh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Vertex_GetOwnChanged_AsyncWorker::Vertex_GetOwnChanged_AsyncWorker(MbVertex *_underlying,
                                                                   Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Vertex_GetOwnChanged_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->GetOwnChanged();

    this->_result = _result;

    ExitParallelRegion();
}

void Vertex_GetOwnChanged_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void Vertex_GetOwnChanged_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Vertex_GetUseCount_AsyncWorker::Vertex_GetUseCount_AsyncWorker(MbVertex *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Vertex_GetUseCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    refcount_t _result = _underlying->GetUseCount();

    this->_result = _result;

    ExitParallelRegion();
}

void Vertex_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    refcount_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Vertex_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Vertex_AddRef_AsyncWorker::Vertex_AddRef_AsyncWorker(MbVertex *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Vertex_AddRef_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddRef();

    ExitParallelRegion();
}

void Vertex_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Vertex_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Vertex_SetStyle_AsyncWorker::Vertex_SetStyle_AsyncWorker(MbVertex *_underlying, Napi::Promise::Deferred const &d, int s)
    : _underlying(_underlying), PromiseWorker(d), s(s){};

void Vertex_SetStyle_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetStyle(s);

    ExitParallelRegion();
}

void Vertex_SetStyle_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Vertex_SetStyle_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Vertex_GetStyle_AsyncWorker::Vertex_GetStyle_AsyncWorker(MbVertex *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Vertex_GetStyle_AsyncWorker::Execute()
{
    EnterParallelRegion();

    int _result = _underlying->GetStyle();

    this->_result = _result;

    ExitParallelRegion();
}

void Vertex_GetStyle_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    int _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Vertex_GetStyle_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Vertex_SetColor_AsyncWorker::Vertex_SetColor_AsyncWorker(MbVertex *_underlying, Napi::Promise::Deferred const &d,
                                                         uint32 c)
    : _underlying(_underlying), PromiseWorker(d), c(c){};

void Vertex_SetColor_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetColor(c);

    ExitParallelRegion();
}

void Vertex_SetColor_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Vertex_SetColor_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Vertex_GetColor_AsyncWorker::Vertex_GetColor_AsyncWorker(MbVertex *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Vertex_GetColor_AsyncWorker::Execute()
{
    EnterParallelRegion();

    uint32 _result = _underlying->GetColor();

    this->_result = _result;

    ExitParallelRegion();
}

void Vertex_GetColor_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    uint32 _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Vertex_GetColor_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Vertex_AttributesConvert_AsyncWorker::Vertex_AttributesConvert_AsyncWorker(MbVertex *_underlying,
                                                                           Napi::Promise::Deferred const &d,
                                                                           MbGrid &other)
    : _underlying(_underlying), PromiseWorker(d), other(other){};

void Vertex_AttributesConvert_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AttributesConvert(other);

    ExitParallelRegion();
}

void Vertex_AttributesConvert_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Vertex_AttributesConvert_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
