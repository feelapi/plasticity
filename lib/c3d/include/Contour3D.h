// This is a generated file, modify: generate/templates/Contour3D.h

#ifndef CONTOUR3D_H
#define CONTOUR3D_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cur_contour3d.h>

#include "Curve3D.h"
#include "CartPoint3D.h"
#include "Vector3D.h"
#include "PromiseWorker.h"

class Contour3D : public Napi::ObjectWrap<Contour3D>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbContour3D *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    Contour3D(const Napi::CallbackInfo &info);

    Napi::Value AddCurveWithRuledCheck(const Napi::CallbackInfo &info);
    Napi::Value AddCurveWithRuledCheck_async(const Napi::CallbackInfo &info);
    Napi::Value GetSegmentsCount(const Napi::CallbackInfo &info);
    Napi::Value GetSegmentsCount_async(const Napi::CallbackInfo &info);
    Napi::Value GetSegments(const Napi::CallbackInfo &info);
    Napi::Value GetSegments_async(const Napi::CallbackInfo &info);
    Napi::Value FindCorner(const Napi::CallbackInfo &info);
    Napi::Value FindCorner_async(const Napi::CallbackInfo &info);
    Napi::Value GetCornerAngle(const Napi::CallbackInfo &info);
    Napi::Value GetCornerAngle_async(const Napi::CallbackInfo &info);
    Napi::Value Init(const Napi::CallbackInfo &info);
    Napi::Value Init_async(const Napi::CallbackInfo &info);
    Napi::Value Cast(const Napi::CallbackInfo &info);
    Napi::Value Cast_async(const Napi::CallbackInfo &info);
    Napi::Value DeleteSegment(const Napi::CallbackInfo &info);
    Napi::Value DeleteSegment_async(const Napi::CallbackInfo &info);
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

    MbContour3D *_underlying;

    ~Contour3D();

  private:
};

class Contour3D_AddCurveWithRuledCheck_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_AddCurveWithRuledCheck_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d,
                                                 MbCurve3D &curve, double absEps = Math::metricPrecision,
                                                 bool toEndOnly = false, bool checkSame = true,
                                                 VERSION version = Math::DefaultMathVersion());
    virtual ~Contour3D_AddCurveWithRuledCheck_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;
    MbCurve3D &curve;
    double absEps = Math::metricPrecision;
    bool toEndOnly = false;
    bool checkSame = true;
    VERSION version = Math::DefaultMathVersion();

    int resultType;
};

class Contour3D_GetSegmentsCount_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_GetSegmentsCount_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Contour3D_GetSegmentsCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;

    size_t _result;

    int resultType;
};

class Contour3D_GetSegments_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_GetSegments_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Contour3D_GetSegments_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;

    RPArray<MbCurve3D> *segments;

    int resultType;
};

class Contour3D_FindCorner_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_FindCorner_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d, size_t index);
    virtual ~Contour3D_FindCorner_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;
    size_t index;

    MbCartPoint3D *t;

    int resultType;
};

class Contour3D_GetCornerAngle_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_GetCornerAngle_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d, size_t index,
                                         double angleEps = (double)Math::AngleEps);
    virtual ~Contour3D_GetCornerAngle_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;
    size_t index;
    double angleEps = (double)Math::AngleEps;

    MbCartPoint3D *origin;

    MbVector3D *axis;

    MbVector3D *tau;

    double angle;

    int resultType;
};

class Contour3D_Init_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_Init_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d,
                               const SArray<MbCartPoint3D> &points);
    virtual ~Contour3D_Init_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;
    const SArray<MbCartPoint3D> &points;

    bool _result;

    int resultType;
};

class Contour3D_DeleteSegment_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_DeleteSegment_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d, size_t index);
    virtual ~Contour3D_DeleteSegment_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;
    size_t index;

    int resultType;
};

class Contour3D_GetPlaneCurve_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_GetPlaneCurve_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d, bool saveParams,
                                        PlanarCheckParams params = PlanarCheckParams());
    virtual ~Contour3D_GetPlaneCurve_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;
    bool saveParams;
    PlanarCheckParams params = PlanarCheckParams();

    MbCurve *curve2d;

    MbPlacement3D *placement;

    int resultType;
};

class Contour3D_IsPlanar_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_IsPlanar_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d,
                                   double accuracy = METRIC_EPSILON);
    virtual ~Contour3D_IsPlanar_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;
    double accuracy = METRIC_EPSILON;

    bool _result;

    int resultType;
};

class Contour3D_IsClosed_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_IsClosed_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Contour3D_IsClosed_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;

    bool _result;

    int resultType;
};

class Contour3D_IsTouch_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_IsTouch_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Contour3D_IsTouch_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;

    bool _result;

    int resultType;
};

class Contour3D_GetTMax_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_GetTMax_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Contour3D_GetTMax_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;

    double _result;

    int resultType;
};

class Contour3D_GetTMin_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_GetTMin_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Contour3D_GetTMin_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;

    double _result;

    int resultType;
};

class Contour3D_GetPeriod_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_GetPeriod_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Contour3D_GetPeriod_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;

    double _result;

    int resultType;
};

class Contour3D_IsPeriodic_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_IsPeriodic_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Contour3D_IsPeriodic_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;

    bool _result;

    int resultType;
};

