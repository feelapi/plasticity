// This is a generated file, modify: generate/templates/RibSolid.h

#ifndef RIBSOLID_H
#define RIBSOLID_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cr_rib_solid.h>

#include "Creator.h"
#include "PromiseWorker.h"

class RibSolid : public Napi::ObjectWrap<RibSolid>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbRibSolid *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    RibSolid(const Napi::CallbackInfo &info);

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

    MbRibSolid *_underlying;

    ~RibSolid();

  private:
};

class RibSolid_IsA_AsyncWorker : public PromiseWorker
{
  public:
    RibSolid_IsA_AsyncWorker(MbRibSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~RibSolid_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbRibSolid *_underlying;

    MbeCreatorType _result;

    int resultType;
};

class RibSolid_Type_AsyncWorker : public PromiseWorker
{
  public:
    RibSolid_Type_AsyncWorker(MbRibSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~RibSolid_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbRibSolid *_underlying;

    MbeCreatorType _result;

    int resultType;
};

class RibSolid_GetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    RibSolid_GetBasisPoints_AsyncWorker(MbRibSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~RibSolid_GetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbRibSolid *_underlying;

    MbControlData3D *cd;

    int resultType;
};

class RibSolid_SetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    RibSolid_SetBasisPoints_AsyncWorker(MbRibSolid *_underlying, Napi::Promise::Deferred const &d,
                                        const MbControlData3D &cd);
    virtual ~RibSolid_SetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbRibSolid *_underlying;
    const MbControlData3D &cd;

    int resultType;
};

class RibSolid_GetBasisItems_AsyncWorker : public PromiseWorker
{
  public:
    RibSolid_GetBasisItems_AsyncWorker(MbRibSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~RibSolid_GetBasisItems_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbRibSolid *_underlying;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class RibSolid_GetCreatorsCount_AsyncWorker : public PromiseWorker
{
  public:
    RibSolid_GetCreatorsCount_AsyncWorker(MbRibSolid *_underlying, Napi::Promise::Deferred const &d, MbeCreatorType ct);
    virtual ~RibSolid_GetCreatorsCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbRibSolid *_underlying;
    MbeCreatorType ct;

    size_t _result;

    int resultType;
};

class RibSolid_GetYourNameMaker_AsyncWorker : public PromiseWorker
{
  public:
    RibSolid_GetYourNameMaker_AsyncWorker(MbRibSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~RibSolid_GetYourNameMaker_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbRibSolid *_underlying;

    const MbSNameMaker *_result;

    int resultType;
};

class RibSolid_GetStatus_AsyncWorker : public PromiseWorker
{
  public:
    RibSolid_GetStatus_AsyncWorker(MbRibSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~RibSolid_GetStatus_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbRibSolid *_underlying;

    MbeProcessState _result;

    int resultType;
};

class RibSolid_SetStatus_AsyncWorker : public PromiseWorker
{
  public:
    RibSolid_SetStatus_AsyncWorker(MbRibSolid *_underlying, Napi::Promise::Deferred const &d, MbeProcessState l);
    virtual ~RibSolid_SetStatus_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbRibSolid *_underlying;
    MbeProcessState l;

    int resultType;
};

class RibSolid_CreateShell_AsyncWorker : public PromiseWorker
{
  public:
    RibSolid_CreateShell_AsyncWorker(MbRibSolid *_underlying, Napi::Promise::Deferred const &d, MbFaceShell *shell,
                                     MbeCopyMode sameShell);
    virtual ~RibSolid_CreateShell_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbRibSolid *_underlying;
    MbFaceShell *shell;
    MbeCopyMode sameShell;

    bool success;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class RibSolid_GetMainName_AsyncWorker : public PromiseWorker
{
  public:
    RibSolid_GetMainName_AsyncWorker(MbRibSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~RibSolid_GetMainName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbRibSolid *_underlying;

    SimpleName _result;

    int resultType;
};

class RibSolid_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    RibSolid_GetUseCount_AsyncWorker(MbRibSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~RibSolid_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbRibSolid *_underlying;

    refcount_t _result;

    int resultType;
};

class RibSolid_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    RibSolid_AddRef_AsyncWorker(MbRibSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~RibSolid_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbRibSolid *_underlying;

    int resultType;
};

#endif
