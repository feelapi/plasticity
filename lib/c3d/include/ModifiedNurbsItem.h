// This is a generated file, modify: generate/templates/ModifiedNurbsItem.h

#ifndef MODIFIEDNURBSITEM_H
#define MODIFIEDNURBSITEM_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cr_modified_nurbs_.h>

#include "Creator.h"
#include "PromiseWorker.h"

class ModifiedNurbsItem : public Napi::ObjectWrap<ModifiedNurbsItem>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbModifiedNurbsItem *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    ModifiedNurbsItem(const Napi::CallbackInfo &info);

    Napi::Value IsA(const Napi::CallbackInfo &info);
    Napi::Value IsA_async(const Napi::CallbackInfo &info);
    Napi::Value Type(const Napi::CallbackInfo &info);
    Napi::Value Type_async(const Napi::CallbackInfo &info);
    Napi::Value GetBasisPoints(const Napi::CallbackInfo &info);
    Napi::Value GetBasisPoints_async(const Napi::CallbackInfo &info);
    Napi::Value SetBasisPoints(const Napi::CallbackInfo &info);
    Napi::Value SetBasisPoints_async(const Napi::CallbackInfo &info);
    Napi::Value GetBasisItems(const Napi::CallbackInfo &info);
    Napi::Value GetBasisItems_async(const Napi::CallbackInfo &info);
    Napi::Value GetCreatorsCount(const Napi::CallbackInfo &info);
    Napi::Value GetCreatorsCount_async(const Napi::CallbackInfo &info);
    Napi::Value GetYourNameMaker(const Napi::CallbackInfo &info);
    Napi::Value GetYourNameMaker_async(const Napi::CallbackInfo &info);
    Napi::Value GetStatus(const Napi::CallbackInfo &info);
    Napi::Value GetStatus_async(const Napi::CallbackInfo &info);
    Napi::Value SetStatus(const Napi::CallbackInfo &info);
    Napi::Value SetStatus_async(const Napi::CallbackInfo &info);
    Napi::Value CreateShell(const Napi::CallbackInfo &info);
    Napi::Value CreateShell_async(const Napi::CallbackInfo &info);
    Napi::Value GetMainName(const Napi::CallbackInfo &info);
    Napi::Value GetMainName_async(const Napi::CallbackInfo &info);
    Napi::Value GetUseCount(const Napi::CallbackInfo &info);
    Napi::Value GetUseCount_async(const Napi::CallbackInfo &info);
    Napi::Value AddRef(const Napi::CallbackInfo &info);
    Napi::Value AddRef_async(const Napi::CallbackInfo &info);
    Napi::Value Id(const Napi::CallbackInfo &info);

    MbModifiedNurbsItem *_underlying;

    ~ModifiedNurbsItem();

  private:
};

class ModifiedNurbsItem_IsA_AsyncWorker : public PromiseWorker
{
  public:
    ModifiedNurbsItem_IsA_AsyncWorker(MbModifiedNurbsItem *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ModifiedNurbsItem_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbModifiedNurbsItem *_underlying;

    MbeCreatorType _result;

    int resultType;
};

class ModifiedNurbsItem_Type_AsyncWorker : public PromiseWorker
{
  public:
    ModifiedNurbsItem_Type_AsyncWorker(MbModifiedNurbsItem *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ModifiedNurbsItem_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbModifiedNurbsItem *_underlying;

    MbeCreatorType _result;

    int resultType;
};

class ModifiedNurbsItem_GetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    ModifiedNurbsItem_GetBasisPoints_AsyncWorker(MbModifiedNurbsItem *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ModifiedNurbsItem_GetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbModifiedNurbsItem *_underlying;

    MbControlData3D *cd;

    int resultType;
};

class ModifiedNurbsItem_SetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    ModifiedNurbsItem_SetBasisPoints_AsyncWorker(MbModifiedNurbsItem *_underlying, Napi::Promise::Deferred const &d,
                                                 const MbControlData3D &cd);
    virtual ~ModifiedNurbsItem_SetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbModifiedNurbsItem *_underlying;
    const MbControlData3D &cd;

    int resultType;
};

class ModifiedNurbsItem_GetBasisItems_AsyncWorker : public PromiseWorker
{
  public:
    ModifiedNurbsItem_GetBasisItems_AsyncWorker(MbModifiedNurbsItem *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ModifiedNurbsItem_GetBasisItems_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbModifiedNurbsItem *_underlying;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class ModifiedNurbsItem_GetCreatorsCount_AsyncWorker : public PromiseWorker
{
  public:
    ModifiedNurbsItem_GetCreatorsCount_AsyncWorker(MbModifiedNurbsItem *_underlying, Napi::Promise::Deferred const &d,
                                                   MbeCreatorType ct);
    virtual ~ModifiedNurbsItem_GetCreatorsCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbModifiedNurbsItem *_underlying;
    MbeCreatorType ct;

    size_t _result;

    int resultType;
};

class ModifiedNurbsItem_GetYourNameMaker_AsyncWorker : public PromiseWorker
{
  public:
    ModifiedNurbsItem_GetYourNameMaker_AsyncWorker(MbModifiedNurbsItem *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ModifiedNurbsItem_GetYourNameMaker_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbModifiedNurbsItem *_underlying;

    const MbSNameMaker *_result;

    int resultType;
};

class ModifiedNurbsItem_GetStatus_AsyncWorker : public PromiseWorker
{
  public:
    ModifiedNurbsItem_GetStatus_AsyncWorker(MbModifiedNurbsItem *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ModifiedNurbsItem_GetStatus_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbModifiedNurbsItem *_underlying;

    MbeProcessState _result;

    int resultType;
};

class ModifiedNurbsItem_SetStatus_AsyncWorker : public PromiseWorker
{
  public:
    ModifiedNurbsItem_SetStatus_AsyncWorker(MbModifiedNurbsItem *_underlying, Napi::Promise::Deferred const &d,
                                            MbeProcessState l);
    virtual ~ModifiedNurbsItem_SetStatus_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbModifiedNurbsItem *_underlying;
    MbeProcessState l;

    int resultType;
};

class ModifiedNurbsItem_CreateShell_AsyncWorker : public PromiseWorker
{
  public:
    ModifiedNurbsItem_CreateShell_AsyncWorker(MbModifiedNurbsItem *_underlying, Napi::Promise::Deferred const &d,
                                              MbFaceShell *shell, MbeCopyMode sameShell);
    virtual ~ModifiedNurbsItem_CreateShell_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbModifiedNurbsItem *_underlying;
    MbFaceShell *shell;
    MbeCopyMode sameShell;

    bool success;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class ModifiedNurbsItem_GetMainName_AsyncWorker : public PromiseWorker
{
  public:
    ModifiedNurbsItem_GetMainName_AsyncWorker(MbModifiedNurbsItem *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ModifiedNurbsItem_GetMainName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbModifiedNurbsItem *_underlying;

    SimpleName _result;

    int resultType;
};

class ModifiedNurbsItem_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    ModifiedNurbsItem_GetUseCount_AsyncWorker(MbModifiedNurbsItem *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ModifiedNurbsItem_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbModifiedNurbsItem *_underlying;

    refcount_t _result;

    int resultType;
};

class ModifiedNurbsItem_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    ModifiedNurbsItem_AddRef_AsyncWorker(MbModifiedNurbsItem *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ModifiedNurbsItem_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbModifiedNurbsItem *_underlying;

    int resultType;
};

#endif
