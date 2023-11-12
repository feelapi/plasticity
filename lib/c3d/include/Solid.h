// This is a generated file, modify: generate/templates/Solid.h

#ifndef SOLID_H
#define SOLID_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <solid.h>

#include "StepData.h"
#include "FormNote.h"
#include "Item.h"
#include "CurveEdge.h"
#include "Face.h"
#include "FaceShell.h"
#include "Creator.h"
#include "PromiseWorker.h"

class Solid : public Napi::ObjectWrap<Solid>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbSolid *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    Solid(const Napi::CallbackInfo &info);

    Napi::Value GetEdges(const Napi::CallbackInfo &info);
    Napi::Value GetEdges_async(const Napi::CallbackInfo &info);
    Napi::Value GetFaces(const Napi::CallbackInfo &info);
    Napi::Value GetFaces_async(const Napi::CallbackInfo &info);
    Napi::Value FindFaceByName(const Napi::CallbackInfo &info);
    Napi::Value FindFaceByName_async(const Napi::CallbackInfo &info);
    Napi::Value FindFaceByHash(const Napi::CallbackInfo &info);
    Napi::Value FindFaceByHash_async(const Napi::CallbackInfo &info);
    Napi::Value GetFace(const Napi::CallbackInfo &info);
    Napi::Value GetFace_async(const Napi::CallbackInfo &info);
    Napi::Value GetEdge(const Napi::CallbackInfo &info);
    Napi::Value GetEdge_async(const Napi::CallbackInfo &info);
    Napi::Value FindEdgeByName(const Napi::CallbackInfo &info);
    Napi::Value FindEdgeByName_async(const Napi::CallbackInfo &info);
    Napi::Value GetShell(const Napi::CallbackInfo &info);
    Napi::Value GetShell_async(const Napi::CallbackInfo &info);
    Napi::Value GetFaceIndex(const Napi::CallbackInfo &info);
    Napi::Value GetFaceIndex_async(const Napi::CallbackInfo &info);
    Napi::Value GetEdgeIndex(const Napi::CallbackInfo &info);
    Napi::Value GetEdgeIndex_async(const Napi::CallbackInfo &info);
    Napi::Value GetBasisPoints(const Napi::CallbackInfo &info);
    Napi::Value GetBasisPoints_async(const Napi::CallbackInfo &info);
    Napi::Value SetBasisPoints(const Napi::CallbackInfo &info);
    Napi::Value SetBasisPoints_async(const Napi::CallbackInfo &info);
    Napi::Value GetItems(const Napi::CallbackInfo &info);
    Napi::Value GetItems_async(const Napi::CallbackInfo &info);
    Napi::Value IsClosed(const Napi::CallbackInfo &info);
    Napi::Value IsClosed_async(const Napi::CallbackInfo &info);
    Napi::Value GetCube(const Napi::CallbackInfo &info);
    Napi::Value GetCube_async(const Napi::CallbackInfo &info);
    Napi::Value SetOwnChangedThrough(const Napi::CallbackInfo &info);
    Napi::Value SetOwnChangedThrough_async(const Napi::CallbackInfo &info);
    Napi::Value MakeRight(const Napi::CallbackInfo &info);
    Napi::Value MakeRight_async(const Napi::CallbackInfo &info);
    Napi::Value IsRight(const Napi::CallbackInfo &info);
    Napi::Value IsRight_async(const Napi::CallbackInfo &info);
    Napi::Value SolidClassification(const Napi::CallbackInfo &info);
    Napi::Value SolidClassification_async(const Napi::CallbackInfo &info);
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

    MbSolid *_underlying;

    ~Solid();

  private:
};

class Solid_GetEdges_AsyncWorker : public PromiseWorker
{
  public:
    Solid_GetEdges_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Solid_GetEdges_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;

    RPArray<MbCurveEdge> *edges;

    int resultType;
};

