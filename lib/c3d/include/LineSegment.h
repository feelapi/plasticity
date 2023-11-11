// This is a generated file, modify: generate/templates/LineSegment.h

#ifndef LINESEGMENT_H
#define LINESEGMENT_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cur_line_segment.h>

#include "Curve.h"
#include "CartPoint.h"
#include "PromiseWorker.h"

class LineSegment : public Napi::ObjectWrap<LineSegment>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbLineSegment *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    LineSegment(const Napi::CallbackInfo &info);

    Napi::Value GetPoint1(const Napi::CallbackInfo &info);
    Napi::Value GetPoint1_async(const Napi::CallbackInfo &info);
    Napi::Value GetPoint2(const Napi::CallbackInfo &info);
    Napi::Value GetPoint2_async(const Napi::CallbackInfo &info);
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

    MbLineSegment *_underlying;

    ~LineSegment();

  private:
};

class LineSegment_GetPoint1_AsyncWorker : public PromiseWorker
{
  public:
    LineSegment_GetPoint1_AsyncWorker(MbLineSegment *_underlying, Napi::Promise::Deferred const &d);
    virtual ~LineSegment_GetPoint1_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbLineSegment *_underlying;

    const MbCartPoint *_result;

    int resultType;
};

class LineSegment_GetPoint2_AsyncWorker : public PromiseWorker
{
  public:
    LineSegment_GetPoint2_AsyncWorker(MbLineSegment *_underlying, Napi::Promise::Deferred const &d);
    virtual ~LineSegment_GetPoint2_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbLineSegment *_underlying;

    const MbCartPoint *_result;

    int resultType;
};

class LineSegment_Inverse_AsyncWorker : public PromiseWorker
{
  public:
    LineSegment_Inverse_AsyncWorker(MbLineSegment *_underlying, Napi::Promise::Deferred const &d,
                                    MbRegTransform *iReg = NULL);
    virtual ~LineSegment_Inverse_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbLineSegment *_underlying;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class LineSegment_Trimmed_AsyncWorker : public PromiseWorker
{
  public:
    LineSegment_Trimmed_AsyncWorker(MbLineSegment *_underlying, Napi::Promise::Deferred const &d, double t1, double t2,
                                    int sense);
    virtual ~LineSegment_Trimmed_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbLineSegment *_underlying;
    double t1;
    double t2;
    int sense;

    MbCurve *_result;

    int resultType;
};

class LineSegment_IsStraight_AsyncWorker : public PromiseWorker
{
  public:
    LineSegment_IsStraight_AsyncWorker(MbLineSegment *_underlying, Napi::Promise::Deferred const &d,
                                       bool ignoreParams = false);
    virtual ~LineSegment_IsStraight_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbLineSegment *_underlying;
    bool ignoreParams = false;

    bool _result;

    int resultType;
};

class LineSegment_IsClosed_AsyncWorker : public PromiseWorker
{
  public:
    LineSegment_IsClosed_AsyncWorker(MbLineSegment *_underlying, Napi::Promise::Deferred const &d);
    virtual ~LineSegment_IsClosed_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbLineSegment *_underlying;

    bool _result;

    int resultType;
};

class LineSegment_IsBounded_AsyncWorker : public PromiseWorker
{
  public:
    LineSegment_IsBounded_AsyncWorker(MbLineSegment *_underlying, Napi::Promise::Deferred const &d);
    virtual ~LineSegment_IsBounded_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbLineSegment *_underlying;

    bool _result;

    int resultType;
};

class LineSegment_GetTMax_AsyncWorker : public PromiseWorker
{
  public:
    LineSegment_GetTMax_AsyncWorker(MbLineSegment *_underlying, Napi::Promise::Deferred const &d);
    virtual ~LineSegment_GetTMax_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbLineSegment *_underlying;

    double _result;

    int resultType;
};

class LineSegment_GetTMin_AsyncWorker : public PromiseWorker
{
  public:
    LineSegment_GetTMin_AsyncWorker(MbLineSegment *_underlying, Napi::Promise::Deferred const &d);
    virtual ~LineSegment_GetTMin_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbLineSegment *_underlying;

    double _result;

