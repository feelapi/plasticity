// This is a generated file, modify: generate/templates/Arc3D.h

#ifndef ARC3D_H
#define ARC3D_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cur_arc3d.h>

#include "CartPoint3D.h"
#include "Curve3D.h"
#include "Placement3D.h"
#include "Arc.h"
#include "PromiseWorker.h"

class Arc3D : public Napi::ObjectWrap<Arc3D>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbArc3D *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    Arc3D(const Napi::CallbackInfo &info);

    Napi::Value SetLimitPoint(const Napi::CallbackInfo &info);
    Napi::Value SetLimitPoint_async(const Napi::CallbackInfo &info);
    Napi::Value SetRadius(const Napi::CallbackInfo &info);
    Napi::Value SetRadius_async(const Napi::CallbackInfo &info);
    Napi::Value SetRadiusA(const Napi::CallbackInfo &info);
    Napi::Value SetRadiusA_async(const Napi::CallbackInfo &info);
    Napi::Value SetRadiusB(const Napi::CallbackInfo &info);
    Napi::Value SetRadiusB_async(const Napi::CallbackInfo &info);
    Napi::Value GetRadius(const Napi::CallbackInfo &info);
    Napi::Value GetRadius_async(const Napi::CallbackInfo &info);
    Napi::Value GetRadiusA(const Napi::CallbackInfo &info);
    Napi::Value GetRadiusA_async(const Napi::CallbackInfo &info);
    Napi::Value GetRadiusB(const Napi::CallbackInfo &info);
    Napi::Value GetRadiusB_async(const Napi::CallbackInfo &info);
    Napi::Value GetAngle(const Napi::CallbackInfo &info);
    Napi::Value GetAngle_async(const Napi::CallbackInfo &info);
    Napi::Value SetAngle(const Napi::CallbackInfo &info);
    Napi::Value SetAngle_async(const Napi::CallbackInfo &info);
    Napi::Value MakeTrimmed(const Napi::CallbackInfo &info);
    Napi::Value MakeTrimmed_async(const Napi::CallbackInfo &info);
    Napi::Value GetTrim1(const Napi::CallbackInfo &info);
    Napi::Value GetTrim1_async(const Napi::CallbackInfo &info);
    Napi::Value GetTrim2(const Napi::CallbackInfo &info);
    Napi::Value GetTrim2_async(const Napi::CallbackInfo &info);
    Napi::Value GetPlaneCurve(const Napi::CallbackInfo &info);
    Napi::Value GetPlaneCurve_async(const Napi::CallbackInfo &info);
    Napi::Value IsPlanar(const Napi::CallbackInfo &info);
    Napi::Value IsPlanar_async(const Napi::CallbackInfo &info);
    Napi::Value IsClosed(const Napi::CallbackInfo &info);
    Napi::Value IsClosed_async(const Napi::CallbackInfo &info);
    Napi::Value IsTouch(const Napi::CallbackInfo &info);
    Napi::Value IsTouch_async(const Napi::CallbackInfo &info);
    Napi::Value GetTMax(const Napi::CallbackInfo &info);
    Napi::Value GetTMax_async(const Napi::CallbackInfo &info);
    Napi::Value GetTMin(const Napi::CallbackInfo &info);
    Napi::Value GetTMin_async(const Napi::CallbackInfo &info);
    Napi::Value GetPeriod(const Napi::CallbackInfo &info);
    Napi::Value GetPeriod_async(const Napi::CallbackInfo &info);
    Napi::Value IsPeriodic(const Napi::CallbackInfo &info);
    Napi::Value IsPeriodic_async(const Napi::CallbackInfo &info);
    Napi::Value IsStraight(const Napi::CallbackInfo &info);
    Napi::Value IsStraight_async(const Napi::CallbackInfo &info);
    Napi::Value Trimmed(const Napi::CallbackInfo &info);
    Napi::Value Trimmed_async(const Napi::CallbackInfo &info);
    Napi::Value Normal(const Napi::CallbackInfo &info);
    Napi::Value Normal_async(const Napi::CallbackInfo &info);
    Napi::Value Tangent(const Napi::CallbackInfo &info);
    Napi::Value Tangent_async(const Napi::CallbackInfo &info);
    Napi::Value BNormal(const Napi::CallbackInfo &info);
    Napi::Value BNormal_async(const Napi::CallbackInfo &info);
    Napi::Value GetCentre(const Napi::CallbackInfo &info);
    Napi::Value GetCentre_async(const Napi::CallbackInfo &info);
    Napi::Value GetLimitPoint(const Napi::CallbackInfo &info);
    Napi::Value GetLimitPoint_async(const Napi::CallbackInfo &info);
    Napi::Value PointOn(const Napi::CallbackInfo &info);
    Napi::Value PointOn_async(const Napi::CallbackInfo &info);
    Napi::Value _PointOn(const Napi::CallbackInfo &info);
    Napi::Value _PointOn_async(const Napi::CallbackInfo &info);
    Napi::Value NearPointProjection(const Napi::CallbackInfo &info);
    Napi::Value NearPointProjection_async(const Napi::CallbackInfo &info);
    Napi::Value GetSurfaceCurve(const Napi::CallbackInfo &info);
    Napi::Value GetSurfaceCurve_async(const Napi::CallbackInfo &info);
    Napi::Value GetWeightCentre(const Napi::CallbackInfo &info);
    Napi::Value GetWeightCentre_async(const Napi::CallbackInfo &info);
    Napi::Value GetBasisCurve(const Napi::CallbackInfo &info);
    Napi::Value GetBasisCurve_async(const Napi::CallbackInfo &info);
    Napi::Value GetBasisPoints(const Napi::CallbackInfo &info);
    Napi::Value GetBasisPoints_async(const Napi::CallbackInfo &info);
    Napi::Value SetBasisPoints(const Napi::CallbackInfo &info);
    Napi::Value SetBasisPoints_async(const Napi::CallbackInfo &info);
    Napi::Value Inverse(const Napi::CallbackInfo &info);
    Napi::Value Inverse_async(const Napi::CallbackInfo &info);
    Napi::Value GetProjection(const Napi::CallbackInfo &info);
    Napi::Value GetProjection_async(const Napi::CallbackInfo &info);
    Napi::Value GetCircleAxis(const Napi::CallbackInfo &info);
    Napi::Value GetCircleAxis_async(const Napi::CallbackInfo &info);
    Napi::Value IsA(const Napi::CallbackInfo &info);
    Napi::Value IsA_async(const Napi::CallbackInfo &info);
    Napi::Value Type(const Napi::CallbackInfo &info);
    Napi::Value Type_async(const Napi::CallbackInfo &info);
    Napi::Value Family(const Napi::CallbackInfo &info);
    Napi::Value Family_async(const Napi::CallbackInfo &info);
    Napi::Value Transform(const Napi::CallbackInfo &info);
    Napi::Value Transform_async(const Napi::CallbackInfo &info);
    Napi::Value Move(const Napi::CallbackInfo &info);
    Napi::Value Move_async(const Napi::CallbackInfo &info);
    Napi::Value Rotate(const Napi::CallbackInfo &info);
    Napi::Value Rotate_async(const Napi::CallbackInfo &info);
    Napi::Value Refresh(const Napi::CallbackInfo &info);
    Napi::Value Refresh_async(const Napi::CallbackInfo &info);
    Napi::Value Duplicate(const Napi::CallbackInfo &info);
    Napi::Value Duplicate_async(const Napi::CallbackInfo &info);
    Napi::Value AddYourGabaritTo(const Napi::CallbackInfo &info);
    Napi::Value AddYourGabaritTo_async(const Napi::CallbackInfo &info);
    Napi::Value GetUseCount(const Napi::CallbackInfo &info);
    Napi::Value GetUseCount_async(const Napi::CallbackInfo &info);
    Napi::Value AddRef(const Napi::CallbackInfo &info);
    Napi::Value AddRef_async(const Napi::CallbackInfo &info);
    Napi::Value Id(const Napi::CallbackInfo &info);

    MbArc3D *_underlying;

    ~Arc3D();

  private:
};

