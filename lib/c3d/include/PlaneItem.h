// This is a generated file, modify: generate/templates/PlaneItem.h

#ifndef PLANEITEM_H
#define PLANEITEM_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <plane_item.h>

#include "RefItem.h"
#include "RegTransform.h"
#include "Vector.h"
#include "Surface.h"
#include "Matrix.h"
#include "Rect.h"
#include "PromiseWorker.h"

class PlaneItem : public Napi::ObjectWrap<PlaneItem>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbPlaneItem *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    PlaneItem(const Napi::CallbackInfo &info);

    Napi::Value IsA(const Napi::CallbackInfo &info);
    Napi::Value IsA_async(const Napi::CallbackInfo &info);
    Napi::Value Type(const Napi::CallbackInfo &info);
    Napi::Value Type_async(const Napi::CallbackInfo &info);
    Napi::Value Family(const Napi::CallbackInfo &info);
    Napi::Value Family_async(const Napi::CallbackInfo &info);
    Napi::Value Cast(const Napi::CallbackInfo &info);
    Napi::Value Cast_async(const Napi::CallbackInfo &info);
    Napi::Value Move(const Napi::CallbackInfo &info);
    Napi::Value Move_async(const Napi::CallbackInfo &info);
    Napi::Value Transform(const Napi::CallbackInfo &info);
    Napi::Value Transform_async(const Napi::CallbackInfo &info);
    Napi::Value Duplicate(const Napi::CallbackInfo &info);
    Napi::Value Duplicate_async(const Napi::CallbackInfo &info);
    Napi::Value AddYourGabaritTo(const Napi::CallbackInfo &info);
    Napi::Value AddYourGabaritTo_async(const Napi::CallbackInfo &info);
    Napi::Value GetUseCount(const Napi::CallbackInfo &info);
    Napi::Value GetUseCount_async(const Napi::CallbackInfo &info);
    Napi::Value AddRef(const Napi::CallbackInfo &info);
    Napi::Value AddRef_async(const Napi::CallbackInfo &info);
    Napi::Value Id(const Napi::CallbackInfo &info);

    MbPlaneItem *_underlying;

    ~PlaneItem();

  private:
};

class PlaneItem_IsA_AsyncWorker : public PromiseWorker
{
  public:
    PlaneItem_IsA_AsyncWorker(MbPlaneItem *_underlying, Napi::Promise::Deferred const &d);
    virtual ~PlaneItem_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneItem *_underlying;

    MbePlaneType _result;

    int resultType;
};

class PlaneItem_Type_AsyncWorker : public PromiseWorker
{
  public:
    PlaneItem_Type_AsyncWorker(MbPlaneItem *_underlying, Napi::Promise::Deferred const &d);
    virtual ~PlaneItem_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneItem *_underlying;

    MbePlaneType _result;

    int resultType;
};

class PlaneItem_Family_AsyncWorker : public PromiseWorker
{
  public:
    PlaneItem_Family_AsyncWorker(MbPlaneItem *_underlying, Napi::Promise::Deferred const &d);
    virtual ~PlaneItem_Family_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneItem *_underlying;

    MbePlaneType _result;

    int resultType;
};

class PlaneItem_Move_AsyncWorker : public PromiseWorker
{
  public:
    PlaneItem_Move_AsyncWorker(MbPlaneItem *_underlying, Napi::Promise::Deferred const &d, const MbVector &to,
                               MbRegTransform *iReg = NULL);
    virtual ~PlaneItem_Move_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneItem *_underlying;
    const MbVector &to;
    MbRegTransform *iReg = NULL;

    const MbSurface *newSurface;

    int resultType;
};

class PlaneItem_Transform_AsyncWorker : public PromiseWorker
{
  public:
    PlaneItem_Transform_AsyncWorker(MbPlaneItem *_underlying, Napi::Promise::Deferred const &d, const MbMatrix &matr,
                                    MbRegTransform *iReg = NULL, const MbSurface *newSurface = NULL);
    virtual ~PlaneItem_Transform_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneItem *_underlying;
    const MbMatrix &matr;
    MbRegTransform *iReg = NULL;
    const MbSurface *newSurface = NULL;

    int resultType;
};

class PlaneItem_Duplicate_AsyncWorker : public PromiseWorker
{
  public:
    PlaneItem_Duplicate_AsyncWorker(MbPlaneItem *_underlying, Napi::Promise::Deferred const &d,
                                    MbRegDuplicate *dup = NULL);
    virtual ~PlaneItem_Duplicate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneItem *_underlying;
    MbRegDuplicate *dup = NULL;

    MbPlaneItem *_result;

    int resultType;
};

class PlaneItem_AddYourGabaritTo_AsyncWorker : public PromiseWorker
{
  public:
    PlaneItem_AddYourGabaritTo_AsyncWorker(MbPlaneItem *_underlying, Napi::Promise::Deferred const &d, MbRect &rect);
    virtual ~PlaneItem_AddYourGabaritTo_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneItem *_underlying;
    MbRect &rect;

    int resultType;
};

class PlaneItem_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    PlaneItem_GetUseCount_AsyncWorker(MbPlaneItem *_underlying, Napi::Promise::Deferred const &d);
    virtual ~PlaneItem_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneItem *_underlying;

    refcount_t _result;

    int resultType;
};

class PlaneItem_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    PlaneItem_AddRef_AsyncWorker(MbPlaneItem *_underlying, Napi::Promise::Deferred const &d);
    virtual ~PlaneItem_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlaneItem *_underlying;

    int resultType;
};

#endif
