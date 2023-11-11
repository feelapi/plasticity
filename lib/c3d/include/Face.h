// This is a generated file, modify: generate/templates/Face.h

#ifndef FACE_H
#define FACE_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <topology.h>

#include "TopologyItem.h"
#include "Vector3D.h"
#include "Placement3D.h"
#include "Surface.h"
#include "CurveEdge.h"
#include "Loop.h"
#include "Contour.h"
#include "PromiseWorker.h"

class Face : public Napi::ObjectWrap<Face>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbFace *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    Face(const Napi::CallbackInfo &info);

    Napi::Value GetAnyPointOn(const Napi::CallbackInfo &info);
    Napi::Value GetAnyPointOn_async(const Napi::CallbackInfo &info);
    Napi::Value Normal(const Napi::CallbackInfo &info);
    Napi::Value Normal_async(const Napi::CallbackInfo &info);
    Napi::Value Point(const Napi::CallbackInfo &info);
    Napi::Value Point_async(const Napi::CallbackInfo &info);
    Napi::Value GetPlacement(const Napi::CallbackInfo &info);
    Napi::Value GetPlacement_async(const Napi::CallbackInfo &info);
    Napi::Value GetPlanePlacement(const Napi::CallbackInfo &info);
    Napi::Value GetPlanePlacement_async(const Napi::CallbackInfo &info);
    Napi::Value GetControlPlacement(const Napi::CallbackInfo &info);
    Napi::Value GetControlPlacement_async(const Napi::CallbackInfo &info);
    Napi::Value GetSurfacePlacement(const Napi::CallbackInfo &info);
    Napi::Value GetSurfacePlacement_async(const Napi::CallbackInfo &info);
    Napi::Value OrientPlacement(const Napi::CallbackInfo &info);
    Napi::Value OrientPlacement_async(const Napi::CallbackInfo &info);
    Napi::Value NearPointProjection(const Napi::CallbackInfo &info);
    Napi::Value NearPointProjection_async(const Napi::CallbackInfo &info);
    Napi::Value GetFaceParam(const Napi::CallbackInfo &info);
    Napi::Value GetFaceParam_async(const Napi::CallbackInfo &info);
    Napi::Value GetSurfaceParam(const Napi::CallbackInfo &info);
    Napi::Value GetSurfaceParam_async(const Napi::CallbackInfo &info);
    Napi::Value GetOuterEdges(const Napi::CallbackInfo &info);
    Napi::Value GetOuterEdges_async(const Napi::CallbackInfo &info);
    Napi::Value GetEdges(const Napi::CallbackInfo &info);
    Napi::Value GetEdges_async(const Napi::CallbackInfo &info);
    Napi::Value IsSame(const Napi::CallbackInfo &info);
    Napi::Value IsSame_async(const Napi::CallbackInfo &info);
    Napi::Value GetNeighborFaces(const Napi::CallbackInfo &info);
    Napi::Value GetNeighborFaces_async(const Napi::CallbackInfo &info);
    Napi::Value GetBoundaryEdges(const Napi::CallbackInfo &info);
    Napi::Value GetBoundaryEdges_async(const Napi::CallbackInfo &info);
    Napi::Value GetSurfaceCurvesData(const Napi::CallbackInfo &info);
    Napi::Value GetSurfaceCurvesData_async(const Napi::CallbackInfo &info);
    Napi::Value HasNeighborFace(const Napi::CallbackInfo &info);
    Napi::Value HasNeighborFace_async(const Napi::CallbackInfo &info);
    Napi::Value GetLoopsCount(const Napi::CallbackInfo &info);
    Napi::Value GetLoopsCount_async(const Napi::CallbackInfo &info);
    Napi::Value GetSurface(const Napi::CallbackInfo &info);
    Napi::Value GetSurface_async(const Napi::CallbackInfo &info);
    Napi::Value GetLoop(const Napi::CallbackInfo &info);
    Napi::Value GetLoop_async(const Napi::CallbackInfo &info);
    Napi::Value IsSameSense(const Napi::CallbackInfo &info);
    Napi::Value IsSameSense_async(const Napi::CallbackInfo &info);
    Napi::Value DataDuplicate(const Napi::CallbackInfo &info);
    Napi::Value DataDuplicate_async(const Napi::CallbackInfo &info);
    Napi::Value IsPlanar(const Napi::CallbackInfo &info);
    Napi::Value IsPlanar_async(const Napi::CallbackInfo &info);
    Napi::Value GetCylinderAxis(const Napi::CallbackInfo &info);
    Napi::Value GetCylinderAxis_async(const Napi::CallbackInfo &info);
    Napi::Value UpdateSurfaceBounds(const Napi::CallbackInfo &info);
    Napi::Value UpdateSurfaceBounds_async(const Napi::CallbackInfo &info);
    Napi::Value IsOwnChangedItem(const Napi::CallbackInfo &info);
    Napi::Value IsOwnChangedItem_async(const Napi::CallbackInfo &info);
    Napi::Value IsA(const Napi::CallbackInfo &info);
    Napi::Value IsA_async(const Napi::CallbackInfo &info);
    Napi::Value GetName(const Napi::CallbackInfo &info);
    Napi::Value GetName_async(const Napi::CallbackInfo &info);
    Napi::Value GetMainName(const Napi::CallbackInfo &info);
    Napi::Value GetMainName_async(const Napi::CallbackInfo &info);
    Napi::Value GetFirstName(const Napi::CallbackInfo &info);
    Napi::Value GetFirstName_async(const Napi::CallbackInfo &info);
    Napi::Value GetNameHash(const Napi::CallbackInfo &info);
    Napi::Value GetNameHash_async(const Napi::CallbackInfo &info);
    Napi::Value AddYourGabaritTo(const Napi::CallbackInfo &info);
    Napi::Value AddYourGabaritTo_async(const Napi::CallbackInfo &info);
    Napi::Value CalculateMesh(const Napi::CallbackInfo &info);
    Napi::Value CalculateMesh_async(const Napi::CallbackInfo &info);
    Napi::Value GetOwnChanged(const Napi::CallbackInfo &info);
    Napi::Value GetOwnChanged_async(const Napi::CallbackInfo &info);
    Napi::Value GetUseCount(const Napi::CallbackInfo &info);
    Napi::Value GetUseCount_async(const Napi::CallbackInfo &info);
    Napi::Value AddRef(const Napi::CallbackInfo &info);
    Napi::Value AddRef_async(const Napi::CallbackInfo &info);
    Napi::Value SetStyle(const Napi::CallbackInfo &info);
    Napi::Value SetStyle_async(const Napi::CallbackInfo &info);
    Napi::Value GetStyle(const Napi::CallbackInfo &info);
    Napi::Value GetStyle_async(const Napi::CallbackInfo &info);
    Napi::Value SetColor(const Napi::CallbackInfo &info);
    Napi::Value SetColor_async(const Napi::CallbackInfo &info);
    Napi::Value GetColor(const Napi::CallbackInfo &info);
    Napi::Value GetColor_async(const Napi::CallbackInfo &info);
    Napi::Value AttributesConvert(const Napi::CallbackInfo &info);
    Napi::Value AttributesConvert_async(const Napi::CallbackInfo &info);
    Napi::Value Id(const Napi::CallbackInfo &info);

    MbFace *_underlying;

    ~Face();

  private:
};