class Solid_GetFaces_AsyncWorker : public PromiseWorker
{
  public:
    Solid_GetFaces_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Solid_GetFaces_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;

    RPArray<MbFace> *faces;

    int resultType;
};

class Solid_FindFaceByName_AsyncWorker : public PromiseWorker
{
  public:
    Solid_FindFaceByName_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d, const MbName &name);
    virtual ~Solid_FindFaceByName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;
    const MbName &name;

    const MbFace *_result;

    int resultType;
};

class Solid_FindFaceByHash_AsyncWorker : public PromiseWorker
{
  public:
    Solid_FindFaceByHash_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d, const SimpleName h);
    virtual ~Solid_FindFaceByHash_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;
    const SimpleName h;

    const MbFace *_result;

    int resultType;
};

class Solid_GetFace_AsyncWorker : public PromiseWorker
{
  public:
    Solid_GetFace_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d, size_t index);
    virtual ~Solid_GetFace_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;
    size_t index;

    const MbFace *_result;

    int resultType;
};

class Solid_GetEdge_AsyncWorker : public PromiseWorker
{
  public:
    Solid_GetEdge_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d, size_t index);
    virtual ~Solid_GetEdge_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;
    size_t index;

    MbCurveEdge *_result;

    int resultType;
};

class Solid_FindEdgeByName_AsyncWorker : public PromiseWorker
{
  public:
    Solid_FindEdgeByName_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d, const MbName &name);
    virtual ~Solid_FindEdgeByName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;
    const MbName &name;

    MbCurveEdge *_result;

    int resultType;
};

class Solid_GetShell_AsyncWorker : public PromiseWorker
{
  public:
    Solid_GetShell_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Solid_GetShell_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;

    MbFaceShell *_result;

    int resultType;
};

class Solid_GetFaceIndex_AsyncWorker : public PromiseWorker
{
  public:
    Solid_GetFaceIndex_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d, const MbFace &face);
    virtual ~Solid_GetFaceIndex_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;
    const MbFace &face;

    size_t _result;

    int resultType;
};

class Solid_GetEdgeIndex_AsyncWorker : public PromiseWorker
{
  public:
    Solid_GetEdgeIndex_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d, const MbCurveEdge &edge);
    virtual ~Solid_GetEdgeIndex_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;
    const MbCurveEdge &edge;

    size_t _result;

    int resultType;
};

class Solid_GetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    Solid_GetBasisPoints_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Solid_GetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;

    MbControlData3D *cd;

    int resultType;
};

class Solid_SetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    Solid_SetBasisPoints_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d, const MbControlData3D &cd);
    virtual ~Solid_SetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;
    const MbControlData3D &cd;

    int resultType;
};

class Solid_GetItems_AsyncWorker : public PromiseWorker
{
  public:
    Solid_GetItems_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Solid_GetItems_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;

    RPArray<MbTopologyItem> *items;

    int resultType;
};

class Solid_IsClosed_AsyncWorker : public PromiseWorker
{
  public:
    Solid_IsClosed_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Solid_IsClosed_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;

    bool _result;

    int resultType;
};

class Solid_GetCube_AsyncWorker : public PromiseWorker
{
  public:
    Solid_GetCube_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Solid_GetCube_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;

    const MbCube *_result;

    int resultType;
};

class Solid_SetOwnChangedThrough_AsyncWorker : public PromiseWorker
{
  public:
    Solid_SetOwnChangedThrough_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d, MbeChangedType type);
    virtual ~Solid_SetOwnChangedThrough_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;
    MbeChangedType type;

    int resultType;
};

class Solid_MakeRight_AsyncWorker : public PromiseWorker
{
  public:
    Solid_MakeRight_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Solid_MakeRight_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;

    int resultType;
};

class Solid_IsRight_AsyncWorker : public PromiseWorker
{
  public:
    Solid_IsRight_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Solid_IsRight_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;

