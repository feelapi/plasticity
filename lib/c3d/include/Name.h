// This is a generated file, modify: generate/templates/Name.h

#ifndef NAME_H
#define NAME_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <name_item.h>

#include "PromiseWorker.h"

class Name : public
  Napi::ObjectWrap<Name>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbName *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        Name(const Napi::CallbackInfo& info);

         Napi::Value Hash(const Napi::CallbackInfo& info);
         Napi::Value Hash_async(const Napi::CallbackInfo& info);
         Napi::Value GetFirstName(const Napi::CallbackInfo& info);
         Napi::Value GetFirstName_async(const Napi::CallbackInfo& info);
         Napi::Value GetMainName(const Napi::CallbackInfo& info);
         Napi::Value GetMainName_async(const Napi::CallbackInfo& info);
        Napi::Value Id(const Napi::CallbackInfo& info);

    MbName * _underlying;



  private:

};


  class Name_Hash_AsyncWorker : public PromiseWorker {
      public:
          Name_Hash_AsyncWorker(
MbName * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Name_Hash_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbName * _underlying;
                
                 SimpleName  _result;
                

        int resultType;
  };


  class Name_GetFirstName_AsyncWorker : public PromiseWorker {
      public:
          Name_GetFirstName_AsyncWorker(
MbName * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Name_GetFirstName_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbName * _underlying;
                
                 SimpleName  _result;
                

        int resultType;
  };


  class Name_GetMainName_AsyncWorker : public PromiseWorker {
      public:
          Name_GetMainName_AsyncWorker(
MbName * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Name_GetMainName_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbName * _underlying;
                
                 SimpleName  _result;
                

        int resultType;
  };



#endif
