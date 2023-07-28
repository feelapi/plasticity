// This is a generated file, modify: generate/templates/EdgeFunction.h

#ifndef EDGEFUNCTION_H
#define EDGEFUNCTION_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <topology_faceset.h>

#include "CurveEdge.h"
#include "Function.h"
#include "PromiseWorker.h"

class EdgeFunction : public
  Napi::ObjectWrap<EdgeFunction>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbEdgeFunction *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        EdgeFunction(const Napi::CallbackInfo& info);

         Napi::Value Edge(const Napi::CallbackInfo& info);
         Napi::Value Edge_async(const Napi::CallbackInfo& info);
         Napi::Value Function(const Napi::CallbackInfo& info);
         Napi::Value Function_async(const Napi::CallbackInfo& info);
        Napi::Value Id(const Napi::CallbackInfo& info);

    MbEdgeFunction * _underlying;



  private:

};


  class EdgeFunction_Edge_AsyncWorker : public PromiseWorker {
      public:
          EdgeFunction_Edge_AsyncWorker(
MbEdgeFunction * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~EdgeFunction_Edge_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbEdgeFunction * _underlying;
                
                const MbCurveEdge * _result;
                

        int resultType;
  };


  class EdgeFunction_Function_AsyncWorker : public PromiseWorker {
      public:
          EdgeFunction_Function_AsyncWorker(
MbEdgeFunction * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~EdgeFunction_Function_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbEdgeFunction * _underlying;
                
                const MbFunction * _result;
                

        int resultType;
  };



#endif
