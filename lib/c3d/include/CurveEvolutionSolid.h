// This is a generated file, modify: generate/templates/CurveEvolutionSolid.h

#ifndef CURVEEVOLUTIONSOLID_H
#define CURVEEVOLUTIONSOLID_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cr_evolution_solid.h>

#include "CurveSweptSolid.h"
#include "PromiseWorker.h"

class CurveEvolutionSolid : public Napi::ObjectWrap<CurveEvolutionSolid>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbCurveEvolutionSolid *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    CurveEvolutionSolid(const Napi::CallbackInfo &info);

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

    MbCurveEvolutionSolid *_underlying;

    ~CurveEvolutionSolid();

  private:
};

class CurveEvolutionSolid_IsA_AsyncWorker : public PromiseWorker
{
  public:
    CurveEvolutionSolid_IsA_AsyncWorker(MbCurveEvolutionSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~CurveEvolutionSolid_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveEvolutionSolid *_underlying;

    MbeCreatorType _result;

    int resultType;
};

class CurveEvolutionSolid_Type_AsyncWorker : public PromiseWorker
{
  public:
    CurveEvolutionSolid_Type_AsyncWorker(MbCurveEvolutionSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~CurveEvolutionSolid_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveEvolutionSolid *_underlying;

    MbeCreatorType _result;

    int resultType;
};

class CurveEvolutionSolid_GetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    CurveEvolutionSolid_GetBasisPoints_AsyncWorker(MbCurveEvolutionSolid *_underlying,
                                                   Napi::Promise::Deferred const &d);
    virtual ~CurveEvolutionSolid_GetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveEvolutionSolid *_underlying;

    MbControlData3D *cd;

    int resultType;
};

class CurveEvolutionSolid_SetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    CurveEvolutionSolid_SetBasisPoints_AsyncWorker(MbCurveEvolutionSolid *_underlying, Napi::Promise::Deferred const &d,
                                                   const MbControlData3D &cd);
    virtual ~CurveEvolutionSolid_SetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveEvolutionSolid *_underlying;
    const MbControlData3D &cd;

    int resultType;
};

class CurveEvolutionSolid_GetBasisItems_AsyncWorker : public PromiseWorker
{
  public:
    CurveEvolutionSolid_GetBasisItems_AsyncWorker(MbCurveEvolutionSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~CurveEvolutionSolid_GetBasisItems_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveEvolutionSolid *_underlying;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class CurveEvolutionSolid_GetCreatorsCount_AsyncWorker : public PromiseWorker
{
  public:
    CurveEvolutionSolid_GetCreatorsCount_AsyncWorker(MbCurveEvolutionSolid *_underlying,
                                                     Napi::Promise::Deferred const &d, MbeCreatorType ct);
    virtual ~CurveEvolutionSolid_GetCreatorsCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveEvolutionSolid *_underlying;
    MbeCreatorType ct;

    size_t _result;

    int resultType;
};

class CurveEvolutionSolid_GetYourNameMaker_AsyncWorker : public PromiseWorker
{
  public:
    CurveEvolutionSolid_GetYourNameMaker_AsyncWorker(MbCurveEvolutionSolid *_underlying,
                                                     Napi::Promise::Deferred const &d);
    virtual ~CurveEvolutionSolid_GetYourNameMaker_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveEvolutionSolid *_underlying;

    const MbSNameMaker *_result;

    int resultType;
};

class CurveEvolutionSolid_GetStatus_AsyncWorker : public PromiseWorker
{
  public:
    CurveEvolutionSolid_GetStatus_AsyncWorker(MbCurveEvolutionSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~CurveEvolutionSolid_GetStatus_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveEvolutionSolid *_underlying;

    MbeProcessState _result;

    int resultType;
};

class CurveEvolutionSolid_SetStatus_AsyncWorker : public PromiseWorker
{
  public:
    CurveEvolutionSolid_SetStatus_AsyncWorker(MbCurveEvolutionSolid *_underlying, Napi::Promise::Deferred const &d,
                                              MbeProcessState l);
    virtual ~CurveEvolutionSolid_SetStatus_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveEvolutionSolid *_underlying;
    MbeProcessState l;

    int resultType;
};

class CurveEvolutionSolid_CreateShell_AsyncWorker : public PromiseWorker
{
  public:
    CurveEvolutionSolid_CreateShell_AsyncWorker(MbCurveEvolutionSolid *_underlying, Napi::Promise::Deferred const &d,
                                                MbFaceShell *shell, MbeCopyMode sameShell);
    virtual ~CurveEvolutionSolid_CreateShell_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveEvolutionSolid *_underlying;
    MbFaceShell *shell;
    MbeCopyMode sameShell;

    bool success;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class CurveEvolutionSolid_GetMainName_AsyncWorker : public PromiseWorker
{
  public:
    CurveEvolutionSolid_GetMainName_AsyncWorker(MbCurveEvolutionSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~CurveEvolutionSolid_GetMainName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveEvolutionSolid *_underlying;

    SimpleName _result;

    int resultType;
};

class CurveEvolutionSolid_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    CurveEvolutionSolid_GetUseCount_AsyncWorker(MbCurveEvolutionSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~CurveEvolutionSolid_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveEvolutionSolid *_underlying;

    refcount_t _result;

    int resultType;
};

class CurveEvolutionSolid_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    CurveEvolutionSolid_AddRef_AsyncWorker(MbCurveEvolutionSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~CurveEvolutionSolid_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveEvolutionSolid *_underlying;

    int resultType;
};

#endif
