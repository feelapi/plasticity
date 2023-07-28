// This is a generated file, modify: generate/templates/ActionSurfaceCurve.h

#ifndef ACTIONSURFACECURVE_H
#define ACTIONSURFACECURVE_H

#include <napi.h>
#include <vector>

#include <action_surface_curve.h>

#include "Contour3D.h"
#include "Curve3D.h"
#include "SurfaceOffsetCurveParams.h"
#include "WireFrame.h"
#include "ElementarySurface.h"
#include "WireFrame.h"
#include "SurfaceOffsetCurveParams.h"
#include "SpatialOffsetCurveParams.h"

#include "PromiseWorker.h"

class ActionSurfaceCurve : public
  Napi::ObjectWrap<ActionSurfaceCurve>
{
  public:
        static Napi::Object Init(Napi::Env env, Napi::Object exports);

        static Napi::Value CreateContourFillets(const Napi::CallbackInfo& info);
        static Napi::Value CreateContourFillets_async(const Napi::CallbackInfo& info);
        static Napi::Value OffsetPlaneCurve(const Napi::CallbackInfo& info);
        static Napi::Value OffsetPlaneCurve_async(const Napi::CallbackInfo& info);
        static Napi::Value OffsetSurfaceCurve(const Napi::CallbackInfo& info);
        static Napi::Value OffsetSurfaceCurve_async(const Napi::CallbackInfo& info);
        static Napi::Value OffsetCurve(const Napi::CallbackInfo& info);
        static Napi::Value OffsetCurve_async(const Napi::CallbackInfo& info);
        static Napi::Value FilletCurve(const Napi::CallbackInfo& info);
        static Napi::Value FilletCurve_async(const Napi::CallbackInfo& info);
        static Napi::Value BridgeCurve(const Napi::CallbackInfo& info);
        static Napi::Value BridgeCurve_async(const Napi::CallbackInfo& info);
        static Napi::Value ConnectingSpline(const Napi::CallbackInfo& info);
        static Napi::Value ConnectingSpline_async(const Napi::CallbackInfo& info);
        static Napi::Value CurveProjection(const Napi::CallbackInfo& info);
        static Napi::Value CurveProjection_async(const Napi::CallbackInfo& info);
};


  class ActionSurfaceCurve_CreateContourFillets_AsyncWorker : public PromiseWorker {
      public:
          ActionSurfaceCurve_CreateContourFillets_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                const MbContour3D & contour,
                                 SArray<double> & radiuses,
                                const MbeConnectingType  type);
          virtual ~ActionSurfaceCurve_CreateContourFillets_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                        const MbContour3D & contour;
                         SArray<double> & radiuses;
                        const MbeConnectingType  type;

                
                 MbCurve3D * result;
                

        int resultType;
  };


  class ActionSurfaceCurve_OffsetPlaneCurve_AsyncWorker : public PromiseWorker {
      public:
          ActionSurfaceCurve_OffsetPlaneCurve_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                const MbCurve3D & curve,
                                 double  dist);
          virtual ~ActionSurfaceCurve_OffsetPlaneCurve_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                        const MbCurve3D & curve;
                         double  dist;

                
                 MbCurve3D * result;
                

        int resultType;
  };


  class ActionSurfaceCurve_OffsetSurfaceCurve_AsyncWorker : public PromiseWorker {
      public:
          ActionSurfaceCurve_OffsetSurfaceCurve_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                const MbCurve3D & curve,
                                const MbSurfaceOffsetCurveParams & params);
          virtual ~ActionSurfaceCurve_OffsetSurfaceCurve_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                        const MbCurve3D & curve;
                        const MbSurfaceOffsetCurveParams & params;

                
                SPtr<MbWireFrame> result;
                

        int resultType;
  };


  class ActionSurfaceCurve_OffsetCurve_AsyncWorker : public PromiseWorker {
      public:
          ActionSurfaceCurve_OffsetCurve_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                const MbCurve3D & initCurve,
                                const MbSpatialOffsetCurveParams & params);
          virtual ~ActionSurfaceCurve_OffsetCurve_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                        const MbCurve3D & initCurve;
                        const MbSpatialOffsetCurveParams & params;

                
                SPtr<MbWireFrame> result;
                

        int resultType;
  };


  class ActionSurfaceCurve_FilletCurve_AsyncWorker : public PromiseWorker {
      public:
          ActionSurfaceCurve_FilletCurve_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                const MbCurve3D & curve1,
                                 double & t1,
                                const MbCurve3D & curve2,
                                 double & t2,
                                 double & radius,
                                 bool  sense,
                                const MbeConnectingType  type,
                                const MbSNameMaker & names);
          virtual ~ActionSurfaceCurve_FilletCurve_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                        const MbCurve3D & curve1;
                         double & t1;
                        const MbCurve3D & curve2;
                         double & t2;
                         double & radius;
                         bool  sense;
                        const MbeConnectingType  type;
                        const MbSNameMaker & names;

                
                 double  w1;
                
                
                 double  w2;
                
                
                 bool  unchanged;
                
                
                 MbElementarySurface * surface;
                
                
                 MbWireFrame * result;
                

        int resultType;
  };


  class ActionSurfaceCurve_BridgeCurve_AsyncWorker : public PromiseWorker {
      public:
          ActionSurfaceCurve_BridgeCurve_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                const MbCurve3D & curve1,
                                 double  t1,
                                 bool  sense1,
                                const MbCurve3D & curve2,
                                 double  t2,
                                 bool  sense2,
                                const MbSNameMaker & names);
          virtual ~ActionSurfaceCurve_BridgeCurve_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                        const MbCurve3D & curve1;
                         double  t1;
                         bool  sense1;
                        const MbCurve3D & curve2;
                         double  t2;
                         bool  sense2;
                        const MbSNameMaker & names;

                
                 MbWireFrame * result;
                

        int resultType;
  };


  class ActionSurfaceCurve_ConnectingSpline_AsyncWorker : public PromiseWorker {
      public:
          ActionSurfaceCurve_ConnectingSpline_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                const MbCurve3D & curve1,
                                 double  t1,
                                 MbeMatingType  mating1,
                                const MbCurve3D & curve2,
                                 double  t2,
                                 MbeMatingType  mating2,
                                 double  tension1,
                                 double  tension2,
                                const MbSNameMaker & names);
          virtual ~ActionSurfaceCurve_ConnectingSpline_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                        const MbCurve3D & curve1;
                         double  t1;
                         MbeMatingType  mating1;
                        const MbCurve3D & curve2;
                         double  t2;
                         MbeMatingType  mating2;
                         double  tension1;
                         double  tension2;
                        const MbSNameMaker & names;

                
                 MbWireFrame * result;
                

        int resultType;
  };


  class ActionSurfaceCurve_CurveProjection_AsyncWorker : public PromiseWorker {
      public:
          ActionSurfaceCurve_CurveProjection_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                const MbSurface & surface,
                                const MbCurve3D & curve,
                                 MbVector3D * direction,
                                 bool  createExact,
                                 bool  truncateByBounds,
                                 VERSION  version = Math::DefaultMathVersion());
          virtual ~ActionSurfaceCurve_CurveProjection_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                        const MbSurface & surface;
                        const MbCurve3D & curve;
                         MbVector3D * direction;
                         bool  createExact;
                         bool  truncateByBounds;
                         VERSION  version= Math::DefaultMathVersion();

                
                 RPArray<MbCurve3D> * result;
                

        int resultType;
  };



#endif
