// This is a generated file, modify: generate/templates/TransformedSolid.h

#ifndef TRANSFORMEDSOLID_H
#define TRANSFORMEDSOLID_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cr_transformed_solid.h>

#include "Creator.h"
#include "PromiseWorker.h"

class TransformedSolid : public Napi::ObjectWrap<TransformedSolid>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbTransformedSolid *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    TransformedSolid(const Napi::CallbackInfo &info);

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

    MbTransformedSolid *_underlying;

    ~TransformedSolid();

  private:
};

class TransformedSolid_IsA_AsyncWorker : public PromiseWorker
{
  public:
    TransformedSolid_IsA_AsyncWorker(MbTransformedSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~TransformedSolid_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTransformedSolid *_underlying;

    MbeCreatorType _result;

    int resultType;
};

class TransformedSolid_Type_AsyncWorker : public PromiseWorker
{
  public:
    TransformedSolid_Type_AsyncWorker(MbTransformedSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~TransformedSolid_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTransformedSolid *_underlying;

    MbeCreatorType _result;

    int resultType;
};

class TransformedSolid_GetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    TransformedSolid_GetBasisPoints_AsyncWorker(MbTransformedSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~TransformedSolid_GetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTransformedSolid *_underlying;

    MbControlData3D *cd;

    int resultType;
};

class TransformedSolid_SetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    TransformedSolid_SetBasisPoints_AsyncWorker(MbTransformedSolid *_underlying, Napi::Promise::Deferred const &d,
                                                const MbControlData3D &cd);
    virtual ~TransformedSolid_SetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTransformedSolid *_underlying;
    const MbControlData3D &cd;

    int resultType;
};

class TransformedSolid_GetBasisItems_AsyncWorker : public PromiseWorker
{
  public:
    TransformedSolid_GetBasisItems_AsyncWorker(MbTransformedSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~TransformedSolid_GetBasisItems_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTransformedSolid *_underlying;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class TransformedSolid_GetCreatorsCount_AsyncWorker : public PromiseWorker
{
  public:
    TransformedSolid_GetCreatorsCount_AsyncWorker(MbTransformedSolid *_underlying, Napi::Promise::Deferred const &d,
                                                  MbeCreatorType ct);
    virtual ~TransformedSolid_GetCreatorsCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTransformedSolid *_underlying;
    MbeCreatorType ct;

    size_t _result;

    int resultType;
};

class TransformedSolid_GetYourNameMaker_AsyncWorker : public PromiseWorker
{
  public:
    TransformedSolid_GetYourNameMaker_AsyncWorker(MbTransformedSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~TransformedSolid_GetYourNameMaker_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTransformedSolid *_underlying;

    const MbSNameMaker *_result;

    int resultType;
};

class TransformedSolid_GetStatus_AsyncWorker : public PromiseWorker
{
  public:
    TransformedSolid_GetStatus_AsyncWorker(MbTransformedSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~TransformedSolid_GetStatus_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTransformedSolid *_underlying;

    MbeProcessState _result;

    int resultType;
};

class TransformedSolid_SetStatus_AsyncWorker : public PromiseWorker
{
  public:
    TransformedSolid_SetStatus_AsyncWorker(MbTransformedSolid *_underlying, Napi::Promise::Deferred const &d,
                                           MbeProcessState l);
    virtual ~TransformedSolid_SetStatus_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTransformedSolid *_underlying;
    MbeProcessState l;

    int resultType;
};

class TransformedSolid_CreateShell_AsyncWorker : public PromiseWorker
{
  public:
    TransformedSolid_CreateShell_AsyncWorker(MbTransformedSolid *_underlying, Napi::Promise::Deferred const &d,
                                             MbFaceShell *shell, MbeCopyMode sameShell);
    virtual ~TransformedSolid_CreateShell_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTransformedSolid *_underlying;
    MbFaceShell *shell;
    MbeCopyMode sameShell;

    bool success;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class TransformedSolid_GetMainName_AsyncWorker : public PromiseWorker
{
  public:
    TransformedSolid_GetMainName_AsyncWorker(MbTransformedSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~TransformedSolid_GetMainName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTransformedSolid *_underlying;

    SimpleName _result;

    int resultType;
};

class TransformedSolid_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    TransformedSolid_GetUseCount_AsyncWorker(MbTransformedSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~TransformedSolid_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTransformedSolid *_underlying;

    refcount_t _result;

    int resultType;
};

class TransformedSolid_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    TransformedSolid_AddRef_AsyncWorker(MbTransformedSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~TransformedSolid_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTransformedSolid *_underlying;

    int resultType;
};

#endif
