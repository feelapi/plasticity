// This is a generated file, modify: generate/templates/Instance.h

#ifndef INSTANCE_H
#define INSTANCE_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <instance.h>

#include "Item.h"
#include "PromiseWorker.h"

class Instance : public Napi::ObjectWrap<Instance>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbInstance *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    Instance(const Napi::CallbackInfo &info);

    Napi::Value GetItem(const Napi::CallbackInfo &info);
    Napi::Value GetItem_async(const Napi::CallbackInfo &info);
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

    MbInstance *_underlying;

    ~Instance();

  private:
};

class Instance_GetItem_AsyncWorker : public PromiseWorker
{
  public:
    Instance_GetItem_AsyncWorker(MbInstance *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Instance_GetItem_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbInstance *_underlying;

    const MbItem *_result;

    int resultType;
};

class Instance_CreateMesh_AsyncWorker : public PromiseWorker
{
  public:
    Instance_CreateMesh_AsyncWorker(MbInstance *_underlying, Napi::Promise::Deferred const &d,
                                    const MbStepData &stepData, const MbFormNote &note, MbRegDuplicate *iReg = NULL);
    virtual ~Instance_CreateMesh_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbInstance *_underlying;
    const MbStepData &stepData;
    const MbFormNote &note;
    MbRegDuplicate *iReg = NULL;

    MbItem *_result;

    int resultType;
};

class Instance_CalculateMesh_AsyncWorker : public PromiseWorker
{
  public:
    Instance_CalculateMesh_AsyncWorker(MbInstance *_underlying, Napi::Promise::Deferred const &d,
                                       const MbStepData &stepData, const MbFormNote &note);
    virtual ~Instance_CalculateMesh_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbInstance *_underlying;
    const MbStepData &stepData;
    const MbFormNote &note;

    MbMesh *mesh;

    int resultType;
};

class Instance_GetItemName_AsyncWorker : public PromiseWorker
{
  public:
    Instance_GetItemName_AsyncWorker(MbInstance *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Instance_GetItemName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbInstance *_underlying;

    SimpleName _result;

    int resultType;
};

class Instance_SetItemName_AsyncWorker : public PromiseWorker
{
  public:
    Instance_SetItemName_AsyncWorker(MbInstance *_underlying, Napi::Promise::Deferred const &d, SimpleName name);
    virtual ~Instance_SetItemName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbInstance *_underlying;
    SimpleName name;

