// This is a generated file, modify: generate/templates/TransformationMaker.h

#ifndef TRANSFORMATIONMAKER_H
#define TRANSFORMATIONMAKER_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cr_displace_creator.h>

#include "Creator.h"
#include "PromiseWorker.h"

class TransformationMaker : public
  Napi::ObjectWrap<TransformationMaker>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbTransformationMaker *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        TransformationMaker(const Napi::CallbackInfo& info);

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

    MbTransformationMaker * _underlying;

    ~TransformationMaker();


  private:

};


  class TransformationMaker_IsA_AsyncWorker : public PromiseWorker {
      public:
          TransformationMaker_IsA_AsyncWorker(
MbTransformationMaker * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~TransformationMaker_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTransformationMaker * _underlying;
                
                 MbeCreatorType  _result;
                

        int resultType;
  };


  class TransformationMaker_Type_AsyncWorker : public PromiseWorker {
      public:
          TransformationMaker_Type_AsyncWorker(
MbTransformationMaker * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~TransformationMaker_Type_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTransformationMaker * _underlying;
                
                 MbeCreatorType  _result;
                

        int resultType;
  };


  class TransformationMaker_GetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          TransformationMaker_GetBasisPoints_AsyncWorker(
MbTransformationMaker * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~TransformationMaker_GetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTransformationMaker * _underlying;
                
                 MbControlData3D * cd;
                

        int resultType;
  };


  class TransformationMaker_SetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          TransformationMaker_SetBasisPoints_AsyncWorker(
MbTransformationMaker * _underlying,            Napi::Promise::Deferred const &d,
                                const MbControlData3D & cd);
          virtual ~TransformationMaker_SetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTransformationMaker * _underlying;                        const MbControlData3D & cd;


        int resultType;
  };


  class TransformationMaker_GetBasisItems_AsyncWorker : public PromiseWorker {
      public:
          TransformationMaker_GetBasisItems_AsyncWorker(
MbTransformationMaker * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~TransformationMaker_GetBasisItems_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTransformationMaker * _underlying;
                
                 RPArray<MbSpaceItem> * items;
                

        int resultType;
  };


  class TransformationMaker_GetCreatorsCount_AsyncWorker : public PromiseWorker {
      public:
          TransformationMaker_GetCreatorsCount_AsyncWorker(
MbTransformationMaker * _underlying,            Napi::Promise::Deferred const &d,
                                 MbeCreatorType  ct);
          virtual ~TransformationMaker_GetCreatorsCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTransformationMaker * _underlying;                         MbeCreatorType  ct;

                
                 size_t  _result;
                

        int resultType;
  };


  class TransformationMaker_GetYourNameMaker_AsyncWorker : public PromiseWorker {
      public:
          TransformationMaker_GetYourNameMaker_AsyncWorker(
MbTransformationMaker * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~TransformationMaker_GetYourNameMaker_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTransformationMaker * _underlying;
                
                const MbSNameMaker * _result;
                

        int resultType;
  };


  class TransformationMaker_GetStatus_AsyncWorker : public PromiseWorker {
      public:
          TransformationMaker_GetStatus_AsyncWorker(
MbTransformationMaker * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~TransformationMaker_GetStatus_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTransformationMaker * _underlying;
                
                 MbeProcessState  _result;
                

        int resultType;
  };


  class TransformationMaker_SetStatus_AsyncWorker : public PromiseWorker {
      public:
          TransformationMaker_SetStatus_AsyncWorker(
MbTransformationMaker * _underlying,            Napi::Promise::Deferred const &d,
                                 MbeProcessState  l);
          virtual ~TransformationMaker_SetStatus_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTransformationMaker * _underlying;                         MbeProcessState  l;


        int resultType;
  };


  class TransformationMaker_CreateShell_AsyncWorker : public PromiseWorker {
      public:
          TransformationMaker_CreateShell_AsyncWorker(
MbTransformationMaker * _underlying,            Napi::Promise::Deferred const &d,
                                 MbFaceShell * shell,
                                 MbeCopyMode  sameShell);
          virtual ~TransformationMaker_CreateShell_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTransformationMaker * _underlying;                         MbFaceShell * shell;
                         MbeCopyMode  sameShell;

                
                 bool  success;
                
                
                 RPArray<MbSpaceItem> * items;
                

        int resultType;
  };


  class TransformationMaker_GetMainName_AsyncWorker : public PromiseWorker {
      public:
          TransformationMaker_GetMainName_AsyncWorker(
MbTransformationMaker * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~TransformationMaker_GetMainName_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTransformationMaker * _underlying;
                
                 SimpleName  _result;
                

        int resultType;
  };


  class TransformationMaker_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          TransformationMaker_GetUseCount_AsyncWorker(
MbTransformationMaker * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~TransformationMaker_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTransformationMaker * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class TransformationMaker_AddRef_AsyncWorker : public PromiseWorker {
      public:
          TransformationMaker_AddRef_AsyncWorker(
MbTransformationMaker * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~TransformationMaker_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTransformationMaker * _underlying;

        int resultType;
  };



#endif
