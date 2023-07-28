// This is a generated file, modify: generate/templates/SplitShell.h

#ifndef SPLITSHELL_H
#define SPLITSHELL_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cr_split_shell.h>

#include "Creator.h"
#include "PromiseWorker.h"

class SplitShell : public
  Napi::ObjectWrap<SplitShell>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbSplitShell *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        SplitShell(const Napi::CallbackInfo& info);

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

    MbSplitShell * _underlying;

    ~SplitShell();


  private:

};


  class SplitShell_IsA_AsyncWorker : public PromiseWorker {
      public:
          SplitShell_IsA_AsyncWorker(
MbSplitShell * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~SplitShell_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSplitShell * _underlying;
                
                 MbeCreatorType  _result;
                

        int resultType;
  };


  class SplitShell_Type_AsyncWorker : public PromiseWorker {
      public:
          SplitShell_Type_AsyncWorker(
MbSplitShell * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~SplitShell_Type_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSplitShell * _underlying;
                
                 MbeCreatorType  _result;
                

        int resultType;
  };


  class SplitShell_GetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          SplitShell_GetBasisPoints_AsyncWorker(
MbSplitShell * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~SplitShell_GetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSplitShell * _underlying;
                
                 MbControlData3D * cd;
                

        int resultType;
  };


  class SplitShell_SetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          SplitShell_SetBasisPoints_AsyncWorker(
MbSplitShell * _underlying,            Napi::Promise::Deferred const &d,
                                const MbControlData3D & cd);
          virtual ~SplitShell_SetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSplitShell * _underlying;                        const MbControlData3D & cd;


        int resultType;
  };


  class SplitShell_GetBasisItems_AsyncWorker : public PromiseWorker {
      public:
          SplitShell_GetBasisItems_AsyncWorker(
MbSplitShell * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~SplitShell_GetBasisItems_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSplitShell * _underlying;
                
                 RPArray<MbSpaceItem> * items;
                

        int resultType;
  };


  class SplitShell_GetCreatorsCount_AsyncWorker : public PromiseWorker {
      public:
          SplitShell_GetCreatorsCount_AsyncWorker(
MbSplitShell * _underlying,            Napi::Promise::Deferred const &d,
                                 MbeCreatorType  ct);
          virtual ~SplitShell_GetCreatorsCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSplitShell * _underlying;                         MbeCreatorType  ct;

                
                 size_t  _result;
                

        int resultType;
  };


  class SplitShell_GetYourNameMaker_AsyncWorker : public PromiseWorker {
      public:
          SplitShell_GetYourNameMaker_AsyncWorker(
MbSplitShell * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~SplitShell_GetYourNameMaker_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSplitShell * _underlying;
                
                const MbSNameMaker * _result;
                

        int resultType;
  };


  class SplitShell_GetStatus_AsyncWorker : public PromiseWorker {
      public:
          SplitShell_GetStatus_AsyncWorker(
MbSplitShell * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~SplitShell_GetStatus_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSplitShell * _underlying;
                
                 MbeProcessState  _result;
                

        int resultType;
  };


  class SplitShell_SetStatus_AsyncWorker : public PromiseWorker {
      public:
          SplitShell_SetStatus_AsyncWorker(
MbSplitShell * _underlying,            Napi::Promise::Deferred const &d,
                                 MbeProcessState  l);
          virtual ~SplitShell_SetStatus_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSplitShell * _underlying;                         MbeProcessState  l;


        int resultType;
  };


  class SplitShell_CreateShell_AsyncWorker : public PromiseWorker {
      public:
          SplitShell_CreateShell_AsyncWorker(
MbSplitShell * _underlying,            Napi::Promise::Deferred const &d,
                                 MbFaceShell * shell,
                                 MbeCopyMode  sameShell);
          virtual ~SplitShell_CreateShell_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSplitShell * _underlying;                         MbFaceShell * shell;
                         MbeCopyMode  sameShell;

                
                 bool  success;
                
                
                 RPArray<MbSpaceItem> * items;
                

        int resultType;
  };


  class SplitShell_GetMainName_AsyncWorker : public PromiseWorker {
      public:
          SplitShell_GetMainName_AsyncWorker(
MbSplitShell * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~SplitShell_GetMainName_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSplitShell * _underlying;
                
                 SimpleName  _result;
                

        int resultType;
  };


  class SplitShell_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          SplitShell_GetUseCount_AsyncWorker(
MbSplitShell * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~SplitShell_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSplitShell * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class SplitShell_AddRef_AsyncWorker : public PromiseWorker {
      public:
          SplitShell_AddRef_AsyncWorker(
MbSplitShell * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~SplitShell_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSplitShell * _underlying;

        int resultType;
  };



#endif
