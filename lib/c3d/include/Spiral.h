// This is a generated file, modify: generate/templates/Spiral.h

#ifndef SPIRAL_H
#define SPIRAL_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cur_spiral.h>

#include "Curve3D.h"
#include "PromiseWorker.h"

class Spiral : public
  Napi::ObjectWrap<Spiral>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbSpiral *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        Spiral(const Napi::CallbackInfo& info);

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

    MbSpiral * _underlying;

    ~Spiral();


  private:

};


  class Spiral_GetPlaneCurve_AsyncWorker : public PromiseWorker {
      public:
          Spiral_GetPlaneCurve_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 bool  saveParams,
                                 PlanarCheckParams  params = PlanarCheckParams());
          virtual ~Spiral_GetPlaneCurve_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;                         bool  saveParams;
                         PlanarCheckParams  params= PlanarCheckParams();

                
                 MbCurve * curve2d;
                
                
                 MbPlacement3D * placement;
                

        int resultType;
  };


  class Spiral_IsPlanar_AsyncWorker : public PromiseWorker {
      public:
          Spiral_IsPlanar_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 double  accuracy = METRIC_EPSILON);
          virtual ~Spiral_IsPlanar_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;                         double  accuracy= METRIC_EPSILON;

                
                 bool  _result;
                

        int resultType;
  };


  class Spiral_IsClosed_AsyncWorker : public PromiseWorker {
      public:
          Spiral_IsClosed_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Spiral_IsClosed_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class Spiral_IsTouch_AsyncWorker : public PromiseWorker {
      public:
          Spiral_IsTouch_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Spiral_IsTouch_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class Spiral_GetTMax_AsyncWorker : public PromiseWorker {
      public:
          Spiral_GetTMax_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Spiral_GetTMax_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Spiral_GetTMin_AsyncWorker : public PromiseWorker {
      public:
          Spiral_GetTMin_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Spiral_GetTMin_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Spiral_GetPeriod_AsyncWorker : public PromiseWorker {
      public:
          Spiral_GetPeriod_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Spiral_GetPeriod_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Spiral_IsPeriodic_AsyncWorker : public PromiseWorker {
      public:
          Spiral_IsPeriodic_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Spiral_IsPeriodic_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class Spiral_IsStraight_AsyncWorker : public PromiseWorker {
      public:
          Spiral_IsStraight_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 bool  ignoreParams = false);
          virtual ~Spiral_IsStraight_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;                         bool  ignoreParams= false;

                
                 bool  _result;
                

        int resultType;
  };


  class Spiral_Trimmed_AsyncWorker : public PromiseWorker {
      public:
          Spiral_Trimmed_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 double  t1,
                                 double  t2,
                                 int  sense);
          virtual ~Spiral_Trimmed_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;                         double  t1;
                         double  t2;
                         int  sense;

                
                 MbCurve3D * _result;
                

        int resultType;
  };


  class Spiral_Normal_AsyncWorker : public PromiseWorker {
      public:
          Spiral_Normal_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~Spiral_Normal_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;                         double & t;

                
                 MbVector3D * n;
                

        int resultType;
  };


  class Spiral_Tangent_AsyncWorker : public PromiseWorker {
      public:
          Spiral_Tangent_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~Spiral_Tangent_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;                         double & t;

                
                 MbVector3D * tan;
                

        int resultType;
  };


  class Spiral_BNormal_AsyncWorker : public PromiseWorker {
      public:
          Spiral_BNormal_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~Spiral_BNormal_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;                         double & t;

                
                 MbVector3D * b;
                

        int resultType;
  };


  class Spiral_GetCentre_AsyncWorker : public PromiseWorker {
      public:
          Spiral_GetCentre_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Spiral_GetCentre_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;
                
                 MbCartPoint3D * c;
                

        int resultType;
  };


  class Spiral_GetLimitPoint_AsyncWorker : public PromiseWorker {
      public:
          Spiral_GetLimitPoint_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 ptrdiff_t  number);
          virtual ~Spiral_GetLimitPoint_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;                         ptrdiff_t  number;

                
                 MbCartPoint3D * point;
                

        int resultType;
  };


  class Spiral_PointOn_AsyncWorker : public PromiseWorker {
      public:
          Spiral_PointOn_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~Spiral_PointOn_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;                         double & t;

                
                 MbCartPoint3D * p;
                

        int resultType;
  };


  class Spiral__PointOn_AsyncWorker : public PromiseWorker {
      public:
          Spiral__PointOn_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~Spiral__PointOn_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;                         double & t;

                
                 MbCartPoint3D * p;
                

        int resultType;
  };


  class Spiral_NearPointProjection_AsyncWorker : public PromiseWorker {
      public:
          Spiral_NearPointProjection_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCartPoint3D & pnt,
                                 bool  ext,
                                 MbRect1D * tRange = NULL);
          virtual ~Spiral_NearPointProjection_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;                        const MbCartPoint3D & pnt;
                         bool  ext;
                         MbRect1D * tRange= NULL;

                
                 bool  success;
                
                
                 double  t;
                

        int resultType;
  };


  class Spiral_GetSurfaceCurve_AsyncWorker : public PromiseWorker {
      public:
          Spiral_GetSurfaceCurve_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 VERSION  version = Math::DefaultMathVersion());
          virtual ~Spiral_GetSurfaceCurve_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;                         VERSION  version= Math::DefaultMathVersion();

                
                 MbCurve * curve2d;
                
                
                 MbSurface * surface;
                

        int resultType;
  };


  class Spiral_GetWeightCentre_AsyncWorker : public PromiseWorker {
      public:
          Spiral_GetWeightCentre_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Spiral_GetWeightCentre_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;
                
                 MbCartPoint3D * point;
                

        int resultType;
  };


  class Spiral_GetBasisCurve_AsyncWorker : public PromiseWorker {
      public:
          Spiral_GetBasisCurve_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Spiral_GetBasisCurve_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;
                
                const MbCurve3D * _result;
                

        int resultType;
  };


  class Spiral_GetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          Spiral_GetBasisPoints_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Spiral_GetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;
                
                 MbControlData3D * cd;
                

        int resultType;
  };


  class Spiral_SetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          Spiral_SetBasisPoints_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                const MbControlData3D & cd);
          virtual ~Spiral_SetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;                        const MbControlData3D & cd;


        int resultType;
  };


  class Spiral_Inverse_AsyncWorker : public PromiseWorker {
      public:
          Spiral_Inverse_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Spiral_Inverse_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;

        int resultType;
  };


  class Spiral_GetProjection_AsyncWorker : public PromiseWorker {
      public:
          Spiral_GetProjection_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                const MbPlacement3D & place,
                                 VERSION  version = Math::DefaultMathVersion());
          virtual ~Spiral_GetProjection_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;                        const MbPlacement3D & place;
                         VERSION  version= Math::DefaultMathVersion();

                
                 MbCurve * _result;
                

        int resultType;
  };


  class Spiral_GetCircleAxis_AsyncWorker : public PromiseWorker {
      public:
          Spiral_GetCircleAxis_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Spiral_GetCircleAxis_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;
                
                 bool  success;
                
                
                 MbAxis3D * axis;
                

        int resultType;
  };


  class Spiral_IsA_AsyncWorker : public PromiseWorker {
      public:
          Spiral_IsA_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Spiral_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;
                
                 MbeSpaceType  _result;
                

        int resultType;
  };


  class Spiral_Type_AsyncWorker : public PromiseWorker {
      public:
          Spiral_Type_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Spiral_Type_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;
                
                 MbeSpaceType  _result;
                

        int resultType;
  };


  class Spiral_Family_AsyncWorker : public PromiseWorker {
      public:
          Spiral_Family_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Spiral_Family_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;
                
                 MbeSpaceType  _result;
                

        int resultType;
  };


  class Spiral_Transform_AsyncWorker : public PromiseWorker {
      public:
          Spiral_Transform_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                const MbMatrix3D & mat,
                                 MbRegTransform * iReg = NULL);
          virtual ~Spiral_Transform_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;                        const MbMatrix3D & mat;
                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class Spiral_Move_AsyncWorker : public PromiseWorker {
      public:
          Spiral_Move_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                const MbVector3D & v,
                                 MbRegTransform * iReg = NULL);
          virtual ~Spiral_Move_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;                        const MbVector3D & v;
                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class Spiral_Rotate_AsyncWorker : public PromiseWorker {
      public:
          Spiral_Rotate_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                const MbAxis3D & axis,
                                 double  angle,
                                 MbRegTransform * iReg = NULL);
          virtual ~Spiral_Rotate_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;                        const MbAxis3D & axis;
                         double  angle;
                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class Spiral_Refresh_AsyncWorker : public PromiseWorker {
      public:
          Spiral_Refresh_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Spiral_Refresh_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;

        int resultType;
  };


  class Spiral_Duplicate_AsyncWorker : public PromiseWorker {
      public:
          Spiral_Duplicate_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRegDuplicate * iReg = NULL);
          virtual ~Spiral_Duplicate_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;                         MbRegDuplicate * iReg= NULL;

                
                 MbSpaceItem * _result;
                

        int resultType;
  };


  class Spiral_AddYourGabaritTo_AsyncWorker : public PromiseWorker {
      public:
          Spiral_AddYourGabaritTo_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d,
                                 MbCube & cube);
          virtual ~Spiral_AddYourGabaritTo_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;                         MbCube & cube;


        int resultType;
  };


  class Spiral_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          Spiral_GetUseCount_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Spiral_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class Spiral_AddRef_AsyncWorker : public PromiseWorker {
      public:
          Spiral_AddRef_AsyncWorker(
MbSpiral * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Spiral_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpiral * _underlying;

        int resultType;
  };



#endif
