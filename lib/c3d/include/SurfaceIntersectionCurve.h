// This is a generated file, modify: generate/templates/SurfaceIntersectionCurve.h

#ifndef SURFACEINTERSECTIONCURVE_H
#define SURFACEINTERSECTIONCURVE_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cur_surface_intersection.h>

#include "Surface.h"
#include "Curve3D.h"
#include "Curve.h"
#include "SurfaceCurve.h"
#include "PromiseWorker.h"

class SurfaceIntersectionCurve : public Napi::ObjectWrap<SurfaceIntersectionCurve>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbSurfaceIntersectionCurve *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    SurfaceIntersectionCurve(const Napi::CallbackInfo &info);

    Napi::Value GetSurfaceOne(const Napi::CallbackInfo &info);
    Napi::Value GetSurfaceOne_async(const Napi::CallbackInfo &info);
    Napi::Value GetSurfaceTwo(const Napi::CallbackInfo &info);
    Napi::Value GetSurfaceTwo_async(const Napi::CallbackInfo &info);
    Napi::Value GetPCurveOne(const Napi::CallbackInfo &info);
    Napi::Value GetPCurveOne_async(const Napi::CallbackInfo &info);
    Napi::Value GetPCurveTwo(const Napi::CallbackInfo &info);
    Napi::Value GetPCurveTwo_async(const Napi::CallbackInfo &info);
    Napi::Value GetSCurveOne(const Napi::CallbackInfo &info);
    Napi::Value GetSCurveOne_async(const Napi::CallbackInfo &info);
    Napi::Value GetSCurveTwo(const Napi::CallbackInfo &info);
    Napi::Value GetSCurveTwo_async(const Napi::CallbackInfo &info);
    Napi::Value GetSpaceCurve(const Napi::CallbackInfo &info);
    Napi::Value GetSpaceCurve_async(const Napi::CallbackInfo &info);
    Napi::Value GetCurveOneSurface(const Napi::CallbackInfo &info);
    Napi::Value GetCurveOneSurface_async(const Napi::CallbackInfo &info);
    Napi::Value GetCurveTwoSurface(const Napi::CallbackInfo &info);
    Napi::Value GetCurveTwoSurface_async(const Napi::CallbackInfo &info);
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

    MbSurfaceIntersectionCurve *_underlying;

    ~SurfaceIntersectionCurve();

  private:
};

class SurfaceIntersectionCurve_GetSurfaceOne_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_GetSurfaceOne_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                       Napi::Promise::Deferred const &d);
    virtual ~SurfaceIntersectionCurve_GetSurfaceOne_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;

    const MbSurface *_result;

    int resultType;
};

class SurfaceIntersectionCurve_GetSurfaceTwo_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_GetSurfaceTwo_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                       Napi::Promise::Deferred const &d);
    virtual ~SurfaceIntersectionCurve_GetSurfaceTwo_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;

    const MbSurface *_result;

    int resultType;
};

class SurfaceIntersectionCurve_GetPCurveOne_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_GetPCurveOne_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                      Napi::Promise::Deferred const &d);
    virtual ~SurfaceIntersectionCurve_GetPCurveOne_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;

    const MbCurve *_result;

    int resultType;
};

class SurfaceIntersectionCurve_GetPCurveTwo_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_GetPCurveTwo_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                      Napi::Promise::Deferred const &d);
    virtual ~SurfaceIntersectionCurve_GetPCurveTwo_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;

    const MbCurve *_result;

    int resultType;
};

class SurfaceIntersectionCurve_GetSCurveOne_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_GetSCurveOne_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                      Napi::Promise::Deferred const &d);
    virtual ~SurfaceIntersectionCurve_GetSCurveOne_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;

    const MbSurfaceCurve *_result;

    int resultType;
};

class SurfaceIntersectionCurve_GetSCurveTwo_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_GetSCurveTwo_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                      Napi::Promise::Deferred const &d);
    virtual ~SurfaceIntersectionCurve_GetSCurveTwo_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;

    const MbSurfaceCurve *_result;

    int resultType;
};

class SurfaceIntersectionCurve_GetSpaceCurve_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_GetSpaceCurve_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                       Napi::Promise::Deferred const &d);
    virtual ~SurfaceIntersectionCurve_GetSpaceCurve_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;

    const MbCurve3D *_result;

    int resultType;
};

class SurfaceIntersectionCurve_GetCurveOneSurface_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_GetCurveOneSurface_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                            Napi::Promise::Deferred const &d);
    virtual ~SurfaceIntersectionCurve_GetCurveOneSurface_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;

    const MbSurface *_result;

    int resultType;
};

class SurfaceIntersectionCurve_GetCurveTwoSurface_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_GetCurveTwoSurface_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                            Napi::Promise::Deferred const &d);
    virtual ~SurfaceIntersectionCurve_GetCurveTwoSurface_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;

    const MbSurface *_result;

    int resultType;
};

