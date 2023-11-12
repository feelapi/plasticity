// This is a generated file, modify: generate/templates/Bezier.h

#ifndef BEZIER_H
#define BEZIER_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cur_bezier.h>

#include "PolyCurve.h"
#include "PromiseWorker.h"

class Bezier : public Napi::ObjectWrap<Bezier>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbBezier *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    Bezier(const Napi::CallbackInfo &info);

    Napi::Value GetPointsCount(const Napi::CallbackInfo &info);
    Napi::Value GetPointsCount_async(const Napi::CallbackInfo &info);
    Napi::Value GetPoint(const Napi::CallbackInfo &info);
    Napi::Value GetPoint_async(const Napi::CallbackInfo &info);
    Napi::Value AddPoint(const Napi::CallbackInfo &info);
    Napi::Value AddPoint_async(const Napi::CallbackInfo &info);
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

    MbBezier *_underlying;

    ~Bezier();

  private:
};

class Bezier_GetPointsCount_AsyncWorker : public PromiseWorker
{
  public:
    Bezier_GetPointsCount_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Bezier_GetPointsCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier *_underlying;

    size_t _result;

    int resultType;
};

class Bezier_GetPoint_AsyncWorker : public PromiseWorker
{
  public:
    Bezier_GetPoint_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d, ptrdiff_t index);
    virtual ~Bezier_GetPoint_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier *_underlying;
    ptrdiff_t index;

    MbCartPoint *pnt;

    int resultType;
};

class Bezier_AddPoint_AsyncWorker : public PromiseWorker
{
  public:
    Bezier_AddPoint_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d, const MbCartPoint &pnt);
    virtual ~Bezier_AddPoint_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier *_underlying;
    const MbCartPoint &pnt;

    int resultType;
};

class Bezier_Inverse_AsyncWorker : public PromiseWorker
{
  public:
    Bezier_Inverse_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d, MbRegTransform *iReg = NULL);
    virtual ~Bezier_Inverse_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier *_underlying;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class Bezier_Trimmed_AsyncWorker : public PromiseWorker
{
  public:
    Bezier_Trimmed_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d, double t1, double t2,
                               int sense);
    virtual ~Bezier_Trimmed_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier *_underlying;
    double t1;
    double t2;
    int sense;

    MbCurve *_result;

    int resultType;
};

class Bezier_IsStraight_AsyncWorker : public PromiseWorker
{
  public:
    Bezier_IsStraight_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d, bool ignoreParams = false);
    virtual ~Bezier_IsStraight_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier *_underlying;
    bool ignoreParams = false;

    bool _result;

    int resultType;
};

class Bezier_IsClosed_AsyncWorker : public PromiseWorker
{
  public:
    Bezier_IsClosed_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Bezier_IsClosed_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier *_underlying;

    bool _result;

    int resultType;
};

class Bezier_IsBounded_AsyncWorker : public PromiseWorker
{
  public:
    Bezier_IsBounded_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Bezier_IsBounded_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier *_underlying;

    bool _result;

    int resultType;
};

class Bezier_GetTMax_AsyncWorker : public PromiseWorker
{
  public:
    Bezier_GetTMax_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Bezier_GetTMax_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier *_underlying;

    double _result;

    int resultType;
};

class Bezier_GetTMin_AsyncWorker : public PromiseWorker
{
  public:
    Bezier_GetTMin_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Bezier_GetTMin_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier *_underlying;

    double _result;

    int resultType;
};

class Bezier_GetPeriod_AsyncWorker : public PromiseWorker
{
  public:
    Bezier_GetPeriod_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Bezier_GetPeriod_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier *_underlying;

    double _result;

    int resultType;
};

class Bezier_GetWeightCentre_AsyncWorker : public PromiseWorker
{
  public:
    Bezier_GetWeightCentre_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Bezier_GetWeightCentre_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier *_underlying;

    MbCartPoint *point;

    int resultType;
};

class Bezier_GetLimitPoint_AsyncWorker : public PromiseWorker
{
  public:
    Bezier_GetLimitPoint_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d, ptrdiff_t number);
    virtual ~Bezier_GetLimitPoint_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier *_underlying;
    ptrdiff_t number;

    MbCartPoint *point;

    int resultType;
};

class Bezier_PointOn_AsyncWorker : public PromiseWorker
{
  public:
    Bezier_PointOn_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Bezier_PointOn_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier *_underlying;
    double &t;

    MbCartPoint *p;

    int resultType;
};

class Bezier__PointOn_AsyncWorker : public PromiseWorker
{
  public:
    Bezier__PointOn_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Bezier__PointOn_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier *_underlying;
    double &t;

