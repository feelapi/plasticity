// This is a generated file, modify: generate/templates/_TransformValues.h

#ifndef _TRANSFORMVALUES_H
#define _TRANSFORMVALUES_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <op_shell_parameter.h>

#include "Matrix3D.h"
#include "CartPoint3D.h"
#include "Axis3D.h"
#include "Matrix3D.h"
#include "PromiseWorker.h"

class _TransformValues : public Napi::ObjectWrap<_TransformValues>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, TransformValues *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    _TransformValues(const Napi::CallbackInfo &info);

    Napi::Value Move(const Napi::CallbackInfo &info);
    Napi::Value Move_async(const Napi::CallbackInfo &info);
    Napi::Value Rotate(const Napi::CallbackInfo &info);
    Napi::Value Rotate_async(const Napi::CallbackInfo &info);
    Napi::Value GetMatrix(const Napi::CallbackInfo &info);
    Napi::Value GetMatrix_async(const Napi::CallbackInfo &info);
    Napi::Value SetFixed(const Napi::CallbackInfo &info);
    Napi::Value SetFixed_async(const Napi::CallbackInfo &info);
    Napi::Value SetFixedPoint(const Napi::CallbackInfo &info);
    Napi::Value SetFixedPoint_async(const Napi::CallbackInfo &info);
    Napi::Value Id(const Napi::CallbackInfo &info);

    TransformValues *_underlying;

  private:
};

class _TransformValues_Move_AsyncWorker : public PromiseWorker
{
  public:
    _TransformValues_Move_AsyncWorker(TransformValues *_underlying, Napi::Promise::Deferred const &d,
                                      const MbVector3D &to);
    virtual ~_TransformValues_Move_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    TransformValues *_underlying;
    const MbVector3D &to;

    int resultType;
};

class _TransformValues_Rotate_AsyncWorker : public PromiseWorker
{
  public:
    _TransformValues_Rotate_AsyncWorker(TransformValues *_underlying, Napi::Promise::Deferred const &d,
                                        const MbAxis3D &axis, double ang);
    virtual ~_TransformValues_Rotate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    TransformValues *_underlying;
    const MbAxis3D &axis;
    double ang;

    int resultType;
};

class _TransformValues_GetMatrix_AsyncWorker : public PromiseWorker
{
  public:
    _TransformValues_GetMatrix_AsyncWorker(TransformValues *_underlying, Napi::Promise::Deferred const &d);
    virtual ~_TransformValues_GetMatrix_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    TransformValues *_underlying;

    const MbMatrix3D *_result;

    int resultType;
};

class _TransformValues_SetFixed_AsyncWorker : public PromiseWorker
{
  public:
    _TransformValues_SetFixed_AsyncWorker(TransformValues *_underlying, Napi::Promise::Deferred const &d, bool b);
    virtual ~_TransformValues_SetFixed_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    TransformValues *_underlying;
    bool b;

    int resultType;
};

class _TransformValues_SetFixedPoint_AsyncWorker : public PromiseWorker
{
  public:
    _TransformValues_SetFixedPoint_AsyncWorker(TransformValues *_underlying, Napi::Promise::Deferred const &d);
    virtual ~_TransformValues_SetFixedPoint_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    TransformValues *_underlying;

    MbCartPoint3D *_result;

    int resultType;
};

#endif
