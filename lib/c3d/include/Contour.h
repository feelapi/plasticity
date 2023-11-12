// This is a generated file, modify: generate/templates/Contour.h

#ifndef CONTOUR_H
#define CONTOUR_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cur_contour.h>

#include "Curve.h"
#include "PromiseWorker.h"

class Contour : public Napi::ObjectWrap<Contour>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbContour *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    Contour(const Napi::CallbackInfo &info);

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

    MbContour *_underlying;

    ~Contour();

  private:
};

class Contour_InitClosed_AsyncWorker : public PromiseWorker
{
  public:
    Contour_InitClosed_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d, bool c);
    virtual ~Contour_InitClosed_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;
    bool c;

    int resultType;
};

class Contour_CheckClosed_AsyncWorker : public PromiseWorker
{
  public:
    Contour_CheckClosed_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d, double closedEps);
    virtual ~Contour_CheckClosed_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;
    double closedEps;

    int resultType;
};

class Contour_GetArea_AsyncWorker : public PromiseWorker
{
  public:
    Contour_GetArea_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d, double sag = 1);
    virtual ~Contour_GetArea_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;
    double sag = 1;

    double _result;

    int resultType;
};

class Contour_GetSegmentsCount_AsyncWorker : public PromiseWorker
{
  public:
    Contour_GetSegmentsCount_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Contour_GetSegmentsCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;

    size_t _result;

    int resultType;
};

class Contour_GetSegment_AsyncWorker : public PromiseWorker
{
  public:
    Contour_GetSegment_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d, size_t i);
    virtual ~Contour_GetSegment_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;
    size_t i;

    const MbCurve *_result;

    int resultType;
};

class Contour_AddCurveWithRuledCheck_AsyncWorker : public PromiseWorker
{
  public:
    Contour_AddCurveWithRuledCheck_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d,
                                               MbCurve &newCur, double absEps, bool toEndOnly = false,
                                               bool checkSame = true, VERSION version = Math::DefaultMathVersion());
    virtual ~Contour_AddCurveWithRuledCheck_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;
    MbCurve &newCur;
    double absEps;
    bool toEndOnly = false;
    bool checkSame = true;
    VERSION version = Math::DefaultMathVersion();

    bool _result;

    int resultType;
};

class Contour_GetCornerParams_AsyncWorker : public PromiseWorker
{
  public:
    Contour_GetCornerParams_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Contour_GetCornerParams_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;

    SArray<double> *params;

    int resultType;
};

class Contour_Inverse_AsyncWorker : public PromiseWorker
{
  public:
    Contour_Inverse_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d, MbRegTransform *iReg = NULL);
    virtual ~Contour_Inverse_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class Contour_Trimmed_AsyncWorker : public PromiseWorker
{
  public:
    Contour_Trimmed_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d, double t1, double t2,
                                int sense);
    virtual ~Contour_Trimmed_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;
    double t1;
    double t2;
    int sense;

    MbCurve *_result;

    int resultType;
};

class Contour_IsStraight_AsyncWorker : public PromiseWorker
{
  public:
    Contour_IsStraight_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d, bool ignoreParams = false);
    virtual ~Contour_IsStraight_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;
    bool ignoreParams = false;

    bool _result;

    int resultType;
};

class Contour_IsClosed_AsyncWorker : public PromiseWorker
{
  public:
    Contour_IsClosed_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Contour_IsClosed_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;

    bool _result;

    int resultType;
};

class Contour_IsBounded_AsyncWorker : public PromiseWorker
{
  public:
    Contour_IsBounded_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Contour_IsBounded_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;

    bool _result;

    int resultType;
};

class Contour_GetTMax_AsyncWorker : public PromiseWorker
{
  public:
    Contour_GetTMax_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Contour_GetTMax_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;

    double _result;

    int resultType;
};

class Contour_GetTMin_AsyncWorker : public PromiseWorker
{
  public:
    Contour_GetTMin_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Contour_GetTMin_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;

    double _result;

    int resultType;
};

class Contour_GetPeriod_AsyncWorker : public PromiseWorker
{
  public:
    Contour_GetPeriod_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Contour_GetPeriod_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;

    double _result;

    int resultType;
};

class Contour_GetWeightCentre_AsyncWorker : public PromiseWorker
{
  public:
    Contour_GetWeightCentre_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Contour_GetWeightCentre_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;

    MbCartPoint *point;

    int resultType;
};

class Contour_GetLimitPoint_AsyncWorker : public PromiseWorker
{
  public:
    Contour_GetLimitPoint_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d, ptrdiff_t number);
    virtual ~Contour_GetLimitPoint_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;
    ptrdiff_t number;

    MbCartPoint *point;

    int resultType;
};

