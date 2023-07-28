// This is a generated file, modify: generate/templates/Enabler.h

#ifndef ENABLER_H
#define ENABLER_H

#include <napi.h>
#include <vector>

#include <tool_enabler.h>


#include "PromiseWorker.h"

class Enabler : public
  Napi::ObjectWrap<Enabler>
{
  public:
        static Napi::Object Init(Napi::Env env, Napi::Object exports);

        static Napi::Value EnableMathModules(const Napi::CallbackInfo& info);
        static Napi::Value EnableMathModules_async(const Napi::CallbackInfo& info);
};


  class Enabler_EnableMathModules_AsyncWorker : public PromiseWorker {
      public:
          Enabler_EnableMathModules_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                const char * name, size_t name_length
,
                                const char * key, size_t key_length
);
          virtual ~Enabler_EnableMathModules_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                        const char * name; size_t name_length;
                        const char * key; size_t key_length;


        int resultType;
  };



#endif
