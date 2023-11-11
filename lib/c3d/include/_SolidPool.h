// This is a generated file, modify: generate/templates/_SolidPool.h

#ifndef _SOLIDPOOL_H
#define _SOLIDPOOL_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <model_item.h>

#include "Solid.h"
#include "SolidPool.h"
#include "_SolidDuplicate.h"
#include "PromiseWorker.h"

class _SolidPool : public Napi::ObjectWrap<_SolidPool>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, SolidPool *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    _SolidPool(const Napi::CallbackInfo &info);

    Napi::Value Alloc(const Napi::CallbackInfo &info);
    Napi::Value Alloc_async(const Napi::CallbackInfo &info);
    Napi::Value Pop(const Napi::CallbackInfo &info);
    Napi::Value Pop_async(const Napi::CallbackInfo &info);
    Napi::Value Count(const Napi::CallbackInfo &info);
    Napi::Value Count_async(const Napi::CallbackInfo &info);
    Napi::Value Id(const Napi::CallbackInfo &info);

    SolidPool *_underlying;

  private:
};

class _SolidPool_Alloc_AsyncWorker : public PromiseWorker
{
  public:
    _SolidPool_Alloc_AsyncWorker(SolidPool *_underlying, Napi::Promise::Deferred const &d, size_t n);
    virtual ~_SolidPool_Alloc_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    SolidPool *_underlying;
    size_t n;

    int resultType;
};

class _SolidPool_Pop_AsyncWorker : public PromiseWorker
{
  public:
    _SolidPool_Pop_AsyncWorker(SolidPool *_underlying, Napi::Promise::Deferred const &d);
    virtual ~_SolidPool_Pop_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    SolidPool *_underlying;

    SolidDuplicate *_result;

    int resultType;
};

class _SolidPool_Count_AsyncWorker : public PromiseWorker
{
  public:
    _SolidPool_Count_AsyncWorker(SolidPool *_underlying, Napi::Promise::Deferred const &d);
    virtual ~_SolidPool_Count_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    SolidPool *_underlying;

    size_t _result;

    int resultType;
};

#endif
