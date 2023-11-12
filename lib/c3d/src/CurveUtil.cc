// This is a generated file, modify: generate/templates/CurveUtil.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/CurveUtil.h"
#include "../include/Error.h"

#include "tool_mutex.h"

Napi::Object CurveUtil::Init(Napi::Env env, Napi::Object exports)
{
    Napi::Object object = Napi::Object::New(env);

    object.Set("AreaSign", Napi::Function::New<&CurveUtil::AreaSign>(env));
    object.Set("AreaSign_async", Napi::Function::New<&CurveUtil::AreaSign_async>(env));

    exports.Set("CurveUtil", object);

    return exports;
}

Napi::Value CurveUtil::AreaSign(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Curve::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Curve curve is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        Napi::Error::New(env, "number sag is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 || !(info[2].IsBoolean()))
    {
        Napi::Error::New(env, "boolean close is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'curve'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Curve *curve_ = Curve::Unwrap(info[0].ToObject());

    const MbCurve &curve = *curve_->_underlying;

    double sag = info[1].ToNumber().DoubleValue();

    bool close = info[2].ToBoolean();

    double _result = ::AreaSign(curve, sag, close

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value CurveUtil::AreaSign_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Curve::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Curve curve is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number sag is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 || !(info[2].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean close is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'curve'"));
        return deferred.Promise();
    }
    const class Curve *curve_ = Curve::Unwrap(info[0].ToObject());

    const MbCurve &curve = *curve_->_underlying;

    double sag = info[1].ToNumber().DoubleValue();

    bool close = info[2].ToBoolean();

    CurveUtil_AreaSign_AsyncWorker *asyncWorker = new CurveUtil_AreaSign_AsyncWorker(deferred,

                                                                                     curve,

                                                                                     sag,

                                                                                     close);
    asyncWorker->Queue();
    return deferred.Promise();
}

CurveUtil_AreaSign_AsyncWorker::CurveUtil_AreaSign_AsyncWorker(Napi::Promise::Deferred const &d, const MbCurve &curve,
                                                               double sag, bool close)
    : PromiseWorker(d), curve(curve), sag(sag), close(close){};

void CurveUtil_AreaSign_AsyncWorker::Execute()
{
    EnterParallelRegion();

    double _result = ::AreaSign(curve, sag, close);

    this->_result = _result;

    ExitParallelRegion();
}

void CurveUtil_AreaSign_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    double _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void CurveUtil_AreaSign_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
