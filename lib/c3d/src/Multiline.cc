// This is a generated file, modify: generate/templates/Multiline.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/Multiline.h"

#include "tool_mutex.h"

Napi::Object Multiline::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(env, "Multiline",
                                      {
                                          InstanceMethod<&Multiline::GetBegTipCurve>("GetBegTipCurve"),
                                          InstanceMethod<&Multiline::GetBegTipCurve_async>("GetBegTipCurve_async"),
                                          InstanceMethod<&Multiline::GetEndTipCurve>("GetEndTipCurve"),
                                          InstanceMethod<&Multiline::GetEndTipCurve_async>("GetEndTipCurve_async"),
                                          InstanceMethod<&Multiline::GetCurvesCount>("GetCurvesCount"),
                                          InstanceMethod<&Multiline::GetCurvesCount_async>("GetCurvesCount_async"),
                                          InstanceMethod<&Multiline::GetCurve>("GetCurve"),
                                          InstanceMethod<&Multiline::GetCurve_async>("GetCurve_async"),
                                          InstanceMethod<&Multiline::IsA>("IsA"),
                                          InstanceMethod<&Multiline::IsA_async>("IsA_async"),
                                          InstanceMethod<&Multiline::Type>("Type"),
                                          InstanceMethod<&Multiline::Type_async>("Type_async"),
                                          InstanceMethod<&Multiline::Family>("Family"),
                                          InstanceMethod<&Multiline::Family_async>("Family_async"),
                                          InstanceMethod<&Multiline::Move>("Move"),
                                          InstanceMethod<&Multiline::Move_async>("Move_async"),
                                          InstanceMethod<&Multiline::Transform>("Transform"),
                                          InstanceMethod<&Multiline::Transform_async>("Transform_async"),
                                          InstanceMethod<&Multiline::Duplicate>("Duplicate"),
                                          InstanceMethod<&Multiline::Duplicate_async>("Duplicate_async"),
                                          InstanceMethod<&Multiline::AddYourGabaritTo>("AddYourGabaritTo"),
                                          InstanceMethod<&Multiline::AddYourGabaritTo_async>("AddYourGabaritTo_async"),
                                          InstanceMethod<&Multiline::GetUseCount>("GetUseCount"),
                                          InstanceMethod<&Multiline::GetUseCount_async>("GetUseCount_async"),
                                          InstanceMethod<&Multiline::AddRef>("AddRef"),
                                          InstanceMethod<&Multiline::AddRef_async>("AddRef_async"),
                                          InstanceMethod<&Multiline::Id>("Id"),

                                      });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Multiline", func);

    Napi::Object global = env.Global();
    Napi::Object Object = global.Get("Object").ToObject();
    Napi::Function setPrototypeOf = Napi::Function(env, Object.Get("setPrototypeOf"));
    Napi::Value prototype = func.Get("prototype");

    Napi::Function superFunc = PlaneItem::GetConstructor(env);
    Napi::FunctionReference *superConstructor = new Napi::FunctionReference();
    *superConstructor = Napi::Persistent(superFunc);

    Napi::Value superPrototype = superFunc.Get("prototype");
    setPrototypeOf.Call({prototype, superPrototype});
    setPrototypeOf.Call({func, superFunc});

    return exports;
}

