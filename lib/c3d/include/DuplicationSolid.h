// This is a generated file, modify: generate/templates/DuplicationSolid.h

#ifndef DUPLICATIONSOLID_H
#define DUPLICATIONSOLID_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cr_duplication_solid.h>

#include "Creator.h"
#include "PromiseWorker.h"

class DuplicationSolid : public
  Napi::ObjectWrap<DuplicationSolid>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbDuplicationSolid *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        DuplicationSolid(const Napi::CallbackInfo& info);

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

    MbDuplicationSolid * _underlying;

    ~DuplicationSolid();


  private:

};


  class DuplicationSolid_IsA_AsyncWorker : public PromiseWorker {
      public:
          DuplicationSolid_IsA_AsyncWorker(
MbDuplicationSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~DuplicationSolid_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDuplicationSolid * _underlying;
                
                 MbeCreatorType  _result;
                

        int resultType;
  };


  class DuplicationSolid_Type_AsyncWorker : public PromiseWorker {
      public:
          DuplicationSolid_Type_AsyncWorker(
MbDuplicationSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~DuplicationSolid_Type_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDuplicationSolid * _underlying;
                
                 MbeCreatorType  _result;
                

        int resultType;
  };


  class DuplicationSolid_GetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          DuplicationSolid_GetBasisPoints_AsyncWorker(
MbDuplicationSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~DuplicationSolid_GetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDuplicationSolid * _underlying;
                
                 MbControlData3D * cd;
                

        int resultType;
  };


  class DuplicationSolid_SetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          DuplicationSolid_SetBasisPoints_AsyncWorker(
MbDuplicationSolid * _underlying,            Napi::Promise::Deferred const &d,
                                const MbControlData3D & cd);
          virtual ~DuplicationSolid_SetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDuplicationSolid * _underlying;                        const MbControlData3D & cd;


        int resultType;
  };


  class DuplicationSolid_GetBasisItems_AsyncWorker : public PromiseWorker {
      public:
          DuplicationSolid_GetBasisItems_AsyncWorker(
MbDuplicationSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~DuplicationSolid_GetBasisItems_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDuplicationSolid * _underlying;
                
                 RPArray<MbSpaceItem> * items;
                

        int resultType;
  };


  class DuplicationSolid_GetCreatorsCount_AsyncWorker : public PromiseWorker {
      public:
          DuplicationSolid_GetCreatorsCount_AsyncWorker(
MbDuplicationSolid * _underlying,            Napi::Promise::Deferred const &d,
                                 MbeCreatorType  ct);
          virtual ~DuplicationSolid_GetCreatorsCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDuplicationSolid * _underlying;                         MbeCreatorType  ct;

                
                 size_t  _result;
                

        int resultType;
  };


  class DuplicationSolid_GetYourNameMaker_AsyncWorker : public PromiseWorker {
      public:
          DuplicationSolid_GetYourNameMaker_AsyncWorker(
MbDuplicationSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~DuplicationSolid_GetYourNameMaker_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDuplicationSolid * _underlying;
                
                const MbSNameMaker * _result;
                

        int resultType;
  };


  class DuplicationSolid_GetStatus_AsyncWorker : public PromiseWorker {
      public:
          DuplicationSolid_GetStatus_AsyncWorker(
MbDuplicationSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~DuplicationSolid_GetStatus_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDuplicationSolid * _underlying;
                
                 MbeProcessState  _result;
                

        int resultType;
  };


  class DuplicationSolid_SetStatus_AsyncWorker : public PromiseWorker {
      public:
          DuplicationSolid_SetStatus_AsyncWorker(
MbDuplicationSolid * _underlying,            Napi::Promise::Deferred const &d,
                                 MbeProcessState  l);
          virtual ~DuplicationSolid_SetStatus_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDuplicationSolid * _underlying;                         MbeProcessState  l;


        int resultType;
  };


  class DuplicationSolid_CreateShell_AsyncWorker : public PromiseWorker {
      public:
          DuplicationSolid_CreateShell_AsyncWorker(
MbDuplicationSolid * _underlying,            Napi::Promise::Deferred const &d,
                                 MbFaceShell * shell,
                                 MbeCopyMode  sameShell);
          virtual ~DuplicationSolid_CreateShell_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDuplicationSolid * _underlying;                         MbFaceShell * shell;
                         MbeCopyMode  sameShell;

                
                 bool  success;
                
                
                 RPArray<MbSpaceItem> * items;
                

        int resultType;
  };


  class DuplicationSolid_GetMainName_AsyncWorker : public PromiseWorker {
      public:
          DuplicationSolid_GetMainName_AsyncWorker(
MbDuplicationSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~DuplicationSolid_GetMainName_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDuplicationSolid * _underlying;
                
                 SimpleName  _result;
                

        int resultType;
  };


  class DuplicationSolid_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          DuplicationSolid_GetUseCount_AsyncWorker(
MbDuplicationSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~DuplicationSolid_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDuplicationSolid * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class DuplicationSolid_AddRef_AsyncWorker : public PromiseWorker {
      public:
          DuplicationSolid_AddRef_AsyncWorker(
MbDuplicationSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~DuplicationSolid_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDuplicationSolid * _underlying;

        int resultType;
  };



#endif
