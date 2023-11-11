// This is a generated file, modify: generate/templates/Item.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/Item.h"

#include "tool_mutex.h"

Napi::Object Item::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func =
        DefineClass(env, "Item",
                    {
                        InstanceMethod<&Item::CreateMesh>("CreateMesh"),
                        InstanceMethod<&Item::CreateMesh_async>("CreateMesh_async"),
                        InstanceMethod<&Item::CalculateMesh>("CalculateMesh"),
                        InstanceMethod<&Item::CalculateMesh_async>("CalculateMesh_async"),
                        InstanceMethod<&Item::GetItemName>("GetItemName"),
                        InstanceMethod<&Item::GetItemName_async>("GetItemName_async"),
                        InstanceMethod<&Item::SetItemName>("SetItemName"),
                        InstanceMethod<&Item::SetItemName_async>("SetItemName_async"),
                        InstanceMethod<&Item::Cast>("Cast"),
                        InstanceMethod<&Item::Cast_async>("Cast_async"),
                        InstanceMethod<&Item::RebuildItem>("RebuildItem"),
                        InstanceMethod<&Item::RebuildItem_async>("RebuildItem_async"),
                        InstanceMethod<&Item::GetItemByPath>("GetItemByPath"),
                        InstanceMethod<&Item::GetItemByPath_async>("GetItemByPath_async"),
                        InstanceMethod<&Item::IsA>("IsA"),
                        InstanceMethod<&Item::IsA_async>("IsA_async"),
                        InstanceMethod<&Item::Type>("Type"),
                        InstanceMethod<&Item::Type_async>("Type_async"),
                        InstanceMethod<&Item::Family>("Family"),
                        InstanceMethod<&Item::Family_async>("Family_async"),
                        InstanceMethod<&Item::Transform>("Transform"),
                        InstanceMethod<&Item::Transform_async>("Transform_async"),
                        InstanceMethod<&Item::Move>("Move"),
                        InstanceMethod<&Item::Move_async>("Move_async"),
                        InstanceMethod<&Item::Rotate>("Rotate"),
                        InstanceMethod<&Item::Rotate_async>("Rotate_async"),
                        InstanceMethod<&Item::Refresh>("Refresh"),
                        InstanceMethod<&Item::Refresh_async>("Refresh_async"),
                        InstanceMethod<&Item::Duplicate>("Duplicate"),
                        InstanceMethod<&Item::Duplicate_async>("Duplicate_async"),
                        InstanceMethod<&Item::AddYourGabaritTo>("AddYourGabaritTo"),
                        InstanceMethod<&Item::AddYourGabaritTo_async>("AddYourGabaritTo_async"),
                        InstanceMethod<&Item::GetUseCount>("GetUseCount"),
                        InstanceMethod<&Item::GetUseCount_async>("GetUseCount_async"),
                        InstanceMethod<&Item::AddRef>("AddRef"),
                        InstanceMethod<&Item::AddRef_async>("AddRef_async"),
                        InstanceMethod<&Item::SetStyle>("SetStyle"),
                        InstanceMethod<&Item::SetStyle_async>("SetStyle_async"),
                        InstanceMethod<&Item::GetStyle>("GetStyle"),
                        InstanceMethod<&Item::GetStyle_async>("GetStyle_async"),
                        InstanceMethod<&Item::SetColor>("SetColor"),
                        InstanceMethod<&Item::SetColor_async>("SetColor_async"),
                        InstanceMethod<&Item::GetColor>("GetColor"),
                        InstanceMethod<&Item::GetColor_async>("GetColor_async"),
                        InstanceMethod<&Item::AttributesConvert>("AttributesConvert"),
                        InstanceMethod<&Item::AttributesConvert_async>("AttributesConvert_async"),
                        InstanceMethod<&Item::GetCreatorsCount>("GetCreatorsCount"),
                        InstanceMethod<&Item::GetCreatorsCount_async>("GetCreatorsCount_async"),
                        InstanceMethod<&Item::GetCreator>("GetCreator"),
                        InstanceMethod<&Item::GetCreator_async>("GetCreator_async"),
                        InstanceMethod<&Item::SetCreator>("SetCreator"),
                        InstanceMethod<&Item::SetCreator_async>("SetCreator_async"),
                        InstanceMethod<&Item::DetachCreator>("DetachCreator"),
                        InstanceMethod<&Item::DetachCreator_async>("DetachCreator_async"),
                        InstanceMethod<&Item::AddCreator>("AddCreator"),
                        InstanceMethod<&Item::AddCreator_async>("AddCreator_async"),
                        InstanceMethod<&Item::GetCreators>("GetCreators"),
                        InstanceMethod<&Item::GetCreators_async>("GetCreators_async"),
                        InstanceMethod<&Item::DeleteCreator>("DeleteCreator"),
                        InstanceMethod<&Item::DeleteCreator_async>("DeleteCreator_async"),
                        InstanceMethod<&Item::GetActiveCreatorsCount>("GetActiveCreatorsCount"),
                        InstanceMethod<&Item::GetActiveCreatorsCount_async>("GetActiveCreatorsCount_async"),
                        InstanceMethod<&Item::Id>("Id"),

                    });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Item", func);

    Napi::Object global = env.Global();
    Napi::Object Object = global.Get("Object").ToObject();
    Napi::Function setPrototypeOf = Napi::Function(env, Object.Get("setPrototypeOf"));
    Napi::Value prototype = func.Get("prototype");

    Napi::Function superFunc = SpaceItem::GetConstructor(env);
    Napi::FunctionReference *superConstructor = new Napi::FunctionReference();
    *superConstructor = Napi::Persistent(superFunc);

    Napi::Value superPrototype = superFunc.Get("prototype");
    setPrototypeOf.Call({prototype, superPrototype});
    setPrototypeOf.Call({func, superFunc});

    return exports;
}

