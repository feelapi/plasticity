// This is a generated file, modify: generate/templates/ContourWithBreaks.h

#ifndef CONTOURWITHBREAKS_H
#define CONTOURWITHBREAKS_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cur_contour_with_breaks.h>

#include "Contour.h"
#include "PromiseWorker.h"

class ContourWithBreaks : public Napi::ObjectWrap<ContourWithBreaks>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbContourWithBreaks *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    ContourWithBreaks(const Napi::CallbackInfo &info);

    Napi::Value InitClosed(const Napi::CallbackInfo &info);
    Napi::Value InitClosed_async(const Napi::CallbackInfo &info);
    Napi::Value CheckClosed(const Napi::CallbackInfo &info);
    Napi::Value CheckClosed_async(const Napi::CallbackInfo &info);
    Napi::Value GetArea(const Napi::CallbackInfo &info);
    Napi::Value GetArea_async(const Napi::CallbackInfo &info);
    Napi::Value GetSegmentsCount(const Napi::CallbackInfo &info);
    Napi::Value GetSegmentsCount_async(const Napi::CallbackInfo &info);
    Napi::Value GetSegment(const Napi::CallbackInfo &info);
    Napi::Value GetSegment_async(const Napi::CallbackInfo &info);
    Napi::Value AddCurveWithRuledCheck(const Napi::CallbackInfo &info);
    Napi::Value AddCurveWithRuledCheck_async(const Napi::CallbackInfo &info);
    Napi::Value GetCornerParams(const Napi::CallbackInfo &info);
    Napi::Value GetCornerParams_async(const Napi::CallbackInfo &info);
    Napi::Value Inverse(const Napi::CallbackInfo &info);
    Napi::Value Inverse_async(const Napi::CallbackInfo &info);
    Napi::Value Trimmed(const Napi::CallbackInfo &info);
    Napi::Value Trimmed_async(const Napi::CallbackInfo &info);
    Napi::Value IsStraight(const Napi::CallbackInfo &info);
    Napi::Value IsStraight_async(const Napi::CallbackInfo &info);
    Napi::Value IsClosed(const Napi::CallbackInfo &info);
    Napi::Value IsClosed_async(const Napi::CallbackInfo &info);
    Napi::Value IsBounded(const Napi::CallbackInfo &info);
    Napi::Value IsBounded_async(const Napi::CallbackInfo &info);
    Napi::Value GetTMax(const Napi::CallbackInfo &info);
    Napi::Value GetTMax_async(const Napi::CallbackInfo &info);
    Napi::Value GetTMin(const Napi::CallbackInfo &info);
    Napi::Value GetTMin_async(const Napi::CallbackInfo &info);
    Napi::Value GetPeriod(const Napi::CallbackInfo &info);
    Napi::Value GetPeriod_async(const Napi::CallbackInfo &info);
    Napi::Value GetWeightCentre(const Napi::CallbackInfo &info);
    Napi::Value GetWeightCentre_async(const Napi::CallbackInfo &info);
    Napi::Value GetLimitPoint(const Napi::CallbackInfo &info);
    Napi::Value GetLimitPoint_async(const Napi::CallbackInfo &info);
    Napi::Value PointOn(const Napi::CallbackInfo &info);
    Napi::Value PointOn_async(const Napi::CallbackInfo &info);
    Napi::Value _PointOn(const Napi::CallbackInfo &info);
    Napi::Value _PointOn_async(const Napi::CallbackInfo &info);
    Napi::Value Explore(const Napi::CallbackInfo &info);
    Napi::Value Explore_async(const Napi::CallbackInfo &info);
    Napi::Value FirstDer(const Napi::CallbackInfo &info);
    Napi::Value FirstDer_async(const Napi::CallbackInfo &info);
    Napi::Value _FirstDer(const Napi::CallbackInfo &info);
    Napi::Value _FirstDer_async(const Napi::CallbackInfo &info);
    Napi::Value SecondDer(const Napi::CallbackInfo &info);
    Napi::Value SecondDer_async(const Napi::CallbackInfo &info);
    Napi::Value _SecondDer(const Napi::CallbackInfo &info);
    Napi::Value _SecondDer_async(const Napi::CallbackInfo &info);
    Napi::Value Tangent(const Napi::CallbackInfo &info);
    Napi::Value Tangent_async(const Napi::CallbackInfo &info);
    Napi::Value _Tangent(const Napi::CallbackInfo &info);
    Napi::Value _Tangent_async(const Napi::CallbackInfo &info);
    Napi::Value Normal(const Napi::CallbackInfo &info);
    Napi::Value Normal_async(const Napi::CallbackInfo &info);
    Napi::Value _Normal(const Napi::CallbackInfo &info);
    Napi::Value _Normal_async(const Napi::CallbackInfo &info);
    Napi::Value PointRelative(const Napi::CallbackInfo &info);
    Napi::Value PointRelative_async(const Napi::CallbackInfo &info);
    Napi::Value PointLocation(const Napi::CallbackInfo &info);
    Napi::Value PointLocation_async(const Napi::CallbackInfo &info);
    Napi::Value IsA(const Napi::CallbackInfo &info);
    Napi::Value IsA_async(const Napi::CallbackInfo &info);
    Napi::Value Type(const Napi::CallbackInfo &info);
    Napi::Value Type_async(const Napi::CallbackInfo &info);
    Napi::Value Family(const Napi::CallbackInfo &info);
    Napi::Value Family_async(const Napi::CallbackInfo &info);
    Napi::Value Move(const Napi::CallbackInfo &info);
    Napi::Value Move_async(const Napi::CallbackInfo &info);
    Napi::Value Transform(const Napi::CallbackInfo &info);
    Napi::Value Transform_async(const Napi::CallbackInfo &info);
    Napi::Value Duplicate(const Napi::CallbackInfo &info);
    Napi::Value Duplicate_async(const Napi::CallbackInfo &info);
    Napi::Value AddYourGabaritTo(const Napi::CallbackInfo &info);
    Napi::Value AddYourGabaritTo_async(const Napi::CallbackInfo &info);
    Napi::Value GetUseCount(const Napi::CallbackInfo &info);
    Napi::Value GetUseCount_async(const Napi::CallbackInfo &info);
    Napi::Value AddRef(const Napi::CallbackInfo &info);
    Napi::Value AddRef_async(const Napi::CallbackInfo &info);
    Napi::Value Id(const Napi::CallbackInfo &info);

    MbContourWithBreaks *_underlying;

    ~ContourWithBreaks();

  private:
};

