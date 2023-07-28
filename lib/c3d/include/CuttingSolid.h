// This is a generated file, modify: generate/templates/CuttingSolid.h

#ifndef CUTTINGSOLID_H
#define CUTTINGSOLID_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cr_cutting_solid.h>

#include "Creator.h"
#include "PromiseWorker.h"

class CuttingSolid : public
  Napi::ObjectWrap<CuttingSolid>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbCuttingSolid *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        CuttingSolid(const Napi::CallbackInfo& info);

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

    MbCuttingSolid * _underlying;

    ~CuttingSolid();


  private:

};


  class CuttingSolid_IsA_AsyncWorker : public PromiseWorker {
      public:
          CuttingSolid_IsA_AsyncWorker(
MbCuttingSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CuttingSolid_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCuttingSolid * _underlying;
                
                 MbeCreatorType  _result;
                

        int resultType;
  };


  class CuttingSolid_Type_AsyncWorker : public PromiseWorker {
      public:
          CuttingSolid_Type_AsyncWorker(
MbCuttingSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CuttingSolid_Type_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCuttingSolid * _underlying;
                
                 MbeCreatorType  _result;
                

        int resultType;
  };


  class CuttingSolid_GetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          CuttingSolid_GetBasisPoints_AsyncWorker(
MbCuttingSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CuttingSolid_GetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCuttingSolid * _underlying;
                
                 MbControlData3D * cd;
                

        int resultType;
  };


  class CuttingSolid_SetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          CuttingSolid_SetBasisPoints_AsyncWorker(
MbCuttingSolid * _underlying,            Napi::Promise::Deferred const &d,
                                const MbControlData3D & cd);
          virtual ~CuttingSolid_SetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCuttingSolid * _underlying;                        const MbControlData3D & cd;


        int resultType;
  };


  class CuttingSolid_GetBasisItems_AsyncWorker : public PromiseWorker {
      public:
          CuttingSolid_GetBasisItems_AsyncWorker(
MbCuttingSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CuttingSolid_GetBasisItems_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCuttingSolid * _underlying;
                
                 RPArray<MbSpaceItem> * items;
                

        int resultType;
  };


  class CuttingSolid_GetCreatorsCount_AsyncWorker : public PromiseWorker {
      public:
          CuttingSolid_GetCreatorsCount_AsyncWorker(
MbCuttingSolid * _underlying,            Napi::Promise::Deferred const &d,
                                 MbeCreatorType  ct);
          virtual ~CuttingSolid_GetCreatorsCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCuttingSolid * _underlying;                         MbeCreatorType  ct;

                
                 size_t  _result;
                

        int resultType;
  };


  class CuttingSolid_GetYourNameMaker_AsyncWorker : public PromiseWorker {
      public:
          CuttingSolid_GetYourNameMaker_AsyncWorker(
MbCuttingSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CuttingSolid_GetYourNameMaker_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCuttingSolid * _underlying;
                
                const MbSNameMaker * _result;
                

        int resultType;
  };


  class CuttingSolid_GetStatus_AsyncWorker : public PromiseWorker {
      public:
          CuttingSolid_GetStatus_AsyncWorker(
MbCuttingSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CuttingSolid_GetStatus_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCuttingSolid * _underlying;
                
                 MbeProcessState  _result;
                

        int resultType;
  };


  class CuttingSolid_SetStatus_AsyncWorker : public PromiseWorker {
      public:
          CuttingSolid_SetStatus_AsyncWorker(
MbCuttingSolid * _underlying,            Napi::Promise::Deferred const &d,
                                 MbeProcessState  l);
          virtual ~CuttingSolid_SetStatus_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCuttingSolid * _underlying;                         MbeProcessState  l;


        int resultType;
  };


  class CuttingSolid_CreateShell_AsyncWorker : public PromiseWorker {
      public:
          CuttingSolid_CreateShell_AsyncWorker(
MbCuttingSolid * _underlying,            Napi::Promise::Deferred const &d,
                                 MbFaceShell * shell,
                                 MbeCopyMode  sameShell);
          virtual ~CuttingSolid_CreateShell_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCuttingSolid * _underlying;                         MbFaceShell * shell;
                         MbeCopyMode  sameShell;

                
                 bool  success;
                
                
                 RPArray<MbSpaceItem> * items;
                

        int resultType;
  };


  class CuttingSolid_GetMainName_AsyncWorker : public PromiseWorker {
      public:
          CuttingSolid_GetMainName_AsyncWorker(
MbCuttingSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CuttingSolid_GetMainName_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCuttingSolid * _underlying;
                
                 SimpleName  _result;
                

        int resultType;
  };


  class CuttingSolid_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          CuttingSolid_GetUseCount_AsyncWorker(
MbCuttingSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CuttingSolid_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCuttingSolid * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class CuttingSolid_AddRef_AsyncWorker : public PromiseWorker {
      public:
          CuttingSolid_AddRef_AsyncWorker(
MbCuttingSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CuttingSolid_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCuttingSolid * _underlying;

        int resultType;
  };



#endif
