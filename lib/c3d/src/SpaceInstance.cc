// This is a generated file, modify: generate/templates/SpaceInstance.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/SpaceInstance.h"

#include "tool_mutex.h"

Napi::Object SpaceInstance::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func =
        DefineClass(env, "SpaceInstance",
                    {
                        InstanceMethod<&SpaceInstance::GetSpaceItem>("GetSpaceItem"),
                        InstanceMethod<&SpaceInstance::GetSpaceItem_async>("GetSpaceItem_async"),
                        InstanceMethod<&SpaceInstance::GetBasisPoints>("GetBasisPoints"),
                        InstanceMethod<&SpaceInstance::GetBasisPoints_async>("GetBasisPoints_async"),
                        InstanceMethod<&SpaceInstance::SetBasisPoints>("SetBasisPoints"),
                        InstanceMethod<&SpaceInstance::SetBasisPoints_async>("SetBasisPoints_async"),
                        InstanceMethod<&SpaceInstance::CreateMesh>("CreateMesh"),
                        InstanceMethod<&SpaceInstance::CreateMesh_async>("CreateMesh_async"),
                        InstanceMethod<&SpaceInstance::CalculateMesh>("CalculateMesh"),
                        InstanceMethod<&SpaceInstance::CalculateMesh_async>("CalculateMesh_async"),
                        InstanceMethod<&SpaceInstance::GetItemName>("GetItemName"),
                        InstanceMethod<&SpaceInstance::GetItemName_async>("GetItemName_async"),
                        InstanceMethod<&SpaceInstance::SetItemName>("SetItemName"),
                        InstanceMethod<&SpaceInstance::SetItemName_async>("SetItemName_async"),
                        InstanceMethod<&SpaceInstance::RebuildItem>("RebuildItem"),
                        InstanceMethod<&SpaceInstance::RebuildItem_async>("RebuildItem_async"),
                        InstanceMethod<&SpaceInstance::GetItemByPath>("GetItemByPath"),
                        InstanceMethod<&SpaceInstance::GetItemByPath_async>("GetItemByPath_async"),
                        InstanceMethod<&SpaceInstance::IsA>("IsA"),
                        InstanceMethod<&SpaceInstance::IsA_async>("IsA_async"),
                        InstanceMethod<&SpaceInstance::Type>("Type"),
                        InstanceMethod<&SpaceInstance::Type_async>("Type_async"),
                        InstanceMethod<&SpaceInstance::Family>("Family"),
                        InstanceMethod<&SpaceInstance::Family_async>("Family_async"),
                        InstanceMethod<&SpaceInstance::Transform>("Transform"),
                        InstanceMethod<&SpaceInstance::Transform_async>("Transform_async"),
                        InstanceMethod<&SpaceInstance::Move>("Move"),
                        InstanceMethod<&SpaceInstance::Move_async>("Move_async"),
                        InstanceMethod<&SpaceInstance::Rotate>("Rotate"),
                        InstanceMethod<&SpaceInstance::Rotate_async>("Rotate_async"),
                        InstanceMethod<&SpaceInstance::Refresh>("Refresh"),
                        InstanceMethod<&SpaceInstance::Refresh_async>("Refresh_async"),
                        InstanceMethod<&SpaceInstance::Duplicate>("Duplicate"),
                        InstanceMethod<&SpaceInstance::Duplicate_async>("Duplicate_async"),
                        InstanceMethod<&SpaceInstance::AddYourGabaritTo>("AddYourGabaritTo"),
                        InstanceMethod<&SpaceInstance::AddYourGabaritTo_async>("AddYourGabaritTo_async"),
                        InstanceMethod<&SpaceInstance::GetUseCount>("GetUseCount"),
                        InstanceMethod<&SpaceInstance::GetUseCount_async>("GetUseCount_async"),
                        InstanceMethod<&SpaceInstance::AddRef>("AddRef"),
                        InstanceMethod<&SpaceInstance::AddRef_async>("AddRef_async"),
                        InstanceMethod<&SpaceInstance::SetStyle>("SetStyle"),
                        InstanceMethod<&SpaceInstance::SetStyle_async>("SetStyle_async"),
                        InstanceMethod<&SpaceInstance::GetStyle>("GetStyle"),
                        InstanceMethod<&SpaceInstance::GetStyle_async>("GetStyle_async"),
                        InstanceMethod<&SpaceInstance::SetColor>("SetColor"),
                        InstanceMethod<&SpaceInstance::SetColor_async>("SetColor_async"),
                        InstanceMethod<&SpaceInstance::GetColor>("GetColor"),
                        InstanceMethod<&SpaceInstance::GetColor_async>("GetColor_async"),
                        InstanceMethod<&SpaceInstance::AttributesConvert>("AttributesConvert"),
                        InstanceMethod<&SpaceInstance::AttributesConvert_async>("AttributesConvert_async"),
                        InstanceMethod<&SpaceInstance::GetCreatorsCount>("GetCreatorsCount"),
                        InstanceMethod<&SpaceInstance::GetCreatorsCount_async>("GetCreatorsCount_async"),
                        InstanceMethod<&SpaceInstance::GetCreator>("GetCreator"),
                        InstanceMethod<&SpaceInstance::GetCreator_async>("GetCreator_async"),
                        InstanceMethod<&SpaceInstance::SetCreator>("SetCreator"),
                        InstanceMethod<&SpaceInstance::SetCreator_async>("SetCreator_async"),
                        InstanceMethod<&SpaceInstance::DetachCreator>("DetachCreator"),
                        InstanceMethod<&SpaceInstance::DetachCreator_async>("DetachCreator_async"),
                        InstanceMethod<&SpaceInstance::AddCreator>("AddCreator"),
                        InstanceMethod<&SpaceInstance::AddCreator_async>("AddCreator_async"),
                        InstanceMethod<&SpaceInstance::GetCreators>("GetCreators"),
                        InstanceMethod<&SpaceInstance::GetCreators_async>("GetCreators_async"),
                        InstanceMethod<&SpaceInstance::DeleteCreator>("DeleteCreator"),
                        InstanceMethod<&SpaceInstance::DeleteCreator_async>("DeleteCreator_async"),
                        InstanceMethod<&SpaceInstance::GetActiveCreatorsCount>("GetActiveCreatorsCount"),
                        InstanceMethod<&SpaceInstance::GetActiveCreatorsCount_async>("GetActiveCreatorsCount_async"),
                        InstanceMethod<&SpaceInstance::Id>("Id"),

                    });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("SpaceInstance", func);

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