class Contour_PointOn_AsyncWorker : public PromiseWorker
{
  public:
    Contour_PointOn_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Contour_PointOn_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;
    double &t;

    MbCartPoint *p;

    int resultType;
};

class Contour__PointOn_AsyncWorker : public PromiseWorker
{
  public:
    Contour__PointOn_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Contour__PointOn_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;
    double &t;

    MbCartPoint *p;

    int resultType;
};

class Contour_Explore_AsyncWorker : public PromiseWorker
{
  public:
    Contour_Explore_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d, double &t, bool ext);
    virtual ~Contour_Explore_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;
    double &t;
    bool ext;

    MbCartPoint *pnt;

    MbVector *fir;

    MbVector *sec;

    MbVector *thir;

    int resultType;
};

class Contour_FirstDer_AsyncWorker : public PromiseWorker
{
  public:
    Contour_FirstDer_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Contour_FirstDer_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Contour__FirstDer_AsyncWorker : public PromiseWorker
{
  public:
    Contour__FirstDer_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Contour__FirstDer_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Contour_SecondDer_AsyncWorker : public PromiseWorker
{
  public:
    Contour_SecondDer_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Contour_SecondDer_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Contour__SecondDer_AsyncWorker : public PromiseWorker
{
  public:
    Contour__SecondDer_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Contour__SecondDer_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Contour_Tangent_AsyncWorker : public PromiseWorker
{
  public:
    Contour_Tangent_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Contour_Tangent_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Contour__Tangent_AsyncWorker : public PromiseWorker
{
  public:
    Contour__Tangent_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Contour__Tangent_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Contour_Normal_AsyncWorker : public PromiseWorker
{
  public:
    Contour_Normal_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Contour_Normal_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Contour__Normal_AsyncWorker : public PromiseWorker
{
  public:
    Contour__Normal_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Contour__Normal_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Contour_PointRelative_AsyncWorker : public PromiseWorker
{
  public:
    Contour_PointRelative_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d, const MbCartPoint &pnt,
                                      double eps);
    virtual ~Contour_PointRelative_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;
    const MbCartPoint &pnt;
    double eps;

    MbeItemLocation _result;

    int resultType;
};

class Contour_PointLocation_AsyncWorker : public PromiseWorker
{
  public:
    Contour_PointLocation_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d, const MbCartPoint &pnt,
                                      double eps);
    virtual ~Contour_PointLocation_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;
    const MbCartPoint &pnt;
    double eps;

    MbeLocation _result;

    int resultType;
};

class Contour_IsA_AsyncWorker : public PromiseWorker
{
  public:
    Contour_IsA_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Contour_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;

    MbePlaneType _result;

    int resultType;
};

class Contour_Type_AsyncWorker : public PromiseWorker
{
  public:
    Contour_Type_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Contour_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;

    MbePlaneType _result;

    int resultType;
};

class Contour_Family_AsyncWorker : public PromiseWorker
{
  public:
    Contour_Family_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Contour_Family_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;

    MbePlaneType _result;

    int resultType;
};

class Contour_Move_AsyncWorker : public PromiseWorker
{
  public:
    Contour_Move_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d, const MbVector &to,
                             MbRegTransform *iReg = NULL);
    virtual ~Contour_Move_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;
    const MbVector &to;
    MbRegTransform *iReg = NULL;

    const MbSurface *newSurface;

    int resultType;
};

class Contour_Transform_AsyncWorker : public PromiseWorker
{
  public:
    Contour_Transform_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d, const MbMatrix &matr,
                                  MbRegTransform *iReg = NULL, const MbSurface *newSurface = NULL);
    virtual ~Contour_Transform_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;
    const MbMatrix &matr;
    MbRegTransform *iReg = NULL;
    const MbSurface *newSurface = NULL;

    int resultType;
};

class Contour_Duplicate_AsyncWorker : public PromiseWorker
{
  public:
    Contour_Duplicate_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d, MbRegDuplicate *dup = NULL);
    virtual ~Contour_Duplicate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;
    MbRegDuplicate *dup = NULL;

    MbPlaneItem *_result;

    int resultType;
};

class Contour_AddYourGabaritTo_AsyncWorker : public PromiseWorker
{
  public:
    Contour_AddYourGabaritTo_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d, MbRect &rect);
    virtual ~Contour_AddYourGabaritTo_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;
    MbRect &rect;

    int resultType;
};

class Contour_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    Contour_GetUseCount_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Contour_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;

    refcount_t _result;

    int resultType;
};

class Contour_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    Contour_AddRef_AsyncWorker(MbContour *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Contour_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour *_underlying;

    int resultType;
};

#endif
