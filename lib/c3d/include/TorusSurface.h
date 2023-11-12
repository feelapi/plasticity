// This is a generated file, modify: generate/templates/TorusSurface.h

#ifndef TORUSSURFACE_H
#define TORUSSURFACE_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <surf_torus_surface.h>

#include "ElementarySurface.h"
#include "PromiseWorker.h"

class TorusSurface : public Napi::ObjectWrap<TorusSurface>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbTorusSurface *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    TorusSurface(const Napi::CallbackInfo &info);

    Napi::Value GetMajorRadius(const Napi::CallbackInfo &info);
    Napi::Value GetMajorRadius_async(const Napi::CallbackInfo &info);
    Napi::Value GetMinorRadius(const Napi::CallbackInfo &info);
    Napi::Value GetMinorRadius_async(const Napi::CallbackInfo &info);
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

    MbTorusSurface *_underlying;

    ~TorusSurface();

  private:
};

class TorusSurface_GetMajorRadius_AsyncWorker : public PromiseWorker
{
  public:
    TorusSurface_GetMajorRadius_AsyncWorker(MbTorusSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~TorusSurface_GetMajorRadius_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTorusSurface *_underlying;

    double _result;

    int resultType;
};

class TorusSurface_GetMinorRadius_AsyncWorker : public PromiseWorker
{
  public:
    TorusSurface_GetMinorRadius_AsyncWorker(MbTorusSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~TorusSurface_GetMinorRadius_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTorusSurface *_underlying;

    double _result;

    int resultType;
};

class TorusSurface_GetSurface_AsyncWorker : public PromiseWorker
{
  public:
    TorusSurface_GetSurface_AsyncWorker(MbTorusSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~TorusSurface_GetSurface_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTorusSurface *_underlying;

    const MbSurface *_result;

    int resultType;
};

class TorusSurface_GetUEpsilon_AsyncWorker : public PromiseWorker
{
  public:
    TorusSurface_GetUEpsilon_AsyncWorker(MbTorusSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~TorusSurface_GetUEpsilon_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTorusSurface *_underlying;

    double _result;

    int resultType;
};

class TorusSurface_GetVEpsilon_AsyncWorker : public PromiseWorker
{
  public:
    TorusSurface_GetVEpsilon_AsyncWorker(MbTorusSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~TorusSurface_GetVEpsilon_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTorusSurface *_underlying;

    double _result;

    int resultType;
};

class TorusSurface_GetUMid_AsyncWorker : public PromiseWorker
{
  public:
    TorusSurface_GetUMid_AsyncWorker(MbTorusSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~TorusSurface_GetUMid_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTorusSurface *_underlying;

    double _result;

    int resultType;
};

class TorusSurface_GetVMid_AsyncWorker : public PromiseWorker
{
  public:
    TorusSurface_GetVMid_AsyncWorker(MbTorusSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~TorusSurface_GetVMid_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTorusSurface *_underlying;

    double _result;

    int resultType;
};

class TorusSurface_GetUMin_AsyncWorker : public PromiseWorker
{
  public:
    TorusSurface_GetUMin_AsyncWorker(MbTorusSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~TorusSurface_GetUMin_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTorusSurface *_underlying;

    double _result;

    int resultType;
};

class TorusSurface_GetUMax_AsyncWorker : public PromiseWorker
{
  public:
    TorusSurface_GetUMax_AsyncWorker(MbTorusSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~TorusSurface_GetUMax_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTorusSurface *_underlying;

    double _result;

    int resultType;
};

class TorusSurface_GetVMin_AsyncWorker : public PromiseWorker
{
  public:
    TorusSurface_GetVMin_AsyncWorker(MbTorusSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~TorusSurface_GetVMin_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTorusSurface *_underlying;

    double _result;

    int resultType;
};

class TorusSurface_GetVMax_AsyncWorker : public PromiseWorker
{
  public:
    TorusSurface_GetVMax_AsyncWorker(MbTorusSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~TorusSurface_GetVMax_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTorusSurface *_underlying;

    double _result;

    int resultType;
};

class TorusSurface_GetUParamToUnit_AsyncWorker : public PromiseWorker
{
  public:
    TorusSurface_GetUParamToUnit_AsyncWorker(MbTorusSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~TorusSurface_GetUParamToUnit_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTorusSurface *_underlying;

    double _result;

    int resultType;
};

class TorusSurface_GetVParamToUnit_AsyncWorker : public PromiseWorker
{
  public:
    TorusSurface_GetVParamToUnit_AsyncWorker(MbTorusSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~TorusSurface_GetVParamToUnit_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTorusSurface *_underlying;

    double _result;

    int resultType;
};

class TorusSurface_GetRadius_AsyncWorker : public PromiseWorker
{
  public:
    TorusSurface_GetRadius_AsyncWorker(MbTorusSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~TorusSurface_GetRadius_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTorusSurface *_underlying;

    double _result;

    int resultType;
};

class TorusSurface_Normal_AsyncWorker : public PromiseWorker
{
  public:
    TorusSurface_Normal_AsyncWorker(MbTorusSurface *_underlying, Napi::Promise::Deferred const &d, double &u,
                                    double &v);
    virtual ~TorusSurface_Normal_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTorusSurface *_underlying;
    double &u;
    double &v;