class ContourWithBreaks_InitClosed_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks_InitClosed_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d,
                                             bool c);
    virtual ~ContourWithBreaks_InitClosed_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;
    bool c;

    int resultType;
};

class ContourWithBreaks_CheckClosed_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks_CheckClosed_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d,
                                              double closedEps);
    virtual ~ContourWithBreaks_CheckClosed_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;
    double closedEps;

    int resultType;
};

class ContourWithBreaks_GetArea_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks_GetArea_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d,
                                          double sag = 1);
    virtual ~ContourWithBreaks_GetArea_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;
    double sag = 1;

    double _result;

    int resultType;
};

class ContourWithBreaks_GetSegmentsCount_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks_GetSegmentsCount_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ContourWithBreaks_GetSegmentsCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;

    size_t _result;

    int resultType;
};

class ContourWithBreaks_GetSegment_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks_GetSegment_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d,
                                             size_t i);
    virtual ~ContourWithBreaks_GetSegment_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;
    size_t i;

    const MbCurve *_result;

    int resultType;
};

class ContourWithBreaks_AddCurveWithRuledCheck_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks_AddCurveWithRuledCheck_AsyncWorker(MbContourWithBreaks *_underlying,
                                                         Napi::Promise::Deferred const &d, MbCurve &newCur,
                                                         double absEps, bool toEndOnly = false, bool checkSame = true,
                                                         VERSION version = Math::DefaultMathVersion());
    virtual ~ContourWithBreaks_AddCurveWithRuledCheck_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;
    MbCurve &newCur;
    double absEps;
    bool toEndOnly = false;
    bool checkSame = true;
    VERSION version = Math::DefaultMathVersion();

    bool _result;

    int resultType;
};

class ContourWithBreaks_GetCornerParams_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks_GetCornerParams_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ContourWithBreaks_GetCornerParams_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;

    SArray<double> *params;

    int resultType;
};

class ContourWithBreaks_Inverse_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks_Inverse_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d,
                                          MbRegTransform *iReg = NULL);
    virtual ~ContourWithBreaks_Inverse_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class ContourWithBreaks_Trimmed_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks_Trimmed_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d, double t1,
                                          double t2, int sense);
    virtual ~ContourWithBreaks_Trimmed_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;
    double t1;
    double t2;
    int sense;

    MbCurve *_result;

    int resultType;
};

class ContourWithBreaks_IsStraight_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks_IsStraight_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d,
                                             bool ignoreParams = false);
    virtual ~ContourWithBreaks_IsStraight_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;
    bool ignoreParams = false;

    bool _result;

    int resultType;
};

class ContourWithBreaks_IsClosed_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks_IsClosed_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ContourWithBreaks_IsClosed_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;

    bool _result;

    int resultType;
};

class ContourWithBreaks_IsBounded_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks_IsBounded_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ContourWithBreaks_IsBounded_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;

    bool _result;

    int resultType;
};

class ContourWithBreaks_GetTMax_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks_GetTMax_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ContourWithBreaks_GetTMax_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;

    double _result;

    int resultType;
};

class ContourWithBreaks_GetTMin_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks_GetTMin_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ContourWithBreaks_GetTMin_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;

    double _result;

    int resultType;
};

class ContourWithBreaks_GetPeriod_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks_GetPeriod_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ContourWithBreaks_GetPeriod_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;

    double _result;

    int resultType;
};

