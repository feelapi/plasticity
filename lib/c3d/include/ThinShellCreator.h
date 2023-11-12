// This is a generated file, modify: generate/templates/ThinShellCreator.h

#ifndef THINSHELLCREATOR_H
#define THINSHELLCREATOR_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cr_thin_sheet.h>

#include "Creator.h"
#include "PromiseWorker.h"

class ThinShellCreator : public Napi::ObjectWrap<ThinShellCreator>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbThinShellCreator *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    ThinShellCreator(const Napi::CallbackInfo &info);

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

    MbThinShellCreator *_underlying;

    ~ThinShellCreator();

  private:
};

class ThinShellCreator_IsA_AsyncWorker : public PromiseWorker
{
  public:
    ThinShellCreator_IsA_AsyncWorker(MbThinShellCreator *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ThinShellCreator_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbThinShellCreator *_underlying;

    MbeCreatorType _result;

    int resultType;
};

class ThinShellCreator_Type_AsyncWorker : public PromiseWorker
{
  public:
    ThinShellCreator_Type_AsyncWorker(MbThinShellCreator *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ThinShellCreator_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbThinShellCreator *_underlying;

    MbeCreatorType _result;

    int resultType;
};

class ThinShellCreator_GetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    ThinShellCreator_GetBasisPoints_AsyncWorker(MbThinShellCreator *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ThinShellCreator_GetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbThinShellCreator *_underlying;

    MbControlData3D *cd;

    int resultType;
};

class ThinShellCreator_SetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    ThinShellCreator_SetBasisPoints_AsyncWorker(MbThinShellCreator *_underlying, Napi::Promise::Deferred const &d,
                                                const MbControlData3D &cd);
    virtual ~ThinShellCreator_SetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbThinShellCreator *_underlying;
    const MbControlData3D &cd;

    int resultType;
};

class ThinShellCreator_GetBasisItems_AsyncWorker : public PromiseWorker
{
  public:
    ThinShellCreator_GetBasisItems_AsyncWorker(MbThinShellCreator *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ThinShellCreator_GetBasisItems_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbThinShellCreator *_underlying;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class ThinShellCreator_GetCreatorsCount_AsyncWorker : public PromiseWorker
{
  public:
    ThinShellCreator_GetCreatorsCount_AsyncWorker(MbThinShellCreator *_underlying, Napi::Promise::Deferred const &d,
                                                  MbeCreatorType ct);
    virtual ~ThinShellCreator_GetCreatorsCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbThinShellCreator *_underlying;
    MbeCreatorType ct;

    size_t _result;

    int resultType;
};

class ThinShellCreator_GetYourNameMaker_AsyncWorker : public PromiseWorker
{
  public:
    ThinShellCreator_GetYourNameMaker_AsyncWorker(MbThinShellCreator *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ThinShellCreator_GetYourNameMaker_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbThinShellCreator *_underlying;

    const MbSNameMaker *_result;

    int resultType;
};

class ThinShellCreator_GetStatus_AsyncWorker : public PromiseWorker
{
  public:
    ThinShellCreator_GetStatus_AsyncWorker(MbThinShellCreator *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ThinShellCreator_GetStatus_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbThinShellCreator *_underlying;

    MbeProcessState _result;

    int resultType;
};

class ThinShellCreator_SetStatus_AsyncWorker : public PromiseWorker
{
  public:
    ThinShellCreator_SetStatus_AsyncWorker(MbThinShellCreator *_underlying, Napi::Promise::Deferred const &d,
                                           MbeProcessState l);
    virtual ~ThinShellCreator_SetStatus_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbThinShellCreator *_underlying;
    MbeProcessState l;

    int resultType;
};

class ThinShellCreator_CreateShell_AsyncWorker : public PromiseWorker
{
  public:
    ThinShellCreator_CreateShell_AsyncWorker(MbThinShellCreator *_underlying, Napi::Promise::Deferred const &d,
                                             MbFaceShell *shell, MbeCopyMode sameShell);
    virtual ~ThinShellCreator_CreateShell_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbThinShellCreator *_underlying;
    MbFaceShell *shell;
    MbeCopyMode sameShell;

    bool success;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class ThinShellCreator_GetMainName_AsyncWorker : public PromiseWorker
{
  public:
    ThinShellCreator_GetMainName_AsyncWorker(MbThinShellCreator *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ThinShellCreator_GetMainName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbThinShellCreator *_underlying;

    SimpleName _result;

    int resultType;
};

class ThinShellCreator_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    ThinShellCreator_GetUseCount_AsyncWorker(MbThinShellCreator *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ThinShellCreator_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbThinShellCreator *_underlying;

    refcount_t _result;

    int resultType;
};

class ThinShellCreator_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    ThinShellCreator_AddRef_AsyncWorker(MbThinShellCreator *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ThinShellCreator_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbThinShellCreator *_underlying;

    int resultType;
};

#endif