    MbCartPoint *p;

    int resultType;
};

class Bezier_Explore_AsyncWorker : public PromiseWorker
{
  public:
    Bezier_Explore_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d, double &t, bool ext);
    virtual ~Bezier_Explore_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier *_underlying;
    double &t;
    bool ext;

    MbCartPoint *pnt;

    MbVector *fir;

    MbVector *sec;

    MbVector *thir;

    int resultType;
};

class Bezier_FirstDer_AsyncWorker : public PromiseWorker
{
  public:
    Bezier_FirstDer_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Bezier_FirstDer_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Bezier__FirstDer_AsyncWorker : public PromiseWorker
{
  public:
    Bezier__FirstDer_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Bezier__FirstDer_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Bezier_SecondDer_AsyncWorker : public PromiseWorker
{
  public:
    Bezier_SecondDer_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Bezier_SecondDer_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Bezier__SecondDer_AsyncWorker : public PromiseWorker
{
  public:
    Bezier__SecondDer_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Bezier__SecondDer_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Bezier_Tangent_AsyncWorker : public PromiseWorker
{
  public:
    Bezier_Tangent_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Bezier_Tangent_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Bezier__Tangent_AsyncWorker : public PromiseWorker
{
  public:
    Bezier__Tangent_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Bezier__Tangent_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Bezier_Normal_AsyncWorker : public PromiseWorker
{
  public:
    Bezier_Normal_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Bezier_Normal_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Bezier__Normal_AsyncWorker : public PromiseWorker
{
  public:
    Bezier__Normal_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Bezier__Normal_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Bezier_PointRelative_AsyncWorker : public PromiseWorker
{
  public:
    Bezier_PointRelative_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d, const MbCartPoint &pnt,
                                     double eps);
    virtual ~Bezier_PointRelative_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier *_underlying;
    const MbCartPoint &pnt;
    double eps;

    MbeItemLocation _result;

    int resultType;
};

class Bezier_PointLocation_AsyncWorker : public PromiseWorker
{
  public:
    Bezier_PointLocation_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d, const MbCartPoint &pnt,
                                     double eps);
    virtual ~Bezier_PointLocation_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier *_underlying;
    const MbCartPoint &pnt;
    double eps;

    MbeLocation _result;

    int resultType;
};

class Bezier_IsA_AsyncWorker : public PromiseWorker
{
  public:
    Bezier_IsA_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Bezier_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier *_underlying;

    MbePlaneType _result;

    int resultType;
};

class Bezier_Type_AsyncWorker : public PromiseWorker
{
  public:
    Bezier_Type_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Bezier_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier *_underlying;

    MbePlaneType _result;

    int resultType;
};

class Bezier_Family_AsyncWorker : public PromiseWorker
{
  public:
    Bezier_Family_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Bezier_Family_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier *_underlying;

    MbePlaneType _result;

    int resultType;
};

class Bezier_Move_AsyncWorker : public PromiseWorker
{
  public:
    Bezier_Move_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d, const MbVector &to,
                            MbRegTransform *iReg = NULL);
    virtual ~Bezier_Move_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier *_underlying;
    const MbVector &to;
    MbRegTransform *iReg = NULL;

    const MbSurface *newSurface;

    int resultType;
};

class Bezier_Transform_AsyncWorker : public PromiseWorker
{
  public:
    Bezier_Transform_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d, const MbMatrix &matr,
                                 MbRegTransform *iReg = NULL, const MbSurface *newSurface = NULL);
    virtual ~Bezier_Transform_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier *_underlying;
    const MbMatrix &matr;
    MbRegTransform *iReg = NULL;
    const MbSurface *newSurface = NULL;

    int resultType;
};

class Bezier_Duplicate_AsyncWorker : public PromiseWorker
{
  public:
    Bezier_Duplicate_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d, MbRegDuplicate *dup = NULL);
    virtual ~Bezier_Duplicate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier *_underlying;
    MbRegDuplicate *dup = NULL;

    MbPlaneItem *_result;

    int resultType;
};

class Bezier_AddYourGabaritTo_AsyncWorker : public PromiseWorker
{
  public:
    Bezier_AddYourGabaritTo_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d, MbRect &rect);
    virtual ~Bezier_AddYourGabaritTo_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier *_underlying;
    MbRect &rect;

    int resultType;
};

class Bezier_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    Bezier_GetUseCount_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Bezier_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier *_underlying;

    refcount_t _result;

    int resultType;
};

class Bezier_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    Bezier_AddRef_AsyncWorker(MbBezier *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Bezier_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier *_underlying;

    int resultType;
};

#endif
