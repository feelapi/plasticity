// This is a generated file, modify: generate/templates/CartPoint3D.h

#ifndef CARTPOINT3D_H
#define CARTPOINT3D_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <mb_cart_point3d.h>

#include "Vector3D.h"
#include "PromiseWorker.h"

class CartPoint3D : public Napi::ObjectWrap<CartPoint3D>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbCartPoint3D *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    CartPoint3D(const Napi::CallbackInfo &info);

    Napi::Value Move(const Napi::CallbackInfo &info);
    Napi::Value Move_async(const Napi::CallbackInfo &info);
    Napi::Value Id(const Napi::CallbackInfo &info);

    MbCartPoint3D *_underlying;

  private:
    Napi::Value GetValue_x(const Napi::CallbackInfo &info);
    void SetValue_x(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_y(const Napi::CallbackInfo &info);
    void SetValue_y(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_z(const Napi::CallbackInfo &info);
    void SetValue_z(const Napi::CallbackInfo &info, const Napi::Value &value);
};

class CartPoint3D_Move_AsyncWorker : public PromiseWorker
{
  public:
    CartPoint3D_Move_AsyncWorker(MbCartPoint3D *_underlying, Napi::Promise::Deferred const &d, const MbVector3D &to);
    virtual ~CartPoint3D_Move_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbCartPoint3D *_underlying;
    const MbVector3D &to;

    MbCartPoint3D *_result;

    int resultType;
};

#endif
