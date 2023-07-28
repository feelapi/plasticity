// This is a generated file, modify: generate/templates/Plane.h

#ifndef PLANE_H
#define PLANE_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <surf_plane.h>

#include "CartPoint3D.h"
#include "Surface.h"
#include "PromiseWorker.h"

class Plane : public
  Napi::ObjectWrap<Plane>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbPlane *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        Plane(const Napi::CallbackInfo& info);

         Napi::Value GetSurface(const Napi::CallbackInfo& info);
         Napi::Value GetSurface_async(const Napi::CallbackInfo& info);
         Napi::Value GetUEpsilon(const Napi::CallbackInfo& info);
         Napi::Value GetUEpsilon_async(const Napi::CallbackInfo& info);
         Napi::Value GetVEpsilon(const Napi::CallbackInfo& info);
         Napi::Value GetVEpsilon_async(const Napi::CallbackInfo& info);
         Napi::Value GetUMid(const Napi::CallbackInfo& info);
         Napi::Value GetUMid_async(const Napi::CallbackInfo& info);
         Napi::Value GetVMid(const Napi::CallbackInfo& info);
         Napi::Value GetVMid_async(const Napi::CallbackInfo& info);
         Napi::Value GetUMin(const Napi::CallbackInfo& info);
         Napi::Value GetUMin_async(const Napi::CallbackInfo& info);
         Napi::Value GetUMax(const Napi::CallbackInfo& info);
         Napi::Value GetUMax_async(const Napi::CallbackInfo& info);
         Napi::Value GetVMin(const Napi::CallbackInfo& info);
         Napi::Value GetVMin_async(const Napi::CallbackInfo& info);
         Napi::Value GetVMax(const Napi::CallbackInfo& info);
         Napi::Value GetVMax_async(const Napi::CallbackInfo& info);
         Napi::Value GetUParamToUnit(const Napi::CallbackInfo& info);
         Napi::Value GetUParamToUnit_async(const Napi::CallbackInfo& info);
         Napi::Value GetVParamToUnit(const Napi::CallbackInfo& info);
         Napi::Value GetVParamToUnit_async(const Napi::CallbackInfo& info);
         Napi::Value GetRadius(const Napi::CallbackInfo& info);
         Napi::Value GetRadius_async(const Napi::CallbackInfo& info);
         Napi::Value Normal(const Napi::CallbackInfo& info);
         Napi::Value Normal_async(const Napi::CallbackInfo& info);
         Napi::Value NearDirectPointProjection(const Napi::CallbackInfo& info);
         Napi::Value NearDirectPointProjection_async(const Napi::CallbackInfo& info);
         Napi::Value IsA(const Napi::CallbackInfo& info);
         Napi::Value IsA_async(const Napi::CallbackInfo& info);
         Napi::Value Type(const Napi::CallbackInfo& info);
         Napi::Value Type_async(const Napi::CallbackInfo& info);
         Napi::Value Family(const Napi::CallbackInfo& info);
         Napi::Value Family_async(const Napi::CallbackInfo& info);
         Napi::Value Transform(const Napi::CallbackInfo& info);
         Napi::Value Transform_async(const Napi::CallbackInfo& info);
         Napi::Value Move(const Napi::CallbackInfo& info);
         Napi::Value Move_async(const Napi::CallbackInfo& info);
         Napi::Value Rotate(const Napi::CallbackInfo& info);
         Napi::Value Rotate_async(const Napi::CallbackInfo& info);
         Napi::Value Refresh(const Napi::CallbackInfo& info);
         Napi::Value Refresh_async(const Napi::CallbackInfo& info);
         Napi::Value Duplicate(const Napi::CallbackInfo& info);
         Napi::Value Duplicate_async(const Napi::CallbackInfo& info);
         Napi::Value AddYourGabaritTo(const Napi::CallbackInfo& info);
         Napi::Value AddYourGabaritTo_async(const Napi::CallbackInfo& info);
         Napi::Value GetUseCount(const Napi::CallbackInfo& info);
         Napi::Value GetUseCount_async(const Napi::CallbackInfo& info);
         Napi::Value AddRef(const Napi::CallbackInfo& info);
         Napi::Value AddRef_async(const Napi::CallbackInfo& info);
        Napi::Value Id(const Napi::CallbackInfo& info);

    MbPlane * _underlying;

    ~Plane();


  private:

};


  class Plane_GetSurface_AsyncWorker : public PromiseWorker {
      public:
          Plane_GetSurface_AsyncWorker(
MbPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Plane_GetSurface_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlane * _underlying;
                
                const MbSurface * _result;
                

        int resultType;
  };


  class Plane_GetUEpsilon_AsyncWorker : public PromiseWorker {
      public:
          Plane_GetUEpsilon_AsyncWorker(
MbPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Plane_GetUEpsilon_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlane * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Plane_GetVEpsilon_AsyncWorker : public PromiseWorker {
      public:
          Plane_GetVEpsilon_AsyncWorker(
MbPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Plane_GetVEpsilon_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlane * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Plane_GetUMid_AsyncWorker : public PromiseWorker {
      public:
          Plane_GetUMid_AsyncWorker(
MbPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Plane_GetUMid_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlane * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Plane_GetVMid_AsyncWorker : public PromiseWorker {
      public:
          Plane_GetVMid_AsyncWorker(
MbPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Plane_GetVMid_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlane * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Plane_GetUMin_AsyncWorker : public PromiseWorker {
      public:
          Plane_GetUMin_AsyncWorker(
MbPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Plane_GetUMin_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlane * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Plane_GetUMax_AsyncWorker : public PromiseWorker {
      public:
          Plane_GetUMax_AsyncWorker(
MbPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Plane_GetUMax_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlane * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Plane_GetVMin_AsyncWorker : public PromiseWorker {
      public:
          Plane_GetVMin_AsyncWorker(
MbPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Plane_GetVMin_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlane * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Plane_GetVMax_AsyncWorker : public PromiseWorker {
      public:
          Plane_GetVMax_AsyncWorker(
MbPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Plane_GetVMax_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlane * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Plane_GetUParamToUnit_AsyncWorker : public PromiseWorker {
      public:
          Plane_GetUParamToUnit_AsyncWorker(
MbPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Plane_GetUParamToUnit_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlane * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Plane_GetVParamToUnit_AsyncWorker : public PromiseWorker {
      public:
          Plane_GetVParamToUnit_AsyncWorker(
MbPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Plane_GetVParamToUnit_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlane * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Plane_GetRadius_AsyncWorker : public PromiseWorker {
      public:
          Plane_GetRadius_AsyncWorker(
MbPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Plane_GetRadius_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlane * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Plane_Normal_AsyncWorker : public PromiseWorker {
      public:
          Plane_Normal_AsyncWorker(
MbPlane * _underlying,            Napi::Promise::Deferred const &d,
                                 double & u,
                                 double & v);
          virtual ~Plane_Normal_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlane * _underlying;                         double & u;
                         double & v;

                
                 MbVector3D * result;
                

        int resultType;
  };


  class Plane_NearDirectPointProjection_AsyncWorker : public PromiseWorker {
      public:
          Plane_NearDirectPointProjection_AsyncWorker(
MbPlane * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCartPoint3D & pnt,
                                const MbVector3D & vect,
                                 bool  ext,
                                 MbRect2D * uvRange = nullptr,
                                 bool  onlyPositiveDirection = false);
          virtual ~Plane_NearDirectPointProjection_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlane * _underlying;                        const MbCartPoint3D & pnt;
                        const MbVector3D & vect;
                         bool  ext;
                         MbRect2D * uvRange= nullptr;
                         bool  onlyPositiveDirection= false;

                
                 double  u;
                
                
                 double  v;
                

        int resultType;
  };


  class Plane_IsA_AsyncWorker : public PromiseWorker {
      public:
          Plane_IsA_AsyncWorker(
MbPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Plane_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlane * _underlying;
                
                 MbeSpaceType  _result;
                

        int resultType;
  };


  class Plane_Type_AsyncWorker : public PromiseWorker {
      public:
          Plane_Type_AsyncWorker(
MbPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Plane_Type_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlane * _underlying;
                
                 MbeSpaceType  _result;
                

        int resultType;
  };


  class Plane_Family_AsyncWorker : public PromiseWorker {
      public:
          Plane_Family_AsyncWorker(
MbPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Plane_Family_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlane * _underlying;
                
                 MbeSpaceType  _result;
                

        int resultType;
  };


  class Plane_Transform_AsyncWorker : public PromiseWorker {
      public:
          Plane_Transform_AsyncWorker(
MbPlane * _underlying,            Napi::Promise::Deferred const &d,
                                const MbMatrix3D & mat,
                                 MbRegTransform * iReg = NULL);
          virtual ~Plane_Transform_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlane * _underlying;                        const MbMatrix3D & mat;
                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class Plane_Move_AsyncWorker : public PromiseWorker {
      public:
          Plane_Move_AsyncWorker(
MbPlane * _underlying,            Napi::Promise::Deferred const &d,
                                const MbVector3D & v,
                                 MbRegTransform * iReg = NULL);
          virtual ~Plane_Move_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlane * _underlying;                        const MbVector3D & v;
                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class Plane_Rotate_AsyncWorker : public PromiseWorker {
      public:
          Plane_Rotate_AsyncWorker(
MbPlane * _underlying,            Napi::Promise::Deferred const &d,
                                const MbAxis3D & axis,
                                 double  angle,
                                 MbRegTransform * iReg = NULL);
          virtual ~Plane_Rotate_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlane * _underlying;                        const MbAxis3D & axis;
                         double  angle;
                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class Plane_Refresh_AsyncWorker : public PromiseWorker {
      public:
          Plane_Refresh_AsyncWorker(
MbPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Plane_Refresh_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlane * _underlying;

        int resultType;
  };


  class Plane_Duplicate_AsyncWorker : public PromiseWorker {
      public:
          Plane_Duplicate_AsyncWorker(
MbPlane * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRegDuplicate * iReg = NULL);
          virtual ~Plane_Duplicate_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlane * _underlying;                         MbRegDuplicate * iReg= NULL;

                
                 MbSpaceItem * _result;
                

        int resultType;
  };


  class Plane_AddYourGabaritTo_AsyncWorker : public PromiseWorker {
      public:
          Plane_AddYourGabaritTo_AsyncWorker(
MbPlane * _underlying,            Napi::Promise::Deferred const &d,
                                 MbCube & cube);
          virtual ~Plane_AddYourGabaritTo_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlane * _underlying;                         MbCube & cube;


        int resultType;
  };


  class Plane_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          Plane_GetUseCount_AsyncWorker(
MbPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Plane_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlane * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class Plane_AddRef_AsyncWorker : public PromiseWorker {
      public:
          Plane_AddRef_AsyncWorker(
MbPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Plane_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlane * _underlying;

        int resultType;
  };



#endif
