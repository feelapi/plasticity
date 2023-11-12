// This is a generated file, modify: generate/templates/ActionCurve.h

#ifndef ACTIONCURVE_H
#define ACTIONCURVE_H

#include <napi.h>
#include <vector>

#include <action_curve.h>

#include "CartPoint.h"
#include "Curve.h"
#include "Contour.h"
#include "Curve3D.h"

#include "PromiseWorker.h"

class ActionCurve : public Napi::ObjectWrap<ActionCurve>
{
  public:
    static Napi::Object Init(Napi::Env env, Napi::Object exports);

    static Napi::Value Arc(const Napi::CallbackInfo &info);
    static Napi::Value Arc_async(const Napi::CallbackInfo &info);
    static Napi::Value SplineCurve(const Napi::CallbackInfo &info);
    static Napi::Value SplineCurve_async(const Napi::CallbackInfo &info);
    static Napi::Value OffsetContour(const Napi::CallbackInfo &info);
    static Napi::Value OffsetContour_async(const Napi::CallbackInfo &info);
    static Napi::Value SurfaceBoundContour(const Napi::CallbackInfo &info);
    static Napi::Value SurfaceBoundContour_async(const Napi::CallbackInfo &info);
    static Napi::Value Line(const Napi::CallbackInfo &info);
    static Napi::Value Line_async(const Napi::CallbackInfo &info);
    static Napi::Value Segment(const Napi::CallbackInfo &info);
    static Napi::Value Segment_async(const Napi::CallbackInfo &info);
    static Napi::Value RegularPolygon(const Napi::CallbackInfo &info);
    static Napi::Value RegularPolygon_async(const Napi::CallbackInfo &info);
    static Napi::Value NurbsCopy(const Napi::CallbackInfo &info);
    static Napi::Value NurbsCopy_async(const Napi::CallbackInfo &info);
    static Napi::Value DuplicateCurve(const Napi::CallbackInfo &info);
    static Napi::Value DuplicateCurve_async(const Napi::CallbackInfo &info);
};

class ActionCurve_Arc_AsyncWorker : public PromiseWorker
{
  public:
    ActionCurve_Arc_AsyncWorker(Napi::Promise::Deferred const &d, const MbCartPoint &center,
                                const SArray<MbCartPoint> &points, bool curveClosed, double angle, double &a,
                                double &b);
    virtual ~ActionCurve_Arc_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    const MbCartPoint &center;
    const SArray<MbCartPoint> &points;
    bool curveClosed;
    double angle;
    double &a;
    double &b;

    MbCurve *result;

    int resultType;
};

class ActionCurve_SplineCurve_AsyncWorker : public PromiseWorker
{
  public:
    ActionCurve_SplineCurve_AsyncWorker(Napi::Promise::Deferred const &d, const SArray<MbCartPoint> &points,
                                        bool closed, MbePlaneType curveType);
    virtual ~ActionCurve_SplineCurve_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    const SArray<MbCartPoint> &points;
    bool closed;
    MbePlaneType curveType;

    MbCurve *result;

    int resultType;
};

class ActionCurve_OffsetContour_AsyncWorker : public PromiseWorker
{
  public:
    ActionCurve_OffsetContour_AsyncWorker(Napi::Promise::Deferred const &d, const MbContour &cntr, double rad,
                                          double xEpsilon, double yEpsilon, bool modifySegments,
                                          VERSION version = Math::DefaultMathVersion());
    virtual ~ActionCurve_OffsetContour_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    const MbContour &cntr;
    double rad;
    double xEpsilon;
    double yEpsilon;
    bool modifySegments;
    VERSION version = Math::DefaultMathVersion();

    MbContour *_result;

    int resultType;
};

class ActionCurve_SurfaceBoundContour_AsyncWorker : public PromiseWorker
{
  public:
    ActionCurve_SurfaceBoundContour_AsyncWorker(Napi::Promise::Deferred const &d, const MbSurface &surface,
                                                const MbCurve3D &spaceCurve,
                                                VERSION version = Math::DefaultMathVersion());
    virtual ~ActionCurve_SurfaceBoundContour_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    const MbSurface &surface;
    const MbCurve3D &spaceCurve;
    VERSION version = Math::DefaultMathVersion();

    MbContour *result;

    int resultType;
};

class ActionCurve_Line_AsyncWorker : public PromiseWorker
{
  public:
    ActionCurve_Line_AsyncWorker(Napi::Promise::Deferred const &d, const MbCartPoint &point1,
                                 const MbCartPoint &point2);
    virtual ~ActionCurve_Line_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    const MbCartPoint &point1;
    const MbCartPoint &point2;

    MbCurve *result;

    int resultType;
};

class ActionCurve_Segment_AsyncWorker : public PromiseWorker
{
  public:
    ActionCurve_Segment_AsyncWorker(Napi::Promise::Deferred const &d, const MbCartPoint &point1,
                                    const MbCartPoint &point2);
    virtual ~ActionCurve_Segment_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    const MbCartPoint &point1;
    const MbCartPoint &point2;

    MbCurve *result;

    int resultType;
};

class ActionCurve_RegularPolygon_AsyncWorker : public PromiseWorker
{
  public:
    ActionCurve_RegularPolygon_AsyncWorker(Napi::Promise::Deferred const &d, const MbCartPoint &centre,
                                           const MbCartPoint &point, size_t vertexCount, bool describe);
    virtual ~ActionCurve_RegularPolygon_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    const MbCartPoint &centre;
    const MbCartPoint &point;
    size_t vertexCount;
    bool describe;

    MbCurve *result;

    int resultType;
};

class ActionCurve_NurbsCopy_AsyncWorker : public PromiseWorker
{
  public:
    ActionCurve_NurbsCopy_AsyncWorker(Napi::Promise::Deferred const &d, const MbCurve &curve);
    virtual ~ActionCurve_NurbsCopy_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    const MbCurve &curve;

    MbCurve *result;

    int resultType;
};

class ActionCurve_DuplicateCurve_AsyncWorker : public PromiseWorker
{
  public:
    ActionCurve_DuplicateCurve_AsyncWorker(Napi::Promise::Deferred const &d, const MbCurve &curve,
                                           VERSION version = Math::DefaultMathVersion());
    virtual ~ActionCurve_DuplicateCurve_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    const MbCurve &curve;
    VERSION version = Math::DefaultMathVersion();

    MbCurve *_result;

    int resultType;
};

#endif
