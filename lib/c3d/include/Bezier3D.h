// This is a generated file, modify: generate/templates/Bezier3D.h

#ifndef BEZIER3D_H
#define BEZIER3D_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cur_bezier3d.h>

#include "PolyCurve3D.h"
#include "PromiseWorker.h"

class Bezier3D : public Napi::ObjectWrap<Bezier3D>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbBezier3D *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    Bezier3D(const Napi::CallbackInfo &info);

    Napi::Value GetPoints(const Napi::CallbackInfo &info);
    Napi::Value GetPoints_async(const Napi::CallbackInfo &info);
    Napi::Value ChangePoint(const Napi::CallbackInfo &info);
    Napi::Value ChangePoint_async(const Napi::CallbackInfo &info);
    Napi::Value RemovePoint(const Napi::CallbackInfo &info);
    Napi::Value RemovePoint_async(const Napi::CallbackInfo &info);
    Napi::Value Rebuild(const Napi::CallbackInfo &info);
    Napi::Value Rebuild_async(const Napi::CallbackInfo &info);
    Napi::Value GetCount(const Napi::CallbackInfo &info);
    Napi::Value GetCount_async(const Napi::CallbackInfo &info);
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

    MbBezier3D *_underlying;

    ~Bezier3D();

  private:
};

class Bezier3D_GetPoints_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_GetPoints_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Bezier3D_GetPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;

    SArray<MbCartPoint3D> *pnts;

    int resultType;
};

class Bezier3D_ChangePoint_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_ChangePoint_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d, ptrdiff_t index,
                                     const MbCartPoint3D &pnt);
    virtual ~Bezier3D_ChangePoint_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;
    ptrdiff_t index;
    const MbCartPoint3D &pnt;

    int resultType;
};

class Bezier3D_RemovePoint_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_RemovePoint_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d, ptrdiff_t index);
    virtual ~Bezier3D_RemovePoint_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;
    ptrdiff_t index;

    int resultType;
};

class Bezier3D_Rebuild_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_Rebuild_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Bezier3D_Rebuild_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;

    int resultType;
};

class Bezier3D_GetCount_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_GetCount_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Bezier3D_GetCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;

    size_t _result;

    int resultType;
};

class Bezier3D_GetPlaneCurve_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_GetPlaneCurve_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d, bool saveParams,
                                       PlanarCheckParams params = PlanarCheckParams());
    virtual ~Bezier3D_GetPlaneCurve_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;
    bool saveParams;
    PlanarCheckParams params = PlanarCheckParams();

    MbCurve *curve2d;

    MbPlacement3D *placement;

    int resultType;
};

class Bezier3D_IsPlanar_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_IsPlanar_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d,
                                  double accuracy = METRIC_EPSILON);
    virtual ~Bezier3D_IsPlanar_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;
    double accuracy = METRIC_EPSILON;

    bool _result;

    int resultType;
};

class Bezier3D_IsClosed_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_IsClosed_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Bezier3D_IsClosed_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;

    bool _result;

    int resultType;
};

class Bezier3D_IsTouch_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_IsTouch_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Bezier3D_IsTouch_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;

    bool _result;

    int resultType;
};

class Bezier3D_GetTMax_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_GetTMax_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Bezier3D_GetTMax_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;

    double _result;

    int resultType;
};

class Bezier3D_GetTMin_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_GetTMin_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Bezier3D_GetTMin_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;

    double _result;

    int resultType;
};

class Bezier3D_GetPeriod_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_GetPeriod_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Bezier3D_GetPeriod_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;

    double _result;

    int resultType;
};

class Bezier3D_IsPeriodic_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_IsPeriodic_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Bezier3D_IsPeriodic_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;

    bool _result;

    int resultType;
};

class Bezier3D_IsStraight_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_IsStraight_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d,
                                    bool ignoreParams = false);
    virtual ~Bezier3D_IsStraight_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;
    bool ignoreParams = false;

    bool _result;

    int resultType;
};

class Bezier3D_Trimmed_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_Trimmed_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d, double t1, double t2,
                                 int sense);
    virtual ~Bezier3D_Trimmed_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;
    double t1;
    double t2;
    int sense;

    MbCurve3D *_result;

    int resultType;
};

class Bezier3D_Normal_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_Normal_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Bezier3D_Normal_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;
    double &t;

    MbVector3D *n;

    int resultType;
};

class Bezier3D_Tangent_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_Tangent_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Bezier3D_Tangent_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;
    double &t;

    MbVector3D *tan;

    int resultType;
};

class Bezier3D_BNormal_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_BNormal_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Bezier3D_BNormal_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;
    double &t;

    MbVector3D *b;

    int resultType;
};

