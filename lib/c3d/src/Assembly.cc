// This is a generated file, modify: generate/templates/Assembly.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/Assembly.h"

#include "tool_mutex.h"

Napi::Object Assembly::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func =
        DefineClass(env, "Assembly",
                    {
                        InstanceMethod<&Assembly::GetItems>("GetItems"),
                        InstanceMethod<&Assembly::GetItems_async>("GetItems_async"),
                        InstanceMethod<&Assembly::CreateMesh>("CreateMesh"),
                        InstanceMethod<&Assembly::CreateMesh_async>("CreateMesh_async"),
                        InstanceMethod<&Assembly::CalculateMesh>("CalculateMesh"),
                        InstanceMethod<&Assembly::CalculateMesh_async>("CalculateMesh_async"),
                        InstanceMethod<&Assembly::GetItemName>("GetItemName"),
                        InstanceMethod<&Assembly::GetItemName_async>("GetItemName_async"),
                        InstanceMethod<&Assembly::SetItemName>("SetItemName"),
                        InstanceMethod<&Assembly::SetItemName_async>("SetItemName_async"),
                        InstanceMethod<&Assembly::RebuildItem>("RebuildItem"),
                        InstanceMethod<&Assembly::RebuildItem_async>("RebuildItem_async"),
                        InstanceMethod<&Assembly::GetItemByPath>("GetItemByPath"),
                        InstanceMethod<&Assembly::GetItemByPath_async>("GetItemByPath_async"),
                        InstanceMethod<&Assembly::IsA>("IsA"),
                        InstanceMethod<&Assembly::IsA_async>("IsA_async"),
                        InstanceMethod<&Assembly::Type>("Type"),
                        InstanceMethod<&Assembly::Type_async>("Type_async"),
                        InstanceMethod<&Assembly::Family>("Family"),
                        InstanceMethod<&Assembly::Family_async>("Family_async"),
                        InstanceMethod<&Assembly::Transform>("Transform"),
                        InstanceMethod<&Assembly::Transform_async>("Transform_async"),
                        InstanceMethod<&Assembly::Move>("Move"),
                        InstanceMethod<&Assembly::Move_async>("Move_async"),
                        InstanceMethod<&Assembly::Rotate>("Rotate"),
                        InstanceMethod<&Assembly::Rotate_async>("Rotate_async"),
                        InstanceMethod<&Assembly::Refresh>("Refresh"),
                        InstanceMethod<&Assembly::Refresh_async>("Refresh_async"),
                        InstanceMethod<&Assembly::Duplicate>("Duplicate"),
                        InstanceMethod<&Assembly::Duplicate_async>("Duplicate_async"),
                        InstanceMethod<&Assembly::AddYourGabaritTo>("AddYourGabaritTo"),
                        InstanceMethod<&Assembly::AddYourGabaritTo_async>("AddYourGabaritTo_async"),
                        InstanceMethod<&Assembly::GetUseCount>("GetUseCount"),
                        InstanceMethod<&Assembly::GetUseCount_async>("GetUseCount_async"),
                        InstanceMethod<&Assembly::AddRef>("AddRef"),
                        InstanceMethod<&Assembly::AddRef_async>("AddRef_async"),
                        InstanceMethod<&Assembly::SetStyle>("SetStyle"),
                        InstanceMethod<&Assembly::SetStyle_async>("SetStyle_async"),
                        InstanceMethod<&Assembly::GetStyle>("GetStyle"),
                        InstanceMethod<&Assembly::GetStyle_async>("GetStyle_async"),
                        InstanceMethod<&Assembly::SetColor>("SetColor"),
                        InstanceMethod<&Assembly::SetColor_async>("SetColor_async"),
                        InstanceMethod<&Assembly::GetColor>("GetColor"),
                        InstanceMethod<&Assembly::GetColor_async>("GetColor_async"),
                        InstanceMethod<&Assembly::AttributesConvert>("AttributesConvert"),
                        InstanceMethod<&Assembly::AttributesConvert_async>("AttributesConvert_async"),
                        InstanceMethod<&Assembly::GetCreatorsCount>("GetCreatorsCount"),
                        InstanceMethod<&Assembly::GetCreatorsCount_async>("GetCreatorsCount_async"),
                        InstanceMethod<&Assembly::GetCreator>("GetCreator"),
                        InstanceMethod<&Assembly::GetCreator_async>("GetCreator_async"),
                        InstanceMethod<&Assembly::SetCreator>("SetCreator"),
                        InstanceMethod<&Assembly::SetCreator_async>("SetCreator_async"),
                        InstanceMethod<&Assembly::DetachCreator>("DetachCreator"),
                        InstanceMethod<&Assembly::DetachCreator_async>("DetachCreator_async"),
                        InstanceMethod<&Assembly::AddCreator>("AddCreator"),
                        InstanceMethod<&Assembly::AddCreator_async>("AddCreator_async"),
                        InstanceMethod<&Assembly::GetCreators>("GetCreators"),
                        InstanceMethod<&Assembly::GetCreators_async>("GetCreators_async"),
                        InstanceMethod<&Assembly::DeleteCreator>("DeleteCreator"),
                        InstanceMethod<&Assembly::DeleteCreator_async>("DeleteCreator_async"),
                        InstanceMethod<&Assembly::GetActiveCreatorsCount>("GetActiveCreatorsCount"),
                        InstanceMethod<&Assembly::GetActiveCreatorsCount_async>("GetActiveCreatorsCount_async"),
                        InstanceMethod<&Assembly::Id>("Id"),

                    });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Assembly", func);

    Napi::Object global = env.Global();
    Napi::Object Object = global.Get("Object").ToObject();
    Napi::Function setPrototypeOf = Napi::Function(env, Object.Get("setPrototypeOf"));
    Napi::Value prototype = func.Get("prototype");

    Napi::Function superFunc = Item::GetConstructor(env);
    Napi::FunctionReference *superConstructor = new Napi::FunctionReference();
    *superConstructor = Napi::Persistent(superFunc);

    Napi::Value superPrototype = superFunc.Get("prototype");
    setPrototypeOf.Call({prototype, superPrototype});
    setPrototypeOf.Call({func, superFunc});

    return exports;
}

