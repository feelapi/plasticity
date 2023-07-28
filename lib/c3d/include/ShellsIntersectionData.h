// This is a generated file, modify: generate/templates/ShellsIntersectionData.h

#ifndef SHELLSINTERSECTIONDATA_H
#define SHELLSINTERSECTIONDATA_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <check_geometry.h>

#include "PromiseWorker.h"

class ShellsIntersectionData : public
  Napi::ObjectWrap<ShellsIntersectionData>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbShellsIntersectionData *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        ShellsIntersectionData(const Napi::CallbackInfo& info);

         Napi::Value IsSolid(const Napi::CallbackInfo& info);
         Napi::Value IsSolid_async(const Napi::CallbackInfo& info);
         Napi::Value IsSurface(const Napi::CallbackInfo& info);
         Napi::Value IsSurface_async(const Napi::CallbackInfo& info);
        Napi::Value Id(const Napi::CallbackInfo& info);

    MbShellsIntersectionData * _underlying;



  private:

};


  class ShellsIntersectionData_IsSolid_AsyncWorker : public PromiseWorker {
      public:
          ShellsIntersectionData_IsSolid_AsyncWorker(
MbShellsIntersectionData * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ShellsIntersectionData_IsSolid_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbShellsIntersectionData * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class ShellsIntersectionData_IsSurface_AsyncWorker : public PromiseWorker {
      public:
          ShellsIntersectionData_IsSurface_AsyncWorker(
MbShellsIntersectionData * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ShellsIntersectionData_IsSurface_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbShellsIntersectionData * _underlying;
                
                 bool  _result;
                

        int resultType;
  };



#endif