SpaceInstance::SpaceInstance(const Napi::CallbackInfo &info) : Napi::ObjectWrap<SpaceInstance>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 1 && ((info[0].IsObject() && info[0].ToObject().InstanceOf(Surface::GetConstructor(env))))

    )
    {
        if (info[0].IsNull() || info[0].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'surf'").ThrowAsJavaScriptException();
            return;
        }
        const class Surface *surf_ = Surface::Unwrap(info[0].ToObject());

        MbSurface &surf = *surf_->_underlying;

        MbSpaceInstance *underlying = new MbSpaceInstance(surf);
        if (underlying == NULL)
        {
            Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
            return;
        }
        underlying->AddRef();
        this->_underlying = underlying;
    }
    else if (info.Length() == 1 && ((info[0].IsObject() && info[0].ToObject().InstanceOf(Curve3D::GetConstructor(env))))

    )
    {
        if (info[0].IsNull() || info[0].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'curve'").ThrowAsJavaScriptException();
            return;
        }
        const class Curve3D *curve_ = Curve3D::Unwrap(info[0].ToObject());

        MbCurve3D &curve = *curve_->_underlying;

        MbSpaceInstance *underlying = new MbSpaceInstance(curve);
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

Napi::Object SpaceInstance::NewInstance(Napi::Env env, MbSpaceInstance *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("SpaceInstance");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    SpaceInstance *unwrapped = SpaceInstance::Unwrap(inst);
    underlying->AddRef();
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function SpaceInstance::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("SpaceInstance");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value SpaceInstance::GetSpaceItem(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbSpaceItem *_result = _underlying->GetSpaceItem(

    );

    Napi::Value _to;

    if (_result != NULL)
    {
        _to = SpaceItem::NewInstance(env, (MbSpaceItem *)_result);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value SpaceInstance::GetSpaceItem_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SpaceInstance_GetSpaceItem_AsyncWorker *asyncWorker =
        new SpaceInstance_GetSpaceItem_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SpaceInstance::GetBasisPoints(const Napi::CallbackInfo &info)
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

Napi::Value SpaceInstance::GetBasisPoints_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SpaceInstance_GetBasisPoints_AsyncWorker *asyncWorker =
        new SpaceInstance_GetBasisPoints_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SpaceInstance::SetBasisPoints(const Napi::CallbackInfo &info)
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

Napi::Value SpaceInstance::SetBasisPoints_async(const Napi::CallbackInfo &info)
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

    SpaceInstance_SetBasisPoints_AsyncWorker *asyncWorker =
        new SpaceInstance_SetBasisPoints_AsyncWorker(_underlying, deferred,

                                                     cd);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SpaceInstance::CreateMesh(const Napi::CallbackInfo &info)
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

Napi::Value SpaceInstance::CreateMesh_async(const Napi::CallbackInfo &info)
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

    SpaceInstance_CreateMesh_AsyncWorker *asyncWorker = new SpaceInstance_CreateMesh_AsyncWorker(_underlying, deferred,

                                                                                                 stepData,

                                                                                                 note,

                                                                                                 iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SpaceInstance::CalculateMesh(const Napi::CallbackInfo &info)
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

Napi::Value SpaceInstance::CalculateMesh_async(const Napi::CallbackInfo &info)
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

    SpaceInstance_CalculateMesh_AsyncWorker *asyncWorker =
        new SpaceInstance_CalculateMesh_AsyncWorker(_underlying, deferred,

                                                    stepData,

                                                    note);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SpaceInstance::GetItemName(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    SimpleName _result = _underlying->GetItemName(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value SpaceInstance::GetItemName_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SpaceInstance_GetItemName_AsyncWorker *asyncWorker =
        new SpaceInstance_GetItemName_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SpaceInstance::SetItemName(const Napi::CallbackInfo &info)
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

Napi::Value SpaceInstance::SetItemName_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "SimpleName name is required."));
        return deferred.Promise();
    }

    int name = info[0].ToNumber().Int64Value();

    SpaceInstance_SetItemName_AsyncWorker *asyncWorker =
        new SpaceInstance_SetItemName_AsyncWorker(_underlying, deferred,

                                                  name);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SpaceInstance::RebuildItem(const Napi::CallbackInfo &info)
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

Napi::Value SpaceInstance::RebuildItem_async(const Napi::CallbackInfo &info)
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

    SpaceInstance_RebuildItem_AsyncWorker *asyncWorker =
        new SpaceInstance_RebuildItem_AsyncWorker(_underlying, deferred,

                                                  sameShell,

                                                  progInd);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SpaceInstance::GetItemByPath(const Napi::CallbackInfo &info)
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

Napi::Value SpaceInstance::GetItemByPath_async(const Napi::CallbackInfo &info)
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

    SpaceInstance_GetItemByPath_AsyncWorker *asyncWorker =
        new SpaceInstance_GetItemByPath_AsyncWorker(_underlying, deferred,

                                                    path,

                                                    ind,

                                                    from,

                                                    currInd);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SpaceInstance::IsA(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeSpaceType _result = _underlying->IsA(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value SpaceInstance::IsA_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SpaceInstance_IsA_AsyncWorker *asyncWorker = new SpaceInstance_IsA_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SpaceInstance::Type(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeSpaceType _result = _underlying->Type(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value SpaceInstance::Type_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SpaceInstance_Type_AsyncWorker *asyncWorker = new SpaceInstance_Type_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SpaceInstance::Family(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbeSpaceType _result = _underlying->Family(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value SpaceInstance::Family_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SpaceInstance_Family_AsyncWorker *asyncWorker = new SpaceInstance_Family_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SpaceInstance::Transform(const Napi::CallbackInfo &info)
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

Napi::Value SpaceInstance::Transform_async(const Napi::CallbackInfo &info)
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

    SpaceInstance_Transform_AsyncWorker *asyncWorker = new SpaceInstance_Transform_AsyncWorker(_underlying, deferred,

                                                                                               mat,

                                                                                               iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SpaceInstance::Move(const Napi::CallbackInfo &info)
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

Napi::Value SpaceInstance::Move_async(const Napi::CallbackInfo &info)
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

    SpaceInstance_Move_AsyncWorker *asyncWorker = new SpaceInstance_Move_AsyncWorker(_underlying, deferred,

                                                                                     v,

                                                                                     iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SpaceInstance::Rotate(const Napi::CallbackInfo &info)
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

Napi::Value SpaceInstance::Rotate_async(const Napi::CallbackInfo &info)
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

    SpaceInstance_Rotate_AsyncWorker *asyncWorker = new SpaceInstance_Rotate_AsyncWorker(_underlying, deferred,

                                                                                         axis,

                                                                                         angle,

                                                                                         iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SpaceInstance::Refresh(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->Refresh(

    );

    return env.Undefined();
}

Napi::Value SpaceInstance::Refresh_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SpaceInstance_Refresh_AsyncWorker *asyncWorker = new SpaceInstance_Refresh_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SpaceInstance::Duplicate(const Napi::CallbackInfo &info)
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

Napi::Value SpaceInstance::Duplicate_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    MbRegDuplicate *iReg = NULL;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        RegDuplicate *iReg_ = RegDuplicate::Unwrap(info[0].ToObject());
        iReg = iReg_->_underlying;
    }

    SpaceInstance_Duplicate_AsyncWorker *asyncWorker = new SpaceInstance_Duplicate_AsyncWorker(_underlying, deferred,

                                                                                               iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SpaceInstance::AddYourGabaritTo(const Napi::CallbackInfo &info)
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

Napi::Value SpaceInstance::AddYourGabaritTo_async(const Napi::CallbackInfo &info)
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

    SpaceInstance_AddYourGabaritTo_AsyncWorker *asyncWorker =
        new SpaceInstance_AddYourGabaritTo_AsyncWorker(_underlying, deferred,

                                                       cube);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SpaceInstance::GetUseCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    refcount_t _result = _underlying->GetUseCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value SpaceInstance::GetUseCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SpaceInstance_GetUseCount_AsyncWorker *asyncWorker =
        new SpaceInstance_GetUseCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SpaceInstance::AddRef(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->AddRef(

    );

    return env.Undefined();
}

Napi::Value SpaceInstance::AddRef_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SpaceInstance_AddRef_AsyncWorker *asyncWorker = new SpaceInstance_AddRef_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SpaceInstance::SetStyle(const Napi::CallbackInfo &info)
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

Napi::Value SpaceInstance::SetStyle_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "int s is required."));
        return deferred.Promise();
    }

    int s = info[0].ToNumber().Int64Value();

    SpaceInstance_SetStyle_AsyncWorker *asyncWorker = new SpaceInstance_SetStyle_AsyncWorker(_underlying, deferred,

                                                                                             s);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SpaceInstance::GetStyle(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    int _result = _underlying->GetStyle(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value SpaceInstance::GetStyle_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SpaceInstance_GetStyle_AsyncWorker *asyncWorker = new SpaceInstance_GetStyle_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SpaceInstance::SetColor(const Napi::CallbackInfo &info)
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

Napi::Value SpaceInstance::SetColor_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "uint32 c is required."));
        return deferred.Promise();
    }

    int c = info[0].ToNumber().Int64Value();

    SpaceInstance_SetColor_AsyncWorker *asyncWorker = new SpaceInstance_SetColor_AsyncWorker(_underlying, deferred,

                                                                                             c);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SpaceInstance::GetColor(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    uint32 _result = _underlying->GetColor(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value SpaceInstance::GetColor_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SpaceInstance_GetColor_AsyncWorker *asyncWorker = new SpaceInstance_GetColor_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SpaceInstance::AttributesConvert(const Napi::CallbackInfo &info)
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

Napi::Value SpaceInstance::AttributesConvert_async(const Napi::CallbackInfo &info)
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

    SpaceInstance_AttributesConvert_AsyncWorker *asyncWorker =
        new SpaceInstance_AttributesConvert_AsyncWorker(_underlying, deferred,

                                                        other);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SpaceInstance::GetCreatorsCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    size_t _result = _underlying->GetCreatorsCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value SpaceInstance::GetCreatorsCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SpaceInstance_GetCreatorsCount_AsyncWorker *asyncWorker =
        new SpaceInstance_GetCreatorsCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SpaceInstance::GetCreator(const Napi::CallbackInfo &info)
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

Napi::Value SpaceInstance::GetCreator_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number ind is required."));
        return deferred.Promise();
    }

    size_t ind = info[0].ToNumber().Int64Value();

    SpaceInstance_GetCreator_AsyncWorker *asyncWorker = new SpaceInstance_GetCreator_AsyncWorker(_underlying, deferred,

                                                                                                 ind);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SpaceInstance::SetCreator(const Napi::CallbackInfo &info)
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

Napi::Value SpaceInstance::SetCreator_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number ind is required."));
        return deferred.Promise();
    }

    size_t ind = info[0].ToNumber().Int64Value();

    SpaceInstance_SetCreator_AsyncWorker *asyncWorker = new SpaceInstance_SetCreator_AsyncWorker(_underlying, deferred,

                                                                                                 ind);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SpaceInstance::DetachCreator(const Napi::CallbackInfo &info)
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

Napi::Value SpaceInstance::DetachCreator_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number ind is required."));
        return deferred.Promise();
    }

    size_t ind = info[0].ToNumber().Int64Value();

    SpaceInstance_DetachCreator_AsyncWorker *asyncWorker =
        new SpaceInstance_DetachCreator_AsyncWorker(_underlying, deferred,

                                                    ind);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SpaceInstance::AddCreator(const Napi::CallbackInfo &info)
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

Napi::Value SpaceInstance::AddCreator_async(const Napi::CallbackInfo &info)
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

    SpaceInstance_AddCreator_AsyncWorker *asyncWorker = new SpaceInstance_AddCreator_AsyncWorker(_underlying, deferred,

                                                                                                 creator,

                                                                                                 addSame);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SpaceInstance::GetCreators(const Napi::CallbackInfo &info)
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

Napi::Value SpaceInstance::GetCreators_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SpaceInstance_GetCreators_AsyncWorker *asyncWorker =
        new SpaceInstance_GetCreators_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SpaceInstance::DeleteCreator(const Napi::CallbackInfo &info)
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

Napi::Value SpaceInstance::DeleteCreator_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number ind is required."));
        return deferred.Promise();
    }

    size_t ind = info[0].ToNumber().Int64Value();

    SpaceInstance_DeleteCreator_AsyncWorker *asyncWorker =
        new SpaceInstance_DeleteCreator_AsyncWorker(_underlying, deferred,

                                                    ind);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value SpaceInstance::GetActiveCreatorsCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    size_t _result = _underlying->GetActiveCreatorsCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value SpaceInstance::GetActiveCreatorsCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    SpaceInstance_GetActiveCreatorsCount_AsyncWorker *asyncWorker =
        new SpaceInstance_GetActiveCreatorsCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value SpaceInstance::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

SpaceInstance::~SpaceInstance()
{
    // std::cout << "calling ::DeleteItem on SpaceInstance for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

SpaceInstance_GetSpaceItem_AsyncWorker::SpaceInstance_GetSpaceItem_AsyncWorker(MbSpaceInstance *_underlying,
                                                                               Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SpaceInstance_GetSpaceItem_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbSpaceItem *_result = _underlying->GetSpaceItem();

    this->_result = _result;

    ExitParallelRegion();
}

void SpaceInstance_GetSpaceItem_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbSpaceItem *_result = this->_result;
    if (_result != NULL)
    {
        _to = SpaceItem::NewInstance(env, (MbSpaceItem *)_result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void SpaceInstance_GetSpaceItem_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SpaceInstance_GetBasisPoints_AsyncWorker::SpaceInstance_GetBasisPoints_AsyncWorker(MbSpaceInstance *_underlying,
                                                                                   Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SpaceInstance_GetBasisPoints_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbControlData3D *cd = new MbControlData3D;

    _underlying->GetBasisPoints(*cd);

    this->cd = cd;

    ExitParallelRegion();
}

void SpaceInstance_GetBasisPoints_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void SpaceInstance_GetBasisPoints_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SpaceInstance_SetBasisPoints_AsyncWorker::SpaceInstance_SetBasisPoints_AsyncWorker(MbSpaceInstance *_underlying,
                                                                                   Napi::Promise::Deferred const &d,
                                                                                   const MbControlData3D &cd)
    : _underlying(_underlying), PromiseWorker(d), cd(cd){};

void SpaceInstance_SetBasisPoints_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetBasisPoints(cd);

    ExitParallelRegion();
}

void SpaceInstance_SetBasisPoints_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void SpaceInstance_SetBasisPoints_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SpaceInstance_CreateMesh_AsyncWorker::SpaceInstance_CreateMesh_AsyncWorker(MbSpaceInstance *_underlying,
                                                                           Napi::Promise::Deferred const &d,
                                                                           const MbStepData &stepData,
                                                                           const MbFormNote &note, MbRegDuplicate *iReg)
    : _underlying(_underlying), PromiseWorker(d), stepData(stepData), note(note), iReg(iReg){};

void SpaceInstance_CreateMesh_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbItem *_result = _underlying->CreateMesh(stepData, note, iReg);

    this->_result = _result;

    ExitParallelRegion();
}

void SpaceInstance_CreateMesh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void SpaceInstance_CreateMesh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SpaceInstance_CalculateMesh_AsyncWorker::SpaceInstance_CalculateMesh_AsyncWorker(MbSpaceInstance *_underlying,
                                                                                 Napi::Promise::Deferred const &d,
                                                                                 const MbStepData &stepData,
                                                                                 const MbFormNote &note)
    : _underlying(_underlying), PromiseWorker(d), stepData(stepData), note(note){};

void SpaceInstance_CalculateMesh_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbMesh *mesh = new MbMesh;

    _underlying->CalculateMesh(stepData, note, *mesh);

    this->mesh = mesh;

    ExitParallelRegion();
}

void SpaceInstance_CalculateMesh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void SpaceInstance_CalculateMesh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SpaceInstance_GetItemName_AsyncWorker::SpaceInstance_GetItemName_AsyncWorker(MbSpaceInstance *_underlying,
                                                                             Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SpaceInstance_GetItemName_AsyncWorker::Execute()
{
    EnterParallelRegion();

    SimpleName _result = _underlying->GetItemName();

    this->_result = _result;

    ExitParallelRegion();
}

void SpaceInstance_GetItemName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    SimpleName _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void SpaceInstance_GetItemName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SpaceInstance_SetItemName_AsyncWorker::SpaceInstance_SetItemName_AsyncWorker(MbSpaceInstance *_underlying,
                                                                             Napi::Promise::Deferred const &d,
                                                                             SimpleName name)
    : _underlying(_underlying), PromiseWorker(d), name(name){};

void SpaceInstance_SetItemName_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetItemName(name);

    ExitParallelRegion();
}

void SpaceInstance_SetItemName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void SpaceInstance_SetItemName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SpaceInstance_RebuildItem_AsyncWorker::SpaceInstance_RebuildItem_AsyncWorker(MbSpaceInstance *_underlying,
                                                                             Napi::Promise::Deferred const &d,
                                                                             MbeCopyMode sameShell,
                                                                             ProgressIndicator *progInd)
    : _underlying(_underlying), PromiseWorker(d), sameShell(sameShell), progInd(progInd){};

void SpaceInstance_RebuildItem_AsyncWorker::Execute()
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

void SpaceInstance_RebuildItem_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void SpaceInstance_RebuildItem_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SpaceInstance_GetItemByPath_AsyncWorker::SpaceInstance_GetItemByPath_AsyncWorker(MbSpaceInstance *_underlying,
                                                                                 Napi::Promise::Deferred const &d,
                                                                                 const MbPath &path, size_t ind,
                                                                                 MbMatrix3D &from, size_t currInd)
    : _underlying(_underlying), PromiseWorker(d), path(path), ind(ind), from(from), currInd(currInd){};

void SpaceInstance_GetItemByPath_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbItem *_result = _underlying->GetItemByPath(path, ind, from, currInd);

    this->_result = _result;

    ExitParallelRegion();
}

void SpaceInstance_GetItemByPath_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void SpaceInstance_GetItemByPath_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SpaceInstance_IsA_AsyncWorker::SpaceInstance_IsA_AsyncWorker(MbSpaceInstance *_underlying,
                                                             Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SpaceInstance_IsA_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeSpaceType _result = _underlying->IsA();

    this->_result = _result;

    ExitParallelRegion();
}

void SpaceInstance_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeSpaceType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void SpaceInstance_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SpaceInstance_Type_AsyncWorker::SpaceInstance_Type_AsyncWorker(MbSpaceInstance *_underlying,
                                                               Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SpaceInstance_Type_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeSpaceType _result = _underlying->Type();

    this->_result = _result;

    ExitParallelRegion();
}

void SpaceInstance_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeSpaceType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void SpaceInstance_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SpaceInstance_Family_AsyncWorker::SpaceInstance_Family_AsyncWorker(MbSpaceInstance *_underlying,
                                                                   Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SpaceInstance_Family_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbeSpaceType _result = _underlying->Family();

    this->_result = _result;

    ExitParallelRegion();
}

void SpaceInstance_Family_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbeSpaceType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void SpaceInstance_Family_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SpaceInstance_Transform_AsyncWorker::SpaceInstance_Transform_AsyncWorker(MbSpaceInstance *_underlying,
                                                                         Napi::Promise::Deferred const &d,
                                                                         const MbMatrix3D &mat, MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), mat(mat), iReg(iReg){};

void SpaceInstance_Transform_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Transform(mat, iReg);

    ExitParallelRegion();
}

void SpaceInstance_Transform_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void SpaceInstance_Transform_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SpaceInstance_Move_AsyncWorker::SpaceInstance_Move_AsyncWorker(MbSpaceInstance *_underlying,
                                                               Napi::Promise::Deferred const &d, const MbVector3D &v,
                                                               MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), v(v), iReg(iReg){};

void SpaceInstance_Move_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Move(v, iReg);

    ExitParallelRegion();
}

void SpaceInstance_Move_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void SpaceInstance_Move_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SpaceInstance_Rotate_AsyncWorker::SpaceInstance_Rotate_AsyncWorker(MbSpaceInstance *_underlying,
                                                                   Napi::Promise::Deferred const &d,
                                                                   const MbAxis3D &axis, double angle,
                                                                   MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), axis(axis), angle(angle), iReg(iReg){};

void SpaceInstance_Rotate_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Rotate(axis, angle, iReg);

    ExitParallelRegion();
}

void SpaceInstance_Rotate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void SpaceInstance_Rotate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SpaceInstance_Refresh_AsyncWorker::SpaceInstance_Refresh_AsyncWorker(MbSpaceInstance *_underlying,
                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SpaceInstance_Refresh_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Refresh();

    ExitParallelRegion();
}

void SpaceInstance_Refresh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void SpaceInstance_Refresh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SpaceInstance_Duplicate_AsyncWorker::SpaceInstance_Duplicate_AsyncWorker(MbSpaceInstance *_underlying,
                                                                         Napi::Promise::Deferred const &d,
                                                                         MbRegDuplicate *iReg)
    : _underlying(_underlying), PromiseWorker(d), iReg(iReg){};

void SpaceInstance_Duplicate_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbSpaceItem &_result = _underlying->Duplicate(iReg);

    this->_result = (MbSpaceItem *)&(_result);

    ExitParallelRegion();
}

void SpaceInstance_Duplicate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbSpaceItem *_result = this->_result;
    _to = SpaceItem::NewInstance(env, (MbSpaceItem *)&(_result));

    deferred.Resolve(_to);
}

void SpaceInstance_Duplicate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SpaceInstance_AddYourGabaritTo_AsyncWorker::SpaceInstance_AddYourGabaritTo_AsyncWorker(MbSpaceInstance *_underlying,
                                                                                       Napi::Promise::Deferred const &d,
                                                                                       MbCube &cube)
    : _underlying(_underlying), PromiseWorker(d), cube(cube){};

void SpaceInstance_AddYourGabaritTo_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddYourGabaritTo(cube);

    ExitParallelRegion();
}

