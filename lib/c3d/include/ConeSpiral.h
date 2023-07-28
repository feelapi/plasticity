// This is a generated file, modify: generate/templates/ConeSpiral.h

#ifndef CONESPIRAL_H
#define CONESPIRAL_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cur_cone_spiral.h>

#include "Spiral.h"
#include "PromiseWorker.h"

class ConeSpiral : public
  Napi::ObjectWrap<ConeSpiral>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbConeSpiral *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        ConeSpiral(const Napi::CallbackInfo& info);

         Napi::Value GetPlaneCurve(const Napi::CallbackInfo& info);
         Napi::Value GetPlaneCurve_async(const Napi::CallbackInfo& info);
         Napi::Value IsPlanar(const Napi::CallbackInfo& info);
         Napi::Value IsPlanar_async(const Napi::CallbackInfo& info);
         Napi::Value IsClosed(const Napi::CallbackInfo& info);
         Napi::Value IsClosed_async(const Napi::CallbackInfo& info);
         Napi::Value IsTouch(const Napi::CallbackInfo& info);
         Napi::Value IsTouch_async(const Napi::CallbackInfo& info);
         Napi::Value GetTMax(const Napi::CallbackInfo& info);
         Napi::Value GetTMax_async(const Napi::CallbackInfo& info);
         Napi::Value GetTMin(const Napi::CallbackInfo& info);
         Napi::Value GetTMin_async(const Napi::CallbackInfo& info);
         Napi::Value GetPeriod(const Napi::CallbackInfo& info);
         Napi::Value GetPeriod_async(const Napi::CallbackInfo& info);
         Napi::Value IsPeriodic(const Napi::CallbackInfo& info);
         Napi::Value IsPeriodic_async(const Napi::CallbackInfo& info);
         Napi::Value IsStraight(const Napi::CallbackInfo& info);
         Napi::Value IsStraight_async(const Napi::CallbackInfo& info);
         Napi::Value Trimmed(const Napi::CallbackInfo& info);
         Napi::Value Trimmed_async(const Napi::CallbackInfo& info);
         Napi::Value Normal(const Napi::CallbackInfo& info);
         Napi::Value Normal_async(const Napi::CallbackInfo& info);
         Napi::Value Tangent(const Napi::CallbackInfo& info);
         Napi::Value Tangent_async(const Napi::CallbackInfo& info);
         Napi::Value BNormal(const Napi::CallbackInfo& info);
         Napi::Value BNormal_async(const Napi::CallbackInfo& info);
         Napi::Value GetCentre(const Napi::CallbackInfo& info);
         Napi::Value GetCentre_async(const Napi::CallbackInfo& info);
         Napi::Value GetLimitPoint(const Napi::CallbackInfo& info);
         Napi::Value GetLimitPoint_async(const Napi::CallbackInfo& info);
         Napi::Value PointOn(const Napi::CallbackInfo& info);
         Napi::Value PointOn_async(const Napi::CallbackInfo& info);
         Napi::Value _PointOn(const Napi::CallbackInfo& info);
         Napi::Value _PointOn_async(const Napi::CallbackInfo& info);
         Napi::Value NearPointProjection(const Napi::CallbackInfo& info);
         Napi::Value NearPointProjection_async(const Napi::CallbackInfo& info);
         Napi::Value GetSurfaceCurve(const Napi::CallbackInfo& info);
         Napi::Value GetSurfaceCurve_async(const Napi::CallbackInfo& info);
         Napi::Value GetWeightCentre(const Napi::CallbackInfo& info);
         Napi::Value GetWeightCentre_async(const Napi::CallbackInfo& info);
         Napi::Value GetBasisCurve(const Napi::CallbackInfo& info);
         Napi::Value GetBasisCurve_async(const Napi::CallbackInfo& info);
         Napi::Value GetBasisPoints(const Napi::CallbackInfo& info);
         Napi::Value GetBasisPoints_async(const Napi::CallbackInfo& info);
         Napi::Value SetBasisPoints(const Napi::CallbackInfo& info);
         Napi::Value SetBasisPoints_async(const Napi::CallbackInfo& info);
         Napi::Value Inverse(const Napi::CallbackInfo& info);
         Napi::Value Inverse_async(const Napi::CallbackInfo& info);
         Napi::Value GetProjection(const Napi::CallbackInfo& info);
         Napi::Value GetProjection_async(const Napi::CallbackInfo& info);
         Napi::Value GetCircleAxis(const Napi::CallbackInfo& info);
         Napi::Value GetCircleAxis_async(const Napi::CallbackInfo& info);
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

    MbConeSpiral * _underlying;

    ~ConeSpiral();


  private:

};


  class ConeSpiral_GetPlaneCurve_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral_GetPlaneCurve_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 bool  saveParams,
                                 PlanarCheckParams  params = PlanarCheckParams());
          virtual ~ConeSpiral_GetPlaneCurve_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;                         bool  saveParams;
                         PlanarCheckParams  params= PlanarCheckParams();

                
                 MbCurve * curve2d;
                
                
                 MbPlacement3D * placement;
                

        int resultType;
  };


  class ConeSpiral_IsPlanar_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral_IsPlanar_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 double  accuracy = METRIC_EPSILON);
          virtual ~ConeSpiral_IsPlanar_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;                         double  accuracy= METRIC_EPSILON;

                
                 bool  _result;
                

        int resultType;
  };


  class ConeSpiral_IsClosed_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral_IsClosed_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ConeSpiral_IsClosed_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class ConeSpiral_IsTouch_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral_IsTouch_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ConeSpiral_IsTouch_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class ConeSpiral_GetTMax_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral_GetTMax_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ConeSpiral_GetTMax_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class ConeSpiral_GetTMin_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral_GetTMin_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ConeSpiral_GetTMin_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class ConeSpiral_GetPeriod_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral_GetPeriod_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ConeSpiral_GetPeriod_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class ConeSpiral_IsPeriodic_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral_IsPeriodic_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ConeSpiral_IsPeriodic_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class ConeSpiral_IsStraight_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral_IsStraight_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 bool  ignoreParams = false);
          virtual ~ConeSpiral_IsStraight_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;                         bool  ignoreParams= false;

                
                 bool  _result;
                

        int resultType;
  };


  class ConeSpiral_Trimmed_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral_Trimmed_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 double  t1,
                                 double  t2,
                                 int  sense);
          virtual ~ConeSpiral_Trimmed_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;                         double  t1;
                         double  t2;
                         int  sense;

                
                 MbCurve3D * _result;
                

        int resultType;
  };


  class ConeSpiral_Normal_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral_Normal_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~ConeSpiral_Normal_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;                         double & t;

                
                 MbVector3D * n;
                

        int resultType;
  };


  class ConeSpiral_Tangent_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral_Tangent_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~ConeSpiral_Tangent_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;                         double & t;

                
                 MbVector3D * tan;
                

        int resultType;
  };


  class ConeSpiral_BNormal_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral_BNormal_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~ConeSpiral_BNormal_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;                         double & t;

                
                 MbVector3D * b;
                

        int resultType;
  };


  class ConeSpiral_GetCentre_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral_GetCentre_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ConeSpiral_GetCentre_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;
                
                 MbCartPoint3D * c;
                

        int resultType;
  };


  class ConeSpiral_GetLimitPoint_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral_GetLimitPoint_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 ptrdiff_t  number);
          virtual ~ConeSpiral_GetLimitPoint_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;                         ptrdiff_t  number;

                
                 MbCartPoint3D * point;
                

        int resultType;
  };


  class ConeSpiral_PointOn_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral_PointOn_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~ConeSpiral_PointOn_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;                         double & t;

                
                 MbCartPoint3D * p;
                

        int resultType;
  };


  class ConeSpiral__PointOn_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral__PointOn_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~ConeSpiral__PointOn_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;                         double & t;

                
                 MbCartPoint3D * p;
                

        int resultType;
  };


  class ConeSpiral_NearPointProjection_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral_NearPointProjection_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCartPoint3D & pnt,
                                 bool  ext,
                                 MbRect1D * tRange = NULL);
          virtual ~ConeSpiral_NearPointProjection_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;                        const MbCartPoint3D & pnt;
                         bool  ext;
                         MbRect1D * tRange= NULL;

                
                 bool  success;
                
                
                 double  t;
                

        int resultType;
  };


  class ConeSpiral_GetSurfaceCurve_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral_GetSurfaceCurve_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 VERSION  version = Math::DefaultMathVersion());
          virtual ~ConeSpiral_GetSurfaceCurve_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;                         VERSION  version= Math::DefaultMathVersion();

                
                 MbCurve * curve2d;
                
                
                 MbSurface * surface;
                

        int resultType;
  };


  class ConeSpiral_GetWeightCentre_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral_GetWeightCentre_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ConeSpiral_GetWeightCentre_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;
                
                 MbCartPoint3D * point;
                

        int resultType;
  };


  class ConeSpiral_GetBasisCurve_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral_GetBasisCurve_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ConeSpiral_GetBasisCurve_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;
                
                const MbCurve3D * _result;
                

        int resultType;
  };


  class ConeSpiral_GetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral_GetBasisPoints_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ConeSpiral_GetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;
                
                 MbControlData3D * cd;
                

        int resultType;
  };


  class ConeSpiral_SetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral_SetBasisPoints_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                const MbControlData3D & cd);
          virtual ~ConeSpiral_SetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;                        const MbControlData3D & cd;


        int resultType;
  };


  class ConeSpiral_Inverse_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral_Inverse_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ConeSpiral_Inverse_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;

        int resultType;
  };


  class ConeSpiral_GetProjection_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral_GetProjection_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                const MbPlacement3D & place,
                                 VERSION  version = Math::DefaultMathVersion());
          virtual ~ConeSpiral_GetProjection_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;                        const MbPlacement3D & place;
                         VERSION  version= Math::DefaultMathVersion();

                
                 MbCurve * _result;
                

        int resultType;
  };


  class ConeSpiral_GetCircleAxis_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral_GetCircleAxis_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ConeSpiral_GetCircleAxis_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;
                
                 bool  success;
                
                
                 MbAxis3D * axis;
                

        int resultType;
  };


  class ConeSpiral_IsA_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral_IsA_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ConeSpiral_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;
                
                 MbeSpaceType  _result;
                

        int resultType;
  };


  class ConeSpiral_Type_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral_Type_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ConeSpiral_Type_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;
                
                 MbeSpaceType  _result;
                

        int resultType;
  };


  class ConeSpiral_Family_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral_Family_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ConeSpiral_Family_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;
                
                 MbeSpaceType  _result;
                

        int resultType;
  };


  class ConeSpiral_Transform_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral_Transform_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                const MbMatrix3D & mat,
                                 MbRegTransform * iReg = NULL);
          virtual ~ConeSpiral_Transform_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;                        const MbMatrix3D & mat;
                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class ConeSpiral_Move_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral_Move_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                const MbVector3D & v,
                                 MbRegTransform * iReg = NULL);
          virtual ~ConeSpiral_Move_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;                        const MbVector3D & v;
                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class ConeSpiral_Rotate_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral_Rotate_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                const MbAxis3D & axis,
                                 double  angle,
                                 MbRegTransform * iReg = NULL);
          virtual ~ConeSpiral_Rotate_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;                        const MbAxis3D & axis;
                         double  angle;
                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class ConeSpiral_Refresh_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral_Refresh_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ConeSpiral_Refresh_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;

        int resultType;
  };


  class ConeSpiral_Duplicate_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral_Duplicate_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRegDuplicate * iReg = NULL);
          virtual ~ConeSpiral_Duplicate_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;                         MbRegDuplicate * iReg= NULL;

                
                 MbSpaceItem * _result;
                

        int resultType;
  };


  class ConeSpiral_AddYourGabaritTo_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral_AddYourGabaritTo_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 MbCube & cube);
          virtual ~ConeSpiral_AddYourGabaritTo_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;                         MbCube & cube;


        int resultType;
  };


  class ConeSpiral_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral_GetUseCount_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ConeSpiral_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class ConeSpiral_AddRef_AsyncWorker : public PromiseWorker {
      public:
          ConeSpiral_AddRef_AsyncWorker(
MbConeSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ConeSpiral_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbConeSpiral * _underlying;

        int resultType;
  };



#endif
