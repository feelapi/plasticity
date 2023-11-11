// This is a generated file, modify: generate/templates/CurveRevolutionSolid.h

#ifndef CURVEREVOLUTIONSOLID_H
#define CURVEREVOLUTIONSOLID_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cr_revolution_solid.h>

#include "CurveSweptSolid.h"
#include "PromiseWorker.h"

class CurveRevolutionSolid : public Napi::ObjectWrap<CurveRevolutionSolid>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbCurveRevolutionSolid *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    CurveRevolutionSolid(const Napi::CallbackInfo &info);

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

    MbCurveRevolutionSolid *_underlying;

    ~CurveRevolutionSolid();

  private:
};

class CurveRevolutionSolid_IsA_AsyncWorker : public PromiseWorker
{
  public:
    CurveRevolutionSolid_IsA_AsyncWorker(MbCurveRevolutionSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~CurveRevolutionSolid_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveRevolutionSolid *_underlying;

    MbeCreatorType _result;

    int resultType;
};

class CurveRevolutionSolid_Type_AsyncWorker : public PromiseWorker
{
  public:
    CurveRevolutionSolid_Type_AsyncWorker(MbCurveRevolutionSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~CurveRevolutionSolid_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveRevolutionSolid *_underlying;

    MbeCreatorType _result;

    int resultType;
};

class CurveRevolutionSolid_GetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    CurveRevolutionSolid_GetBasisPoints_AsyncWorker(MbCurveRevolutionSolid *_underlying,
                                                    Napi::Promise::Deferred const &d);
    virtual ~CurveRevolutionSolid_GetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveRevolutionSolid *_underlying;

    MbControlData3D *cd;

    int resultType;
};

class CurveRevolutionSolid_SetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    CurveRevolutionSolid_SetBasisPoints_AsyncWorker(MbCurveRevolutionSolid *_underlying,
                                                    Napi::Promise::Deferred const &d, const MbControlData3D &cd);
    virtual ~CurveRevolutionSolid_SetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveRevolutionSolid *_underlying;
    const MbControlData3D &cd;

    int resultType;
};

class CurveRevolutionSolid_GetBasisItems_AsyncWorker : public PromiseWorker
{
  public:
    CurveRevolutionSolid_GetBasisItems_AsyncWorker(MbCurveRevolutionSolid *_underlying,
                                                   Napi::Promise::Deferred const &d);
    virtual ~CurveRevolutionSolid_GetBasisItems_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveRevolutionSolid *_underlying;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class CurveRevolutionSolid_GetCreatorsCount_AsyncWorker : public PromiseWorker
{
  public:
    CurveRevolutionSolid_GetCreatorsCount_AsyncWorker(MbCurveRevolutionSolid *_underlying,
                                                      Napi::Promise::Deferred const &d, MbeCreatorType ct);
    virtual ~CurveRevolutionSolid_GetCreatorsCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveRevolutionSolid *_underlying;
    MbeCreatorType ct;

    size_t _result;

    int resultType;
};

class CurveRevolutionSolid_GetYourNameMaker_AsyncWorker : public PromiseWorker
{
  public:
    CurveRevolutionSolid_GetYourNameMaker_AsyncWorker(MbCurveRevolutionSolid *_underlying,
                                                      Napi::Promise::Deferred const &d);
    virtual ~CurveRevolutionSolid_GetYourNameMaker_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveRevolutionSolid *_underlying;

    const MbSNameMaker *_result;

    int resultType;
};

class CurveRevolutionSolid_GetStatus_AsyncWorker : public PromiseWorker
{
  public:
    CurveRevolutionSolid_GetStatus_AsyncWorker(MbCurveRevolutionSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~CurveRevolutionSolid_GetStatus_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveRevolutionSolid *_underlying;

    MbeProcessState _result;

    int resultType;
};

class CurveRevolutionSolid_SetStatus_AsyncWorker : public PromiseWorker
{
  public:
    CurveRevolutionSolid_SetStatus_AsyncWorker(MbCurveRevolutionSolid *_underlying, Napi::Promise::Deferred const &d,
                                               MbeProcessState l);
    virtual ~CurveRevolutionSolid_SetStatus_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveRevolutionSolid *_underlying;
    MbeProcessState l;

    int resultType;
};

class CurveRevolutionSolid_CreateShell_AsyncWorker : public PromiseWorker
{
  public:
    CurveRevolutionSolid_CreateShell_AsyncWorker(MbCurveRevolutionSolid *_underlying, Napi::Promise::Deferred const &d,
                                                 MbFaceShell *shell, MbeCopyMode sameShell);
    virtual ~CurveRevolutionSolid_CreateShell_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveRevolutionSolid *_underlying;
    MbFaceShell *shell;
    MbeCopyMode sameShell;

    bool success;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class CurveRevolutionSolid_GetMainName_AsyncWorker : public PromiseWorker
{
  public:
    CurveRevolutionSolid_GetMainName_AsyncWorker(MbCurveRevolutionSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~CurveRevolutionSolid_GetMainName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveRevolutionSolid *_underlying;

    SimpleName _result;

    int resultType;
};

class CurveRevolutionSolid_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    CurveRevolutionSolid_GetUseCount_AsyncWorker(MbCurveRevolutionSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~CurveRevolutionSolid_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveRevolutionSolid *_underlying;

    refcount_t _result;

    int resultType;
};

class CurveRevolutionSolid_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    CurveRevolutionSolid_AddRef_AsyncWorker(MbCurveRevolutionSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~CurveRevolutionSolid_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveRevolutionSolid *_underlying;

    int resultType;
};

#endif