Assembly::Assembly(const Napi::CallbackInfo &info) : Napi::ObjectWrap<Assembly>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    Napi::Error::New(env, "Assembly cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object Assembly::NewInstance(Napi::Env env, MbAssembly *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Assembly");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Assembly *unwrapped = Assembly::Unwrap(inst);
    underlying->AddRef();
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Assembly::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Assembly");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value Assembly::GetItems(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    RPArray<MbItem> *items = new RPArray<MbItem>;

    _underlying->GetItems(*items

    );

    Napi::Value _to;

    Napi::Array arr_items = Napi::Array::New(env);
    for (size_t i = 0; i < items->Count(); i++)
    {
        arr_items[i] = Item::NewInstance(env,

                                         (*items)[i]

        );
    }
    _to = arr_items;

    return _to;
}

Napi::Value Assembly::GetItems_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Assembly_GetItems_AsyncWorker *asyncWorker = new Assembly_GetItems_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Assembly::CreateMesh(const Napi::CallbackInfo &info)
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

    MbRegDuplicate *iReg = NULL;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        RegDuplicate *iReg_ = RegDuplicate::Unwrap(info[2].ToObject());
        iReg = iReg_->_underlying;
    }

    MbItem *_result = _underlying->CreateMesh(stepData, note, info.Length() == 2 || info[2].IsNull() ? NULL : iReg

    );

    Napi::Value _to;

    if (_result != NULL)
    {
        _to = Item::NewInstance(env, (MbItem *)_result);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value Assembly::CreateMesh_async(const Napi::CallbackInfo &info)
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

    MbRegDuplicate *iReg = NULL;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        RegDuplicate *iReg_ = RegDuplicate::Unwrap(info[2].ToObject());
        iReg = iReg_->_underlying;
    }

    Assembly_CreateMesh_AsyncWorker *asyncWorker = new Assembly_CreateMesh_AsyncWorker(_underlying, deferred,

                                                                                       stepData,

                                                                                       note,

                                                                                       iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Assembly::CalculateMesh(const Napi::CallbackInfo &info)
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

Napi::Value Assembly::CalculateMesh_async(const Napi::CallbackInfo &info)
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

    Assembly_CalculateMesh_AsyncWorker *asyncWorker = new Assembly_CalculateMesh_AsyncWorker(_underlying, deferred,

                                                                                             stepData,

                                                                                             note);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Assembly::GetItemName(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    SimpleName _result = _underlying->GetItemName(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Assembly::GetItemName_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Assembly_GetItemName_AsyncWorker *asyncWorker = new Assembly_GetItemName_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Assembly::SetItemName(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "SimpleName name is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    int name = info[0].ToNumber().Int64Value();

    _underlying->SetItemName(name

    );

    return env.Undefined();
}

Napi::Value Assembly::SetItemName_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "SimpleName name is required."));
        return deferred.Promise();
    }

    int name = info[0].ToNumber().Int64Value();

    Assembly_SetItemName_AsyncWorker *asyncWorker = new Assembly_SetItemName_AsyncWorker(_underlying, deferred,

                                                                                         name);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Assembly::RebuildItem(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "CopyMode sameShell is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    RPArray<MbSpaceItem> *items = new RPArray<MbSpaceItem>;

    const MbeCopyMode sameShell = static_cast<MbeCopyMode>(info[0].ToNumber().Uint32Value());

    ProgressIndicator *progInd = NULL;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        ProgressIndicator *progInd_ = ProgressIndicator::Unwrap(info[1].ToObject());
        progInd = progInd_;
    }

    bool _result = _underlying->RebuildItem(sameShell, items, info.Length() == 1 || info[1].IsNull() ? NULL : progInd

    );

    if (_result)
    {

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
    else
    {
        std::ostringstream msg;
        msg << "Operation RebuildItem failed";
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value Assembly::RebuildItem_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "CopyMode sameShell is required."));
        return deferred.Promise();
    }

    const MbeCopyMode sameShell = static_cast<MbeCopyMode>(info[0].ToNumber().Uint32Value());

    ProgressIndicator *progInd = NULL;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        ProgressIndicator *progInd_ = ProgressIndicator::Unwrap(info[1].ToObject());
        progInd = progInd_;
    }

    Assembly_RebuildItem_AsyncWorker *asyncWorker = new Assembly_RebuildItem_AsyncWorker(_underlying, deferred,

                                                                                         sameShell,

                                                                                         progInd);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Assembly::GetItemByPath(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Path::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Path path is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        Napi::Error::New(env, "number ind is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 || !((info[2].IsObject() && info[2].ToObject().InstanceOf(Matrix3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Matrix3D from is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'path'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Path *path_ = Path::Unwrap(info[0].ToObject());

    const MbPath &path = *path_->_underlying;

    size_t ind = info[1].ToNumber().Int64Value();

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'from'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Matrix3D *from_ = Matrix3D::Unwrap(info[2].ToObject());

    MbMatrix3D &from = *from_->_underlying;

    size_t currInd = info[3].ToNumber().Int64Value();

    const MbItem *_result =
        _underlying->GetItemByPath(path, ind, from, info.Length() == 3 || info[3].IsNull() ? 0 : currInd

        );

    Napi::Value _to;

    if (_result != NULL)
    {
        _to = Item::NewInstance(env, (MbItem *)_result);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value Assembly::GetItemByPath_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Path::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Path path is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number ind is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 || !((info[2].IsObject() && info[2].ToObject().InstanceOf(Matrix3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Matrix3D from is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'path'"));
        return deferred.Promise();
    }
    const class Path *path_ = Path::Unwrap(info[0].ToObject());

    const MbPath &path = *path_->_underlying;

    size_t ind = info[1].ToNumber().Int64Value();

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'from'"));
        return deferred.Promise();
    }
    const class Matrix3D *from_ = Matrix3D::Unwrap(info[2].ToObject());

    MbMatrix3D &from = *from_->_underlying;

    size_t currInd = info[3].ToNumber().Int64Value();

    Assembly_GetItemByPath_AsyncWorker *asyncWorker = new Assembly_GetItemByPath_AsyncWorker(_underlying, deferred,

                                                                                             path,

                                                                                             ind,

                                                                                             from,

                                                                                             currInd);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Assembly::IsA(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeSpaceType _result = _underlying->IsA(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Assembly::IsA_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Assembly_IsA_AsyncWorker *asyncWorker = new Assembly_IsA_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Assembly::Type(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeSpaceType _result = _underlying->Type(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Assembly::Type_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Assembly_Type_AsyncWorker *asyncWorker = new Assembly_Type_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Assembly::Family(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeSpaceType _result = _underlying->Family(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Assembly::Family_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Assembly_Family_AsyncWorker *asyncWorker = new Assembly_Family_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Assembly::Transform(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Matrix3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Matrix3D mat is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'mat'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Matrix3D *mat_ = Matrix3D::Unwrap(info[0].ToObject());

    const MbMatrix3D &mat = *mat_->_underlying;

    MbRegTransform *iReg = NULL;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
        iReg = iReg_->_underlying;
    }

    _underlying->Transform(mat, info.Length() == 1 || info[1].IsNull() ? NULL : iReg

    );

    return env.Undefined();
}

Napi::Value Assembly::Transform_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Matrix3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Matrix3D mat is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'mat'"));
        return deferred.Promise();
    }
    const class Matrix3D *mat_ = Matrix3D::Unwrap(info[0].ToObject());

    const MbMatrix3D &mat = *mat_->_underlying;

    MbRegTransform *iReg = NULL;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
        iReg = iReg_->_underlying;
    }

    Assembly_Transform_AsyncWorker *asyncWorker = new Assembly_Transform_AsyncWorker(_underlying, deferred,

                                                                                     mat,

                                                                                     iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Assembly::Move(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Vector3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Vector3D v is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'v'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Vector3D *v_ = Vector3D::Unwrap(info[0].ToObject());

    const MbVector3D &v = *v_->_underlying;

    MbRegTransform *iReg = NULL;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
        iReg = iReg_->_underlying;
    }

    _underlying->Move(v, info.Length() == 1 || info[1].IsNull() ? NULL : iReg

    );

    return env.Undefined();
}

Napi::Value Assembly::Move_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Vector3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Vector3D v is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'v'"));
        return deferred.Promise();
    }
    const class Vector3D *v_ = Vector3D::Unwrap(info[0].ToObject());

    const MbVector3D &v = *v_->_underlying;

    MbRegTransform *iReg = NULL;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
        iReg = iReg_->_underlying;
    }

    Assembly_Move_AsyncWorker *asyncWorker = new Assembly_Move_AsyncWorker(_underlying, deferred,

                                                                           v,

                                                                           iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Assembly::Rotate(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Axis3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Axis3D axis is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        Napi::Error::New(env, "number angle is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'axis'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Axis3D *axis_ = Axis3D::Unwrap(info[0].ToObject());

    const MbAxis3D &axis = *axis_->_underlying;

    double angle = info[1].ToNumber().DoubleValue();

    MbRegTransform *iReg = NULL;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[2].ToObject());
        iReg = iReg_->_underlying;
    }

    _underlying->Rotate(axis, angle, info.Length() == 2 || info[2].IsNull() ? NULL : iReg

    );

    return env.Undefined();
}

Napi::Value Assembly::Rotate_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Axis3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Axis3D axis is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number angle is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'axis'"));
        return deferred.Promise();
    }
    const class Axis3D *axis_ = Axis3D::Unwrap(info[0].ToObject());

    const MbAxis3D &axis = *axis_->_underlying;

    double angle = info[1].ToNumber().DoubleValue();

    MbRegTransform *iReg = NULL;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[2].ToObject());
        iReg = iReg_->_underlying;
    }

    Assembly_Rotate_AsyncWorker *asyncWorker = new Assembly_Rotate_AsyncWorker(_underlying, deferred,

                                                                               axis,

                                                                               angle,

                                                                               iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Assembly::Refresh(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->Refresh(

    );

    return env.Undefined();
}

Napi::Value Assembly::Refresh_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Assembly_Refresh_AsyncWorker *asyncWorker = new Assembly_Refresh_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Assembly::Duplicate(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbRegDuplicate *iReg = NULL;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        RegDuplicate *iReg_ = RegDuplicate::Unwrap(info[0].ToObject());
        iReg = iReg_->_underlying;
    }

    MbSpaceItem &_result = _underlying->Duplicate(info.Length() == 0 || info[0].IsNull() ? NULL : iReg

    );

    Napi::Value _to;

    _to = SpaceItem::NewInstance(env, (MbSpaceItem *)&(_result));

    return _to;
}

Napi::Value Assembly::Duplicate_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    MbRegDuplicate *iReg = NULL;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        RegDuplicate *iReg_ = RegDuplicate::Unwrap(info[0].ToObject());
        iReg = iReg_->_underlying;
    }

    Assembly_Duplicate_AsyncWorker *asyncWorker = new Assembly_Duplicate_AsyncWorker(_underlying, deferred,

                                                                                     iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Assembly::AddYourGabaritTo(const Napi::CallbackInfo &info)
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

Napi::Value Assembly::AddYourGabaritTo_async(const Napi::CallbackInfo &info)
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

    Assembly_AddYourGabaritTo_AsyncWorker *asyncWorker =
        new Assembly_AddYourGabaritTo_AsyncWorker(_underlying, deferred,

                                                  cube);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Assembly::GetUseCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    refcount_t _result = _underlying->GetUseCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Assembly::GetUseCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Assembly_GetUseCount_AsyncWorker *asyncWorker = new Assembly_GetUseCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Assembly::AddRef(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->AddRef(

    );

    return env.Undefined();
}

Napi::Value Assembly::AddRef_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Assembly_AddRef_AsyncWorker *asyncWorker = new Assembly_AddRef_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Assembly::SetStyle(const Napi::CallbackInfo &info)
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

Napi::Value Assembly::SetStyle_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "int s is required."));
        return deferred.Promise();
    }

    int s = info[0].ToNumber().Int64Value();

    Assembly_SetStyle_AsyncWorker *asyncWorker = new Assembly_SetStyle_AsyncWorker(_underlying, deferred,

                                                                                   s);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Assembly::GetStyle(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    int _result = _underlying->GetStyle(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Assembly::GetStyle_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Assembly_GetStyle_AsyncWorker *asyncWorker = new Assembly_GetStyle_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Assembly::SetColor(const Napi::CallbackInfo &info)
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

Napi::Value Assembly::SetColor_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "uint32 c is required."));
        return deferred.Promise();
    }

    int c = info[0].ToNumber().Int64Value();

    Assembly_SetColor_AsyncWorker *asyncWorker = new Assembly_SetColor_AsyncWorker(_underlying, deferred,

                                                                                   c);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Assembly::GetColor(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    uint32 _result = _underlying->GetColor(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Assembly::GetColor_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Assembly_GetColor_AsyncWorker *asyncWorker = new Assembly_GetColor_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Assembly::AttributesConvert(const Napi::CallbackInfo &info)
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

Napi::Value Assembly::AttributesConvert_async(const Napi::CallbackInfo &info)
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

    Assembly_AttributesConvert_AsyncWorker *asyncWorker =
        new Assembly_AttributesConvert_AsyncWorker(_underlying, deferred,

                                                   other);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Assembly::GetCreatorsCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    size_t _result = _underlying->GetCreatorsCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Assembly::GetCreatorsCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Assembly_GetCreatorsCount_AsyncWorker *asyncWorker =
        new Assembly_GetCreatorsCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Assembly::GetCreator(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number ind is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    size_t ind = info[0].ToNumber().Int64Value();

    const MbCreator *_result = _underlying->GetCreator(ind

    );

    Napi::Value _to;

    if (_result != NULL)
    {
        _to = Creator::NewInstance(env, (MbCreator *)_result);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value Assembly::GetCreator_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number ind is required."));
        return deferred.Promise();
    }

    size_t ind = info[0].ToNumber().Int64Value();

    Assembly_GetCreator_AsyncWorker *asyncWorker = new Assembly_GetCreator_AsyncWorker(_underlying, deferred,

                                                                                       ind);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Assembly::SetCreator(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number ind is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    size_t ind = info[0].ToNumber().Int64Value();

    MbCreator *_result = _underlying->SetCreator(ind

    );

    Napi::Value _to;

    if (_result != NULL)
    {
        _to = Creator::NewInstance(env, (MbCreator *)_result);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value Assembly::SetCreator_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number ind is required."));
        return deferred.Promise();
    }

    size_t ind = info[0].ToNumber().Int64Value();

    Assembly_SetCreator_AsyncWorker *asyncWorker = new Assembly_SetCreator_AsyncWorker(_underlying, deferred,

                                                                                       ind);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Assembly::DetachCreator(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number ind is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    size_t ind = info[0].ToNumber().Int64Value();

    MbCreator *_result = _underlying->DetachCreator(ind

    );

    Napi::Value _to;

    if (_result != NULL)
    {
        _to = Creator::NewInstance(env, (MbCreator *)_result);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value Assembly::DetachCreator_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number ind is required."));
        return deferred.Promise();
    }

    size_t ind = info[0].ToNumber().Int64Value();

    Assembly_DetachCreator_AsyncWorker *asyncWorker = new Assembly_DetachCreator_AsyncWorker(_underlying, deferred,

                                                                                             ind);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Assembly::AddCreator(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Creator::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Creator creator is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'creator'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Creator *creator_ = Creator::Unwrap(info[0].ToObject());

    const MbCreator *creator = creator_->_underlying;

    bool addSame = info[1].ToBoolean();

    bool _result = _underlying->AddCreator(creator, info.Length() == 1 || info[1].IsNull() ? false : addSame

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value Assembly::AddCreator_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Creator::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Creator creator is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'creator'"));
        return deferred.Promise();
    }
    const class Creator *creator_ = Creator::Unwrap(info[0].ToObject());

    const MbCreator *creator = creator_->_underlying;

    bool addSame = info[1].ToBoolean();

    Assembly_AddCreator_AsyncWorker *asyncWorker = new Assembly_AddCreator_AsyncWorker(_underlying, deferred,

                                                                                       creator,

                                                                                       addSame);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Assembly::GetCreators(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    RPArray<MbCreator> *creators = new RPArray<MbCreator>;

    bool _result = _underlying->GetCreators(*creators

    );

    if (_result)
    {

        Napi::Value _to;

        Napi::Array arr_creators = Napi::Array::New(env);
        for (size_t i = 0; i < creators->Count(); i++)
        {
            arr_creators[i] = Creator::NewInstance(env,

                                                   (*creators)[i]

            );
        }
        _to = arr_creators;

        return _to;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation GetCreators failed";
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value Assembly::GetCreators_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Assembly_GetCreators_AsyncWorker *asyncWorker = new Assembly_GetCreators_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Assembly::DeleteCreator(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number ind is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    size_t ind = info[0].ToNumber().Int64Value();

    bool _result = _underlying->DeleteCreator(ind

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value Assembly::DeleteCreator_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number ind is required."));
        return deferred.Promise();
    }

    size_t ind = info[0].ToNumber().Int64Value();

    Assembly_DeleteCreator_AsyncWorker *asyncWorker = new Assembly_DeleteCreator_AsyncWorker(_underlying, deferred,

                                                                                             ind);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Assembly::GetActiveCreatorsCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    size_t _result = _underlying->GetActiveCreatorsCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Assembly::GetActiveCreatorsCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Assembly_GetActiveCreatorsCount_AsyncWorker *asyncWorker =
        new Assembly_GetActiveCreatorsCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value Assembly::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

Assembly::~Assembly()
{
    // std::cout << "calling ::DeleteItem on Assembly for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

Assembly_GetItems_AsyncWorker::Assembly_GetItems_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Assembly_GetItems_AsyncWorker::Execute()
{
    EnterParallelRegion();

    RPArray<MbItem> *items = new RPArray<MbItem>;

    _underlying->GetItems(*items);

    this->items = items;

    ExitParallelRegion();
}

void Assembly_GetItems_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    RPArray<MbItem> *items = this->items;
    Napi::Array arr_items = Napi::Array::New(env);
    for (size_t i = 0; i < items->Count(); i++)
    {
        arr_items[i] = Item::NewInstance(env,

                                         (*items)[i]

        );
    }
    _to = arr_items;

    deferred.Resolve(_to);
}

void Assembly_GetItems_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Assembly_CreateMesh_AsyncWorker::Assembly_CreateMesh_AsyncWorker(MbAssembly *_underlying,
                                                                 Napi::Promise::Deferred const &d,
                                                                 const MbStepData &stepData, const MbFormNote &note,
                                                                 MbRegDuplicate *iReg)
    : _underlying(_underlying), PromiseWorker(d), stepData(stepData), note(note), iReg(iReg){};

void Assembly_CreateMesh_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbItem *_result = _underlying->CreateMesh(stepData, note, iReg);

    this->_result = _result;

    ExitParallelRegion();
}

void Assembly_CreateMesh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbItem *_result = this->_result;
    if (_result != NULL)
    {
        _to = Item::NewInstance(env, (MbItem *)_result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void Assembly_CreateMesh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Assembly_CalculateMesh_AsyncWorker::Assembly_CalculateMesh_AsyncWorker(MbAssembly *_underlying,
                                                                       Napi::Promise::Deferred const &d,
                                                                       const MbStepData &stepData,
                                                                       const MbFormNote &note)
    : _underlying(_underlying), PromiseWorker(d), stepData(stepData), note(note){};

void Assembly_CalculateMesh_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbMesh *mesh = new MbMesh;

    _underlying->CalculateMesh(stepData, note, *mesh);

    this->mesh = mesh;

    ExitParallelRegion();
}

void Assembly_CalculateMesh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Assembly_CalculateMesh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Assembly_GetItemName_AsyncWorker::Assembly_GetItemName_AsyncWorker(MbAssembly *_underlying,
                                                                   Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Assembly_GetItemName_AsyncWorker::Execute()
{
    EnterParallelRegion();

    SimpleName _result = _underlying->GetItemName();

    this->_result = _result;

    ExitParallelRegion();
}

void Assembly_GetItemName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    SimpleName _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Assembly_GetItemName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Assembly_SetItemName_AsyncWorker::Assembly_SetItemName_AsyncWorker(MbAssembly *_underlying,
                                                                   Napi::Promise::Deferred const &d, SimpleName name)
    : _underlying(_underlying), PromiseWorker(d), name(name){};

void Assembly_SetItemName_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetItemName(name);

    ExitParallelRegion();
}

void Assembly_SetItemName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Assembly_SetItemName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Assembly_RebuildItem_AsyncWorker::Assembly_RebuildItem_AsyncWorker(MbAssembly *_underlying,
                                                                   Napi::Promise::Deferred const &d,
                                                                   MbeCopyMode sameShell, ProgressIndicator *progInd)
    : _underlying(_underlying), PromiseWorker(d), sameShell(sameShell), progInd(progInd){};

void Assembly_RebuildItem_AsyncWorker::Execute()
{
    EnterParallelRegion();

    RPArray<MbSpaceItem> *items = new RPArray<MbSpaceItem>;

    bool _result = _underlying->RebuildItem(sameShell, items, progInd);

    if (_result)
    {

        this->items = items;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation RebuildItem failed";
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void Assembly_RebuildItem_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Assembly_RebuildItem_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Assembly_GetItemByPath_AsyncWorker::Assembly_GetItemByPath_AsyncWorker(MbAssembly *_underlying,
                                                                       Napi::Promise::Deferred const &d,
                                                                       const MbPath &path, size_t ind, MbMatrix3D &from,
                                                                       size_t currInd)
    : _underlying(_underlying), PromiseWorker(d), path(path), ind(ind), from(from), currInd(currInd){};

void Assembly_GetItemByPath_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbItem *_result = _underlying->GetItemByPath(path, ind, from, currInd);

    this->_result = _result;

    ExitParallelRegion();
}

void Assembly_GetItemByPath_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbItem *_result = this->_result;
    if (_result != NULL)
    {
        _to = Item::NewInstance(env, (MbItem *)_result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void Assembly_GetItemByPath_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Assembly_IsA_AsyncWorker::Assembly_IsA_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Assembly_IsA_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeSpaceType _result = _underlying->IsA();

    this->_result = _result;

    ExitParallelRegion();
}

void Assembly_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeSpaceType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Assembly_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Assembly_Type_AsyncWorker::Assembly_Type_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Assembly_Type_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeSpaceType _result = _underlying->Type();

    this->_result = _result;

    ExitParallelRegion();
}

void Assembly_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeSpaceType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Assembly_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Assembly_Family_AsyncWorker::Assembly_Family_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Assembly_Family_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeSpaceType _result = _underlying->Family();

    this->_result = _result;

    ExitParallelRegion();
}

void Assembly_Family_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeSpaceType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Assembly_Family_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Assembly_Transform_AsyncWorker::Assembly_Transform_AsyncWorker(MbAssembly *_underlying,
                                                               Napi::Promise::Deferred const &d, const MbMatrix3D &mat,
                                                               MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), mat(mat), iReg(iReg){};

void Assembly_Transform_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Transform(mat, iReg);

    ExitParallelRegion();
}

void Assembly_Transform_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Assembly_Transform_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Assembly_Move_AsyncWorker::Assembly_Move_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d,
                                                     const MbVector3D &v, MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), v(v), iReg(iReg){};

void Assembly_Move_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Move(v, iReg);

    ExitParallelRegion();
}

void Assembly_Move_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Assembly_Move_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Assembly_Rotate_AsyncWorker::Assembly_Rotate_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d,
                                                         const MbAxis3D &axis, double angle, MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), axis(axis), angle(angle), iReg(iReg){};

void Assembly_Rotate_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Rotate(axis, angle, iReg);

    ExitParallelRegion();
}

void Assembly_Rotate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Assembly_Rotate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Assembly_Refresh_AsyncWorker::Assembly_Refresh_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Assembly_Refresh_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Refresh();

    ExitParallelRegion();
}

void Assembly_Refresh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Assembly_Refresh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Assembly_Duplicate_AsyncWorker::Assembly_Duplicate_AsyncWorker(MbAssembly *_underlying,
                                                               Napi::Promise::Deferred const &d, MbRegDuplicate *iReg)
    : _underlying(_underlying), PromiseWorker(d), iReg(iReg){};

void Assembly_Duplicate_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbSpaceItem &_result = _underlying->Duplicate(iReg);

    this->_result = (MbSpaceItem *)&(_result);

    ExitParallelRegion();
}

void Assembly_Duplicate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbSpaceItem *_result = this->_result;
    _to = SpaceItem::NewInstance(env, (MbSpaceItem *)&(_result));

    deferred.Resolve(_to);
}

void Assembly_Duplicate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Assembly_AddYourGabaritTo_AsyncWorker::Assembly_AddYourGabaritTo_AsyncWorker(MbAssembly *_underlying,
                                                                             Napi::Promise::Deferred const &d,
                                                                             MbCube &cube)
    : _underlying(_underlying), PromiseWorker(d), cube(cube){};

void Assembly_AddYourGabaritTo_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddYourGabaritTo(cube);

    ExitParallelRegion();
}