    int resultType;
};

class Instance_RebuildItem_AsyncWorker : public PromiseWorker
{
  public:
    Instance_RebuildItem_AsyncWorker(MbInstance *_underlying, Napi::Promise::Deferred const &d, MbeCopyMode sameShell,
                                     ProgressIndicator *progInd = NULL);
    virtual ~Instance_RebuildItem_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbInstance *_underlying;
    MbeCopyMode sameShell;
    ProgressIndicator *progInd = NULL;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class Instance_GetItemByPath_AsyncWorker : public PromiseWorker
{
  public:
    Instance_GetItemByPath_AsyncWorker(MbInstance *_underlying, Napi::Promise::Deferred const &d, const MbPath &path,
                                       size_t ind, MbMatrix3D &from, size_t currInd = 0);
    virtual ~Instance_GetItemByPath_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbInstance *_underlying;
    const MbPath &path;
    size_t ind;
    MbMatrix3D &from;
    size_t currInd = 0;

    const MbItem *_result;

    int resultType;
};

class Instance_IsA_AsyncWorker : public PromiseWorker
{
  public:
    Instance_IsA_AsyncWorker(MbInstance *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Instance_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbInstance *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class Instance_Type_AsyncWorker : public PromiseWorker
{
  public:
    Instance_Type_AsyncWorker(MbInstance *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Instance_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbInstance *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class Instance_Family_AsyncWorker : public PromiseWorker
{
  public:
    Instance_Family_AsyncWorker(MbInstance *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Instance_Family_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbInstance *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class Instance_Transform_AsyncWorker : public PromiseWorker
{
  public:
    Instance_Transform_AsyncWorker(MbInstance *_underlying, Napi::Promise::Deferred const &d, const MbMatrix3D &mat,
                                   MbRegTransform *iReg = NULL);
    virtual ~Instance_Transform_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbInstance *_underlying;
    const MbMatrix3D &mat;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class Instance_Move_AsyncWorker : public PromiseWorker
{
  public:
    Instance_Move_AsyncWorker(MbInstance *_underlying, Napi::Promise::Deferred const &d, const MbVector3D &v,
                              MbRegTransform *iReg = NULL);
    virtual ~Instance_Move_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbInstance *_underlying;
    const MbVector3D &v;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class Instance_Rotate_AsyncWorker : public PromiseWorker
{
  public:
    Instance_Rotate_AsyncWorker(MbInstance *_underlying, Napi::Promise::Deferred const &d, const MbAxis3D &axis,
                                double angle, MbRegTransform *iReg = NULL);
    virtual ~Instance_Rotate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbInstance *_underlying;
    const MbAxis3D &axis;
    double angle;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class Instance_Refresh_AsyncWorker : public PromiseWorker
{
  public:
    Instance_Refresh_AsyncWorker(MbInstance *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Instance_Refresh_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbInstance *_underlying;

    int resultType;
};

class Instance_Duplicate_AsyncWorker : public PromiseWorker
{
  public:
    Instance_Duplicate_AsyncWorker(MbInstance *_underlying, Napi::Promise::Deferred const &d,
                                   MbRegDuplicate *iReg = NULL);
    virtual ~Instance_Duplicate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbInstance *_underlying;
    MbRegDuplicate *iReg = NULL;

    MbSpaceItem *_result;

    int resultType;
};

class Instance_AddYourGabaritTo_AsyncWorker : public PromiseWorker
{
  public:
    Instance_AddYourGabaritTo_AsyncWorker(MbInstance *_underlying, Napi::Promise::Deferred const &d, MbCube &cube);
    virtual ~Instance_AddYourGabaritTo_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbInstance *_underlying;
    MbCube &cube;

    int resultType;
};

class Instance_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    Instance_GetUseCount_AsyncWorker(MbInstance *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Instance_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbInstance *_underlying;

    refcount_t _result;

    int resultType;
};

class Instance_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    Instance_AddRef_AsyncWorker(MbInstance *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Instance_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbInstance *_underlying;

    int resultType;
};

class Instance_SetStyle_AsyncWorker : public PromiseWorker
{
  public:
    Instance_SetStyle_AsyncWorker(MbInstance *_underlying, Napi::Promise::Deferred const &d, int s);
    virtual ~Instance_SetStyle_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbInstance *_underlying;
    int s;

    int resultType;
};

class Instance_GetStyle_AsyncWorker : public PromiseWorker
{
  public:
    Instance_GetStyle_AsyncWorker(MbInstance *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Instance_GetStyle_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbInstance *_underlying;

    int _result;

    int resultType;
};

class Instance_SetColor_AsyncWorker : public PromiseWorker
{
  public:
    Instance_SetColor_AsyncWorker(MbInstance *_underlying, Napi::Promise::Deferred const &d, uint32 c);
    virtual ~Instance_SetColor_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbInstance *_underlying;
    uint32 c;

    int resultType;
};

class Instance_GetColor_AsyncWorker : public PromiseWorker
{
  public:
    Instance_GetColor_AsyncWorker(MbInstance *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Instance_GetColor_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbInstance *_underlying;

    uint32 _result;

    int resultType;
};

class Instance_AttributesConvert_AsyncWorker : public PromiseWorker
{
  public:
    Instance_AttributesConvert_AsyncWorker(MbInstance *_underlying, Napi::Promise::Deferred const &d, MbGrid &other);
    virtual ~Instance_AttributesConvert_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbInstance *_underlying;
    MbGrid &other;

    int resultType;
};

class Instance_GetCreatorsCount_AsyncWorker : public PromiseWorker
{
  public:
    Instance_GetCreatorsCount_AsyncWorker(MbInstance *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Instance_GetCreatorsCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbInstance *_underlying;

    size_t _result;

    int resultType;
};

class Instance_GetCreator_AsyncWorker : public PromiseWorker
{
  public:
    Instance_GetCreator_AsyncWorker(MbInstance *_underlying, Napi::Promise::Deferred const &d, size_t ind);
    virtual ~Instance_GetCreator_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbInstance *_underlying;
    size_t ind;

    const MbCreator *_result;

    int resultType;
};

class Instance_SetCreator_AsyncWorker : public PromiseWorker
{
  public:
    Instance_SetCreator_AsyncWorker(MbInstance *_underlying, Napi::Promise::Deferred const &d, size_t ind);
    virtual ~Instance_SetCreator_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbInstance *_underlying;
    size_t ind;

    MbCreator *_result;

    int resultType;
};

class Instance_DetachCreator_AsyncWorker : public PromiseWorker
{
  public:
    Instance_DetachCreator_AsyncWorker(MbInstance *_underlying, Napi::Promise::Deferred const &d, size_t ind);
    virtual ~Instance_DetachCreator_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbInstance *_underlying;
    size_t ind;

    MbCreator *_result;

    int resultType;
};

class Instance_AddCreator_AsyncWorker : public PromiseWorker
{
  public:
    Instance_AddCreator_AsyncWorker(MbInstance *_underlying, Napi::Promise::Deferred const &d, const MbCreator *creator,
                                    bool addSame = false);
    virtual ~Instance_AddCreator_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbInstance *_underlying;
    const MbCreator *creator;
    bool addSame = false;

    bool _result;

    int resultType;
};

class Instance_GetCreators_AsyncWorker : public PromiseWorker
{
  public:
    Instance_GetCreators_AsyncWorker(MbInstance *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Instance_GetCreators_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbInstance *_underlying;

    RPArray<MbCreator> *creators;

    int resultType;
};

class Instance_DeleteCreator_AsyncWorker : public PromiseWorker
{
  public:
    Instance_DeleteCreator_AsyncWorker(MbInstance *_underlying, Napi::Promise::Deferred const &d, size_t ind);
    virtual ~Instance_DeleteCreator_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbInstance *_underlying;
    size_t ind;

    bool _result;

    int resultType;
};

class Instance_GetActiveCreatorsCount_AsyncWorker : public PromiseWorker
{
  public:
    Instance_GetActiveCreatorsCount_AsyncWorker(MbInstance *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Instance_GetActiveCreatorsCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbInstance *_underlying;

    size_t _result;

    int resultType;
};

#endif
