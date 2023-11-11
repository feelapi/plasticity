// This is a generated file, modify: generate/templates/Mesh.h

#ifndef MESH_H
#define MESH_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <mesh.h>

#include "Item.h"
#include "Grid.h"
#include "FloatAxis3D.h"
#include "FloatPoint3D.h"
#include "Axis3D.h"
#include "Matrix3D.h"
#include "Path.h"
#include "PromiseWorker.h"

class Mesh : public Napi::ObjectWrap<Mesh>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbMesh *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    Mesh(const Napi::CallbackInfo &info);

    Napi::Value GetBuffers(const Napi::CallbackInfo &info);
    Napi::Value GetBuffers_async(const Napi::CallbackInfo &info);
    Napi::Value GetApexes(const Napi::CallbackInfo &info);
    Napi::Value GetApexes_async(const Napi::CallbackInfo &info);
    Napi::Value GetEdges(const Napi::CallbackInfo &info);
    Napi::Value GetEdges_async(const Napi::CallbackInfo &info);
    Napi::Value GetMeshType(const Napi::CallbackInfo &info);
    Napi::Value GetMeshType_async(const Napi::CallbackInfo &info);
    Napi::Value ConvertAllToTriangles(const Napi::CallbackInfo &info);
    Napi::Value ConvertAllToTriangles_async(const Napi::CallbackInfo &info);
    Napi::Value IsClosed(const Napi::CallbackInfo &info);
    Napi::Value IsClosed_async(const Napi::CallbackInfo &info);
    Napi::Value AddGrid(const Napi::CallbackInfo &info);
    Napi::Value AddGrid_async(const Napi::CallbackInfo &info);
    Napi::Value AddExistingGrid(const Napi::CallbackInfo &info);
    Napi::Value AddExistingGrid_async(const Napi::CallbackInfo &info);
    Napi::Value GetGrids(const Napi::CallbackInfo &info);
    Napi::Value GetGrids_async(const Napi::CallbackInfo &info);
    Napi::Value CreateGridSearchTrees(const Napi::CallbackInfo &info);
    Napi::Value CreateGridSearchTrees_async(const Napi::CallbackInfo &info);
    Napi::Value LineIntersection(const Napi::CallbackInfo &info);
    Napi::Value LineIntersection_async(const Napi::CallbackInfo &info);
    Napi::Value NearestMesh(const Napi::CallbackInfo &info);
    Napi::Value NearestMesh_async(const Napi::CallbackInfo &info);
    Napi::Value CreateMesh(const Napi::CallbackInfo &info);
    Napi::Value CreateMesh_async(const Napi::CallbackInfo &info);
    Napi::Value CalculateMesh(const Napi::CallbackInfo &info);
    Napi::Value CalculateMesh_async(const Napi::CallbackInfo &info);
    Napi::Value GetItemName(const Napi::CallbackInfo &info);
    Napi::Value GetItemName_async(const Napi::CallbackInfo &info);
    Napi::Value SetItemName(const Napi::CallbackInfo &info);
    Napi::Value SetItemName_async(const Napi::CallbackInfo &info);
    Napi::Value RebuildItem(const Napi::CallbackInfo &info);
    Napi::Value RebuildItem_async(const Napi::CallbackInfo &info);
    Napi::Value GetItemByPath(const Napi::CallbackInfo &info);
    Napi::Value GetItemByPath_async(const Napi::CallbackInfo &info);
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
    Napi::Value GetCreatorsCount(const Napi::CallbackInfo &info);
    Napi::Value GetCreatorsCount_async(const Napi::CallbackInfo &info);
    Napi::Value GetCreator(const Napi::CallbackInfo &info);
    Napi::Value GetCreator_async(const Napi::CallbackInfo &info);
    Napi::Value SetCreator(const Napi::CallbackInfo &info);
    Napi::Value SetCreator_async(const Napi::CallbackInfo &info);
    Napi::Value DetachCreator(const Napi::CallbackInfo &info);
    Napi::Value DetachCreator_async(const Napi::CallbackInfo &info);
    Napi::Value AddCreator(const Napi::CallbackInfo &info);
    Napi::Value AddCreator_async(const Napi::CallbackInfo &info);
    Napi::Value GetCreators(const Napi::CallbackInfo &info);
    Napi::Value GetCreators_async(const Napi::CallbackInfo &info);
    Napi::Value DeleteCreator(const Napi::CallbackInfo &info);
    Napi::Value DeleteCreator_async(const Napi::CallbackInfo &info);
    Napi::Value GetActiveCreatorsCount(const Napi::CallbackInfo &info);
    Napi::Value GetActiveCreatorsCount_async(const Napi::CallbackInfo &info);
    Napi::Value Id(const Napi::CallbackInfo &info);

    MbMesh *_underlying;

    ~Mesh();

  private:
};

