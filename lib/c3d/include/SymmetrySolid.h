// This is a generated file, modify: generate/templates/SymmetrySolid.h

#ifndef SYMMETRYSOLID_H
#define SYMMETRYSOLID_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cr_symmetry_solid.h>

#include "Creator.h"
#include "PromiseWorker.h"

class SymmetrySolid : public Napi::ObjectWrap<SymmetrySolid>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbSymmetrySolid *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    SymmetrySolid(const Napi::CallbackInfo &info);

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

    MbSymmetrySolid *_underlying;

    ~SymmetrySolid();

  private:
};

class SymmetrySolid_IsA_AsyncWorker : public PromiseWorker
{
  public:
    SymmetrySolid_IsA_AsyncWorker(MbSymmetrySolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SymmetrySolid_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSymmetrySolid *_underlying;

    MbeCreatorType _result;

    int resultType;
};

class SymmetrySolid_Type_AsyncWorker : public PromiseWorker
{
  public:
    SymmetrySolid_Type_AsyncWorker(MbSymmetrySolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SymmetrySolid_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSymmetrySolid *_underlying;

    MbeCreatorType _result;

    int resultType;
};

class SymmetrySolid_GetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    SymmetrySolid_GetBasisPoints_AsyncWorker(MbSymmetrySolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SymmetrySolid_GetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSymmetrySolid *_underlying;

    MbControlData3D *cd;

    int resultType;
};

class SymmetrySolid_SetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    SymmetrySolid_SetBasisPoints_AsyncWorker(MbSymmetrySolid *_underlying, Napi::Promise::Deferred const &d,
                                             const MbControlData3D &cd);
    virtual ~SymmetrySolid_SetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSymmetrySolid *_underlying;
    const MbControlData3D &cd;

    int resultType;
};

class SymmetrySolid_GetBasisItems_AsyncWorker : public PromiseWorker
{
  public:
    SymmetrySolid_GetBasisItems_AsyncWorker(MbSymmetrySolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SymmetrySolid_GetBasisItems_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSymmetrySolid *_underlying;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class SymmetrySolid_GetCreatorsCount_AsyncWorker : public PromiseWorker
{
  public:
    SymmetrySolid_GetCreatorsCount_AsyncWorker(MbSymmetrySolid *_underlying, Napi::Promise::Deferred const &d,
                                               MbeCreatorType ct);
    virtual ~SymmetrySolid_GetCreatorsCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSymmetrySolid *_underlying;
    MbeCreatorType ct;

    size_t _result;

    int resultType;
};

class SymmetrySolid_GetYourNameMaker_AsyncWorker : public PromiseWorker
{
  public:
    SymmetrySolid_GetYourNameMaker_AsyncWorker(MbSymmetrySolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SymmetrySolid_GetYourNameMaker_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSymmetrySolid *_underlying;

    const MbSNameMaker *_result;

    int resultType;
};

class SymmetrySolid_GetStatus_AsyncWorker : public PromiseWorker
{
  public:
    SymmetrySolid_GetStatus_AsyncWorker(MbSymmetrySolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SymmetrySolid_GetStatus_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSymmetrySolid *_underlying;

    MbeProcessState _result;

    int resultType;
};

class SymmetrySolid_SetStatus_AsyncWorker : public PromiseWorker
{
  public:
    SymmetrySolid_SetStatus_AsyncWorker(MbSymmetrySolid *_underlying, Napi::Promise::Deferred const &d,
                                        MbeProcessState l);
    virtual ~SymmetrySolid_SetStatus_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSymmetrySolid *_underlying;
    MbeProcessState l;

    int resultType;
};

class SymmetrySolid_CreateShell_AsyncWorker : public PromiseWorker
{
  public:
    SymmetrySolid_CreateShell_AsyncWorker(MbSymmetrySolid *_underlying, Napi::Promise::Deferred const &d,
                                          MbFaceShell *shell, MbeCopyMode sameShell);
    virtual ~SymmetrySolid_CreateShell_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSymmetrySolid *_underlying;
    MbFaceShell *shell;
    MbeCopyMode sameShell;

    bool success;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class SymmetrySolid_GetMainName_AsyncWorker : public PromiseWorker
{
  public:
    SymmetrySolid_GetMainName_AsyncWorker(MbSymmetrySolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SymmetrySolid_GetMainName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSymmetrySolid *_underlying;

    SimpleName _result;

    int resultType;
};

class SymmetrySolid_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    SymmetrySolid_GetUseCount_AsyncWorker(MbSymmetrySolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SymmetrySolid_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSymmetrySolid *_underlying;

    refcount_t _result;

    int resultType;
};

class SymmetrySolid_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    SymmetrySolid_AddRef_AsyncWorker(MbSymmetrySolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SymmetrySolid_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSymmetrySolid *_underlying;

    int resultType;
};

#endif
