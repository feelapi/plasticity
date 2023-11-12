// This is a generated file, modify: generate/templates/FaceModifiedSolid.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/FaceModifiedSolid.h"

#include "tool_mutex.h"

Napi::Object FaceModifiedSolid::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func =
        DefineClass(env, "FaceModifiedSolid",
                    {
                        InstanceMethod<&FaceModifiedSolid::IsA>("IsA"),
                        InstanceMethod<&FaceModifiedSolid::IsA_async>("IsA_async"),
                        InstanceMethod<&FaceModifiedSolid::Type>("Type"),
                        InstanceMethod<&FaceModifiedSolid::Type_async>("Type_async"),
                        InstanceMethod<&FaceModifiedSolid::GetBasisPoints>("GetBasisPoints"),
                        InstanceMethod<&FaceModifiedSolid::GetBasisPoints_async>("GetBasisPoints_async"),
                        InstanceMethod<&FaceModifiedSolid::SetBasisPoints>("SetBasisPoints"),
                        InstanceMethod<&FaceModifiedSolid::SetBasisPoints_async>("SetBasisPoints_async"),
                        InstanceMethod<&FaceModifiedSolid::GetBasisItems>("GetBasisItems"),
                        InstanceMethod<&FaceModifiedSolid::GetBasisItems_async>("GetBasisItems_async"),
                        InstanceMethod<&FaceModifiedSolid::GetCreatorsCount>("GetCreatorsCount"),
                        InstanceMethod<&FaceModifiedSolid::GetCreatorsCount_async>("GetCreatorsCount_async"),
                        InstanceMethod<&FaceModifiedSolid::GetYourNameMaker>("GetYourNameMaker"),
                        InstanceMethod<&FaceModifiedSolid::GetYourNameMaker_async>("GetYourNameMaker_async"),
                        InstanceMethod<&FaceModifiedSolid::GetStatus>("GetStatus"),
                        InstanceMethod<&FaceModifiedSolid::GetStatus_async>("GetStatus_async"),
                        InstanceMethod<&FaceModifiedSolid::SetStatus>("SetStatus"),
                        InstanceMethod<&FaceModifiedSolid::SetStatus_async>("SetStatus_async"),
                        InstanceMethod<&FaceModifiedSolid::CreateShell>("CreateShell"),
                        InstanceMethod<&FaceModifiedSolid::CreateShell_async>("CreateShell_async"),
                        InstanceMethod<&FaceModifiedSolid::GetMainName>("GetMainName"),
                        InstanceMethod<&FaceModifiedSolid::GetMainName_async>("GetMainName_async"),
                        InstanceMethod<&FaceModifiedSolid::GetUseCount>("GetUseCount"),
                        InstanceMethod<&FaceModifiedSolid::GetUseCount_async>("GetUseCount_async"),
                        InstanceMethod<&FaceModifiedSolid::AddRef>("AddRef"),
                        InstanceMethod<&FaceModifiedSolid::AddRef_async>("AddRef_async"),
                        InstanceMethod<&FaceModifiedSolid::Id>("Id"),

                    });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("FaceModifiedSolid", func);

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