class Face_GetAnyPointOn_AsyncWorker : public PromiseWorker
{
  public:
    Face_GetAnyPointOn_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Face_GetAnyPointOn_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;

    bool _result;

    MbCartPoint3D *point;

    MbVector3D *normal;

    int resultType;
};

class Face_Normal_AsyncWorker : public PromiseWorker
{
  public:
    Face_Normal_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d, double u, double v);
    virtual ~Face_Normal_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;
    double u;
    double v;

    MbVector3D *result;

    int resultType;
};

class Face_Point_AsyncWorker : public PromiseWorker
{
  public:
    Face_Point_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d, double faceU, double faceV);
    virtual ~Face_Point_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;
    double faceU;
    double faceV;

    MbCartPoint3D *point;

    int resultType;
};

class Face_GetPlacement_AsyncWorker : public PromiseWorker
{
  public:
    Face_GetPlacement_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Face_GetPlacement_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;

    MbPlacement3D *result;

    int resultType;
};

class Face_GetPlanePlacement_AsyncWorker : public PromiseWorker
{
  public:
    Face_GetPlanePlacement_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Face_GetPlanePlacement_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;

    MbPlacement3D *result;

    int resultType;
};

class Face_GetControlPlacement_AsyncWorker : public PromiseWorker
{
  public:
    Face_GetControlPlacement_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Face_GetControlPlacement_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;

    MbPlacement3D *result;

