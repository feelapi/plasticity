// This is a generated file, modify: generate/templates/ShellHistory.h

#ifndef SHELLHISTORY_H
#define SHELLHISTORY_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <shell_history.h>

#include "Face.h"
#include "FaceShell.h"
#include "PromiseWorker.h"

class ShellHistory : public Napi::ObjectWrap<ShellHistory>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbShellHistory *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    ShellHistory(const Napi::CallbackInfo &info);

    Napi::Value InitOrigins(const Napi::CallbackInfo &info);
    Napi::Value InitOrigins_async(const Napi::CallbackInfo &info);
    Napi::Value SetOrigins(const Napi::CallbackInfo &info);
    Napi::Value SetOrigins_async(const Napi::CallbackInfo &info);
    Napi::Value SetOriginFaces(const Napi::CallbackInfo &info);
    Napi::Value SetOriginFaces_async(const Napi::CallbackInfo &info);
    Napi::Value SetCopyFaces(const Napi::CallbackInfo &info);
    Napi::Value SetCopyFaces_async(const Napi::CallbackInfo &info);
    Napi::Value Id(const Napi::CallbackInfo &info);

    MbShellHistory *_underlying;

  private:
};

class ShellHistory_InitOrigins_AsyncWorker : public PromiseWorker
{
  public:
    ShellHistory_InitOrigins_AsyncWorker(MbShellHistory *_underlying, Napi::Promise::Deferred const &d,
                                         const RPArray<MbFace> &origin);
    virtual ~ShellHistory_InitOrigins_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbShellHistory *_underlying;
    const RPArray<MbFace> &origin;

    int resultType;
};

class ShellHistory_SetOrigins_AsyncWorker : public PromiseWorker
{
  public:
    ShellHistory_SetOrigins_AsyncWorker(MbShellHistory *_underlying, Napi::Promise::Deferred const &d,
                                        MbFaceShell &shell);
    virtual ~ShellHistory_SetOrigins_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbShellHistory *_underlying;
    MbFaceShell &shell;

    int resultType;
};

class ShellHistory_SetOriginFaces_AsyncWorker : public PromiseWorker
{
  public:
    ShellHistory_SetOriginFaces_AsyncWorker(MbShellHistory *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ShellHistory_SetOriginFaces_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbShellHistory *_underlying;

    RPArray<MbFace> *_result;

    int resultType;
};

class ShellHistory_SetCopyFaces_AsyncWorker : public PromiseWorker
{
  public:
    ShellHistory_SetCopyFaces_AsyncWorker(MbShellHistory *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ShellHistory_SetCopyFaces_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbShellHistory *_underlying;

    RPArray<MbFace> *_result;

    int resultType;
};

#endif
