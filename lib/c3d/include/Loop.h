// This is a generated file, modify: generate/templates/Loop.h

#ifndef LOOP_H
#define LOOP_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <topology.h>

#include "TopItem.h"
#include "Surface.h"
#include "ContourOnSurface.h"
#include "OrientedEdge.h"
#include "PromiseWorker.h"

class Loop : public
  Napi::ObjectWrap<Loop>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbLoop *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        Loop(const Napi::CallbackInfo& info);

         Napi::Value MakeContourOnSurface(const Napi::CallbackInfo& info);
         Napi::Value MakeContourOnSurface_async(const Napi::CallbackInfo& info);
         Napi::Value GetEdgesCount(const Napi::CallbackInfo& info);
         Napi::Value GetEdgesCount_async(const Napi::CallbackInfo& info);
         Napi::Value GetOrientedEdge(const Napi::CallbackInfo& info);
         Napi::Value GetOrientedEdge_async(const Napi::CallbackInfo& info);
         Napi::Value GetEdges(const Napi::CallbackInfo& info);
         Napi::Value GetEdges_async(const Napi::CallbackInfo& info);
         Napi::Value GetUseCount(const Napi::CallbackInfo& info);
         Napi::Value GetUseCount_async(const Napi::CallbackInfo& info);
         Napi::Value AddRef(const Napi::CallbackInfo& info);
         Napi::Value AddRef_async(const Napi::CallbackInfo& info);
        Napi::Value Id(const Napi::CallbackInfo& info);

    MbLoop * _underlying;

    ~Loop();


  private:

};


  class Loop_MakeContourOnSurface_AsyncWorker : public PromiseWorker {
      public:
          Loop_MakeContourOnSurface_AsyncWorker(
MbLoop * _underlying,            Napi::Promise::Deferred const &d,
                                const MbSurface & surf,
                                 bool  faceSense,
                                 bool  doExact);
          virtual ~Loop_MakeContourOnSurface_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLoop * _underlying;                        const MbSurface & surf;
                         bool  faceSense;
                         bool  doExact;

                
                 MbContourOnSurface * _result;
                

        int resultType;
  };


  class Loop_GetEdgesCount_AsyncWorker : public PromiseWorker {
      public:
          Loop_GetEdgesCount_AsyncWorker(
MbLoop * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Loop_GetEdgesCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLoop * _underlying;
                
                 ptrdiff_t  _result;
                

        int resultType;
  };


  class Loop_GetOrientedEdge_AsyncWorker : public PromiseWorker {
      public:
          Loop_GetOrientedEdge_AsyncWorker(
MbLoop * _underlying,            Napi::Promise::Deferred const &d,
                                 size_t  index);
          virtual ~Loop_GetOrientedEdge_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLoop * _underlying;                         size_t  index;

                
                 MbOrientedEdge * _result;
                

        int resultType;
  };


  class Loop_GetEdges_AsyncWorker : public PromiseWorker {
      public:
          Loop_GetEdges_AsyncWorker(
MbLoop * _underlying,            Napi::Promise::Deferred const &d,
                                 bool  findSame = true);
          virtual ~Loop_GetEdges_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLoop * _underlying;                         bool  findSame= true;

                
                 RPArray<MbCurveEdge> * edges;
                

        int resultType;
  };


  class Loop_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          Loop_GetUseCount_AsyncWorker(
MbLoop * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Loop_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLoop * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class Loop_AddRef_AsyncWorker : public PromiseWorker {
      public:
          Loop_AddRef_AsyncWorker(
MbLoop * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Loop_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLoop * _underlying;

        int resultType;
  };



#endif