Multiline::Multiline(const Napi::CallbackInfo &info) : Napi::ObjectWrap<Multiline>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    if (info.Length() == 0

    )
    {

        MbMultiline *underlying = new MbMultiline();
        if (underlying == NULL)
        {
            Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
            return;
        }
        underlying->AddRef();
        this->_underlying = underlying;
    }
    else if (info.Length() == 7 &&
             ((info[0].IsObject() && info[0].ToObject().InstanceOf(Contour::GetConstructor(env)))) &&
             ((info[1].IsObject() && info[1].ToObject().InstanceOf(VertexOfMultilineInfo::GetConstructor(env)))) &&
             ((info[2].IsArray())) &&
             ((info[3].IsObject() && info[3].ToObject().InstanceOf(MLTipParams::GetConstructor(env)))) &&
             ((info[4].IsObject() && info[4].ToObject().InstanceOf(MLTipParams::GetConstructor(env)))) &&
             ((info[5].IsBoolean())) && ((info[6].IsBoolean()))

    )
    {
        if (info[0].IsNull() || info[0].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter '_basisCurve'").ThrowAsJavaScriptException();
            return;
        }
        const class Contour *_basisCurve_ = Contour::Unwrap(info[0].ToObject());

        const MbContour &_basisCurve = *_basisCurve_->_underlying;

        if (info[1].IsNull() || info[1].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter 'vertInfo'").ThrowAsJavaScriptException();
            return;
        }
        const class VertexOfMultilineInfo *vertInfo_ = VertexOfMultilineInfo::Unwrap(info[1].ToObject());

        const StVertexOfMultilineInfo &vertInfo = *vertInfo_->_underlying;

        SArray<double> _equidRadii;
        if (!(info[2].IsNull() || info[2].IsUndefined()))
        {
            const Napi::Array _equidRadii_ = Napi::Array(env, info[2]);
            _equidRadii = SArray<double>(_equidRadii_.Length(), 1);

            for (size_t i = 0; i < _equidRadii_.Length(); i++)
            {
                if (_equidRadii_[i].IsNull() || _equidRadii_[i].IsUndefined())
                {
                    std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at ["
                              << i << "]. This is probably a mistake, so skipping\n";
                    continue;
                }
                if (!_equidRadii_[i].IsNumber())
                {
                    Napi::Error::New(env, "number _equidRadii is required.").ThrowAsJavaScriptException();
                    return;
                }
                else
                {
                    _equidRadii.Add(_equidRadii_[i].ToNumber().DoubleValue());
                }
            }
        }

        if (info[3].IsNull() || info[3].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter '_begTipParams'")
                .ThrowAsJavaScriptException();
            return;
        }
        const class MLTipParams *_begTipParams_ = MLTipParams::Unwrap(info[3].ToObject());

        const StMLTipParams &_begTipParams = *_begTipParams_->_underlying;

        if (info[4].IsNull() || info[4].IsUndefined())
        {
            Napi::Error::New(env, "Passed null for non-optional parameter '_endTipParams'")
                .ThrowAsJavaScriptException();
            return;
        }
        const class MLTipParams *_endTipParams_ = MLTipParams::Unwrap(info[4].ToObject());

        const StMLTipParams &_endTipParams = *_endTipParams_->_underlying;

        bool _processClosed = info[5].ToBoolean();

        bool _isTransparent = info[6].ToBoolean();

        MbMultiline *underlying = new MbMultiline(_basisCurve, vertInfo, _equidRadii, _begTipParams, _endTipParams,
                                                  _processClosed, _isTransparent);
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

Napi::Object Multiline::NewInstance(Napi::Env env, MbMultiline *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Multiline");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Multiline *unwrapped = Multiline::Unwrap(inst);
    underlying->AddRef();
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Multiline::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Multiline");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value Multiline::GetBegTipCurve(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbContour *_result = _underlying->GetBegTipCurve(

    );

    Napi::Value _to;

    if (_result != NULL)
    {
        _to = Contour::NewInstance(env, (MbContour *)_result);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value Multiline::GetBegTipCurve_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Multiline_GetBegTipCurve_AsyncWorker *asyncWorker = new Multiline_GetBegTipCurve_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Multiline::GetEndTipCurve(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    const MbContour *_result = _underlying->GetEndTipCurve(

    );

    Napi::Value _to;

    if (_result != NULL)
    {
        _to = Contour::NewInstance(env, (MbContour *)_result);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value Multiline::GetEndTipCurve_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Multiline_GetEndTipCurve_AsyncWorker *asyncWorker = new Multiline_GetEndTipCurve_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Multiline::GetCurvesCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    size_t _result = _underlying->GetCurvesCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Multiline::GetCurvesCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Multiline_GetCurvesCount_AsyncWorker *asyncWorker = new Multiline_GetCurvesCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Multiline::GetCurve(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number i is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    size_t i = info[0].ToNumber().Int64Value();

    const MbContourWithBreaks *_result = _underlying->GetCurve(i

    );

    Napi::Value _to;

    if (_result != NULL)
    {
        _to = ContourWithBreaks::NewInstance(env, (MbContourWithBreaks *)_result);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value Multiline::GetCurve_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number i is required."));
        return deferred.Promise();
    }

    size_t i = info[0].ToNumber().Int64Value();

    Multiline_GetCurve_AsyncWorker *asyncWorker = new Multiline_GetCurve_AsyncWorker(_underlying, deferred,

                                                                                     i);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Multiline::IsA(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbePlaneType _result = _underlying->IsA(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Multiline::IsA_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Multiline_IsA_AsyncWorker *asyncWorker = new Multiline_IsA_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Multiline::Type(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbePlaneType _result = _underlying->Type(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Multiline::Type_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Multiline_Type_AsyncWorker *asyncWorker = new Multiline_Type_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Multiline::Family(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbePlaneType _result = _underlying->Family(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Multiline::Family_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Multiline_Family_AsyncWorker *asyncWorker = new Multiline_Family_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Multiline::Move(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Vector::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Vector to is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    const MbSurface *newSurface = NULL;

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'to'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Vector *to_ = Vector::Unwrap(info[0].ToObject());

    const MbVector &to = *to_->_underlying;

    MbRegTransform *iReg = NULL;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
        iReg = iReg_->_underlying;
    }

    _underlying->Move(to, info.Length() == 1 || info[1].IsNull() ? NULL : iReg,
                      info.Length() == 2 || info[2].IsNull() ? NULL : newSurface

    );

    Napi::Value _to;

    if (newSurface != NULL)
    {
        _to = Surface::NewInstance(env, (MbSurface *)newSurface);
    }
    else
    {
        _to = env.Null();
    }

    return _to;
}

Napi::Value Multiline::Move_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Vector::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Vector to is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'to'"));
        return deferred.Promise();
    }
    const class Vector *to_ = Vector::Unwrap(info[0].ToObject());

    const MbVector &to = *to_->_underlying;

    MbRegTransform *iReg = NULL;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
        iReg = iReg_->_underlying;
    }

    Multiline_Move_AsyncWorker *asyncWorker = new Multiline_Move_AsyncWorker(_underlying, deferred,

                                                                             to,

                                                                             iReg);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Multiline::Transform(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Matrix::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Matrix matr is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'matr'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Matrix *matr_ = Matrix::Unwrap(info[0].ToObject());

    const MbMatrix &matr = *matr_->_underlying;

    MbRegTransform *iReg = NULL;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
        iReg = iReg_->_underlying;
    }

    MbSurface *newSurface = NULL;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        Surface *newSurface_ = Surface::Unwrap(info[2].ToObject());
        newSurface = newSurface_->_underlying;
    }

    _underlying->Transform(matr, info.Length() == 1 || info[1].IsNull() ? NULL : iReg,
                           info.Length() == 2 || info[2].IsNull() ? NULL : newSurface

    );

    return env.Undefined();
}

Napi::Value Multiline::Transform_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Matrix::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Matrix matr is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'matr'"));
        return deferred.Promise();
    }
    const class Matrix *matr_ = Matrix::Unwrap(info[0].ToObject());

    const MbMatrix &matr = *matr_->_underlying;

    MbRegTransform *iReg = NULL;
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
        iReg = iReg_->_underlying;
    }

    MbSurface *newSurface = NULL;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        Surface *newSurface_ = Surface::Unwrap(info[2].ToObject());
        newSurface = newSurface_->_underlying;
    }

    Multiline_Transform_AsyncWorker *asyncWorker = new Multiline_Transform_AsyncWorker(_underlying, deferred,

                                                                                       matr,

                                                                                       iReg,

                                                                                       newSurface);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Multiline::Duplicate(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    MbRegDuplicate *dup = NULL;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        RegDuplicate *dup_ = RegDuplicate::Unwrap(info[0].ToObject());
        dup = dup_->_underlying;
    }

    MbPlaneItem &_result = _underlying->Duplicate(info.Length() == 0 || info[0].IsNull() ? NULL : dup

    );

    Napi::Value _to;

    _to = PlaneItem::NewInstance(env, (MbPlaneItem *)&(_result));

    return _to;
}

Napi::Value Multiline::Duplicate_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    MbRegDuplicate *dup = NULL;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        RegDuplicate *dup_ = RegDuplicate::Unwrap(info[0].ToObject());
        dup = dup_->_underlying;
    }

    Multiline_Duplicate_AsyncWorker *asyncWorker = new Multiline_Duplicate_AsyncWorker(_underlying, deferred,

                                                                                       dup);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Multiline::AddYourGabaritTo(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Rect::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Rect rect is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'rect'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Rect *rect_ = Rect::Unwrap(info[0].ToObject());

    MbRect &rect = *rect_->_underlying;

    _underlying->AddYourGabaritTo(rect

    );

    return env.Undefined();
}

Napi::Value Multiline::AddYourGabaritTo_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Rect::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Rect rect is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'rect'"));
        return deferred.Promise();
    }
    const class Rect *rect_ = Rect::Unwrap(info[0].ToObject());

    MbRect &rect = *rect_->_underlying;

    Multiline_AddYourGabaritTo_AsyncWorker *asyncWorker =
        new Multiline_AddYourGabaritTo_AsyncWorker(_underlying, deferred,

                                                   rect);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Multiline::GetUseCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    refcount_t _result = _underlying->GetUseCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Multiline::GetUseCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Multiline_GetUseCount_AsyncWorker *asyncWorker = new Multiline_GetUseCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Multiline::AddRef(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    _underlying->AddRef(

    );

    return env.Undefined();
}

Napi::Value Multiline::AddRef_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Multiline_AddRef_AsyncWorker *asyncWorker = new Multiline_AddRef_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value Multiline::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

Multiline::~Multiline()
{
    // std::cout << "calling ::DeleteItem on Multiline for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

Multiline_GetBegTipCurve_AsyncWorker::Multiline_GetBegTipCurve_AsyncWorker(MbMultiline *_underlying,
                                                                           Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Multiline_GetBegTipCurve_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbContour *_result = _underlying->GetBegTipCurve();

    this->_result = _result;

    ExitParallelRegion();
}

void Multiline_GetBegTipCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbContour *_result = this->_result;
    if (_result != NULL)
    {
        _to = Contour::NewInstance(env, (MbContour *)_result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void Multiline_GetBegTipCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Multiline_GetEndTipCurve_AsyncWorker::Multiline_GetEndTipCurve_AsyncWorker(MbMultiline *_underlying,
                                                                           Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Multiline_GetEndTipCurve_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbContour *_result = _underlying->GetEndTipCurve();

    this->_result = _result;

    ExitParallelRegion();
}

void Multiline_GetEndTipCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbContour *_result = this->_result;
    if (_result != NULL)
    {
        _to = Contour::NewInstance(env, (MbContour *)_result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void Multiline_GetEndTipCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Multiline_GetCurvesCount_AsyncWorker::Multiline_GetCurvesCount_AsyncWorker(MbMultiline *_underlying,
                                                                           Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Multiline_GetCurvesCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    size_t _result = _underlying->GetCurvesCount();

    this->_result = _result;

    ExitParallelRegion();
}

void Multiline_GetCurvesCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    size_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Multiline_GetCurvesCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Multiline_GetCurve_AsyncWorker::Multiline_GetCurve_AsyncWorker(MbMultiline *_underlying,
                                                               Napi::Promise::Deferred const &d, size_t i)
    : _underlying(_underlying), PromiseWorker(d), i(i){};

void Multiline_GetCurve_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbContourWithBreaks *_result = _underlying->GetCurve(i);

    this->_result = _result;

    ExitParallelRegion();
}

void Multiline_GetCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbContourWithBreaks *_result = this->_result;
    if (_result != NULL)
    {
        _to = ContourWithBreaks::NewInstance(env, (MbContourWithBreaks *)_result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void Multiline_GetCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Multiline_IsA_AsyncWorker::Multiline_IsA_AsyncWorker(MbMultiline *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Multiline_IsA_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbePlaneType _result = _underlying->IsA();

    this->_result = _result;

    ExitParallelRegion();
}

void Multiline_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbePlaneType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Multiline_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Multiline_Type_AsyncWorker::Multiline_Type_AsyncWorker(MbMultiline *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Multiline_Type_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbePlaneType _result = _underlying->Type();

    this->_result = _result;

    ExitParallelRegion();
}

void Multiline_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbePlaneType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Multiline_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Multiline_Family_AsyncWorker::Multiline_Family_AsyncWorker(MbMultiline *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Multiline_Family_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbePlaneType _result = _underlying->Family();

    this->_result = _result;

    ExitParallelRegion();
}

void Multiline_Family_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbePlaneType _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Multiline_Family_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Multiline_Move_AsyncWorker::Multiline_Move_AsyncWorker(MbMultiline *_underlying, Napi::Promise::Deferred const &d,
                                                       const MbVector &to, MbRegTransform *iReg)
    : _underlying(_underlying), PromiseWorker(d), to(to), iReg(iReg){};

void Multiline_Move_AsyncWorker::Execute()
{
    EnterParallelRegion();

    const MbSurface *newSurface = NULL;

    _underlying->Move(to, iReg, newSurface);

    this->newSurface = newSurface;

    ExitParallelRegion();
}

void Multiline_Move_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    const MbSurface *newSurface = this->newSurface;
    if (newSurface != NULL)
    {
        _to = Surface::NewInstance(env, (MbSurface *)newSurface);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void Multiline_Move_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Multiline_Transform_AsyncWorker::Multiline_Transform_AsyncWorker(MbMultiline *_underlying,
                                                                 Napi::Promise::Deferred const &d, const MbMatrix &matr,
                                                                 MbRegTransform *iReg, const MbSurface *newSurface)
    : _underlying(_underlying), PromiseWorker(d), matr(matr), iReg(iReg), newSurface(newSurface){};

void Multiline_Transform_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->Transform(matr, iReg, newSurface);

    ExitParallelRegion();
}

void Multiline_Transform_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Multiline_Transform_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Multiline_Duplicate_AsyncWorker::Multiline_Duplicate_AsyncWorker(MbMultiline *_underlying,
                                                                 Napi::Promise::Deferred const &d, MbRegDuplicate *dup)
    : _underlying(_underlying), PromiseWorker(d), dup(dup){};

void Multiline_Duplicate_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbPlaneItem &_result = _underlying->Duplicate(dup);

    this->_result = (MbPlaneItem *)&(_result);

    ExitParallelRegion();
}

void Multiline_Duplicate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbPlaneItem *_result = this->_result;
    _to = PlaneItem::NewInstance(env, (MbPlaneItem *)&(_result));

    deferred.Resolve(_to);
}

void Multiline_Duplicate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Multiline_AddYourGabaritTo_AsyncWorker::Multiline_AddYourGabaritTo_AsyncWorker(MbMultiline *_underlying,
                                                                               Napi::Promise::Deferred const &d,
                                                                               MbRect &rect)
    : _underlying(_underlying), PromiseWorker(d), rect(rect){};

void Multiline_AddYourGabaritTo_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddYourGabaritTo(rect);

    ExitParallelRegion();
}

void Multiline_AddYourGabaritTo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Multiline_AddYourGabaritTo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Multiline_GetUseCount_AsyncWorker::Multiline_GetUseCount_AsyncWorker(MbMultiline *_underlying,
                                                                     Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Multiline_GetUseCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    refcount_t _result = _underlying->GetUseCount();

    this->_result = _result;

    ExitParallelRegion();
}

void Multiline_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    refcount_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Multiline_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Multiline_AddRef_AsyncWorker::Multiline_AddRef_AsyncWorker(MbMultiline *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Multiline_AddRef_AsyncWorker::Execute()
{
    EnterParallelRegion();

    _underlying->AddRef();

    ExitParallelRegion();
}

void Multiline_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    deferred.Resolve(env.Undefined());
}

void Multiline_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
