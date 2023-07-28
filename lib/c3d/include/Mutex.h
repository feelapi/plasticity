// This is a generated file, modify: generate/templates/Mutex.h

#ifndef MUTEX_H
#define MUTEX_H

#include <napi.h>
#include <vector>

#include <tool_mutex.h>


#include "PromiseWorker.h"

class Mutex : public
  Napi::ObjectWrap<Mutex>
{
  public:
        static Napi::Object Init(Napi::Env env, Napi::Object exports);

        static Napi::Value EnterParallelRegion(const Napi::CallbackInfo& info);
        static Napi::Value EnterParallelRegion_async(const Napi::CallbackInfo& info);
        static Napi::Value ExitParallelRegion(const Napi::CallbackInfo& info);
        static Napi::Value ExitParallelRegion_async(const Napi::CallbackInfo& info);
};


  class Mutex_EnterParallelRegion_AsyncWorker : public PromiseWorker {
      public:
          Mutex_EnterParallelRegion_AsyncWorker(
            Napi::Promise::Deferred const &d);
          virtual ~Mutex_EnterParallelRegion_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:


        int resultType;
  };


  class Mutex_ExitParallelRegion_AsyncWorker : public PromiseWorker {
      public:
          Mutex_ExitParallelRegion_AsyncWorker(
            Napi::Promise::Deferred const &d);
          virtual ~Mutex_ExitParallelRegion_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:


        int resultType;
  };



#endif
