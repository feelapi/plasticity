// This is a generated file, modify: generate/templates/DetachSolid.h

#ifndef DETACHSOLID_H
#define DETACHSOLID_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cr_detach_solid.h>

#include "Creator.h"
#include "PromiseWorker.h"

class DetachSolid : public
  Napi::ObjectWrap<DetachSolid>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbDetachSolid *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        DetachSolid(const Napi::CallbackInfo& info);

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

    MbDetachSolid * _underlying;

    ~DetachSolid();


  private:

};


  class DetachSolid_IsA_AsyncWorker : public PromiseWorker {
      public:
          DetachSolid_IsA_AsyncWorker(
MbDetachSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~DetachSolid_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDetachSolid * _underlying;
                
                 MbeCreatorType  _result;
                

        int resultType;
  };


  class DetachSolid_Type_AsyncWorker : public PromiseWorker {
      public:
          DetachSolid_Type_AsyncWorker(
MbDetachSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~DetachSolid_Type_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDetachSolid * _underlying;
                
                 MbeCreatorType  _result;
                

        int resultType;
  };


  class DetachSolid_GetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          DetachSolid_GetBasisPoints_AsyncWorker(
MbDetachSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~DetachSolid_GetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDetachSolid * _underlying;
                
                 MbControlData3D * cd;
                

        int resultType;
  };


  class DetachSolid_SetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          DetachSolid_SetBasisPoints_AsyncWorker(
MbDetachSolid * _underlying,            Napi::Promise::Deferred const &d,
                                const MbControlData3D & cd);
          virtual ~DetachSolid_SetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDetachSolid * _underlying;                        const MbControlData3D & cd;


        int resultType;
  };


  class DetachSolid_GetBasisItems_AsyncWorker : public PromiseWorker {
      public:
          DetachSolid_GetBasisItems_AsyncWorker(
MbDetachSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~DetachSolid_GetBasisItems_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDetachSolid * _underlying;
                
                 RPArray<MbSpaceItem> * items;
                

        int resultType;
  };


  class DetachSolid_GetCreatorsCount_AsyncWorker : public PromiseWorker {
      public:
          DetachSolid_GetCreatorsCount_AsyncWorker(
MbDetachSolid * _underlying,            Napi::Promise::Deferred const &d,
                                 MbeCreatorType  ct);
          virtual ~DetachSolid_GetCreatorsCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDetachSolid * _underlying;                         MbeCreatorType  ct;

                
                 size_t  _result;
                

        int resultType;
  };


  class DetachSolid_GetYourNameMaker_AsyncWorker : public PromiseWorker {
      public:
          DetachSolid_GetYourNameMaker_AsyncWorker(
MbDetachSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~DetachSolid_GetYourNameMaker_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDetachSolid * _underlying;
                
                const MbSNameMaker * _result;
                

        int resultType;
  };


  class DetachSolid_GetStatus_AsyncWorker : public PromiseWorker {
      public:
          DetachSolid_GetStatus_AsyncWorker(
MbDetachSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~DetachSolid_GetStatus_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDetachSolid * _underlying;
                
                 MbeProcessState  _result;
                

        int resultType;
  };


  class DetachSolid_SetStatus_AsyncWorker : public PromiseWorker {
      public:
          DetachSolid_SetStatus_AsyncWorker(
MbDetachSolid * _underlying,            Napi::Promise::Deferred const &d,
                                 MbeProcessState  l);
          virtual ~DetachSolid_SetStatus_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDetachSolid * _underlying;                         MbeProcessState  l;


        int resultType;
  };


  class DetachSolid_CreateShell_AsyncWorker : public PromiseWorker {
      public:
          DetachSolid_CreateShell_AsyncWorker(
MbDetachSolid * _underlying,            Napi::Promise::Deferred const &d,
                                 MbFaceShell * shell,
                                 MbeCopyMode  sameShell);
          virtual ~DetachSolid_CreateShell_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDetachSolid * _underlying;                         MbFaceShell * shell;
                         MbeCopyMode  sameShell;

                
                 bool  success;
                
                
                 RPArray<MbSpaceItem> * items;
                

        int resultType;
  };


  class DetachSolid_GetMainName_AsyncWorker : public PromiseWorker {
      public:
          DetachSolid_GetMainName_AsyncWorker(
MbDetachSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~DetachSolid_GetMainName_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDetachSolid * _underlying;
                
                 SimpleName  _result;
                

        int resultType;
  };


  class DetachSolid_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          DetachSolid_GetUseCount_AsyncWorker(
MbDetachSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~DetachSolid_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDetachSolid * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class DetachSolid_AddRef_AsyncWorker : public PromiseWorker {
      public:
          DetachSolid_AddRef_AsyncWorker(
MbDetachSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~DetachSolid_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbDetachSolid * _underlying;

        int resultType;
  };



#endif
