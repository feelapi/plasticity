// This is a generated file, modify: generate/templates/PlaneInstance.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/PlaneInstance.h"

#include "tool_mutex.h"

Napi::Object PlaneInstance::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func =
        DefineClass(env, "PlaneInstance",
                    {
                        InstanceMethod<&PlaneInstance::GetPlacement>("GetPlacement"),
                        InstanceMethod<&PlaneInstance::GetPlacement_async>("GetPlacement_async"),
                        InstanceMethod<&PlaneInstance::PlaneItemsCount>("PlaneItemsCount"),
                        InstanceMethod<&PlaneInstance::PlaneItemsCount_async>("PlaneItemsCount_async"),
                        InstanceMethod<&PlaneInstance::GetPlaneItem>("GetPlaneItem"),
                        InstanceMethod<&PlaneInstance::GetPlaneItem_async>("GetPlaneItem_async"),
                        InstanceMethod<&PlaneInstance::CreateMesh>("CreateMesh"),
                        InstanceMethod<&PlaneInstance::CreateMesh_async>("CreateMesh_async"),
                        InstanceMethod<&PlaneInstance::CalculateMesh>("CalculateMesh"),
                        InstanceMethod<&PlaneInstance::CalculateMesh_async>("CalculateMesh_async"),
                        InstanceMethod<&PlaneInstance::GetItemName>("GetItemName"),
                        InstanceMethod<&PlaneInstance::GetItemName_async>("GetItemName_async"),
                        InstanceMethod<&PlaneInstance::SetItemName>("SetItemName"),
                        InstanceMethod<&PlaneInstance::SetItemName_async>("SetItemName_async"),
                        InstanceMethod<&PlaneInstance::RebuildItem>("RebuildItem"),
                        InstanceMethod<&PlaneInstance::RebuildItem_async>("RebuildItem_async"),
                        InstanceMethod<&PlaneInstance::GetItemByPath>("GetItemByPath"),
                        InstanceMethod<&PlaneInstance::GetItemByPath_async>("GetItemByPath_async"),
                        InstanceMethod<&PlaneInstance::IsA>("IsA"),
                        InstanceMethod<&PlaneInstance::IsA_async>("IsA_async"),
                        InstanceMethod<&PlaneInstance::Type>("Type"),
                        InstanceMethod<&PlaneInstance::Type_async>("Type_async"),
                        InstanceMethod<&PlaneInstance::Family>("Family"),
                        InstanceMethod<&PlaneInstance::Family_async>("Family_async"),
                        InstanceMethod<&PlaneInstance::Transform>("Transform"),
                        InstanceMethod<&PlaneInstance::Transform_async>("Transform_async"),
                        InstanceMethod<&PlaneInstance::Move>("Move"),
                        InstanceMethod<&PlaneInstance::Move_async>("Move_async"),
                        InstanceMethod<&PlaneInstance::Rotate>("Rotate"),
                        InstanceMethod<&PlaneInstance::Rotate_async>("Rotate_async"),
                        InstanceMethod<&PlaneInstance::Refresh>("Refresh"),
                        InstanceMethod<&PlaneInstance::Refresh_async>("Refresh_async"),
                        InstanceMethod<&PlaneInstance::Duplicate>("Duplicate"),
                        InstanceMethod<&PlaneInstance::Duplicate_async>("Duplicate_async"),
                        InstanceMethod<&PlaneInstance::AddYourGabaritTo>("AddYourGabaritTo"),
                        InstanceMethod<&PlaneInstance::AddYourGabaritTo_async>("AddYourGabaritTo_async"),
                        InstanceMethod<&PlaneInstance::GetUseCount>("GetUseCount"),
                        InstanceMethod<&PlaneInstance::GetUseCount_async>("GetUseCount_async"),
                        InstanceMethod<&PlaneInstance::AddRef>("AddRef"),
                        InstanceMethod<&PlaneInstance::AddRef_async>("AddRef_async"),
                        InstanceMethod<&PlaneInstance::SetStyle>("SetStyle"),
                        InstanceMethod<&PlaneInstance::SetStyle_async>("SetStyle_async"),
                        InstanceMethod<&PlaneInstance::GetStyle>("GetStyle"),
                        InstanceMethod<&PlaneInstance::GetStyle_async>("GetStyle_async"),
                        InstanceMethod<&PlaneInstance::SetColor>("SetColor"),
                        InstanceMethod<&PlaneInstance::SetColor_async>("SetColor_async"),
                        InstanceMethod<&PlaneInstance::GetColor>("GetColor"),
                        InstanceMethod<&PlaneInstance::GetColor_async>("GetColor_async"),
                        InstanceMethod<&PlaneInstance::AttributesConvert>("AttributesConvert"),
                        InstanceMethod<&PlaneInstance::AttributesConvert_async>("AttributesConvert_async"),
                        InstanceMethod<&PlaneInstance::GetCreatorsCount>("GetCreatorsCount"),
                        InstanceMethod<&PlaneInstance::GetCreatorsCount_async>("GetCreatorsCount_async"),
                        InstanceMethod<&PlaneInstance::GetCreator>("GetCreator"),
                        InstanceMethod<&PlaneInstance::GetCreator_async>("GetCreator_async"),
                        InstanceMethod<&PlaneInstance::SetCreator>("SetCreator"),
                        InstanceMethod<&PlaneInstance::SetCreator_async>("SetCreator_async"),
                        InstanceMethod<&PlaneInstance::DetachCreator>("DetachCreator"),
                        InstanceMethod<&PlaneInstance::DetachCreator_async>("DetachCreator_async"),
                        InstanceMethod<&PlaneInstance::AddCreator>("AddCreator"),
                        InstanceMethod<&PlaneInstance::AddCreator_async>("AddCreator_async"),
                        InstanceMethod<&PlaneInstance::GetCreators>("GetCreators"),
                        InstanceMethod<&PlaneInstance::GetCreators_async>("GetCreators_async"),
                        InstanceMethod<&PlaneInstance::DeleteCreator>("DeleteCreator"),
                        InstanceMethod<&PlaneInstance::DeleteCreator_async>("DeleteCreator_async"),
                        InstanceMethod<&PlaneInstance::GetActiveCreatorsCount>("GetActiveCreatorsCount"),
                        InstanceMethod<&PlaneInstance::GetActiveCreatorsCount_async>("GetActiveCreatorsCount_async"),
                        InstanceMethod<&PlaneInstance::Id>("Id"),

                    });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("PlaneInstance", func);

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

