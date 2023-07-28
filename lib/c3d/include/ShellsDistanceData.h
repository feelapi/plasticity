// This is a generated file, modify: generate/templates/ShellsDistanceData.h

#ifndef SHELLSDISTANCEDATA_H
#define SHELLSDISTANCEDATA_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <topology_faceset.h>

#include "PromiseWorker.h"

class ShellsDistanceData : public
  Napi::ObjectWrap<ShellsDistanceData>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbShellsDistanceData raw);
        static Napi::Function GetConstructor(Napi::Env env);
        ShellsDistanceData(const Napi::CallbackInfo& info);

         Napi::Value GetMinDistanse(const Napi::CallbackInfo& info);
         Napi::Value GetMinDistanse_async(const Napi::CallbackInfo& info);

    MbShellsDistanceData  _underlying;



  private:

};


  class ShellsDistanceData_GetMinDistanse_AsyncWorker : public PromiseWorker {
      public:
          ShellsDistanceData_GetMinDistanse_AsyncWorker(
MbShellsDistanceData  _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ShellsDistanceData_GetMinDistanse_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbShellsDistanceData  _underlying;
                
                 double  _result;
                

        int resultType;
  };



#endif
