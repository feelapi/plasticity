// This is a generated file, modify: generate/templates/RegDuplicate.h

#ifndef REGDUPLICATE_H
#define REGDUPLICATE_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <item_registrator.h>

#include "RefItem.h"
#include "PromiseWorker.h"

class RegDuplicate : public
  Napi::ObjectWrap<RegDuplicate>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbRegDuplicate *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        RegDuplicate(const Napi::CallbackInfo& info);

         Napi::Value IsReg(const Napi::CallbackInfo& info);
         Napi::Value IsReg_async(const Napi::CallbackInfo& info);
         Napi::Value SetReg(const Napi::CallbackInfo& info);
         Napi::Value SetReg_async(const Napi::CallbackInfo& info);
        Napi::Value Id(const Napi::CallbackInfo& info);

    MbRegDuplicate * _underlying;



  private:

};


  class RegDuplicate_IsReg_AsyncWorker : public PromiseWorker {
      public:
          RegDuplicate_IsReg_AsyncWorker(
MbRegDuplicate * _underlying,            Napi::Promise::Deferred const &d,
                                const MbRefItem * srcItem);
          virtual ~RegDuplicate_IsReg_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbRegDuplicate * _underlying;                        const MbRefItem * srcItem;

                
                 bool  _result;
                
                
                 MbRefItem * cpyItem;
                

        int resultType;
  };


  class RegDuplicate_SetReg_AsyncWorker : public PromiseWorker {
      public:
          RegDuplicate_SetReg_AsyncWorker(
MbRegDuplicate * _underlying,            Napi::Promise::Deferred const &d,
                                const MbRefItem * srcItem,
                                 MbRefItem * cpyItem);
          virtual ~RegDuplicate_SetReg_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbRegDuplicate * _underlying;                        const MbRefItem * srcItem;
                         MbRefItem * cpyItem;


        int resultType;
  };



#endif