Item::Item(const Napi::CallbackInfo &info) : Napi::ObjectWrap<Item>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    Napi::Error::New(env, "Item cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object Item::NewInstance(Napi::Env env, MbItem *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Item");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Item *unwrapped = Item::Unwrap(inst);
    underlying->AddRef();
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Item::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Item");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value Item::CreateMesh(const Napi::CallbackInfo &info)
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

Napi::Value Item::CreateMesh_async(const Napi::CallbackInfo &info)
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

    Item_CreateMesh_AsyncWorker *asyncWorker = new Item_CreateMesh_AsyncWorker(_underlying, deferred,

                                                                               stepData,

                                                                               note,

                                                                               iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Item::CalculateMesh(const Napi::CallbackInfo &info)
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

Napi::Value Item::CalculateMesh_async(const Napi::CallbackInfo &info)
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

    Item_CalculateMesh_AsyncWorker *asyncWorker = new Item_CalculateMesh_AsyncWorker(_underlying, deferred,

                                                                                     stepData,

                                                                                     note);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Item::GetItemName(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    SimpleName _result = _underlying->GetItemName(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Item::GetItemName_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Item_GetItemName_AsyncWorker *asyncWorker = new Item_GetItemName_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Item::SetItemName(const Napi::CallbackInfo &info)
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

Napi::Value Item::SetItemName_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "SimpleName name is required."));
        return deferred.Promise();
    }

    int name = info[0].ToNumber().Int64Value();

    Item_SetItemName_AsyncWorker *asyncWorker = new Item_SetItemName_AsyncWorker(_underlying, deferred,

                                                                                 name);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value Item::RebuildItem(const Napi::CallbackInfo &info)
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

Napi::Value Item::RebuildItem_async(const Napi::CallbackInfo &info)
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

    Item_RebuildItem_AsyncWorker *asyncWorker = new Item_RebuildItem_AsyncWorker(_underlying, deferred,

                                                                                 sameShell,

                                                                                 progInd);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Item::GetItemByPath(const Napi::CallbackInfo &info)
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