void SpaceInstance_AddYourGabaritTo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void SpaceInstance_AddYourGabaritTo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                        Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SpaceInstance_GetUseCount_AsyncWorker::SpaceInstance_GetUseCount_AsyncWorker(MbSpaceInstance *_underlying,
                                                                             Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SpaceInstance_GetUseCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    refcount_t _result = _underlying->GetUseCount();

    this->_result = _result;

    ExitParallelRegion();
}

void SpaceInstance_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    refcount_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void SpaceInstance_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SpaceInstance_AddRef_AsyncWorker::SpaceInstance_AddRef_AsyncWorker(MbSpaceInstance *_underlying,
                                                                   Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SpaceInstance_AddRef_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddRef();

    ExitParallelRegion();
}

void SpaceInstance_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void SpaceInstance_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SpaceInstance_SetStyle_AsyncWorker::SpaceInstance_SetStyle_AsyncWorker(MbSpaceInstance *_underlying,
                                                                       Napi::Promise::Deferred const &d, int s)
    : _underlying(_underlying), PromiseWorker(d), s(s){};

void SpaceInstance_SetStyle_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetStyle(s);

    ExitParallelRegion();
}

void SpaceInstance_SetStyle_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void SpaceInstance_SetStyle_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SpaceInstance_GetStyle_AsyncWorker::SpaceInstance_GetStyle_AsyncWorker(MbSpaceInstance *_underlying,
                                                                       Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SpaceInstance_GetStyle_AsyncWorker::Execute()
{
    EnterParallelRegion();

    int _result = _underlying->GetStyle();

    this->_result = _result;

    ExitParallelRegion();
}

void SpaceInstance_GetStyle_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    int _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void SpaceInstance_GetStyle_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SpaceInstance_SetColor_AsyncWorker::SpaceInstance_SetColor_AsyncWorker(MbSpaceInstance *_underlying,
                                                                       Napi::Promise::Deferred const &d, uint32 c)
    : _underlying(_underlying), PromiseWorker(d), c(c){};

void SpaceInstance_SetColor_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->SetColor(c);

    ExitParallelRegion();
}

