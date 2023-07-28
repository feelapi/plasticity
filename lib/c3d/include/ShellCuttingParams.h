// This is a generated file, modify: generate/templates/ShellCuttingParams.h

#ifndef SHELLCUTTINGPARAMS_H
#define SHELLCUTTINGPARAMS_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <op_shell_parameter.h>

#include "Placement3D.h"
#include "Contour.h"
#include "Vector3D.h"
#include "MergingFlags.h"
#include "SNameMaker.h"
#include "PromiseWorker.h"

class ShellCuttingParams : public
  Napi::ObjectWrap<ShellCuttingParams>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbShellCuttingParams *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        ShellCuttingParams(const Napi::CallbackInfo& info);

         Napi::Value SetSurfaceProlongType(const Napi::CallbackInfo& info);
         Napi::Value SetSurfaceProlongType_async(const Napi::CallbackInfo& info);
         Napi::Value AddSurfaceProlongType(const Napi::CallbackInfo& info);
         Napi::Value AddSurfaceProlongType_async(const Napi::CallbackInfo& info);
        Napi::Value Id(const Napi::CallbackInfo& info);

    MbShellCuttingParams * _underlying;



  private:

};


  class ShellCuttingParams_SetSurfaceProlongType_AsyncWorker : public PromiseWorker {
      public:
          ShellCuttingParams_SetSurfaceProlongType_AsyncWorker(
MbShellCuttingParams * _underlying,            Napi::Promise::Deferred const &d,
                                 MbeSurfaceProlongType  pt);
          virtual ~ShellCuttingParams_SetSurfaceProlongType_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbShellCuttingParams * _underlying;                         MbeSurfaceProlongType  pt;


        int resultType;
  };


  class ShellCuttingParams_AddSurfaceProlongType_AsyncWorker : public PromiseWorker {
      public:
          ShellCuttingParams_AddSurfaceProlongType_AsyncWorker(
MbShellCuttingParams * _underlying,            Napi::Promise::Deferred const &d,
                                 MbeSurfaceProlongType  pt);
          virtual ~ShellCuttingParams_AddSurfaceProlongType_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbShellCuttingParams * _underlying;                         MbeSurfaceProlongType  pt;


        int resultType;
  };



#endif
