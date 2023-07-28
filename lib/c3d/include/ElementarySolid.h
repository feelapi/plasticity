// This is a generated file, modify: generate/templates/ElementarySolid.h

#ifndef ELEMENTARYSOLID_H
#define ELEMENTARYSOLID_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cr_elementary_solid.h>

#include "Creator.h"
#include "PromiseWorker.h"

class ElementarySolid : public
  Napi::ObjectWrap<ElementarySolid>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbElementarySolid *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        ElementarySolid(const Napi::CallbackInfo& info);

         Napi::Value IsA(const Napi::CallbackInfo& info);
         Napi::Value IsA_async(const Napi::CallbackInfo& info);
         Napi::Value Type(const Napi::CallbackInfo& info);
         Napi::Value Type_async(const Napi::CallbackInfo& info);
         Napi::Value GetBasisPoints(const Napi::CallbackInfo& info);
         Napi::Value GetBasisPoints_async(const Napi::CallbackInfo& info);
         Napi::Value SetBasisPoints(const Napi::CallbackInfo& info);
         Napi::Value SetBasisPoints_async(const Napi::CallbackInfo& info);
         Napi::Value GetBasisItems(const Napi::CallbackInfo& info);
         Napi::Value GetBasisItems_async(const Napi::CallbackInfo& info);
         Napi::Value GetCreatorsCount(const Napi::CallbackInfo& info);
         Napi::Value GetCreatorsCount_async(const Napi::CallbackInfo& info);
         Napi::Value GetYourNameMaker(const Napi::CallbackInfo& info);
         Napi::Value GetYourNameMaker_async(const Napi::CallbackInfo& info);
         Napi::Value GetStatus(const Napi::CallbackInfo& info);
         Napi::Value GetStatus_async(const Napi::CallbackInfo& info);
         Napi::Value SetStatus(const Napi::CallbackInfo& info);
         Napi::Value SetStatus_async(const Napi::CallbackInfo& info);
         Napi::Value CreateShell(const Napi::CallbackInfo& info);
         Napi::Value CreateShell_async(const Napi::CallbackInfo& info);
         Napi::Value GetMainName(const Napi::CallbackInfo& info);
         Napi::Value GetMainName_async(const Napi::CallbackInfo& info);
         Napi::Value GetUseCount(const Napi::CallbackInfo& info);
         Napi::Value GetUseCount_async(const Napi::CallbackInfo& info);
         Napi::Value AddRef(const Napi::CallbackInfo& info);
         Napi::Value AddRef_async(const Napi::CallbackInfo& info);
        Napi::Value Id(const Napi::CallbackInfo& info);

    MbElementarySolid * _underlying;

    ~ElementarySolid();


  private:

};


  class ElementarySolid_IsA_AsyncWorker : public PromiseWorker {
      public:
          ElementarySolid_IsA_AsyncWorker(
MbElementarySolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ElementarySolid_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySolid * _underlying;
                
                 MbeCreatorType  _result;
                

        int resultType;
  };


  class ElementarySolid_Type_AsyncWorker : public PromiseWorker {
      public:
          ElementarySolid_Type_AsyncWorker(
MbElementarySolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ElementarySolid_Type_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySolid * _underlying;
                
                 MbeCreatorType  _result;
                

        int resultType;
  };


  class ElementarySolid_GetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          ElementarySolid_GetBasisPoints_AsyncWorker(
MbElementarySolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ElementarySolid_GetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySolid * _underlying;
                
                 MbControlData3D * cd;
                

        int resultType;
  };


  class ElementarySolid_SetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          ElementarySolid_SetBasisPoints_AsyncWorker(
MbElementarySolid * _underlying,            Napi::Promise::Deferred const &d,
                                const MbControlData3D & cd);
          virtual ~ElementarySolid_SetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySolid * _underlying;                        const MbControlData3D & cd;


        int resultType;
  };


  class ElementarySolid_GetBasisItems_AsyncWorker : public PromiseWorker {
      public:
          ElementarySolid_GetBasisItems_AsyncWorker(
MbElementarySolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ElementarySolid_GetBasisItems_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySolid * _underlying;
                
                 RPArray<MbSpaceItem> * items;
                

        int resultType;
  };


  class ElementarySolid_GetCreatorsCount_AsyncWorker : public PromiseWorker {
      public:
          ElementarySolid_GetCreatorsCount_AsyncWorker(
MbElementarySolid * _underlying,            Napi::Promise::Deferred const &d,
                                 MbeCreatorType  ct);
          virtual ~ElementarySolid_GetCreatorsCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySolid * _underlying;                         MbeCreatorType  ct;

                
                 size_t  _result;
                

        int resultType;
  };


  class ElementarySolid_GetYourNameMaker_AsyncWorker : public PromiseWorker {
      public:
          ElementarySolid_GetYourNameMaker_AsyncWorker(
MbElementarySolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ElementarySolid_GetYourNameMaker_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySolid * _underlying;
                
                const MbSNameMaker * _result;
                

        int resultType;
  };


  class ElementarySolid_GetStatus_AsyncWorker : public PromiseWorker {
      public:
          ElementarySolid_GetStatus_AsyncWorker(
MbElementarySolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ElementarySolid_GetStatus_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySolid * _underlying;
                
                 MbeProcessState  _result;
                

        int resultType;
  };


  class ElementarySolid_SetStatus_AsyncWorker : public PromiseWorker {
      public:
          ElementarySolid_SetStatus_AsyncWorker(
MbElementarySolid * _underlying,            Napi::Promise::Deferred const &d,
                                 MbeProcessState  l);
          virtual ~ElementarySolid_SetStatus_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySolid * _underlying;                         MbeProcessState  l;


        int resultType;
  };


  class ElementarySolid_CreateShell_AsyncWorker : public PromiseWorker {
      public:
          ElementarySolid_CreateShell_AsyncWorker(
MbElementarySolid * _underlying,            Napi::Promise::Deferred const &d,
                                 MbFaceShell * shell,
                                 MbeCopyMode  sameShell);
          virtual ~ElementarySolid_CreateShell_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySolid * _underlying;                         MbFaceShell * shell;
                         MbeCopyMode  sameShell;

                
                 bool  success;
                
                
                 RPArray<MbSpaceItem> * items;
                

        int resultType;
  };


  class ElementarySolid_GetMainName_AsyncWorker : public PromiseWorker {
      public:
          ElementarySolid_GetMainName_AsyncWorker(
MbElementarySolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ElementarySolid_GetMainName_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySolid * _underlying;
                
                 SimpleName  _result;
                

        int resultType;
  };


  class ElementarySolid_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          ElementarySolid_GetUseCount_AsyncWorker(
MbElementarySolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ElementarySolid_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySolid * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class ElementarySolid_AddRef_AsyncWorker : public PromiseWorker {
      public:
          ElementarySolid_AddRef_AsyncWorker(
MbElementarySolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ElementarySolid_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbElementarySolid * _underlying;

        int resultType;
  };



#endif