FaceModifiedSolid::FaceModifiedSolid(const Napi::CallbackInfo &info) : Napi::ObjectWrap<FaceModifiedSolid>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    Napi::Error::New(env, "FaceModifiedSolid cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object FaceModifiedSolid::NewInstance(Napi::Env env, MbFaceModifiedSolid *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("FaceModifiedSolid");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    FaceModifiedSolid *unwrapped = FaceModifiedSolid::Unwrap(inst);
    underlying->AddRef();
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function FaceModifiedSolid::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("FaceModifiedSolid");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value FaceModifiedSolid::IsA(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeCreatorType _result = _underlying->IsA(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value FaceModifiedSolid::IsA_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    FaceModifiedSolid_IsA_AsyncWorker *asyncWorker = new FaceModifiedSolid_IsA_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value FaceModifiedSolid::Type(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeCreatorType _result = _underlying->Type(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value FaceModifiedSolid::Type_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    FaceModifiedSolid_Type_AsyncWorker *asyncWorker = new FaceModifiedSolid_Type_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value FaceModifiedSolid::GetBasisPoints(const Napi::CallbackInfo &info)
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

Napi::Value FaceModifiedSolid::GetBasisPoints_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    FaceModifiedSolid_GetBasisPoints_AsyncWorker *asyncWorker =
        new FaceModifiedSolid_GetBasisPoints_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value FaceModifiedSolid::SetBasisPoints(const Napi::CallbackInfo &info)
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

Napi::Value FaceModifiedSolid::SetBasisPoints_async(const Napi::CallbackInfo &info)
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

    FaceModifiedSolid_SetBasisPoints_AsyncWorker *asyncWorker =
        new FaceModifiedSolid_SetBasisPoints_AsyncWorker(_underlying, deferred,

                                                         cd);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value FaceModifiedSolid::GetBasisItems(const Napi::CallbackInfo &info)
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

Napi::Value FaceModifiedSolid::GetBasisItems_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    FaceModifiedSolid_GetBasisItems_AsyncWorker *asyncWorker =
        new FaceModifiedSolid_GetBasisItems_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value FaceModifiedSolid::GetCreatorsCount(const Napi::CallbackInfo &info)
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

Napi::Value FaceModifiedSolid::GetCreatorsCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "CreatorType ct is required."));
        return deferred.Promise();
    }

    const MbeCreatorType ct = static_cast<MbeCreatorType>(info[0].ToNumber().Uint32Value());

    FaceModifiedSolid_GetCreatorsCount_AsyncWorker *asyncWorker =
        new FaceModifiedSolid_GetCreatorsCount_AsyncWorker(_underlying, deferred,

                                                           ct);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value FaceModifiedSolid::GetYourNameMaker(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbSNameMaker &_result = _underlying->GetYourNameMaker(

    );

    Napi::Value _to;

    _to = SNameMaker::NewInstance(env, (MbSNameMaker *)&(_result));

    return _to;
}

Napi::Value FaceModifiedSolid::GetYourNameMaker_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    FaceModifiedSolid_GetYourNameMaker_AsyncWorker *asyncWorker =
        new FaceModifiedSolid_GetYourNameMaker_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value FaceModifiedSolid::GetStatus(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeProcessState _result = _underlying->GetStatus(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value FaceModifiedSolid::GetStatus_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    FaceModifiedSolid_GetStatus_AsyncWorker *asyncWorker =
        new FaceModifiedSolid_GetStatus_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value FaceModifiedSolid::SetStatus(const Napi::CallbackInfo &info)
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

Napi::Value FaceModifiedSolid::SetStatus_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "ProcessState l is required."));
        return deferred.Promise();
    }

    const MbeProcessState l = static_cast<MbeProcessState>(info[0].ToNumber().Uint32Value());

    FaceModifiedSolid_SetStatus_AsyncWorker *asyncWorker =
        new FaceModifiedSolid_SetStatus_AsyncWorker(_underlying, deferred,

                                                    l);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value FaceModifiedSolid::CreateShell(const Napi::CallbackInfo &info)
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

Napi::Value FaceModifiedSolid::CreateShell_async(const Napi::CallbackInfo &info)
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

    FaceModifiedSolid_CreateShell_AsyncWorker *asyncWorker =
        new FaceModifiedSolid_CreateShell_AsyncWorker(_underlying, deferred,

                                                      shell,

                                                      sameShell);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value FaceModifiedSolid::GetMainName(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    SimpleName _result = _underlying->GetMainName(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value FaceModifiedSolid::GetMainName_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    FaceModifiedSolid_GetMainName_AsyncWorker *asyncWorker =
        new FaceModifiedSolid_GetMainName_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value FaceModifiedSolid::GetUseCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    refcount_t _result = _underlying->GetUseCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value FaceModifiedSolid::GetUseCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    FaceModifiedSolid_GetUseCount_AsyncWorker *asyncWorker =
        new FaceModifiedSolid_GetUseCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value FaceModifiedSolid::AddRef(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->AddRef(

    );

    return env.Undefined();
}

Napi::Value FaceModifiedSolid::AddRef_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    FaceModifiedSolid_AddRef_AsyncWorker *asyncWorker = new FaceModifiedSolid_AddRef_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value FaceModifiedSolid::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

FaceModifiedSolid::~FaceModifiedSolid()
{
    // std::cout << "calling ::DeleteItem on FaceModifiedSolid for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

FaceModifiedSolid_IsA_AsyncWorker::FaceModifiedSolid_IsA_AsyncWorker(MbFaceModifiedSolid *_underlying,
                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void FaceModifiedSolid_IsA_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeCreatorType _result = _underlying->IsA();

    this->_result = _result;

    ExitParallelRegion();
}

void FaceModifiedSolid_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeCreatorType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void FaceModifiedSolid_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
FaceModifiedSolid_Type_AsyncWorker::FaceModifiedSolid_Type_AsyncWorker(MbFaceModifiedSolid *_underlying,
                                                                       Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void FaceModifiedSolid_Type_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeCreatorType _result = _underlying->Type();

    this->_result = _result;

    ExitParallelRegion();
}

void FaceModifiedSolid_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeCreatorType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void FaceModifiedSolid_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
FaceModifiedSolid_GetBasisPoints_AsyncWorker::FaceModifiedSolid_GetBasisPoints_AsyncWorker(
    MbFaceModifiedSolid *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void FaceModifiedSolid_GetBasisPoints_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbControlData3D *cd = new MbControlData3D;

    _underlying->GetBasisPoints(*cd);

    this->cd = cd;

    ExitParallelRegion();
}

void FaceModifiedSolid_GetBasisPoints_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void FaceModifiedSolid_GetBasisPoints_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                          Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
FaceModifiedSolid_SetBasisPoints_AsyncWorker::FaceModifiedSolid_SetBasisPoints_AsyncWorker(
    MbFaceModifiedSolid *_underlying, Napi::Promise::Deferred const &d, const MbControlData3D &cd)
    : _underlying(_underlying), PromiseWorker(d), cd(cd){};

void FaceModifiedSolid_SetBasisPoints_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetBasisPoints(cd);

    ExitParallelRegion();
}

void FaceModifiedSolid_SetBasisPoints_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void FaceModifiedSolid_SetBasisPoints_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                          Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
FaceModifiedSolid_GetBasisItems_AsyncWorker::FaceModifiedSolid_GetBasisItems_AsyncWorker(
    MbFaceModifiedSolid *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void FaceModifiedSolid_GetBasisItems_AsyncWorker::Execute()
{
    EnterParallelRegion();

    RPArray<MbSpaceItem> *items = new RPArray<MbSpaceItem>;

    _underlying->GetBasisItems(*items);

    this->items = items;

    ExitParallelRegion();
}

void FaceModifiedSolid_GetBasisItems_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void FaceModifiedSolid_GetBasisItems_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                         Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
FaceModifiedSolid_GetCreatorsCount_AsyncWorker::FaceModifiedSolid_GetCreatorsCount_AsyncWorker(
    MbFaceModifiedSolid *_underlying, Napi::Promise::Deferred const &d, MbeCreatorType ct)
    : _underlying(_underlying), PromiseWorker(d), ct(ct){};

void FaceModifiedSolid_GetCreatorsCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    size_t _result = _underlying->GetCreatorsCount(ct);

    this->_result = _result;

    ExitParallelRegion();
}

void FaceModifiedSolid_GetCreatorsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    size_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void FaceModifiedSolid_GetCreatorsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                            Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
FaceModifiedSolid_GetYourNameMaker_AsyncWorker::FaceModifiedSolid_GetYourNameMaker_AsyncWorker(
    MbFaceModifiedSolid *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void FaceModifiedSolid_GetYourNameMaker_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbSNameMaker &_result = _underlying->GetYourNameMaker();

    this->_result = (MbSNameMaker *)&(_result);

    ExitParallelRegion();
}

void FaceModifiedSolid_GetYourNameMaker_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbSNameMaker *_result = this->_result;
    _to = SNameMaker::NewInstance(env, (MbSNameMaker *)&(_result));

    deferred.Resolve(_to);
}

void FaceModifiedSolid_GetYourNameMaker_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                            Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
FaceModifiedSolid_GetStatus_AsyncWorker::FaceModifiedSolid_GetStatus_AsyncWorker(MbFaceModifiedSolid *_underlying,
                                                                                 Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void FaceModifiedSolid_GetStatus_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeProcessState _result = _underlying->GetStatus();

    this->_result = _result;

    ExitParallelRegion();
}

void FaceModifiedSolid_GetStatus_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeProcessState _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void FaceModifiedSolid_GetStatus_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
FaceModifiedSolid_SetStatus_AsyncWorker::FaceModifiedSolid_SetStatus_AsyncWorker(MbFaceModifiedSolid *_underlying,
                                                                                 Napi::Promise::Deferred const &d,
                                                                                 MbeProcessState l)
    : _underlying(_underlying), PromiseWorker(d), l(l){};

void FaceModifiedSolid_SetStatus_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetStatus(l);

    ExitParallelRegion();
}

void FaceModifiedSolid_SetStatus_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void FaceModifiedSolid_SetStatus_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
FaceModifiedSolid_CreateShell_AsyncWorker::FaceModifiedSolid_CreateShell_AsyncWorker(MbFaceModifiedSolid *_underlying,
                                                                                     Napi::Promise::Deferred const &d,
                                                                                     MbFaceShell *shell,
                                                                                     MbeCopyMode sameShell)
    : _underlying(_underlying), PromiseWorker(d), shell(shell), sameShell(sameShell){};

void FaceModifiedSolid_CreateShell_AsyncWorker::Execute()
{
    EnterParallelRegion();

    RPArray<MbSpaceItem> *items = new RPArray<MbSpaceItem>;

    bool success = _underlying->CreateShell(shell, sameShell, items);

    this->success = success;
    this->items = items;

    ExitParallelRegion();
}

void FaceModifiedSolid_CreateShell_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void FaceModifiedSolid_CreateShell_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                       Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
FaceModifiedSolid_GetMainName_AsyncWorker::FaceModifiedSolid_GetMainName_AsyncWorker(MbFaceModifiedSolid *_underlying,
                                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void FaceModifiedSolid_GetMainName_AsyncWorker::Execute()
{
    EnterParallelRegion();

    SimpleName _result = _underlying->GetMainName();

    this->_result = _result;

    ExitParallelRegion();
}

void FaceModifiedSolid_GetMainName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    SimpleName _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void FaceModifiedSolid_GetMainName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                       Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
FaceModifiedSolid_GetUseCount_AsyncWorker::FaceModifiedSolid_GetUseCount_AsyncWorker(MbFaceModifiedSolid *_underlying,
                                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void FaceModifiedSolid_GetUseCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    refcount_t _result = _underlying->GetUseCount();

    this->_result = _result;

    ExitParallelRegion();
}

void FaceModifiedSolid_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    refcount_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void FaceModifiedSolid_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                       Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
FaceModifiedSolid_AddRef_AsyncWorker::FaceModifiedSolid_AddRef_AsyncWorker(MbFaceModifiedSolid *_underlying,
                                                                           Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void FaceModifiedSolid_AddRef_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddRef();

    ExitParallelRegion();
}

void FaceModifiedSolid_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void FaceModifiedSolid_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
