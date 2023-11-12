// This is a generated file, modify: generate/templates/UnionSolid.h

#ifndef UNIONSOLID_H
#define UNIONSOLID_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cr_union_solid.h>

#include "Creator.h"
#include "PromiseWorker.h"

class UnionSolid : public Napi::ObjectWrap<UnionSolid>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbUnionSolid *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    UnionSolid(const Napi::CallbackInfo &info);

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

    MbUnionSolid *_underlying;

    ~UnionSolid();

  private:
};

class UnionSolid_IsA_AsyncWorker : public PromiseWorker
{
  public:
    UnionSolid_IsA_AsyncWorker(MbUnionSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~UnionSolid_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbUnionSolid *_underlying;

    MbeCreatorType _result;

    int resultType;
};

class UnionSolid_Type_AsyncWorker : public PromiseWorker
{
  public:
    UnionSolid_Type_AsyncWorker(MbUnionSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~UnionSolid_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbUnionSolid *_underlying;

    MbeCreatorType _result;

    int resultType;
};

class UnionSolid_GetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    UnionSolid_GetBasisPoints_AsyncWorker(MbUnionSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~UnionSolid_GetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbUnionSolid *_underlying;

    MbControlData3D *cd;

    int resultType;
};

class UnionSolid_SetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    UnionSolid_SetBasisPoints_AsyncWorker(MbUnionSolid *_underlying, Napi::Promise::Deferred const &d,
                                          const MbControlData3D &cd);
    virtual ~UnionSolid_SetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbUnionSolid *_underlying;
    const MbControlData3D &cd;

    int resultType;
};

class UnionSolid_GetBasisItems_AsyncWorker : public PromiseWorker
{
  public:
    UnionSolid_GetBasisItems_AsyncWorker(MbUnionSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~UnionSolid_GetBasisItems_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbUnionSolid *_underlying;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class UnionSolid_GetCreatorsCount_AsyncWorker : public PromiseWorker
{
  public:
    UnionSolid_GetCreatorsCount_AsyncWorker(MbUnionSolid *_underlying, Napi::Promise::Deferred const &d,
                                            MbeCreatorType ct);
    virtual ~UnionSolid_GetCreatorsCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbUnionSolid *_underlying;
    MbeCreatorType ct;

    size_t _result;

    int resultType;
};

class UnionSolid_GetYourNameMaker_AsyncWorker : public PromiseWorker
{
  public:
    UnionSolid_GetYourNameMaker_AsyncWorker(MbUnionSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~UnionSolid_GetYourNameMaker_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbUnionSolid *_underlying;

    const MbSNameMaker *_result;

    int resultType;
};

class UnionSolid_GetStatus_AsyncWorker : public PromiseWorker
{
  public:
    UnionSolid_GetStatus_AsyncWorker(MbUnionSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~UnionSolid_GetStatus_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbUnionSolid *_underlying;

    MbeProcessState _result;

    int resultType;
};

class UnionSolid_SetStatus_AsyncWorker : public PromiseWorker
{
  public:
    UnionSolid_SetStatus_AsyncWorker(MbUnionSolid *_underlying, Napi::Promise::Deferred const &d, MbeProcessState l);
    virtual ~UnionSolid_SetStatus_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbUnionSolid *_underlying;
    MbeProcessState l;

    int resultType;
};

class UnionSolid_CreateShell_AsyncWorker : public PromiseWorker
{
  public:
    UnionSolid_CreateShell_AsyncWorker(MbUnionSolid *_underlying, Napi::Promise::Deferred const &d, MbFaceShell *shell,
                                       MbeCopyMode sameShell);
    virtual ~UnionSolid_CreateShell_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbUnionSolid *_underlying;
    MbFaceShell *shell;
    MbeCopyMode sameShell;

    bool success;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class UnionSolid_GetMainName_AsyncWorker : public PromiseWorker
{
  public:
    UnionSolid_GetMainName_AsyncWorker(MbUnionSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~UnionSolid_GetMainName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbUnionSolid *_underlying;

    SimpleName _result;

    int resultType;
};

class UnionSolid_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    UnionSolid_GetUseCount_AsyncWorker(MbUnionSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~UnionSolid_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbUnionSolid *_underlying;

    refcount_t _result;

    int resultType;
};

class UnionSolid_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    UnionSolid_AddRef_AsyncWorker(MbUnionSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~UnionSolid_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbUnionSolid *_underlying;

    int resultType;
};

#endif