class Arc3D_SetLimitPoint_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_SetLimitPoint_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d, ptrdiff_t number,
                                    const MbCartPoint3D &pnt);
    virtual ~Arc3D_SetLimitPoint_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;
    ptrdiff_t number;
    const MbCartPoint3D &pnt;

    int resultType;
};

class Arc3D_SetRadius_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_SetRadius_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d, double r);
    virtual ~Arc3D_SetRadius_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;
    double r;

    int resultType;
};

class Arc3D_SetRadiusA_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_SetRadiusA_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d, double r);
    virtual ~Arc3D_SetRadiusA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;
    double r;

    int resultType;
};

class Arc3D_SetRadiusB_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_SetRadiusB_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d, double r);
    virtual ~Arc3D_SetRadiusB_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;
    double r;

    int resultType;
};

class Arc3D_GetRadius_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_GetRadius_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Arc3D_GetRadius_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;

    double _result;

    int resultType;
};

class Arc3D_GetRadiusA_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_GetRadiusA_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Arc3D_GetRadiusA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;

    double _result;

    int resultType;
};

class Arc3D_GetRadiusB_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_GetRadiusB_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Arc3D_GetRadiusB_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;

    double _result;

    int resultType;
};

class Arc3D_GetAngle_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_GetAngle_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Arc3D_GetAngle_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;

    double _result;

    int resultType;
};

