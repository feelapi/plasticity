// This is a generated file, modify: generate/templates/ControlData3D.h

#ifndef CONTROLDATA3D_H
#define CONTROLDATA3D_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <mb_data.h>

#include "CartPoint3D.h"
#include "PromiseWorker.h"

class ControlData3D : public Napi::ObjectWrap<ControlData3D>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbControlData3D *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    ControlData3D(const Napi::CallbackInfo &info);

    Napi::Value Count(const Napi::CallbackInfo &info);
    Napi::Value Count_async(const Napi::CallbackInfo &info);
    Napi::Value GetPoint(const Napi::CallbackInfo &info);
    Napi::Value GetPoint_async(const Napi::CallbackInfo &info);
    Napi::Value SetPoint(const Napi::CallbackInfo &info);
    Napi::Value SetPoint_async(const Napi::CallbackInfo &info);
    Napi::Value TotalCount(const Napi::CallbackInfo &info);
    Napi::Value TotalCount_async(const Napi::CallbackInfo &info);
    Napi::Value ShareCount(const Napi::CallbackInfo &info);
    Napi::Value ShareCount_async(const Napi::CallbackInfo &info);
    Napi::Value ResetIndex(const Napi::CallbackInfo &info);
    Napi::Value ResetIndex_async(const Napi::CallbackInfo &info);
    Napi::Value Id(const Napi::CallbackInfo &info);

    MbControlData3D *_underlying;

  private:
};

class ControlData3D_Count_AsyncWorker : public PromiseWorker
{
  public:
    ControlData3D_Count_AsyncWorker(MbControlData3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ControlData3D_Count_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbControlData3D *_underlying;

    size_t _result;

    int resultType;
};

class ControlData3D_GetPoint_AsyncWorker : public PromiseWorker
{
  public:
    ControlData3D_GetPoint_AsyncWorker(MbControlData3D *_underlying, Napi::Promise::Deferred const &d, size_t i);
    virtual ~ControlData3D_GetPoint_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbControlData3D *_underlying;
    size_t i;

    MbCartPoint3D *p;

    int resultType;
};

class ControlData3D_SetPoint_AsyncWorker : public PromiseWorker
{
  public:
    ControlData3D_SetPoint_AsyncWorker(MbControlData3D *_underlying, Napi::Promise::Deferred const &d, size_t i,
                                       MbCartPoint3D &p);
    virtual ~ControlData3D_SetPoint_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbControlData3D *_underlying;
    size_t i;
    MbCartPoint3D &p;

    bool _result;

    int resultType;
};

class ControlData3D_TotalCount_AsyncWorker : public PromiseWorker
{
  public:
    ControlData3D_TotalCount_AsyncWorker(MbControlData3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ControlData3D_TotalCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbControlData3D *_underlying;

    size_t _result;

    int resultType;
};

class ControlData3D_ShareCount_AsyncWorker : public PromiseWorker
{
  public:
    ControlData3D_ShareCount_AsyncWorker(MbControlData3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ControlData3D_ShareCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbControlData3D *_underlying;

    size_t _result;

    int resultType;
};

class ControlData3D_ResetIndex_AsyncWorker : public PromiseWorker
{
  public:
    ControlData3D_ResetIndex_AsyncWorker(MbControlData3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~ControlData3D_ResetIndex_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbControlData3D *_underlying;

    int resultType;
};

#endif
