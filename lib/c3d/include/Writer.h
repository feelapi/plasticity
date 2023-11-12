// This is a generated file, modify: generate/templates/Writer.h

#ifndef WRITER_H
#define WRITER_H

#include <napi.h>
#include <vector>

#include <model.h>

#include "ModelAddon.h"
#include "Model.h"

#include "PromiseWorker.h"

class Writer : public Napi::ObjectWrap<Writer>
{
  public:
    static Napi::Object Init(Napi::Env env, Napi::Object exports);

    static Napi::Value WriteItems(const Napi::CallbackInfo &info);
    static Napi::Value WriteItems_async(const Napi::CallbackInfo &info);
    static Napi::Value ReadItems(const Napi::CallbackInfo &info);
    static Napi::Value ReadItems_async(const Napi::CallbackInfo &info);
};

class Writer_WriteItems_AsyncWorker : public PromiseWorker
{
  public:
    Writer_WriteItems_AsyncWorker(Napi::Promise::Deferred const &d, const MbModel &model);
    virtual ~Writer_WriteItems_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    const MbModel &model;

    size_t size;

    const char *memory;

    int resultType;
};

class Writer_ReadItems_AsyncWorker : public PromiseWorker
{
  public:
    Writer_ReadItems_AsyncWorker(Napi::Promise::Deferred const &d, const void *memory);
    virtual ~Writer_ReadItems_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    const void *memory;

    MbModel *model;

    int resultType;
};

#endif
