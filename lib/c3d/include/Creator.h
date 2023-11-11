// This is a generated file, modify: generate/templates/Creator.h

#ifndef CREATOR_H
#define CREATOR_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <creator.h>

#include "RefItem.h"
#include "ControlData3D.h"
#include "SpaceItem.h"
#include "SNameMaker.h"
#include "FaceShell.h"
#include "PromiseWorker.h"

class Creator : public Napi::ObjectWrap<Creator>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbCreator *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    Creator(const Napi::CallbackInfo &info);

    Napi::Value IsA(const Napi::CallbackInfo &info);
    Napi::Value IsA_async(const Napi::CallbackInfo &info);
    Napi::Value Type(const Napi::CallbackInfo &info);
    Napi::Value Type_async(const Napi::CallbackInfo &info);
    Napi::Value Cast(const Napi::CallbackInfo &info);
    Napi::Value Cast_async(const Napi::CallbackInfo &info);
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

    MbCreator *_underlying;

    ~Creator();

  private:
};

class Creator_IsA_AsyncWorker : public PromiseWorker
{
  public:
    Creator_IsA_AsyncWorker(MbCreator *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Creator_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCreator *_underlying;

    MbeCreatorType _result;

    int resultType;
};

class Creator_Type_AsyncWorker : public PromiseWorker
{
  public:
    Creator_Type_AsyncWorker(MbCreator *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Creator_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCreator *_underlying;

    MbeCreatorType _result;

    int resultType;
};

class Creator_GetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    Creator_GetBasisPoints_AsyncWorker(MbCreator *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Creator_GetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCreator *_underlying;

    MbControlData3D *cd;

    int resultType;
};

class Creator_SetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    Creator_SetBasisPoints_AsyncWorker(MbCreator *_underlying, Napi::Promise::Deferred const &d,
                                       const MbControlData3D &cd);
    virtual ~Creator_SetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCreator *_underlying;
    const MbControlData3D &cd;

    int resultType;
};

class Creator_GetBasisItems_AsyncWorker : public PromiseWorker
{
  public:
    Creator_GetBasisItems_AsyncWorker(MbCreator *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Creator_GetBasisItems_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCreator *_underlying;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class Creator_GetCreatorsCount_AsyncWorker : public PromiseWorker
{
  public:
    Creator_GetCreatorsCount_AsyncWorker(MbCreator *_underlying, Napi::Promise::Deferred const &d, MbeCreatorType ct);
    virtual ~Creator_GetCreatorsCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCreator *_underlying;
    MbeCreatorType ct;

    size_t _result;

    int resultType;
};

class Creator_GetYourNameMaker_AsyncWorker : public PromiseWorker
{
  public:
    Creator_GetYourNameMaker_AsyncWorker(MbCreator *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Creator_GetYourNameMaker_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCreator *_underlying;

    const MbSNameMaker *_result;

    int resultType;
};

class Creator_GetStatus_AsyncWorker : public PromiseWorker
{
  public:
    Creator_GetStatus_AsyncWorker(MbCreator *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Creator_GetStatus_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCreator *_underlying;

    MbeProcessState _result;

    int resultType;
};

class Creator_SetStatus_AsyncWorker : public PromiseWorker
{
  public:
    Creator_SetStatus_AsyncWorker(MbCreator *_underlying, Napi::Promise::Deferred const &d, MbeProcessState l);
    virtual ~Creator_SetStatus_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCreator *_underlying;
    MbeProcessState l;

    int resultType;
};

class Creator_CreateShell_AsyncWorker : public PromiseWorker
{
  public:
    Creator_CreateShell_AsyncWorker(MbCreator *_underlying, Napi::Promise::Deferred const &d, MbFaceShell *shell,
                                    MbeCopyMode sameShell);
    virtual ~Creator_CreateShell_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCreator *_underlying;
    MbFaceShell *shell;
    MbeCopyMode sameShell;

    bool success;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class Creator_GetMainName_AsyncWorker : public PromiseWorker
{
  public:
    Creator_GetMainName_AsyncWorker(MbCreator *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Creator_GetMainName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCreator *_underlying;

    SimpleName _result;

    int resultType;
};

class Creator_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    Creator_GetUseCount_AsyncWorker(MbCreator *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Creator_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCreator *_underlying;

    refcount_t _result;

    int resultType;
};

class Creator_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    Creator_AddRef_AsyncWorker(MbCreator *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Creator_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCreator *_underlying;

    int resultType;
};

#endif
