// This is a generated file, modify: generate/templates/_DuplicationMeshValues.h

#ifndef _DUPLICATIONMESHVALUES_H
#define _DUPLICATIONMESHVALUES_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <op_duplication_parameter.h>

#include "_DuplicationValues.h"
#include "Vector3D.h"
#include "CartPoint3D.h"
#include "PromiseWorker.h"

class _DuplicationMeshValues : public Napi::ObjectWrap<_DuplicationMeshValues>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, DuplicationMeshValues *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    _DuplicationMeshValues(const Napi::CallbackInfo &info);

    Napi::Value GenerateTransformMatrices(const Napi::CallbackInfo &info);
    Napi::Value GenerateTransformMatrices_async(const Napi::CallbackInfo &info);
    Napi::Value Id(const Napi::CallbackInfo &info);

    DuplicationMeshValues *_underlying;

  private:
};

class _DuplicationMeshValues_GenerateTransformMatrices_AsyncWorker : public PromiseWorker
{
  public:
    _DuplicationMeshValues_GenerateTransformMatrices_AsyncWorker(DuplicationMeshValues *_underlying,
                                                                 Napi::Promise::Deferred const &d);
    virtual ~_DuplicationMeshValues_GenerateTransformMatrices_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    DuplicationMeshValues *_underlying;

    std::vector<MbMatrix3D> *matrices;

    int resultType;
};

#endif
