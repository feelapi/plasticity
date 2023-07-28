// This is a generated file, modify: generate/templates/ActionPhantom.h

#ifndef ACTIONPHANTOM_H
#define ACTIONPHANTOM_H

#include <napi.h>
#include <vector>

#include <action_phantom.h>

#include "Solid.h"
#include "CurveEdge.h"
#include "_SmoothValues.h"
#include "Surface.h"
#include "EdgeSequence.h"
#include "EdgeFunction.h"

#include "PromiseWorker.h"

class ActionPhantom : public
  Napi::ObjectWrap<ActionPhantom>
{
  public:
        static Napi::Object Init(Napi::Env env, Napi::Object exports);

        static Napi::Value SmoothPhantom(const Napi::CallbackInfo& info);
        static Napi::Value SmoothPhantom_async(const Napi::CallbackInfo& info);
        static Napi::Value SmoothSequence(const Napi::CallbackInfo& info);
        static Napi::Value SmoothSequence_async(const Napi::CallbackInfo& info);
};


  class ActionPhantom_SmoothPhantom_AsyncWorker : public PromiseWorker {
      public:
          ActionPhantom_SmoothPhantom_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                 MbSolid & solid,
                                 SArray<MbEdgeFunction> & edges,
                                const SmoothValues & params);
          virtual ~ActionPhantom_SmoothPhantom_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                         MbSolid & solid;
                         SArray<MbEdgeFunction> & edges;
                        const SmoothValues & params;

                
                 RPArray<MbSurface> * result;
                

        int resultType;
  };


  class ActionPhantom_SmoothSequence_AsyncWorker : public PromiseWorker {
      public:
          ActionPhantom_SmoothSequence_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                const MbSolid & solid,
                                 RPArray<MbCurveEdge> & edges,
                                const SmoothValues & params,
                                 bool  createSurfaces);
          virtual ~ActionPhantom_SmoothSequence_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                        const MbSolid & solid;
                         RPArray<MbCurveEdge> & edges;
                        const SmoothValues & params;
                         bool  createSurfaces;

                
                 RPArray<MbEdgeSequence> * sequences;
                
                
                 RPArray<MbSurface> * result;
                

        int resultType;
  };



#endif
