// This is a generated file, modify: generate/templates/CurveSweptSolid.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/CurveSweptSolid.h"

#include "tool_mutex.h"

Napi::Object CurveSweptSolid::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func =
        DefineClass(env, "CurveSweptSolid",
                    {
                        InstanceMethod<&CurveSweptSolid::IsA>("IsA"),
                        InstanceMethod<&CurveSweptSolid::IsA_async>("IsA_async"),
                        InstanceMethod<&CurveSweptSolid::Type>("Type"),
                        InstanceMethod<&CurveSweptSolid::Type_async>("Type_async"),
                        InstanceMethod<&CurveSweptSolid::GetBasisPoints>("GetBasisPoints"),
                        InstanceMethod<&CurveSweptSolid::GetBasisPoints_async>("GetBasisPoints_async"),
                        InstanceMethod<&CurveSweptSolid::SetBasisPoints>("SetBasisPoints"),
                        InstanceMethod<&CurveSweptSolid::SetBasisPoints_async>("SetBasisPoints_async"),
                        InstanceMethod<&CurveSweptSolid::GetBasisItems>("GetBasisItems"),
                        InstanceMethod<&CurveSweptSolid::GetBasisItems_async>("GetBasisItems_async"),
                        InstanceMethod<&CurveSweptSolid::GetCreatorsCount>("GetCreatorsCount"),
                        InstanceMethod<&CurveSweptSolid::GetCreatorsCount_async>("GetCreatorsCount_async"),
                        InstanceMethod<&CurveSweptSolid::GetYourNameMaker>("GetYourNameMaker"),
                        InstanceMethod<&CurveSweptSolid::GetYourNameMaker_async>("GetYourNameMaker_async"),
                        InstanceMethod<&CurveSweptSolid::GetStatus>("GetStatus"),
                        InstanceMethod<&CurveSweptSolid::GetStatus_async>("GetStatus_async"),
                        InstanceMethod<&CurveSweptSolid::SetStatus>("SetStatus"),
                        InstanceMethod<&CurveSweptSolid::SetStatus_async>("SetStatus_async"),
                        InstanceMethod<&CurveSweptSolid::CreateShell>("CreateShell"),
                        InstanceMethod<&CurveSweptSolid::CreateShell_async>("CreateShell_async"),
                        InstanceMethod<&CurveSweptSolid::GetMainName>("GetMainName"),
                        InstanceMethod<&CurveSweptSolid::GetMainName_async>("GetMainName_async"),
                        InstanceMethod<&CurveSweptSolid::GetUseCount>("GetUseCount"),
                        InstanceMethod<&CurveSweptSolid::GetUseCount_async>("GetUseCount_async"),
                        InstanceMethod<&CurveSweptSolid::AddRef>("AddRef"),
                        InstanceMethod<&CurveSweptSolid::AddRef_async>("AddRef_async"),
                        InstanceMethod<&CurveSweptSolid::Id>("Id"),

                    });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("CurveSweptSolid", func);

    Napi::Object global = env.Global();
    Napi::Object Object = global.Get("Object").ToObject();
    Napi::Function setPrototypeOf = Napi::Function(env, Object.Get("setPrototypeOf"));
    Napi::Value prototype = func.Get("prototype");

    Napi::Function superFunc = Creator::GetConstructor(env);
    Napi::FunctionReference *superConstructor = new Napi::FunctionReference();
    *superConstructor = Napi::Persistent(superFunc);

    Napi::Value superPrototype = superFunc.Get("prototype");
    setPrototypeOf.Call({prototype, superPrototype});
    setPrototypeOf.Call({func, superFunc});

    return exports;
}

