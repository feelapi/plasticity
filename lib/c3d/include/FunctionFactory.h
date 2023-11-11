// This is a generated file, modify: generate/templates/FunctionFactory.h

#ifndef FUNCTIONFACTORY_H
#define FUNCTIONFACTORY_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <function_factory.h>

#include "Function.h"
#include "PromiseWorker.h"

class FunctionFactory : public Napi::ObjectWrap<FunctionFactory>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbFunctionFactory *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    FunctionFactory(const Napi::CallbackInfo &info);

    Napi::Value CreateAnalyticalFunction(const Napi::CallbackInfo &info);
    Napi::Value CreateAnalyticalFunction_async(const Napi::CallbackInfo &info);
    Napi::Value Id(const Napi::CallbackInfo &info);

    MbFunctionFactory *_underlying;

  private:
};

class FunctionFactory_CreateAnalyticalFunction_AsyncWorker : public PromiseWorker
{
  public:
    FunctionFactory_CreateAnalyticalFunction_AsyncWorker(MbFunctionFactory *_underlying,
                                                         Napi::Promise::Deferred const &d, const c3d::string_t data,
                                                         const c3d::string_t argument, double tmin, double tmax);
    virtual ~FunctionFactory_CreateAnalyticalFunction_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFunctionFactory *_underlying;
    const c3d::string_t data;
    const c3d::string_t argument;
    double tmin;
    double tmax;

    MbFunction *_result;

    int resultType;
};

#endif
