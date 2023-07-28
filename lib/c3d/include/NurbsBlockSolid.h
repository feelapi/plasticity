// This is a generated file, modify: generate/templates/NurbsBlockSolid.h

#ifndef NURBSBLOCKSOLID_H
#define NURBSBLOCKSOLID_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cr_nurbs_block_solid.h>

#include "Creator.h"
#include "PromiseWorker.h"

class NurbsBlockSolid : public
  Napi::ObjectWrap<NurbsBlockSolid>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbNurbsBlockSolid *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        NurbsBlockSolid(const Napi::CallbackInfo& info);

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

    MbNurbsBlockSolid * _underlying;

    ~NurbsBlockSolid();


  private:

};


  class NurbsBlockSolid_IsA_AsyncWorker : public PromiseWorker {
      public:
          NurbsBlockSolid_IsA_AsyncWorker(
MbNurbsBlockSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~NurbsBlockSolid_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbNurbsBlockSolid * _underlying;
                
                 MbeCreatorType  _result;
                

        int resultType;
  };


  class NurbsBlockSolid_Type_AsyncWorker : public PromiseWorker {
      public:
          NurbsBlockSolid_Type_AsyncWorker(
MbNurbsBlockSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~NurbsBlockSolid_Type_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbNurbsBlockSolid * _underlying;
                
                 MbeCreatorType  _result;
                

        int resultType;
  };


  class NurbsBlockSolid_GetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          NurbsBlockSolid_GetBasisPoints_AsyncWorker(
MbNurbsBlockSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~NurbsBlockSolid_GetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbNurbsBlockSolid * _underlying;
                
                 MbControlData3D * cd;
                

        int resultType;
  };


  class NurbsBlockSolid_SetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          NurbsBlockSolid_SetBasisPoints_AsyncWorker(
MbNurbsBlockSolid * _underlying,            Napi::Promise::Deferred const &d,
                                const MbControlData3D & cd);
          virtual ~NurbsBlockSolid_SetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbNurbsBlockSolid * _underlying;                        const MbControlData3D & cd;


        int resultType;
  };


  class NurbsBlockSolid_GetBasisItems_AsyncWorker : public PromiseWorker {
      public:
          NurbsBlockSolid_GetBasisItems_AsyncWorker(
MbNurbsBlockSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~NurbsBlockSolid_GetBasisItems_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbNurbsBlockSolid * _underlying;
                
                 RPArray<MbSpaceItem> * items;
                

        int resultType;
  };


  class NurbsBlockSolid_GetCreatorsCount_AsyncWorker : public PromiseWorker {
      public:
          NurbsBlockSolid_GetCreatorsCount_AsyncWorker(
MbNurbsBlockSolid * _underlying,            Napi::Promise::Deferred const &d,
                                 MbeCreatorType  ct);
          virtual ~NurbsBlockSolid_GetCreatorsCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbNurbsBlockSolid * _underlying;                         MbeCreatorType  ct;

                
                 size_t  _result;
                

        int resultType;
  };


  class NurbsBlockSolid_GetYourNameMaker_AsyncWorker : public PromiseWorker {
      public:
          NurbsBlockSolid_GetYourNameMaker_AsyncWorker(
MbNurbsBlockSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~NurbsBlockSolid_GetYourNameMaker_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbNurbsBlockSolid * _underlying;
                
                const MbSNameMaker * _result;
                

        int resultType;
  };


  class NurbsBlockSolid_GetStatus_AsyncWorker : public PromiseWorker {
      public:
          NurbsBlockSolid_GetStatus_AsyncWorker(
MbNurbsBlockSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~NurbsBlockSolid_GetStatus_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbNurbsBlockSolid * _underlying;
                
                 MbeProcessState  _result;
                

        int resultType;
  };


  class NurbsBlockSolid_SetStatus_AsyncWorker : public PromiseWorker {
      public:
          NurbsBlockSolid_SetStatus_AsyncWorker(
MbNurbsBlockSolid * _underlying,            Napi::Promise::Deferred const &d,
                                 MbeProcessState  l);
          virtual ~NurbsBlockSolid_SetStatus_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbNurbsBlockSolid * _underlying;                         MbeProcessState  l;


        int resultType;
  };


  class NurbsBlockSolid_CreateShell_AsyncWorker : public PromiseWorker {
      public:
          NurbsBlockSolid_CreateShell_AsyncWorker(
MbNurbsBlockSolid * _underlying,            Napi::Promise::Deferred const &d,
                                 MbFaceShell * shell,
                                 MbeCopyMode  sameShell);
          virtual ~NurbsBlockSolid_CreateShell_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbNurbsBlockSolid * _underlying;                         MbFaceShell * shell;
                         MbeCopyMode  sameShell;

                
                 bool  success;
                
                
                 RPArray<MbSpaceItem> * items;
                

        int resultType;
  };


  class NurbsBlockSolid_GetMainName_AsyncWorker : public PromiseWorker {
      public:
          NurbsBlockSolid_GetMainName_AsyncWorker(
MbNurbsBlockSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~NurbsBlockSolid_GetMainName_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbNurbsBlockSolid * _underlying;
                
                 SimpleName  _result;
                

        int resultType;
  };


  class NurbsBlockSolid_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          NurbsBlockSolid_GetUseCount_AsyncWorker(
MbNurbsBlockSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~NurbsBlockSolid_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbNurbsBlockSolid * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class NurbsBlockSolid_AddRef_AsyncWorker : public PromiseWorker {
      public:
          NurbsBlockSolid_AddRef_AsyncWorker(
MbNurbsBlockSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~NurbsBlockSolid_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbNurbsBlockSolid * _underlying;

        int resultType;
  };



#endif
