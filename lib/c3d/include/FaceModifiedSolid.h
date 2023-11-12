// This is a generated file, modify: generate/templates/FaceModifiedSolid.h

#ifndef FACEMODIFIEDSOLID_H
#define FACEMODIFIEDSOLID_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cr_modified_solid.h>

#include "Creator.h"
#include "PromiseWorker.h"

class FaceModifiedSolid : public Napi::ObjectWrap<FaceModifiedSolid>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbFaceModifiedSolid *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    FaceModifiedSolid(const Napi::CallbackInfo &info);

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

    MbFaceModifiedSolid *_underlying;

    ~FaceModifiedSolid();

  private:
};

class FaceModifiedSolid_IsA_AsyncWorker : public PromiseWorker
{
  public:
    FaceModifiedSolid_IsA_AsyncWorker(MbFaceModifiedSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~FaceModifiedSolid_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFaceModifiedSolid *_underlying;

    MbeCreatorType _result;

    int resultType;
};

class FaceModifiedSolid_Type_AsyncWorker : public PromiseWorker
{
  public:
    FaceModifiedSolid_Type_AsyncWorker(MbFaceModifiedSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~FaceModifiedSolid_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFaceModifiedSolid *_underlying;

    MbeCreatorType _result;

    int resultType;
};

class FaceModifiedSolid_GetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    FaceModifiedSolid_GetBasisPoints_AsyncWorker(MbFaceModifiedSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~FaceModifiedSolid_GetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFaceModifiedSolid *_underlying;

    MbControlData3D *cd;

    int resultType;
};

class FaceModifiedSolid_SetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    FaceModifiedSolid_SetBasisPoints_AsyncWorker(MbFaceModifiedSolid *_underlying, Napi::Promise::Deferred const &d,
                                                 const MbControlData3D &cd);
    virtual ~FaceModifiedSolid_SetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFaceModifiedSolid *_underlying;
    const MbControlData3D &cd;

    int resultType;
};

class FaceModifiedSolid_GetBasisItems_AsyncWorker : public PromiseWorker
{
  public:
    FaceModifiedSolid_GetBasisItems_AsyncWorker(MbFaceModifiedSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~FaceModifiedSolid_GetBasisItems_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFaceModifiedSolid *_underlying;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class FaceModifiedSolid_GetCreatorsCount_AsyncWorker : public PromiseWorker
{
  public:
    FaceModifiedSolid_GetCreatorsCount_AsyncWorker(MbFaceModifiedSolid *_underlying, Napi::Promise::Deferred const &d,
                                                   MbeCreatorType ct);
    virtual ~FaceModifiedSolid_GetCreatorsCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFaceModifiedSolid *_underlying;
    MbeCreatorType ct;

    size_t _result;

    int resultType;
};

class FaceModifiedSolid_GetYourNameMaker_AsyncWorker : public PromiseWorker
{
  public:
    FaceModifiedSolid_GetYourNameMaker_AsyncWorker(MbFaceModifiedSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~FaceModifiedSolid_GetYourNameMaker_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFaceModifiedSolid *_underlying;

    const MbSNameMaker *_result;

    int resultType;
};

class FaceModifiedSolid_GetStatus_AsyncWorker : public PromiseWorker
{
  public:
    FaceModifiedSolid_GetStatus_AsyncWorker(MbFaceModifiedSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~FaceModifiedSolid_GetStatus_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFaceModifiedSolid *_underlying;

    MbeProcessState _result;

    int resultType;
};

class FaceModifiedSolid_SetStatus_AsyncWorker : public PromiseWorker
{
  public:
    FaceModifiedSolid_SetStatus_AsyncWorker(MbFaceModifiedSolid *_underlying, Napi::Promise::Deferred const &d,
                                            MbeProcessState l);
    virtual ~FaceModifiedSolid_SetStatus_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFaceModifiedSolid *_underlying;
    MbeProcessState l;

    int resultType;
};

class FaceModifiedSolid_CreateShell_AsyncWorker : public PromiseWorker
{
  public:
    FaceModifiedSolid_CreateShell_AsyncWorker(MbFaceModifiedSolid *_underlying, Napi::Promise::Deferred const &d,
                                              MbFaceShell *shell, MbeCopyMode sameShell);
    virtual ~FaceModifiedSolid_CreateShell_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFaceModifiedSolid *_underlying;
    MbFaceShell *shell;
    MbeCopyMode sameShell;

    bool success;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class FaceModifiedSolid_GetMainName_AsyncWorker : public PromiseWorker
{
  public:
    FaceModifiedSolid_GetMainName_AsyncWorker(MbFaceModifiedSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~FaceModifiedSolid_GetMainName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFaceModifiedSolid *_underlying;

    SimpleName _result;

    int resultType;
};

class FaceModifiedSolid_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    FaceModifiedSolid_GetUseCount_AsyncWorker(MbFaceModifiedSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~FaceModifiedSolid_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFaceModifiedSolid *_underlying;

    refcount_t _result;

    int resultType;
};

class FaceModifiedSolid_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    FaceModifiedSolid_AddRef_AsyncWorker(MbFaceModifiedSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~FaceModifiedSolid_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFaceModifiedSolid *_underlying;

    int resultType;
};

#endif