    int resultType;
};

class Face_GetSurfacePlacement_AsyncWorker : public PromiseWorker
{
  public:
    Face_GetSurfacePlacement_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Face_GetSurfacePlacement_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;

    MbPlacement3D *result;

    int resultType;
};

class Face_OrientPlacement_AsyncWorker : public PromiseWorker
{
  public:
    Face_OrientPlacement_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d, MbPlacement3D &result);
    virtual ~Face_OrientPlacement_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;
    MbPlacement3D &result;

    int resultType;
};

class Face_NearPointProjection_AsyncWorker : public PromiseWorker
{
  public:
    Face_NearPointProjection_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d,
                                         const MbCartPoint3D &point);
    virtual ~Face_NearPointProjection_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;
    const MbCartPoint3D &point;

    MbeItemLocation location;

    double u;

    double v;

    MbVector3D *normal;

    c3d::IndicesPair *edgeLoc;

    ptrdiff_t corner;

    int resultType;
};

class Face_GetFaceParam_AsyncWorker : public PromiseWorker
{
  public:
    Face_GetFaceParam_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d, const double surfaceU,
                                  const double surfaceV);
    virtual ~Face_GetFaceParam_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;
    const double surfaceU;
    const double surfaceV;

    double faceU;

    double faceV;

    int resultType;
};

class Face_GetSurfaceParam_AsyncWorker : public PromiseWorker
{
  public:
    Face_GetSurfaceParam_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d, const double faceU,
                                     const double faceV);
    virtual ~Face_GetSurfaceParam_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;
    const double faceU;
    const double faceV;

    double surfaceU;

    double surfaceV;

    int resultType;
};

class Face_GetOuterEdges_AsyncWorker : public PromiseWorker
{
  public:
    Face_GetOuterEdges_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d, size_t mapThreshold = 50);
    virtual ~Face_GetOuterEdges_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;
    size_t mapThreshold = 50;

    RPArray<MbCurveEdge> *edges;

    int resultType;
};

class Face_GetEdges_AsyncWorker : public PromiseWorker
{
  public:
    Face_GetEdges_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d, size_t mapThreshold = 50);
    virtual ~Face_GetEdges_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;
    size_t mapThreshold = 50;

    RPArray<MbCurveEdge> *edges;

    int resultType;
};

class Face_IsSame_AsyncWorker : public PromiseWorker
{
  public:
    Face_IsSame_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d, const MbTopologyItem &other,
                            double accuracy);
    virtual ~Face_IsSame_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;
    const MbTopologyItem &other;
    double accuracy;

    bool _result;

    int resultType;
};

class Face_GetNeighborFaces_AsyncWorker : public PromiseWorker
{
  public:
    Face_GetNeighborFaces_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Face_GetNeighborFaces_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;

    RPArray<MbFace> *faces;

    int resultType;
};

class Face_GetBoundaryEdges_AsyncWorker : public PromiseWorker
{
  public:
    Face_GetBoundaryEdges_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Face_GetBoundaryEdges_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;

    RPArray<MbCurveEdge> *edges;

    int resultType;
};

class Face_GetSurfaceCurvesData_AsyncWorker : public PromiseWorker
{
  public:
    Face_GetSurfaceCurvesData_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Face_GetSurfaceCurvesData_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;

    MbSurface *surface;

    RPArray<MbContour> *contours;

    int resultType;
};

class Face_HasNeighborFace_AsyncWorker : public PromiseWorker
{
  public:
    Face_HasNeighborFace_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Face_HasNeighborFace_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;

    bool _result;

    int resultType;
};

class Face_GetLoopsCount_AsyncWorker : public PromiseWorker
{
  public:
    Face_GetLoopsCount_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Face_GetLoopsCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;

    size_t _result;

    int resultType;
};

class Face_GetSurface_AsyncWorker : public PromiseWorker
{
  public:
    Face_GetSurface_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Face_GetSurface_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;

    const MbSurface *_result;

    int resultType;
};

class Face_GetLoop_AsyncWorker : public PromiseWorker
{
  public:
    Face_GetLoop_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d, size_t index);
    virtual ~Face_GetLoop_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;
    size_t index;

    MbLoop *_result;

    int resultType;
};

class Face_IsSameSense_AsyncWorker : public PromiseWorker
{
  public:
    Face_IsSameSense_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Face_IsSameSense_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;

    bool _result;

    int resultType;
};

