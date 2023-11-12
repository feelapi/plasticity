// This is a generated file, modify: generate/templates/_SolidDuplicate.h

#ifndef _SOLIDDUPLICATE_H
#define _SOLIDDUPLICATE_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <model_item.h>

#include "SolidPool.h"
#include "Solid.h"
#include "PromiseWorker.h"

class _SolidDuplicate : public Napi::ObjectWrap<_SolidDuplicate>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, SolidDuplicate *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    _SolidDuplicate(const Napi::CallbackInfo &info);

    Napi::Value GetBuffers(const Napi::CallbackInfo &info);
    Napi::Value GetBuffers_async(const Napi::CallbackInfo &info);
    Napi::Value GetCopy(const Napi::CallbackInfo &info);
    Napi::Value GetCopy_async(const Napi::CallbackInfo &info);
    Napi::Value Id(const Napi::CallbackInfo &info);

    SolidDuplicate *_underlying;

  private:
};

class _SolidDuplicate_GetCopy_AsyncWorker : public PromiseWorker
{
  public:
    _SolidDuplicate_GetCopy_AsyncWorker(SolidDuplicate *_underlying, Napi::Promise::Deferred const &d);
    virtual ~_SolidDuplicate_GetCopy_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    SolidDuplicate *_underlying;

    MbSolid *_result;

    int resultType;
};

#endif
