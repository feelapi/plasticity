// This is a generated file, modify: generate/templates/Vector3D.h

#ifndef VECTOR3D_H
#define VECTOR3D_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <mb_vector3d.h>

#include "CartPoint3D.h"
#include "PromiseWorker.h"

class Vector3D : public Napi::ObjectWrap<Vector3D>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbVector3D *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    Vector3D(const Napi::CallbackInfo &info);

    Napi::Value Colinear(const Napi::CallbackInfo &info);
    Napi::Value Colinear_async(const Napi::CallbackInfo &info);
    Napi::Value Invert(const Napi::CallbackInfo &info);
    Napi::Value Invert_async(const Napi::CallbackInfo &info);
    Napi::Value Id(const Napi::CallbackInfo &info);

    MbVector3D *_underlying;

  private:
    Napi::Value GetValue_x(const Napi::CallbackInfo &info);
    void SetValue_x(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_y(const Napi::CallbackInfo &info);
    void SetValue_y(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_z(const Napi::CallbackInfo &info);
    void SetValue_z(const Napi::CallbackInfo &info, const Napi::Value &value);
};

class Vector3D_Colinear_AsyncWorker : public PromiseWorker
{
  public:
    Vector3D_Colinear_AsyncWorker(MbVector3D *_underlying, Napi::Promise::Deferred const &d, const MbVector3D &other,
                                  double eps = Math::angleRegion);
    virtual ~Vector3D_Colinear_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbVector3D *_underlying;
    const MbVector3D &other;
    double eps = Math::angleRegion;

    bool _result;

    int resultType;
};

class Vector3D_Invert_AsyncWorker : public PromiseWorker
{
  public:
    Vector3D_Invert_AsyncWorker(MbVector3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Vector3D_Invert_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbVector3D *_underlying;

    MbVector3D *_result;

    int resultType;
};

#endif
