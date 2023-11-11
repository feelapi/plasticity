// This is a generated file, modify: generate/templates/ModifiedNurbsItem.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/ModifiedNurbsItem.h"

#include "tool_mutex.h"

Napi::Object ModifiedNurbsItem::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func =
        DefineClass(env, "ModifiedNurbsItem",
                    {
                        InstanceMethod<&ModifiedNurbsItem::IsA>("IsA"),
                        InstanceMethod<&ModifiedNurbsItem::IsA_async>("IsA_async"),
                        InstanceMethod<&ModifiedNurbsItem::Type>("Type"),
                        InstanceMethod<&ModifiedNurbsItem::Type_async>("Type_async"),
                        InstanceMethod<&ModifiedNurbsItem::GetBasisPoints>("GetBasisPoints"),
                        InstanceMethod<&ModifiedNurbsItem::GetBasisPoints_async>("GetBasisPoints_async"),
                        InstanceMethod<&ModifiedNurbsItem::SetBasisPoints>("SetBasisPoints"),
                        InstanceMethod<&ModifiedNurbsItem::SetBasisPoints_async>("SetBasisPoints_async"),
                        InstanceMethod<&ModifiedNurbsItem::GetBasisItems>("GetBasisItems"),
                        InstanceMethod<&ModifiedNurbsItem::GetBasisItems_async>("GetBasisItems_async"),
                        InstanceMethod<&ModifiedNurbsItem::GetCreatorsCount>("GetCreatorsCount"),
                        InstanceMethod<&ModifiedNurbsItem::GetCreatorsCount_async>("GetCreatorsCount_async"),
                        InstanceMethod<&ModifiedNurbsItem::GetYourNameMaker>("GetYourNameMaker"),
                        InstanceMethod<&ModifiedNurbsItem::GetYourNameMaker_async>("GetYourNameMaker_async"),
                        InstanceMethod<&ModifiedNurbsItem::GetStatus>("GetStatus"),
                        InstanceMethod<&ModifiedNurbsItem::GetStatus_async>("GetStatus_async"),
                        InstanceMethod<&ModifiedNurbsItem::SetStatus>("SetStatus"),
                        InstanceMethod<&ModifiedNurbsItem::SetStatus_async>("SetStatus_async"),
                        InstanceMethod<&ModifiedNurbsItem::CreateShell>("CreateShell"),
                        InstanceMethod<&ModifiedNurbsItem::CreateShell_async>("CreateShell_async"),
                        InstanceMethod<&ModifiedNurbsItem::GetMainName>("GetMainName"),
                        InstanceMethod<&ModifiedNurbsItem::GetMainName_async>("GetMainName_async"),
                        InstanceMethod<&ModifiedNurbsItem::GetUseCount>("GetUseCount"),
                        InstanceMethod<&ModifiedNurbsItem::GetUseCount_async>("GetUseCount_async"),
                        InstanceMethod<&ModifiedNurbsItem::AddRef>("AddRef"),
                        InstanceMethod<&ModifiedNurbsItem::AddRef_async>("AddRef_async"),
                        InstanceMethod<&ModifiedNurbsItem::Id>("Id"),

                    });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("ModifiedNurbsItem", func);

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