    bool _result;

    int resultType;
};

class Solid_SolidClassification_AsyncWorker : public PromiseWorker
{
  public:
    Solid_SolidClassification_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d, const MbSolid &solid,
                                          double epsilon = Math::metricRegion);
    virtual ~Solid_SolidClassification_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;
    const MbSolid &solid;
    double epsilon = Math::metricRegion;

    MbeItemLocation _result;

    int resultType;
};

class Solid_CreateMesh_AsyncWorker : public PromiseWorker
{
  public:
    Solid_CreateMesh_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d, const MbStepData &stepData,
                                 const MbFormNote &note, MbRegDuplicate *iReg = NULL);
    virtual ~Solid_CreateMesh_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;
    const MbStepData &stepData;
    const MbFormNote &note;
    MbRegDuplicate *iReg = NULL;

    MbItem *_result;

    int resultType;
};

class Solid_CalculateMesh_AsyncWorker : public PromiseWorker
{
  public:
    Solid_CalculateMesh_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d, const MbStepData &stepData,
                                    const MbFormNote &note);
    virtual ~Solid_CalculateMesh_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;
    const MbStepData &stepData;
    const MbFormNote &note;

    MbMesh *mesh;

    int resultType;
};

class Solid_GetItemName_AsyncWorker : public PromiseWorker
{
  public:
    Solid_GetItemName_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Solid_GetItemName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;

    SimpleName _result;

    int resultType;
};

class Solid_SetItemName_AsyncWorker : public PromiseWorker
{
  public:
    Solid_SetItemName_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d, SimpleName name);
    virtual ~Solid_SetItemName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;
    SimpleName name;

    int resultType;
};

class Solid_RebuildItem_AsyncWorker : public PromiseWorker
{
  public:
    Solid_RebuildItem_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d, MbeCopyMode sameShell,
                                  ProgressIndicator *progInd = NULL);
    virtual ~Solid_RebuildItem_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;
    MbeCopyMode sameShell;
    ProgressIndicator *progInd = NULL;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class Solid_GetItemByPath_AsyncWorker : public PromiseWorker
{
  public:
    Solid_GetItemByPath_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d, const MbPath &path,
                                    size_t ind, MbMatrix3D &from, size_t currInd = 0);
    virtual ~Solid_GetItemByPath_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;
    const MbPath &path;
    size_t ind;
    MbMatrix3D &from;
    size_t currInd = 0;

    const MbItem *_result;

    int resultType;
};

class Solid_IsA_AsyncWorker : public PromiseWorker
{
  public:
    Solid_IsA_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Solid_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class Solid_Type_AsyncWorker : public PromiseWorker
{
  public:
    Solid_Type_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Solid_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class Solid_Family_AsyncWorker : public PromiseWorker
{
  public:
    Solid_Family_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Solid_Family_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class Solid_Transform_AsyncWorker : public PromiseWorker
{
  public:
    Solid_Transform_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d, const MbMatrix3D &mat,
                                MbRegTransform *iReg = NULL);
    virtual ~Solid_Transform_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;
    const MbMatrix3D &mat;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class Solid_Move_AsyncWorker : public PromiseWorker
{
  public:
    Solid_Move_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d, const MbVector3D &v,
                           MbRegTransform *iReg = NULL);
    virtual ~Solid_Move_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;
    const MbVector3D &v;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class Solid_Rotate_AsyncWorker : public PromiseWorker
{
  public:
    Solid_Rotate_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d, const MbAxis3D &axis, double angle,
                             MbRegTransform *iReg = NULL);
    virtual ~Solid_Rotate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;
    const MbAxis3D &axis;
    double angle;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class Solid_Refresh_AsyncWorker : public PromiseWorker
{
  public:
    Solid_Refresh_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Solid_Refresh_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;

    int resultType;
};

class Solid_Duplicate_AsyncWorker : public PromiseWorker
{
  public:
    Solid_Duplicate_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d, MbRegDuplicate *iReg = NULL);
    virtual ~Solid_Duplicate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;
    MbRegDuplicate *iReg = NULL;

    MbSpaceItem *_result;

    int resultType;
};

class Solid_AddYourGabaritTo_AsyncWorker : public PromiseWorker
{
  public:
    Solid_AddYourGabaritTo_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d, MbCube &cube);
    virtual ~Solid_AddYourGabaritTo_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;
    MbCube &cube;

    int resultType;
};

class Solid_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    Solid_GetUseCount_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Solid_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;

