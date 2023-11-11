// This is a generated file, modify: generate/templates/_EvolutionValues.h

#ifndef _EVOLUTIONVALUES_H
#define _EVOLUTIONVALUES_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <op_swept_parameter.h>

#include "_SweptValues.h"
#include "PromiseWorker.h"

class _EvolutionValues : public Napi::ObjectWrap<_EvolutionValues>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, EvolutionValues *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    _EvolutionValues(const Napi::CallbackInfo &info);

    Napi::Value SetParallel(const Napi::CallbackInfo &info);
    Napi::Value SetParallel_async(const Napi::CallbackInfo &info);
    Napi::Value SetKeepingAngle(const Napi::CallbackInfo &info);
    Napi::Value SetKeepingAngle_async(const Napi::CallbackInfo &info);
    Napi::Value SetOrthogonal(const Napi::CallbackInfo &info);
    Napi::Value SetOrthogonal_async(const Napi::CallbackInfo &info);
    Napi::Value CheckSelfInt(const Napi::CallbackInfo &info);
    Napi::Value CheckSelfInt_async(const Napi::CallbackInfo &info);
    Napi::Value SetCheckSelfInt(const Napi::CallbackInfo &info);
    Napi::Value SetCheckSelfInt_async(const Napi::CallbackInfo &info);
    Napi::Value Id(const Napi::CallbackInfo &info);

    EvolutionValues *_underlying;

  private:
    Napi::Value GetValue_range(const Napi::CallbackInfo &info);
    void SetValue_range(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_thickness1(const Napi::CallbackInfo &info);
    void SetValue_thickness1(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_thickness2(const Napi::CallbackInfo &info);
    void SetValue_thickness2(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_shellClosed(const Napi::CallbackInfo &info);
    void SetValue_shellClosed(const Napi::CallbackInfo &info, const Napi::Value &value);
};

class _EvolutionValues_SetParallel_AsyncWorker : public PromiseWorker
{
  public:
    _EvolutionValues_SetParallel_AsyncWorker(EvolutionValues *_underlying, Napi::Promise::Deferred const &d);
    virtual ~_EvolutionValues_SetParallel_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    EvolutionValues *_underlying;

    int resultType;
};

class _EvolutionValues_SetKeepingAngle_AsyncWorker : public PromiseWorker
{
  public:
    _EvolutionValues_SetKeepingAngle_AsyncWorker(EvolutionValues *_underlying, Napi::Promise::Deferred const &d);
    virtual ~_EvolutionValues_SetKeepingAngle_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    EvolutionValues *_underlying;

    int resultType;
};

class _EvolutionValues_SetOrthogonal_AsyncWorker : public PromiseWorker
{
  public:
    _EvolutionValues_SetOrthogonal_AsyncWorker(EvolutionValues *_underlying, Napi::Promise::Deferred const &d);
    virtual ~_EvolutionValues_SetOrthogonal_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    EvolutionValues *_underlying;

    int resultType;
};

class _EvolutionValues_CheckSelfInt_AsyncWorker : public PromiseWorker
{
  public:
    _EvolutionValues_CheckSelfInt_AsyncWorker(EvolutionValues *_underlying, Napi::Promise::Deferred const &d);
    virtual ~_EvolutionValues_CheckSelfInt_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    EvolutionValues *_underlying;

    bool _result;

    int resultType;
};

class _EvolutionValues_SetCheckSelfInt_AsyncWorker : public PromiseWorker
{
  public:
    _EvolutionValues_SetCheckSelfInt_AsyncWorker(EvolutionValues *_underlying, Napi::Promise::Deferred const &d,
                                                 bool c);
    virtual ~_EvolutionValues_SetCheckSelfInt_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    EvolutionValues *_underlying;
    bool c;

    int resultType;
};

#endif
