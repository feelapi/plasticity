// This is a generated file, modify: generate/templates/ContourOnPlane.h

#ifndef CONTOURONPLANE_H
#define CONTOURONPLANE_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cur_contour_on_plane.h>

#include "ContourOnSurface.h"
#include "Plane.h"
#include "PromiseWorker.h"

class ContourOnPlane : public
  Napi::ObjectWrap<ContourOnPlane>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbContourOnPlane *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        ContourOnPlane(const Napi::CallbackInfo& info);

         Napi::Value GetPlacement(const Napi::CallbackInfo& info);
         Napi::Value GetPlacement_async(const Napi::CallbackInfo& info);
         Napi::Value Cast(const Napi::CallbackInfo& info);
         Napi::Value Cast_async(const Napi::CallbackInfo& info);
         Napi::Value GetContour(const Napi::CallbackInfo& info);
         Napi::Value GetContour_async(const Napi::CallbackInfo& info);
         Napi::Value GetSurface(const Napi::CallbackInfo& info);
         Napi::Value GetSurface_async(const Napi::CallbackInfo& info);
         Napi::Value GetSegment(const Napi::CallbackInfo& info);
         Napi::Value GetSegment_async(const Napi::CallbackInfo& info);
         Napi::Value GetSegmentsCount(const Napi::CallbackInfo& info);
         Napi::Value GetSegmentsCount_async(const Napi::CallbackInfo& info);
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

    MbContourOnPlane * _underlying;

    ~ContourOnPlane();


  private:

};


  class ContourOnPlane_GetPlacement_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_GetPlacement_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnPlane_GetPlacement_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;
                
                const MbPlacement3D * _result;
                

        int resultType;
  };


  class ContourOnPlane_GetContour_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_GetContour_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnPlane_GetContour_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;
                
                const MbContour * _result;
                

        int resultType;
  };


  class ContourOnPlane_GetSurface_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_GetSurface_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnPlane_GetSurface_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;
                
                const MbSurface * _result;
                

        int resultType;
  };


  class ContourOnPlane_GetSegment_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_GetSegment_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d,
                                 size_t  index);
          virtual ~ContourOnPlane_GetSegment_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;                         size_t  index;

                
                const MbCurve * _result;
                

        int resultType;
  };


  class ContourOnPlane_GetSegmentsCount_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_GetSegmentsCount_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnPlane_GetSegmentsCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;
                
                 size_t  _result;
                

        int resultType;
  };


  class ContourOnPlane_GetPlaneCurve_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_GetPlaneCurve_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d,
                                 bool  saveParams,
                                 PlanarCheckParams  params = PlanarCheckParams());
          virtual ~ContourOnPlane_GetPlaneCurve_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;                         bool  saveParams;
                         PlanarCheckParams  params= PlanarCheckParams();

                
                 MbCurve * curve2d;
                
                
                 MbPlacement3D * placement;
                

        int resultType;
  };


  class ContourOnPlane_IsPlanar_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_IsPlanar_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d,
                                 double  accuracy = METRIC_EPSILON);
          virtual ~ContourOnPlane_IsPlanar_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;                         double  accuracy= METRIC_EPSILON;

                
                 bool  _result;
                

        int resultType;
  };


  class ContourOnPlane_IsClosed_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_IsClosed_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnPlane_IsClosed_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class ContourOnPlane_IsTouch_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_IsTouch_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnPlane_IsTouch_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class ContourOnPlane_GetTMax_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_GetTMax_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnPlane_GetTMax_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class ContourOnPlane_GetTMin_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_GetTMin_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnPlane_GetTMin_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class ContourOnPlane_GetPeriod_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_GetPeriod_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnPlane_GetPeriod_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class ContourOnPlane_IsPeriodic_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_IsPeriodic_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnPlane_IsPeriodic_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class ContourOnPlane_IsStraight_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_IsStraight_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d,
                                 bool  ignoreParams = false);
          virtual ~ContourOnPlane_IsStraight_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;                         bool  ignoreParams= false;

                
                 bool  _result;
                

        int resultType;
  };


  class ContourOnPlane_Trimmed_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_Trimmed_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d,
                                 double  t1,
                                 double  t2,
                                 int  sense);
          virtual ~ContourOnPlane_Trimmed_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;                         double  t1;
                         double  t2;
                         int  sense;

                
                 MbCurve3D * _result;
                

        int resultType;
  };


  class ContourOnPlane_Normal_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_Normal_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~ContourOnPlane_Normal_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;                         double & t;

                
                 MbVector3D * n;
                

        int resultType;
  };


  class ContourOnPlane_Tangent_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_Tangent_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~ContourOnPlane_Tangent_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;                         double & t;

                
                 MbVector3D * tan;
                

        int resultType;
  };


  class ContourOnPlane_BNormal_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_BNormal_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~ContourOnPlane_BNormal_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;                         double & t;

                
                 MbVector3D * b;
                

        int resultType;
  };


  class ContourOnPlane_GetCentre_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_GetCentre_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnPlane_GetCentre_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;
                
                 MbCartPoint3D * c;
                

        int resultType;
  };


  class ContourOnPlane_GetLimitPoint_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_GetLimitPoint_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d,
                                 ptrdiff_t  number);
          virtual ~ContourOnPlane_GetLimitPoint_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;                         ptrdiff_t  number;

                
                 MbCartPoint3D * point;
                

        int resultType;
  };


  class ContourOnPlane_PointOn_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_PointOn_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~ContourOnPlane_PointOn_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;                         double & t;

                
                 MbCartPoint3D * p;
                

        int resultType;
  };


  class ContourOnPlane__PointOn_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane__PointOn_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~ContourOnPlane__PointOn_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;                         double & t;

                
                 MbCartPoint3D * p;
                

        int resultType;
  };


  class ContourOnPlane_NearPointProjection_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_NearPointProjection_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCartPoint3D & pnt,
                                 bool  ext,
                                 MbRect1D * tRange = NULL);
          virtual ~ContourOnPlane_NearPointProjection_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;                        const MbCartPoint3D & pnt;
                         bool  ext;
                         MbRect1D * tRange= NULL;

                
                 bool  success;
                
                
                 double  t;
                

        int resultType;
  };


  class ContourOnPlane_GetSurfaceCurve_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_GetSurfaceCurve_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d,
                                 VERSION  version = Math::DefaultMathVersion());
          virtual ~ContourOnPlane_GetSurfaceCurve_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;                         VERSION  version= Math::DefaultMathVersion();

                
                 MbCurve * curve2d;
                
                
                 MbSurface * surface;
                

        int resultType;
  };


  class ContourOnPlane_GetWeightCentre_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_GetWeightCentre_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnPlane_GetWeightCentre_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;
                
                 MbCartPoint3D * point;
                

        int resultType;
  };


  class ContourOnPlane_GetBasisCurve_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_GetBasisCurve_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnPlane_GetBasisCurve_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;
                
                const MbCurve3D * _result;
                

        int resultType;
  };


  class ContourOnPlane_GetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_GetBasisPoints_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnPlane_GetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;
                
                 MbControlData3D * cd;
                

        int resultType;
  };


  class ContourOnPlane_SetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_SetBasisPoints_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d,
                                const MbControlData3D & cd);
          virtual ~ContourOnPlane_SetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;                        const MbControlData3D & cd;


        int resultType;
  };


  class ContourOnPlane_Inverse_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_Inverse_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnPlane_Inverse_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;

        int resultType;
  };


  class ContourOnPlane_GetProjection_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_GetProjection_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d,
                                const MbPlacement3D & place,
                                 VERSION  version = Math::DefaultMathVersion());
          virtual ~ContourOnPlane_GetProjection_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;                        const MbPlacement3D & place;
                         VERSION  version= Math::DefaultMathVersion();

                
                 MbCurve * _result;
                

        int resultType;
  };


  class ContourOnPlane_GetCircleAxis_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_GetCircleAxis_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnPlane_GetCircleAxis_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;
                
                 bool  success;
                
                
                 MbAxis3D * axis;
                

        int resultType;
  };


  class ContourOnPlane_IsA_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_IsA_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnPlane_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;
                
                 MbeSpaceType  _result;
                

        int resultType;
  };


  class ContourOnPlane_Type_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_Type_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnPlane_Type_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;
                
                 MbeSpaceType  _result;
                

        int resultType;
  };


  class ContourOnPlane_Family_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_Family_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnPlane_Family_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;
                
                 MbeSpaceType  _result;
                

        int resultType;
  };


  class ContourOnPlane_Transform_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_Transform_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d,
                                const MbMatrix3D & mat,
                                 MbRegTransform * iReg = NULL);
          virtual ~ContourOnPlane_Transform_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;                        const MbMatrix3D & mat;
                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class ContourOnPlane_Move_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_Move_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d,
                                const MbVector3D & v,
                                 MbRegTransform * iReg = NULL);
          virtual ~ContourOnPlane_Move_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;                        const MbVector3D & v;
                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class ContourOnPlane_Rotate_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_Rotate_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d,
                                const MbAxis3D & axis,
                                 double  angle,
                                 MbRegTransform * iReg = NULL);
          virtual ~ContourOnPlane_Rotate_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;                        const MbAxis3D & axis;
                         double  angle;
                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class ContourOnPlane_Refresh_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_Refresh_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnPlane_Refresh_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;

        int resultType;
  };


  class ContourOnPlane_Duplicate_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_Duplicate_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRegDuplicate * iReg = NULL);
          virtual ~ContourOnPlane_Duplicate_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;                         MbRegDuplicate * iReg= NULL;

                
                 MbSpaceItem * _result;
                

        int resultType;
  };


  class ContourOnPlane_AddYourGabaritTo_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_AddYourGabaritTo_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d,
                                 MbCube & cube);
          virtual ~ContourOnPlane_AddYourGabaritTo_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;                         MbCube & cube;


        int resultType;
  };


  class ContourOnPlane_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_GetUseCount_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnPlane_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class ContourOnPlane_AddRef_AsyncWorker : public PromiseWorker {
      public:
          ContourOnPlane_AddRef_AsyncWorker(
MbContourOnPlane * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnPlane_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnPlane * _underlying;

        int resultType;
  };



#endif
