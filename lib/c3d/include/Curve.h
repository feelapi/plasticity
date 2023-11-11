// This is a generated file, modify: generate/templates/Curve.h

#ifndef CURVE_H
#define CURVE_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <curve.h>

#include "PlaneItem.h"
#include "PromiseWorker.h"

class Curve : public Napi::ObjectWrap<Curve>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbCurve *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    Curve(const Napi::CallbackInfo &info);

    Napi::Value Cast(const Napi::CallbackInfo &info);
    Napi::Value Cast_async(const Napi::CallbackInfo &info);
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

    MbCurve *_underlying;

    ~Curve();

  private:
};

class Curve_Inverse_AsyncWorker : public PromiseWorker
{
  public:
    Curve_Inverse_AsyncWorker(MbCurve *_underlying, Napi::Promise::Deferred const &d, MbRegTransform *iReg = NULL);
    virtual ~Curve_Inverse_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurve *_underlying;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class Curve_Trimmed_AsyncWorker : public PromiseWorker
{
  public:
    Curve_Trimmed_AsyncWorker(MbCurve *_underlying, Napi::Promise::Deferred const &d, double t1, double t2, int sense);
    virtual ~Curve_Trimmed_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurve *_underlying;
    double t1;
    double t2;
    int sense;

    MbCurve *_result;

    int resultType;
};

class Curve_IsStraight_AsyncWorker : public PromiseWorker
{
  public:
    Curve_IsStraight_AsyncWorker(MbCurve *_underlying, Napi::Promise::Deferred const &d, bool ignoreParams = false);
    virtual ~Curve_IsStraight_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurve *_underlying;
    bool ignoreParams = false;

    bool _result;

    int resultType;
};

class Curve_IsClosed_AsyncWorker : public PromiseWorker
{
  public:
    Curve_IsClosed_AsyncWorker(MbCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Curve_IsClosed_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurve *_underlying;

    bool _result;

    int resultType;
};

class Curve_IsBounded_AsyncWorker : public PromiseWorker
{
  public:
    Curve_IsBounded_AsyncWorker(MbCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Curve_IsBounded_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurve *_underlying;

    bool _result;

    int resultType;
};

class Curve_GetTMax_AsyncWorker : public PromiseWorker
{
  public:
    Curve_GetTMax_AsyncWorker(MbCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Curve_GetTMax_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurve *_underlying;

    double _result;

    int resultType;
};

class Curve_GetTMin_AsyncWorker : public PromiseWorker
{
  public:
    Curve_GetTMin_AsyncWorker(MbCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Curve_GetTMin_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurve *_underlying;

    double _result;

    int resultType;
};

class Curve_GetPeriod_AsyncWorker : public PromiseWorker
{
  public:
    Curve_GetPeriod_AsyncWorker(MbCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Curve_GetPeriod_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurve *_underlying;

    double _result;

    int resultType;
};

class Curve_GetWeightCentre_AsyncWorker : public PromiseWorker
{
  public:
    Curve_GetWeightCentre_AsyncWorker(MbCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Curve_GetWeightCentre_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurve *_underlying;

    MbCartPoint *point;

    int resultType;
};

class Curve_GetLimitPoint_AsyncWorker : public PromiseWorker
{
  public:
    Curve_GetLimitPoint_AsyncWorker(MbCurve *_underlying, Napi::Promise::Deferred const &d, ptrdiff_t number);
    virtual ~Curve_GetLimitPoint_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurve *_underlying;
    ptrdiff_t number;

    MbCartPoint *point;

    int resultType;
};

class Curve_PointOn_AsyncWorker : public PromiseWorker
{
  public:
    Curve_PointOn_AsyncWorker(MbCurve *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Curve_PointOn_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurve *_underlying;
    double &t;

    MbCartPoint *p;

    int resultType;
};

class Curve__PointOn_AsyncWorker : public PromiseWorker
{
  public:
    Curve__PointOn_AsyncWorker(MbCurve *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Curve__PointOn_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurve *_underlying;
    double &t;

    MbCartPoint *p;

    int resultType;
};

class Curve_Explore_AsyncWorker : public PromiseWorker
{
  public:
    Curve_Explore_AsyncWorker(MbCurve *_underlying, Napi::Promise::Deferred const &d, double &t, bool ext);
    virtual ~Curve_Explore_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurve *_underlying;
    double &t;
    bool ext;

    MbCartPoint *pnt;

    MbVector *fir;

    MbVector *sec;

    MbVector *thir;

