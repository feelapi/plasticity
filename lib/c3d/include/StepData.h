// This is a generated file, modify: generate/templates/StepData.h

#ifndef STEPDATA_H
#define STEPDATA_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <mb_data.h>

#include "PromiseWorker.h"

class StepData : public Napi::ObjectWrap<StepData>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbStepData *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    StepData(const Napi::CallbackInfo &info);

    Napi::Value SetSag(const Napi::CallbackInfo &info);
    Napi::Value SetSag_async(const Napi::CallbackInfo &info);
    Napi::Value SetAngle(const Napi::CallbackInfo &info);
    Napi::Value SetAngle_async(const Napi::CallbackInfo &info);
    Napi::Value SetLength(const Napi::CallbackInfo &info);
    Napi::Value SetLength_async(const Napi::CallbackInfo &info);
    Napi::Value SetMaxCount(const Napi::CallbackInfo &info);
    Napi::Value SetMaxCount_async(const Napi::CallbackInfo &info);
    Napi::Value GetSag(const Napi::CallbackInfo &info);
    Napi::Value GetSag_async(const Napi::CallbackInfo &info);
    Napi::Value GetAngle(const Napi::CallbackInfo &info);
    Napi::Value GetAngle_async(const Napi::CallbackInfo &info);
    Napi::Value GetLength(const Napi::CallbackInfo &info);
    Napi::Value GetLength_async(const Napi::CallbackInfo &info);
    Napi::Value SetStepType(const Napi::CallbackInfo &info);
    Napi::Value SetStepType_async(const Napi::CallbackInfo &info);
    Napi::Value Init(const Napi::CallbackInfo &info);
    Napi::Value Init_async(const Napi::CallbackInfo &info);
    Napi::Value Id(const Napi::CallbackInfo &info);

    MbStepData *_underlying;

  private:
};

class StepData_SetSag_AsyncWorker : public PromiseWorker
{
  public:
    StepData_SetSag_AsyncWorker(MbStepData *_underlying, Napi::Promise::Deferred const &d, double s);
    virtual ~StepData_SetSag_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbStepData *_underlying;
    double s;

    int resultType;
};

class StepData_SetAngle_AsyncWorker : public PromiseWorker
{
  public:
    StepData_SetAngle_AsyncWorker(MbStepData *_underlying, Napi::Promise::Deferred const &d, double a);
    virtual ~StepData_SetAngle_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbStepData *_underlying;
    double a;

    int resultType;
};

class StepData_SetLength_AsyncWorker : public PromiseWorker
{
  public:
    StepData_SetLength_AsyncWorker(MbStepData *_underlying, Napi::Promise::Deferred const &d, double l);
    virtual ~StepData_SetLength_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbStepData *_underlying;
    double l;

    int resultType;
};

class StepData_SetMaxCount_AsyncWorker : public PromiseWorker
{
  public:
    StepData_SetMaxCount_AsyncWorker(MbStepData *_underlying, Napi::Promise::Deferred const &d, size_t c);
    virtual ~StepData_SetMaxCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbStepData *_underlying;
    size_t c;

    int resultType;
};

class StepData_GetSag_AsyncWorker : public PromiseWorker
{
  public:
    StepData_GetSag_AsyncWorker(MbStepData *_underlying, Napi::Promise::Deferred const &d);
    virtual ~StepData_GetSag_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbStepData *_underlying;

    double _result;

    int resultType;
};

class StepData_GetAngle_AsyncWorker : public PromiseWorker
{
  public:
    StepData_GetAngle_AsyncWorker(MbStepData *_underlying, Napi::Promise::Deferred const &d);
    virtual ~StepData_GetAngle_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbStepData *_underlying;

    double _result;

    int resultType;
};

class StepData_GetLength_AsyncWorker : public PromiseWorker
{
  public:
    StepData_GetLength_AsyncWorker(MbStepData *_underlying, Napi::Promise::Deferred const &d);
    virtual ~StepData_GetLength_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbStepData *_underlying;

    double _result;

    int resultType;
};

class StepData_SetStepType_AsyncWorker : public PromiseWorker
{
  public:
    StepData_SetStepType_AsyncWorker(MbStepData *_underlying, Napi::Promise::Deferred const &d, MbeStepType t,
                                     bool add = true);
    virtual ~StepData_SetStepType_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbStepData *_underlying;
    MbeStepType t;
    bool add = true;

    int resultType;
};

class StepData_Init_AsyncWorker : public PromiseWorker
{
  public:
    StepData_Init_AsyncWorker(MbStepData *_underlying, Napi::Promise::Deferred const &d, MbeStepType t, double s,
                              double a, double l, size_t c = 0);
    virtual ~StepData_Init_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbStepData *_underlying;
    MbeStepType t;
    double s;
    double a;
    double l;
    size_t c = 0;

    int resultType;
};

#endif
