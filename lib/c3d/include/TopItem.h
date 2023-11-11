// This is a generated file, modify: generate/templates/TopItem.h

#ifndef TOPITEM_H
#define TOPITEM_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <topology_item.h>

#include "RefItem.h"
#include "PromiseWorker.h"

class TopItem : public Napi::ObjectWrap<TopItem>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbTopItem *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    TopItem(const Napi::CallbackInfo &info);

    Napi::Value GetUseCount(const Napi::CallbackInfo &info);
    Napi::Value GetUseCount_async(const Napi::CallbackInfo &info);
    Napi::Value AddRef(const Napi::CallbackInfo &info);
    Napi::Value AddRef_async(const Napi::CallbackInfo &info);
    Napi::Value Id(const Napi::CallbackInfo &info);

    MbTopItem *_underlying;

    ~TopItem();

  private:
};

class TopItem_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    TopItem_GetUseCount_AsyncWorker(MbTopItem *_underlying, Napi::Promise::Deferred const &d);
    virtual ~TopItem_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTopItem *_underlying;

    refcount_t _result;

    int resultType;
};

class TopItem_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    TopItem_AddRef_AsyncWorker(MbTopItem *_underlying, Napi::Promise::Deferred const &d);
    virtual ~TopItem_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTopItem *_underlying;

    int resultType;
};

#endif
