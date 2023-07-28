// This is a generated file, modify: generate/templates/Path.h

#ifndef PATH_H
#define PATH_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <name_item.h>

#include "PromiseWorker.h"

class Path : public
  Napi::ObjectWrap<Path>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbPath *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        Path(const Napi::CallbackInfo& info);

         Napi::Value Count(const Napi::CallbackInfo& info);
         Napi::Value Count_async(const Napi::CallbackInfo& info);
        Napi::Value Id(const Napi::CallbackInfo& info);

    MbPath * _underlying;



  private:

};


  class Path_Count_AsyncWorker : public PromiseWorker {
      public:
          Path_Count_AsyncWorker(
MbPath * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Path_Count_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPath * _underlying;
                
                 size_t  _result;
                

        int resultType;
  };



#endif
