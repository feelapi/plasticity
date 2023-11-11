// This is a generated file, modify: generate/templates/MergingFlags.h

#ifndef MERGINGFLAGS_H
#define MERGINGFLAGS_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <op_boolean_flags.h>

#include "PromiseWorker.h"

class MergingFlags : public Napi::ObjectWrap<MergingFlags>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbMergingFlags *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    MergingFlags(const Napi::CallbackInfo &info);

    Napi::Value SetMergingFaces(const Napi::CallbackInfo &info);
    Napi::Value SetMergingFaces_async(const Napi::CallbackInfo &info);
    Napi::Value SetMergingEdges(const Napi::CallbackInfo &info);
    Napi::Value SetMergingEdges_async(const Napi::CallbackInfo &info);
    Napi::Value Id(const Napi::CallbackInfo &info);

    MbMergingFlags *_underlying;

  private:
};

class MergingFlags_SetMergingFaces_AsyncWorker : public PromiseWorker
{
  public:
    MergingFlags_SetMergingFaces_AsyncWorker(MbMergingFlags *_underlying, Napi::Promise::Deferred const &d, bool s);
    virtual ~MergingFlags_SetMergingFaces_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMergingFlags *_underlying;
    bool s;

    int resultType;
};

class MergingFlags_SetMergingEdges_AsyncWorker : public PromiseWorker
{
  public:
    MergingFlags_SetMergingEdges_AsyncWorker(MbMergingFlags *_underlying, Napi::Promise::Deferred const &d, bool s);
    virtual ~MergingFlags_SetMergingEdges_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMergingFlags *_underlying;
    bool s;

    int resultType;
};

#endif