class Mesh_GetMeshType_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_GetMeshType_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Mesh_GetMeshType_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class Mesh_ConvertAllToTriangles_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_ConvertAllToTriangles_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Mesh_ConvertAllToTriangles_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;

    int resultType;
};

class Mesh_IsClosed_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_IsClosed_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Mesh_IsClosed_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;

    bool _result;

    int resultType;
};

class Mesh_AddGrid_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_AddGrid_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Mesh_AddGrid_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;

    MbGrid *_result;

    int resultType;
};

class Mesh_AddExistingGrid_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_AddExistingGrid_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d, MbGrid &gr);
    virtual ~Mesh_AddExistingGrid_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;
    MbGrid &gr;

    int resultType;
};

class Mesh_GetGrids_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_GetGrids_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Mesh_GetGrids_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;

    RPArray<MbGrid> *result;

    int resultType;
};

class Mesh_CreateGridSearchTrees_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_CreateGridSearchTrees_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d,
                                           bool forcedNew = false);
    virtual ~Mesh_CreateGridSearchTrees_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;
    bool forcedNew = false;

    int resultType;
};

class Mesh_LineIntersection_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_LineIntersection_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d, const MbFloatAxis3D &line);
    virtual ~Mesh_LineIntersection_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;
    const MbFloatAxis3D &line;

    bool _result;

    MbFloatPoint3D *crossPnt;

    float tRes;

    int resultType;
};

class Mesh_NearestMesh_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_NearestMesh_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d, MbeSpaceType sType,
                                 MbeTopologyType tType, MbePlaneType pType, const MbAxis3D &axis, double maxDistance,
                                 bool gridPriority);
    virtual ~Mesh_NearestMesh_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;
    MbeSpaceType sType;
    MbeTopologyType tType;
    MbePlaneType pType;
    const MbAxis3D &axis;
    double maxDistance;
    bool gridPriority;

    bool success;

    double t;

    double dMin;

    MbItem *find;

    SimpleName findName;

    MbRefItem *element;

    SimpleName elementName;

    MbPath *path;

    MbMatrix3D *from;

    int resultType;
};

class Mesh_CreateMesh_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_CreateMesh_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d, const MbStepData &stepData,
                                const MbFormNote &note, MbRegDuplicate *iReg = NULL);
    virtual ~Mesh_CreateMesh_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;
    const MbStepData &stepData;
    const MbFormNote &note;
    MbRegDuplicate *iReg = NULL;

    MbItem *_result;

    int resultType;
};

class Mesh_CalculateMesh_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_CalculateMesh_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d, const MbStepData &stepData,
                                   const MbFormNote &note);
    virtual ~Mesh_CalculateMesh_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;
    const MbStepData &stepData;
    const MbFormNote &note;

    MbMesh *mesh;

    int resultType;
};

class Mesh_GetItemName_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_GetItemName_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Mesh_GetItemName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;

    SimpleName _result;

    int resultType;
};

class Mesh_SetItemName_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_SetItemName_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d, SimpleName name);
    virtual ~Mesh_SetItemName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;
    SimpleName name;

    int resultType;
};

class Mesh_RebuildItem_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_RebuildItem_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d, MbeCopyMode sameShell,
                                 ProgressIndicator *progInd = NULL);
    virtual ~Mesh_RebuildItem_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;
    MbeCopyMode sameShell;
    ProgressIndicator *progInd = NULL;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class Mesh_GetItemByPath_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_GetItemByPath_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d, const MbPath &path,
                                   size_t ind, MbMatrix3D &from, size_t currInd = 0);
    virtual ~Mesh_GetItemByPath_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;
    const MbPath &path;
    size_t ind;
    MbMatrix3D &from;
    size_t currInd = 0;

    const MbItem *_result;

    int resultType;
};