PlaneInstance::PlaneInstance(const Napi::CallbackInfo &info) : Napi::ObjectWrap<PlaneInstance>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 2 && ((info[0].IsObject() && info[0].ToObject().InstanceOf(PlaneItem::GetConstructor(env)))) &&
        ((info[1].IsObject() && info[1].ToObject().InstanceOf(Placement3D::GetConstructor(env))))

    )
    {
        if (info[0].IsNull() || info[0].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'item'").ThrowAsJavaScriptException();
            return;
        }
        const class PlaneItem *item_ = PlaneItem::Unwrap(info[0].ToObject());

        const MbPlaneItem &item = *item_->_underlying;

        if (info[1].IsNull() || info[1].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'placement'").ThrowAsJavaScriptException();
            return;
        }
        const class Placement3D *placement_ = Placement3D::Unwrap(info[1].ToObject());

        const MbPlacement3D &placement = *placement_->_underlying;

        MbPlaneInstance *underlying = new MbPlaneInstance(item, placement);
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

Napi::Object PlaneInstance::NewInstance(Napi::Env env, MbPlaneInstance *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("PlaneInstance");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    PlaneInstance *unwrapped = PlaneInstance::Unwrap(inst);
    underlying->AddRef();
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function PlaneInstance::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("PlaneInstance");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value PlaneInstance::GetPlacement(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbPlacement3D &_result = _underlying->GetPlacement(

    );

    Napi::Value _to;

    _to = Placement3D::NewInstance(env, new MbPlacement3D(_result));

    return _to;
}

Napi::Value PlaneInstance::GetPlacement_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    PlaneInstance_GetPlacement_AsyncWorker *asyncWorker =
        new PlaneInstance_GetPlacement_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value PlaneInstance::PlaneItemsCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    size_t _result = _underlying->PlaneItemsCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value PlaneInstance::PlaneItemsCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    PlaneInstance_PlaneItemsCount_AsyncWorker *asyncWorker =
        new PlaneInstance_PlaneItemsCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value PlaneInstance::GetPlaneItem(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    size_t ind = info[0].ToNumber().Int64Value();

    const MbPlaneItem *_result = _underlying->GetPlaneItem(info.Length() == 0 || info[0].IsNull() ? 0 : ind

    );

    Napi::Value _to;

    if (_result != NULL)
    {
        _to = PlaneItem::NewInstance(env, (MbPlaneItem *)_result);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value PlaneInstance::GetPlaneItem_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    size_t ind = info[0].ToNumber().Int64Value();

    PlaneInstance_GetPlaneItem_AsyncWorker *asyncWorker =
        new PlaneInstance_GetPlaneItem_AsyncWorker(_underlying, deferred,

                                                   ind);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value PlaneInstance::CreateMesh(const Napi::CallbackInfo &info)
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

Napi::Value PlaneInstance::CreateMesh_async(const Napi::CallbackInfo &info)
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

    PlaneInstance_CreateMesh_AsyncWorker *asyncWorker = new PlaneInstance_CreateMesh_AsyncWorker(_underlying, deferred,

                                                                                                 stepData,

                                                                                                 note,

                                                                                                 iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value PlaneInstance::CalculateMesh(const Napi::CallbackInfo &info)
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

Napi::Value PlaneInstance::CalculateMesh_async(const Napi::CallbackInfo &info)
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

    PlaneInstance_CalculateMesh_AsyncWorker *asyncWorker =
        new PlaneInstance_CalculateMesh_AsyncWorker(_underlying, deferred,

                                                    stepData,

                                                    note);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value PlaneInstance::GetItemName(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    SimpleName _result = _underlying->GetItemName(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value PlaneInstance::GetItemName_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    PlaneInstance_GetItemName_AsyncWorker *asyncWorker =
        new PlaneInstance_GetItemName_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value PlaneInstance::SetItemName(const Napi::CallbackInfo &info)
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

Napi::Value PlaneInstance::SetItemName_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "SimpleName name is required."));
        return deferred.Promise();
    }

    int name = info[0].ToNumber().Int64Value();

    PlaneInstance_SetItemName_AsyncWorker *asyncWorker =
        new PlaneInstance_SetItemName_AsyncWorker(_underlying, deferred,

                                                  name);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value PlaneInstance::RebuildItem(const Napi::CallbackInfo &info)
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

Napi::Value PlaneInstance::RebuildItem_async(const Napi::CallbackInfo &info)
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

    PlaneInstance_RebuildItem_AsyncWorker *asyncWorker =
        new PlaneInstance_RebuildItem_AsyncWorker(_underlying, deferred,

                                                  sameShell,

                                                  progInd);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value PlaneInstance::GetItemByPath(const Napi::CallbackInfo &info)
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

Napi::Value PlaneInstance::GetItemByPath_async(const Napi::CallbackInfo &info)
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

    PlaneInstance_GetItemByPath_AsyncWorker *asyncWorker =
        new PlaneInstance_GetItemByPath_AsyncWorker(_underlying, deferred,

                                                    path,

                                                    ind,

                                                    from,

                                                    currInd);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value PlaneInstance::IsA(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeSpaceType _result = _underlying->IsA(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value PlaneInstance::IsA_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    PlaneInstance_IsA_AsyncWorker *asyncWorker = new PlaneInstance_IsA_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value PlaneInstance::Type(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeSpaceType _result = _underlying->Type(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value PlaneInstance::Type_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    PlaneInstance_Type_AsyncWorker *asyncWorker = new PlaneInstance_Type_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value PlaneInstance::Family(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeSpaceType _result = _underlying->Family(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value PlaneInstance::Family_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    PlaneInstance_Family_AsyncWorker *asyncWorker = new PlaneInstance_Family_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value PlaneInstance::Transform(const Napi::CallbackInfo &info)
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

Napi::Value PlaneInstance::Transform_async(const Napi::CallbackInfo &info)
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

    PlaneInstance_Transform_AsyncWorker *asyncWorker = new PlaneInstance_Transform_AsyncWorker(_underlying, deferred,

                                                                                               mat,

                                                                                               iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value PlaneInstance::Move(const Napi::CallbackInfo &info)
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

Napi::Value PlaneInstance::Move_async(const Napi::CallbackInfo &info)
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

    PlaneInstance_Move_AsyncWorker *asyncWorker = new PlaneInstance_Move_AsyncWorker(_underlying, deferred,

                                                                                     v,

                                                                                     iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value PlaneInstance::Rotate(const Napi::CallbackInfo &info)
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

Napi::Value PlaneInstance::Rotate_async(const Napi::CallbackInfo &info)
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

    PlaneInstance_Rotate_AsyncWorker *asyncWorker = new PlaneInstance_Rotate_AsyncWorker(_underlying, deferred,

                                                                                         axis,

                                                                                         angle,

                                                                                         iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value PlaneInstance::Refresh(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->Refresh(

    );

    return env.Undefined();
}

Napi::Value PlaneInstance::Refresh_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    PlaneInstance_Refresh_AsyncWorker *asyncWorker = new PlaneInstance_Refresh_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value PlaneInstance::Duplicate(const Napi::CallbackInfo &info)
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

Napi::Value PlaneInstance::Duplicate_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    MbRegDuplicate *iReg = NULL;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        RegDuplicate *iReg_ = RegDuplicate::Unwrap(info[0].ToObject());
        iReg = iReg_->_underlying;
    }

    PlaneInstance_Duplicate_AsyncWorker *asyncWorker = new PlaneInstance_Duplicate_AsyncWorker(_underlying, deferred,

                                                                                               iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value PlaneInstance::AddYourGabaritTo(const Napi::CallbackInfo &info)
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

Napi::Value PlaneInstance::AddYourGabaritTo_async(const Napi::CallbackInfo &info)
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

    PlaneInstance_AddYourGabaritTo_AsyncWorker *asyncWorker =
        new PlaneInstance_AddYourGabaritTo_AsyncWorker(_underlying, deferred,

                                                       cube);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value PlaneInstance::GetUseCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    refcount_t _result = _underlying->GetUseCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value PlaneInstance::GetUseCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    PlaneInstance_GetUseCount_AsyncWorker *asyncWorker =
        new PlaneInstance_GetUseCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value PlaneInstance::AddRef(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->AddRef(

    );

    return env.Undefined();
}

Napi::Value PlaneInstance::AddRef_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    PlaneInstance_AddRef_AsyncWorker *asyncWorker = new PlaneInstance_AddRef_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value PlaneInstance::SetStyle(const Napi::CallbackInfo &info)
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

Napi::Value PlaneInstance::SetStyle_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "int s is required."));
        return deferred.Promise();
    }

    int s = info[0].ToNumber().Int64Value();

    PlaneInstance_SetStyle_AsyncWorker *asyncWorker = new PlaneInstance_SetStyle_AsyncWorker(_underlying, deferred,

                                                                                             s);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value PlaneInstance::GetStyle(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    int _result = _underlying->GetStyle(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value PlaneInstance::GetStyle_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    PlaneInstance_GetStyle_AsyncWorker *asyncWorker = new PlaneInstance_GetStyle_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value PlaneInstance::SetColor(const Napi::CallbackInfo &info)
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

Napi::Value PlaneInstance::SetColor_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "uint32 c is required."));
        return deferred.Promise();
    }

    int c = info[0].ToNumber().Int64Value();

    PlaneInstance_SetColor_AsyncWorker *asyncWorker = new PlaneInstance_SetColor_AsyncWorker(_underlying, deferred,

                                                                                             c);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value PlaneInstance::GetColor(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    uint32 _result = _underlying->GetColor(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value PlaneInstance::GetColor_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    PlaneInstance_GetColor_AsyncWorker *asyncWorker = new PlaneInstance_GetColor_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value PlaneInstance::AttributesConvert(const Napi::CallbackInfo &info)
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

Napi::Value PlaneInstance::AttributesConvert_async(const Napi::CallbackInfo &info)
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

    PlaneInstance_AttributesConvert_AsyncWorker *asyncWorker =
        new PlaneInstance_AttributesConvert_AsyncWorker(_underlying, deferred,

                                                        other);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value PlaneInstance::GetCreatorsCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    size_t _result = _underlying->GetCreatorsCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value PlaneInstance::GetCreatorsCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    PlaneInstance_GetCreatorsCount_AsyncWorker *asyncWorker =
        new PlaneInstance_GetCreatorsCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value PlaneInstance::GetCreator(const Napi::CallbackInfo &info)
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

Napi::Value PlaneInstance::GetCreator_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number ind is required."));
        return deferred.Promise();
    }

    size_t ind = info[0].ToNumber().Int64Value();

    PlaneInstance_GetCreator_AsyncWorker *asyncWorker = new PlaneInstance_GetCreator_AsyncWorker(_underlying, deferred,

                                                                                                 ind);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value PlaneInstance::SetCreator(const Napi::CallbackInfo &info)
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

Napi::Value PlaneInstance::SetCreator_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number ind is required."));
        return deferred.Promise();
    }

    size_t ind = info[0].ToNumber().Int64Value();

    PlaneInstance_SetCreator_AsyncWorker *asyncWorker = new PlaneInstance_SetCreator_AsyncWorker(_underlying, deferred,

                                                                                                 ind);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value PlaneInstance::DetachCreator(const Napi::CallbackInfo &info)
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

Napi::Value PlaneInstance::DetachCreator_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number ind is required."));
        return deferred.Promise();
    }

    size_t ind = info[0].ToNumber().Int64Value();

    PlaneInstance_DetachCreator_AsyncWorker *asyncWorker =
        new PlaneInstance_DetachCreator_AsyncWorker(_underlying, deferred,

                                                    ind);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value PlaneInstance::AddCreator(const Napi::CallbackInfo &info)
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

Napi::Value PlaneInstance::AddCreator_async(const Napi::CallbackInfo &info)
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

    PlaneInstance_AddCreator_AsyncWorker *asyncWorker = new PlaneInstance_AddCreator_AsyncWorker(_underlying, deferred,

                                                                                                 creator,

                                                                                                 addSame);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value PlaneInstance::GetCreators(const Napi::CallbackInfo &info)
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

Napi::Value PlaneInstance::GetCreators_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    PlaneInstance_GetCreators_AsyncWorker *asyncWorker =
        new PlaneInstance_GetCreators_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value PlaneInstance::DeleteCreator(const Napi::CallbackInfo &info)
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

Napi::Value PlaneInstance::DeleteCreator_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number ind is required."));
        return deferred.Promise();
    }

    size_t ind = info[0].ToNumber().Int64Value();

    PlaneInstance_DeleteCreator_AsyncWorker *asyncWorker =
        new PlaneInstance_DeleteCreator_AsyncWorker(_underlying, deferred,

                                                    ind);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value PlaneInstance::GetActiveCreatorsCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    size_t _result = _underlying->GetActiveCreatorsCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value PlaneInstance::GetActiveCreatorsCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    PlaneInstance_GetActiveCreatorsCount_AsyncWorker *asyncWorker =
        new PlaneInstance_GetActiveCreatorsCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value PlaneInstance::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

PlaneInstance::~PlaneInstance()
{
    // std::cout << "calling ::DeleteItem on PlaneInstance for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

PlaneInstance_GetPlacement_AsyncWorker::PlaneInstance_GetPlacement_AsyncWorker(MbPlaneInstance *_underlying,
                                                                               Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void PlaneInstance_GetPlacement_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbPlacement3D &_result = _underlying->GetPlacement();

    this->_result = new (MbPlacement3D)(_result);

    ExitParallelRegion();
}

void PlaneInstance_GetPlacement_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbPlacement3D *_result = this->_result;
    _to = Placement3D::NewInstance(env, (MbPlacement3D *)&(_result));

    deferred.Resolve(_to);
}

void PlaneInstance_GetPlacement_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
PlaneInstance_PlaneItemsCount_AsyncWorker::PlaneInstance_PlaneItemsCount_AsyncWorker(MbPlaneInstance *_underlying,
                                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void PlaneInstance_PlaneItemsCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    size_t _result = _underlying->PlaneItemsCount();

    this->_result = _result;

    ExitParallelRegion();
}

void PlaneInstance_PlaneItemsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    size_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void PlaneInstance_PlaneItemsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                       Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
PlaneInstance_GetPlaneItem_AsyncWorker::PlaneInstance_GetPlaneItem_AsyncWorker(MbPlaneInstance *_underlying,
                                                                               Napi::Promise::Deferred const &d,
                                                                               size_t ind)
    : _underlying(_underlying), PromiseWorker(d), ind(ind){};

void PlaneInstance_GetPlaneItem_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbPlaneItem *_result = _underlying->GetPlaneItem(ind);

    this->_result = _result;

    ExitParallelRegion();
}

void PlaneInstance_GetPlaneItem_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbPlaneItem *_result = this->_result;
    if (_result != NULL)
    {
        _to = PlaneItem::NewInstance(env, (MbPlaneItem *)_result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void PlaneInstance_GetPlaneItem_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
PlaneInstance_CreateMesh_AsyncWorker::PlaneInstance_CreateMesh_AsyncWorker(MbPlaneInstance *_underlying,
                                                                           Napi::Promise::Deferred const &d,
                                                                           const MbStepData &stepData,
                                                                           const MbFormNote &note, MbRegDuplicate *iReg)
    : _underlying(_underlying), PromiseWorker(d), stepData(stepData), note(note), iReg(iReg){};

void PlaneInstance_CreateMesh_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbItem *_result = _underlying->CreateMesh(stepData, note, iReg);

    this->_result = _result;

    ExitParallelRegion();
}

void PlaneInstance_CreateMesh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void PlaneInstance_CreateMesh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
PlaneInstance_CalculateMesh_AsyncWorker::PlaneInstance_CalculateMesh_AsyncWorker(MbPlaneInstance *_underlying,
                                                                                 Napi::Promise::Deferred const &d,
                                                                                 const MbStepData &stepData,
                                                                                 const MbFormNote &note)
    : _underlying(_underlying), PromiseWorker(d), stepData(stepData), note(note){};

void PlaneInstance_CalculateMesh_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbMesh *mesh = new MbMesh;

    _underlying->CalculateMesh(stepData, note, *mesh);

    this->mesh = mesh;

    ExitParallelRegion();
}

void PlaneInstance_CalculateMesh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void PlaneInstance_CalculateMesh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
PlaneInstance_GetItemName_AsyncWorker::PlaneInstance_GetItemName_AsyncWorker(MbPlaneInstance *_underlying,
                                                                             Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void PlaneInstance_GetItemName_AsyncWorker::Execute()
{
    EnterParallelRegion();

    SimpleName _result = _underlying->GetItemName();

    this->_result = _result;

    ExitParallelRegion();
}

void PlaneInstance_GetItemName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    SimpleName _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void PlaneInstance_GetItemName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
PlaneInstance_SetItemName_AsyncWorker::PlaneInstance_SetItemName_AsyncWorker(MbPlaneInstance *_underlying,
                                                                             Napi::Promise::Deferred const &d,
                                                                             SimpleName name)
    : _underlying(_underlying), PromiseWorker(d), name(name){};

void PlaneInstance_SetItemName_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetItemName(name);

    ExitParallelRegion();
}

void PlaneInstance_SetItemName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void PlaneInstance_SetItemName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
PlaneInstance_RebuildItem_AsyncWorker::PlaneInstance_RebuildItem_AsyncWorker(MbPlaneInstance *_underlying,
                                                                             Napi::Promise::Deferred const &d,
                                                                             MbeCopyMode sameShell,
                                                                             ProgressIndicator *progInd)
    : _underlying(_underlying), PromiseWorker(d), sameShell(sameShell), progInd(progInd){};

void PlaneInstance_RebuildItem_AsyncWorker::Execute()
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

void PlaneInstance_RebuildItem_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void PlaneInstance_RebuildItem_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
PlaneInstance_GetItemByPath_AsyncWorker::PlaneInstance_GetItemByPath_AsyncWorker(MbPlaneInstance *_underlying,
                                                                                 Napi::Promise::Deferred const &d,
                                                                                 const MbPath &path, size_t ind,
                                                                                 MbMatrix3D &from, size_t currInd)
    : _underlying(_underlying), PromiseWorker(d), path(path), ind(ind), from(from), currInd(currInd){};

void PlaneInstance_GetItemByPath_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbItem *_result = _underlying->GetItemByPath(path, ind, from, currInd);

    this->_result = _result;

    ExitParallelRegion();
}

void PlaneInstance_GetItemByPath_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void PlaneInstance_GetItemByPath_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
PlaneInstance_IsA_AsyncWorker::PlaneInstance_IsA_AsyncWorker(MbPlaneInstance *_underlying,
                                                             Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void PlaneInstance_IsA_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeSpaceType _result = _underlying->IsA();

    this->_result = _result;

    ExitParallelRegion();
}

void PlaneInstance_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeSpaceType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void PlaneInstance_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
PlaneInstance_Type_AsyncWorker::PlaneInstance_Type_AsyncWorker(MbPlaneInstance *_underlying,
                                                               Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void PlaneInstance_Type_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeSpaceType _result = _underlying->Type();

    this->_result = _result;

    ExitParallelRegion();
}

void PlaneInstance_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeSpaceType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void PlaneInstance_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
PlaneInstance_Family_AsyncWorker::PlaneInstance_Family_AsyncWorker(MbPlaneInstance *_underlying,
                                                                   Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void PlaneInstance_Family_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeSpaceType _result = _underlying->Family();

    this->_result = _result;

    ExitParallelRegion();
}

void PlaneInstance_Family_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeSpaceType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void PlaneInstance_Family_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
PlaneInstance_Transform_AsyncWorker::PlaneInstance_Transform_AsyncWorker(MbPlaneInstance *_underlying,
                                                                         Napi::Promise::Deferred const &d,
                                                                         const MbMatrix3D &mat, MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), mat(mat), iReg(iReg){};

void PlaneInstance_Transform_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Transform(mat, iReg);

    ExitParallelRegion();
}

void PlaneInstance_Transform_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void PlaneInstance_Transform_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
PlaneInstance_Move_AsyncWorker::PlaneInstance_Move_AsyncWorker(MbPlaneInstance *_underlying,
                                                               Napi::Promise::Deferred const &d, const MbVector3D &v,
                                                               MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), v(v), iReg(iReg){};

void PlaneInstance_Move_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Move(v, iReg);

    ExitParallelRegion();
}

void PlaneInstance_Move_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void PlaneInstance_Move_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
PlaneInstance_Rotate_AsyncWorker::PlaneInstance_Rotate_AsyncWorker(MbPlaneInstance *_underlying,
                                                                   Napi::Promise::Deferred const &d,
                                                                   const MbAxis3D &axis, double angle,
                                                                   MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), axis(axis), angle(angle), iReg(iReg){};

void PlaneInstance_Rotate_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Rotate(axis, angle, iReg);

    ExitParallelRegion();
}

void PlaneInstance_Rotate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void PlaneInstance_Rotate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
PlaneInstance_Refresh_AsyncWorker::PlaneInstance_Refresh_AsyncWorker(MbPlaneInstance *_underlying,
                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void PlaneInstance_Refresh_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Refresh();

    ExitParallelRegion();
}

void PlaneInstance_Refresh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void PlaneInstance_Refresh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
PlaneInstance_Duplicate_AsyncWorker::PlaneInstance_Duplicate_AsyncWorker(MbPlaneInstance *_underlying,
                                                                         Napi::Promise::Deferred const &d,
                                                                         MbRegDuplicate *iReg)
    : _underlying(_underlying), PromiseWorker(d), iReg(iReg){};

void PlaneInstance_Duplicate_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbSpaceItem &_result = _underlying->Duplicate(iReg);

    this->_result = (MbSpaceItem *)&(_result);

    ExitParallelRegion();
}

void PlaneInstance_Duplicate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbSpaceItem *_result = this->_result;
    _to = SpaceItem::NewInstance(env, (MbSpaceItem *)&(_result));

    deferred.Resolve(_to);
}

