// This is a generated file, modify: generate/templates/Registrator.h

#ifndef REGISTRATOR_H
#define REGISTRATOR_H

#include <napi.h>
#include <vector>

#include <item_registrator.h>

#include "MeshAddon.h"
#include "AutoRegDuplicate.h"
#include "RegDuplicate.h"

#include "PromiseWorker.h"

class Registrator : public
  Napi::ObjectWrap<Registrator>
{
  public:
        static Napi::Object Init(Napi::Env env, Napi::Object exports);

        static Napi::Value AutoReg(const Napi::CallbackInfo& info);
        static Napi::Value AutoReg_async(const Napi::CallbackInfo& info);
};


  class Registrator_AutoReg_AsyncWorker : public PromiseWorker {
      public:
          Registrator_AutoReg_AsyncWorker(
            Napi::Promise::Deferred const &d);
          virtual ~Registrator_AutoReg_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:

                
                 MbAutoRegDuplicate * autoReg;
                
                
                 MbRegDuplicate * iReg;
                

        int resultType;
  };



#endif
