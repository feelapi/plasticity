// This is a generated file, modify: generate/templates/NameMaker.h

#ifndef NAMEMAKER_H
#define NAMEMAKER_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <name_item.h>

#include "RefItem.h"
#include "TopologyItem.h"
#include "PromiseWorker.h"

class NameMaker : public Napi::ObjectWrap<NameMaker>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbNameMaker *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    NameMaker(const Napi::CallbackInfo &info);

    Napi::Value IsChild(const Napi::CallbackInfo &info);
    Napi::Value IsChild_async(const Napi::CallbackInfo &info);
    Napi::Value GetMainName(const Napi::CallbackInfo &info);
    Napi::Value GetMainName_async(const Napi::CallbackInfo &info);
    Napi::Value GetUseCount(const Napi::CallbackInfo &info);
    Napi::Value GetUseCount_async(const Napi::CallbackInfo &info);
    Napi::Value AddRef(const Napi::CallbackInfo &info);
    Napi::Value AddRef_async(const Napi::CallbackInfo &info);
    Napi::Value Id(const Napi::CallbackInfo &info);

    MbNameMaker *_underlying;

    ~NameMaker();

  private:
};

class NameMaker_IsChild_AsyncWorker : public PromiseWorker
{
  public:
    NameMaker_IsChild_AsyncWorker(MbNameMaker *_underlying, Napi::Promise::Deferred const &d, const MbTopologyItem &t);
    virtual ~NameMaker_IsChild_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNameMaker *_underlying;
    const MbTopologyItem &t;

    bool _result;

    int resultType;
};

class NameMaker_GetMainName_AsyncWorker : public PromiseWorker
{
  public:
    NameMaker_GetMainName_AsyncWorker(MbNameMaker *_underlying, Napi::Promise::Deferred const &d);
    virtual ~NameMaker_GetMainName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNameMaker *_underlying;

    SimpleName _result;

    int resultType;
};

class NameMaker_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    NameMaker_GetUseCount_AsyncWorker(MbNameMaker *_underlying, Napi::Promise::Deferred const &d);
    virtual ~NameMaker_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNameMaker *_underlying;

    refcount_t _result;

    int resultType;
};

class NameMaker_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    NameMaker_AddRef_AsyncWorker(MbNameMaker *_underlying, Napi::Promise::Deferred const &d);
    virtual ~NameMaker_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbNameMaker *_underlying;

    int resultType;
};

#endif