class Arc3D_SetAngle_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_SetAngle_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d, double ang);
    virtual ~Arc3D_SetAngle_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;
    double ang;

    int resultType;
};

class Arc3D_MakeTrimmed_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_MakeTrimmed_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d, double t1, double t2);
    virtual ~Arc3D_MakeTrimmed_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;
    double t1;
    double t2;

    bool _result;

    int resultType;
};

class Arc3D_GetTrim1_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_GetTrim1_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Arc3D_GetTrim1_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;

    double _result;

    int resultType;
};

class Arc3D_GetTrim2_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_GetTrim2_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Arc3D_GetTrim2_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;

    double _result;

    int resultType;
};

class Arc3D_GetPlaneCurve_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_GetPlaneCurve_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d, bool saveParams,
                                    PlanarCheckParams params = PlanarCheckParams());
    virtual ~Arc3D_GetPlaneCurve_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;
    bool saveParams;
    PlanarCheckParams params = PlanarCheckParams();

    MbCurve *curve2d;

    MbPlacement3D *placement;

    int resultType;
};

class Arc3D_IsPlanar_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_IsPlanar_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d,
                               double accuracy = METRIC_EPSILON);
    virtual ~Arc3D_IsPlanar_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;
    double accuracy = METRIC_EPSILON;

    bool _result;

    int resultType;
};

class Arc3D_IsClosed_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_IsClosed_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Arc3D_IsClosed_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;

    bool _result;

    int resultType;
};

class Arc3D_IsTouch_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_IsTouch_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Arc3D_IsTouch_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;

    bool _result;

    int resultType;
};

class Arc3D_GetTMax_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_GetTMax_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Arc3D_GetTMax_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;

    double _result;

    int resultType;
};

class Arc3D_GetTMin_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_GetTMin_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Arc3D_GetTMin_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;

    double _result;

    int resultType;
};

class Arc3D_GetPeriod_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_GetPeriod_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Arc3D_GetPeriod_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;

    double _result;

    int resultType;
};

class Arc3D_IsPeriodic_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_IsPeriodic_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Arc3D_IsPeriodic_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;

    bool _result;

    int resultType;
};

class Arc3D_IsStraight_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_IsStraight_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d, bool ignoreParams = false);
    virtual ~Arc3D_IsStraight_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;
    bool ignoreParams = false;

    bool _result;

    int resultType;
};

class Arc3D_Trimmed_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_Trimmed_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d, double t1, double t2, int sense);
    virtual ~Arc3D_Trimmed_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;
    double t1;
    double t2;
    int sense;

    MbCurve3D *_result;

    int resultType;
};

class Arc3D_Normal_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_Normal_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Arc3D_Normal_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;
    double &t;

    MbVector3D *n;

    int resultType;
};

class Arc3D_Tangent_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_Tangent_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Arc3D_Tangent_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;
    double &t;

    MbVector3D *tan;

    int resultType;
};

class Arc3D_BNormal_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_BNormal_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Arc3D_BNormal_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;
    double &t;

    MbVector3D *b;

    int resultType;
};

class Arc3D_GetCentre_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_GetCentre_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Arc3D_GetCentre_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;

    MbCartPoint3D *c;

    int resultType;
};

