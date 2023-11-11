// This is a generated file, modify: generate/templates/ExtensionShell.h

#ifndef EXTENSIONSHELL_H
#define EXTENSIONSHELL_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cr_extension_shell.h>

#include "Creator.h"
#include "PromiseWorker.h"

class ExtensionShell : public Napi::ObjectWrap<ExtensionShell>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbExtensionShell *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    ExtensionShell(const Napi::CallbackInfo &info);

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

    MbExtensionShell *_underlying;

    ~ExtensionShell();

  private:
};

class ExtensionShell_IsA_AsyncWorker : public PromiseWorker
{
  public:
    ExtensionShell_IsA_AsyncWorker(MbExtensionShell *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ExtensionShell_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbExtensionShell *_underlying;

    MbeCreatorType _result;

    int resultType;
};

class ExtensionShell_Type_AsyncWorker : public PromiseWorker
{
  public:
    ExtensionShell_Type_AsyncWorker(MbExtensionShell *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ExtensionShell_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbExtensionShell *_underlying;

    MbeCreatorType _result;

    int resultType;
};

class ExtensionShell_GetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    ExtensionShell_GetBasisPoints_AsyncWorker(MbExtensionShell *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ExtensionShell_GetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbExtensionShell *_underlying;

    MbControlData3D *cd;

    int resultType;
};

class ExtensionShell_SetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    ExtensionShell_SetBasisPoints_AsyncWorker(MbExtensionShell *_underlying, Napi::Promise::Deferred const &d,
                                              const MbControlData3D &cd);
    virtual ~ExtensionShell_SetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbExtensionShell *_underlying;
    const MbControlData3D &cd;

    int resultType;
};

class ExtensionShell_GetBasisItems_AsyncWorker : public PromiseWorker
{
  public:
    ExtensionShell_GetBasisItems_AsyncWorker(MbExtensionShell *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ExtensionShell_GetBasisItems_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbExtensionShell *_underlying;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class ExtensionShell_GetCreatorsCount_AsyncWorker : public PromiseWorker
{
  public:
    ExtensionShell_GetCreatorsCount_AsyncWorker(MbExtensionShell *_underlying, Napi::Promise::Deferred const &d,
                                                MbeCreatorType ct);
    virtual ~ExtensionShell_GetCreatorsCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbExtensionShell *_underlying;
    MbeCreatorType ct;

    size_t _result;

    int resultType;
};

class ExtensionShell_GetYourNameMaker_AsyncWorker : public PromiseWorker
{
  public:
    ExtensionShell_GetYourNameMaker_AsyncWorker(MbExtensionShell *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ExtensionShell_GetYourNameMaker_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbExtensionShell *_underlying;

    const MbSNameMaker *_result;

    int resultType;
};

class ExtensionShell_GetStatus_AsyncWorker : public PromiseWorker
{
  public:
    ExtensionShell_GetStatus_AsyncWorker(MbExtensionShell *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ExtensionShell_GetStatus_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbExtensionShell *_underlying;

    MbeProcessState _result;

    int resultType;
};

class ExtensionShell_SetStatus_AsyncWorker : public PromiseWorker
{
  public:
    ExtensionShell_SetStatus_AsyncWorker(MbExtensionShell *_underlying, Napi::Promise::Deferred const &d,
                                         MbeProcessState l);
    virtual ~ExtensionShell_SetStatus_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbExtensionShell *_underlying;
    MbeProcessState l;

    int resultType;
};

class ExtensionShell_CreateShell_AsyncWorker : public PromiseWorker
{
  public:
    ExtensionShell_CreateShell_AsyncWorker(MbExtensionShell *_underlying, Napi::Promise::Deferred const &d,
                                           MbFaceShell *shell, MbeCopyMode sameShell);
    virtual ~ExtensionShell_CreateShell_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbExtensionShell *_underlying;
    MbFaceShell *shell;
    MbeCopyMode sameShell;

    bool success;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class ExtensionShell_GetMainName_AsyncWorker : public PromiseWorker
{
  public:
    ExtensionShell_GetMainName_AsyncWorker(MbExtensionShell *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ExtensionShell_GetMainName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbExtensionShell *_underlying;

    SimpleName _result;

    int resultType;
};

class ExtensionShell_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    ExtensionShell_GetUseCount_AsyncWorker(MbExtensionShell *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ExtensionShell_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbExtensionShell *_underlying;

    refcount_t _result;

    int resultType;
};

class ExtensionShell_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    ExtensionShell_AddRef_AsyncWorker(MbExtensionShell *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ExtensionShell_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbExtensionShell *_underlying;

    int resultType;
};

#endif