class ContourWithBreaks_GetWeightCentre_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks_GetWeightCentre_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ContourWithBreaks_GetWeightCentre_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;

    MbCartPoint *point;

    int resultType;
};

class ContourWithBreaks_GetLimitPoint_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks_GetLimitPoint_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d,
                                                ptrdiff_t number);
    virtual ~ContourWithBreaks_GetLimitPoint_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;
    ptrdiff_t number;

    MbCartPoint *point;

    int resultType;
};

class ContourWithBreaks_PointOn_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks_PointOn_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d,
                                          double &t);
    virtual ~ContourWithBreaks_PointOn_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;
    double &t;

    MbCartPoint *p;

    int resultType;
};

class ContourWithBreaks__PointOn_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks__PointOn_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d,
                                           double &t);
    virtual ~ContourWithBreaks__PointOn_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;
    double &t;

    MbCartPoint *p;

    int resultType;
};

class ContourWithBreaks_Explore_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks_Explore_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d, double &t,
                                          bool ext);
    virtual ~ContourWithBreaks_Explore_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;
    double &t;
    bool ext;

    MbCartPoint *pnt;

    MbVector *fir;

    MbVector *sec;

    MbVector *thir;

    int resultType;
};

class ContourWithBreaks_FirstDer_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks_FirstDer_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d,
                                           double &t);
    virtual ~ContourWithBreaks_FirstDer_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class ContourWithBreaks__FirstDer_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks__FirstDer_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d,
                                            double &t);
    virtual ~ContourWithBreaks__FirstDer_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class ContourWithBreaks_SecondDer_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks_SecondDer_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d,
                                            double &t);
    virtual ~ContourWithBreaks_SecondDer_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class ContourWithBreaks__SecondDer_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks__SecondDer_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d,
                                             double &t);
    virtual ~ContourWithBreaks__SecondDer_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class ContourWithBreaks_Tangent_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks_Tangent_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d,
                                          double &t);
    virtual ~ContourWithBreaks_Tangent_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class ContourWithBreaks__Tangent_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks__Tangent_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d,
                                           double &t);
    virtual ~ContourWithBreaks__Tangent_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class ContourWithBreaks_Normal_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks_Normal_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~ContourWithBreaks_Normal_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class ContourWithBreaks__Normal_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks__Normal_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d,
                                          double &t);
    virtual ~ContourWithBreaks__Normal_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class ContourWithBreaks_PointRelative_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks_PointRelative_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d,
                                                const MbCartPoint &pnt, double eps);
    virtual ~ContourWithBreaks_PointRelative_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;
    const MbCartPoint &pnt;
    double eps;

    MbeItemLocation _result;

    int resultType;
};

class ContourWithBreaks_PointLocation_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks_PointLocation_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d,
                                                const MbCartPoint &pnt, double eps);
    virtual ~ContourWithBreaks_PointLocation_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;
    const MbCartPoint &pnt;
    double eps;

    MbeLocation _result;

    int resultType;
};

class ContourWithBreaks_IsA_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks_IsA_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ContourWithBreaks_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;

    MbePlaneType _result;

    int resultType;
};

class ContourWithBreaks_Type_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks_Type_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ContourWithBreaks_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;

    MbePlaneType _result;

    int resultType;
};

class ContourWithBreaks_Family_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks_Family_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ContourWithBreaks_Family_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;

    MbePlaneType _result;

    int resultType;
};

class ContourWithBreaks_Move_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks_Move_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d,
                                       const MbVector &to, MbRegTransform *iReg = NULL);
    virtual ~ContourWithBreaks_Move_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;
    const MbVector &to;
    MbRegTransform *iReg = NULL;

    const MbSurface *newSurface;

    int resultType;
};

class ContourWithBreaks_Transform_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks_Transform_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d,
                                            const MbMatrix &matr, MbRegTransform *iReg = NULL,
                                            const MbSurface *newSurface = NULL);
    virtual ~ContourWithBreaks_Transform_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;
    const MbMatrix &matr;
    MbRegTransform *iReg = NULL;
    const MbSurface *newSurface = NULL;

    int resultType;
};

class ContourWithBreaks_Duplicate_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks_Duplicate_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d,
                                            MbRegDuplicate *dup = NULL);
    virtual ~ContourWithBreaks_Duplicate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;
    MbRegDuplicate *dup = NULL;

    MbPlaneItem *_result;

    int resultType;
};

class ContourWithBreaks_AddYourGabaritTo_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks_AddYourGabaritTo_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d,
                                                   MbRect &rect);
    virtual ~ContourWithBreaks_AddYourGabaritTo_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;
    MbRect &rect;

    int resultType;
};

class ContourWithBreaks_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks_GetUseCount_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ContourWithBreaks_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;

    refcount_t _result;

    int resultType;
};

class ContourWithBreaks_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    ContourWithBreaks_AddRef_AsyncWorker(MbContourWithBreaks *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ContourWithBreaks_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContourWithBreaks *_underlying;

    int resultType;
};

#endif