class Contour3D_IsStraight_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_IsStraight_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d,
                                     bool ignoreParams = false);
    virtual ~Contour3D_IsStraight_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;
    bool ignoreParams = false;

    bool _result;

    int resultType;
};

class Contour3D_Trimmed_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_Trimmed_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d, double t1, double t2,
                                  int sense);
    virtual ~Contour3D_Trimmed_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;
    double t1;
    double t2;
    int sense;

    MbCurve3D *_result;

    int resultType;
};

class Contour3D_Normal_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_Normal_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Contour3D_Normal_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;
    double &t;

    MbVector3D *n;

    int resultType;
};

class Contour3D_Tangent_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_Tangent_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Contour3D_Tangent_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;
    double &t;

    MbVector3D *tan;

    int resultType;
};

class Contour3D_BNormal_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_BNormal_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Contour3D_BNormal_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;
    double &t;

    MbVector3D *b;

    int resultType;
};

class Contour3D_GetCentre_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_GetCentre_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Contour3D_GetCentre_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;

    MbCartPoint3D *c;

    int resultType;
};

class Contour3D_GetLimitPoint_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_GetLimitPoint_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d, ptrdiff_t number);
    virtual ~Contour3D_GetLimitPoint_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;
    ptrdiff_t number;

    MbCartPoint3D *point;

    int resultType;
};

class Contour3D_PointOn_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_PointOn_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Contour3D_PointOn_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;
    double &t;

    MbCartPoint3D *p;

    int resultType;
};

class Contour3D__PointOn_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D__PointOn_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d, double &t);
    virtual ~Contour3D__PointOn_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;
    double &t;

    MbCartPoint3D *p;

    int resultType;
};

class Contour3D_NearPointProjection_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_NearPointProjection_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d,
                                              const MbCartPoint3D &pnt, bool ext, MbRect1D *tRange = NULL);
    virtual ~Contour3D_NearPointProjection_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;
    const MbCartPoint3D &pnt;
    bool ext;
    MbRect1D *tRange = NULL;

    bool success;

    double t;

    int resultType;
};

class Contour3D_GetSurfaceCurve_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_GetSurfaceCurve_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d,
                                          VERSION version = Math::DefaultMathVersion());
    virtual ~Contour3D_GetSurfaceCurve_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;
    VERSION version = Math::DefaultMathVersion();

    MbCurve *curve2d;

    MbSurface *surface;

    int resultType;
};

class Contour3D_GetWeightCentre_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_GetWeightCentre_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Contour3D_GetWeightCentre_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;

    MbCartPoint3D *point;

    int resultType;
};

class Contour3D_GetBasisCurve_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_GetBasisCurve_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Contour3D_GetBasisCurve_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;

    const MbCurve3D *_result;

    int resultType;
};

class Contour3D_GetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_GetBasisPoints_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Contour3D_GetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;

    MbControlData3D *cd;

    int resultType;
};

class Contour3D_SetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_SetBasisPoints_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d,
                                         const MbControlData3D &cd);
    virtual ~Contour3D_SetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;
    const MbControlData3D &cd;

    int resultType;
};

class Contour3D_Inverse_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_Inverse_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Contour3D_Inverse_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;

    int resultType;
};

class Contour3D_GetProjection_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_GetProjection_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d,
                                        const MbPlacement3D &place, VERSION version = Math::DefaultMathVersion());
    virtual ~Contour3D_GetProjection_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;
    const MbPlacement3D &place;
    VERSION version = Math::DefaultMathVersion();

    MbCurve *_result;

    int resultType;
};

class Contour3D_GetCircleAxis_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_GetCircleAxis_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Contour3D_GetCircleAxis_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;

    bool success;

    MbAxis3D *axis;

    int resultType;
};

class Contour3D_IsA_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_IsA_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Contour3D_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class Contour3D_Type_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_Type_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Contour3D_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class Contour3D_Family_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_Family_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Contour3D_Family_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class Contour3D_Transform_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_Transform_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d, const MbMatrix3D &mat,
                                    MbRegTransform *iReg = NULL);
    virtual ~Contour3D_Transform_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;
    const MbMatrix3D &mat;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class Contour3D_Move_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_Move_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d, const MbVector3D &v,
                               MbRegTransform *iReg = NULL);
    virtual ~Contour3D_Move_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;
    const MbVector3D &v;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class Contour3D_Rotate_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_Rotate_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d, const MbAxis3D &axis,
                                 double angle, MbRegTransform *iReg = NULL);
    virtual ~Contour3D_Rotate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;
    const MbAxis3D &axis;
    double angle;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class Contour3D_Refresh_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_Refresh_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Contour3D_Refresh_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;

    int resultType;
};

class Contour3D_Duplicate_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_Duplicate_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d,
                                    MbRegDuplicate *iReg = NULL);
    virtual ~Contour3D_Duplicate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;
    MbRegDuplicate *iReg = NULL;

    MbSpaceItem *_result;

    int resultType;
};

class Contour3D_AddYourGabaritTo_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_AddYourGabaritTo_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d, MbCube &cube);
    virtual ~Contour3D_AddYourGabaritTo_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;
    MbCube &cube;

    int resultType;
};

class Contour3D_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_GetUseCount_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Contour3D_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;

    refcount_t _result;

    int resultType;
};

class Contour3D_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    Contour3D_AddRef_AsyncWorker(MbContour3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Contour3D_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour3D *_underlying;

    int resultType;
};

#endif