CurveSweptSolid::CurveSweptSolid(const Napi::CallbackInfo &info) : Napi::ObjectWrap<CurveSweptSolid>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    Napi::Error::New(env, "CurveSweptSolid cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object CurveSweptSolid::NewInstance(Napi::Env env, MbCurveSweptSolid *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("CurveSweptSolid");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    CurveSweptSolid *unwrapped = CurveSweptSolid::Unwrap(inst);
    underlying->AddRef();
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function CurveSweptSolid::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("CurveSweptSolid");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value CurveSweptSolid::IsA(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeCreatorType _result = _underlying->IsA(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value CurveSweptSolid::IsA_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    CurveSweptSolid_IsA_AsyncWorker *asyncWorker = new CurveSweptSolid_IsA_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CurveSweptSolid::Type(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeCreatorType _result = _underlying->Type(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value CurveSweptSolid::Type_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    CurveSweptSolid_Type_AsyncWorker *asyncWorker = new CurveSweptSolid_Type_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CurveSweptSolid::GetBasisPoints(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbControlData3D *cd = new MbControlData3D;

    _underlying->GetBasisPoints(*cd

    );

    Napi::Value _to;

    if (cd != NULL)
    {
        _to = ControlData3D::NewInstance(env, (MbControlData3D *)cd);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value CurveSweptSolid::GetBasisPoints_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    CurveSweptSolid_GetBasisPoints_AsyncWorker *asyncWorker =
        new CurveSweptSolid_GetBasisPoints_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CurveSweptSolid::SetBasisPoints(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 ||
        !((info[0].IsObject() && info[0].ToObject().InstanceOf(ControlData3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "ControlData3D cd is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'cd'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class ControlData3D *cd_ = ControlData3D::Unwrap(info[0].ToObject());

    const MbControlData3D &cd = *cd_->_underlying;

    _underlying->SetBasisPoints(cd

    );

    return env.Undefined();
}

Napi::Value CurveSweptSolid::SetBasisPoints_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 ||
        !((info[0].IsObject() && info[0].ToObject().InstanceOf(ControlData3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "ControlData3D cd is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'cd'"));
        return deferred.Promise();
    }
    const class ControlData3D *cd_ = ControlData3D::Unwrap(info[0].ToObject());

    const MbControlData3D &cd = *cd_->_underlying;

    CurveSweptSolid_SetBasisPoints_AsyncWorker *asyncWorker =
        new CurveSweptSolid_SetBasisPoints_AsyncWorker(_underlying, deferred,

                                                       cd);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CurveSweptSolid::GetBasisItems(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    RPArray<MbSpaceItem> *items = new RPArray<MbSpaceItem>;

    _underlying->GetBasisItems(*items

    );

    Napi::Value _to;

    Napi::Array arr_items = Napi::Array::New(env);
    for (size_t i = 0; i < items->Count(); i++)
    {
        arr_items[i] = SpaceItem::NewInstance(env,

                                              (*items)[i]

        );
    }
    _to = arr_items;

    return _to;
}

Napi::Value CurveSweptSolid::GetBasisItems_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    CurveSweptSolid_GetBasisItems_AsyncWorker *asyncWorker =
        new CurveSweptSolid_GetBasisItems_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CurveSweptSolid::GetCreatorsCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "CreatorType ct is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    const MbeCreatorType ct = static_cast<MbeCreatorType>(info[0].ToNumber().Uint32Value());

    size_t _result = _underlying->GetCreatorsCount(ct

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value CurveSweptSolid::GetCreatorsCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "CreatorType ct is required."));
        return deferred.Promise();
    }

    const MbeCreatorType ct = static_cast<MbeCreatorType>(info[0].ToNumber().Uint32Value());

    CurveSweptSolid_GetCreatorsCount_AsyncWorker *asyncWorker =
        new CurveSweptSolid_GetCreatorsCount_AsyncWorker(_underlying, deferred,

                                                         ct);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CurveSweptSolid::GetYourNameMaker(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbSNameMaker &_result = _underlying->GetYourNameMaker(

    );

    Napi::Value _to;

    _to = SNameMaker::NewInstance(env, (MbSNameMaker *)&(_result));

    return _to;
}

Napi::Value CurveSweptSolid::GetYourNameMaker_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    CurveSweptSolid_GetYourNameMaker_AsyncWorker *asyncWorker =
        new CurveSweptSolid_GetYourNameMaker_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CurveSweptSolid::GetStatus(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeProcessState _result = _underlying->GetStatus(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value CurveSweptSolid::GetStatus_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    CurveSweptSolid_GetStatus_AsyncWorker *asyncWorker =
        new CurveSweptSolid_GetStatus_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CurveSweptSolid::SetStatus(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "ProcessState l is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    const MbeProcessState l = static_cast<MbeProcessState>(info[0].ToNumber().Uint32Value());

    _underlying->SetStatus(l

    );

    return env.Undefined();
}

Napi::Value CurveSweptSolid::SetStatus_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "ProcessState l is required."));
        return deferred.Promise();
    }

    const MbeProcessState l = static_cast<MbeProcessState>(info[0].ToNumber().Uint32Value());

    CurveSweptSolid_SetStatus_AsyncWorker *asyncWorker =
        new CurveSweptSolid_SetStatus_AsyncWorker(_underlying, deferred,

                                                  l);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CurveSweptSolid::CreateShell(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(FaceShell::GetConstructor(env)))))
    {
        Napi::Error::New(env, "FaceShell shell is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        Napi::Error::New(env, "CopyMode sameShell is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    RPArray<MbSpaceItem> *items = new RPArray<MbSpaceItem>;

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'shell'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class FaceShell *shell_ = FaceShell::Unwrap(info[0].ToObject());

    MbFaceShell *shell = shell_->_underlying;

    const MbeCopyMode sameShell = static_cast<MbeCopyMode>(info[1].ToNumber().Uint32Value());

    bool success = _underlying->CreateShell(shell, sameShell, items

    );

    Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

    _to = Napi::Boolean::New(env, success);

    _toReturn.Set(Napi::String::New(env, "success"), _to);
    Napi::Array arr_items = Napi::Array::New(env);
    for (size_t i = 0; i < items->Count(); i++)
    {
        arr_items[i] = SpaceItem::NewInstance(env,

                                              (*items)[i]

        );
    }
    _to = arr_items;

    _toReturn.Set(Napi::String::New(env, "items"), _to);
    return _toReturn;
}

Napi::Value CurveSweptSolid::CreateShell_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(FaceShell::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "FaceShell shell is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "CopyMode sameShell is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'shell'"));
        return deferred.Promise();
    }
    const class FaceShell *shell_ = FaceShell::Unwrap(info[0].ToObject());

    MbFaceShell *shell = shell_->_underlying;

    const MbeCopyMode sameShell = static_cast<MbeCopyMode>(info[1].ToNumber().Uint32Value());

    CurveSweptSolid_CreateShell_AsyncWorker *asyncWorker =
        new CurveSweptSolid_CreateShell_AsyncWorker(_underlying, deferred,

                                                    shell,

                                                    sameShell);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CurveSweptSolid::GetMainName(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    SimpleName _result = _underlying->GetMainName(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value CurveSweptSolid::GetMainName_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    CurveSweptSolid_GetMainName_AsyncWorker *asyncWorker =
        new CurveSweptSolid_GetMainName_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CurveSweptSolid::GetUseCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    refcount_t _result = _underlying->GetUseCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value CurveSweptSolid::GetUseCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    CurveSweptSolid_GetUseCount_AsyncWorker *asyncWorker =
        new CurveSweptSolid_GetUseCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CurveSweptSolid::AddRef(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->AddRef(

    );

    return env.Undefined();
}

Napi::Value CurveSweptSolid::AddRef_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    CurveSweptSolid_AddRef_AsyncWorker *asyncWorker = new CurveSweptSolid_AddRef_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value CurveSweptSolid::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

CurveSweptSolid::~CurveSweptSolid()
{
    // std::cout << "calling ::DeleteItem on CurveSweptSolid for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

CurveSweptSolid_IsA_AsyncWorker::CurveSweptSolid_IsA_AsyncWorker(MbCurveSweptSolid *_underlying,
                                                                 Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void CurveSweptSolid_IsA_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeCreatorType _result = _underlying->IsA();

    this->_result = _result;

    ExitParallelRegion();
}

void CurveSweptSolid_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeCreatorType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void CurveSweptSolid_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CurveSweptSolid_Type_AsyncWorker::CurveSweptSolid_Type_AsyncWorker(MbCurveSweptSolid *_underlying,
                                                                   Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void CurveSweptSolid_Type_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeCreatorType _result = _underlying->Type();

    this->_result = _result;

    ExitParallelRegion();
}

void CurveSweptSolid_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeCreatorType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void CurveSweptSolid_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CurveSweptSolid_GetBasisPoints_AsyncWorker::CurveSweptSolid_GetBasisPoints_AsyncWorker(MbCurveSweptSolid *_underlying,
                                                                                       Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void CurveSweptSolid_GetBasisPoints_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbControlData3D *cd = new MbControlData3D;

    _underlying->GetBasisPoints(*cd);

    this->cd = cd;

    ExitParallelRegion();
}

void CurveSweptSolid_GetBasisPoints_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbControlData3D *cd = this->cd;
    if (cd != NULL)
    {
        _to = ControlData3D::NewInstance(env, (MbControlData3D *)cd);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void CurveSweptSolid_GetBasisPoints_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                        Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CurveSweptSolid_SetBasisPoints_AsyncWorker::CurveSweptSolid_SetBasisPoints_AsyncWorker(MbCurveSweptSolid *_underlying,
                                                                                       Napi::Promise::Deferred const &d,
                                                                                       const MbControlData3D &cd)
    : _underlying(_underlying), PromiseWorker(d), cd(cd){};

void CurveSweptSolid_SetBasisPoints_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetBasisPoints(cd);

    ExitParallelRegion();
}

void CurveSweptSolid_SetBasisPoints_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void CurveSweptSolid_SetBasisPoints_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                        Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CurveSweptSolid_GetBasisItems_AsyncWorker::CurveSweptSolid_GetBasisItems_AsyncWorker(MbCurveSweptSolid *_underlying,
                                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void CurveSweptSolid_GetBasisItems_AsyncWorker::Execute()
{
    EnterParallelRegion();

    RPArray<MbSpaceItem> *items = new RPArray<MbSpaceItem>;

    _underlying->GetBasisItems(*items);

    this->items = items;

    ExitParallelRegion();
}

void CurveSweptSolid_GetBasisItems_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    RPArray<MbSpaceItem> *items = this->items;
    Napi::Array arr_items = Napi::Array::New(env);
    for (size_t i = 0; i < items->Count(); i++)
    {
        arr_items[i] = SpaceItem::NewInstance(env,

                                              (*items)[i]

        );
    }
    _to = arr_items;

    deferred.Resolve(_to);
}

void CurveSweptSolid_GetBasisItems_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                       Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CurveSweptSolid_GetCreatorsCount_AsyncWorker::CurveSweptSolid_GetCreatorsCount_AsyncWorker(
    MbCurveSweptSolid *_underlying, Napi::Promise::Deferred const &d, MbeCreatorType ct)
    : _underlying(_underlying), PromiseWorker(d), ct(ct){};

void CurveSweptSolid_GetCreatorsCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    size_t _result = _underlying->GetCreatorsCount(ct);

    this->_result = _result;

    ExitParallelRegion();
}

void CurveSweptSolid_GetCreatorsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    size_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void CurveSweptSolid_GetCreatorsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                          Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CurveSweptSolid_GetYourNameMaker_AsyncWorker::CurveSweptSolid_GetYourNameMaker_AsyncWorker(
    MbCurveSweptSolid *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void CurveSweptSolid_GetYourNameMaker_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbSNameMaker &_result = _underlying->GetYourNameMaker();

    this->_result = (MbSNameMaker *)&(_result);

    ExitParallelRegion();
}

void CurveSweptSolid_GetYourNameMaker_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbSNameMaker *_result = this->_result;
    _to = SNameMaker::NewInstance(env, (MbSNameMaker *)&(_result));

    deferred.Resolve(_to);
}

void CurveSweptSolid_GetYourNameMaker_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                          Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CurveSweptSolid_GetStatus_AsyncWorker::CurveSweptSolid_GetStatus_AsyncWorker(MbCurveSweptSolid *_underlying,
                                                                             Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void CurveSweptSolid_GetStatus_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeProcessState _result = _underlying->GetStatus();

    this->_result = _result;

    ExitParallelRegion();
}

void CurveSweptSolid_GetStatus_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeProcessState _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void CurveSweptSolid_GetStatus_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CurveSweptSolid_SetStatus_AsyncWorker::CurveSweptSolid_SetStatus_AsyncWorker(MbCurveSweptSolid *_underlying,
                                                                             Napi::Promise::Deferred const &d,
                                                                             MbeProcessState l)
    : _underlying(_underlying), PromiseWorker(d), l(l){};

void CurveSweptSolid_SetStatus_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetStatus(l);

    ExitParallelRegion();
}

void CurveSweptSolid_SetStatus_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void CurveSweptSolid_SetStatus_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CurveSweptSolid_CreateShell_AsyncWorker::CurveSweptSolid_CreateShell_AsyncWorker(MbCurveSweptSolid *_underlying,
                                                                                 Napi::Promise::Deferred const &d,
                                                                                 MbFaceShell *shell,
                                                                                 MbeCopyMode sameShell)
    : _underlying(_underlying), PromiseWorker(d), shell(shell), sameShell(sameShell){};

void CurveSweptSolid_CreateShell_AsyncWorker::Execute()
{
    EnterParallelRegion();

    RPArray<MbSpaceItem> *items = new RPArray<MbSpaceItem>;

    bool success = _underlying->CreateShell(shell, sameShell, items);

    this->success = success;
    this->items = items;

    ExitParallelRegion();
}

void CurveSweptSolid_CreateShell_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    Napi::Object _toReturn = Napi::Object::New(env);

    bool success = this->success;
    _to = Napi::Boolean::New(env, success);

    _toReturn.Set(Napi::String::New(env, "success"), _to);
    RPArray<MbSpaceItem> *items = this->items;
    Napi::Array arr_items = Napi::Array::New(env);
    for (size_t i = 0; i < items->Count(); i++)
    {
        arr_items[i] = SpaceItem::NewInstance(env,

                                              (*items)[i]

        );
    }
    _to = arr_items;

    _toReturn.Set(Napi::String::New(env, "items"), _to);

    deferred.Resolve(_toReturn);
}

void CurveSweptSolid_CreateShell_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CurveSweptSolid_GetMainName_AsyncWorker::CurveSweptSolid_GetMainName_AsyncWorker(MbCurveSweptSolid *_underlying,
                                                                                 Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void CurveSweptSolid_GetMainName_AsyncWorker::Execute()
{
    EnterParallelRegion();

    SimpleName _result = _underlying->GetMainName();

    this->_result = _result;

    ExitParallelRegion();
}

void CurveSweptSolid_GetMainName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    SimpleName _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void CurveSweptSolid_GetMainName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CurveSweptSolid_GetUseCount_AsyncWorker::CurveSweptSolid_GetUseCount_AsyncWorker(MbCurveSweptSolid *_underlying,
                                                                                 Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void CurveSweptSolid_GetUseCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    refcount_t _result = _underlying->GetUseCount();

    this->_result = _result;

    ExitParallelRegion();
}

void CurveSweptSolid_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    refcount_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void CurveSweptSolid_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CurveSweptSolid_AddRef_AsyncWorker::CurveSweptSolid_AddRef_AsyncWorker(MbCurveSweptSolid *_underlying,
                                                                       Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void CurveSweptSolid_AddRef_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddRef();

    ExitParallelRegion();
}

void CurveSweptSolid_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void CurveSweptSolid_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
