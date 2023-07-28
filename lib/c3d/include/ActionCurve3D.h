// This is a generated file, modify: generate/templates/ActionCurve3D.h

#ifndef ACTIONCURVE3D_H
#define ACTIONCURVE3D_H

#include <napi.h>
#include <vector>

#include <action_curve3d.h>

#include "CartPoint3D.h"
#include "Curve3D.h"
#include "Contour3D.h"

#include "PromiseWorker.h"

class ActionCurve3D : public
  Napi::ObjectWrap<ActionCurve3D>
{
  public:
        static Napi::Object Init(Napi::Env env, Napi::Object exports);

        static Napi::Value Arc(const Napi::CallbackInfo& info);
        static Napi::Value Arc_async(const Napi::CallbackInfo& info);
        static Napi::Value Segment(const Napi::CallbackInfo& info);
        static Napi::Value Segment_async(const Napi::CallbackInfo& info);
        static Napi::Value SplineCurve(const Napi::CallbackInfo& info);
        static Napi::Value SplineCurve_async(const Napi::CallbackInfo& info);
        static Napi::Value CreateContour(const Napi::CallbackInfo& info);
        static Napi::Value CreateContour_async(const Napi::CallbackInfo& info);
        static Napi::Value AddCurveToContour(const Napi::CallbackInfo& info);
        static Napi::Value AddCurveToContour_async(const Napi::CallbackInfo& info);
        static Napi::Value RegularPolygon(const Napi::CallbackInfo& info);
        static Napi::Value RegularPolygon_async(const Napi::CallbackInfo& info);
        static Napi::Value SpiralCurve(const Napi::CallbackInfo& info);
        static Napi::Value SpiralCurve_async(const Napi::CallbackInfo& info);
        static Napi::Value CreateContours(const Napi::CallbackInfo& info);
        static Napi::Value CreateContours_async(const Napi::CallbackInfo& info);
        static Napi::Value PlaneCurve(const Napi::CallbackInfo& info);
        static Napi::Value PlaneCurve_async(const Napi::CallbackInfo& info);
        static Napi::Value DuplicateCurve(const Napi::CallbackInfo& info);
        static Napi::Value DuplicateCurve_async(const Napi::CallbackInfo& info);
        static Napi::Value NurbsCopy(const Napi::CallbackInfo& info);
        static Napi::Value NurbsCopy_async(const Napi::CallbackInfo& info);
};


  class ActionCurve3D_Arc_AsyncWorker : public PromiseWorker {
      public:
          ActionCurve3D_Arc_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                const MbCartPoint3D & centre,
                                const SArray<MbCartPoint3D> & points,
                                 bool  curveClosed,
                                 double  angle,
                                 double & a,
                                 double & b);
          virtual ~ActionCurve3D_Arc_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                        const MbCartPoint3D & centre;
                        const SArray<MbCartPoint3D> & points;
                         bool  curveClosed;
                         double  angle;
                         double & a;
                         double & b;

                
                 MbCurve3D * result;
                

        int resultType;
  };


  class ActionCurve3D_Segment_AsyncWorker : public PromiseWorker {
      public:
          ActionCurve3D_Segment_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                const MbCartPoint3D & point1,
                                const MbCartPoint3D & point2);
          virtual ~ActionCurve3D_Segment_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                        const MbCartPoint3D & point1;
                        const MbCartPoint3D & point2;

                
                 MbCurve3D * result;
                

        int resultType;
  };


  class ActionCurve3D_SplineCurve_AsyncWorker : public PromiseWorker {
      public:
          ActionCurve3D_SplineCurve_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                const SArray<MbCartPoint3D> & points,
                                 bool  closed,
                                 MbeSpaceType  curveType);
          virtual ~ActionCurve3D_SplineCurve_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                        const SArray<MbCartPoint3D> & points;
                         bool  closed;
                         MbeSpaceType  curveType;

                
                 MbCurve3D * result;
                

        int resultType;
  };


  class ActionCurve3D_CreateContour_AsyncWorker : public PromiseWorker {
      public:
          ActionCurve3D_CreateContour_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                 MbCurve3D & curve);
          virtual ~ActionCurve3D_CreateContour_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                         MbCurve3D & curve;

                
                 MbContour3D * result;
                

        int resultType;
  };


  class ActionCurve3D_AddCurveToContour_AsyncWorker : public PromiseWorker {
      public:
          ActionCurve3D_AddCurveToContour_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                 MbCurve3D & curve,
                                 MbCurve3D & contour,
                                 bool  toEnd);
          virtual ~ActionCurve3D_AddCurveToContour_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                         MbCurve3D & curve;
                         MbCurve3D & contour;
                         bool  toEnd;


        int resultType;
  };


  class ActionCurve3D_RegularPolygon_AsyncWorker : public PromiseWorker {
      public:
          ActionCurve3D_RegularPolygon_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                const MbCartPoint3D & centre,
                                const MbCartPoint3D & point,
                                const MbVector3D & axisZ,
                                 size_t  vertexCount,
                                 bool  describe);
          virtual ~ActionCurve3D_RegularPolygon_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                        const MbCartPoint3D & centre;
                        const MbCartPoint3D & point;
                        const MbVector3D & axisZ;
                         size_t  vertexCount;
                         bool  describe;

                
                 MbCurve3D * result;
                

        int resultType;
  };


  class ActionCurve3D_SpiralCurve_AsyncWorker : public PromiseWorker {
      public:
          ActionCurve3D_SpiralCurve_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                const MbCartPoint3D & point0,
                                const MbCartPoint3D & point1,
                                const MbCartPoint3D & point2,
                                 double  radius,
                                 double  step,
                                 double  angle,
                                 MbCurve * lawCurve,
                                 bool  spiralAxis);
          virtual ~ActionCurve3D_SpiralCurve_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                        const MbCartPoint3D & point0;
                        const MbCartPoint3D & point1;
                        const MbCartPoint3D & point2;
                         double  radius;
                         double  step;
                         double  angle;
                         MbCurve * lawCurve;
                         bool  spiralAxis;

                
                 MbCurve3D * result;
                

        int resultType;
  };


  class ActionCurve3D_CreateContours_AsyncWorker : public PromiseWorker {
      public:
          ActionCurve3D_CreateContours_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                 RPArray<MbCurve3D> & curves,
                                 double  metricEps,
                                 bool  onlySmoothConnected = false,
                                 VERSION  version = Math::DefaultMathVersion());
          virtual ~ActionCurve3D_CreateContours_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                         RPArray<MbCurve3D> & curves;
                         double  metricEps;
                         bool  onlySmoothConnected= false;
                         VERSION  version= Math::DefaultMathVersion();

                
                 RPArray<MbContour3D> * result;
                

        int resultType;
  };


  class ActionCurve3D_PlaneCurve_AsyncWorker : public PromiseWorker {
      public:
          ActionCurve3D_PlaneCurve_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                const MbPlacement3D & place,
                                const MbCurve & curve);
          virtual ~ActionCurve3D_PlaneCurve_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                        const MbPlacement3D & place;
                        const MbCurve & curve;

                
                 MbCurve3D * result;
                

        int resultType;
  };


  class ActionCurve3D_DuplicateCurve_AsyncWorker : public PromiseWorker {
      public:
          ActionCurve3D_DuplicateCurve_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                const MbCurve3D & curve,
                                 VERSION  version = Math::DefaultMathVersion());
          virtual ~ActionCurve3D_DuplicateCurve_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                        const MbCurve3D & curve;
                         VERSION  version= Math::DefaultMathVersion();

                
                 MbCurve3D * _result;
                

        int resultType;
  };


  class ActionCurve3D_NurbsCopy_AsyncWorker : public PromiseWorker {
      public:
          ActionCurve3D_NurbsCopy_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                const MbCurve3D & curve);
          virtual ~ActionCurve3D_NurbsCopy_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                        const MbCurve3D & curve;

                
                 MbCurve3D * result;
                

        int resultType;
  };



#endif