void SpaceInstance_SetColor_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void SpaceInstance_SetColor_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SpaceInstance_GetColor_AsyncWorker::SpaceInstance_GetColor_AsyncWorker(MbSpaceInstance *_underlying,
                                                                       Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SpaceInstance_GetColor_AsyncWorker::Execute()
{
    EnterParallelRegion();

    uint32 _result = _underlying->GetColor();

    this->_result = _result;

    ExitParallelRegion();
}

void SpaceInstance_GetColor_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    uint32 _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void SpaceInstance_GetColor_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SpaceInstance_AttributesConvert_AsyncWorker::SpaceInstance_AttributesConvert_AsyncWorker(
    MbSpaceInstance *_underlying, Napi::Promise::Deferred const &d, MbGrid &other)
    : _underlying(_underlying), PromiseWorker(d), other(other){};

void SpaceInstance_AttributesConvert_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AttributesConvert(other);

    ExitParallelRegion();
}

void SpaceInstance_AttributesConvert_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void SpaceInstance_AttributesConvert_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                         Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SpaceInstance_GetCreatorsCount_AsyncWorker::SpaceInstance_GetCreatorsCount_AsyncWorker(MbSpaceInstance *_underlying,
                                                                                       Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SpaceInstance_GetCreatorsCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    size_t _result = _underlying->GetCreatorsCount();

    this->_result = _result;

    ExitParallelRegion();
}

