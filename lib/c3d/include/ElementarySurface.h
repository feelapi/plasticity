// This is a generated file, modify: generate/templates/ElementarySurface.h

#ifndef ELEMENTARYSURFACE_H
#define ELEMENTARYSURFACE_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <surf_elementary_surface.h>

#include "Surface.h"
#include "PromiseWorker.h"

class ElementarySurface : public
  Napi::ObjectWrap<ElementarySurface>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbElementarySurface *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        ElementarySurface(const Napi::CallbackInfo& info);

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

    MbElementarySurface * _underlying;

    ~ElementarySurface();


  private:

};


  class ElementarySurface_GetSurface_AsyncWorker : public PromiseWorker {
      public:
          ElementarySurface_GetSurface_AsyncWorker(
MbElementarySurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ElementarySurface_GetSurface_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySurface * _underlying;
                
                const MbSurface * _result;
                

        int resultType;
  };


  class ElementarySurface_GetUEpsilon_AsyncWorker : public PromiseWorker {
      public:
          ElementarySurface_GetUEpsilon_AsyncWorker(
MbElementarySurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ElementarySurface_GetUEpsilon_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySurface * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class ElementarySurface_GetVEpsilon_AsyncWorker : public PromiseWorker {
      public:
          ElementarySurface_GetVEpsilon_AsyncWorker(
MbElementarySurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ElementarySurface_GetVEpsilon_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySurface * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class ElementarySurface_GetUMid_AsyncWorker : public PromiseWorker {
      public:
          ElementarySurface_GetUMid_AsyncWorker(
MbElementarySurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ElementarySurface_GetUMid_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySurface * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class ElementarySurface_GetVMid_AsyncWorker : public PromiseWorker {
      public:
          ElementarySurface_GetVMid_AsyncWorker(
MbElementarySurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ElementarySurface_GetVMid_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySurface * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class ElementarySurface_GetUMin_AsyncWorker : public PromiseWorker {
      public:
          ElementarySurface_GetUMin_AsyncWorker(
MbElementarySurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ElementarySurface_GetUMin_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySurface * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class ElementarySurface_GetUMax_AsyncWorker : public PromiseWorker {
      public:
          ElementarySurface_GetUMax_AsyncWorker(
MbElementarySurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ElementarySurface_GetUMax_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySurface * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class ElementarySurface_GetVMin_AsyncWorker : public PromiseWorker {
      public:
          ElementarySurface_GetVMin_AsyncWorker(
MbElementarySurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ElementarySurface_GetVMin_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySurface * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class ElementarySurface_GetVMax_AsyncWorker : public PromiseWorker {
      public:
          ElementarySurface_GetVMax_AsyncWorker(
MbElementarySurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ElementarySurface_GetVMax_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySurface * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class ElementarySurface_GetUParamToUnit_AsyncWorker : public PromiseWorker {
      public:
          ElementarySurface_GetUParamToUnit_AsyncWorker(
MbElementarySurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ElementarySurface_GetUParamToUnit_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySurface * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class ElementarySurface_GetVParamToUnit_AsyncWorker : public PromiseWorker {
      public:
          ElementarySurface_GetVParamToUnit_AsyncWorker(
MbElementarySurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ElementarySurface_GetVParamToUnit_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySurface * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class ElementarySurface_GetRadius_AsyncWorker : public PromiseWorker {
      public:
          ElementarySurface_GetRadius_AsyncWorker(
MbElementarySurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ElementarySurface_GetRadius_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySurface * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class ElementarySurface_Normal_AsyncWorker : public PromiseWorker {
      public:
          ElementarySurface_Normal_AsyncWorker(
MbElementarySurface * _underlying,            Napi::Promise::Deferred const &d,
                                 double & u,
                                 double & v);
          virtual ~ElementarySurface_Normal_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySurface * _underlying;                         double & u;
                         double & v;

                
                 MbVector3D * result;
                

        int resultType;
  };


  class ElementarySurface_NearDirectPointProjection_AsyncWorker : public PromiseWorker {
      public:
          ElementarySurface_NearDirectPointProjection_AsyncWorker(
MbElementarySurface * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCartPoint3D & pnt,
                                const MbVector3D & vect,
                                 bool  ext,
                                 MbRect2D * uvRange = nullptr,
                                 bool  onlyPositiveDirection = false);
          virtual ~ElementarySurface_NearDirectPointProjection_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySurface * _underlying;                        const MbCartPoint3D & pnt;
                        const MbVector3D & vect;
                         bool  ext;
                         MbRect2D * uvRange= nullptr;
                         bool  onlyPositiveDirection= false;

                
                 double  u;
                
                
                 double  v;
                

        int resultType;
  };


  class ElementarySurface_IsA_AsyncWorker : public PromiseWorker {
      public:
          ElementarySurface_IsA_AsyncWorker(
MbElementarySurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ElementarySurface_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySurface * _underlying;
                
                 MbeSpaceType  _result;
                

        int resultType;
  };


  class ElementarySurface_Type_AsyncWorker : public PromiseWorker {
      public:
          ElementarySurface_Type_AsyncWorker(
MbElementarySurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ElementarySurface_Type_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySurface * _underlying;
                
                 MbeSpaceType  _result;
                

        int resultType;
  };


  class ElementarySurface_Family_AsyncWorker : public PromiseWorker {
      public:
          ElementarySurface_Family_AsyncWorker(
MbElementarySurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ElementarySurface_Family_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySurface * _underlying;
                
                 MbeSpaceType  _result;
                

        int resultType;
  };


  class ElementarySurface_Transform_AsyncWorker : public PromiseWorker {
      public:
          ElementarySurface_Transform_AsyncWorker(
MbElementarySurface * _underlying,            Napi::Promise::Deferred const &d,
                                const MbMatrix3D & mat,
                                 MbRegTransform * iReg = NULL);
          virtual ~ElementarySurface_Transform_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySurface * _underlying;                        const MbMatrix3D & mat;
                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class ElementarySurface_Move_AsyncWorker : public PromiseWorker {
      public:
          ElementarySurface_Move_AsyncWorker(
MbElementarySurface * _underlying,            Napi::Promise::Deferred const &d,
                                const MbVector3D & v,
                                 MbRegTransform * iReg = NULL);
          virtual ~ElementarySurface_Move_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySurface * _underlying;                        const MbVector3D & v;
                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class ElementarySurface_Rotate_AsyncWorker : public PromiseWorker {
      public:
          ElementarySurface_Rotate_AsyncWorker(
MbElementarySurface * _underlying,            Napi::Promise::Deferred const &d,
                                const MbAxis3D & axis,
                                 double  angle,
                                 MbRegTransform * iReg = NULL);
          virtual ~ElementarySurface_Rotate_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySurface * _underlying;                        const MbAxis3D & axis;
                         double  angle;
                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class ElementarySurface_Refresh_AsyncWorker : public PromiseWorker {
      public:
          ElementarySurface_Refresh_AsyncWorker(
MbElementarySurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ElementarySurface_Refresh_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySurface * _underlying;

        int resultType;
  };


  class ElementarySurface_Duplicate_AsyncWorker : public PromiseWorker {
      public:
          ElementarySurface_Duplicate_AsyncWorker(
MbElementarySurface * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRegDuplicate * iReg = NULL);
          virtual ~ElementarySurface_Duplicate_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySurface * _underlying;                         MbRegDuplicate * iReg= NULL;

                
                 MbSpaceItem * _result;
                

        int resultType;
  };


  class ElementarySurface_AddYourGabaritTo_AsyncWorker : public PromiseWorker {
      public:
          ElementarySurface_AddYourGabaritTo_AsyncWorker(
MbElementarySurface * _underlying,            Napi::Promise::Deferred const &d,
                                 MbCube & cube);
          virtual ~ElementarySurface_AddYourGabaritTo_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySurface * _underlying;                         MbCube & cube;


        int resultType;
  };


  class ElementarySurface_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          ElementarySurface_GetUseCount_AsyncWorker(
MbElementarySurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ElementarySurface_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySurface * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class ElementarySurface_AddRef_AsyncWorker : public PromiseWorker {
      public:
          ElementarySurface_AddRef_AsyncWorker(
MbElementarySurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ElementarySurface_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySurface * _underlying;

        int resultType;
  };



#endif
