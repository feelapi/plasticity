// This is a generated file, modify: generate/templates/PointFrame.h

#ifndef POINTFRAME_H
#define POINTFRAME_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <point_frame.h>

#include "Item.h"
#include "CartPoint3D.h"
#include "PromiseWorker.h"

class PointFrame : public Napi::ObjectWrap<PointFrame>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbPointFrame *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    PointFrame(const Napi::CallbackInfo &info);

    Napi::Value AddVertex(const Napi::CallbackInfo &info);
    Napi::Value AddVertex_async(const Napi::CallbackInfo &info);
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

    MbPointFrame *_underlying;

    ~PointFrame();

  private:
};

class PointFrame_AddVertex_AsyncWorker : public PromiseWorker
{
  public:
    PointFrame_AddVertex_AsyncWorker(MbPointFrame *_underlying, Napi::Promise::Deferred const &d,
                                     const MbCartPoint3D &point);
    virtual ~PointFrame_AddVertex_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPointFrame *_underlying;
    const MbCartPoint3D &point;

    int resultType;
};

class PointFrame_CreateMesh_AsyncWorker : public PromiseWorker
{
  public:
    PointFrame_CreateMesh_AsyncWorker(MbPointFrame *_underlying, Napi::Promise::Deferred const &d,
                                      const MbStepData &stepData, const MbFormNote &note, MbRegDuplicate *iReg = NULL);
    virtual ~PointFrame_CreateMesh_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPointFrame *_underlying;
    const MbStepData &stepData;
    const MbFormNote &note;
    MbRegDuplicate *iReg = NULL;

    MbItem *_result;

    int resultType;
};

class PointFrame_CalculateMesh_AsyncWorker : public PromiseWorker
{
  public:
    PointFrame_CalculateMesh_AsyncWorker(MbPointFrame *_underlying, Napi::Promise::Deferred const &d,
                                         const MbStepData &stepData, const MbFormNote &note);
    virtual ~PointFrame_CalculateMesh_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPointFrame *_underlying;
    const MbStepData &stepData;
    const MbFormNote &note;

    MbMesh *mesh;

    int resultType;
};

class PointFrame_GetItemName_AsyncWorker : public PromiseWorker
{
  public:
    PointFrame_GetItemName_AsyncWorker(MbPointFrame *_underlying, Napi::Promise::Deferred const &d);
    virtual ~PointFrame_GetItemName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPointFrame *_underlying;

    SimpleName _result;

    int resultType;
};

class PointFrame_SetItemName_AsyncWorker : public PromiseWorker
{
  public:
    PointFrame_SetItemName_AsyncWorker(MbPointFrame *_underlying, Napi::Promise::Deferred const &d, SimpleName name);
    virtual ~PointFrame_SetItemName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPointFrame *_underlying;
    SimpleName name;

    int resultType;
};