class Mesh_IsA_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_IsA_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Mesh_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class Mesh_Type_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_Type_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Mesh_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class Mesh_Family_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_Family_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Mesh_Family_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class Mesh_Transform_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_Transform_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d, const MbMatrix3D &mat,
                               MbRegTransform *iReg = NULL);
    virtual ~Mesh_Transform_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;
    const MbMatrix3D &mat;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class Mesh_Move_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_Move_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d, const MbVector3D &v,
                          MbRegTransform *iReg = NULL);
    virtual ~Mesh_Move_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;
    const MbVector3D &v;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class Mesh_Rotate_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_Rotate_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d, const MbAxis3D &axis, double angle,
                            MbRegTransform *iReg = NULL);
    virtual ~Mesh_Rotate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;
    const MbAxis3D &axis;
    double angle;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class Mesh_Refresh_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_Refresh_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Mesh_Refresh_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;

    int resultType;
};

class Mesh_Duplicate_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_Duplicate_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d, MbRegDuplicate *iReg = NULL);
    virtual ~Mesh_Duplicate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;
    MbRegDuplicate *iReg = NULL;

    MbSpaceItem *_result;

    int resultType;
};

class Mesh_AddYourGabaritTo_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_AddYourGabaritTo_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d, MbCube &cube);
    virtual ~Mesh_AddYourGabaritTo_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;
    MbCube &cube;

    int resultType;
};

class Mesh_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_GetUseCount_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Mesh_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;

    refcount_t _result;

    int resultType;
};

class Mesh_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_AddRef_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Mesh_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;

    int resultType;
};

class Mesh_SetStyle_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_SetStyle_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d, int s);
    virtual ~Mesh_SetStyle_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;
    int s;

    int resultType;
};

class Mesh_GetStyle_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_GetStyle_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Mesh_GetStyle_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;

    int _result;

    int resultType;
};

class Mesh_SetColor_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_SetColor_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d, uint32 c);
    virtual ~Mesh_SetColor_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;
    uint32 c;

    int resultType;
};

class Mesh_GetColor_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_GetColor_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Mesh_GetColor_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;

    uint32 _result;

    int resultType;
};

class Mesh_AttributesConvert_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_AttributesConvert_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d, MbGrid &other);
    virtual ~Mesh_AttributesConvert_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;
    MbGrid &other;

    int resultType;
};

class Mesh_GetCreatorsCount_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_GetCreatorsCount_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Mesh_GetCreatorsCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;

    size_t _result;

    int resultType;
};

class Mesh_GetCreator_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_GetCreator_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d, size_t ind);
    virtual ~Mesh_GetCreator_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;
    size_t ind;

    const MbCreator *_result;

    int resultType;
};

class Mesh_SetCreator_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_SetCreator_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d, size_t ind);
    virtual ~Mesh_SetCreator_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;
    size_t ind;

    MbCreator *_result;

    int resultType;
};

class Mesh_DetachCreator_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_DetachCreator_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d, size_t ind);
    virtual ~Mesh_DetachCreator_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;
    size_t ind;

    MbCreator *_result;

    int resultType;
};

class Mesh_AddCreator_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_AddCreator_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d, const MbCreator *creator,
                                bool addSame = false);
    virtual ~Mesh_AddCreator_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;
    const MbCreator *creator;
    bool addSame = false;

    bool _result;

    int resultType;
};

class Mesh_GetCreators_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_GetCreators_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Mesh_GetCreators_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;

    RPArray<MbCreator> *creators;

    int resultType;
};

class Mesh_DeleteCreator_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_DeleteCreator_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d, size_t ind);
    virtual ~Mesh_DeleteCreator_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;
    size_t ind;

    bool _result;

    int resultType;
};

class Mesh_GetActiveCreatorsCount_AsyncWorker : public PromiseWorker
{
  public:
    Mesh_GetActiveCreatorsCount_AsyncWorker(MbMesh *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Mesh_GetActiveCreatorsCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMesh *_underlying;

    size_t _result;

    int resultType;
};

#endif
