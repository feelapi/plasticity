// This is a generated file, modify: generate/templates/ContourOnSurface.h

#ifndef CONTOURONSURFACE_H
#define CONTOURONSURFACE_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cur_contour_on_surface.h>

#include "Curve3D.h"
#include "Surface.h"
#include "Contour.h"
#include "PromiseWorker.h"

class ContourOnSurface : public
  Napi::ObjectWrap<ContourOnSurface>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbContourOnSurface *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        ContourOnSurface(const Napi::CallbackInfo& info);

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

    MbContourOnSurface * _underlying;

    ~ContourOnSurface();


  private:

};


  class ContourOnSurface_GetContour_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_GetContour_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnSurface_GetContour_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;
                
                const MbContour * _result;
                

        int resultType;
  };


  class ContourOnSurface_GetSurface_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_GetSurface_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnSurface_GetSurface_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;
                
                const MbSurface * _result;
                

        int resultType;
  };


  class ContourOnSurface_GetSegment_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_GetSegment_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d,
                                 size_t  index);
          virtual ~ContourOnSurface_GetSegment_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;                         size_t  index;

                
                const MbCurve * _result;
                

        int resultType;
  };


  class ContourOnSurface_GetSegmentsCount_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_GetSegmentsCount_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnSurface_GetSegmentsCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;
                
                 size_t  _result;
                

        int resultType;
  };


  class ContourOnSurface_GetPlaneCurve_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_GetPlaneCurve_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d,
                                 bool  saveParams,
                                 PlanarCheckParams  params = PlanarCheckParams());
          virtual ~ContourOnSurface_GetPlaneCurve_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;                         bool  saveParams;
                         PlanarCheckParams  params= PlanarCheckParams();

                
                 MbCurve * curve2d;
                
                
                 MbPlacement3D * placement;
                

        int resultType;
  };


  class ContourOnSurface_IsPlanar_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_IsPlanar_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d,
                                 double  accuracy = METRIC_EPSILON);
          virtual ~ContourOnSurface_IsPlanar_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;                         double  accuracy= METRIC_EPSILON;

                
                 bool  _result;
                

        int resultType;
  };


  class ContourOnSurface_IsClosed_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_IsClosed_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnSurface_IsClosed_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class ContourOnSurface_IsTouch_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_IsTouch_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnSurface_IsTouch_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class ContourOnSurface_GetTMax_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_GetTMax_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnSurface_GetTMax_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class ContourOnSurface_GetTMin_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_GetTMin_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnSurface_GetTMin_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class ContourOnSurface_GetPeriod_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_GetPeriod_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnSurface_GetPeriod_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class ContourOnSurface_IsPeriodic_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_IsPeriodic_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnSurface_IsPeriodic_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class ContourOnSurface_IsStraight_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_IsStraight_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d,
                                 bool  ignoreParams = false);
          virtual ~ContourOnSurface_IsStraight_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;                         bool  ignoreParams= false;

                
                 bool  _result;
                

        int resultType;
  };


  class ContourOnSurface_Trimmed_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_Trimmed_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d,
                                 double  t1,
                                 double  t2,
                                 int  sense);
          virtual ~ContourOnSurface_Trimmed_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;                         double  t1;
                         double  t2;
                         int  sense;

                
                 MbCurve3D * _result;
                

        int resultType;
  };


  class ContourOnSurface_Normal_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_Normal_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~ContourOnSurface_Normal_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;                         double & t;

                
                 MbVector3D * n;
                

        int resultType;
  };


  class ContourOnSurface_Tangent_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_Tangent_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~ContourOnSurface_Tangent_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;                         double & t;

                
                 MbVector3D * tan;
                

        int resultType;
  };


  class ContourOnSurface_BNormal_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_BNormal_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~ContourOnSurface_BNormal_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;                         double & t;

                
                 MbVector3D * b;
                

        int resultType;
  };


  class ContourOnSurface_GetCentre_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_GetCentre_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnSurface_GetCentre_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;
                
                 MbCartPoint3D * c;
                

        int resultType;
  };


  class ContourOnSurface_GetLimitPoint_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_GetLimitPoint_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d,
                                 ptrdiff_t  number);
          virtual ~ContourOnSurface_GetLimitPoint_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;                         ptrdiff_t  number;

                
                 MbCartPoint3D * point;
                

        int resultType;
  };


  class ContourOnSurface_PointOn_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_PointOn_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~ContourOnSurface_PointOn_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;                         double & t;

                
                 MbCartPoint3D * p;
                

        int resultType;
  };


  class ContourOnSurface__PointOn_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface__PointOn_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~ContourOnSurface__PointOn_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;                         double & t;

                
                 MbCartPoint3D * p;
                

        int resultType;
  };


  class ContourOnSurface_NearPointProjection_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_NearPointProjection_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCartPoint3D & pnt,
                                 bool  ext,
                                 MbRect1D * tRange = NULL);
          virtual ~ContourOnSurface_NearPointProjection_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;                        const MbCartPoint3D & pnt;
                         bool  ext;
                         MbRect1D * tRange= NULL;

                
                 bool  success;
                
                
                 double  t;
                

        int resultType;
  };


  class ContourOnSurface_GetSurfaceCurve_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_GetSurfaceCurve_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d,
                                 VERSION  version = Math::DefaultMathVersion());
          virtual ~ContourOnSurface_GetSurfaceCurve_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;                         VERSION  version= Math::DefaultMathVersion();

                
                 MbCurve * curve2d;
                
                
                 MbSurface * surface;
                

        int resultType;
  };


  class ContourOnSurface_GetWeightCentre_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_GetWeightCentre_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnSurface_GetWeightCentre_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;
                
                 MbCartPoint3D * point;
                

        int resultType;
  };


  class ContourOnSurface_GetBasisCurve_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_GetBasisCurve_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnSurface_GetBasisCurve_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;
                
                const MbCurve3D * _result;
                

        int resultType;
  };


  class ContourOnSurface_GetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_GetBasisPoints_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnSurface_GetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;
                
                 MbControlData3D * cd;
                

        int resultType;
  };


  class ContourOnSurface_SetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_SetBasisPoints_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d,
                                const MbControlData3D & cd);
          virtual ~ContourOnSurface_SetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;                        const MbControlData3D & cd;


        int resultType;
  };


  class ContourOnSurface_Inverse_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_Inverse_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnSurface_Inverse_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;

        int resultType;
  };


  class ContourOnSurface_GetProjection_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_GetProjection_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d,
                                const MbPlacement3D & place,
                                 VERSION  version = Math::DefaultMathVersion());
          virtual ~ContourOnSurface_GetProjection_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;                        const MbPlacement3D & place;
                         VERSION  version= Math::DefaultMathVersion();

                
                 MbCurve * _result;
                

        int resultType;
  };


  class ContourOnSurface_GetCircleAxis_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_GetCircleAxis_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnSurface_GetCircleAxis_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;
                
                 bool  success;
                
                
                 MbAxis3D * axis;
                

        int resultType;
  };


  class ContourOnSurface_IsA_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_IsA_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnSurface_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;
                
                 MbeSpaceType  _result;
                

        int resultType;
  };


  class ContourOnSurface_Type_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_Type_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnSurface_Type_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;
                
                 MbeSpaceType  _result;
                

        int resultType;
  };


  class ContourOnSurface_Family_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_Family_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnSurface_Family_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;
                
                 MbeSpaceType  _result;
                

        int resultType;
  };


  class ContourOnSurface_Transform_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_Transform_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d,
                                const MbMatrix3D & mat,
                                 MbRegTransform * iReg = NULL);
          virtual ~ContourOnSurface_Transform_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;                        const MbMatrix3D & mat;
                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class ContourOnSurface_Move_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_Move_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d,
                                const MbVector3D & v,
                                 MbRegTransform * iReg = NULL);
          virtual ~ContourOnSurface_Move_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;                        const MbVector3D & v;
                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class ContourOnSurface_Rotate_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_Rotate_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d,
                                const MbAxis3D & axis,
                                 double  angle,
                                 MbRegTransform * iReg = NULL);
          virtual ~ContourOnSurface_Rotate_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;                        const MbAxis3D & axis;
                         double  angle;
                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class ContourOnSurface_Refresh_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_Refresh_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnSurface_Refresh_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;

        int resultType;
  };


  class ContourOnSurface_Duplicate_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_Duplicate_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRegDuplicate * iReg = NULL);
          virtual ~ContourOnSurface_Duplicate_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;                         MbRegDuplicate * iReg= NULL;

                
                 MbSpaceItem * _result;
                

        int resultType;
  };


  class ContourOnSurface_AddYourGabaritTo_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_AddYourGabaritTo_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d,
                                 MbCube & cube);
          virtual ~ContourOnSurface_AddYourGabaritTo_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;                         MbCube & cube;


        int resultType;
  };


  class ContourOnSurface_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_GetUseCount_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnSurface_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class ContourOnSurface_AddRef_AsyncWorker : public PromiseWorker {
      public:
          ContourOnSurface_AddRef_AsyncWorker(
MbContourOnSurface * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ContourOnSurface_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbContourOnSurface * _underlying;

        int resultType;
  };



#endif
