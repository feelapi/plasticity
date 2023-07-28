// This is a generated file, modify: generate/templates/Surface.h

#ifndef SURFACE_H
#define SURFACE_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <surface.h>

#include "SpaceItem.h"
#include "Placement3D.h"
#include "CartPoint.h"
#include "Rect2D.h"
#include "PromiseWorker.h"

class Surface : public
  Napi::ObjectWrap<Surface>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbSurface *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        Surface(const Napi::CallbackInfo& info);

         Napi::Value Cast(const Napi::CallbackInfo& info);
         Napi::Value Cast_async(const Napi::CallbackInfo& info);
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
         Napi::Value PointOn(const Napi::CallbackInfo& info);
         Napi::Value PointOn_async(const Napi::CallbackInfo& info);
         Napi::Value Normal(const Napi::CallbackInfo& info);
         Napi::Value Normal_async(const Napi::CallbackInfo& info);
         Napi::Value GetPlacement(const Napi::CallbackInfo& info);
         Napi::Value GetPlacement_async(const Napi::CallbackInfo& info);
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

    MbSurface * _underlying;

    ~Surface();


  private:

};


  class Surface_GetSurface_AsyncWorker : public PromiseWorker {
      public:
          Surface_GetSurface_AsyncWorker(
MbSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Surface_GetSurface_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSurface * _underlying;
                
                const MbSurface * _result;
                

        int resultType;
  };


  class Surface_GetUEpsilon_AsyncWorker : public PromiseWorker {
      public:
          Surface_GetUEpsilon_AsyncWorker(
MbSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Surface_GetUEpsilon_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSurface * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Surface_GetVEpsilon_AsyncWorker : public PromiseWorker {
      public:
          Surface_GetVEpsilon_AsyncWorker(
MbSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Surface_GetVEpsilon_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSurface * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Surface_GetUMid_AsyncWorker : public PromiseWorker {
      public:
          Surface_GetUMid_AsyncWorker(
MbSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Surface_GetUMid_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSurface * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Surface_GetVMid_AsyncWorker : public PromiseWorker {
      public:
          Surface_GetVMid_AsyncWorker(
MbSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Surface_GetVMid_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSurface * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Surface_GetUMin_AsyncWorker : public PromiseWorker {
      public:
          Surface_GetUMin_AsyncWorker(
MbSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Surface_GetUMin_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSurface * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Surface_GetUMax_AsyncWorker : public PromiseWorker {
      public:
          Surface_GetUMax_AsyncWorker(
MbSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Surface_GetUMax_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSurface * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Surface_GetVMin_AsyncWorker : public PromiseWorker {
      public:
          Surface_GetVMin_AsyncWorker(
MbSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Surface_GetVMin_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSurface * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Surface_GetVMax_AsyncWorker : public PromiseWorker {
      public:
          Surface_GetVMax_AsyncWorker(
MbSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Surface_GetVMax_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSurface * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Surface_GetUParamToUnit_AsyncWorker : public PromiseWorker {
      public:
          Surface_GetUParamToUnit_AsyncWorker(
MbSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Surface_GetUParamToUnit_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSurface * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Surface_GetVParamToUnit_AsyncWorker : public PromiseWorker {
      public:
          Surface_GetVParamToUnit_AsyncWorker(
MbSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Surface_GetVParamToUnit_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSurface * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Surface_GetRadius_AsyncWorker : public PromiseWorker {
      public:
          Surface_GetRadius_AsyncWorker(
MbSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Surface_GetRadius_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSurface * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Surface_PointOn_AsyncWorker : public PromiseWorker {
      public:
          Surface_PointOn_AsyncWorker(
MbSurface * _underlying,            Napi::Promise::Deferred const &d,
                                 MbCartPoint & uv);
          virtual ~Surface_PointOn_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSurface * _underlying;                         MbCartPoint & uv;

                
                 MbCartPoint3D * p;
                

        int resultType;
  };


  class Surface_Normal_AsyncWorker : public PromiseWorker {
      public:
          Surface_Normal_AsyncWorker(
MbSurface * _underlying,            Napi::Promise::Deferred const &d,
                                 double & u,
                                 double & v);
          virtual ~Surface_Normal_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSurface * _underlying;                         double & u;
                         double & v;

                
                 MbVector3D * result;
                

        int resultType;
  };


  class Surface_GetPlacement_AsyncWorker : public PromiseWorker {
      public:
          Surface_GetPlacement_AsyncWorker(
MbSurface * _underlying,            Napi::Promise::Deferred const &d,
                                 bool  exact = false);
          virtual ~Surface_GetPlacement_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSurface * _underlying;                         bool  exact= false;

                
                 MbPlacement3D * place;
                

        int resultType;
  };


  class Surface_NearDirectPointProjection_AsyncWorker : public PromiseWorker {
      public:
          Surface_NearDirectPointProjection_AsyncWorker(
MbSurface * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCartPoint3D & pnt,
                                const MbVector3D & vect,
                                 bool  ext,
                                 MbRect2D * uvRange = nullptr,
                                 bool  onlyPositiveDirection = false);
          virtual ~Surface_NearDirectPointProjection_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSurface * _underlying;                        const MbCartPoint3D & pnt;
                        const MbVector3D & vect;
                         bool  ext;
                         MbRect2D * uvRange= nullptr;
                         bool  onlyPositiveDirection= false;

                
                 double  u;
                
                
                 double  v;
                

        int resultType;
  };


  class Surface_IsA_AsyncWorker : public PromiseWorker {
      public:
          Surface_IsA_AsyncWorker(
MbSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Surface_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSurface * _underlying;
                
                 MbeSpaceType  _result;
                

        int resultType;
  };


  class Surface_Type_AsyncWorker : public PromiseWorker {
      public:
          Surface_Type_AsyncWorker(
MbSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Surface_Type_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSurface * _underlying;
                
                 MbeSpaceType  _result;
                

        int resultType;
  };


  class Surface_Family_AsyncWorker : public PromiseWorker {
      public:
          Surface_Family_AsyncWorker(
MbSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Surface_Family_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSurface * _underlying;
                
                 MbeSpaceType  _result;
                

        int resultType;
  };


  class Surface_Transform_AsyncWorker : public PromiseWorker {
      public:
          Surface_Transform_AsyncWorker(
MbSurface * _underlying,            Napi::Promise::Deferred const &d,
                                const MbMatrix3D & mat,
                                 MbRegTransform * iReg = NULL);
          virtual ~Surface_Transform_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSurface * _underlying;                        const MbMatrix3D & mat;
                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class Surface_Move_AsyncWorker : public PromiseWorker {
      public:
          Surface_Move_AsyncWorker(
MbSurface * _underlying,            Napi::Promise::Deferred const &d,
                                const MbVector3D & v,
                                 MbRegTransform * iReg = NULL);
          virtual ~Surface_Move_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSurface * _underlying;                        const MbVector3D & v;
                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class Surface_Rotate_AsyncWorker : public PromiseWorker {
      public:
          Surface_Rotate_AsyncWorker(
MbSurface * _underlying,            Napi::Promise::Deferred const &d,
                                const MbAxis3D & axis,
                                 double  angle,
                                 MbRegTransform * iReg = NULL);
          virtual ~Surface_Rotate_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSurface * _underlying;                        const MbAxis3D & axis;
                         double  angle;
                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class Surface_Refresh_AsyncWorker : public PromiseWorker {
      public:
          Surface_Refresh_AsyncWorker(
MbSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Surface_Refresh_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSurface * _underlying;

        int resultType;
  };


  class Surface_Duplicate_AsyncWorker : public PromiseWorker {
      public:
          Surface_Duplicate_AsyncWorker(
MbSurface * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRegDuplicate * iReg = NULL);
          virtual ~Surface_Duplicate_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSurface * _underlying;                         MbRegDuplicate * iReg= NULL;

                
                 MbSpaceItem * _result;
                

        int resultType;
  };


  class Surface_AddYourGabaritTo_AsyncWorker : public PromiseWorker {
      public:
          Surface_AddYourGabaritTo_AsyncWorker(
MbSurface * _underlying,            Napi::Promise::Deferred const &d,
                                 MbCube & cube);
          virtual ~Surface_AddYourGabaritTo_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSurface * _underlying;                         MbCube & cube;


        int resultType;
  };


  class Surface_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          Surface_GetUseCount_AsyncWorker(
MbSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Surface_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSurface * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class Surface_AddRef_AsyncWorker : public PromiseWorker {
      public:
          Surface_AddRef_AsyncWorker(
MbSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Surface_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSurface * _underlying;

        int resultType;
  };



#endif
