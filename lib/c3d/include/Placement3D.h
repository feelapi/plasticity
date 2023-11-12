// This is a generated file, modify: generate/templates/Placement3D.h

#ifndef PLACEMENT3D_H
#define PLACEMENT3D_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <mb_placement3d.h>

#include "Axis3D.h"
#include "Vector3D.h"
#include "Matrix.h"
#include "PromiseWorker.h"

class Placement3D : public Napi::ObjectWrap<Placement3D>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbPlacement3D *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    Placement3D(const Napi::CallbackInfo &info);

    Napi::Value InitYZ(const Napi::CallbackInfo &info);
    Napi::Value InitYZ_async(const Napi::CallbackInfo &info);
    Napi::Value Move(const Napi::CallbackInfo &info);
    Napi::Value Move_async(const Napi::CallbackInfo &info);
    Napi::Value Rotate(const Napi::CallbackInfo &info);
    Napi::Value Rotate_async(const Napi::CallbackInfo &info);
    Napi::Value Scale(const Napi::CallbackInfo &info);
    Napi::Value Scale_async(const Napi::CallbackInfo &info);
    Napi::Value SetAxisX(const Napi::CallbackInfo &info);
    Napi::Value SetAxisX_async(const Napi::CallbackInfo &info);
    Napi::Value SetAxisY(const Napi::CallbackInfo &info);
    Napi::Value SetAxisY_async(const Napi::CallbackInfo &info);
    Napi::Value SetAxisZ(const Napi::CallbackInfo &info);
    Napi::Value SetAxisZ_async(const Napi::CallbackInfo &info);
    Napi::Value GetOrigin(const Napi::CallbackInfo &info);
    Napi::Value GetOrigin_async(const Napi::CallbackInfo &info);
    Napi::Value SetOrigin(const Napi::CallbackInfo &info);
    Napi::Value SetOrigin_async(const Napi::CallbackInfo &info);
    Napi::Value GetAxisZ(const Napi::CallbackInfo &info);
    Napi::Value GetAxisZ_async(const Napi::CallbackInfo &info);
    Napi::Value GetAxisY(const Napi::CallbackInfo &info);
    Napi::Value GetAxisY_async(const Napi::CallbackInfo &info);
    Napi::Value GetAxisX(const Napi::CallbackInfo &info);
    Napi::Value GetAxisX_async(const Napi::CallbackInfo &info);
    Napi::Value Normalize(const Napi::CallbackInfo &info);
    Napi::Value Normalize_async(const Napi::CallbackInfo &info);
    Napi::Value Reset(const Napi::CallbackInfo &info);
    Napi::Value Reset_async(const Napi::CallbackInfo &info);
    Napi::Value Invert(const Napi::CallbackInfo &info);
    Napi::Value Invert_async(const Napi::CallbackInfo &info);
    Napi::Value GetXEpsilon(const Napi::CallbackInfo &info);
    Napi::Value GetXEpsilon_async(const Napi::CallbackInfo &info);
    Napi::Value GetYEpsilon(const Napi::CallbackInfo &info);
    Napi::Value GetYEpsilon_async(const Napi::CallbackInfo &info);
    Napi::Value PointProjection(const Napi::CallbackInfo &info);
    Napi::Value PointProjection_async(const Napi::CallbackInfo &info);
    Napi::Value PointRelative(const Napi::CallbackInfo &info);
    Napi::Value PointRelative_async(const Napi::CallbackInfo &info);
    Napi::Value GetMatrixToPlace(const Napi::CallbackInfo &info);
    Napi::Value GetMatrixToPlace_async(const Napi::CallbackInfo &info);
    Napi::Value GetVectorFrom(const Napi::CallbackInfo &info);
    Napi::Value GetVectorFrom_async(const Napi::CallbackInfo &info);
    Napi::Value GetPointFrom(const Napi::CallbackInfo &info);
    Napi::Value GetPointFrom_async(const Napi::CallbackInfo &info);
    Napi::Value GetPointInto(const Napi::CallbackInfo &info);
    Napi::Value GetPointInto_async(const Napi::CallbackInfo &info);
    Napi::Value Id(const Napi::CallbackInfo &info);

    MbPlacement3D *_underlying;

  private:
};

