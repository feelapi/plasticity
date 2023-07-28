// This is a generated file, modify: generate/templates/CurveUtil.h

#ifndef CURVEUTIL_H
#define CURVEUTIL_H

#include <napi.h>
#include <vector>

#include <curve.h>

#include "Curve.h"

#include "PromiseWorker.h"

class CurveUtil : public
  Napi::ObjectWrap<CurveUtil>
{
  public:
        static Napi::Object Init(Napi::Env env, Napi::Object exports);

        static Napi::Value AreaSign(const Napi::CallbackInfo& info);
        static Napi::Value AreaSign_async(const Napi::CallbackInfo& info);
};


  class CurveUtil_AreaSign_AsyncWorker : public PromiseWorker {
      public:
          CurveUtil_AreaSign_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                const MbCurve & curve,
                                 double  sag,
                                 bool  close);
          virtual ~CurveUtil_AreaSign_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                        const MbCurve & curve;
                         double  sag;
                         bool  close;

                
                 double  _result;
                

        int resultType;
  };



#endif