Napi::Value Item::GetItemByPath_async(const Napi::CallbackInfo &info)
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

    Item_GetItemByPath_AsyncWorker *asyncWorker = new Item_GetItemByPath_AsyncWorker(_underlying, deferred,

                                                                                     path,

                                                                                     ind,

                                                                                     from,

                                                                                     currInd);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Item::IsA(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeSpaceType _result = _underlying->IsA(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Item::IsA_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Item_IsA_AsyncWorker *asyncWorker = new Item_IsA_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Item::Type(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeSpaceType _result = _underlying->Type(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Item::Type_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Item_Type_AsyncWorker *asyncWorker = new Item_Type_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Item::Family(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeSpaceType _result = _underlying->Family(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Item::Family_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Item_Family_AsyncWorker *asyncWorker = new Item_Family_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Item::Transform(const Napi::CallbackInfo &info)
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

Napi::Value Item::Transform_async(const Napi::CallbackInfo &info)
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

    Item_Transform_AsyncWorker *asyncWorker = new Item_Transform_AsyncWorker(_underlying, deferred,

                                                                             mat,

                                                                             iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Item::Move(const Napi::CallbackInfo &info)
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

Napi::Value Item::Move_async(const Napi::CallbackInfo &info)
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

    Item_Move_AsyncWorker *asyncWorker = new Item_Move_AsyncWorker(_underlying, deferred,

                                                                   v,

                                                                   iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Item::Rotate(const Napi::CallbackInfo &info)
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

Napi::Value Item::Rotate_async(const Napi::CallbackInfo &info)
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

    Item_Rotate_AsyncWorker *asyncWorker = new Item_Rotate_AsyncWorker(_underlying, deferred,

                                                                       axis,

                                                                       angle,

                                                                       iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Item::Refresh(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->Refresh(

    );

    return env.Undefined();
}

Napi::Value Item::Refresh_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Item_Refresh_AsyncWorker *asyncWorker = new Item_Refresh_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Item::Duplicate(const Napi::CallbackInfo &info)
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

Napi::Value Item::Duplicate_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    MbRegDuplicate *iReg = NULL;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        RegDuplicate *iReg_ = RegDuplicate::Unwrap(info[0].ToObject());
        iReg = iReg_->_underlying;
    }

    Item_Duplicate_AsyncWorker *asyncWorker = new Item_Duplicate_AsyncWorker(_underlying, deferred,

                                                                             iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Item::AddYourGabaritTo(const Napi::CallbackInfo &info)
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

Napi::Value Item::AddYourGabaritTo_async(const Napi::CallbackInfo &info)
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

    Item_AddYourGabaritTo_AsyncWorker *asyncWorker = new Item_AddYourGabaritTo_AsyncWorker(_underlying, deferred,

                                                                                           cube);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Item::GetUseCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    refcount_t _result = _underlying->GetUseCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Item::GetUseCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Item_GetUseCount_AsyncWorker *asyncWorker = new Item_GetUseCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Item::AddRef(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->AddRef(

    );

    return env.Undefined();
}

Napi::Value Item::AddRef_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Item_AddRef_AsyncWorker *asyncWorker = new Item_AddRef_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Item::SetStyle(const Napi::CallbackInfo &info)
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

Napi::Value Item::SetStyle_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "int s is required."));
        return deferred.Promise();
    }

    int s = info[0].ToNumber().Int64Value();

    Item_SetStyle_AsyncWorker *asyncWorker = new Item_SetStyle_AsyncWorker(_underlying, deferred,

                                                                           s);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Item::GetStyle(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    int _result = _underlying->GetStyle(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Item::GetStyle_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Item_GetStyle_AsyncWorker *asyncWorker = new Item_GetStyle_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Item::SetColor(const Napi::CallbackInfo &info)
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

Napi::Value Item::SetColor_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "uint32 c is required."));
        return deferred.Promise();
    }

    int c = info[0].ToNumber().Int64Value();

    Item_SetColor_AsyncWorker *asyncWorker = new Item_SetColor_AsyncWorker(_underlying, deferred,

                                                                           c);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Item::GetColor(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    uint32 _result = _underlying->GetColor(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Item::GetColor_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Item_GetColor_AsyncWorker *asyncWorker = new Item_GetColor_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Item::AttributesConvert(const Napi::CallbackInfo &info)
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

Napi::Value Item::AttributesConvert_async(const Napi::CallbackInfo &info)
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

    Item_AttributesConvert_AsyncWorker *asyncWorker = new Item_AttributesConvert_AsyncWorker(_underlying, deferred,

                                                                                             other);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Item::GetCreatorsCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    size_t _result = _underlying->GetCreatorsCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Item::GetCreatorsCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Item_GetCreatorsCount_AsyncWorker *asyncWorker = new Item_GetCreatorsCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Item::GetCreator(const Napi::CallbackInfo &info)
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

Napi::Value Item::GetCreator_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number ind is required."));
        return deferred.Promise();
    }

    size_t ind = info[0].ToNumber().Int64Value();

    Item_GetCreator_AsyncWorker *asyncWorker = new Item_GetCreator_AsyncWorker(_underlying, deferred,

                                                                               ind);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Item::SetCreator(const Napi::CallbackInfo &info)
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

Napi::Value Item::SetCreator_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number ind is required."));
        return deferred.Promise();
    }

    size_t ind = info[0].ToNumber().Int64Value();

    Item_SetCreator_AsyncWorker *asyncWorker = new Item_SetCreator_AsyncWorker(_underlying, deferred,

                                                                               ind);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Item::DetachCreator(const Napi::CallbackInfo &info)
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

Napi::Value Item::DetachCreator_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number ind is required."));
        return deferred.Promise();
    }

    size_t ind = info[0].ToNumber().Int64Value();

    Item_DetachCreator_AsyncWorker *asyncWorker = new Item_DetachCreator_AsyncWorker(_underlying, deferred,

                                                                                     ind);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Item::AddCreator(const Napi::CallbackInfo &info)
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

Napi::Value Item::AddCreator_async(const Napi::CallbackInfo &info)
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

    Item_AddCreator_AsyncWorker *asyncWorker = new Item_AddCreator_AsyncWorker(_underlying, deferred,

                                                                               creator,

                                                                               addSame);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Item::GetCreators(const Napi::CallbackInfo &info)
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

Napi::Value Item::GetCreators_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Item_GetCreators_AsyncWorker *asyncWorker = new Item_GetCreators_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Item::DeleteCreator(const Napi::CallbackInfo &info)
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

Napi::Value Item::DeleteCreator_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number ind is required."));
        return deferred.Promise();
    }

    size_t ind = info[0].ToNumber().Int64Value();

    Item_DeleteCreator_AsyncWorker *asyncWorker = new Item_DeleteCreator_AsyncWorker(_underlying, deferred,

                                                                                     ind);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Item::GetActiveCreatorsCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    size_t _result = _underlying->GetActiveCreatorsCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Item::GetActiveCreatorsCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Item_GetActiveCreatorsCount_AsyncWorker *asyncWorker =
        new Item_GetActiveCreatorsCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value Item::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

Item::~Item()
{
    // std::cout << "calling ::DeleteItem on Item for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

Item_CreateMesh_AsyncWorker::Item_CreateMesh_AsyncWorker(MbItem *_underlying, Napi::Promise::Deferred const &d,
                                                         const MbStepData &stepData, const MbFormNote &note,
                                                         MbRegDuplicate *iReg)
    : _underlying(_underlying), PromiseWorker(d), stepData(stepData), note(note), iReg(iReg){};

void Item_CreateMesh_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbItem *_result = _underlying->CreateMesh(stepData, note, iReg);

    this->_result = _result;

    ExitParallelRegion();
}

void Item_CreateMesh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Item_CreateMesh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Item_CalculateMesh_AsyncWorker::Item_CalculateMesh_AsyncWorker(MbItem *_underlying, Napi::Promise::Deferred const &d,
                                                               const MbStepData &stepData, const MbFormNote &note)
    : _underlying(_underlying), PromiseWorker(d), stepData(stepData), note(note){};

void Item_CalculateMesh_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbMesh *mesh = new MbMesh;

    _underlying->CalculateMesh(stepData, note, *mesh);

    this->mesh = mesh;

    ExitParallelRegion();
}

void Item_CalculateMesh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Item_CalculateMesh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Item_GetItemName_AsyncWorker::Item_GetItemName_AsyncWorker(MbItem *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Item_GetItemName_AsyncWorker::Execute()
{
    EnterParallelRegion();

    SimpleName _result = _underlying->GetItemName();

    this->_result = _result;

    ExitParallelRegion();
}

void Item_GetItemName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    SimpleName _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Item_GetItemName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Item_SetItemName_AsyncWorker::Item_SetItemName_AsyncWorker(MbItem *_underlying, Napi::Promise::Deferred const &d,
                                                           SimpleName name)
    : _underlying(_underlying), PromiseWorker(d), name(name){};

void Item_SetItemName_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetItemName(name);

    ExitParallelRegion();
}

void Item_SetItemName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Item_SetItemName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Item_RebuildItem_AsyncWorker::Item_RebuildItem_AsyncWorker(MbItem *_underlying, Napi::Promise::Deferred const &d,
                                                           MbeCopyMode sameShell, ProgressIndicator *progInd)
    : _underlying(_underlying), PromiseWorker(d), sameShell(sameShell), progInd(progInd){};

void Item_RebuildItem_AsyncWorker::Execute()
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

void Item_RebuildItem_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Item_RebuildItem_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Item_GetItemByPath_AsyncWorker::Item_GetItemByPath_AsyncWorker(MbItem *_underlying, Napi::Promise::Deferred const &d,
                                                               const MbPath &path, size_t ind, MbMatrix3D &from,
                                                               size_t currInd)
    : _underlying(_underlying), PromiseWorker(d), path(path), ind(ind), from(from), currInd(currInd){};

void Item_GetItemByPath_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbItem *_result = _underlying->GetItemByPath(path, ind, from, currInd);

    this->_result = _result;

    ExitParallelRegion();
}

void Item_GetItemByPath_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Item_GetItemByPath_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Item_IsA_AsyncWorker::Item_IsA_AsyncWorker(MbItem *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Item_IsA_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeSpaceType _result = _underlying->IsA();

    this->_result = _result;

    ExitParallelRegion();
}

void Item_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeSpaceType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Item_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Item_Type_AsyncWorker::Item_Type_AsyncWorker(MbItem *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Item_Type_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeSpaceType _result = _underlying->Type();

    this->_result = _result;

    ExitParallelRegion();
}

void Item_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeSpaceType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Item_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Item_Family_AsyncWorker::Item_Family_AsyncWorker(MbItem *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Item_Family_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeSpaceType _result = _underlying->Family();

    this->_result = _result;

    ExitParallelRegion();
}

void Item_Family_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeSpaceType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Item_Family_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Item_Transform_AsyncWorker::Item_Transform_AsyncWorker(MbItem *_underlying, Napi::Promise::Deferred const &d,
                                                       const MbMatrix3D &mat, MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), mat(mat), iReg(iReg){};

void Item_Transform_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Transform(mat, iReg);

    ExitParallelRegion();
}

