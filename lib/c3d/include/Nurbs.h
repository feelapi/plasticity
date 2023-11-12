// This is a generated file, modify: generate/templates/Nurbs.h

#ifndef NURBS_H
#define NURBS_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cur_nurbs.h>

#include "PolyCurve.h"
#include "PromiseWorker.h"

class Nurbs : public Napi::ObjectWrap<Nurbs>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbNurbs *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    Nurbs(const Napi::CallbackInfo &info);

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

    MbNurbs *_underlying;

    ~Nurbs();

  private:
};

class Nurbs_GetPointsCount_AsyncWorker : public PromiseWorker
{
  public:
    Nurbs_GetPointsCount_AsyncWorker(MbNurbs *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Nurbs_GetPointsCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNurbs *_underlying;

    size_t _result;

    int resultType;
};

class Nurbs_GetPoint_AsyncWorker : public PromiseWorker
{
  public:
    Nurbs_GetPoint_AsyncWorker(MbNurbs *_underlying, Napi::Promise::Deferred const &d, ptrdiff_t index);
    virtual ~Nurbs_GetPoint_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNurbs *_underlying;
    ptrdiff_t index;

    MbCartPoint *pnt;

    int resultType;
};

class Nurbs_AddPoint_AsyncWorker : public PromiseWorker
{
  public:
    Nurbs_AddPoint_AsyncWorker(MbNurbs *_underlying, Napi::Promise::Deferred const &d, const MbCartPoint &pnt);
    virtual ~Nurbs_AddPoint_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNurbs *_underlying;
    const MbCartPoint &pnt;

    int resultType;
};

class Nurbs_Inverse_AsyncWorker : public PromiseWorker
{
  public:
    Nurbs_Inverse_AsyncWorker(MbNurbs *_underlying, Napi::Promise::Deferred const &d, MbRegTransform *iReg = NULL);
    virtual ~Nurbs_Inverse_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNurbs *_underlying;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class Nurbs_Trimmed_AsyncWorker : public PromiseWorker
{
  public:
    Nurbs_Trimmed_AsyncWorker(MbNurbs *_underlying, Napi::Promise::Deferred const &d, double t1, double t2, int sense);
    virtual ~Nurbs_Trimmed_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNurbs *_underlying;
    double t1;
    double t2;
    int sense;

    MbCurve *_result;

    int resultType;
};

class Nurbs_IsStraight_AsyncWorker : public PromiseWorker
{
  public:
    Nurbs_IsStraight_AsyncWorker(MbNurbs *_underlying, Napi::Promise::Deferred const &d, bool ignoreParams = false);
    virtual ~Nurbs_IsStraight_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNurbs *_underlying;
    bool ignoreParams = false;

    bool _result;

    int resultType;
};

class Nurbs_IsClosed_AsyncWorker : public PromiseWorker
{
  public:
    Nurbs_IsClosed_AsyncWorker(MbNurbs *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Nurbs_IsClosed_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNurbs *_underlying;

    bool _result;

    int resultType;
};

class Nurbs_IsBounded_AsyncWorker : public PromiseWorker
{
  public:
    Nurbs_IsBounded_AsyncWorker(MbNurbs *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Nurbs_IsBounded_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNurbs *_underlying;

    bool _result;

    int resultType;
};

class Nurbs_GetTMax_AsyncWorker : public PromiseWorker
{
  public:
    Nurbs_GetTMax_AsyncWorker(MbNurbs *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Nurbs_GetTMax_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNurbs *_underlying;

    double _result;

    int resultType;
};

class Nurbs_GetTMin_AsyncWorker : public PromiseWorker
{
  public:
    Nurbs_GetTMin_AsyncWorker(MbNurbs *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Nurbs_GetTMin_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNurbs *_underlying;

    double _result;

    int resultType;
};

class Nurbs_GetPeriod_AsyncWorker : public PromiseWorker
{
  public:
    Nurbs_GetPeriod_AsyncWorker(MbNurbs *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Nurbs_GetPeriod_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNurbs *_underlying;

    double _result;

    int resultType;
};

class Nurbs_GetWeightCentre_AsyncWorker : public PromiseWorker
{
  public:
    Nurbs_GetWeightCentre_AsyncWorker(MbNurbs *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Nurbs_GetWeightCentre_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNurbs *_underlying;

    MbCartPoint *point;

    int resultType;
};

class Nurbs_GetLimitPoint_AsyncWorker : public PromiseWorker
{
  public:
    Nurbs_GetLimitPoint_AsyncWorker(MbNurbs *_underlying, Napi::Promise::Deferred const &d, ptrdiff_t number);
    virtual ~Nurbs_GetLimitPoint_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNurbs *_underlying;
    ptrdiff_t number;

    MbCartPoint *point;

    int resultType;
};

class Nurbs_PointOn_AsyncWorker : public PromiseWorker
{
  public:
    Nurbs_PointOn_AsyncWorker(MbNurbs *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Nurbs_PointOn_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNurbs *_underlying;
    double &t;

    MbCartPoint *p;

    int resultType;
};

class Nurbs__PointOn_AsyncWorker : public PromiseWorker
{
  public:
    Nurbs__PointOn_AsyncWorker(MbNurbs *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Nurbs__PointOn_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNurbs *_underlying;
    double &t;

    MbCartPoint *p;

    int resultType;
};

class Nurbs_Explore_AsyncWorker : public PromiseWorker
{
  public:
    Nurbs_Explore_AsyncWorker(MbNurbs *_underlying, Napi::Promise::Deferred const &d, double &t, bool ext);
    virtual ~Nurbs_Explore_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNurbs *_underlying;
    double &t;
    bool ext;

