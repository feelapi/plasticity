// This is a generated file, modify: generate/templates/Assembly.h

#ifndef ASSEMBLY_H
#define ASSEMBLY_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <assembly.h>

#include "Item.h"
#include "PromiseWorker.h"

class Assembly : public Napi::ObjectWrap<Assembly>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbAssembly *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    Assembly(const Napi::CallbackInfo &info);

    Napi::Value GetItems(const Napi::CallbackInfo &info);
    Napi::Value GetItems_async(const Napi::CallbackInfo &info);
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

    MbAssembly *_underlying;

    ~Assembly();

  private:
};

class Assembly_GetItems_AsyncWorker : public PromiseWorker
{
  public:
    Assembly_GetItems_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Assembly_GetItems_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbAssembly *_underlying;

    RPArray<MbItem> *items;

    int resultType;
};

class Assembly_CreateMesh_AsyncWorker : public PromiseWorker
{
  public:
    Assembly_CreateMesh_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d,
                                    const MbStepData &stepData, const MbFormNote &note, MbRegDuplicate *iReg = NULL);
    virtual ~Assembly_CreateMesh_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbAssembly *_underlying;
    const MbStepData &stepData;
    const MbFormNote &note;
    MbRegDuplicate *iReg = NULL;

    MbItem *_result;

    int resultType;
};

class Assembly_CalculateMesh_AsyncWorker : public PromiseWorker
{
  public:
    Assembly_CalculateMesh_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d,
                                       const MbStepData &stepData, const MbFormNote &note);
    virtual ~Assembly_CalculateMesh_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbAssembly *_underlying;
    const MbStepData &stepData;
    const MbFormNote &note;

    MbMesh *mesh;

    int resultType;
};

class Assembly_GetItemName_AsyncWorker : public PromiseWorker
{
  public:
    Assembly_GetItemName_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Assembly_GetItemName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbAssembly *_underlying;

    SimpleName _result;

    int resultType;
};

class Assembly_SetItemName_AsyncWorker : public PromiseWorker
{
  public:
    Assembly_SetItemName_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d, SimpleName name);
    virtual ~Assembly_SetItemName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbAssembly *_underlying;
    SimpleName name;

    int resultType;
};

class Assembly_RebuildItem_AsyncWorker : public PromiseWorker
{
  public:
    Assembly_RebuildItem_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d, MbeCopyMode sameShell,
                                     ProgressIndicator *progInd = NULL);
    virtual ~Assembly_RebuildItem_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbAssembly *_underlying;
    MbeCopyMode sameShell;
    ProgressIndicator *progInd = NULL;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class Assembly_GetItemByPath_AsyncWorker : public PromiseWorker
{
  public:
    Assembly_GetItemByPath_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d, const MbPath &path,
                                       size_t ind, MbMatrix3D &from, size_t currInd = 0);
    virtual ~Assembly_GetItemByPath_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbAssembly *_underlying;
    const MbPath &path;
    size_t ind;
    MbMatrix3D &from;
    size_t currInd = 0;

    const MbItem *_result;

    int resultType;
};

class Assembly_IsA_AsyncWorker : public PromiseWorker
{
  public:
    Assembly_IsA_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Assembly_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbAssembly *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class Assembly_Type_AsyncWorker : public PromiseWorker
{
  public:
    Assembly_Type_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Assembly_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbAssembly *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class Assembly_Family_AsyncWorker : public PromiseWorker
{
  public:
    Assembly_Family_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Assembly_Family_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbAssembly *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class Assembly_Transform_AsyncWorker : public PromiseWorker
{
  public:
    Assembly_Transform_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d, const MbMatrix3D &mat,
                                   MbRegTransform *iReg = NULL);
    virtual ~Assembly_Transform_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbAssembly *_underlying;
    const MbMatrix3D &mat;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class Assembly_Move_AsyncWorker : public PromiseWorker
{
  public:
    Assembly_Move_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d, const MbVector3D &v,
                              MbRegTransform *iReg = NULL);
    virtual ~Assembly_Move_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbAssembly *_underlying;
    const MbVector3D &v;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class Assembly_Rotate_AsyncWorker : public PromiseWorker
{
  public:
    Assembly_Rotate_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d, const MbAxis3D &axis,
                                double angle, MbRegTransform *iReg = NULL);
    virtual ~Assembly_Rotate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbAssembly *_underlying;
    const MbAxis3D &axis;
    double angle;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class Assembly_Refresh_AsyncWorker : public PromiseWorker
{
  public:
    Assembly_Refresh_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Assembly_Refresh_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbAssembly *_underlying;

    int resultType;
};

class Assembly_Duplicate_AsyncWorker : public PromiseWorker
{
  public:
    Assembly_Duplicate_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d,
                                   MbRegDuplicate *iReg = NULL);
    virtual ~Assembly_Duplicate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbAssembly *_underlying;
    MbRegDuplicate *iReg = NULL;

    MbSpaceItem *_result;

    int resultType;
};

class Assembly_AddYourGabaritTo_AsyncWorker : public PromiseWorker
{
  public:
    Assembly_AddYourGabaritTo_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d, MbCube &cube);
    virtual ~Assembly_AddYourGabaritTo_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbAssembly *_underlying;
    MbCube &cube;

    int resultType;
};

class Assembly_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    Assembly_GetUseCount_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Assembly_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbAssembly *_underlying;

