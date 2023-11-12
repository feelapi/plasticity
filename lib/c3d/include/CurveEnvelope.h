// This is a generated file, modify: generate/templates/CurveEnvelope.h

#ifndef CURVEENVELOPE_H
#define CURVEENVELOPE_H

#include <napi.h>
#include <vector>

#include <alg_curve_envelope.h>

#include "Curve.h"
#include "CrossPoint.h"

#include "PromiseWorker.h"

class CurveEnvelope : public Napi::ObjectWrap<CurveEnvelope>
{
  public:
    static Napi::Object Init(Napi::Env env, Napi::Object exports);

    static Napi::Value IntersectWithAll(const Napi::CallbackInfo &info);
    static Napi::Value IntersectWithAll_async(const Napi::CallbackInfo &info);
    static Napi::Value SortCrossPoints(const Napi::CallbackInfo &info);
    static Napi::Value SortCrossPoints_async(const Napi::CallbackInfo &info);
};

class CurveEnvelope_IntersectWithAll_AsyncWorker : public PromiseWorker
{
  public:
    CurveEnvelope_IntersectWithAll_AsyncWorker(Napi::Promise::Deferred const &d, const MbCurve *selectCurve,
                                               LIterator<MbCurve> &fromCurve, bool self);
    virtual ~CurveEnvelope_IntersectWithAll_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    const MbCurve *selectCurve;
    LIterator<MbCurve> &fromCurve;
    bool self;

    SArray<MbCrossPoint> *cross;

    int resultType;
};

class CurveEnvelope_SortCrossPoints_AsyncWorker : public PromiseWorker
{
  public:
    CurveEnvelope_SortCrossPoints_AsyncWorker(Napi::Promise::Deferred const &d, double tProj,
                                              const MbCurve *selectCurve, SArray<MbCrossPoint> &cross);
    virtual ~CurveEnvelope_SortCrossPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    double tProj;
    const MbCurve *selectCurve;
    SArray<MbCrossPoint> &cross;

    SArray<MbCrossPoint> *crossLeft;

    SArray<MbCrossPoint> *crossRight;

    int resultType;
};

#endif
