// This is a generated file, modify: generate/templates/_DuplicationValues.h

#ifndef _DUPLICATIONVALUES_H
#define _DUPLICATIONVALUES_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <op_duplication_parameter.h>

#include "Matrix3D.h"
#include "PromiseWorker.h"

class _DuplicationValues : public Napi::ObjectWrap<_DuplicationValues>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, DuplicationValues *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    _DuplicationValues(const Napi::CallbackInfo &info);

    Napi::Value GenerateTransformMatrices(const Napi::CallbackInfo &info);
    Napi::Value GenerateTransformMatrices_async(const Napi::CallbackInfo &info);
    Napi::Value Id(const Napi::CallbackInfo &info);

    DuplicationValues *_underlying;

  private:
};

class _DuplicationValues_GenerateTransformMatrices_AsyncWorker : public PromiseWorker
{
  public:
    _DuplicationValues_GenerateTransformMatrices_AsyncWorker(DuplicationValues *_underlying,
                                                             Napi::Promise::Deferred const &d);
    virtual ~_DuplicationValues_GenerateTransformMatrices_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    DuplicationValues *_underlying;

    std::vector<MbMatrix3D> *matrices;

    int resultType;
};

#endif
