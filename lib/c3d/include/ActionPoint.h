// This is a generated file, modify: generate/templates/ActionPoint.h

#ifndef ACTIONPOINT_H
#define ACTIONPOINT_H

#include <napi.h>
#include <vector>

#include <action_point.h>

#include "Line3D.h"
#include "CartPoint3D.h"

#include "PromiseWorker.h"

class ActionPoint : public
  Napi::ObjectWrap<ActionPoint>
{
  public:
        static Napi::Object Init(Napi::Env env, Napi::Object exports);

        static Napi::Value LineLineNearestPoints(const Napi::CallbackInfo& info);
        static Napi::Value LineLineNearestPoints_async(const Napi::CallbackInfo& info);
        static Napi::Value CurveCurveIntersection2D(const Napi::CallbackInfo& info);
        static Napi::Value CurveCurveIntersection2D_async(const Napi::CallbackInfo& info);
        static Napi::Value CurveCurveIntersection3D(const Napi::CallbackInfo& info);
        static Napi::Value CurveCurveIntersection3D_async(const Napi::CallbackInfo& info);
        static Napi::Value CurveCurveCrossing(const Napi::CallbackInfo& info);
        static Napi::Value CurveCurveCrossing_async(const Napi::CallbackInfo& info);
};


  class ActionPoint_LineLineNearestPoints_AsyncWorker : public PromiseWorker {
      public:
          ActionPoint_LineLineNearestPoints_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                const MbLine3D & line1,
                                const MbLine3D & line2,
                                 MbCartPoint3D & p1,
                                 MbCartPoint3D & p2);
          virtual ~ActionPoint_LineLineNearestPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                        const MbLine3D & line1;
                        const MbLine3D & line2;
                         MbCartPoint3D & p1;
                         MbCartPoint3D & p2;

                
                 double  _result;
                

        int resultType;
  };


  class ActionPoint_CurveCurveIntersection2D_AsyncWorker : public PromiseWorker {
      public:
          ActionPoint_CurveCurveIntersection2D_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                const MbCurve & curve1,
                                const MbCurve & curve2,
                                 double  xEpsilon,
                                 double  yEpsilon,
                                 bool  touchInclude,
                                 bool  allowInaccuracy = true);
          virtual ~ActionPoint_CurveCurveIntersection2D_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                        const MbCurve & curve1;
                        const MbCurve & curve2;
                         double  xEpsilon;
                         double  yEpsilon;
                         bool  touchInclude;
                         bool  allowInaccuracy= true;

                
                 ptrdiff_t  count;
                
                
                 SArray<double> * result1;
                
                
                 SArray<double> * result2;
                

        int resultType;
  };


  class ActionPoint_CurveCurveIntersection3D_AsyncWorker : public PromiseWorker {
      public:
          ActionPoint_CurveCurveIntersection3D_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                const MbCurve3D & curve1,
                                const MbCurve3D & curve2,
                                 double  mEps);
          virtual ~ActionPoint_CurveCurveIntersection3D_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                        const MbCurve3D & curve1;
                        const MbCurve3D & curve2;
                         double  mEps;

                
                 ptrdiff_t  count;
                
                
                 SArray<double> * result1;
                
                
                 SArray<double> * result2;
                

        int resultType;
  };


  class ActionPoint_CurveCurveCrossing_AsyncWorker : public PromiseWorker {
      public:
          ActionPoint_CurveCurveCrossing_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                const MbCurve3D & curve1,
                                const MbCurve3D & curve2,
                                 double  mEps = Math::metricRegion);
          virtual ~ActionPoint_CurveCurveCrossing_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                        const MbCurve3D & curve1;
                        const MbCurve3D & curve2;
                         double  mEps= Math::metricRegion;

                
                 ptrdiff_t  count;
                
                
                 SArray<double> * result1;
                
                
                 SArray<double> * result2;
                

        int resultType;
  };



#endif
