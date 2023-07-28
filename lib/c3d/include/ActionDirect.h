// This is a generated file, modify: generate/templates/ActionDirect.h

#ifndef ACTIONDIRECT_H
#define ACTIONDIRECT_H

#include <napi.h>
#include <vector>

#include <action_direct.h>

#include "Solid.h"
#include "_ModifyValues.h"
#include "SNameMaker.h"
#include "_TransformValues.h"
#include "CurveEdge.h"

#include "PromiseWorker.h"

class ActionDirect : public
  Napi::ObjectWrap<ActionDirect>
{
  public:
        static Napi::Object Init(Napi::Env env, Napi::Object exports);

        static Napi::Value CollectFacesForModification(const Napi::CallbackInfo& info);
        static Napi::Value CollectFacesForModification_async(const Napi::CallbackInfo& info);
        static Napi::Value FaceModifiedSolid(const Napi::CallbackInfo& info);
        static Napi::Value FaceModifiedSolid_async(const Napi::CallbackInfo& info);
        static Napi::Value TransformedSolid(const Napi::CallbackInfo& info);
        static Napi::Value TransformedSolid_async(const Napi::CallbackInfo& info);
        static Napi::Value EdgeModifiedSolid(const Napi::CallbackInfo& info);
        static Napi::Value EdgeModifiedSolid_async(const Napi::CallbackInfo& info);
};


  class ActionDirect_CollectFacesForModification_AsyncWorker : public PromiseWorker {
      public:
          ActionDirect_CollectFacesForModification_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                 MbFaceShell * shell,
                                 MbeModifyingType  way,
                                 double  radius);
          virtual ~ActionDirect_CollectFacesForModification_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                         MbFaceShell * shell;
                         MbeModifyingType  way;
                         double  radius;

                
                 RPArray<MbFace> * faces;
                

        int resultType;
  };


  class ActionDirect_FaceModifiedSolid_AsyncWorker : public PromiseWorker {
      public:
          ActionDirect_FaceModifiedSolid_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                 MbSolid & solid,
                                 MbeCopyMode  sameShell,
                                const ModifyValues & params,
                                const RPArray<MbFace> & faces,
                                const MbSNameMaker & names);
          virtual ~ActionDirect_FaceModifiedSolid_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                         MbSolid & solid;
                         MbeCopyMode  sameShell;
                        const ModifyValues & params;
                        const RPArray<MbFace> & faces;
                        const MbSNameMaker & names;

                
                 MbSolid * result;
                

        int resultType;
  };


  class ActionDirect_TransformedSolid_AsyncWorker : public PromiseWorker {
      public:
          ActionDirect_TransformedSolid_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                 MbSolid & solid,
                                 MbeCopyMode  sameShell,
                                const TransformValues & params,
                                const MbSNameMaker & names);
          virtual ~ActionDirect_TransformedSolid_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                         MbSolid & solid;
                         MbeCopyMode  sameShell;
                        const TransformValues & params;
                        const MbSNameMaker & names;

                
                 MbSolid * result;
                

        int resultType;
  };


  class ActionDirect_EdgeModifiedSolid_AsyncWorker : public PromiseWorker {
      public:
          ActionDirect_EdgeModifiedSolid_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                 MbSolid & solid,
                                 MbeCopyMode  sameShell,
                                const ModifyValues & params,
                                const RPArray<MbCurveEdge> & edges,
                                const MbSNameMaker & names);
          virtual ~ActionDirect_EdgeModifiedSolid_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                         MbSolid & solid;
                         MbeCopyMode  sameShell;
                        const ModifyValues & params;
                        const RPArray<MbCurveEdge> & edges;
                        const MbSNameMaker & names;

                
                 MbSolid * result;
                

        int resultType;
  };



#endif