void PlaneInstance_Duplicate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
PlaneInstance_AddYourGabaritTo_AsyncWorker::PlaneInstance_AddYourGabaritTo_AsyncWorker(MbPlaneInstance *_underlying,
                                                                                       Napi::Promise::Deferred const &d,
                                                                                       MbCube &cube)
    : _underlying(_underlying), PromiseWorker(d), cube(cube){};

void PlaneInstance_AddYourGabaritTo_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddYourGabaritTo(cube);

    ExitParallelRegion();
}

void PlaneInstance_AddYourGabaritTo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void PlaneInstance_AddYourGabaritTo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                        Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
PlaneInstance_GetUseCount_AsyncWorker::PlaneInstance_GetUseCount_AsyncWorker(MbPlaneInstance *_underlying,
                                                                             Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void PlaneInstance_GetUseCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    refcount_t _result = _underlying->GetUseCount();

    this->_result = _result;

    ExitParallelRegion();
}

void PlaneInstance_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    refcount_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void PlaneInstance_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
PlaneInstance_AddRef_AsyncWorker::PlaneInstance_AddRef_AsyncWorker(MbPlaneInstance *_underlying,
                                                                   Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void PlaneInstance_AddRef_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddRef();

    ExitParallelRegion();
}

void PlaneInstance_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void PlaneInstance_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
PlaneInstance_SetStyle_AsyncWorker::PlaneInstance_SetStyle_AsyncWorker(MbPlaneInstance *_underlying,
                                                                       Napi::Promise::Deferred const &d, int s)
    : _underlying(_underlying), PromiseWorker(d), s(s){};

