// This is a generated file, modify: generate/templates/RefItem.h

#ifndef REFITEM_H
#define REFITEM_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <reference_item.h>

#include "PromiseWorker.h"

class RefItem : public
  Napi::ObjectWrap<RefItem>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbRefItem *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        RefItem(const Napi::CallbackInfo& info);

         Napi::Value GetUseCount(const Napi::CallbackInfo& info);
         Napi::Value GetUseCount_async(const Napi::CallbackInfo& info);
         Napi::Value AddRef(const Napi::CallbackInfo& info);
         Napi::Value AddRef_async(const Napi::CallbackInfo& info);
        Napi::Value Id(const Napi::CallbackInfo& info);

    MbRefItem * _underlying;



  private:

};


  class RefItem_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          RefItem_GetUseCount_AsyncWorker(
MbRefItem * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~RefItem_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbRefItem * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class RefItem_AddRef_AsyncWorker : public PromiseWorker {
      public:
          RefItem_AddRef_AsyncWorker(
MbRefItem * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~RefItem_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbRefItem * _underlying;

        int resultType;
  };



#endif
