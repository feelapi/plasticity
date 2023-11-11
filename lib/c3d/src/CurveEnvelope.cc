// This is a generated file, modify: generate/templates/CurveEnvelope.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/CurveEnvelope.h"
#include "../include/Error.h"

#include "tool_mutex.h"

Napi::Object CurveEnvelope::Init(Napi::Env env, Napi::Object exports)
{
    Napi::Object object = Napi::Object::New(env);

    object.Set("IntersectWithAll", Napi::Function::New<&CurveEnvelope::IntersectWithAll>(env));
    object.Set("IntersectWithAll_async", Napi::Function::New<&CurveEnvelope::IntersectWithAll_async>(env));
    object.Set("SortCrossPoints", Napi::Function::New<&CurveEnvelope::SortCrossPoints>(env));
    object.Set("SortCrossPoints_async", Napi::Function::New<&CurveEnvelope::SortCrossPoints_async>(env));

    exports.Set("CurveEnvelope", object);

    return exports;
}

Napi::Value CurveEnvelope::IntersectWithAll(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Curve::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Curve selectCurve is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsArray()))
    {
        Napi::Error::New(env, "Array fromCurve is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 || !(info[2].IsBoolean()))
    {
        Napi::Error::New(env, "boolean self is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    SArray<MbCrossPoint> *cross = new SArray<MbCrossPoint>;

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'selectCurve'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Curve *selectCurve_ = Curve::Unwrap(info[0].ToObject());

    const MbCurve *selectCurve = selectCurve_->_underlying;

    List<MbCurve> fromCurve_list(false);
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        const Napi::Array fromCurve_ = Napi::Array(env, info[1]);

        for (size_t i = 0; i < fromCurve_.Length(); i++)
        {
            if (fromCurve_[i].IsNull() || fromCurve_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!fromCurve_[i].IsObject() || !fromCurve_[i].ToObject().InstanceOf(Curve::GetConstructor(env)))
            {
                Napi::Error::New(env, "Curve fromCurve is required.").ThrowAsJavaScriptException();
                return env.Undefined();
            }
            else
            {
                fromCurve_list.Add(Curve::Unwrap(fromCurve_[i].ToObject())->_underlying);
            }
        }
    }
    LIterator<MbCurve> fromCurve = fromCurve_list;

    bool self = info[2].ToBoolean();

    ::IntersectWithAll(selectCurve, fromCurve, *cross, self

    );

    Napi::Value _to;

    Napi::Array arr_cross = Napi::Array::New(env);
    for (size_t i = 0; i < cross->Count(); i++)
    {
        arr_cross[i] = CrossPoint::NewInstance(env,

                                               (*cross)[i]

        );
    }
    _to = arr_cross;

    return _to;
}

Napi::Value CurveEnvelope::IntersectWithAll_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Curve::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Curve selectCurve is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsArray()))
    {
        deferred.Reject(Napi::String::New(env, "Array fromCurve is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 || !(info[2].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean self is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'selectCurve'"));
        return deferred.Promise();
    }
    const class Curve *selectCurve_ = Curve::Unwrap(info[0].ToObject());

    const MbCurve *selectCurve = selectCurve_->_underlying;

    List<MbCurve> *fromCurve_list = new List<MbCurve>(false);
    if (!(info[1].IsNull() || info[1].IsUndefined()))
    {
        const Napi::Array fromCurve_ = Napi::Array(env, info[1]);

        for (size_t i = 0; i < fromCurve_.Length(); i++)
        {
            if (fromCurve_[i].IsNull() || fromCurve_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!fromCurve_[i].IsObject() || !fromCurve_[i].ToObject().InstanceOf(Curve::GetConstructor(env)))
            {
                deferred.Reject(Napi::String::New(env, "Curve fromCurve is required."));
                return deferred.Promise();
            }
            else
            {
                fromCurve_list->Add(Curve::Unwrap(fromCurve_[i].ToObject())->_underlying);
            }
        }
    }
    LIterator<MbCurve> *fromCurve = new LIterator<MbCurve>(*fromCurve_list);

    bool self = info[2].ToBoolean();

    CurveEnvelope_IntersectWithAll_AsyncWorker *asyncWorker =
        new CurveEnvelope_IntersectWithAll_AsyncWorker(deferred,

                                                       selectCurve, *fromCurve,

                                                       self);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value CurveEnvelope::SortCrossPoints(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        Napi::Error::New(env, "number tProj is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !((info[1].IsObject() && info[1].ToObject().InstanceOf(Curve::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Curve selectCurve is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 || !(info[2].IsArray()))
    {
        Napi::Error::New(env, "Array cross is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    SArray<MbCrossPoint> *crossLeft = new SArray<MbCrossPoint>;
    SArray<MbCrossPoint> *crossRight = new SArray<MbCrossPoint>;

    double tProj = info[0].ToNumber().DoubleValue();

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'selectCurve'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Curve *selectCurve_ = Curve::Unwrap(info[1].ToObject());

    const MbCurve *selectCurve = selectCurve_->_underlying;

    SArray<MbCrossPoint> cross;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        const Napi::Array cross_ = Napi::Array(env, info[2]);
        cross = SArray<MbCrossPoint>(cross_.Length(), 1);

        for (size_t i = 0; i < cross_.Length(); i++)
        {
            if (cross_[i].IsNull() || cross_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!cross_[i].IsObject() || !cross_[i].ToObject().InstanceOf(CrossPoint::GetConstructor(env)))
            {
                Napi::Error::New(env, "CrossPoint cross is required.").ThrowAsJavaScriptException();
                return env.Undefined();
            }
            else
            {
                cross.Add(CrossPoint::Unwrap(cross_[i].ToObject())->_underlying);
            }
        }
    }

    ::SortCrossPoints(tProj, selectCurve, cross, *crossLeft, *crossRight

    );

    Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

    Napi::Array arr_crossLeft = Napi::Array::New(env);
    for (size_t i = 0; i < crossLeft->Count(); i++)
    {
        arr_crossLeft[i] = CrossPoint::NewInstance(env,

                                                   (*crossLeft)[i]

        );
    }
    _to = arr_crossLeft;

    _toReturn.Set(Napi::String::New(env, "crossLeft"), _to);
    Napi::Array arr_crossRight = Napi::Array::New(env);
    for (size_t i = 0; i < crossRight->Count(); i++)
    {
        arr_crossRight[i] = CrossPoint::NewInstance(env,

                                                    (*crossRight)[i]

        );
    }
    _to = arr_crossRight;

    _toReturn.Set(Napi::String::New(env, "crossRight"), _to);
    return _toReturn;
}

Napi::Value CurveEnvelope::SortCrossPoints_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number tProj is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !((info[1].IsObject() && info[1].ToObject().InstanceOf(Curve::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Curve selectCurve is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 || !(info[2].IsArray()))
    {
        deferred.Reject(Napi::String::New(env, "Array cross is required."));
        return deferred.Promise();
    }

    double tProj = info[0].ToNumber().DoubleValue();

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'selectCurve'"));
        return deferred.Promise();
    }
    const class Curve *selectCurve_ = Curve::Unwrap(info[1].ToObject());

    const MbCurve *selectCurve = selectCurve_->_underlying;

    SArray<MbCrossPoint> *cross;
    if (!(info[2].IsNull() || info[2].IsUndefined()))
    {
        const Napi::Array cross_ = Napi::Array(env, info[2]);
        cross = new SArray<MbCrossPoint>(cross_.Length(), 1);

        for (size_t i = 0; i < cross_.Length(); i++)
        {
            if (cross_[i].IsNull() || cross_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!cross_[i].IsObject() || !cross_[i].ToObject().InstanceOf(CrossPoint::GetConstructor(env)))
            {
                deferred.Reject(Napi::String::New(env, "CrossPoint cross is required."));
                return deferred.Promise();
            }
            else
            {
                cross->Add(CrossPoint::Unwrap(cross_[i].ToObject())->_underlying);
            }
        }
    }

    CurveEnvelope_SortCrossPoints_AsyncWorker *asyncWorker =
        new CurveEnvelope_SortCrossPoints_AsyncWorker(deferred,

                                                      tProj,

                                                      selectCurve, *cross);
    asyncWorker->Queue();
    return deferred.Promise();
}

CurveEnvelope_IntersectWithAll_AsyncWorker::CurveEnvelope_IntersectWithAll_AsyncWorker(Napi::Promise::Deferred const &d,
                                                                                       const MbCurve *selectCurve,
                                                                                       LIterator<MbCurve> &fromCurve,
                                                                                       bool self)
    : PromiseWorker(d), selectCurve(selectCurve), fromCurve(fromCurve), self(self){};

void CurveEnvelope_IntersectWithAll_AsyncWorker::Execute()
{
    EnterParallelRegion();

    SArray<MbCrossPoint> *cross = new SArray<MbCrossPoint>;

    ::IntersectWithAll(selectCurve, fromCurve, *cross, self);

    this->cross = cross;

    ExitParallelRegion();
}

void CurveEnvelope_IntersectWithAll_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    SArray<MbCrossPoint> *cross = this->cross;
    Napi::Array arr_cross = Napi::Array::New(env);
    for (size_t i = 0; i < cross->Count(); i++)
    {
        arr_cross[i] = CrossPoint::NewInstance(env,

                                               (*cross)[i]

        );
    }
    _to = arr_cross;

    deferred.Resolve(_to);
}

void CurveEnvelope_IntersectWithAll_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                        Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
CurveEnvelope_SortCrossPoints_AsyncWorker::CurveEnvelope_SortCrossPoints_AsyncWorker(Napi::Promise::Deferred const &d,
                                                                                     double tProj,
                                                                                     const MbCurve *selectCurve,
                                                                                     SArray<MbCrossPoint> &cross)
    : PromiseWorker(d), tProj(tProj), selectCurve(selectCurve), cross(cross){};

void CurveEnvelope_SortCrossPoints_AsyncWorker::Execute()
{
    EnterParallelRegion();

    SArray<MbCrossPoint> *crossLeft = new SArray<MbCrossPoint>;
    SArray<MbCrossPoint> *crossRight = new SArray<MbCrossPoint>;

    ::SortCrossPoints(tProj, selectCurve, cross, *crossLeft, *crossRight);

    this->crossLeft = crossLeft;
    this->crossRight = crossRight;

    ExitParallelRegion();
}

void CurveEnvelope_SortCrossPoints_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    Napi::Object _toReturn = Napi::Object::New(env);

    SArray<MbCrossPoint> *crossLeft = this->crossLeft;
    Napi::Array arr_crossLeft = Napi::Array::New(env);
    for (size_t i = 0; i < crossLeft->Count(); i++)
    {
        arr_crossLeft[i] = CrossPoint::NewInstance(env,

                                                   (*crossLeft)[i]

        );
    }
    _to = arr_crossLeft;

    _toReturn.Set(Napi::String::New(env, "crossLeft"), _to);
    SArray<MbCrossPoint> *crossRight = this->crossRight;
    Napi::Array arr_crossRight = Napi::Array::New(env);
    for (size_t i = 0; i < crossRight->Count(); i++)
    {
        arr_crossRight[i] = CrossPoint::NewInstance(env,

                                                    (*crossRight)[i]

        );
    }
    _to = arr_crossRight;

    _toReturn.Set(Napi::String::New(env, "crossRight"), _to);

    deferred.Resolve(_toReturn);
}

void CurveEnvelope_SortCrossPoints_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                       Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