class SurfaceIntersectionCurve_GetPlaneCurve_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_GetPlaneCurve_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                       Napi::Promise::Deferred const &d, bool saveParams,
                                                       PlanarCheckParams params = PlanarCheckParams());
    virtual ~SurfaceIntersectionCurve_GetPlaneCurve_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;
    bool saveParams;
    PlanarCheckParams params = PlanarCheckParams();

    MbCurve *curve2d;

    MbPlacement3D *placement;

    int resultType;
};

class SurfaceIntersectionCurve_IsPlanar_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_IsPlanar_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                  Napi::Promise::Deferred const &d, double accuracy = METRIC_EPSILON);
    virtual ~SurfaceIntersectionCurve_IsPlanar_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;
    double accuracy = METRIC_EPSILON;

    bool _result;

    int resultType;
};

class SurfaceIntersectionCurve_IsClosed_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_IsClosed_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                  Napi::Promise::Deferred const &d);
    virtual ~SurfaceIntersectionCurve_IsClosed_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;

    bool _result;

    int resultType;
};

class SurfaceIntersectionCurve_IsTouch_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_IsTouch_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                 Napi::Promise::Deferred const &d);
    virtual ~SurfaceIntersectionCurve_IsTouch_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;

    bool _result;

    int resultType;
};

class SurfaceIntersectionCurve_GetTMax_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_GetTMax_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                 Napi::Promise::Deferred const &d);
    virtual ~SurfaceIntersectionCurve_GetTMax_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;

    double _result;

    int resultType;
};

class SurfaceIntersectionCurve_GetTMin_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_GetTMin_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                 Napi::Promise::Deferred const &d);
    virtual ~SurfaceIntersectionCurve_GetTMin_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;

    double _result;

    int resultType;
};

class SurfaceIntersectionCurve_GetPeriod_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_GetPeriod_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                   Napi::Promise::Deferred const &d);
    virtual ~SurfaceIntersectionCurve_GetPeriod_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;

    double _result;

    int resultType;
};

class SurfaceIntersectionCurve_IsPeriodic_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_IsPeriodic_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                    Napi::Promise::Deferred const &d);
    virtual ~SurfaceIntersectionCurve_IsPeriodic_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;

    bool _result;

    int resultType;
};

class SurfaceIntersectionCurve_IsStraight_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_IsStraight_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                    Napi::Promise::Deferred const &d, bool ignoreParams = false);
    virtual ~SurfaceIntersectionCurve_IsStraight_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;
    bool ignoreParams = false;

    bool _result;

    int resultType;
};

class SurfaceIntersectionCurve_Trimmed_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_Trimmed_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                 Napi::Promise::Deferred const &d, double t1, double t2, int sense);
    virtual ~SurfaceIntersectionCurve_Trimmed_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;
    double t1;
    double t2;
    int sense;

    MbCurve3D *_result;

    int resultType;
};

class SurfaceIntersectionCurve_Normal_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_Normal_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                Napi::Promise::Deferred const &d, double &t);
    virtual ~SurfaceIntersectionCurve_Normal_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;
    double &t;

    MbVector3D *n;

    int resultType;
};

class SurfaceIntersectionCurve_Tangent_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_Tangent_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                 Napi::Promise::Deferred const &d, double &t);
    virtual ~SurfaceIntersectionCurve_Tangent_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;
    double &t;

    MbVector3D *tan;

    int resultType;
};

class SurfaceIntersectionCurve_BNormal_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_BNormal_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                 Napi::Promise::Deferred const &d, double &t);
    virtual ~SurfaceIntersectionCurve_BNormal_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;
    double &t;

    MbVector3D *b;

    int resultType;
};

class SurfaceIntersectionCurve_GetCentre_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_GetCentre_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                   Napi::Promise::Deferred const &d);
    virtual ~SurfaceIntersectionCurve_GetCentre_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;

    MbCartPoint3D *c;

    int resultType;
};

class SurfaceIntersectionCurve_GetLimitPoint_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_GetLimitPoint_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                       Napi::Promise::Deferred const &d, ptrdiff_t number);
    virtual ~SurfaceIntersectionCurve_GetLimitPoint_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;
    ptrdiff_t number;

    MbCartPoint3D *point;

    int resultType;
};

class SurfaceIntersectionCurve_PointOn_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_PointOn_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                 Napi::Promise::Deferred const &d, double &t);
    virtual ~SurfaceIntersectionCurve_PointOn_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;
    double &t;

    MbCartPoint3D *p;

    int resultType;
};

class SurfaceIntersectionCurve__PointOn_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve__PointOn_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                  Napi::Promise::Deferred const &d, double &t);
    virtual ~SurfaceIntersectionCurve__PointOn_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;
    double &t;

    MbCartPoint3D *p;

    int resultType;
};

class SurfaceIntersectionCurve_NearPointProjection_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_NearPointProjection_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                             Napi::Promise::Deferred const &d, const MbCartPoint3D &pnt,
                                                             bool ext, MbRect1D *tRange = NULL);
    virtual ~SurfaceIntersectionCurve_NearPointProjection_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;
    const MbCartPoint3D &pnt;
    bool ext;
    MbRect1D *tRange = NULL;

    bool success;

    double t;

    int resultType;
};

