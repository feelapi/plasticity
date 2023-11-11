// This is a generated file, modify: generate/templates/Hermit.h

#ifndef HERMIT_H
#define HERMIT_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cur_hermit.h>

#include "PolyCurve.h"
#include "PromiseWorker.h"

class Hermit : public Napi::ObjectWrap<Hermit>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbHermit *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    Hermit(const Napi::CallbackInfo &info);

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

    MbHermit *_underlying;

    ~Hermit();

  private:
};

class Hermit_GetPointsCount_AsyncWorker : public PromiseWorker
{
  public:
    Hermit_GetPointsCount_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Hermit_GetPointsCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbHermit *_underlying;

    size_t _result;

    int resultType;
};

class Hermit_GetPoint_AsyncWorker : public PromiseWorker
{
  public:
    Hermit_GetPoint_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d, ptrdiff_t index);
    virtual ~Hermit_GetPoint_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbHermit *_underlying;
    ptrdiff_t index;

    MbCartPoint *pnt;

    int resultType;
};

class Hermit_AddPoint_AsyncWorker : public PromiseWorker
{
  public:
    Hermit_AddPoint_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d, const MbCartPoint &pnt);
    virtual ~Hermit_AddPoint_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbHermit *_underlying;
    const MbCartPoint &pnt;

    int resultType;
};

class Hermit_Inverse_AsyncWorker : public PromiseWorker
{
  public:
    Hermit_Inverse_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d, MbRegTransform *iReg = NULL);
    virtual ~Hermit_Inverse_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbHermit *_underlying;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class Hermit_Trimmed_AsyncWorker : public PromiseWorker
{
  public:
    Hermit_Trimmed_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d, double t1, double t2,
                               int sense);
    virtual ~Hermit_Trimmed_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbHermit *_underlying;
    double t1;
    double t2;
    int sense;

    MbCurve *_result;

    int resultType;
};

class Hermit_IsStraight_AsyncWorker : public PromiseWorker
{
  public:
    Hermit_IsStraight_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d, bool ignoreParams = false);
    virtual ~Hermit_IsStraight_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbHermit *_underlying;
    bool ignoreParams = false;

    bool _result;

    int resultType;
};

class Hermit_IsClosed_AsyncWorker : public PromiseWorker
{
  public:
    Hermit_IsClosed_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Hermit_IsClosed_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbHermit *_underlying;

    bool _result;

    int resultType;
};

class Hermit_IsBounded_AsyncWorker : public PromiseWorker
{
  public:
    Hermit_IsBounded_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Hermit_IsBounded_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbHermit *_underlying;

    bool _result;

    int resultType;
};

class Hermit_GetTMax_AsyncWorker : public PromiseWorker
{
  public:
    Hermit_GetTMax_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Hermit_GetTMax_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbHermit *_underlying;

    double _result;

    int resultType;
};

class Hermit_GetTMin_AsyncWorker : public PromiseWorker
{
  public:
    Hermit_GetTMin_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Hermit_GetTMin_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbHermit *_underlying;

    double _result;

    int resultType;
};

class Hermit_GetPeriod_AsyncWorker : public PromiseWorker
{
  public:
    Hermit_GetPeriod_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Hermit_GetPeriod_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbHermit *_underlying;

    double _result;

    int resultType;
};

class Hermit_GetWeightCentre_AsyncWorker : public PromiseWorker
{
  public:
    Hermit_GetWeightCentre_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Hermit_GetWeightCentre_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbHermit *_underlying;

    MbCartPoint *point;

    int resultType;
};

class Hermit_GetLimitPoint_AsyncWorker : public PromiseWorker
{
  public:
    Hermit_GetLimitPoint_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d, ptrdiff_t number);
    virtual ~Hermit_GetLimitPoint_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbHermit *_underlying;
    ptrdiff_t number;

    MbCartPoint *point;

    int resultType;
};

class Hermit_PointOn_AsyncWorker : public PromiseWorker
{
  public:
    Hermit_PointOn_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Hermit_PointOn_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbHermit *_underlying;
    double &t;

    MbCartPoint *p;

    int resultType;
};

class Hermit__PointOn_AsyncWorker : public PromiseWorker
{
  public:
    Hermit__PointOn_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Hermit__PointOn_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbHermit *_underlying;
    double &t;

    MbCartPoint *p;

    int resultType;
};

class Hermit_Explore_AsyncWorker : public PromiseWorker
{
  public:
    Hermit_Explore_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d, double &t, bool ext);
    virtual ~Hermit_Explore_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbHermit *_underlying;
    double &t;
    bool ext;

    MbCartPoint *pnt;

    MbVector *fir;

    MbVector *sec;

    MbVector *thir;

    int resultType;
};

