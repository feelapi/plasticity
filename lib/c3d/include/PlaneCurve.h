// This is a generated file, modify: generate/templates/PlaneCurve.h

#ifndef PLANECURVE_H
#define PLANECURVE_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cur_plane_curve.h>

#include "Curve3D.h"
#include "Placement3D.h"
#include "PromiseWorker.h"

class PlaneCurve : public Napi::ObjectWrap<PlaneCurve>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbPlaneCurve *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    PlaneCurve(const Napi::CallbackInfo &info);

    Napi::Value GetPlacement(const Napi::CallbackInfo &info);
    Napi::Value GetPlacement_async(const Napi::CallbackInfo &info);
    Napi::Value Cast(const Napi::CallbackInfo &info);
    Napi::Value Cast_async(const Napi::CallbackInfo &info);
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

    MbPlaneCurve *_underlying;

    ~PlaneCurve();

  private:
};

class PlaneCurve_GetPlacement_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_GetPlacement_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~PlaneCurve_GetPlacement_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;

    const MbPlacement3D *_result;

    int resultType;
};

class PlaneCurve_GetPlaneCurve_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_GetPlaneCurve_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d, bool saveParams,
                                         PlanarCheckParams params = PlanarCheckParams());
    virtual ~PlaneCurve_GetPlaneCurve_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;
    bool saveParams;
    PlanarCheckParams params = PlanarCheckParams();

    MbCurve *curve2d;

    MbPlacement3D *placement;

    int resultType;
};

class PlaneCurve_IsPlanar_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_IsPlanar_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d,
                                    double accuracy = METRIC_EPSILON);
    virtual ~PlaneCurve_IsPlanar_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;
    double accuracy = METRIC_EPSILON;

    bool _result;

    int resultType;
};

class PlaneCurve_IsClosed_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_IsClosed_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~PlaneCurve_IsClosed_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;

    bool _result;

    int resultType;
};

class PlaneCurve_IsTouch_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_IsTouch_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~PlaneCurve_IsTouch_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;

    bool _result;

    int resultType;
};

class PlaneCurve_GetTMax_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_GetTMax_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~PlaneCurve_GetTMax_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;

    double _result;

    int resultType;
};

class PlaneCurve_GetTMin_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_GetTMin_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~PlaneCurve_GetTMin_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;

    double _result;

    int resultType;
};

class PlaneCurve_GetPeriod_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_GetPeriod_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~PlaneCurve_GetPeriod_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;

    double _result;

    int resultType;
};

class PlaneCurve_IsPeriodic_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_IsPeriodic_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~PlaneCurve_IsPeriodic_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;

    bool _result;

    int resultType;
};

class PlaneCurve_IsStraight_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_IsStraight_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d,
                                      bool ignoreParams = false);
    virtual ~PlaneCurve_IsStraight_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;
    bool ignoreParams = false;

    bool _result;

    int resultType;
};

class PlaneCurve_Trimmed_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_Trimmed_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d, double t1, double t2,
                                   int sense);
    virtual ~PlaneCurve_Trimmed_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;
    double t1;
    double t2;
    int sense;

    MbCurve3D *_result;

    int resultType;
};

class PlaneCurve_Normal_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_Normal_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~PlaneCurve_Normal_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;
    double &t;

    MbVector3D *n;

    int resultType;
};

class PlaneCurve_Tangent_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_Tangent_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~PlaneCurve_Tangent_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;
    double &t;

    MbVector3D *tan;

    int resultType;
};

class PlaneCurve_BNormal_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_BNormal_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~PlaneCurve_BNormal_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;
    double &t;

    MbVector3D *b;

    int resultType;
};

class PlaneCurve_GetCentre_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_GetCentre_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~PlaneCurve_GetCentre_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;

    MbCartPoint3D *c;

    int resultType;
};

class PlaneCurve_GetLimitPoint_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_GetLimitPoint_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d, ptrdiff_t number);
    virtual ~PlaneCurve_GetLimitPoint_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;
    ptrdiff_t number;

    MbCartPoint3D *point;

    int resultType;
};

class PlaneCurve_PointOn_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_PointOn_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~PlaneCurve_PointOn_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;
    double &t;

    MbCartPoint3D *p;

    int resultType;
};