    MbVector3D *result;

    int resultType;
};

class TorusSurface_NearDirectPointProjection_AsyncWorker : public PromiseWorker
{
  public:
    TorusSurface_NearDirectPointProjection_AsyncWorker(MbTorusSurface *_underlying, Napi::Promise::Deferred const &d,
                                                       const MbCartPoint3D &pnt, const MbVector3D &vect, bool ext,
                                                       MbRect2D *uvRange = nullptr, bool onlyPositiveDirection = false);
    virtual ~TorusSurface_NearDirectPointProjection_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTorusSurface *_underlying;
    const MbCartPoint3D &pnt;
    const MbVector3D &vect;
    bool ext;
    MbRect2D *uvRange = nullptr;
    bool onlyPositiveDirection = false;

    double u;

    double v;

    int resultType;
};

class TorusSurface_IsA_AsyncWorker : public PromiseWorker
{
  public:
    TorusSurface_IsA_AsyncWorker(MbTorusSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~TorusSurface_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTorusSurface *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class TorusSurface_Type_AsyncWorker : public PromiseWorker
{
  public:
    TorusSurface_Type_AsyncWorker(MbTorusSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~TorusSurface_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTorusSurface *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class TorusSurface_Family_AsyncWorker : public PromiseWorker
{
  public:
    TorusSurface_Family_AsyncWorker(MbTorusSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~TorusSurface_Family_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTorusSurface *_underlying;

    MbeSpaceType _result;

    int resultType;
};

class TorusSurface_Transform_AsyncWorker : public PromiseWorker
{
  public:
    TorusSurface_Transform_AsyncWorker(MbTorusSurface *_underlying, Napi::Promise::Deferred const &d,
                                       const MbMatrix3D &mat, MbRegTransform *iReg = NULL);
    virtual ~TorusSurface_Transform_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTorusSurface *_underlying;
    const MbMatrix3D &mat;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class TorusSurface_Move_AsyncWorker : public PromiseWorker
{
  public:
    TorusSurface_Move_AsyncWorker(MbTorusSurface *_underlying, Napi::Promise::Deferred const &d, const MbVector3D &v,
                                  MbRegTransform *iReg = NULL);
    virtual ~TorusSurface_Move_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTorusSurface *_underlying;
    const MbVector3D &v;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class TorusSurface_Rotate_AsyncWorker : public PromiseWorker
{
  public:
    TorusSurface_Rotate_AsyncWorker(MbTorusSurface *_underlying, Napi::Promise::Deferred const &d, const MbAxis3D &axis,
                                    double angle, MbRegTransform *iReg = NULL);
    virtual ~TorusSurface_Rotate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTorusSurface *_underlying;
    const MbAxis3D &axis;
    double angle;
    MbRegTransform *iReg = NULL;

    int resultType;
};

class TorusSurface_Refresh_AsyncWorker : public PromiseWorker
{
  public:
    TorusSurface_Refresh_AsyncWorker(MbTorusSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~TorusSurface_Refresh_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTorusSurface *_underlying;

    int resultType;
};

class TorusSurface_Duplicate_AsyncWorker : public PromiseWorker
{
  public:
    TorusSurface_Duplicate_AsyncWorker(MbTorusSurface *_underlying, Napi::Promise::Deferred const &d,
                                       MbRegDuplicate *iReg = NULL);
    virtual ~TorusSurface_Duplicate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTorusSurface *_underlying;
    MbRegDuplicate *iReg = NULL;

    MbSpaceItem *_result;

    int resultType;
};

class TorusSurface_AddYourGabaritTo_AsyncWorker : public PromiseWorker
{
  public:
    TorusSurface_AddYourGabaritTo_AsyncWorker(MbTorusSurface *_underlying, Napi::Promise::Deferred const &d,
                                              MbCube &cube);
    virtual ~TorusSurface_AddYourGabaritTo_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTorusSurface *_underlying;
    MbCube &cube;

    int resultType;
};

class TorusSurface_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    TorusSurface_GetUseCount_AsyncWorker(MbTorusSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~TorusSurface_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTorusSurface *_underlying;

    refcount_t _result;

    int resultType;
};

class TorusSurface_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    TorusSurface_AddRef_AsyncWorker(MbTorusSurface *_underlying, Napi::Promise::Deferred const &d);
    virtual ~TorusSurface_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbTorusSurface *_underlying;

    int resultType;
};

#endif
