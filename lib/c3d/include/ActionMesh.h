// This is a generated file, modify: generate/templates/ActionMesh.h

#ifndef ACTIONMESH_H
#define ACTIONMESH_H

#include <napi.h>
#include <vector>

#include <action_mesh.h>

#include "FloatPoint3D.h"
#include "Mesh.h"

#include "PromiseWorker.h"

class ActionMesh : public
  Napi::ObjectWrap<ActionMesh>
{
  public:
        static Napi::Object Init(Napi::Env env, Napi::Object exports);

        static Napi::Value CreateConvexPolyhedron(const Napi::CallbackInfo& info);
        static Napi::Value CreateConvexPolyhedron_async(const Napi::CallbackInfo& info);
};


  class ActionMesh_CreateConvexPolyhedron_AsyncWorker : public PromiseWorker {
      public:
          ActionMesh_CreateConvexPolyhedron_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                const SArray<MbFloatPoint3D> & points);
          virtual ~ActionMesh_CreateConvexPolyhedron_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                        const SArray<MbFloatPoint3D> & points;

                
                 MbMesh * result;
                

        int resultType;
  };



#endif
