// This is a generated file, modify: generate/templates/Graph.h

#ifndef GRAPH_H
#define GRAPH_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <contour_graph.h>

#include "Curve.h"
#include "PromiseWorker.h"

class Graph : public
  Napi::ObjectWrap<Graph>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MpGraph *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        Graph(const Napi::CallbackInfo& info);

         Napi::Value GetLoopsCount(const Napi::CallbackInfo& info);
         Napi::Value GetLoopsCount_async(const Napi::CallbackInfo& info);
         Napi::Value GetUsedCurves(const Napi::CallbackInfo& info);
         Napi::Value GetUsedCurves_async(const Napi::CallbackInfo& info);
        Napi::Value Id(const Napi::CallbackInfo& info);

    MpGraph * _underlying;



  private:

};


  class Graph_GetLoopsCount_AsyncWorker : public PromiseWorker {
      public:
          Graph_GetLoopsCount_AsyncWorker(
MpGraph * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Graph_GetLoopsCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MpGraph * _underlying;
                
                 size_t  _result;
                

        int resultType;
  };


  class Graph_GetUsedCurves_AsyncWorker : public PromiseWorker {
      public:
          Graph_GetUsedCurves_AsyncWorker(
MpGraph * _underlying,            Napi::Promise::Deferred const &d,
                                const RPArray<MbCurve> & curveList);
          virtual ~Graph_GetUsedCurves_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MpGraph * _underlying;                        const RPArray<MbCurve> & curveList;

                
                 RPArray<MbCurve> * usedCurves;
                

        int resultType;
  };



#endif