class SurfaceIntersectionCurve_GetSurfaceCurve_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_GetSurfaceCurve_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                         Napi::Promise::Deferred const &d,
                                                         VERSION version = Math::DefaultMathVersion());
    virtual ~SurfaceIntersectionCurve_GetSurfaceCurve_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;
    VERSION version = Math::DefaultMathVersion();

    MbCurve *curve2d;

    MbSurface *surface;

    int resultType;
};

class SurfaceIntersectionCurve_GetWeightCentre_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_GetWeightCentre_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                         Napi::Promise::Deferred const &d);
    virtual ~SurfaceIntersectionCurve_GetWeightCentre_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;

    MbCartPoint3D *point;

    int resultType;
};

class SurfaceIntersectionCurve_GetBasisCurve_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_GetBasisCurve_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                       Napi::Promise::Deferred const &d);
    virtual ~SurfaceIntersectionCurve_GetBasisCurve_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;

    const MbCurve3D *_result;

    int resultType;
};

class SurfaceIntersectionCurve_GetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_GetBasisPoints_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                        Napi::Promise::Deferred const &d);
    virtual ~SurfaceIntersectionCurve_GetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;

    MbControlData3D *cd;

    int resultType;
};

class SurfaceIntersectionCurve_SetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_SetBasisPoints_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                        Napi::Promise::Deferred const &d, const MbControlData3D &cd);
    virtual ~SurfaceIntersectionCurve_SetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;
    const MbControlData3D &cd;

    int resultType;
};

class SurfaceIntersectionCurve_Inverse_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_Inverse_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                 Napi::Promise::Deferred const &d);
    virtual ~SurfaceIntersectionCurve_Inverse_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;

    int resultType;
};

class SurfaceIntersectionCurve_GetProjection_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_GetProjection_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                       Napi::Promise::Deferred const &d, const MbPlacement3D &place,
                                                       VERSION version = Math::DefaultMathVersion());
    virtual ~SurfaceIntersectionCurve_GetProjection_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;
    const MbPlacement3D &place;
    VERSION version = Math::DefaultMathVersion();

    MbCurve *_result;

    int resultType;
};

class SurfaceIntersectionCurve_GetCircleAxis_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_GetCircleAxis_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                       Napi::Promise::Deferred const &d);
    virtual ~SurfaceIntersectionCurve_GetCircleAxis_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;

    bool success;

    MbAxis3D *axis;

    int resultType;
};

class SurfaceIntersectionCurve_IsA_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_IsA_AsyncWorker(MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SurfaceIntersectionCurve_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class SurfaceIntersectionCurve_Type_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_Type_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                              Napi::Promise::Deferred const &d);
    virtual ~SurfaceIntersectionCurve_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class SurfaceIntersectionCurve_Family_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_Family_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                Napi::Promise::Deferred const &d);
    virtual ~SurfaceIntersectionCurve_Family_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class SurfaceIntersectionCurve_Transform_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_Transform_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                   Napi::Promise::Deferred const &d, const MbMatrix3D &mat,
                                                   MbRegTransform *iReg = NULL);
    virtual ~SurfaceIntersectionCurve_Transform_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;
    const MbMatrix3D &mat;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class SurfaceIntersectionCurve_Move_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_Move_AsyncWorker(MbSurfaceIntersectionCurve *_underlying, Napi::Promise::Deferred const &d,
                                              const MbVector3D &v, MbRegTransform *iReg = NULL);
    virtual ~SurfaceIntersectionCurve_Move_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;
    const MbVector3D &v;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class SurfaceIntersectionCurve_Rotate_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_Rotate_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                Napi::Promise::Deferred const &d, const MbAxis3D &axis, double angle,
                                                MbRegTransform *iReg = NULL);
    virtual ~SurfaceIntersectionCurve_Rotate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;
    const MbAxis3D &axis;
    double angle;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class SurfaceIntersectionCurve_Refresh_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_Refresh_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                 Napi::Promise::Deferred const &d);
    virtual ~SurfaceIntersectionCurve_Refresh_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;

    int resultType;
};

class SurfaceIntersectionCurve_Duplicate_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_Duplicate_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                   Napi::Promise::Deferred const &d, MbRegDuplicate *iReg = NULL);
    virtual ~SurfaceIntersectionCurve_Duplicate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;
    MbRegDuplicate *iReg = NULL;

    MbSpaceItem *_result;

    int resultType;
};

class SurfaceIntersectionCurve_AddYourGabaritTo_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_AddYourGabaritTo_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                          Napi::Promise::Deferred const &d, MbCube &cube);
    virtual ~SurfaceIntersectionCurve_AddYourGabaritTo_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;
    MbCube &cube;

    int resultType;
};

class SurfaceIntersectionCurve_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_GetUseCount_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                     Napi::Promise::Deferred const &d);
    virtual ~SurfaceIntersectionCurve_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;

    refcount_t _result;

    int resultType;
};

class SurfaceIntersectionCurve_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    SurfaceIntersectionCurve_AddRef_AsyncWorker(MbSurfaceIntersectionCurve *_underlying,
                                                Napi::Promise::Deferred const &d);
    virtual ~SurfaceIntersectionCurve_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSurfaceIntersectionCurve *_underlying;

    int resultType;
};

#endif