ModifiedNurbsItem::ModifiedNurbsItem(const Napi::CallbackInfo &info) : Napi::ObjectWrap<ModifiedNurbsItem>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    Napi::Error::New(env, "ModifiedNurbsItem cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object ModifiedNurbsItem::NewInstance(Napi::Env env, MbModifiedNurbsItem *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("ModifiedNurbsItem");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    ModifiedNurbsItem *unwrapped = ModifiedNurbsItem::Unwrap(inst);
    underlying->AddRef();
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function ModifiedNurbsItem::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("ModifiedNurbsItem");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value ModifiedNurbsItem::IsA(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeCreatorType _result = _underlying->IsA(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ModifiedNurbsItem::IsA_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ModifiedNurbsItem_IsA_AsyncWorker *asyncWorker = new ModifiedNurbsItem_IsA_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ModifiedNurbsItem::Type(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeCreatorType _result = _underlying->Type(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ModifiedNurbsItem::Type_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ModifiedNurbsItem_Type_AsyncWorker *asyncWorker = new ModifiedNurbsItem_Type_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ModifiedNurbsItem::GetBasisPoints(const Napi::CallbackInfo &info)
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

Napi::Value ModifiedNurbsItem::GetBasisPoints_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ModifiedNurbsItem_GetBasisPoints_AsyncWorker *asyncWorker =
        new ModifiedNurbsItem_GetBasisPoints_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ModifiedNurbsItem::SetBasisPoints(const Napi::CallbackInfo &info)
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

Napi::Value ModifiedNurbsItem::SetBasisPoints_async(const Napi::CallbackInfo &info)
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

    ModifiedNurbsItem_SetBasisPoints_AsyncWorker *asyncWorker =
        new ModifiedNurbsItem_SetBasisPoints_AsyncWorker(_underlying, deferred,

                                                         cd);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ModifiedNurbsItem::GetBasisItems(const Napi::CallbackInfo &info)
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

Napi::Value ModifiedNurbsItem::GetBasisItems_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ModifiedNurbsItem_GetBasisItems_AsyncWorker *asyncWorker =
        new ModifiedNurbsItem_GetBasisItems_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ModifiedNurbsItem::GetCreatorsCount(const Napi::CallbackInfo &info)
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

Napi::Value ModifiedNurbsItem::GetCreatorsCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "CreatorType ct is required."));
        return deferred.Promise();
    }

    const MbeCreatorType ct = static_cast<MbeCreatorType>(info[0].ToNumber().Uint32Value());

    ModifiedNurbsItem_GetCreatorsCount_AsyncWorker *asyncWorker =
        new ModifiedNurbsItem_GetCreatorsCount_AsyncWorker(_underlying, deferred,

                                                           ct);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ModifiedNurbsItem::GetYourNameMaker(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbSNameMaker &_result = _underlying->GetYourNameMaker(

    );

    Napi::Value _to;

    _to = SNameMaker::NewInstance(env, (MbSNameMaker *)&(_result));

    return _to;
}

Napi::Value ModifiedNurbsItem::GetYourNameMaker_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ModifiedNurbsItem_GetYourNameMaker_AsyncWorker *asyncWorker =
        new ModifiedNurbsItem_GetYourNameMaker_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ModifiedNurbsItem::GetStatus(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeProcessState _result = _underlying->GetStatus(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ModifiedNurbsItem::GetStatus_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ModifiedNurbsItem_GetStatus_AsyncWorker *asyncWorker =
        new ModifiedNurbsItem_GetStatus_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ModifiedNurbsItem::SetStatus(const Napi::CallbackInfo &info)
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

Napi::Value ModifiedNurbsItem::SetStatus_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "ProcessState l is required."));
        return deferred.Promise();
    }

    const MbeProcessState l = static_cast<MbeProcessState>(info[0].ToNumber().Uint32Value());

    ModifiedNurbsItem_SetStatus_AsyncWorker *asyncWorker =
        new ModifiedNurbsItem_SetStatus_AsyncWorker(_underlying, deferred,

                                                    l);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ModifiedNurbsItem::CreateShell(const Napi::CallbackInfo &info)
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

Napi::Value ModifiedNurbsItem::CreateShell_async(const Napi::CallbackInfo &info)
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

    ModifiedNurbsItem_CreateShell_AsyncWorker *asyncWorker =
        new ModifiedNurbsItem_CreateShell_AsyncWorker(_underlying, deferred,

                                                      shell,

                                                      sameShell);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ModifiedNurbsItem::GetMainName(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    SimpleName _result = _underlying->GetMainName(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ModifiedNurbsItem::GetMainName_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ModifiedNurbsItem_GetMainName_AsyncWorker *asyncWorker =
        new ModifiedNurbsItem_GetMainName_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ModifiedNurbsItem::GetUseCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    refcount_t _result = _underlying->GetUseCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value ModifiedNurbsItem::GetUseCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ModifiedNurbsItem_GetUseCount_AsyncWorker *asyncWorker =
        new ModifiedNurbsItem_GetUseCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ModifiedNurbsItem::AddRef(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->AddRef(

    );

    return env.Undefined();
}

Napi::Value ModifiedNurbsItem::AddRef_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    ModifiedNurbsItem_AddRef_AsyncWorker *asyncWorker = new ModifiedNurbsItem_AddRef_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value ModifiedNurbsItem::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

ModifiedNurbsItem::~ModifiedNurbsItem()
{
    // std::cout << "calling ::DeleteItem on ModifiedNurbsItem for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

ModifiedNurbsItem_IsA_AsyncWorker::ModifiedNurbsItem_IsA_AsyncWorker(MbModifiedNurbsItem *_underlying,
                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ModifiedNurbsItem_IsA_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeCreatorType _result = _underlying->IsA();

    this->_result = _result;

    ExitParallelRegion();
}

void ModifiedNurbsItem_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeCreatorType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ModifiedNurbsItem_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ModifiedNurbsItem_Type_AsyncWorker::ModifiedNurbsItem_Type_AsyncWorker(MbModifiedNurbsItem *_underlying,
                                                                       Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ModifiedNurbsItem_Type_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeCreatorType _result = _underlying->Type();

    this->_result = _result;

    ExitParallelRegion();
}

void ModifiedNurbsItem_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeCreatorType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ModifiedNurbsItem_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ModifiedNurbsItem_GetBasisPoints_AsyncWorker::ModifiedNurbsItem_GetBasisPoints_AsyncWorker(
    MbModifiedNurbsItem *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ModifiedNurbsItem_GetBasisPoints_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbControlData3D *cd = new MbControlData3D;

    _underlying->GetBasisPoints(*cd);

    this->cd = cd;

    ExitParallelRegion();
}

void ModifiedNurbsItem_GetBasisPoints_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ModifiedNurbsItem_GetBasisPoints_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                          Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ModifiedNurbsItem_SetBasisPoints_AsyncWorker::ModifiedNurbsItem_SetBasisPoints_AsyncWorker(
    MbModifiedNurbsItem *_underlying, Napi::Promise::Deferred const &d, const MbControlData3D &cd)
    : _underlying(_underlying), PromiseWorker(d), cd(cd){};

void ModifiedNurbsItem_SetBasisPoints_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetBasisPoints(cd);

    ExitParallelRegion();
}

void ModifiedNurbsItem_SetBasisPoints_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void ModifiedNurbsItem_SetBasisPoints_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                          Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ModifiedNurbsItem_GetBasisItems_AsyncWorker::ModifiedNurbsItem_GetBasisItems_AsyncWorker(
    MbModifiedNurbsItem *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ModifiedNurbsItem_GetBasisItems_AsyncWorker::Execute()
{
    EnterParallelRegion();

    RPArray<MbSpaceItem> *items = new RPArray<MbSpaceItem>;

    _underlying->GetBasisItems(*items);

    this->items = items;

    ExitParallelRegion();
}

void ModifiedNurbsItem_GetBasisItems_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ModifiedNurbsItem_GetBasisItems_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                         Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ModifiedNurbsItem_GetCreatorsCount_AsyncWorker::ModifiedNurbsItem_GetCreatorsCount_AsyncWorker(
    MbModifiedNurbsItem *_underlying, Napi::Promise::Deferred const &d, MbeCreatorType ct)
    : _underlying(_underlying), PromiseWorker(d), ct(ct){};

void ModifiedNurbsItem_GetCreatorsCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    size_t _result = _underlying->GetCreatorsCount(ct);

    this->_result = _result;

    ExitParallelRegion();
}

void ModifiedNurbsItem_GetCreatorsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    size_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ModifiedNurbsItem_GetCreatorsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                            Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ModifiedNurbsItem_GetYourNameMaker_AsyncWorker::ModifiedNurbsItem_GetYourNameMaker_AsyncWorker(
    MbModifiedNurbsItem *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ModifiedNurbsItem_GetYourNameMaker_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbSNameMaker &_result = _underlying->GetYourNameMaker();

    this->_result = (MbSNameMaker *)&(_result);

    ExitParallelRegion();
}

void ModifiedNurbsItem_GetYourNameMaker_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbSNameMaker *_result = this->_result;
    _to = SNameMaker::NewInstance(env, (MbSNameMaker *)&(_result));

    deferred.Resolve(_to);
}

void ModifiedNurbsItem_GetYourNameMaker_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                            Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ModifiedNurbsItem_GetStatus_AsyncWorker::ModifiedNurbsItem_GetStatus_AsyncWorker(MbModifiedNurbsItem *_underlying,
                                                                                 Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ModifiedNurbsItem_GetStatus_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeProcessState _result = _underlying->GetStatus();

    this->_result = _result;

    ExitParallelRegion();
}

void ModifiedNurbsItem_GetStatus_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeProcessState _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ModifiedNurbsItem_GetStatus_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ModifiedNurbsItem_SetStatus_AsyncWorker::ModifiedNurbsItem_SetStatus_AsyncWorker(MbModifiedNurbsItem *_underlying,
                                                                                 Napi::Promise::Deferred const &d,
                                                                                 MbeProcessState l)
    : _underlying(_underlying), PromiseWorker(d), l(l){};

void ModifiedNurbsItem_SetStatus_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetStatus(l);

    ExitParallelRegion();
}

void ModifiedNurbsItem_SetStatus_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void ModifiedNurbsItem_SetStatus_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ModifiedNurbsItem_CreateShell_AsyncWorker::ModifiedNurbsItem_CreateShell_AsyncWorker(MbModifiedNurbsItem *_underlying,
                                                                                     Napi::Promise::Deferred const &d,
                                                                                     MbFaceShell *shell,
                                                                                     MbeCopyMode sameShell)
    : _underlying(_underlying), PromiseWorker(d), shell(shell), sameShell(sameShell){};

void ModifiedNurbsItem_CreateShell_AsyncWorker::Execute()
{
    EnterParallelRegion();

    RPArray<MbSpaceItem> *items = new RPArray<MbSpaceItem>;

    bool success = _underlying->CreateShell(shell, sameShell, items);

    this->success = success;
    this->items = items;

    ExitParallelRegion();
}

void ModifiedNurbsItem_CreateShell_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void ModifiedNurbsItem_CreateShell_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                       Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ModifiedNurbsItem_GetMainName_AsyncWorker::ModifiedNurbsItem_GetMainName_AsyncWorker(MbModifiedNurbsItem *_underlying,
                                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ModifiedNurbsItem_GetMainName_AsyncWorker::Execute()
{
    EnterParallelRegion();

    SimpleName _result = _underlying->GetMainName();

    this->_result = _result;

    ExitParallelRegion();
}

void ModifiedNurbsItem_GetMainName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    SimpleName _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ModifiedNurbsItem_GetMainName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                       Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ModifiedNurbsItem_GetUseCount_AsyncWorker::ModifiedNurbsItem_GetUseCount_AsyncWorker(MbModifiedNurbsItem *_underlying,
                                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ModifiedNurbsItem_GetUseCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    refcount_t _result = _underlying->GetUseCount();

    this->_result = _result;

    ExitParallelRegion();
}

void ModifiedNurbsItem_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    refcount_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void ModifiedNurbsItem_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                       Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ModifiedNurbsItem_AddRef_AsyncWorker::ModifiedNurbsItem_AddRef_AsyncWorker(MbModifiedNurbsItem *_underlying,
                                                                           Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void ModifiedNurbsItem_AddRef_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddRef();

    ExitParallelRegion();
}

void ModifiedNurbsItem_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void ModifiedNurbsItem_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
