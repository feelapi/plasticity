// This is a generated file, modify: generate/templates/SpaceItem.h

#ifndef SPACEITEM_H
#define SPACEITEM_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <space_item.h>

#include "RefItem.h"
#include "RegDuplicate.h"
#include "RegTransform.h"
#include "Matrix3D.h"
#include "Vector3D.h"
#include "Axis3D.h"
#include "Cube.h"
#include "PromiseWorker.h"

class SpaceItem : public Napi::ObjectWrap<SpaceItem>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbSpaceItem *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    SpaceItem(const Napi::CallbackInfo &info);

    Napi::Value IsA(const Napi::CallbackInfo &info);
    Napi::Value IsA_async(const Napi::CallbackInfo &info);
    Napi::Value Type(const Napi::CallbackInfo &info);
    Napi::Value Type_async(const Napi::CallbackInfo &info);
    Napi::Value Family(const Napi::CallbackInfo &info);
    Napi::Value Family_async(const Napi::CallbackInfo &info);
    Napi::Value Cast(const Napi::CallbackInfo &info);
    Napi::Value Cast_async(const Napi::CallbackInfo &info);
    Napi::Value Transform(const Napi::CallbackInfo &info);
    Napi::Value Transform_async(const Napi::CallbackInfo &info);
    Napi::Value Move(const Napi::CallbackInfo &info);
    Napi::Value Move_async(const Napi::CallbackInfo &info);
    Napi::Value Rotate(const Napi::CallbackInfo &info);
    Napi::Value Rotate_async(const Napi::CallbackInfo &info);
    Napi::Value Refresh(const Napi::CallbackInfo &info);
    Napi::Value Refresh_async(const Napi::CallbackInfo &info);
    Napi::Value Duplicate(const Napi::CallbackInfo &info);
    Napi::Value Duplicate_async(const Napi::CallbackInfo &info);
    Napi::Value AddYourGabaritTo(const Napi::CallbackInfo &info);
    Napi::Value AddYourGabaritTo_async(const Napi::CallbackInfo &info);
    Napi::Value GetUseCount(const Napi::CallbackInfo &info);
    Napi::Value GetUseCount_async(const Napi::CallbackInfo &info);
    Napi::Value AddRef(const Napi::CallbackInfo &info);
    Napi::Value AddRef_async(const Napi::CallbackInfo &info);
    Napi::Value Id(const Napi::CallbackInfo &info);

    MbSpaceItem *_underlying;

    ~SpaceItem();

  private:
};

class SpaceItem_IsA_AsyncWorker : public PromiseWorker
{
  public:
    SpaceItem_IsA_AsyncWorker(MbSpaceItem *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SpaceItem_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSpaceItem *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class SpaceItem_Type_AsyncWorker : public PromiseWorker
{
  public:
    SpaceItem_Type_AsyncWorker(MbSpaceItem *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SpaceItem_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSpaceItem *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class SpaceItem_Family_AsyncWorker : public PromiseWorker
{
  public:
    SpaceItem_Family_AsyncWorker(MbSpaceItem *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SpaceItem_Family_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSpaceItem *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class SpaceItem_Transform_AsyncWorker : public PromiseWorker
{
  public:
    SpaceItem_Transform_AsyncWorker(MbSpaceItem *_underlying, Napi::Promise::Deferred const &d, const MbMatrix3D &mat,
                                    MbRegTransform *iReg = NULL);
    virtual ~SpaceItem_Transform_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSpaceItem *_underlying;
    const MbMatrix3D &mat;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class SpaceItem_Move_AsyncWorker : public PromiseWorker
{
  public:
    SpaceItem_Move_AsyncWorker(MbSpaceItem *_underlying, Napi::Promise::Deferred const &d, const MbVector3D &v,
                               MbRegTransform *iReg = NULL);
    virtual ~SpaceItem_Move_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSpaceItem *_underlying;
    const MbVector3D &v;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class SpaceItem_Rotate_AsyncWorker : public PromiseWorker
{
  public:
    SpaceItem_Rotate_AsyncWorker(MbSpaceItem *_underlying, Napi::Promise::Deferred const &d, const MbAxis3D &axis,
                                 double angle, MbRegTransform *iReg = NULL);
    virtual ~SpaceItem_Rotate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSpaceItem *_underlying;
    const MbAxis3D &axis;
    double angle;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class SpaceItem_Refresh_AsyncWorker : public PromiseWorker
{
  public:
    SpaceItem_Refresh_AsyncWorker(MbSpaceItem *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SpaceItem_Refresh_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSpaceItem *_underlying;

    int resultType;
};

class SpaceItem_Duplicate_AsyncWorker : public PromiseWorker
{
  public:
    SpaceItem_Duplicate_AsyncWorker(MbSpaceItem *_underlying, Napi::Promise::Deferred const &d,
                                    MbRegDuplicate *iReg = NULL);
    virtual ~SpaceItem_Duplicate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSpaceItem *_underlying;
    MbRegDuplicate *iReg = NULL;

    MbSpaceItem *_result;

    int resultType;
};

class SpaceItem_AddYourGabaritTo_AsyncWorker : public PromiseWorker
{
  public:
    SpaceItem_AddYourGabaritTo_AsyncWorker(MbSpaceItem *_underlying, Napi::Promise::Deferred const &d, MbCube &cube);
    virtual ~SpaceItem_AddYourGabaritTo_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSpaceItem *_underlying;
    MbCube &cube;

    int resultType;
};

class SpaceItem_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    SpaceItem_GetUseCount_AsyncWorker(MbSpaceItem *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SpaceItem_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSpaceItem *_underlying;

    refcount_t _result;

    int resultType;
};

class SpaceItem_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    SpaceItem_AddRef_AsyncWorker(MbSpaceItem *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SpaceItem_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSpaceItem *_underlying;

    int resultType;
};

#endif