void Item_Transform_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Item_Transform_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Item_Move_AsyncWorker::Item_Move_AsyncWorker(MbItem *_underlying, Napi::Promise::Deferred const &d, const MbVector3D &v,
                                             MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), v(v), iReg(iReg){};

void Item_Move_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Move(v, iReg);

    ExitParallelRegion();
}

void Item_Move_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Item_Move_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Item_Rotate_AsyncWorker::Item_Rotate_AsyncWorker(MbItem *_underlying, Napi::Promise::Deferred const &d,
                                                 const MbAxis3D &axis, double angle, MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), axis(axis), angle(angle), iReg(iReg){};

void Item_Rotate_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Rotate(axis, angle, iReg);

    ExitParallelRegion();
}

void Item_Rotate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Item_Rotate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Item_Refresh_AsyncWorker::Item_Refresh_AsyncWorker(MbItem *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Item_Refresh_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Refresh();

    ExitParallelRegion();
}

void Item_Refresh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Item_Refresh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Item_Duplicate_AsyncWorker::Item_Duplicate_AsyncWorker(MbItem *_underlying, Napi::Promise::Deferred const &d,
                                                       MbRegDuplicate *iReg)
    : _underlying(_underlying), PromiseWorker(d), iReg(iReg){};

void Item_Duplicate_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbSpaceItem &_result = _underlying->Duplicate(iReg);

    this->_result = (MbSpaceItem *)&(_result);

    ExitParallelRegion();
}

