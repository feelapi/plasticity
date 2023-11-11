// This is a generated file, modify: generate/templates/ReverseCreator.h

#ifndef REVERSECREATOR_H
#define REVERSECREATOR_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cr_simple_creator.h>

#include "Creator.h"
#include "PromiseWorker.h"

class ReverseCreator : public Napi::ObjectWrap<ReverseCreator>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbReverseCreator *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    ReverseCreator(const Napi::CallbackInfo &info);

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

    MbReverseCreator *_underlying;

    ~ReverseCreator();

  private:
};

class ReverseCreator_IsA_AsyncWorker : public PromiseWorker
{
  public:
    ReverseCreator_IsA_AsyncWorker(MbReverseCreator *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ReverseCreator_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbReverseCreator *_underlying;

    MbeCreatorType _result;

    int resultType;
};

class ReverseCreator_Type_AsyncWorker : public PromiseWorker
{
  public:
    ReverseCreator_Type_AsyncWorker(MbReverseCreator *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ReverseCreator_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbReverseCreator *_underlying;

    MbeCreatorType _result;

    int resultType;
};

class ReverseCreator_GetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    ReverseCreator_GetBasisPoints_AsyncWorker(MbReverseCreator *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ReverseCreator_GetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbReverseCreator *_underlying;

    MbControlData3D *cd;

    int resultType;
};

class ReverseCreator_SetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    ReverseCreator_SetBasisPoints_AsyncWorker(MbReverseCreator *_underlying, Napi::Promise::Deferred const &d,
                                              const MbControlData3D &cd);
    virtual ~ReverseCreator_SetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbReverseCreator *_underlying;
    const MbControlData3D &cd;

    int resultType;
};

class ReverseCreator_GetBasisItems_AsyncWorker : public PromiseWorker
{
  public:
    ReverseCreator_GetBasisItems_AsyncWorker(MbReverseCreator *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ReverseCreator_GetBasisItems_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbReverseCreator *_underlying;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class ReverseCreator_GetCreatorsCount_AsyncWorker : public PromiseWorker
{
  public:
    ReverseCreator_GetCreatorsCount_AsyncWorker(MbReverseCreator *_underlying, Napi::Promise::Deferred const &d,
                                                MbeCreatorType ct);
    virtual ~ReverseCreator_GetCreatorsCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbReverseCreator *_underlying;
    MbeCreatorType ct;

    size_t _result;

    int resultType;
};

class ReverseCreator_GetYourNameMaker_AsyncWorker : public PromiseWorker
{
  public:
    ReverseCreator_GetYourNameMaker_AsyncWorker(MbReverseCreator *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ReverseCreator_GetYourNameMaker_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbReverseCreator *_underlying;

    const MbSNameMaker *_result;

    int resultType;
};

class ReverseCreator_GetStatus_AsyncWorker : public PromiseWorker
{
  public:
    ReverseCreator_GetStatus_AsyncWorker(MbReverseCreator *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ReverseCreator_GetStatus_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbReverseCreator *_underlying;

    MbeProcessState _result;

    int resultType;
};

class ReverseCreator_SetStatus_AsyncWorker : public PromiseWorker
{
  public:
    ReverseCreator_SetStatus_AsyncWorker(MbReverseCreator *_underlying, Napi::Promise::Deferred const &d,
                                         MbeProcessState l);
    virtual ~ReverseCreator_SetStatus_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbReverseCreator *_underlying;
    MbeProcessState l;

    int resultType;
};

class ReverseCreator_CreateShell_AsyncWorker : public PromiseWorker
{
  public:
    ReverseCreator_CreateShell_AsyncWorker(MbReverseCreator *_underlying, Napi::Promise::Deferred const &d,
                                           MbFaceShell *shell, MbeCopyMode sameShell);
    virtual ~ReverseCreator_CreateShell_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbReverseCreator *_underlying;
    MbFaceShell *shell;
    MbeCopyMode sameShell;

    bool success;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class ReverseCreator_GetMainName_AsyncWorker : public PromiseWorker
{
  public:
    ReverseCreator_GetMainName_AsyncWorker(MbReverseCreator *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ReverseCreator_GetMainName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbReverseCreator *_underlying;

    SimpleName _result;

    int resultType;
};

class ReverseCreator_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    ReverseCreator_GetUseCount_AsyncWorker(MbReverseCreator *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ReverseCreator_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbReverseCreator *_underlying;

    refcount_t _result;

    int resultType;
};

class ReverseCreator_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    ReverseCreator_AddRef_AsyncWorker(MbReverseCreator *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ReverseCreator_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbReverseCreator *_underlying;

    int resultType;
};

#endif
