// This is a generated file, modify: generate/templates/MeshGrid.h

#ifndef MESHGRID_H
#define MESHGRID_H

#include <napi.h>
#include <vector>

#include <mesh_grid.h>

#include "Grid.h"
#include "FloatAxis3D.h"
#include "FloatPoint3D.h"

#include "PromiseWorker.h"

class MeshGrid : public
  Napi::ObjectWrap<MeshGrid>
{
  public:
        static Napi::Object Init(Napi::Env env, Napi::Object exports);

        static Napi::Value LineGridIntersect(const Napi::CallbackInfo& info);
        static Napi::Value LineGridIntersect_async(const Napi::CallbackInfo& info);
};


  class MeshGrid_LineGridIntersect_AsyncWorker : public PromiseWorker {
      public:
          MeshGrid_LineGridIntersect_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                const MbGrid & grid,
                                const MbFloatAxis3D & line);
          virtual ~MeshGrid_LineGridIntersect_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                        const MbGrid & grid;
                        const MbFloatAxis3D & line;

                
                 bool  intersected;
                
                
                const MbFloatPoint3D * crossPoint;
                
                
                 float  tRes;
                

        int resultType;
  };



#endif
