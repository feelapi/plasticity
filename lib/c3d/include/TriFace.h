// This is a generated file, modify: generate/templates/TriFace.h

#ifndef TRIFACE_H
#define TRIFACE_H

#include <napi.h>
#include <vector>

#include <tri_face.h>

#include "Face.h"
#include "StepData.h"
#include "Grid.h"

#include "PromiseWorker.h"

class TriFace : public
  Napi::ObjectWrap<TriFace>
{
  public:
        static Napi::Object Init(Napi::Env env, Napi::Object exports);

        static Napi::Value CalculateGrid(const Napi::CallbackInfo& info);
        static Napi::Value CalculateGrid_async(const Napi::CallbackInfo& info);
};


  class TriFace_CalculateGrid_AsyncWorker : public PromiseWorker {
      public:
          TriFace_CalculateGrid_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                const MbFace & face,
                                const MbStepData & stepData,
                                 MbGrid & grid,
                                 bool  dualSeams = true,
                                 bool  quad = false,
                                 bool  fair = false);
          virtual ~TriFace_CalculateGrid_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                        const MbFace & face;
                        const MbStepData & stepData;
                         MbGrid & grid;
                         bool  dualSeams= true;
                         bool  quad= false;
                         bool  fair= false;


        int resultType;
  };



#endif