void PlaneInstance_SetStyle_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetStyle(s);

    ExitParallelRegion();
}

void PlaneInstance_SetStyle_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void PlaneInstance_SetStyle_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
PlaneInstance_GetStyle_AsyncWorker::PlaneInstance_GetStyle_AsyncWorker(MbPlaneInstance *_underlying,
                                                                       Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void PlaneInstance_GetStyle_AsyncWorker::Execute()
{
    EnterParallelRegion();

    int _result = _underlying->GetStyle();

    this->_result = _result;

    ExitParallelRegion();
}

void PlaneInstance_GetStyle_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    int _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void PlaneInstance_GetStyle_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
PlaneInstance_SetColor_AsyncWorker::PlaneInstance_SetColor_AsyncWorker(MbPlaneInstance *_underlying,
                                                                       Napi::Promise::Deferred const &d, uint32 c)
    : _underlying(_underlying), PromiseWorker(d), c(c){};

void PlaneInstance_SetColor_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetColor(c);

    ExitParallelRegion();
}

void PlaneInstance_SetColor_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void PlaneInstance_SetColor_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
PlaneInstance_GetColor_AsyncWorker::PlaneInstance_GetColor_AsyncWorker(MbPlaneInstance *_underlying,
                                                                       Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void PlaneInstance_GetColor_AsyncWorker::Execute()
{
    EnterParallelRegion();

    uint32 _result = _underlying->GetColor();

    this->_result = _result;

    ExitParallelRegion();
}

void PlaneInstance_GetColor_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    uint32 _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void PlaneInstance_GetColor_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
PlaneInstance_AttributesConvert_AsyncWorker::PlaneInstance_AttributesConvert_AsyncWorker(
    MbPlaneInstance *_underlying, Napi::Promise::Deferred const &d, MbGrid &other)
    : _underlying(_underlying), PromiseWorker(d), other(other){};

void PlaneInstance_AttributesConvert_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AttributesConvert(other);

    ExitParallelRegion();
}