class PlaneCurve__PointOn_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve__PointOn_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~PlaneCurve__PointOn_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;
    double &t;

    MbCartPoint3D *p;

    int resultType;
};

class PlaneCurve_NearPointProjection_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_NearPointProjection_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d,
                                               const MbCartPoint3D &pnt, bool ext, MbRect1D *tRange = NULL);
    virtual ~PlaneCurve_NearPointProjection_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;
    const MbCartPoint3D &pnt;
    bool ext;
    MbRect1D *tRange = NULL;

    bool success;

    double t;

    int resultType;
};

class PlaneCurve_GetSurfaceCurve_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_GetSurfaceCurve_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d,
                                           VERSION version = Math::DefaultMathVersion());
    virtual ~PlaneCurve_GetSurfaceCurve_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;
    VERSION version = Math::DefaultMathVersion();

    MbCurve *curve2d;

    MbSurface *surface;

    int resultType;
};

class PlaneCurve_GetWeightCentre_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_GetWeightCentre_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~PlaneCurve_GetWeightCentre_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;

    MbCartPoint3D *point;

    int resultType;
};

class PlaneCurve_GetBasisCurve_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_GetBasisCurve_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~PlaneCurve_GetBasisCurve_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;

    const MbCurve3D *_result;

    int resultType;
};

class PlaneCurve_GetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_GetBasisPoints_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~PlaneCurve_GetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;

    MbControlData3D *cd;

    int resultType;
};

class PlaneCurve_SetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_SetBasisPoints_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d,
                                          const MbControlData3D &cd);
    virtual ~PlaneCurve_SetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;
    const MbControlData3D &cd;

    int resultType;
};

class PlaneCurve_Inverse_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_Inverse_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~PlaneCurve_Inverse_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;

    int resultType;
};

class PlaneCurve_GetProjection_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_GetProjection_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d,
                                         const MbPlacement3D &place, VERSION version = Math::DefaultMathVersion());
    virtual ~PlaneCurve_GetProjection_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;
    const MbPlacement3D &place;
    VERSION version = Math::DefaultMathVersion();

    MbCurve *_result;

    int resultType;
};

class PlaneCurve_GetCircleAxis_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_GetCircleAxis_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~PlaneCurve_GetCircleAxis_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;

    bool success;

    MbAxis3D *axis;

    int resultType;
};

class PlaneCurve_IsA_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_IsA_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~PlaneCurve_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class PlaneCurve_Type_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_Type_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~PlaneCurve_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class PlaneCurve_Family_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_Family_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~PlaneCurve_Family_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class PlaneCurve_Transform_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_Transform_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d, const MbMatrix3D &mat,
                                     MbRegTransform *iReg = NULL);
    virtual ~PlaneCurve_Transform_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;
    const MbMatrix3D &mat;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class PlaneCurve_Move_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_Move_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d, const MbVector3D &v,
                                MbRegTransform *iReg = NULL);
    virtual ~PlaneCurve_Move_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;
    const MbVector3D &v;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class PlaneCurve_Rotate_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_Rotate_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d, const MbAxis3D &axis,
                                  double angle, MbRegTransform *iReg = NULL);
    virtual ~PlaneCurve_Rotate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;
    const MbAxis3D &axis;
    double angle;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class PlaneCurve_Refresh_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_Refresh_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~PlaneCurve_Refresh_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;

    int resultType;
};

class PlaneCurve_Duplicate_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_Duplicate_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d,
                                     MbRegDuplicate *iReg = NULL);
    virtual ~PlaneCurve_Duplicate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;
    MbRegDuplicate *iReg = NULL;

    MbSpaceItem *_result;

    int resultType;
};

class PlaneCurve_AddYourGabaritTo_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_AddYourGabaritTo_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d, MbCube &cube);
    virtual ~PlaneCurve_AddYourGabaritTo_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;
    MbCube &cube;

    int resultType;
};

class PlaneCurve_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_GetUseCount_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~PlaneCurve_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;

    refcount_t _result;

    int resultType;
};

class PlaneCurve_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    PlaneCurve_AddRef_AsyncWorker(MbPlaneCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~PlaneCurve_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneCurve *_underlying;

    int resultType;
};

#endif
