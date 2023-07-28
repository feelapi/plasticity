// This is a generated file, modify: generate/templates/CurveSpiral.h

#ifndef CURVESPIRAL_H
#define CURVESPIRAL_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cur_curve_spiral.h>

#include "Spiral.h"
#include "PromiseWorker.h"

class CurveSpiral : public
  Napi::ObjectWrap<CurveSpiral>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbCurveSpiral *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        CurveSpiral(const Napi::CallbackInfo& info);

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

    MbCurveSpiral * _underlying;

    ~CurveSpiral();


  private:

};


  class CurveSpiral_GetPlaneCurve_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral_GetPlaneCurve_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 bool  saveParams,
                                 PlanarCheckParams  params = PlanarCheckParams());
          virtual ~CurveSpiral_GetPlaneCurve_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;                         bool  saveParams;
                         PlanarCheckParams  params= PlanarCheckParams();

                
                 MbCurve * curve2d;
                
                
                 MbPlacement3D * placement;
                

        int resultType;
  };


  class CurveSpiral_IsPlanar_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral_IsPlanar_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 double  accuracy = METRIC_EPSILON);
          virtual ~CurveSpiral_IsPlanar_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;                         double  accuracy= METRIC_EPSILON;

                
                 bool  _result;
                

        int resultType;
  };


  class CurveSpiral_IsClosed_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral_IsClosed_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveSpiral_IsClosed_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class CurveSpiral_IsTouch_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral_IsTouch_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveSpiral_IsTouch_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class CurveSpiral_GetTMax_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral_GetTMax_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveSpiral_GetTMax_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class CurveSpiral_GetTMin_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral_GetTMin_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveSpiral_GetTMin_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class CurveSpiral_GetPeriod_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral_GetPeriod_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveSpiral_GetPeriod_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class CurveSpiral_IsPeriodic_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral_IsPeriodic_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveSpiral_IsPeriodic_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class CurveSpiral_IsStraight_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral_IsStraight_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 bool  ignoreParams = false);
          virtual ~CurveSpiral_IsStraight_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;                         bool  ignoreParams= false;

                
                 bool  _result;
                

        int resultType;
  };


  class CurveSpiral_Trimmed_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral_Trimmed_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 double  t1,
                                 double  t2,
                                 int  sense);
          virtual ~CurveSpiral_Trimmed_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;                         double  t1;
                         double  t2;
                         int  sense;

                
                 MbCurve3D * _result;
                

        int resultType;
  };


  class CurveSpiral_Normal_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral_Normal_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~CurveSpiral_Normal_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;                         double & t;

                
                 MbVector3D * n;
                

        int resultType;
  };


  class CurveSpiral_Tangent_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral_Tangent_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~CurveSpiral_Tangent_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;                         double & t;

                
                 MbVector3D * tan;
                

        int resultType;
  };


  class CurveSpiral_BNormal_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral_BNormal_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~CurveSpiral_BNormal_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;                         double & t;

                
                 MbVector3D * b;
                

        int resultType;
  };


  class CurveSpiral_GetCentre_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral_GetCentre_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveSpiral_GetCentre_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;
                
                 MbCartPoint3D * c;
                

        int resultType;
  };


  class CurveSpiral_GetLimitPoint_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral_GetLimitPoint_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 ptrdiff_t  number);
          virtual ~CurveSpiral_GetLimitPoint_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;                         ptrdiff_t  number;

                
                 MbCartPoint3D * point;
                

        int resultType;
  };


  class CurveSpiral_PointOn_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral_PointOn_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~CurveSpiral_PointOn_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;                         double & t;

                
                 MbCartPoint3D * p;
                

        int resultType;
  };


  class CurveSpiral__PointOn_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral__PointOn_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~CurveSpiral__PointOn_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;                         double & t;

                
                 MbCartPoint3D * p;
                

        int resultType;
  };


  class CurveSpiral_NearPointProjection_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral_NearPointProjection_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCartPoint3D & pnt,
                                 bool  ext,
                                 MbRect1D * tRange = NULL);
          virtual ~CurveSpiral_NearPointProjection_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;                        const MbCartPoint3D & pnt;
                         bool  ext;
                         MbRect1D * tRange= NULL;

                
                 bool  success;
                
                
                 double  t;
                

        int resultType;
  };


  class CurveSpiral_GetSurfaceCurve_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral_GetSurfaceCurve_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 VERSION  version = Math::DefaultMathVersion());
          virtual ~CurveSpiral_GetSurfaceCurve_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;                         VERSION  version= Math::DefaultMathVersion();

                
                 MbCurve * curve2d;
                
                
                 MbSurface * surface;
                

        int resultType;
  };


  class CurveSpiral_GetWeightCentre_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral_GetWeightCentre_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveSpiral_GetWeightCentre_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;
                
                 MbCartPoint3D * point;
                

        int resultType;
  };


  class CurveSpiral_GetBasisCurve_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral_GetBasisCurve_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveSpiral_GetBasisCurve_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;
                
                const MbCurve3D * _result;
                

        int resultType;
  };


  class CurveSpiral_GetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral_GetBasisPoints_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveSpiral_GetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;
                
                 MbControlData3D * cd;
                

        int resultType;
  };


  class CurveSpiral_SetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral_SetBasisPoints_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                const MbControlData3D & cd);
          virtual ~CurveSpiral_SetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;                        const MbControlData3D & cd;


        int resultType;
  };


  class CurveSpiral_Inverse_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral_Inverse_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveSpiral_Inverse_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;

        int resultType;
  };


  class CurveSpiral_GetProjection_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral_GetProjection_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                const MbPlacement3D & place,
                                 VERSION  version = Math::DefaultMathVersion());
          virtual ~CurveSpiral_GetProjection_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;                        const MbPlacement3D & place;
                         VERSION  version= Math::DefaultMathVersion();

                
                 MbCurve * _result;
                

        int resultType;
  };


  class CurveSpiral_GetCircleAxis_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral_GetCircleAxis_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveSpiral_GetCircleAxis_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;
                
                 bool  success;
                
                
                 MbAxis3D * axis;
                

        int resultType;
  };


  class CurveSpiral_IsA_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral_IsA_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveSpiral_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;
                
                 MbeSpaceType  _result;
                

        int resultType;
  };


  class CurveSpiral_Type_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral_Type_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveSpiral_Type_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;
                
                 MbeSpaceType  _result;
                

        int resultType;
  };


  class CurveSpiral_Family_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral_Family_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveSpiral_Family_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;
                
                 MbeSpaceType  _result;
                

        int resultType;
  };


  class CurveSpiral_Transform_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral_Transform_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                const MbMatrix3D & mat,
                                 MbRegTransform * iReg = NULL);
          virtual ~CurveSpiral_Transform_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;                        const MbMatrix3D & mat;
                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class CurveSpiral_Move_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral_Move_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                const MbVector3D & v,
                                 MbRegTransform * iReg = NULL);
          virtual ~CurveSpiral_Move_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;                        const MbVector3D & v;
                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class CurveSpiral_Rotate_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral_Rotate_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                const MbAxis3D & axis,
                                 double  angle,
                                 MbRegTransform * iReg = NULL);
          virtual ~CurveSpiral_Rotate_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;                        const MbAxis3D & axis;
                         double  angle;
                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class CurveSpiral_Refresh_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral_Refresh_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveSpiral_Refresh_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;

        int resultType;
  };


  class CurveSpiral_Duplicate_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral_Duplicate_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRegDuplicate * iReg = NULL);
          virtual ~CurveSpiral_Duplicate_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;                         MbRegDuplicate * iReg= NULL;

                
                 MbSpaceItem * _result;
                

        int resultType;
  };


  class CurveSpiral_AddYourGabaritTo_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral_AddYourGabaritTo_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 MbCube & cube);
          virtual ~CurveSpiral_AddYourGabaritTo_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;                         MbCube & cube;


        int resultType;
  };


  class CurveSpiral_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral_GetUseCount_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveSpiral_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class CurveSpiral_AddRef_AsyncWorker : public PromiseWorker {
      public:
          CurveSpiral_AddRef_AsyncWorker(
MbCurveSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveSpiral_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSpiral * _underlying;

        int resultType;
  };



#endif