    refcount_t _result;

    int resultType;
};

class Solid_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    Solid_AddRef_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Solid_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;

    int resultType;
};

class Solid_SetStyle_AsyncWorker : public PromiseWorker
{
  public:
    Solid_SetStyle_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d, int s);
    virtual ~Solid_SetStyle_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;
    int s;

    int resultType;
};

class Solid_GetStyle_AsyncWorker : public PromiseWorker
{
  public:
    Solid_GetStyle_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Solid_GetStyle_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;

    int _result;

    int resultType;
};

class Solid_SetColor_AsyncWorker : public PromiseWorker
{
  public:
    Solid_SetColor_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d, uint32 c);
    virtual ~Solid_SetColor_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;
    uint32 c;

    int resultType;
};

class Solid_GetColor_AsyncWorker : public PromiseWorker
{
  public:
    Solid_GetColor_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Solid_GetColor_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;

    uint32 _result;

    int resultType;
};

class Solid_AttributesConvert_AsyncWorker : public PromiseWorker
{
  public:
    Solid_AttributesConvert_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d, MbGrid &other);
    virtual ~Solid_AttributesConvert_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;
    MbGrid &other;

    int resultType;
};

class Solid_GetCreatorsCount_AsyncWorker : public PromiseWorker
{
  public:
    Solid_GetCreatorsCount_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Solid_GetCreatorsCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;

    size_t _result;

    int resultType;
};

class Solid_GetCreator_AsyncWorker : public PromiseWorker
{
  public:
    Solid_GetCreator_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d, size_t ind);
    virtual ~Solid_GetCreator_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;
    size_t ind;

    const MbCreator *_result;

    int resultType;
};

class Solid_SetCreator_AsyncWorker : public PromiseWorker
{
  public:
    Solid_SetCreator_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d, size_t ind);
    virtual ~Solid_SetCreator_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;
    size_t ind;

    MbCreator *_result;

    int resultType;
};

class Solid_DetachCreator_AsyncWorker : public PromiseWorker
{
  public:
    Solid_DetachCreator_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d, size_t ind);
    virtual ~Solid_DetachCreator_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;
    size_t ind;

    MbCreator *_result;

    int resultType;
};

class Solid_AddCreator_AsyncWorker : public PromiseWorker
{
  public:
    Solid_AddCreator_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d, const MbCreator *creator,
                                 bool addSame = false);
    virtual ~Solid_AddCreator_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;
    const MbCreator *creator;
    bool addSame = false;

    bool _result;

    int resultType;
};

class Solid_GetCreators_AsyncWorker : public PromiseWorker
{
  public:
    Solid_GetCreators_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Solid_GetCreators_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;

    RPArray<MbCreator> *creators;

    int resultType;
};

class Solid_DeleteCreator_AsyncWorker : public PromiseWorker
{
  public:
    Solid_DeleteCreator_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d, size_t ind);
    virtual ~Solid_DeleteCreator_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;
    size_t ind;

    bool _result;

    int resultType;
};

class Solid_GetActiveCreatorsCount_AsyncWorker : public PromiseWorker
{
  public:
    Solid_GetActiveCreatorsCount_AsyncWorker(MbSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Solid_GetActiveCreatorsCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *_underlying;

    size_t _result;

    int resultType;
};

#endif
