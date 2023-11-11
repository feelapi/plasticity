// This is a generated file, modify: generate/templates/_ExtensionValues.h

#ifndef _EXTENSIONVALUES_H
#define _EXTENSIONVALUES_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <op_shell_parameter.h>

#include "CartPoint3D.h"
#include "Vector3D.h"
#include "FaceShell.h"
#include "Face.h"
#include "Solid.h"
#include "PromiseWorker.h"

class _ExtensionValues : public Napi::ObjectWrap<_ExtensionValues>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, ExtensionValues *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    _ExtensionValues(const Napi::CallbackInfo &info);

    Napi::Value InitByDistance(const Napi::CallbackInfo &info);
    Napi::Value InitByDistance_async(const Napi::CallbackInfo &info);
    Napi::Value InitByVertex(const Napi::CallbackInfo &info);
    Napi::Value InitByVertex_async(const Napi::CallbackInfo &info);
    Napi::Value InitByShell(const Napi::CallbackInfo &info);
    Napi::Value InitByShell_async(const Napi::CallbackInfo &info);
    Napi::Value Id(const Napi::CallbackInfo &info);

    ExtensionValues *_underlying;

  private:
    Napi::Value GetValue_type(const Napi::CallbackInfo &info);
    void SetValue_type(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_way(const Napi::CallbackInfo &info);
    void SetValue_way(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_kind(const Napi::CallbackInfo &info);
    void SetValue_kind(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_point(const Napi::CallbackInfo &info);
    void SetValue_point(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_direction(const Napi::CallbackInfo &info);
    void SetValue_direction(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_distance(const Napi::CallbackInfo &info);
    void SetValue_distance(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_prolong(const Napi::CallbackInfo &info);
    void SetValue_prolong(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_combine(const Napi::CallbackInfo &info);
    void SetValue_combine(const Napi::CallbackInfo &info, const Napi::Value &value);
};

class _ExtensionValues_InitByDistance_AsyncWorker : public PromiseWorker
{
  public:
    _ExtensionValues_InitByDistance_AsyncWorker(ExtensionValues *_underlying, Napi::Promise::Deferred const &d,
                                                ExtensionValues::ExtensionType t, ExtensionValues::LateralKind k,
                                                const MbVector3D &v, double dist);
    virtual ~_ExtensionValues_InitByDistance_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    ExtensionValues *_underlying;
    ExtensionValues::ExtensionType t;
    ExtensionValues::LateralKind k;
    const MbVector3D &v;
    double dist;

    int resultType;
};

class _ExtensionValues_InitByVertex_AsyncWorker : public PromiseWorker
{
  public:
    _ExtensionValues_InitByVertex_AsyncWorker(ExtensionValues *_underlying, Napi::Promise::Deferred const &d,
                                              ExtensionValues::ExtensionType t, ExtensionValues::LateralKind k,
                                              const MbCartPoint3D &v);
    virtual ~_ExtensionValues_InitByVertex_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    ExtensionValues *_underlying;
    ExtensionValues::ExtensionType t;
    ExtensionValues::LateralKind k;
    const MbCartPoint3D &v;

    int resultType;
};

class _ExtensionValues_InitByShell_AsyncWorker : public PromiseWorker
{
  public:
    _ExtensionValues_InitByShell_AsyncWorker(ExtensionValues *_underlying, Napi::Promise::Deferred const &d,
                                             ExtensionValues::ExtensionType t, ExtensionValues::LateralKind k,
                                             const MbFace *f, const MbSolid *s);
    virtual ~_ExtensionValues_InitByShell_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    ExtensionValues *_underlying;
    ExtensionValues::ExtensionType t;
    ExtensionValues::LateralKind k;
    const MbFace *f;
    const MbSolid *s;

    int resultType;
};

#endif
