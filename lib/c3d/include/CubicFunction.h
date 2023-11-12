// This is a generated file, modify: generate/templates/CubicFunction.h

#ifndef CUBICFUNCTION_H
#define CUBICFUNCTION_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <func_cubic_function.h>

#include "Function.h"
#include "PromiseWorker.h"

class CubicFunction : public Napi::ObjectWrap<CubicFunction>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbCubicFunction *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    CubicFunction(const Napi::CallbackInfo &info);

    Napi::Value InsertValue(const Napi::CallbackInfo &info);
    Napi::Value InsertValue_async(const Napi::CallbackInfo &info);
    Napi::Value Id(const Napi::CallbackInfo &info);

    MbCubicFunction *_underlying;

  private:
};

class CubicFunction_InsertValue_AsyncWorker : public PromiseWorker
{
  public:
    CubicFunction_InsertValue_AsyncWorker(MbCubicFunction *_underlying, Napi::Promise::Deferred const &d, double t,
                                          double newValue);
    virtual ~CubicFunction_InsertValue_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCubicFunction *_underlying;
    double t;
    double newValue;

    bool _result;

    int resultType;
};

#endif