class Placement3D_InitYZ_AsyncWorker : public PromiseWorker
{
  public:
    Placement3D_InitYZ_AsyncWorker(MbPlacement3D *_underlying, Napi::Promise::Deferred const &d, const MbCartPoint3D &p,
                                   const MbVector3D &axisY, const MbVector3D &axisZ);
    virtual ~Placement3D_InitYZ_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlacement3D *_underlying;
    const MbCartPoint3D &p;
    const MbVector3D &axisY;
    const MbVector3D &axisZ;

    MbPlacement3D *_result;

    int resultType;
};

class Placement3D_Move_AsyncWorker : public PromiseWorker
{
  public:
    Placement3D_Move_AsyncWorker(MbPlacement3D *_underlying, Napi::Promise::Deferred const &d, const MbVector3D &to);
    virtual ~Placement3D_Move_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlacement3D *_underlying;
    const MbVector3D &to;

    MbPlacement3D *_result;

    int resultType;
};

class Placement3D_Rotate_AsyncWorker : public PromiseWorker
{
  public:
    Placement3D_Rotate_AsyncWorker(MbPlacement3D *_underlying, Napi::Promise::Deferred const &d, const MbAxis3D &axis,
                                   double angle);
    virtual ~Placement3D_Rotate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlacement3D *_underlying;
    const MbAxis3D &axis;
    double angle;

    MbPlacement3D *_result;

    int resultType;
};

class Placement3D_Scale_AsyncWorker : public PromiseWorker
{
  public:
    Placement3D_Scale_AsyncWorker(MbPlacement3D *_underlying, Napi::Promise::Deferred const &d, double sx, double sy,
                                  double sz);
    virtual ~Placement3D_Scale_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlacement3D *_underlying;
    double sx;
    double sy;
    double sz;

    MbPlacement3D *_result;

    int resultType;
};

class Placement3D_SetAxisX_AsyncWorker : public PromiseWorker
{
  public:
    Placement3D_SetAxisX_AsyncWorker(MbPlacement3D *_underlying, Napi::Promise::Deferred const &d, const MbVector3D &a);
    virtual ~Placement3D_SetAxisX_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlacement3D *_underlying;
    const MbVector3D &a;

    int resultType;
};

class Placement3D_SetAxisY_AsyncWorker : public PromiseWorker
{
  public:
    Placement3D_SetAxisY_AsyncWorker(MbPlacement3D *_underlying, Napi::Promise::Deferred const &d, const MbVector3D &a);
    virtual ~Placement3D_SetAxisY_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlacement3D *_underlying;
    const MbVector3D &a;

    int resultType;
};

class Placement3D_SetAxisZ_AsyncWorker : public PromiseWorker
{
  public:
    Placement3D_SetAxisZ_AsyncWorker(MbPlacement3D *_underlying, Napi::Promise::Deferred const &d, const MbVector3D &a);
    virtual ~Placement3D_SetAxisZ_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlacement3D *_underlying;
    const MbVector3D &a;

    int resultType;
};

class Placement3D_GetOrigin_AsyncWorker : public PromiseWorker
{
  public:
    Placement3D_GetOrigin_AsyncWorker(MbPlacement3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Placement3D_GetOrigin_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlacement3D *_underlying;

    const MbCartPoint3D *_result;

    int resultType;
};

class Placement3D_SetOrigin_AsyncWorker : public PromiseWorker
{
  public:
    Placement3D_SetOrigin_AsyncWorker(MbPlacement3D *_underlying, Napi::Promise::Deferred const &d,
                                      const MbCartPoint3D &o);
    virtual ~Placement3D_SetOrigin_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlacement3D *_underlying;
    const MbCartPoint3D &o;