void PlaneInstance_AttributesConvert_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void PlaneInstance_AttributesConvert_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                         Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
PlaneInstance_GetCreatorsCount_AsyncWorker::PlaneInstance_GetCreatorsCount_AsyncWorker(MbPlaneInstance *_underlying,
                                                                                       Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void PlaneInstance_GetCreatorsCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    size_t _result = _underlying->GetCreatorsCount();

    this->_result = _result;

    ExitParallelRegion();
}

void PlaneInstance_GetCreatorsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    size_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void PlaneInstance_GetCreatorsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                        Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
PlaneInstance_GetCreator_AsyncWorker::PlaneInstance_GetCreator_AsyncWorker(MbPlaneInstance *_underlying,
                                                                           Napi::Promise::Deferred const &d, size_t ind)
    : _underlying(_underlying), PromiseWorker(d), ind(ind){};

void PlaneInstance_GetCreator_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbCreator *_result = _underlying->GetCreator(ind);

    this->_result = _result;

    ExitParallelRegion();
}

void PlaneInstance_GetCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void PlaneInstance_GetCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
PlaneInstance_SetCreator_AsyncWorker::PlaneInstance_SetCreator_AsyncWorker(MbPlaneInstance *_underlying,
                                                                           Napi::Promise::Deferred const &d, size_t ind)
    : _underlying(_underlying), PromiseWorker(d), ind(ind){};