class Hermit_FirstDer_AsyncWorker : public PromiseWorker
{
  public:
    Hermit_FirstDer_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Hermit_FirstDer_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbHermit *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Hermit__FirstDer_AsyncWorker : public PromiseWorker
{
  public:
    Hermit__FirstDer_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Hermit__FirstDer_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbHermit *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Hermit_SecondDer_AsyncWorker : public PromiseWorker
{
  public:
    Hermit_SecondDer_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Hermit_SecondDer_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbHermit *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Hermit__SecondDer_AsyncWorker : public PromiseWorker
{
  public:
    Hermit__SecondDer_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Hermit__SecondDer_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbHermit *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Hermit_Tangent_AsyncWorker : public PromiseWorker
{
  public:
    Hermit_Tangent_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Hermit_Tangent_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbHermit *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Hermit__Tangent_AsyncWorker : public PromiseWorker
{
  public:
    Hermit__Tangent_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Hermit__Tangent_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbHermit *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Hermit_Normal_AsyncWorker : public PromiseWorker
{
  public:
    Hermit_Normal_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Hermit_Normal_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbHermit *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Hermit__Normal_AsyncWorker : public PromiseWorker
{
  public:
    Hermit__Normal_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Hermit__Normal_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbHermit *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Hermit_PointRelative_AsyncWorker : public PromiseWorker
{
  public:
    Hermit_PointRelative_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d, const MbCartPoint &pnt,
                                     double eps);
    virtual ~Hermit_PointRelative_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbHermit *_underlying;
    const MbCartPoint &pnt;
    double eps;

    MbeItemLocation _result;

    int resultType;
};

class Hermit_PointLocation_AsyncWorker : public PromiseWorker
{
  public:
    Hermit_PointLocation_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d, const MbCartPoint &pnt,
                                     double eps);
    virtual ~Hermit_PointLocation_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbHermit *_underlying;
    const MbCartPoint &pnt;
    double eps;

    MbeLocation _result;

    int resultType;
};

class Hermit_IsA_AsyncWorker : public PromiseWorker
{
  public:
    Hermit_IsA_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Hermit_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbHermit *_underlying;

    MbePlaneType _result;

    int resultType;
};

class Hermit_Type_AsyncWorker : public PromiseWorker
{
  public:
    Hermit_Type_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Hermit_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbHermit *_underlying;

    MbePlaneType _result;

    int resultType;
};

class Hermit_Family_AsyncWorker : public PromiseWorker
{
  public:
    Hermit_Family_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Hermit_Family_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbHermit *_underlying;

    MbePlaneType _result;

    int resultType;
};

class Hermit_Move_AsyncWorker : public PromiseWorker
{
  public:
    Hermit_Move_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d, const MbVector &to,
                            MbRegTransform *iReg = NULL);
    virtual ~Hermit_Move_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbHermit *_underlying;
    const MbVector &to;
    MbRegTransform *iReg = NULL;

    const MbSurface *newSurface;

    int resultType;
};

class Hermit_Transform_AsyncWorker : public PromiseWorker
{
  public:
    Hermit_Transform_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d, const MbMatrix &matr,
                                 MbRegTransform *iReg = NULL, const MbSurface *newSurface = NULL);
    virtual ~Hermit_Transform_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbHermit *_underlying;
    const MbMatrix &matr;
    MbRegTransform *iReg = NULL;
    const MbSurface *newSurface = NULL;

    int resultType;
};

class Hermit_Duplicate_AsyncWorker : public PromiseWorker
{
  public:
    Hermit_Duplicate_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d, MbRegDuplicate *dup = NULL);
    virtual ~Hermit_Duplicate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbHermit *_underlying;
    MbRegDuplicate *dup = NULL;

    MbPlaneItem *_result;

    int resultType;
};

class Hermit_AddYourGabaritTo_AsyncWorker : public PromiseWorker
{
  public:
    Hermit_AddYourGabaritTo_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d, MbRect &rect);
    virtual ~Hermit_AddYourGabaritTo_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbHermit *_underlying;
    MbRect &rect;

    int resultType;
};

class Hermit_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    Hermit_GetUseCount_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Hermit_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbHermit *_underlying;

    refcount_t _result;

    int resultType;
};

class Hermit_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    Hermit_AddRef_AsyncWorker(MbHermit *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Hermit_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbHermit *_underlying;

    int resultType;
};

#endif
