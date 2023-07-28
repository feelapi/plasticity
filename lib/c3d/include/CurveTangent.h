// This is a generated file, modify: generate/templates/CurveTangent.h

#ifndef CURVETANGENT_H
#define CURVETANGENT_H

#include <napi.h>
#include <vector>

#include <alg_curve_tangent.h>

#include "CartPoint.h"
#include "Curve.h"
#include "Line.h"

#include "PromiseWorker.h"

class CurveTangent : public
  Napi::ObjectWrap<CurveTangent>
{
  public:
        static Napi::Object Init(Napi::Env env, Napi::Object exports);

        static Napi::Value LinePointTangentCurve(const Napi::CallbackInfo& info);
        static Napi::Value LinePointTangentCurve_async(const Napi::CallbackInfo& info);
        static Napi::Value LineTangentTwoCurves(const Napi::CallbackInfo& info);
        static Napi::Value LineTangentTwoCurves_async(const Napi::CallbackInfo& info);
};


  class CurveTangent_LinePointTangentCurve_AsyncWorker : public PromiseWorker {
      public:
          CurveTangent_LinePointTangentCurve_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                const MbCartPoint & pnt,
                                const MbCurve & pCurve,
                                 bool  lineAsCurve = false);
          virtual ~CurveTangent_LinePointTangentCurve_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                        const MbCartPoint & pnt;
                        const MbCurve & pCurve;
                         bool  lineAsCurve= false;

                
                 PArray<MbLine> * pLine;
                

        int resultType;
  };


  class CurveTangent_LineTangentTwoCurves_AsyncWorker : public PromiseWorker {
      public:
          CurveTangent_LineTangentTwoCurves_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                const MbCurve * pCurve1,
                                const MbCurve * pCurve2);
          virtual ~CurveTangent_LineTangentTwoCurves_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                        const MbCurve * pCurve1;
                        const MbCurve * pCurve2;

                
                 PArray<MbLine> * pLine;
                
                
                 SArray<MbCartPoint> * secondPoint;
                

        int resultType;
  };



#endif