    int resultType;
};

class LineSegment_GetPeriod_AsyncWorker : public PromiseWorker
{
  public:
    LineSegment_GetPeriod_AsyncWorker(MbLineSegment *_underlying, Napi::Promise::Deferred const &d);
    virtual ~LineSegment_GetPeriod_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbLineSegment *_underlying;

    double _result;

    int resultType;
};

class LineSegment_GetWeightCentre_AsyncWorker : public PromiseWorker
{
  public:
    LineSegment_GetWeightCentre_AsyncWorker(MbLineSegment *_underlying, Napi::Promise::Deferred const &d);
    virtual ~LineSegment_GetWeightCentre_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbLineSegment *_underlying;

    MbCartPoint *point;

    int resultType;
};

class LineSegment_GetLimitPoint_AsyncWorker : public PromiseWorker
{
  public:
    LineSegment_GetLimitPoint_AsyncWorker(MbLineSegment *_underlying, Napi::Promise::Deferred const &d,
                                          ptrdiff_t number);
    virtual ~LineSegment_GetLimitPoint_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbLineSegment *_underlying;
    ptrdiff_t number;

    MbCartPoint *point;

    int resultType;
};

class LineSegment_PointOn_AsyncWorker : public PromiseWorker
{
  public:
    LineSegment_PointOn_AsyncWorker(MbLineSegment *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~LineSegment_PointOn_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbLineSegment *_underlying;
    double &t;

    MbCartPoint *p;

    int resultType;
};

class LineSegment__PointOn_AsyncWorker : public PromiseWorker
{
  public:
    LineSegment__PointOn_AsyncWorker(MbLineSegment *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~LineSegment__PointOn_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbLineSegment *_underlying;
    double &t;

    MbCartPoint *p;

    int resultType;
};

class LineSegment_Explore_AsyncWorker : public PromiseWorker
{
  public:
    LineSegment_Explore_AsyncWorker(MbLineSegment *_underlying, Napi::Promise::Deferred const &d, double &t, bool ext);
    virtual ~LineSegment_Explore_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbLineSegment *_underlying;
    double &t;
    bool ext;

    MbCartPoint *pnt;

    MbVector *fir;

    MbVector *sec;

    MbVector *thir;