void Item_Duplicate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbSpaceItem *_result = this->_result;
    _to = SpaceItem::NewInstance(env, (MbSpaceItem *)&(_result));

    deferred.Resolve(_to);
}

void Item_Duplicate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Item_AddYourGabaritTo_AsyncWorker::Item_AddYourGabaritTo_AsyncWorker(MbItem *_underlying,
                                                                     Napi::Promise::Deferred const &d, MbCube &cube)
    : _underlying(_underlying), PromiseWorker(d), cube(cube){};

void Item_AddYourGabaritTo_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddYourGabaritTo(cube);

    ExitParallelRegion();
}

void Item_AddYourGabaritTo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Item_AddYourGabaritTo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Item_GetUseCount_AsyncWorker::Item_GetUseCount_AsyncWorker(MbItem *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Item_GetUseCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    refcount_t _result = _underlying->GetUseCount();

    this->_result = _result;

    ExitParallelRegion();
}

void Item_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    refcount_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Item_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Item_AddRef_AsyncWorker::Item_AddRef_AsyncWorker(MbItem *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Item_AddRef_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddRef();

    ExitParallelRegion();
}

void Item_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Item_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Item_SetStyle_AsyncWorker::Item_SetStyle_AsyncWorker(MbItem *_underlying, Napi::Promise::Deferred const &d, int s)
    : _underlying(_underlying), PromiseWorker(d), s(s){};

void Item_SetStyle_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetStyle(s);

    ExitParallelRegion();
}

