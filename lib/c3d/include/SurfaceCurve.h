// This is a generated file, modify: generate/templates/SurfaceCurve.h

#ifndef SURFACECURVE_H
#define SURFACECURVE_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cur_surface_curve.h>

#include "Curve3D.h"
#include "PromiseWorker.h"

class SurfaceCurve : public Napi::ObjectWrap<SurfaceCurve>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbSurfaceCurve *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    SurfaceCurve(const Napi::CallbackInfo &info);

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

    MbSurfaceCurve *_underlying;

    ~SurfaceCurve();

  private:
};

class SurfaceCurve_GetPlaneCurve_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve_GetPlaneCurve_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d,
                                           bool saveParams, PlanarCheckParams params = PlanarCheckParams());
    virtual ~SurfaceCurve_GetPlaneCurve_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;
    bool saveParams;
    PlanarCheckParams params = PlanarCheckParams();

    MbCurve *curve2d;

    MbPlacement3D *placement;

    int resultType;
};

class SurfaceCurve_IsPlanar_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve_IsPlanar_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d,
                                      double accuracy = METRIC_EPSILON);
    virtual ~SurfaceCurve_IsPlanar_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;
    double accuracy = METRIC_EPSILON;

    bool _result;

    int resultType;
};

class SurfaceCurve_IsClosed_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve_IsClosed_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SurfaceCurve_IsClosed_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;

    bool _result;

    int resultType;
};

class SurfaceCurve_IsTouch_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve_IsTouch_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SurfaceCurve_IsTouch_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;

    bool _result;

    int resultType;
};

class SurfaceCurve_GetTMax_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve_GetTMax_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SurfaceCurve_GetTMax_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;

    double _result;

    int resultType;
};

class SurfaceCurve_GetTMin_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve_GetTMin_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SurfaceCurve_GetTMin_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;

    double _result;

    int resultType;
};

class SurfaceCurve_GetPeriod_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve_GetPeriod_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SurfaceCurve_GetPeriod_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;

    double _result;

    int resultType;
};

class SurfaceCurve_IsPeriodic_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve_IsPeriodic_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SurfaceCurve_IsPeriodic_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;

    bool _result;

    int resultType;
};

class SurfaceCurve_IsStraight_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve_IsStraight_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d,
                                        bool ignoreParams = false);
    virtual ~SurfaceCurve_IsStraight_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;
    bool ignoreParams = false;

    bool _result;

    int resultType;
};

class SurfaceCurve_Trimmed_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve_Trimmed_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d, double t1,
                                     double t2, int sense);
    virtual ~SurfaceCurve_Trimmed_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;
    double t1;
    double t2;
    int sense;

    MbCurve3D *_result;

    int resultType;
};

class SurfaceCurve_Normal_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve_Normal_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~SurfaceCurve_Normal_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;
    double &t;

    MbVector3D *n;

    int resultType;
};

class SurfaceCurve_Tangent_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve_Tangent_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~SurfaceCurve_Tangent_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;
    double &t;

    MbVector3D *tan;

    int resultType;
};

class SurfaceCurve_BNormal_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve_BNormal_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~SurfaceCurve_BNormal_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;
    double &t;

    MbVector3D *b;

    int resultType;
};

class SurfaceCurve_GetCentre_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve_GetCentre_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SurfaceCurve_GetCentre_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;

    MbCartPoint3D *c;

    int resultType;
};

class SurfaceCurve_GetLimitPoint_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve_GetLimitPoint_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d,
                                           ptrdiff_t number);
    virtual ~SurfaceCurve_GetLimitPoint_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;
    ptrdiff_t number;

    MbCartPoint3D *point;

    int resultType;
};

class SurfaceCurve_PointOn_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve_PointOn_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~SurfaceCurve_PointOn_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;
    double &t;

    MbCartPoint3D *p;

    int resultType;
};

class SurfaceCurve__PointOn_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve__PointOn_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~SurfaceCurve__PointOn_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;
    double &t;

    MbCartPoint3D *p;

    int resultType;
};