class Face_DataDuplicate_AsyncWorker : public PromiseWorker
{
  public:
    Face_DataDuplicate_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d, MbRegDuplicate *dup = NULL);
    virtual ~Face_DataDuplicate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;
    MbRegDuplicate *dup = NULL;

    MbFace *_result;

    int resultType;
};

class Face_IsPlanar_AsyncWorker : public PromiseWorker
{
  public:
    Face_IsPlanar_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Face_IsPlanar_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;

    bool _result;

    int resultType;
};

class Face_GetCylinderAxis_AsyncWorker : public PromiseWorker
{
  public:
    Face_GetCylinderAxis_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Face_GetCylinderAxis_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;

    MbAxis3D *axis;

    int resultType;
};

class Face_UpdateSurfaceBounds_AsyncWorker : public PromiseWorker
{
  public:
    Face_UpdateSurfaceBounds_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d,
                                         bool curveBoundedOnly = true);
    virtual ~Face_UpdateSurfaceBounds_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;
    bool curveBoundedOnly = true;

    bool _result;

    int resultType;
};

class Face_IsOwnChangedItem_AsyncWorker : public PromiseWorker
{
  public:
    Face_IsOwnChangedItem_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d,
                                      bool checkVertices = false);
    virtual ~Face_IsOwnChangedItem_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;
    bool checkVertices = false;

    bool _result;

    int resultType;
};

class Face_IsA_AsyncWorker : public PromiseWorker
{
  public:
    Face_IsA_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Face_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;

    MbeTopologyType _result;

    int resultType;
};

class Face_GetName_AsyncWorker : public PromiseWorker
{
  public:
    Face_GetName_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Face_GetName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;

    const MbName *_result;

    int resultType;
};

class Face_GetMainName_AsyncWorker : public PromiseWorker
{
  public:
    Face_GetMainName_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Face_GetMainName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;

    SimpleName _result;

    int resultType;
};

class Face_GetFirstName_AsyncWorker : public PromiseWorker
{
  public:
    Face_GetFirstName_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Face_GetFirstName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;

    SimpleName _result;

    int resultType;
};

class Face_GetNameHash_AsyncWorker : public PromiseWorker
{
  public:
    Face_GetNameHash_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Face_GetNameHash_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;

    SimpleName _result;

    int resultType;
};

class Face_AddYourGabaritTo_AsyncWorker : public PromiseWorker
{
  public:
    Face_AddYourGabaritTo_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d, MbCube &cube);
    virtual ~Face_AddYourGabaritTo_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;
    MbCube &cube;

    int resultType;
};

class Face_CalculateMesh_AsyncWorker : public PromiseWorker
{
  public:
    Face_CalculateMesh_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d, const MbStepData &stepData,
                                   const MbFormNote &note);
    virtual ~Face_CalculateMesh_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;
    const MbStepData &stepData;
    const MbFormNote &note;

    MbMesh *mesh;

    int resultType;
};

class Face_GetOwnChanged_AsyncWorker : public PromiseWorker
{
  public:
    Face_GetOwnChanged_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Face_GetOwnChanged_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;

    bool _result;

    int resultType;
};

class Face_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    Face_GetUseCount_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Face_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;

    refcount_t _result;

    int resultType;
};

class Face_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    Face_AddRef_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Face_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;

    int resultType;
};

class Face_SetStyle_AsyncWorker : public PromiseWorker
{
  public:
    Face_SetStyle_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d, int s);
    virtual ~Face_SetStyle_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;
    int s;

    int resultType;
};

class Face_GetStyle_AsyncWorker : public PromiseWorker
{
  public:
    Face_GetStyle_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Face_GetStyle_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;

    int _result;

    int resultType;
};

class Face_SetColor_AsyncWorker : public PromiseWorker
{
  public:
    Face_SetColor_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d, uint32 c);
    virtual ~Face_SetColor_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;
    uint32 c;

    int resultType;
};

class Face_GetColor_AsyncWorker : public PromiseWorker
{
  public:
    Face_GetColor_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Face_GetColor_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;

    uint32 _result;

    int resultType;
};

class Face_AttributesConvert_AsyncWorker : public PromiseWorker
{
  public:
    Face_AttributesConvert_AsyncWorker(MbFace *_underlying, Napi::Promise::Deferred const &d, MbGrid &other);
    virtual ~Face_AttributesConvert_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFace *_underlying;
    MbGrid &other;

    int resultType;
};

#endif
