// This is a generated file, modify: generate/templates/BooleanSolid.h

#ifndef BOOLEANSOLID_H
#define BOOLEANSOLID_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cr_boolean_solid.h>

#include "Creator.h"
#include "PromiseWorker.h"

class BooleanSolid : public
  Napi::ObjectWrap<BooleanSolid>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbBooleanSolid *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        BooleanSolid(const Napi::CallbackInfo& info);

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

    MbBooleanSolid * _underlying;

    ~BooleanSolid();


  private:

};


  class BooleanSolid_IsA_AsyncWorker : public PromiseWorker {
      public:
          BooleanSolid_IsA_AsyncWorker(
MbBooleanSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~BooleanSolid_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbBooleanSolid * _underlying;
                
                 MbeCreatorType  _result;
                

        int resultType;
  };


  class BooleanSolid_Type_AsyncWorker : public PromiseWorker {
      public:
          BooleanSolid_Type_AsyncWorker(
MbBooleanSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~BooleanSolid_Type_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbBooleanSolid * _underlying;
                
                 MbeCreatorType  _result;
                

        int resultType;
  };


  class BooleanSolid_GetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          BooleanSolid_GetBasisPoints_AsyncWorker(
MbBooleanSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~BooleanSolid_GetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbBooleanSolid * _underlying;
                
                 MbControlData3D * cd;
                

        int resultType;
  };


  class BooleanSolid_SetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          BooleanSolid_SetBasisPoints_AsyncWorker(
MbBooleanSolid * _underlying,            Napi::Promise::Deferred const &d,
                                const MbControlData3D & cd);
          virtual ~BooleanSolid_SetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbBooleanSolid * _underlying;                        const MbControlData3D & cd;


        int resultType;
  };


  class BooleanSolid_GetBasisItems_AsyncWorker : public PromiseWorker {
      public:
          BooleanSolid_GetBasisItems_AsyncWorker(
MbBooleanSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~BooleanSolid_GetBasisItems_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbBooleanSolid * _underlying;
                
                 RPArray<MbSpaceItem> * items;
                

        int resultType;
  };


  class BooleanSolid_GetCreatorsCount_AsyncWorker : public PromiseWorker {
      public:
          BooleanSolid_GetCreatorsCount_AsyncWorker(
MbBooleanSolid * _underlying,            Napi::Promise::Deferred const &d,
                                 MbeCreatorType  ct);
          virtual ~BooleanSolid_GetCreatorsCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbBooleanSolid * _underlying;                         MbeCreatorType  ct;

                
                 size_t  _result;
                

        int resultType;
  };


  class BooleanSolid_GetYourNameMaker_AsyncWorker : public PromiseWorker {
      public:
          BooleanSolid_GetYourNameMaker_AsyncWorker(
MbBooleanSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~BooleanSolid_GetYourNameMaker_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbBooleanSolid * _underlying;
                
                const MbSNameMaker * _result;
                

        int resultType;
  };


  class BooleanSolid_GetStatus_AsyncWorker : public PromiseWorker {
      public:
          BooleanSolid_GetStatus_AsyncWorker(
MbBooleanSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~BooleanSolid_GetStatus_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbBooleanSolid * _underlying;
                
                 MbeProcessState  _result;
                

        int resultType;
  };


  class BooleanSolid_SetStatus_AsyncWorker : public PromiseWorker {
      public:
          BooleanSolid_SetStatus_AsyncWorker(
MbBooleanSolid * _underlying,            Napi::Promise::Deferred const &d,
                                 MbeProcessState  l);
          virtual ~BooleanSolid_SetStatus_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbBooleanSolid * _underlying;                         MbeProcessState  l;


        int resultType;
  };


  class BooleanSolid_CreateShell_AsyncWorker : public PromiseWorker {
      public:
          BooleanSolid_CreateShell_AsyncWorker(
MbBooleanSolid * _underlying,            Napi::Promise::Deferred const &d,
                                 MbFaceShell * shell,
                                 MbeCopyMode  sameShell);
          virtual ~BooleanSolid_CreateShell_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbBooleanSolid * _underlying;                         MbFaceShell * shell;
                         MbeCopyMode  sameShell;

                
                 bool  success;
                
                
                 RPArray<MbSpaceItem> * items;
                

        int resultType;
  };


  class BooleanSolid_GetMainName_AsyncWorker : public PromiseWorker {
      public:
          BooleanSolid_GetMainName_AsyncWorker(
MbBooleanSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~BooleanSolid_GetMainName_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbBooleanSolid * _underlying;
                
                 SimpleName  _result;
                

        int resultType;
  };


  class BooleanSolid_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          BooleanSolid_GetUseCount_AsyncWorker(
MbBooleanSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~BooleanSolid_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbBooleanSolid * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class BooleanSolid_AddRef_AsyncWorker : public PromiseWorker {
      public:
          BooleanSolid_AddRef_AsyncWorker(
MbBooleanSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~BooleanSolid_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbBooleanSolid * _underlying;

        int resultType;
  };



#endif