void SpaceInstance_GetCreatorsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    size_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void SpaceInstance_GetCreatorsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                        Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SpaceInstance_GetCreator_AsyncWorker::SpaceInstance_GetCreator_AsyncWorker(MbSpaceInstance *_underlying,
                                                                           Napi::Promise::Deferred const &d, size_t ind)
    : _underlying(_underlying), PromiseWorker(d), ind(ind){};

void SpaceInstance_GetCreator_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbCreator *_result = _underlying->GetCreator(ind);

    this->_result = _result;

    ExitParallelRegion();
}

void SpaceInstance_GetCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void SpaceInstance_GetCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SpaceInstance_SetCreator_AsyncWorker::SpaceInstance_SetCreator_AsyncWorker(MbSpaceInstance *_underlying,
                                                                           Napi::Promise::Deferred const &d, size_t ind)
    : _underlying(_underlying), PromiseWorker(d), ind(ind){};

void SpaceInstance_SetCreator_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCreator *_result = _underlying->SetCreator(ind);

    this->_result = _result;

    ExitParallelRegion();
}

void SpaceInstance_SetCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void SpaceInstance_SetCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SpaceInstance_DetachCreator_AsyncWorker::SpaceInstance_DetachCreator_AsyncWorker(MbSpaceInstance *_underlying,
                                                                                 Napi::Promise::Deferred const &d,
                                                                                 size_t ind)
    : _underlying(_underlying), PromiseWorker(d), ind(ind){};