    int resultType;
};

class LineSegment_FirstDer_AsyncWorker : public PromiseWorker
{
  public:
    LineSegment_FirstDer_AsyncWorker(MbLineSegment *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~LineSegment_FirstDer_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbLineSegment *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class LineSegment__FirstDer_AsyncWorker : public PromiseWorker
{
  public:
    LineSegment__FirstDer_AsyncWorker(MbLineSegment *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~LineSegment__FirstDer_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbLineSegment *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class LineSegment_SecondDer_AsyncWorker : public PromiseWorker
{
  public:
    LineSegment_SecondDer_AsyncWorker(MbLineSegment *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~LineSegment_SecondDer_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbLineSegment *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class LineSegment__SecondDer_AsyncWorker : public PromiseWorker
{
  public:
    LineSegment__SecondDer_AsyncWorker(MbLineSegment *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~LineSegment__SecondDer_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbLineSegment *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class LineSegment_Tangent_AsyncWorker : public PromiseWorker
{
  public:
    LineSegment_Tangent_AsyncWorker(MbLineSegment *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~LineSegment_Tangent_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbLineSegment *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class LineSegment__Tangent_AsyncWorker : public PromiseWorker
{
  public:
    LineSegment__Tangent_AsyncWorker(MbLineSegment *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~LineSegment__Tangent_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbLineSegment *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class LineSegment_Normal_AsyncWorker : public PromiseWorker
{
  public:
    LineSegment_Normal_AsyncWorker(MbLineSegment *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~LineSegment_Normal_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbLineSegment *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class LineSegment__Normal_AsyncWorker : public PromiseWorker
{
  public:
    LineSegment__Normal_AsyncWorker(MbLineSegment *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~LineSegment__Normal_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbLineSegment *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class LineSegment_PointRelative_AsyncWorker : public PromiseWorker
{
  public:
    LineSegment_PointRelative_AsyncWorker(MbLineSegment *_underlying, Napi::Promise::Deferred const &d,
                                          const MbCartPoint &pnt, double eps);
    virtual ~LineSegment_PointRelative_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbLineSegment *_underlying;
    const MbCartPoint &pnt;
    double eps;

    MbeItemLocation _result;

    int resultType;
};

class LineSegment_PointLocation_AsyncWorker : public PromiseWorker
{
  public:
    LineSegment_PointLocation_AsyncWorker(MbLineSegment *_underlying, Napi::Promise::Deferred const &d,
                                          const MbCartPoint &pnt, double eps);
    virtual ~LineSegment_PointLocation_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbLineSegment *_underlying;
    const MbCartPoint &pnt;
    double eps;

    MbeLocation _result;

    int resultType;
};

class LineSegment_IsA_AsyncWorker : public PromiseWorker
{
  public:
    LineSegment_IsA_AsyncWorker(MbLineSegment *_underlying, Napi::Promise::Deferred const &d);
    virtual ~LineSegment_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbLineSegment *_underlying;

    MbePlaneType _result;

    int resultType;
};

class LineSegment_Type_AsyncWorker : public PromiseWorker
{
  public:
    LineSegment_Type_AsyncWorker(MbLineSegment *_underlying, Napi::Promise::Deferred const &d);
    virtual ~LineSegment_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbLineSegment *_underlying;

    MbePlaneType _result;

    int resultType;
};

class LineSegment_Family_AsyncWorker : public PromiseWorker
{
  public:
    LineSegment_Family_AsyncWorker(MbLineSegment *_underlying, Napi::Promise::Deferred const &d);
    virtual ~LineSegment_Family_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbLineSegment *_underlying;

    MbePlaneType _result;

    int resultType;
};

class LineSegment_Move_AsyncWorker : public PromiseWorker
{
  public:
    LineSegment_Move_AsyncWorker(MbLineSegment *_underlying, Napi::Promise::Deferred const &d, const MbVector &to,
                                 MbRegTransform *iReg = NULL);
    virtual ~LineSegment_Move_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbLineSegment *_underlying;
    const MbVector &to;
    MbRegTransform *iReg = NULL;

    const MbSurface *newSurface;

    int resultType;
};

class LineSegment_Transform_AsyncWorker : public PromiseWorker
{
  public:
    LineSegment_Transform_AsyncWorker(MbLineSegment *_underlying, Napi::Promise::Deferred const &d,
                                      const MbMatrix &matr, MbRegTransform *iReg = NULL,
                                      const MbSurface *newSurface = NULL);
    virtual ~LineSegment_Transform_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbLineSegment *_underlying;
    const MbMatrix &matr;
    MbRegTransform *iReg = NULL;
    const MbSurface *newSurface = NULL;

    int resultType;
};

class LineSegment_Duplicate_AsyncWorker : public PromiseWorker
{
  public:
    LineSegment_Duplicate_AsyncWorker(MbLineSegment *_underlying, Napi::Promise::Deferred const &d,
                                      MbRegDuplicate *dup = NULL);
    virtual ~LineSegment_Duplicate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbLineSegment *_underlying;
    MbRegDuplicate *dup = NULL;

    MbPlaneItem *_result;

    int resultType;
};

class LineSegment_AddYourGabaritTo_AsyncWorker : public PromiseWorker
{
  public:
    LineSegment_AddYourGabaritTo_AsyncWorker(MbLineSegment *_underlying, Napi::Promise::Deferred const &d,
                                             MbRect &rect);
    virtual ~LineSegment_AddYourGabaritTo_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbLineSegment *_underlying;
    MbRect &rect;

    int resultType;
};

class LineSegment_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    LineSegment_GetUseCount_AsyncWorker(MbLineSegment *_underlying, Napi::Promise::Deferred const &d);
    virtual ~LineSegment_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbLineSegment *_underlying;

    refcount_t _result;

    int resultType;
};

class LineSegment_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    LineSegment_AddRef_AsyncWorker(MbLineSegment *_underlying, Napi::Promise::Deferred const &d);
    virtual ~LineSegment_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbLineSegment *_underlying;

    int resultType;
};

#endif
