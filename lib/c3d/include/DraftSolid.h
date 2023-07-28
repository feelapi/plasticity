// This is a generated file, modify: generate/templates/DraftSolid.h

#ifndef DRAFTSOLID_H
#define DRAFTSOLID_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cr_draft_solid.h>

#include "Creator.h"
#include "PromiseWorker.h"

class DraftSolid : public
  Napi::ObjectWrap<DraftSolid>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbDraftSolid *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        DraftSolid(const Napi::CallbackInfo& info);

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

    MbDraftSolid * _underlying;

    ~DraftSolid();


  private:

};


  class DraftSolid_IsA_AsyncWorker : public PromiseWorker {
      public:
          DraftSolid_IsA_AsyncWorker(
MbDraftSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~DraftSolid_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDraftSolid * _underlying;
                
                 MbeCreatorType  _result;
                

        int resultType;
  };


  class DraftSolid_Type_AsyncWorker : public PromiseWorker {
      public:
          DraftSolid_Type_AsyncWorker(
MbDraftSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~DraftSolid_Type_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDraftSolid * _underlying;
                
                 MbeCreatorType  _result;
                

        int resultType;
  };


  class DraftSolid_GetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          DraftSolid_GetBasisPoints_AsyncWorker(
MbDraftSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~DraftSolid_GetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDraftSolid * _underlying;
                
                 MbControlData3D * cd;
                

        int resultType;
  };


  class DraftSolid_SetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          DraftSolid_SetBasisPoints_AsyncWorker(
MbDraftSolid * _underlying,            Napi::Promise::Deferred const &d,
                                const MbControlData3D & cd);
          virtual ~DraftSolid_SetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDraftSolid * _underlying;                        const MbControlData3D & cd;


        int resultType;
  };


  class DraftSolid_GetBasisItems_AsyncWorker : public PromiseWorker {
      public:
          DraftSolid_GetBasisItems_AsyncWorker(
MbDraftSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~DraftSolid_GetBasisItems_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDraftSolid * _underlying;
                
                 RPArray<MbSpaceItem> * items;
                

        int resultType;
  };


  class DraftSolid_GetCreatorsCount_AsyncWorker : public PromiseWorker {
      public:
          DraftSolid_GetCreatorsCount_AsyncWorker(
MbDraftSolid * _underlying,            Napi::Promise::Deferred const &d,
                                 MbeCreatorType  ct);
          virtual ~DraftSolid_GetCreatorsCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDraftSolid * _underlying;                         MbeCreatorType  ct;

                
                 size_t  _result;
                

        int resultType;
  };


  class DraftSolid_GetYourNameMaker_AsyncWorker : public PromiseWorker {
      public:
          DraftSolid_GetYourNameMaker_AsyncWorker(
MbDraftSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~DraftSolid_GetYourNameMaker_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDraftSolid * _underlying;
                
                const MbSNameMaker * _result;
                

        int resultType;
  };


  class DraftSolid_GetStatus_AsyncWorker : public PromiseWorker {
      public:
          DraftSolid_GetStatus_AsyncWorker(
MbDraftSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~DraftSolid_GetStatus_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDraftSolid * _underlying;
                
                 MbeProcessState  _result;
                

        int resultType;
  };


  class DraftSolid_SetStatus_AsyncWorker : public PromiseWorker {
      public:
          DraftSolid_SetStatus_AsyncWorker(
MbDraftSolid * _underlying,            Napi::Promise::Deferred const &d,
                                 MbeProcessState  l);
          virtual ~DraftSolid_SetStatus_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDraftSolid * _underlying;                         MbeProcessState  l;


        int resultType;
  };


  class DraftSolid_CreateShell_AsyncWorker : public PromiseWorker {
      public:
          DraftSolid_CreateShell_AsyncWorker(
MbDraftSolid * _underlying,            Napi::Promise::Deferred const &d,
                                 MbFaceShell * shell,
                                 MbeCopyMode  sameShell);
          virtual ~DraftSolid_CreateShell_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDraftSolid * _underlying;                         MbFaceShell * shell;
                         MbeCopyMode  sameShell;

                
                 bool  success;
                
                
                 RPArray<MbSpaceItem> * items;
                

        int resultType;
  };


  class DraftSolid_GetMainName_AsyncWorker : public PromiseWorker {
      public:
          DraftSolid_GetMainName_AsyncWorker(
MbDraftSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~DraftSolid_GetMainName_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDraftSolid * _underlying;
                
                 SimpleName  _result;
                

        int resultType;
  };


  class DraftSolid_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          DraftSolid_GetUseCount_AsyncWorker(
MbDraftSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~DraftSolid_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDraftSolid * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class DraftSolid_AddRef_AsyncWorker : public PromiseWorker {
      public:
          DraftSolid_AddRef_AsyncWorker(
MbDraftSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~DraftSolid_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDraftSolid * _underlying;

        int resultType;
  };



#endif
