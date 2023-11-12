// This is a generated file, modify: generate/templates/_SweptValuesAndSides.h

#ifndef _SWEPTVALUESANDSIDES_H
#define _SWEPTVALUESANDSIDES_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <op_swept_parameter.h>

#include "_SweptValues.h"
#include "SweptSide.h"
#include "PromiseWorker.h"

class _SweptValuesAndSides : public Napi::ObjectWrap<_SweptValuesAndSides>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, SweptValuesAndSides raw);
    static Napi::Function GetConstructor(Napi::Env env);
    _SweptValuesAndSides(const Napi::CallbackInfo &info);

    Napi::Value CheckSelfInt(const Napi::CallbackInfo &info);
    Napi::Value CheckSelfInt_async(const Napi::CallbackInfo &info);
    Napi::Value SetCheckSelfInt(const Napi::CallbackInfo &info);
    Napi::Value SetCheckSelfInt_async(const Napi::CallbackInfo &info);

    SweptValuesAndSides _underlying;

  private:
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

class _SweptValuesAndSides_CheckSelfInt_AsyncWorker : public PromiseWorker
{
  public:
    _SweptValuesAndSides_CheckSelfInt_AsyncWorker(SweptValuesAndSides _underlying, Napi::Promise::Deferred const &d);
    virtual ~_SweptValuesAndSides_CheckSelfInt_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    SweptValuesAndSides _underlying;

    bool _result;

    int resultType;
};

class _SweptValuesAndSides_SetCheckSelfInt_AsyncWorker : public PromiseWorker
{
  public:
    _SweptValuesAndSides_SetCheckSelfInt_AsyncWorker(SweptValuesAndSides _underlying, Napi::Promise::Deferred const &d,
                                                     bool c);
    virtual ~_SweptValuesAndSides_SetCheckSelfInt_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    SweptValuesAndSides _underlying;
    bool c;

    int resultType;
};

#endif