class Bezier3D_GetCentre_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_GetCentre_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Bezier3D_GetCentre_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;

    MbCartPoint3D *c;

    int resultType;
};

class Bezier3D_GetLimitPoint_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_GetLimitPoint_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d, ptrdiff_t number);
    virtual ~Bezier3D_GetLimitPoint_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;
    ptrdiff_t number;

    MbCartPoint3D *point;

    int resultType;
};

class Bezier3D_PointOn_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_PointOn_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Bezier3D_PointOn_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;
    double &t;

    MbCartPoint3D *p;

    int resultType;
};

class Bezier3D__PointOn_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D__PointOn_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Bezier3D__PointOn_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;
    double &t;

    MbCartPoint3D *p;

    int resultType;
};

class Bezier3D_NearPointProjection_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_NearPointProjection_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d,
                                             const MbCartPoint3D &pnt, bool ext, MbRect1D *tRange = NULL);
    virtual ~Bezier3D_NearPointProjection_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;
    const MbCartPoint3D &pnt;
    bool ext;
    MbRect1D *tRange = NULL;

    bool success;

    double t;

    int resultType;
};

class Bezier3D_GetSurfaceCurve_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_GetSurfaceCurve_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d,
                                         VERSION version = Math::DefaultMathVersion());
    virtual ~Bezier3D_GetSurfaceCurve_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;
    VERSION version = Math::DefaultMathVersion();

    MbCurve *curve2d;

    MbSurface *surface;

    int resultType;
};

class Bezier3D_GetWeightCentre_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_GetWeightCentre_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Bezier3D_GetWeightCentre_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;

    MbCartPoint3D *point;

    int resultType;
};

class Bezier3D_GetBasisCurve_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_GetBasisCurve_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Bezier3D_GetBasisCurve_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;

    const MbCurve3D *_result;

    int resultType;
};

class Bezier3D_GetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_GetBasisPoints_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Bezier3D_GetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;

    MbControlData3D *cd;

    int resultType;
};

class Bezier3D_SetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_SetBasisPoints_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d,
                                        const MbControlData3D &cd);
    virtual ~Bezier3D_SetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;
    const MbControlData3D &cd;

    int resultType;
};

class Bezier3D_Inverse_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_Inverse_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Bezier3D_Inverse_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;

    int resultType;
};

class Bezier3D_GetProjection_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_GetProjection_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d,
                                       const MbPlacement3D &place, VERSION version = Math::DefaultMathVersion());
    virtual ~Bezier3D_GetProjection_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;
    const MbPlacement3D &place;
    VERSION version = Math::DefaultMathVersion();

    MbCurve *_result;

    int resultType;
};

class Bezier3D_GetCircleAxis_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_GetCircleAxis_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Bezier3D_GetCircleAxis_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;

    bool success;

    MbAxis3D *axis;

    int resultType;
};

class Bezier3D_IsA_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_IsA_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Bezier3D_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class Bezier3D_Type_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_Type_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Bezier3D_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class Bezier3D_Family_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_Family_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Bezier3D_Family_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class Bezier3D_Transform_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_Transform_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d, const MbMatrix3D &mat,
                                   MbRegTransform *iReg = NULL);
    virtual ~Bezier3D_Transform_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;
    const MbMatrix3D &mat;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class Bezier3D_Move_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_Move_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d, const MbVector3D &v,
                              MbRegTransform *iReg = NULL);
    virtual ~Bezier3D_Move_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;
    const MbVector3D &v;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class Bezier3D_Rotate_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_Rotate_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d, const MbAxis3D &axis,
                                double angle, MbRegTransform *iReg = NULL);
    virtual ~Bezier3D_Rotate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;
    const MbAxis3D &axis;
    double angle;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class Bezier3D_Refresh_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_Refresh_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Bezier3D_Refresh_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;

    int resultType;
};

class Bezier3D_Duplicate_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_Duplicate_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d,
                                   MbRegDuplicate *iReg = NULL);
    virtual ~Bezier3D_Duplicate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;
    MbRegDuplicate *iReg = NULL;

    MbSpaceItem *_result;

    int resultType;
};

class Bezier3D_AddYourGabaritTo_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_AddYourGabaritTo_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d, MbCube &cube);
    virtual ~Bezier3D_AddYourGabaritTo_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;
    MbCube &cube;

    int resultType;
};

class Bezier3D_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_GetUseCount_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Bezier3D_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;

    refcount_t _result;

    int resultType;
};

class Bezier3D_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    Bezier3D_AddRef_AsyncWorker(MbBezier3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Bezier3D_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbBezier3D *_underlying;

    int resultType;
};

#endif