void Assembly_AddYourGabaritTo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Assembly_AddYourGabaritTo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Assembly_GetUseCount_AsyncWorker::Assembly_GetUseCount_AsyncWorker(MbAssembly *_underlying,
                                                                   Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Assembly_GetUseCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    refcount_t _result = _underlying->GetUseCount();

    this->_result = _result;

    ExitParallelRegion();
}

void Assembly_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    refcount_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Assembly_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Assembly_AddRef_AsyncWorker::Assembly_AddRef_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Assembly_AddRef_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddRef();

    ExitParallelRegion();
}

void Assembly_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Assembly_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Assembly_SetStyle_AsyncWorker::Assembly_SetStyle_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d,
                                                             int s)
    : _underlying(_underlying), PromiseWorker(d), s(s){};

void Assembly_SetStyle_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetStyle(s);

    ExitParallelRegion();
}

void Assembly_SetStyle_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Assembly_SetStyle_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Assembly_GetStyle_AsyncWorker::Assembly_GetStyle_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Assembly_GetStyle_AsyncWorker::Execute()
{
    EnterParallelRegion();

    int _result = _underlying->GetStyle();

    this->_result = _result;

    ExitParallelRegion();
}

void Assembly_GetStyle_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    int _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Assembly_GetStyle_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Assembly_SetColor_AsyncWorker::Assembly_SetColor_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d,
                                                             uint32 c)
    : _underlying(_underlying), PromiseWorker(d), c(c){};