void PlaneInstance_SetCreator_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCreator *_result = _underlying->SetCreator(ind);

    this->_result = _result;

    ExitParallelRegion();
}

void PlaneInstance_SetCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void PlaneInstance_SetCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
PlaneInstance_DetachCreator_AsyncWorker::PlaneInstance_DetachCreator_AsyncWorker(MbPlaneInstance *_underlying,
                                                                                 Napi::Promise::Deferred const &d,
                                                                                 size_t ind)
    : _underlying(_underlying), PromiseWorker(d), ind(ind){};

void PlaneInstance_DetachCreator_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCreator *_result = _underlying->DetachCreator(ind);

    this->_result = _result;

    ExitParallelRegion();
}

void PlaneInstance_DetachCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void PlaneInstance_DetachCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
PlaneInstance_AddCreator_AsyncWorker::PlaneInstance_AddCreator_AsyncWorker(MbPlaneInstance *_underlying,
                                                                           Napi::Promise::Deferred const &d,
                                                                           const MbCreator *creator, bool addSame)
    : _underlying(_underlying), PromiseWorker(d), creator(creator), addSame(addSame){};

void PlaneInstance_AddCreator_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->AddCreator(creator, addSame);

    this->_result = _result;

    ExitParallelRegion();
}

void PlaneInstance_AddCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void PlaneInstance_AddCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
PlaneInstance_GetCreators_AsyncWorker::PlaneInstance_GetCreators_AsyncWorker(MbPlaneInstance *_underlying,
                                                                             Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void PlaneInstance_GetCreators_AsyncWorker::Execute()
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

void PlaneInstance_GetCreators_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void PlaneInstance_GetCreators_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
PlaneInstance_DeleteCreator_AsyncWorker::PlaneInstance_DeleteCreator_AsyncWorker(MbPlaneInstance *_underlying,
                                                                                 Napi::Promise::Deferred const &d,
                                                                                 size_t ind)
    : _underlying(_underlying), PromiseWorker(d), ind(ind){};

void PlaneInstance_DeleteCreator_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->DeleteCreator(ind);

    this->_result = _result;

    ExitParallelRegion();
}

void PlaneInstance_DeleteCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void PlaneInstance_DeleteCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
PlaneInstance_GetActiveCreatorsCount_AsyncWorker::PlaneInstance_GetActiveCreatorsCount_AsyncWorker(
    MbPlaneInstance *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void PlaneInstance_GetActiveCreatorsCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    size_t _result = _underlying->GetActiveCreatorsCount();

    this->_result = _result;

    ExitParallelRegion();
}

void PlaneInstance_GetActiveCreatorsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    size_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void PlaneInstance_GetActiveCreatorsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                              Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
