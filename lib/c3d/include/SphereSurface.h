// This is a generated file, modify: generate/templates/SphereSurface.h

#ifndef SPHERESURFACE_H
#define SPHERESURFACE_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <surf_sphere_surface.h>

#include "ElementarySurface.h"
#include "CartPoint3D.h"
#include "PromiseWorker.h"

class SphereSurface : public Napi::ObjectWrap<SphereSurface>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbSphereSurface *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    SphereSurface(const Napi::CallbackInfo &info);

    Napi::Value GetSurface(const Napi::CallbackInfo &info);
    Napi::Value GetSurface_async(const Napi::CallbackInfo &info);
    Napi::Value GetUEpsilon(const Napi::CallbackInfo &info);
    Napi::Value GetUEpsilon_async(const Napi::CallbackInfo &info);
    Napi::Value GetVEpsilon(const Napi::CallbackInfo &info);
    Napi::Value GetVEpsilon_async(const Napi::CallbackInfo &info);
    Napi::Value GetUMid(const Napi::CallbackInfo &info);
    Napi::Value GetUMid_async(const Napi::CallbackInfo &info);
    Napi::Value GetVMid(const Napi::CallbackInfo &info);
    Napi::Value GetVMid_async(const Napi::CallbackInfo &info);
    Napi::Value GetUMin(const Napi::CallbackInfo &info);
    Napi::Value GetUMin_async(const Napi::CallbackInfo &info);
    Napi::Value GetUMax(const Napi::CallbackInfo &info);
    Napi::Value GetUMax_async(const Napi::CallbackInfo &info);
    Napi::Value GetVMin(const Napi::CallbackInfo &info);
    Napi::Value GetVMin_async(const Napi::CallbackInfo &info);
    Napi::Value GetVMax(const Napi::CallbackInfo &info);
    Napi::Value GetVMax_async(const Napi::CallbackInfo &info);
    Napi::Value GetUParamToUnit(const Napi::CallbackInfo &info);
    Napi::Value GetUParamToUnit_async(const Napi::CallbackInfo &info);
    Napi::Value GetVParamToUnit(const Napi::CallbackInfo &info);
    Napi::Value GetVParamToUnit_async(const Napi::CallbackInfo &info);
    Napi::Value GetRadius(const Napi::CallbackInfo &info);
    Napi::Value GetRadius_async(const Napi::CallbackInfo &info);
    Napi::Value Normal(const Napi::CallbackInfo &info);
    Napi::Value Normal_async(const Napi::CallbackInfo &info);
    Napi::Value NearDirectPointProjection(const Napi::CallbackInfo &info);
    Napi::Value NearDirectPointProjection_async(const Napi::CallbackInfo &info);
    Napi::Value IsA(const Napi::CallbackInfo &info);
    Napi::Value IsA_async(const Napi::CallbackInfo &info);
    Napi::Value Type(const Napi::CallbackInfo &info);
    Napi::Value Type_async(const Napi::CallbackInfo &info);
    Napi::Value Family(const Napi::CallbackInfo &info);
    Napi::Value Family_async(const Napi::CallbackInfo &info);
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

    MbSphereSurface *_underlying;

    ~SphereSurface();

  private:
};

class SphereSurface_GetSurface_AsyncWorker : public PromiseWorker
{
  public:
    SphereSurface_GetSurface_AsyncWorker(MbSphereSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SphereSurface_GetSurface_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSphereSurface *_underlying;

    const MbSurface *_result;

    int resultType;
};

class SphereSurface_GetUEpsilon_AsyncWorker : public PromiseWorker
{
  public:
    SphereSurface_GetUEpsilon_AsyncWorker(MbSphereSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SphereSurface_GetUEpsilon_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSphereSurface *_underlying;

    double _result;

    int resultType;
};

class SphereSurface_GetVEpsilon_AsyncWorker : public PromiseWorker
{
  public:
    SphereSurface_GetVEpsilon_AsyncWorker(MbSphereSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SphereSurface_GetVEpsilon_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSphereSurface *_underlying;

    double _result;

    int resultType;
};

class SphereSurface_GetUMid_AsyncWorker : public PromiseWorker
{
  public:
    SphereSurface_GetUMid_AsyncWorker(MbSphereSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SphereSurface_GetUMid_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSphereSurface *_underlying;

    double _result;

    int resultType;
};

class SphereSurface_GetVMid_AsyncWorker : public PromiseWorker
{
  public:
    SphereSurface_GetVMid_AsyncWorker(MbSphereSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SphereSurface_GetVMid_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSphereSurface *_underlying;

    double _result;

    int resultType;
};

class SphereSurface_GetUMin_AsyncWorker : public PromiseWorker
{
  public:
    SphereSurface_GetUMin_AsyncWorker(MbSphereSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SphereSurface_GetUMin_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSphereSurface *_underlying;

    double _result;

    int resultType;
};

class SphereSurface_GetUMax_AsyncWorker : public PromiseWorker
{
  public:
    SphereSurface_GetUMax_AsyncWorker(MbSphereSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SphereSurface_GetUMax_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSphereSurface *_underlying;

    double _result;

    int resultType;
};

class SphereSurface_GetVMin_AsyncWorker : public PromiseWorker
{
  public:
    SphereSurface_GetVMin_AsyncWorker(MbSphereSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SphereSurface_GetVMin_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSphereSurface *_underlying;

    double _result;

    int resultType;
};

class SphereSurface_GetVMax_AsyncWorker : public PromiseWorker
{
  public:
    SphereSurface_GetVMax_AsyncWorker(MbSphereSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SphereSurface_GetVMax_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSphereSurface *_underlying;

    double _result;

    int resultType;
};

class SphereSurface_GetUParamToUnit_AsyncWorker : public PromiseWorker
{
  public:
    SphereSurface_GetUParamToUnit_AsyncWorker(MbSphereSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SphereSurface_GetUParamToUnit_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSphereSurface *_underlying;

    double _result;

    int resultType;
};

class SphereSurface_GetVParamToUnit_AsyncWorker : public PromiseWorker
{
  public:
    SphereSurface_GetVParamToUnit_AsyncWorker(MbSphereSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SphereSurface_GetVParamToUnit_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSphereSurface *_underlying;

    double _result;

    int resultType;
};

class SphereSurface_GetRadius_AsyncWorker : public PromiseWorker
{
  public:
    SphereSurface_GetRadius_AsyncWorker(MbSphereSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SphereSurface_GetRadius_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSphereSurface *_underlying;

    double _result;

    int resultType;
};

class SphereSurface_Normal_AsyncWorker : public PromiseWorker
{
  public:
    SphereSurface_Normal_AsyncWorker(MbSphereSurface *_underlying, Napi::Promise::Deferred const &d, double &u,
                                     double &v);
    virtual ~SphereSurface_Normal_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSphereSurface *_underlying;
    double &u;
    double &v;