void Assembly_SetColor_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetColor(c);

    ExitParallelRegion();
}

void Assembly_SetColor_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Assembly_SetColor_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Assembly_GetColor_AsyncWorker::Assembly_GetColor_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Assembly_GetColor_AsyncWorker::Execute()
{
    EnterParallelRegion();

    uint32 _result = _underlying->GetColor();

    this->_result = _result;

    ExitParallelRegion();
}

void Assembly_GetColor_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    uint32 _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Assembly_GetColor_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Assembly_AttributesConvert_AsyncWorker::Assembly_AttributesConvert_AsyncWorker(MbAssembly *_underlying,
                                                                               Napi::Promise::Deferred const &d,
                                                                               MbGrid &other)
    : _underlying(_underlying), PromiseWorker(d), other(other){};

void Assembly_AttributesConvert_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AttributesConvert(other);

    ExitParallelRegion();
}

void Assembly_AttributesConvert_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Assembly_AttributesConvert_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Assembly_GetCreatorsCount_AsyncWorker::Assembly_GetCreatorsCount_AsyncWorker(MbAssembly *_underlying,
                                                                             Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Assembly_GetCreatorsCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    size_t _result = _underlying->GetCreatorsCount();

    this->_result = _result;

    ExitParallelRegion();
}

void Assembly_GetCreatorsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    size_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Assembly_GetCreatorsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Assembly_GetCreator_AsyncWorker::Assembly_GetCreator_AsyncWorker(MbAssembly *_underlying,
                                                                 Napi::Promise::Deferred const &d, size_t ind)
    : _underlying(_underlying), PromiseWorker(d), ind(ind){};

