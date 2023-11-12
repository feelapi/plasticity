// This is a generated file, modify: generate/templates/CurveLoftedSolid.h

#ifndef CURVELOFTEDSOLID_H
#define CURVELOFTEDSOLID_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cr_lofted_solid.h>

#include "CurveSweptSolid.h"
#include "PromiseWorker.h"

class CurveLoftedSolid : public Napi::ObjectWrap<CurveLoftedSolid>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbCurveLoftedSolid *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    CurveLoftedSolid(const Napi::CallbackInfo &info);

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

    MbCurveLoftedSolid *_underlying;

    ~CurveLoftedSolid();

  private:
};

class CurveLoftedSolid_IsA_AsyncWorker : public PromiseWorker
{
  public:
    CurveLoftedSolid_IsA_AsyncWorker(MbCurveLoftedSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~CurveLoftedSolid_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveLoftedSolid *_underlying;

    MbeCreatorType _result;

    int resultType;
};

class CurveLoftedSolid_Type_AsyncWorker : public PromiseWorker
{
  public:
    CurveLoftedSolid_Type_AsyncWorker(MbCurveLoftedSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~CurveLoftedSolid_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveLoftedSolid *_underlying;

    MbeCreatorType _result;

    int resultType;
};

class CurveLoftedSolid_GetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    CurveLoftedSolid_GetBasisPoints_AsyncWorker(MbCurveLoftedSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~CurveLoftedSolid_GetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveLoftedSolid *_underlying;

    MbControlData3D *cd;

    int resultType;
};

class CurveLoftedSolid_SetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    CurveLoftedSolid_SetBasisPoints_AsyncWorker(MbCurveLoftedSolid *_underlying, Napi::Promise::Deferred const &d,
                                                const MbControlData3D &cd);
    virtual ~CurveLoftedSolid_SetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveLoftedSolid *_underlying;
    const MbControlData3D &cd;

    int resultType;
};

class CurveLoftedSolid_GetBasisItems_AsyncWorker : public PromiseWorker
{
  public:
    CurveLoftedSolid_GetBasisItems_AsyncWorker(MbCurveLoftedSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~CurveLoftedSolid_GetBasisItems_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveLoftedSolid *_underlying;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class CurveLoftedSolid_GetCreatorsCount_AsyncWorker : public PromiseWorker
{
  public:
    CurveLoftedSolid_GetCreatorsCount_AsyncWorker(MbCurveLoftedSolid *_underlying, Napi::Promise::Deferred const &d,
                                                  MbeCreatorType ct);
    virtual ~CurveLoftedSolid_GetCreatorsCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveLoftedSolid *_underlying;
    MbeCreatorType ct;

    size_t _result;

    int resultType;
};

class CurveLoftedSolid_GetYourNameMaker_AsyncWorker : public PromiseWorker
{
  public:
    CurveLoftedSolid_GetYourNameMaker_AsyncWorker(MbCurveLoftedSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~CurveLoftedSolid_GetYourNameMaker_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveLoftedSolid *_underlying;

    const MbSNameMaker *_result;

    int resultType;
};

class CurveLoftedSolid_GetStatus_AsyncWorker : public PromiseWorker
{
  public:
    CurveLoftedSolid_GetStatus_AsyncWorker(MbCurveLoftedSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~CurveLoftedSolid_GetStatus_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveLoftedSolid *_underlying;

    MbeProcessState _result;

    int resultType;
};

class CurveLoftedSolid_SetStatus_AsyncWorker : public PromiseWorker
{
  public:
    CurveLoftedSolid_SetStatus_AsyncWorker(MbCurveLoftedSolid *_underlying, Napi::Promise::Deferred const &d,
                                           MbeProcessState l);
    virtual ~CurveLoftedSolid_SetStatus_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveLoftedSolid *_underlying;
    MbeProcessState l;

    int resultType;
};

class CurveLoftedSolid_CreateShell_AsyncWorker : public PromiseWorker
{
  public:
    CurveLoftedSolid_CreateShell_AsyncWorker(MbCurveLoftedSolid *_underlying, Napi::Promise::Deferred const &d,
                                             MbFaceShell *shell, MbeCopyMode sameShell);
    virtual ~CurveLoftedSolid_CreateShell_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveLoftedSolid *_underlying;
    MbFaceShell *shell;
    MbeCopyMode sameShell;

    bool success;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class CurveLoftedSolid_GetMainName_AsyncWorker : public PromiseWorker
{
  public:
    CurveLoftedSolid_GetMainName_AsyncWorker(MbCurveLoftedSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~CurveLoftedSolid_GetMainName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveLoftedSolid *_underlying;

    SimpleName _result;

    int resultType;
};

class CurveLoftedSolid_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    CurveLoftedSolid_GetUseCount_AsyncWorker(MbCurveLoftedSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~CurveLoftedSolid_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveLoftedSolid *_underlying;

    refcount_t _result;

    int resultType;
};

class CurveLoftedSolid_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    CurveLoftedSolid_AddRef_AsyncWorker(MbCurveLoftedSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~CurveLoftedSolid_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCurveLoftedSolid *_underlying;

    int resultType;
};

#endif
