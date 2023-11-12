// This is a generated file, modify: generate/templates/_RevolutionValues.h

#ifndef _REVOLUTIONVALUES_H
#define _REVOLUTIONVALUES_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <op_swept_parameter.h>

#include "_SweptValuesAndSides.h"
#include "PromiseWorker.h"

class _RevolutionValues : public Napi::ObjectWrap<_RevolutionValues>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, RevolutionValues *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    _RevolutionValues(const Napi::CallbackInfo &info);

    Napi::Value CheckSelfInt(const Napi::CallbackInfo &info);
    Napi::Value CheckSelfInt_async(const Napi::CallbackInfo &info);
    Napi::Value SetCheckSelfInt(const Napi::CallbackInfo &info);
    Napi::Value SetCheckSelfInt_async(const Napi::CallbackInfo &info);
    Napi::Value Id(const Napi::CallbackInfo &info);

    RevolutionValues *_underlying;

  private:
    Napi::Value GetValue_shape(const Napi::CallbackInfo &info);
    void SetValue_shape(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_side1(const Napi::CallbackInfo &info);
    void SetValue_side1(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_side2(const Napi::CallbackInfo &info);
    void SetValue_side2(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_thickness1(const Napi::CallbackInfo &info);
    void SetValue_thickness1(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_thickness2(const Napi::CallbackInfo &info);
    void SetValue_thickness2(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_shellClosed(const Napi::CallbackInfo &info);
    void SetValue_shellClosed(const Napi::CallbackInfo &info, const Napi::Value &value);
};

class _RevolutionValues_CheckSelfInt_AsyncWorker : public PromiseWorker
{
  public:
    _RevolutionValues_CheckSelfInt_AsyncWorker(RevolutionValues *_underlying, Napi::Promise::Deferred const &d);
    virtual ~_RevolutionValues_CheckSelfInt_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    RevolutionValues *_underlying;

    bool _result;

    int resultType;
};

class _RevolutionValues_SetCheckSelfInt_AsyncWorker : public PromiseWorker
{
  public:
    _RevolutionValues_SetCheckSelfInt_AsyncWorker(RevolutionValues *_underlying, Napi::Promise::Deferred const &d,
                                                  bool c);
    virtual ~_RevolutionValues_SetCheckSelfInt_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    RevolutionValues *_underlying;
    bool c;

    int resultType;
};

#endif