    refcount_t _result;

    int resultType;
};

class Assembly_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    Assembly_AddRef_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Assembly_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbAssembly *_underlying;

    int resultType;
};

class Assembly_SetStyle_AsyncWorker : public PromiseWorker
{
  public:
    Assembly_SetStyle_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d, int s);
    virtual ~Assembly_SetStyle_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbAssembly *_underlying;
    int s;

    int resultType;
};

class Assembly_GetStyle_AsyncWorker : public PromiseWorker
{
  public:
    Assembly_GetStyle_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Assembly_GetStyle_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbAssembly *_underlying;

    int _result;

    int resultType;
};

class Assembly_SetColor_AsyncWorker : public PromiseWorker
{
  public:
    Assembly_SetColor_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d, uint32 c);
    virtual ~Assembly_SetColor_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbAssembly *_underlying;
    uint32 c;

    int resultType;
};

class Assembly_GetColor_AsyncWorker : public PromiseWorker
{
  public:
    Assembly_GetColor_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Assembly_GetColor_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbAssembly *_underlying;

    uint32 _result;

    int resultType;
};

class Assembly_AttributesConvert_AsyncWorker : public PromiseWorker
{
  public:
    Assembly_AttributesConvert_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d, MbGrid &other);
    virtual ~Assembly_AttributesConvert_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbAssembly *_underlying;
    MbGrid &other;

    int resultType;
};

class Assembly_GetCreatorsCount_AsyncWorker : public PromiseWorker
{
  public:
    Assembly_GetCreatorsCount_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Assembly_GetCreatorsCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbAssembly *_underlying;

    size_t _result;

    int resultType;
};

class Assembly_GetCreator_AsyncWorker : public PromiseWorker
{
  public:
    Assembly_GetCreator_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d, size_t ind);
    virtual ~Assembly_GetCreator_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbAssembly *_underlying;
    size_t ind;

    const MbCreator *_result;

    int resultType;
};

class Assembly_SetCreator_AsyncWorker : public PromiseWorker
{
  public:
    Assembly_SetCreator_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d, size_t ind);
    virtual ~Assembly_SetCreator_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbAssembly *_underlying;
    size_t ind;

    MbCreator *_result;

    int resultType;
};

class Assembly_DetachCreator_AsyncWorker : public PromiseWorker
{
  public:
    Assembly_DetachCreator_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d, size_t ind);
    virtual ~Assembly_DetachCreator_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbAssembly *_underlying;
    size_t ind;

    MbCreator *_result;

    int resultType;
};

class Assembly_AddCreator_AsyncWorker : public PromiseWorker
{
  public:
    Assembly_AddCreator_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d, const MbCreator *creator,
                                    bool addSame = false);
    virtual ~Assembly_AddCreator_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbAssembly *_underlying;
    const MbCreator *creator;
    bool addSame = false;

    bool _result;

    int resultType;
};

class Assembly_GetCreators_AsyncWorker : public PromiseWorker
{
  public:
    Assembly_GetCreators_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Assembly_GetCreators_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbAssembly *_underlying;

    RPArray<MbCreator> *creators;

    int resultType;
};

class Assembly_DeleteCreator_AsyncWorker : public PromiseWorker
{
  public:
    Assembly_DeleteCreator_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d, size_t ind);
    virtual ~Assembly_DeleteCreator_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbAssembly *_underlying;
    size_t ind;

    bool _result;

    int resultType;
};

class Assembly_GetActiveCreatorsCount_AsyncWorker : public PromiseWorker
{
  public:
    Assembly_GetActiveCreatorsCount_AsyncWorker(MbAssembly *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Assembly_GetActiveCreatorsCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbAssembly *_underlying;

    size_t _result;

    int resultType;
};

#endif