void SpaceInstance_DetachCreator_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbCreator *_result = _underlying->DetachCreator(ind);

    this->_result = _result;

    ExitParallelRegion();
}

void SpaceInstance_DetachCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void SpaceInstance_DetachCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SpaceInstance_AddCreator_AsyncWorker::SpaceInstance_AddCreator_AsyncWorker(MbSpaceInstance *_underlying,
                                                                           Napi::Promise::Deferred const &d,
                                                                           const MbCreator *creator, bool addSame)
    : _underlying(_underlying), PromiseWorker(d), creator(creator), addSame(addSame){};

void SpaceInstance_AddCreator_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->AddCreator(creator, addSame);

    this->_result = _result;

    ExitParallelRegion();
}

void SpaceInstance_AddCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void SpaceInstance_AddCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SpaceInstance_GetCreators_AsyncWorker::SpaceInstance_GetCreators_AsyncWorker(MbSpaceInstance *_underlying,
                                                                             Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SpaceInstance_GetCreators_AsyncWorker::Execute()
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

void SpaceInstance_GetCreators_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
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

void SpaceInstance_GetCreators_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SpaceInstance_DeleteCreator_AsyncWorker::SpaceInstance_DeleteCreator_AsyncWorker(MbSpaceInstance *_underlying,
                                                                                 Napi::Promise::Deferred const &d,
                                                                                 size_t ind)
    : _underlying(_underlying), PromiseWorker(d), ind(ind){};

void SpaceInstance_DeleteCreator_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = _underlying->DeleteCreator(ind);

    this->_result = _result;

    ExitParallelRegion();
}

void SpaceInstance_DeleteCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void SpaceInstance_DeleteCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
SpaceInstance_GetActiveCreatorsCount_AsyncWorker::SpaceInstance_GetActiveCreatorsCount_AsyncWorker(
    MbSpaceInstance *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void SpaceInstance_GetActiveCreatorsCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    size_t _result = _underlying->GetActiveCreatorsCount();

    this->_result = _result;

    ExitParallelRegion();
}

void SpaceInstance_GetActiveCreatorsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    size_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void SpaceInstance_GetActiveCreatorsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                              Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
