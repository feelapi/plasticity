// This is a generated file, modify: generate/templates/ChamferSolid.h

#ifndef CHAMFERSOLID_H
#define CHAMFERSOLID_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cr_chamfer_solid.h>

#include "SmoothSolid.h"
#include "PromiseWorker.h"

class ChamferSolid : public Napi::ObjectWrap<ChamferSolid>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbChamferSolid *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    ChamferSolid(const Napi::CallbackInfo &info);

    Napi::Value GetParameters(const Napi::CallbackInfo &info);
    Napi::Value GetParameters_async(const Napi::CallbackInfo &info);
    Napi::Value SetParameters(const Napi::CallbackInfo &info);
    Napi::Value SetParameters_async(const Napi::CallbackInfo &info);
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

    MbChamferSolid *_underlying;

    ~ChamferSolid();

  private:
};

class ChamferSolid_GetParameters_AsyncWorker : public PromiseWorker
{
  public:
    ChamferSolid_GetParameters_AsyncWorker(MbChamferSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ChamferSolid_GetParameters_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbChamferSolid *_underlying;

    SmoothValues *params;

    int resultType;
};

class ChamferSolid_SetParameters_AsyncWorker : public PromiseWorker
{
  public:
    ChamferSolid_SetParameters_AsyncWorker(MbChamferSolid *_underlying, Napi::Promise::Deferred const &d,
                                           const SmoothValues &params);
    virtual ~ChamferSolid_SetParameters_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbChamferSolid *_underlying;
    const SmoothValues &params;

    int resultType;
};

class ChamferSolid_IsA_AsyncWorker : public PromiseWorker
{
  public:
    ChamferSolid_IsA_AsyncWorker(MbChamferSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ChamferSolid_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbChamferSolid *_underlying;

    MbeCreatorType _result;

    int resultType;
};

class ChamferSolid_Type_AsyncWorker : public PromiseWorker
{
  public:
    ChamferSolid_Type_AsyncWorker(MbChamferSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ChamferSolid_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbChamferSolid *_underlying;

    MbeCreatorType _result;

    int resultType;
};

class ChamferSolid_GetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    ChamferSolid_GetBasisPoints_AsyncWorker(MbChamferSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ChamferSolid_GetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbChamferSolid *_underlying;

    MbControlData3D *cd;

    int resultType;
};

class ChamferSolid_SetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    ChamferSolid_SetBasisPoints_AsyncWorker(MbChamferSolid *_underlying, Napi::Promise::Deferred const &d,
                                            const MbControlData3D &cd);
    virtual ~ChamferSolid_SetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbChamferSolid *_underlying;
    const MbControlData3D &cd;

    int resultType;
};

class ChamferSolid_GetBasisItems_AsyncWorker : public PromiseWorker
{
  public:
    ChamferSolid_GetBasisItems_AsyncWorker(MbChamferSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ChamferSolid_GetBasisItems_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbChamferSolid *_underlying;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class ChamferSolid_GetCreatorsCount_AsyncWorker : public PromiseWorker
{
  public:
    ChamferSolid_GetCreatorsCount_AsyncWorker(MbChamferSolid *_underlying, Napi::Promise::Deferred const &d,
                                              MbeCreatorType ct);
    virtual ~ChamferSolid_GetCreatorsCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbChamferSolid *_underlying;
    MbeCreatorType ct;

    size_t _result;

    int resultType;
};

class ChamferSolid_GetYourNameMaker_AsyncWorker : public PromiseWorker
{
  public:
    ChamferSolid_GetYourNameMaker_AsyncWorker(MbChamferSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ChamferSolid_GetYourNameMaker_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbChamferSolid *_underlying;

    const MbSNameMaker *_result;

    int resultType;
};

class ChamferSolid_GetStatus_AsyncWorker : public PromiseWorker
{
  public:
    ChamferSolid_GetStatus_AsyncWorker(MbChamferSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ChamferSolid_GetStatus_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbChamferSolid *_underlying;

    MbeProcessState _result;

    int resultType;
};

class ChamferSolid_SetStatus_AsyncWorker : public PromiseWorker
{
  public:
    ChamferSolid_SetStatus_AsyncWorker(MbChamferSolid *_underlying, Napi::Promise::Deferred const &d,
                                       MbeProcessState l);
    virtual ~ChamferSolid_SetStatus_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbChamferSolid *_underlying;
    MbeProcessState l;

    int resultType;
};

class ChamferSolid_CreateShell_AsyncWorker : public PromiseWorker
{
  public:
    ChamferSolid_CreateShell_AsyncWorker(MbChamferSolid *_underlying, Napi::Promise::Deferred const &d,
                                         MbFaceShell *shell, MbeCopyMode sameShell);
    virtual ~ChamferSolid_CreateShell_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbChamferSolid *_underlying;
    MbFaceShell *shell;
    MbeCopyMode sameShell;

    bool success;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class ChamferSolid_GetMainName_AsyncWorker : public PromiseWorker
{
  public:
    ChamferSolid_GetMainName_AsyncWorker(MbChamferSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ChamferSolid_GetMainName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbChamferSolid *_underlying;

    SimpleName _result;

    int resultType;
};

class ChamferSolid_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    ChamferSolid_GetUseCount_AsyncWorker(MbChamferSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ChamferSolid_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbChamferSolid *_underlying;

    refcount_t _result;

    int resultType;
};

class ChamferSolid_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    ChamferSolid_AddRef_AsyncWorker(MbChamferSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ChamferSolid_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbChamferSolid *_underlying;

    int resultType;
};

#endif