void Assembly_GetCreator_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbCreator *_result = _underlying->GetCreator(ind);

    this->_result = _result;

    ExitParallelRegion();
}

void Assembly_GetCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbCreator *_result = this->_result;
    if (_result != NULL)
    {
        _to = Creator::NewInstance(env, (MbCreator *)_result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void Assembly_GetCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Assembly_SetCreator_AsyncWorker::Assembly_SetCreator_AsyncWorker(MbAssembly *_underlying,
                                                                 Napi::Promise::Deferred const &d, size_t ind)
    : _underlying(_underlying), PromiseWorker(d), ind(ind){};

void Assembly_SetCreator_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCreator *_result = _underlying->SetCreator(ind);

    this->_result = _result;

    ExitParallelRegion();
}

void Assembly_SetCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbCreator *_result = this->_result;
    if (_result != NULL)
    {
        _to = Creator::NewInstance(env, (MbCreator *)_result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void Assembly_SetCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Assembly_DetachCreator_AsyncWorker::Assembly_DetachCreator_AsyncWorker(MbAssembly *_underlying,
                                                                       Napi::Promise::Deferred const &d, size_t ind)
    : _underlying(_underlying), PromiseWorker(d), ind(ind){};

void Assembly_DetachCreator_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCreator *_result = _underlying->DetachCreator(ind);

    this->_result = _result;

    ExitParallelRegion();
}

void Assembly_DetachCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbCreator *_result = this->_result;
    if (_result != NULL)
    {
        _to = Creator::NewInstance(env, (MbCreator *)_result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void Assembly_DetachCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Assembly_AddCreator_AsyncWorker::Assembly_AddCreator_AsyncWorker(MbAssembly *_underlying,
                                                                 Napi::Promise::Deferred const &d,
                                                                 const MbCreator *creator, bool addSame)
    : _underlying(_underlying), PromiseWorker(d), creator(creator), addSame(addSame){};

void Assembly_AddCreator_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->AddCreator(creator, addSame);

    this->_result = _result;

    ExitParallelRegion();
}

void Assembly_AddCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void Assembly_AddCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Assembly_GetCreators_AsyncWorker::Assembly_GetCreators_AsyncWorker(MbAssembly *_underlying,
                                                                   Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Assembly_GetCreators_AsyncWorker::Execute()
{
    EnterParallelRegion();

    RPArray<MbCreator> *creators = new RPArray<MbCreator>;

    bool _result = _underlying->GetCreators(*creators);

    if (_result)
    {

        this->creators = creators;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation GetCreators failed";
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void Assembly_GetCreators_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    RPArray<MbCreator> *creators = this->creators;
    Napi::Array arr_creators = Napi::Array::New(env);
    for (size_t i = 0; i < creators->Count(); i++)
    {
        arr_creators[i] = Creator::NewInstance(env,

                                               (*creators)[i]

        );
    }
    _to = arr_creators;

    deferred.Resolve(_to);
}

void Assembly_GetCreators_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Assembly_DeleteCreator_AsyncWorker::Assembly_DeleteCreator_AsyncWorker(MbAssembly *_underlying,
                                                                       Napi::Promise::Deferred const &d, size_t ind)
    : _underlying(_underlying), PromiseWorker(d), ind(ind){};

void Assembly_DeleteCreator_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->DeleteCreator(ind);

    this->_result = _result;

    ExitParallelRegion();
}

void Assembly_DeleteCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void Assembly_DeleteCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Assembly_GetActiveCreatorsCount_AsyncWorker::Assembly_GetActiveCreatorsCount_AsyncWorker(
    MbAssembly *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Assembly_GetActiveCreatorsCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    size_t _result = _underlying->GetActiveCreatorsCount();

    this->_result = _result;

    ExitParallelRegion();
}

void Assembly_GetActiveCreatorsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    size_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Assembly_GetActiveCreatorsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                         Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