    MbCartPoint *pnt;

    MbVector *fir;

    MbVector *sec;

    MbVector *thir;

    int resultType;
};

class Nurbs_FirstDer_AsyncWorker : public PromiseWorker
{
  public:
    Nurbs_FirstDer_AsyncWorker(MbNurbs *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Nurbs_FirstDer_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNurbs *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Nurbs__FirstDer_AsyncWorker : public PromiseWorker
{
  public:
    Nurbs__FirstDer_AsyncWorker(MbNurbs *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Nurbs__FirstDer_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNurbs *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Nurbs_SecondDer_AsyncWorker : public PromiseWorker
{
  public:
    Nurbs_SecondDer_AsyncWorker(MbNurbs *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Nurbs_SecondDer_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNurbs *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Nurbs__SecondDer_AsyncWorker : public PromiseWorker
{
  public:
    Nurbs__SecondDer_AsyncWorker(MbNurbs *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Nurbs__SecondDer_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNurbs *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Nurbs_Tangent_AsyncWorker : public PromiseWorker
{
  public:
    Nurbs_Tangent_AsyncWorker(MbNurbs *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Nurbs_Tangent_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNurbs *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Nurbs__Tangent_AsyncWorker : public PromiseWorker
{
  public:
    Nurbs__Tangent_AsyncWorker(MbNurbs *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Nurbs__Tangent_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNurbs *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Nurbs_Normal_AsyncWorker : public PromiseWorker
{
  public:
    Nurbs_Normal_AsyncWorker(MbNurbs *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Nurbs_Normal_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNurbs *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Nurbs__Normal_AsyncWorker : public PromiseWorker
{
  public:
    Nurbs__Normal_AsyncWorker(MbNurbs *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Nurbs__Normal_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNurbs *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Nurbs_PointRelative_AsyncWorker : public PromiseWorker
{
  public:
    Nurbs_PointRelative_AsyncWorker(MbNurbs *_underlying, Napi::Promise::Deferred const &d, const MbCartPoint &pnt,
                                    double eps);
    virtual ~Nurbs_PointRelative_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNurbs *_underlying;
    const MbCartPoint &pnt;
    double eps;

    MbeItemLocation _result;

    int resultType;
};

class Nurbs_PointLocation_AsyncWorker : public PromiseWorker
{
  public:
    Nurbs_PointLocation_AsyncWorker(MbNurbs *_underlying, Napi::Promise::Deferred const &d, const MbCartPoint &pnt,
                                    double eps);
    virtual ~Nurbs_PointLocation_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNurbs *_underlying;
    const MbCartPoint &pnt;
    double eps;

    MbeLocation _result;

    int resultType;
};

class Nurbs_IsA_AsyncWorker : public PromiseWorker
{
  public:
    Nurbs_IsA_AsyncWorker(MbNurbs *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Nurbs_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNurbs *_underlying;

    MbePlaneType _result;

    int resultType;
};

class Nurbs_Type_AsyncWorker : public PromiseWorker
{
  public:
    Nurbs_Type_AsyncWorker(MbNurbs *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Nurbs_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNurbs *_underlying;

    MbePlaneType _result;

    int resultType;
};

class Nurbs_Family_AsyncWorker : public PromiseWorker
{
  public:
    Nurbs_Family_AsyncWorker(MbNurbs *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Nurbs_Family_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNurbs *_underlying;

    MbePlaneType _result;

    int resultType;
};

class Nurbs_Move_AsyncWorker : public PromiseWorker
{
  public:
    Nurbs_Move_AsyncWorker(MbNurbs *_underlying, Napi::Promise::Deferred const &d, const MbVector &to,
                           MbRegTransform *iReg = NULL);
    virtual ~Nurbs_Move_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNurbs *_underlying;
    const MbVector &to;
    MbRegTransform *iReg = NULL;

    const MbSurface *newSurface;

    int resultType;
};

class Nurbs_Transform_AsyncWorker : public PromiseWorker
{
  public:
    Nurbs_Transform_AsyncWorker(MbNurbs *_underlying, Napi::Promise::Deferred const &d, const MbMatrix &matr,
                                MbRegTransform *iReg = NULL, const MbSurface *newSurface = NULL);
    virtual ~Nurbs_Transform_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNurbs *_underlying;
    const MbMatrix &matr;
    MbRegTransform *iReg = NULL;
    const MbSurface *newSurface = NULL;

    int resultType;
};

class Nurbs_Duplicate_AsyncWorker : public PromiseWorker
{
  public:
    Nurbs_Duplicate_AsyncWorker(MbNurbs *_underlying, Napi::Promise::Deferred const &d, MbRegDuplicate *dup = NULL);
    virtual ~Nurbs_Duplicate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNurbs *_underlying;
    MbRegDuplicate *dup = NULL;

    MbPlaneItem *_result;

    int resultType;
};

class Nurbs_AddYourGabaritTo_AsyncWorker : public PromiseWorker
{
  public:
    Nurbs_AddYourGabaritTo_AsyncWorker(MbNurbs *_underlying, Napi::Promise::Deferred const &d, MbRect &rect);
    virtual ~Nurbs_AddYourGabaritTo_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNurbs *_underlying;
    MbRect &rect;

    int resultType;
};

class Nurbs_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    Nurbs_GetUseCount_AsyncWorker(MbNurbs *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Nurbs_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNurbs *_underlying;

    refcount_t _result;

    int resultType;
};

class Nurbs_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    Nurbs_AddRef_AsyncWorker(MbNurbs *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Nurbs_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNurbs *_underlying;

    int resultType;
};

#endif
