// This is a generated file, modify: generate/templates/SimpleCreator.h

#ifndef SIMPLECREATOR_H
#define SIMPLECREATOR_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cr_simple_creator.h>

#include "Creator.h"
#include "PromiseWorker.h"

class SimpleCreator : public Napi::ObjectWrap<SimpleCreator>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbSimpleCreator *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    SimpleCreator(const Napi::CallbackInfo &info);

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

    MbSimpleCreator *_underlying;

    ~SimpleCreator();

  private:
};

class SimpleCreator_IsA_AsyncWorker : public PromiseWorker
{
  public:
    SimpleCreator_IsA_AsyncWorker(MbSimpleCreator *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SimpleCreator_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSimpleCreator *_underlying;

    MbeCreatorType _result;

    int resultType;
};

class SimpleCreator_Type_AsyncWorker : public PromiseWorker
{
  public:
    SimpleCreator_Type_AsyncWorker(MbSimpleCreator *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SimpleCreator_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSimpleCreator *_underlying;

    MbeCreatorType _result;

    int resultType;
};

class SimpleCreator_GetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    SimpleCreator_GetBasisPoints_AsyncWorker(MbSimpleCreator *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SimpleCreator_GetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSimpleCreator *_underlying;

    MbControlData3D *cd;

    int resultType;
};

class SimpleCreator_SetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    SimpleCreator_SetBasisPoints_AsyncWorker(MbSimpleCreator *_underlying, Napi::Promise::Deferred const &d,
                                             const MbControlData3D &cd);
    virtual ~SimpleCreator_SetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSimpleCreator *_underlying;
    const MbControlData3D &cd;

    int resultType;
};

class SimpleCreator_GetBasisItems_AsyncWorker : public PromiseWorker
{
  public:
    SimpleCreator_GetBasisItems_AsyncWorker(MbSimpleCreator *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SimpleCreator_GetBasisItems_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSimpleCreator *_underlying;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class SimpleCreator_GetCreatorsCount_AsyncWorker : public PromiseWorker
{
  public:
    SimpleCreator_GetCreatorsCount_AsyncWorker(MbSimpleCreator *_underlying, Napi::Promise::Deferred const &d,
                                               MbeCreatorType ct);
    virtual ~SimpleCreator_GetCreatorsCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSimpleCreator *_underlying;
    MbeCreatorType ct;

    size_t _result;

    int resultType;
};

class SimpleCreator_GetYourNameMaker_AsyncWorker : public PromiseWorker
{
  public:
    SimpleCreator_GetYourNameMaker_AsyncWorker(MbSimpleCreator *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SimpleCreator_GetYourNameMaker_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSimpleCreator *_underlying;

    const MbSNameMaker *_result;

    int resultType;
};

class SimpleCreator_GetStatus_AsyncWorker : public PromiseWorker
{
  public:
    SimpleCreator_GetStatus_AsyncWorker(MbSimpleCreator *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SimpleCreator_GetStatus_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSimpleCreator *_underlying;

    MbeProcessState _result;

    int resultType;
};

class SimpleCreator_SetStatus_AsyncWorker : public PromiseWorker
{
  public:
    SimpleCreator_SetStatus_AsyncWorker(MbSimpleCreator *_underlying, Napi::Promise::Deferred const &d,
                                        MbeProcessState l);
    virtual ~SimpleCreator_SetStatus_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSimpleCreator *_underlying;
    MbeProcessState l;

    int resultType;
};

class SimpleCreator_CreateShell_AsyncWorker : public PromiseWorker
{
  public:
    SimpleCreator_CreateShell_AsyncWorker(MbSimpleCreator *_underlying, Napi::Promise::Deferred const &d,
                                          MbFaceShell *shell, MbeCopyMode sameShell);
    virtual ~SimpleCreator_CreateShell_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSimpleCreator *_underlying;
    MbFaceShell *shell;
    MbeCopyMode sameShell;

    bool success;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class SimpleCreator_GetMainName_AsyncWorker : public PromiseWorker
{
  public:
    SimpleCreator_GetMainName_AsyncWorker(MbSimpleCreator *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SimpleCreator_GetMainName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSimpleCreator *_underlying;

    SimpleName _result;

    int resultType;
};

class SimpleCreator_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    SimpleCreator_GetUseCount_AsyncWorker(MbSimpleCreator *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SimpleCreator_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSimpleCreator *_underlying;

    refcount_t _result;

    int resultType;
};

class SimpleCreator_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    SimpleCreator_AddRef_AsyncWorker(MbSimpleCreator *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SimpleCreator_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSimpleCreator *_underlying;

    int resultType;
};

#endif