class PointFrame_RebuildItem_AsyncWorker : public PromiseWorker
{
  public:
    PointFrame_RebuildItem_AsyncWorker(MbPointFrame *_underlying, Napi::Promise::Deferred const &d,
                                       MbeCopyMode sameShell, ProgressIndicator *progInd = NULL);
    virtual ~PointFrame_RebuildItem_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPointFrame *_underlying;
    MbeCopyMode sameShell;
    ProgressIndicator *progInd = NULL;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class PointFrame_GetItemByPath_AsyncWorker : public PromiseWorker
{
  public:
    PointFrame_GetItemByPath_AsyncWorker(MbPointFrame *_underlying, Napi::Promise::Deferred const &d,
                                         const MbPath &path, size_t ind, MbMatrix3D &from, size_t currInd = 0);
    virtual ~PointFrame_GetItemByPath_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPointFrame *_underlying;
    const MbPath &path;
    size_t ind;
    MbMatrix3D &from;
    size_t currInd = 0;

    const MbItem *_result;

    int resultType;
};

class PointFrame_IsA_AsyncWorker : public PromiseWorker
{
  public:
    PointFrame_IsA_AsyncWorker(MbPointFrame *_underlying, Napi::Promise::Deferred const &d);
    virtual ~PointFrame_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPointFrame *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class PointFrame_Type_AsyncWorker : public PromiseWorker
{
  public:
    PointFrame_Type_AsyncWorker(MbPointFrame *_underlying, Napi::Promise::Deferred const &d);
    virtual ~PointFrame_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPointFrame *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class PointFrame_Family_AsyncWorker : public PromiseWorker
{
  public:
    PointFrame_Family_AsyncWorker(MbPointFrame *_underlying, Napi::Promise::Deferred const &d);
    virtual ~PointFrame_Family_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPointFrame *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class PointFrame_Transform_AsyncWorker : public PromiseWorker
{
  public:
    PointFrame_Transform_AsyncWorker(MbPointFrame *_underlying, Napi::Promise::Deferred const &d, const MbMatrix3D &mat,
                                     MbRegTransform *iReg = NULL);
    virtual ~PointFrame_Transform_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPointFrame *_underlying;
    const MbMatrix3D &mat;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class PointFrame_Move_AsyncWorker : public PromiseWorker
{
  public:
    PointFrame_Move_AsyncWorker(MbPointFrame *_underlying, Napi::Promise::Deferred const &d, const MbVector3D &v,
                                MbRegTransform *iReg = NULL);
    virtual ~PointFrame_Move_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPointFrame *_underlying;
    const MbVector3D &v;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class PointFrame_Rotate_AsyncWorker : public PromiseWorker
{
  public:
    PointFrame_Rotate_AsyncWorker(MbPointFrame *_underlying, Napi::Promise::Deferred const &d, const MbAxis3D &axis,
                                  double angle, MbRegTransform *iReg = NULL);
    virtual ~PointFrame_Rotate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPointFrame *_underlying;
    const MbAxis3D &axis;
    double angle;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class PointFrame_Refresh_AsyncWorker : public PromiseWorker
{
  public:
    PointFrame_Refresh_AsyncWorker(MbPointFrame *_underlying, Napi::Promise::Deferred const &d);
    virtual ~PointFrame_Refresh_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPointFrame *_underlying;

    int resultType;
};

class PointFrame_Duplicate_AsyncWorker : public PromiseWorker
{
  public:
    PointFrame_Duplicate_AsyncWorker(MbPointFrame *_underlying, Napi::Promise::Deferred const &d,
                                     MbRegDuplicate *iReg = NULL);
    virtual ~PointFrame_Duplicate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPointFrame *_underlying;
    MbRegDuplicate *iReg = NULL;

    MbSpaceItem *_result;

    int resultType;
};

class PointFrame_AddYourGabaritTo_AsyncWorker : public PromiseWorker
{
  public:
    PointFrame_AddYourGabaritTo_AsyncWorker(MbPointFrame *_underlying, Napi::Promise::Deferred const &d, MbCube &cube);
    virtual ~PointFrame_AddYourGabaritTo_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPointFrame *_underlying;
    MbCube &cube;

    int resultType;
};

class PointFrame_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    PointFrame_GetUseCount_AsyncWorker(MbPointFrame *_underlying, Napi::Promise::Deferred const &d);
    virtual ~PointFrame_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPointFrame *_underlying;

    refcount_t _result;

    int resultType;
};

class PointFrame_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    PointFrame_AddRef_AsyncWorker(MbPointFrame *_underlying, Napi::Promise::Deferred const &d);
    virtual ~PointFrame_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPointFrame *_underlying;

    int resultType;
};

class PointFrame_SetStyle_AsyncWorker : public PromiseWorker
{
  public:
    PointFrame_SetStyle_AsyncWorker(MbPointFrame *_underlying, Napi::Promise::Deferred const &d, int s);
    virtual ~PointFrame_SetStyle_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPointFrame *_underlying;
    int s;

    int resultType;
};

class PointFrame_GetStyle_AsyncWorker : public PromiseWorker
{
  public:
    PointFrame_GetStyle_AsyncWorker(MbPointFrame *_underlying, Napi::Promise::Deferred const &d);
    virtual ~PointFrame_GetStyle_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPointFrame *_underlying;

    int _result;

    int resultType;
};

class PointFrame_SetColor_AsyncWorker : public PromiseWorker
{
  public:
    PointFrame_SetColor_AsyncWorker(MbPointFrame *_underlying, Napi::Promise::Deferred const &d, uint32 c);
    virtual ~PointFrame_SetColor_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPointFrame *_underlying;
    uint32 c;

    int resultType;
};

class PointFrame_GetColor_AsyncWorker : public PromiseWorker
{
  public:
    PointFrame_GetColor_AsyncWorker(MbPointFrame *_underlying, Napi::Promise::Deferred const &d);
    virtual ~PointFrame_GetColor_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPointFrame *_underlying;

    uint32 _result;

    int resultType;
};

class PointFrame_AttributesConvert_AsyncWorker : public PromiseWorker
{
  public:
    PointFrame_AttributesConvert_AsyncWorker(MbPointFrame *_underlying, Napi::Promise::Deferred const &d,
                                             MbGrid &other);
    virtual ~PointFrame_AttributesConvert_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPointFrame *_underlying;
    MbGrid &other;

    int resultType;
};

class PointFrame_GetCreatorsCount_AsyncWorker : public PromiseWorker
{
  public:
    PointFrame_GetCreatorsCount_AsyncWorker(MbPointFrame *_underlying, Napi::Promise::Deferred const &d);
    virtual ~PointFrame_GetCreatorsCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPointFrame *_underlying;

    size_t _result;

    int resultType;
};

class PointFrame_GetCreator_AsyncWorker : public PromiseWorker
{
  public:
    PointFrame_GetCreator_AsyncWorker(MbPointFrame *_underlying, Napi::Promise::Deferred const &d, size_t ind);
    virtual ~PointFrame_GetCreator_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPointFrame *_underlying;
    size_t ind;

    const MbCreator *_result;

    int resultType;
};

class PointFrame_SetCreator_AsyncWorker : public PromiseWorker
{
  public:
    PointFrame_SetCreator_AsyncWorker(MbPointFrame *_underlying, Napi::Promise::Deferred const &d, size_t ind);
    virtual ~PointFrame_SetCreator_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPointFrame *_underlying;
    size_t ind;

    MbCreator *_result;

    int resultType;
};

class PointFrame_DetachCreator_AsyncWorker : public PromiseWorker
{
  public:
    PointFrame_DetachCreator_AsyncWorker(MbPointFrame *_underlying, Napi::Promise::Deferred const &d, size_t ind);
    virtual ~PointFrame_DetachCreator_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPointFrame *_underlying;
    size_t ind;

    MbCreator *_result;

    int resultType;
};

class PointFrame_AddCreator_AsyncWorker : public PromiseWorker
{
  public:
    PointFrame_AddCreator_AsyncWorker(MbPointFrame *_underlying, Napi::Promise::Deferred const &d,
                                      const MbCreator *creator, bool addSame = false);
    virtual ~PointFrame_AddCreator_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPointFrame *_underlying;
    const MbCreator *creator;
    bool addSame = false;

    bool _result;

    int resultType;
};

class PointFrame_GetCreators_AsyncWorker : public PromiseWorker
{
  public:
    PointFrame_GetCreators_AsyncWorker(MbPointFrame *_underlying, Napi::Promise::Deferred const &d);
    virtual ~PointFrame_GetCreators_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPointFrame *_underlying;

    RPArray<MbCreator> *creators;

    int resultType;
};

class PointFrame_DeleteCreator_AsyncWorker : public PromiseWorker
{
  public:
    PointFrame_DeleteCreator_AsyncWorker(MbPointFrame *_underlying, Napi::Promise::Deferred const &d, size_t ind);
    virtual ~PointFrame_DeleteCreator_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPointFrame *_underlying;
    size_t ind;

    bool _result;

    int resultType;
};

class PointFrame_GetActiveCreatorsCount_AsyncWorker : public PromiseWorker
{
  public:
    PointFrame_GetActiveCreatorsCount_AsyncWorker(MbPointFrame *_underlying, Napi::Promise::Deferred const &d);
    virtual ~PointFrame_GetActiveCreatorsCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPointFrame *_underlying;

    size_t _result;

    int resultType;
};

#endif