class SurfaceCurve_NearPointProjection_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve_NearPointProjection_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d,
                                                 const MbCartPoint3D &pnt, bool ext, MbRect1D *tRange = NULL);
    virtual ~SurfaceCurve_NearPointProjection_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;
    const MbCartPoint3D &pnt;
    bool ext;
    MbRect1D *tRange = NULL;

    bool success;

    double t;

    int resultType;
};

class SurfaceCurve_GetSurfaceCurve_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve_GetSurfaceCurve_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d,
                                             VERSION version = Math::DefaultMathVersion());
    virtual ~SurfaceCurve_GetSurfaceCurve_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;
    VERSION version = Math::DefaultMathVersion();

    MbCurve *curve2d;

    MbSurface *surface;

    int resultType;
};

class SurfaceCurve_GetWeightCentre_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve_GetWeightCentre_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SurfaceCurve_GetWeightCentre_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;

    MbCartPoint3D *point;

    int resultType;
};

class SurfaceCurve_GetBasisCurve_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve_GetBasisCurve_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SurfaceCurve_GetBasisCurve_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;

    const MbCurve3D *_result;

    int resultType;
};

class SurfaceCurve_GetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve_GetBasisPoints_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SurfaceCurve_GetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;

    MbControlData3D *cd;

    int resultType;
};

class SurfaceCurve_SetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve_SetBasisPoints_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d,
                                            const MbControlData3D &cd);
    virtual ~SurfaceCurve_SetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;
    const MbControlData3D &cd;

    int resultType;
};

class SurfaceCurve_Inverse_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve_Inverse_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SurfaceCurve_Inverse_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;

    int resultType;
};

class SurfaceCurve_GetProjection_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve_GetProjection_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d,
                                           const MbPlacement3D &place, VERSION version = Math::DefaultMathVersion());
    virtual ~SurfaceCurve_GetProjection_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;
    const MbPlacement3D &place;
    VERSION version = Math::DefaultMathVersion();

    MbCurve *_result;

    int resultType;
};

class SurfaceCurve_GetCircleAxis_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve_GetCircleAxis_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SurfaceCurve_GetCircleAxis_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;

    bool success;

    MbAxis3D *axis;

    int resultType;
};

class SurfaceCurve_IsA_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve_IsA_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SurfaceCurve_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class SurfaceCurve_Type_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve_Type_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SurfaceCurve_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class SurfaceCurve_Family_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve_Family_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SurfaceCurve_Family_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class SurfaceCurve_Transform_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve_Transform_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d,
                                       const MbMatrix3D &mat, MbRegTransform *iReg = NULL);
    virtual ~SurfaceCurve_Transform_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;
    const MbMatrix3D &mat;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class SurfaceCurve_Move_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve_Move_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d, const MbVector3D &v,
                                  MbRegTransform *iReg = NULL);
    virtual ~SurfaceCurve_Move_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;
    const MbVector3D &v;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class SurfaceCurve_Rotate_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve_Rotate_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d, const MbAxis3D &axis,
                                    double angle, MbRegTransform *iReg = NULL);
    virtual ~SurfaceCurve_Rotate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;
    const MbAxis3D &axis;
    double angle;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class SurfaceCurve_Refresh_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve_Refresh_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SurfaceCurve_Refresh_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;

    int resultType;
};

class SurfaceCurve_Duplicate_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve_Duplicate_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d,
                                       MbRegDuplicate *iReg = NULL);
    virtual ~SurfaceCurve_Duplicate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;
    MbRegDuplicate *iReg = NULL;

    MbSpaceItem *_result;

    int resultType;
};

class SurfaceCurve_AddYourGabaritTo_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve_AddYourGabaritTo_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d,
                                              MbCube &cube);
    virtual ~SurfaceCurve_AddYourGabaritTo_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;
    MbCube &cube;

    int resultType;
};

class SurfaceCurve_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve_GetUseCount_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SurfaceCurve_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;

    refcount_t _result;

    int resultType;
};

class SurfaceCurve_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceCurve_AddRef_AsyncWorker(MbSurfaceCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SurfaceCurve_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceCurve *_underlying;

    int resultType;
};

#endif