class Arc3D_GetLimitPoint_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_GetLimitPoint_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d, ptrdiff_t number);
    virtual ~Arc3D_GetLimitPoint_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;
    ptrdiff_t number;

    MbCartPoint3D *point;

    int resultType;
};

class Arc3D_PointOn_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_PointOn_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Arc3D_PointOn_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;
    double &t;

    MbCartPoint3D *p;

    int resultType;
};

class Arc3D__PointOn_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D__PointOn_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Arc3D__PointOn_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;
    double &t;

    MbCartPoint3D *p;

    int resultType;
};

class Arc3D_NearPointProjection_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_NearPointProjection_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d,
                                          const MbCartPoint3D &pnt, bool ext, MbRect1D *tRange = NULL);
    virtual ~Arc3D_NearPointProjection_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;
    const MbCartPoint3D &pnt;
    bool ext;
    MbRect1D *tRange = NULL;

    bool success;

    double t;

    int resultType;
};

class Arc3D_GetSurfaceCurve_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_GetSurfaceCurve_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d,
                                      VERSION version = Math::DefaultMathVersion());
    virtual ~Arc3D_GetSurfaceCurve_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;
    VERSION version = Math::DefaultMathVersion();

    MbCurve *curve2d;

    MbSurface *surface;

    int resultType;
};

class Arc3D_GetWeightCentre_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_GetWeightCentre_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Arc3D_GetWeightCentre_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;

    MbCartPoint3D *point;

    int resultType;
};

class Arc3D_GetBasisCurve_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_GetBasisCurve_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Arc3D_GetBasisCurve_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;

    const MbCurve3D *_result;

    int resultType;
};

class Arc3D_GetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_GetBasisPoints_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Arc3D_GetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;

    MbControlData3D *cd;

    int resultType;
};

class Arc3D_SetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_SetBasisPoints_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d, const MbControlData3D &cd);
    virtual ~Arc3D_SetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;
    const MbControlData3D &cd;

    int resultType;
};

class Arc3D_Inverse_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_Inverse_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Arc3D_Inverse_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;

    int resultType;
};

class Arc3D_GetProjection_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_GetProjection_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d, const MbPlacement3D &place,
                                    VERSION version = Math::DefaultMathVersion());
    virtual ~Arc3D_GetProjection_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;
    const MbPlacement3D &place;
    VERSION version = Math::DefaultMathVersion();

    MbCurve *_result;

    int resultType;
};

class Arc3D_GetCircleAxis_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_GetCircleAxis_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Arc3D_GetCircleAxis_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;

    bool success;

    MbAxis3D *axis;

    int resultType;
};

class Arc3D_IsA_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_IsA_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Arc3D_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class Arc3D_Type_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_Type_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Arc3D_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class Arc3D_Family_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_Family_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Arc3D_Family_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class Arc3D_Transform_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_Transform_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d, const MbMatrix3D &mat,
                                MbRegTransform *iReg = NULL);
    virtual ~Arc3D_Transform_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;
    const MbMatrix3D &mat;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class Arc3D_Move_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_Move_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d, const MbVector3D &v,
                           MbRegTransform *iReg = NULL);
    virtual ~Arc3D_Move_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;
    const MbVector3D &v;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class Arc3D_Rotate_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_Rotate_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d, const MbAxis3D &axis, double angle,
                             MbRegTransform *iReg = NULL);
    virtual ~Arc3D_Rotate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;
    const MbAxis3D &axis;
    double angle;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class Arc3D_Refresh_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_Refresh_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Arc3D_Refresh_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;

    int resultType;
};

class Arc3D_Duplicate_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_Duplicate_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d, MbRegDuplicate *iReg = NULL);
    virtual ~Arc3D_Duplicate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;
    MbRegDuplicate *iReg = NULL;

    MbSpaceItem *_result;

    int resultType;
};

class Arc3D_AddYourGabaritTo_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_AddYourGabaritTo_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d, MbCube &cube);
    virtual ~Arc3D_AddYourGabaritTo_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;
    MbCube &cube;

    int resultType;
};

class Arc3D_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_GetUseCount_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Arc3D_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;

    refcount_t _result;

    int resultType;
};

class Arc3D_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    Arc3D_AddRef_AsyncWorker(MbArc3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Arc3D_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbArc3D *_underlying;

    int resultType;
};

#endif
