// This is a generated file, modify: generate/templates/ShellSolid.h

#ifndef SHELLSOLID_H
#define SHELLSOLID_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cr_thin_shell_solid.h>

#include "Creator.h"
#include "PromiseWorker.h"

class ShellSolid : public Napi::ObjectWrap<ShellSolid>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbShellSolid *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    ShellSolid(const Napi::CallbackInfo &info);

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

    MbShellSolid *_underlying;

    ~ShellSolid();

  private:
};

class ShellSolid_IsA_AsyncWorker : public PromiseWorker
{
  public:
    ShellSolid_IsA_AsyncWorker(MbShellSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ShellSolid_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbShellSolid *_underlying;

    MbeCreatorType _result;

    int resultType;
};

class ShellSolid_Type_AsyncWorker : public PromiseWorker
{
  public:
    ShellSolid_Type_AsyncWorker(MbShellSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ShellSolid_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbShellSolid *_underlying;

    MbeCreatorType _result;

    int resultType;
};

class ShellSolid_GetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    ShellSolid_GetBasisPoints_AsyncWorker(MbShellSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ShellSolid_GetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbShellSolid *_underlying;

    MbControlData3D *cd;

    int resultType;
};

class ShellSolid_SetBasisPoints_AsyncWorker : public PromiseWorker
{
  public:
    ShellSolid_SetBasisPoints_AsyncWorker(MbShellSolid *_underlying, Napi::Promise::Deferred const &d,
                                          const MbControlData3D &cd);
    virtual ~ShellSolid_SetBasisPoints_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbShellSolid *_underlying;
    const MbControlData3D &cd;

    int resultType;
};

class ShellSolid_GetBasisItems_AsyncWorker : public PromiseWorker
{
  public:
    ShellSolid_GetBasisItems_AsyncWorker(MbShellSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ShellSolid_GetBasisItems_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbShellSolid *_underlying;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class ShellSolid_GetCreatorsCount_AsyncWorker : public PromiseWorker
{
  public:
    ShellSolid_GetCreatorsCount_AsyncWorker(MbShellSolid *_underlying, Napi::Promise::Deferred const &d,
                                            MbeCreatorType ct);
    virtual ~ShellSolid_GetCreatorsCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbShellSolid *_underlying;
    MbeCreatorType ct;

    size_t _result;

    int resultType;
};

class ShellSolid_GetYourNameMaker_AsyncWorker : public PromiseWorker
{
  public:
    ShellSolid_GetYourNameMaker_AsyncWorker(MbShellSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ShellSolid_GetYourNameMaker_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbShellSolid *_underlying;

    const MbSNameMaker *_result;

    int resultType;
};

class ShellSolid_GetStatus_AsyncWorker : public PromiseWorker
{
  public:
    ShellSolid_GetStatus_AsyncWorker(MbShellSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ShellSolid_GetStatus_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbShellSolid *_underlying;

    MbeProcessState _result;

    int resultType;
};

class ShellSolid_SetStatus_AsyncWorker : public PromiseWorker
{
  public:
    ShellSolid_SetStatus_AsyncWorker(MbShellSolid *_underlying, Napi::Promise::Deferred const &d, MbeProcessState l);
    virtual ~ShellSolid_SetStatus_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbShellSolid *_underlying;
    MbeProcessState l;

    int resultType;
};

class ShellSolid_CreateShell_AsyncWorker : public PromiseWorker
{
  public:
    ShellSolid_CreateShell_AsyncWorker(MbShellSolid *_underlying, Napi::Promise::Deferred const &d, MbFaceShell *shell,
                                       MbeCopyMode sameShell);
    virtual ~ShellSolid_CreateShell_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbShellSolid *_underlying;
    MbFaceShell *shell;
    MbeCopyMode sameShell;

    bool success;

    RPArray<MbSpaceItem> *items;

    int resultType;
};

class ShellSolid_GetMainName_AsyncWorker : public PromiseWorker
{
  public:
    ShellSolid_GetMainName_AsyncWorker(MbShellSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ShellSolid_GetMainName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbShellSolid *_underlying;

    SimpleName _result;

    int resultType;
};

class ShellSolid_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    ShellSolid_GetUseCount_AsyncWorker(MbShellSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ShellSolid_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbShellSolid *_underlying;

    refcount_t _result;

    int resultType;
};

class ShellSolid_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    ShellSolid_AddRef_AsyncWorker(MbShellSolid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ShellSolid_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbShellSolid *_underlying;

    int resultType;
};

#endif