    int resultType;
};

class Placement3D_GetAxisZ_AsyncWorker : public PromiseWorker
{
  public:
    Placement3D_GetAxisZ_AsyncWorker(MbPlacement3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Placement3D_GetAxisZ_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlacement3D *_underlying;

    const MbVector3D *_result;

    int resultType;
};

class Placement3D_GetAxisY_AsyncWorker : public PromiseWorker
{
  public:
    Placement3D_GetAxisY_AsyncWorker(MbPlacement3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Placement3D_GetAxisY_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlacement3D *_underlying;

    const MbVector3D *_result;

    int resultType;
};

class Placement3D_GetAxisX_AsyncWorker : public PromiseWorker
{
  public:
    Placement3D_GetAxisX_AsyncWorker(MbPlacement3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Placement3D_GetAxisX_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlacement3D *_underlying;

    const MbVector3D *_result;

    int resultType;
};

class Placement3D_Normalize_AsyncWorker : public PromiseWorker
{
  public:
    Placement3D_Normalize_AsyncWorker(MbPlacement3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Placement3D_Normalize_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlacement3D *_underlying;

    int resultType;
};

class Placement3D_Reset_AsyncWorker : public PromiseWorker
{
  public:
    Placement3D_Reset_AsyncWorker(MbPlacement3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Placement3D_Reset_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlacement3D *_underlying;

    int resultType;
};

class Placement3D_Invert_AsyncWorker : public PromiseWorker
{
  public:
    Placement3D_Invert_AsyncWorker(MbPlacement3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Placement3D_Invert_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlacement3D *_underlying;

    int resultType;
};

class Placement3D_GetXEpsilon_AsyncWorker : public PromiseWorker
{
  public:
    Placement3D_GetXEpsilon_AsyncWorker(MbPlacement3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Placement3D_GetXEpsilon_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlacement3D *_underlying;

    double _result;

    int resultType;
};

class Placement3D_GetYEpsilon_AsyncWorker : public PromiseWorker
{
  public:
    Placement3D_GetYEpsilon_AsyncWorker(MbPlacement3D *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Placement3D_GetYEpsilon_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlacement3D *_underlying;

    double _result;

    int resultType;
};

class Placement3D_PointProjection_AsyncWorker : public PromiseWorker
{
  public:
    Placement3D_PointProjection_AsyncWorker(MbPlacement3D *_underlying, Napi::Promise::Deferred const &d,
                                            const MbCartPoint3D &p);
    virtual ~Placement3D_PointProjection_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlacement3D *_underlying;
    const MbCartPoint3D &p;

    double x;

    double y;

    int resultType;
};

class Placement3D_PointRelative_AsyncWorker : public PromiseWorker
{
  public:
    Placement3D_PointRelative_AsyncWorker(MbPlacement3D *_underlying, Napi::Promise::Deferred const &d,
                                          const MbCartPoint3D &pnt, double eps = Math::angleRegion);
    virtual ~Placement3D_PointRelative_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlacement3D *_underlying;
    const MbCartPoint3D &pnt;
    double eps = Math::angleRegion;

    MbeItemLocation _result;

    int resultType;
};

class Placement3D_GetMatrixToPlace_AsyncWorker : public PromiseWorker
{
  public:
    Placement3D_GetMatrixToPlace_AsyncWorker(MbPlacement3D *_underlying, Napi::Promise::Deferred const &d,
                                             const MbPlacement3D &p, double eps = Math::angleRegion);
    virtual ~Placement3D_GetMatrixToPlace_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlacement3D *_underlying;
    const MbPlacement3D &p;
    double eps = Math::angleRegion;

    MbMatrix *matrix;

    int resultType;
};

class Placement3D_GetVectorFrom_AsyncWorker : public PromiseWorker
{
  public:
    Placement3D_GetVectorFrom_AsyncWorker(MbPlacement3D *_underlying, Napi::Promise::Deferred const &d, double x1,
                                          double y1, double z1, MbeLocalSystemType3D type = ls_CartesianSystem);
    virtual ~Placement3D_GetVectorFrom_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlacement3D *_underlying;
    double x1;
    double y1;
    double z1;
    MbeLocalSystemType3D type = ls_CartesianSystem;

    MbVector3D *v;

    int resultType;
};

class Placement3D_GetPointFrom_AsyncWorker : public PromiseWorker
{
  public:
    Placement3D_GetPointFrom_AsyncWorker(MbPlacement3D *_underlying, Napi::Promise::Deferred const &d, double x1,
                                         double y1, double z1, MbeLocalSystemType3D type = ls_CartesianSystem);
    virtual ~Placement3D_GetPointFrom_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlacement3D *_underlying;
    double x1;
    double y1;
    double z1;
    MbeLocalSystemType3D type = ls_CartesianSystem;

    MbCartPoint3D *p;

    int resultType;
};

class Placement3D_GetPointInto_AsyncWorker : public PromiseWorker
{
  public:
    Placement3D_GetPointInto_AsyncWorker(MbPlacement3D *_underlying, Napi::Promise::Deferred const &d, MbCartPoint3D &p,
                                         MbeLocalSystemType3D type = ls_CartesianSystem);
    virtual ~Placement3D_GetPointInto_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPlacement3D *_underlying;
    MbCartPoint3D &p;
    MbeLocalSystemType3D type = ls_CartesianSystem;

    int resultType;
};

#endif