    int resultType;
};

class Curve_FirstDer_AsyncWorker : public PromiseWorker
{
  public:
    Curve_FirstDer_AsyncWorker(MbCurve *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Curve_FirstDer_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurve *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Curve__FirstDer_AsyncWorker : public PromiseWorker
{
  public:
    Curve__FirstDer_AsyncWorker(MbCurve *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Curve__FirstDer_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurve *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Curve_SecondDer_AsyncWorker : public PromiseWorker
{
  public:
    Curve_SecondDer_AsyncWorker(MbCurve *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Curve_SecondDer_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurve *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Curve__SecondDer_AsyncWorker : public PromiseWorker
{
  public:
    Curve__SecondDer_AsyncWorker(MbCurve *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Curve__SecondDer_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurve *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Curve_Tangent_AsyncWorker : public PromiseWorker
{
  public:
    Curve_Tangent_AsyncWorker(MbCurve *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Curve_Tangent_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurve *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Curve__Tangent_AsyncWorker : public PromiseWorker
{
  public:
    Curve__Tangent_AsyncWorker(MbCurve *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Curve__Tangent_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurve *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Curve_Normal_AsyncWorker : public PromiseWorker
{
  public:
    Curve_Normal_AsyncWorker(MbCurve *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Curve_Normal_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurve *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Curve__Normal_AsyncWorker : public PromiseWorker
{
  public:
    Curve__Normal_AsyncWorker(MbCurve *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Curve__Normal_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurve *_underlying;
    double &t;

    MbVector *v;

    int resultType;
};

class Curve_PointRelative_AsyncWorker : public PromiseWorker
{
  public:
    Curve_PointRelative_AsyncWorker(MbCurve *_underlying, Napi::Promise::Deferred const &d, const MbCartPoint &pnt,
                                    double eps);
    virtual ~Curve_PointRelative_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurve *_underlying;
    const MbCartPoint &pnt;
    double eps;

    MbeItemLocation _result;

    int resultType;
};

class Curve_PointLocation_AsyncWorker : public PromiseWorker
{
  public:
    Curve_PointLocation_AsyncWorker(MbCurve *_underlying, Napi::Promise::Deferred const &d, const MbCartPoint &pnt,
                                    double eps);
    virtual ~Curve_PointLocation_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurve *_underlying;
    const MbCartPoint &pnt;
    double eps;

    MbeLocation _result;

    int resultType;
};

class Curve_IsA_AsyncWorker : public PromiseWorker
{
  public:
    Curve_IsA_AsyncWorker(MbCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Curve_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurve *_underlying;

    MbePlaneType _result;

    int resultType;
};

class Curve_Type_AsyncWorker : public PromiseWorker
{
  public:
    Curve_Type_AsyncWorker(MbCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Curve_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurve *_underlying;

    MbePlaneType _result;

    int resultType;
};

class Curve_Family_AsyncWorker : public PromiseWorker
{
  public:
    Curve_Family_AsyncWorker(MbCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Curve_Family_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurve *_underlying;

    MbePlaneType _result;

    int resultType;
};

class Curve_Move_AsyncWorker : public PromiseWorker
{
  public:
    Curve_Move_AsyncWorker(MbCurve *_underlying, Napi::Promise::Deferred const &d, const MbVector &to,
                           MbRegTransform *iReg = NULL);
    virtual ~Curve_Move_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurve *_underlying;
    const MbVector &to;
    MbRegTransform *iReg = NULL;

    const MbSurface *newSurface;

    int resultType;
};

class Curve_Transform_AsyncWorker : public PromiseWorker
{
  public:
    Curve_Transform_AsyncWorker(MbCurve *_underlying, Napi::Promise::Deferred const &d, const MbMatrix &matr,
                                MbRegTransform *iReg = NULL, const MbSurface *newSurface = NULL);
    virtual ~Curve_Transform_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurve *_underlying;
    const MbMatrix &matr;
    MbRegTransform *iReg = NULL;
    const MbSurface *newSurface = NULL;

    int resultType;
};

class Curve_Duplicate_AsyncWorker : public PromiseWorker
{
  public:
    Curve_Duplicate_AsyncWorker(MbCurve *_underlying, Napi::Promise::Deferred const &d, MbRegDuplicate *dup = NULL);
    virtual ~Curve_Duplicate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurve *_underlying;
    MbRegDuplicate *dup = NULL;

    MbPlaneItem *_result;

    int resultType;
};

class Curve_AddYourGabaritTo_AsyncWorker : public PromiseWorker
{
  public:
    Curve_AddYourGabaritTo_AsyncWorker(MbCurve *_underlying, Napi::Promise::Deferred const &d, MbRect &rect);
    virtual ~Curve_AddYourGabaritTo_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurve *_underlying;
    MbRect &rect;

    int resultType;
};

class Curve_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    Curve_GetUseCount_AsyncWorker(MbCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Curve_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurve *_underlying;

    refcount_t _result;

    int resultType;
};

class Curve_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    Curve_AddRef_AsyncWorker(MbCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Curve_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurve *_underlying;

    int resultType;
};

#endif
