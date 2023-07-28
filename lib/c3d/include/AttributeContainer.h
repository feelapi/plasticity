// This is a generated file, modify: generate/templates/AttributeContainer.h

#ifndef ATTRIBUTECONTAINER_H
#define ATTRIBUTECONTAINER_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <attribute_container.h>

#include "Grid.h"
#include "PromiseWorker.h"

class AttributeContainer : public
  Napi::ObjectWrap<AttributeContainer>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbAttributeContainer *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        AttributeContainer(const Napi::CallbackInfo& info);

         Napi::Value SetStyle(const Napi::CallbackInfo& info);
         Napi::Value SetStyle_async(const Napi::CallbackInfo& info);
         Napi::Value GetStyle(const Napi::CallbackInfo& info);
         Napi::Value GetStyle_async(const Napi::CallbackInfo& info);
         Napi::Value SetColor(const Napi::CallbackInfo& info);
         Napi::Value SetColor_async(const Napi::CallbackInfo& info);
         Napi::Value GetColor(const Napi::CallbackInfo& info);
         Napi::Value GetColor_async(const Napi::CallbackInfo& info);
         Napi::Value AttributesConvert(const Napi::CallbackInfo& info);
         Napi::Value AttributesConvert_async(const Napi::CallbackInfo& info);
        Napi::Value Id(const Napi::CallbackInfo& info);

    MbAttributeContainer * _underlying;



  private:

};


  class AttributeContainer_SetStyle_AsyncWorker : public PromiseWorker {
      public:
          AttributeContainer_SetStyle_AsyncWorker(
MbAttributeContainer * _underlying,            Napi::Promise::Deferred const &d,
                                 int  s);
          virtual ~AttributeContainer_SetStyle_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbAttributeContainer * _underlying;                         int  s;


        int resultType;
  };


  class AttributeContainer_GetStyle_AsyncWorker : public PromiseWorker {
      public:
          AttributeContainer_GetStyle_AsyncWorker(
MbAttributeContainer * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~AttributeContainer_GetStyle_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbAttributeContainer * _underlying;
                
                 int  _result;
                

        int resultType;
  };


  class AttributeContainer_SetColor_AsyncWorker : public PromiseWorker {
      public:
          AttributeContainer_SetColor_AsyncWorker(
MbAttributeContainer * _underlying,            Napi::Promise::Deferred const &d,
                                 uint32  c);
          virtual ~AttributeContainer_SetColor_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbAttributeContainer * _underlying;                         uint32  c;


        int resultType;
  };


  class AttributeContainer_GetColor_AsyncWorker : public PromiseWorker {
      public:
          AttributeContainer_GetColor_AsyncWorker(
MbAttributeContainer * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~AttributeContainer_GetColor_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbAttributeContainer * _underlying;
                
                 uint32  _result;
                

        int resultType;
  };


  class AttributeContainer_AttributesConvert_AsyncWorker : public PromiseWorker {
      public:
          AttributeContainer_AttributesConvert_AsyncWorker(
MbAttributeContainer * _underlying,            Napi::Promise::Deferred const &d,
                                 MbGrid & other);
          virtual ~AttributeContainer_AttributesConvert_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbAttributeContainer * _underlying;                         MbGrid & other;


        int resultType;
  };



#endif