void Item_SetStyle_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Item_SetStyle_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Item_GetStyle_AsyncWorker::Item_GetStyle_AsyncWorker(MbItem *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Item_GetStyle_AsyncWorker::Execute()
{
    EnterParallelRegion();

    int _result = _underlying->GetStyle();

    this->_result = _result;

    ExitParallelRegion();
}

void Item_GetStyle_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    int _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Item_GetStyle_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Item_SetColor_AsyncWorker::Item_SetColor_AsyncWorker(MbItem *_underlying, Napi::Promise::Deferred const &d, uint32 c)
    : _underlying(_underlying), PromiseWorker(d), c(c){};

void Item_SetColor_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetColor(c);

    ExitParallelRegion();
}

void Item_SetColor_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Item_SetColor_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Item_GetColor_AsyncWorker::Item_GetColor_AsyncWorker(MbItem *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Item_GetColor_AsyncWorker::Execute()
{
    EnterParallelRegion();

    uint32 _result = _underlying->GetColor();

    this->_result = _result;

    ExitParallelRegion();
}

void Item_GetColor_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    uint32 _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Item_GetColor_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Item_AttributesConvert_AsyncWorker::Item_AttributesConvert_AsyncWorker(MbItem *_underlying,
                                                                       Napi::Promise::Deferred const &d, MbGrid &other)
    : _underlying(_underlying), PromiseWorker(d), other(other){};

void Item_AttributesConvert_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AttributesConvert(other);

    ExitParallelRegion();
}

void Item_AttributesConvert_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Item_AttributesConvert_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Item_GetCreatorsCount_AsyncWorker::Item_GetCreatorsCount_AsyncWorker(MbItem *_underlying,
                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Item_GetCreatorsCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    size_t _result = _underlying->GetCreatorsCount();

    this->_result = _result;

    ExitParallelRegion();
}

void Item_GetCreatorsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    size_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Item_GetCreatorsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Item_GetCreator_AsyncWorker::Item_GetCreator_AsyncWorker(MbItem *_underlying, Napi::Promise::Deferred const &d,
                                                         size_t ind)
    : _underlying(_underlying), PromiseWorker(d), ind(ind){};

void Item_GetCreator_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbCreator *_result = _underlying->GetCreator(ind);

    this->_result = _result;

    ExitParallelRegion();
}

void Item_GetCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Item_GetCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Item_SetCreator_AsyncWorker::Item_SetCreator_AsyncWorker(MbItem *_underlying, Napi::Promise::Deferred const &d,
                                                         size_t ind)
    : _underlying(_underlying), PromiseWorker(d), ind(ind){};

void Item_SetCreator_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCreator *_result = _underlying->SetCreator(ind);

    this->_result = _result;

    ExitParallelRegion();
}

void Item_SetCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Item_SetCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Item_DetachCreator_AsyncWorker::Item_DetachCreator_AsyncWorker(MbItem *_underlying, Napi::Promise::Deferred const &d,
                                                               size_t ind)
    : _underlying(_underlying), PromiseWorker(d), ind(ind){};

void Item_DetachCreator_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCreator *_result = _underlying->DetachCreator(ind);

    this->_result = _result;

    ExitParallelRegion();
}

void Item_DetachCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Item_DetachCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Item_AddCreator_AsyncWorker::Item_AddCreator_AsyncWorker(MbItem *_underlying, Napi::Promise::Deferred const &d,
                                                         const MbCreator *creator, bool addSame)
    : _underlying(_underlying), PromiseWorker(d), creator(creator), addSame(addSame){};

void Item_AddCreator_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->AddCreator(creator, addSame);

    this->_result = _result;

    ExitParallelRegion();
}

void Item_AddCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void Item_AddCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Item_GetCreators_AsyncWorker::Item_GetCreators_AsyncWorker(MbItem *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Item_GetCreators_AsyncWorker::Execute()
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

void Item_GetCreators_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void Item_GetCreators_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Item_DeleteCreator_AsyncWorker::Item_DeleteCreator_AsyncWorker(MbItem *_underlying, Napi::Promise::Deferred const &d,
                                                               size_t ind)
    : _underlying(_underlying), PromiseWorker(d), ind(ind){};

void Item_DeleteCreator_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->DeleteCreator(ind);

    this->_result = _result;

    ExitParallelRegion();
}

void Item_DeleteCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void Item_DeleteCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Item_GetActiveCreatorsCount_AsyncWorker::Item_GetActiveCreatorsCount_AsyncWorker(MbItem *_underlying,
                                                                                 Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Item_GetActiveCreatorsCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    size_t _result = _underlying->GetActiveCreatorsCount();

    this->_result = _result;

    ExitParallelRegion();
}

void Item_GetActiveCreatorsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    size_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Item_GetActiveCreatorsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