    MbVector3D *result;

    int resultType;
};

class SphereSurface_NearDirectPointProjection_AsyncWorker : public PromiseWorker
{
  public:
    SphereSurface_NearDirectPointProjection_AsyncWorker(MbSphereSurface *_underlying, Napi::Promise::Deferred const &d,
                                                        const MbCartPoint3D &pnt, const MbVector3D &vect, bool ext,
                                                        MbRect2D *uvRange = nullptr,
                                                        bool onlyPositiveDirection = false);
    virtual ~SphereSurface_NearDirectPointProjection_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSphereSurface *_underlying;
    const MbCartPoint3D &pnt;
    const MbVector3D &vect;
    bool ext;
    MbRect2D *uvRange = nullptr;
    bool onlyPositiveDirection = false;

    double u;

    double v;

    int resultType;
};

class SphereSurface_IsA_AsyncWorker : public PromiseWorker
{
  public:
    SphereSurface_IsA_AsyncWorker(MbSphereSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SphereSurface_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSphereSurface *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class SphereSurface_Type_AsyncWorker : public PromiseWorker
{
  public:
    SphereSurface_Type_AsyncWorker(MbSphereSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SphereSurface_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSphereSurface *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class SphereSurface_Family_AsyncWorker : public PromiseWorker
{
  public:
    SphereSurface_Family_AsyncWorker(MbSphereSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SphereSurface_Family_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSphereSurface *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class SphereSurface_Transform_AsyncWorker : public PromiseWorker
{
  public:
    SphereSurface_Transform_AsyncWorker(MbSphereSurface *_underlying, Napi::Promise::Deferred const &d,
                                        const MbMatrix3D &mat, MbRegTransform *iReg = NULL);
    virtual ~SphereSurface_Transform_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSphereSurface *_underlying;
    const MbMatrix3D &mat;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class SphereSurface_Move_AsyncWorker : public PromiseWorker
{
  public:
    SphereSurface_Move_AsyncWorker(MbSphereSurface *_underlying, Napi::Promise::Deferred const &d, const MbVector3D &v,
                                   MbRegTransform *iReg = NULL);
    virtual ~SphereSurface_Move_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSphereSurface *_underlying;
    const MbVector3D &v;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class SphereSurface_Rotate_AsyncWorker : public PromiseWorker
{
  public:
    SphereSurface_Rotate_AsyncWorker(MbSphereSurface *_underlying, Napi::Promise::Deferred const &d,
                                     const MbAxis3D &axis, double angle, MbRegTransform *iReg = NULL);
    virtual ~SphereSurface_Rotate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSphereSurface *_underlying;
    const MbAxis3D &axis;
    double angle;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class SphereSurface_Refresh_AsyncWorker : public PromiseWorker
{
  public:
    SphereSurface_Refresh_AsyncWorker(MbSphereSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SphereSurface_Refresh_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSphereSurface *_underlying;

    int resultType;
};

class SphereSurface_Duplicate_AsyncWorker : public PromiseWorker
{
  public:
    SphereSurface_Duplicate_AsyncWorker(MbSphereSurface *_underlying, Napi::Promise::Deferred const &d,
                                        MbRegDuplicate *iReg = NULL);
    virtual ~SphereSurface_Duplicate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSphereSurface *_underlying;
    MbRegDuplicate *iReg = NULL;

    MbSpaceItem *_result;

    int resultType;
};

class SphereSurface_AddYourGabaritTo_AsyncWorker : public PromiseWorker
{
  public:
    SphereSurface_AddYourGabaritTo_AsyncWorker(MbSphereSurface *_underlying, Napi::Promise::Deferred const &d,
                                               MbCube &cube);
    virtual ~SphereSurface_AddYourGabaritTo_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSphereSurface *_underlying;
    MbCube &cube;

    int resultType;
};

class SphereSurface_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    SphereSurface_GetUseCount_AsyncWorker(MbSphereSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SphereSurface_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSphereSurface *_underlying;

    refcount_t _result;

    int resultType;
};

class SphereSurface_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    SphereSurface_AddRef_AsyncWorker(MbSphereSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~SphereSurface_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSphereSurface *_underlying;

    int resultType;
};

#endif
