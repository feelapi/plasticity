// This is a generated file, modify: generate/templates/SNameMaker.h

#ifndef SNAMEMAKER_H
#define SNAMEMAKER_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <name_item.h>

#include "NameMaker.h"
#include "PromiseWorker.h"

class SNameMaker : public
  Napi::ObjectWrap<SNameMaker>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbSNameMaker *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        SNameMaker(const Napi::CallbackInfo& info);

         Napi::Value Add(const Napi::CallbackInfo& info);
         Napi::Value Add_async(const Napi::CallbackInfo& info);
         Napi::Value IsChild(const Napi::CallbackInfo& info);
         Napi::Value IsChild_async(const Napi::CallbackInfo& info);
         Napi::Value GetMainName(const Napi::CallbackInfo& info);
         Napi::Value GetMainName_async(const Napi::CallbackInfo& info);
         Napi::Value GetUseCount(const Napi::CallbackInfo& info);
         Napi::Value GetUseCount_async(const Napi::CallbackInfo& info);
         Napi::Value AddRef(const Napi::CallbackInfo& info);
         Napi::Value AddRef_async(const Napi::CallbackInfo& info);
        Napi::Value Id(const Napi::CallbackInfo& info);

    MbSNameMaker * _underlying;

    ~SNameMaker();


  private:

};


  class SNameMaker_Add_AsyncWorker : public PromiseWorker {
      public:
          SNameMaker_Add_AsyncWorker(
MbSNameMaker * _underlying,            Napi::Promise::Deferred const &d,
                                const SimpleName & ent);
          virtual ~SNameMaker_Add_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSNameMaker * _underlying;                        const SimpleName & ent;


        int resultType;
  };


  class SNameMaker_IsChild_AsyncWorker : public PromiseWorker {
      public:
          SNameMaker_IsChild_AsyncWorker(
MbSNameMaker * _underlying,            Napi::Promise::Deferred const &d,
                                const MbTopologyItem & t);
          virtual ~SNameMaker_IsChild_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSNameMaker * _underlying;                        const MbTopologyItem & t;

                
                 bool  _result;
                

        int resultType;
  };


  class SNameMaker_GetMainName_AsyncWorker : public PromiseWorker {
      public:
          SNameMaker_GetMainName_AsyncWorker(
MbSNameMaker * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~SNameMaker_GetMainName_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSNameMaker * _underlying;
                
                 SimpleName  _result;
                

        int resultType;
  };


  class SNameMaker_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          SNameMaker_GetUseCount_AsyncWorker(
MbSNameMaker * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~SNameMaker_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSNameMaker * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class SNameMaker_AddRef_AsyncWorker : public PromiseWorker {
      public:
          SNameMaker_AddRef_AsyncWorker(
MbSNameMaker * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~SNameMaker_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSNameMaker * _underlying;

        int resultType;
  };



#endif
