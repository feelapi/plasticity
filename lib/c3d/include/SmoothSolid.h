// This is a generated file, modify: generate/templates/SmoothSolid.h

#ifndef SMOOTHSOLID_H
#define SMOOTHSOLID_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cr_smooth_solid.h>

#include "Creator.h"
#include "_SmoothValues.h"
#include "PromiseWorker.h"

class SmoothSolid : public
  Napi::ObjectWrap<SmoothSolid>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbSmoothSolid *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        SmoothSolid(const Napi::CallbackInfo& info);

         Napi::Value GetParameters(const Napi::CallbackInfo& info);
         Napi::Value GetParameters_async(const Napi::CallbackInfo& info);
         Napi::Value SetParameters(const Napi::CallbackInfo& info);
         Napi::Value SetParameters_async(const Napi::CallbackInfo& info);
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

    MbSmoothSolid * _underlying;

    ~SmoothSolid();


  private:

};


  class SmoothSolid_GetParameters_AsyncWorker : public PromiseWorker {
      public:
          SmoothSolid_GetParameters_AsyncWorker(
MbSmoothSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~SmoothSolid_GetParameters_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSmoothSolid * _underlying;
                
                 SmoothValues * params;
                

        int resultType;
  };


  class SmoothSolid_SetParameters_AsyncWorker : public PromiseWorker {
      public:
          SmoothSolid_SetParameters_AsyncWorker(
MbSmoothSolid * _underlying,            Napi::Promise::Deferred const &d,
                                const SmoothValues & params);
          virtual ~SmoothSolid_SetParameters_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSmoothSolid * _underlying;                        const SmoothValues & params;


        int resultType;
  };


  class SmoothSolid_IsA_AsyncWorker : public PromiseWorker {
      public:
          SmoothSolid_IsA_AsyncWorker(
MbSmoothSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~SmoothSolid_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSmoothSolid * _underlying;
                
                 MbeCreatorType  _result;
                

        int resultType;
  };


  class SmoothSolid_Type_AsyncWorker : public PromiseWorker {
      public:
          SmoothSolid_Type_AsyncWorker(
MbSmoothSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~SmoothSolid_Type_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSmoothSolid * _underlying;
                
                 MbeCreatorType  _result;
                

        int resultType;
  };


  class SmoothSolid_GetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          SmoothSolid_GetBasisPoints_AsyncWorker(
MbSmoothSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~SmoothSolid_GetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSmoothSolid * _underlying;
                
                 MbControlData3D * cd;
                

        int resultType;
  };


  class SmoothSolid_SetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          SmoothSolid_SetBasisPoints_AsyncWorker(
MbSmoothSolid * _underlying,            Napi::Promise::Deferred const &d,
                                const MbControlData3D & cd);
          virtual ~SmoothSolid_SetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSmoothSolid * _underlying;                        const MbControlData3D & cd;


        int resultType;
  };


  class SmoothSolid_GetBasisItems_AsyncWorker : public PromiseWorker {
      public:
          SmoothSolid_GetBasisItems_AsyncWorker(
MbSmoothSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~SmoothSolid_GetBasisItems_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSmoothSolid * _underlying;
                
                 RPArray<MbSpaceItem> * items;
                

        int resultType;
  };


  class SmoothSolid_GetCreatorsCount_AsyncWorker : public PromiseWorker {
      public:
          SmoothSolid_GetCreatorsCount_AsyncWorker(
MbSmoothSolid * _underlying,            Napi::Promise::Deferred const &d,
                                 MbeCreatorType  ct);
          virtual ~SmoothSolid_GetCreatorsCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSmoothSolid * _underlying;                         MbeCreatorType  ct;

                
                 size_t  _result;
                

        int resultType;
  };


  class SmoothSolid_GetYourNameMaker_AsyncWorker : public PromiseWorker {
      public:
          SmoothSolid_GetYourNameMaker_AsyncWorker(
MbSmoothSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~SmoothSolid_GetYourNameMaker_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSmoothSolid * _underlying;
                
                const MbSNameMaker * _result;
                

        int resultType;
  };


  class SmoothSolid_GetStatus_AsyncWorker : public PromiseWorker {
      public:
          SmoothSolid_GetStatus_AsyncWorker(
MbSmoothSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~SmoothSolid_GetStatus_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSmoothSolid * _underlying;
                
                 MbeProcessState  _result;
                

        int resultType;
  };


  class SmoothSolid_SetStatus_AsyncWorker : public PromiseWorker {
      public:
          SmoothSolid_SetStatus_AsyncWorker(
MbSmoothSolid * _underlying,            Napi::Promise::Deferred const &d,
                                 MbeProcessState  l);
          virtual ~SmoothSolid_SetStatus_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSmoothSolid * _underlying;                         MbeProcessState  l;


        int resultType;
  };


  class SmoothSolid_CreateShell_AsyncWorker : public PromiseWorker {
      public:
          SmoothSolid_CreateShell_AsyncWorker(
MbSmoothSolid * _underlying,            Napi::Promise::Deferred const &d,
                                 MbFaceShell * shell,
                                 MbeCopyMode  sameShell);
          virtual ~SmoothSolid_CreateShell_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSmoothSolid * _underlying;                         MbFaceShell * shell;
                         MbeCopyMode  sameShell;

                
                 bool  success;
                
                
                 RPArray<MbSpaceItem> * items;
                

        int resultType;
  };


  class SmoothSolid_GetMainName_AsyncWorker : public PromiseWorker {
      public:
          SmoothSolid_GetMainName_AsyncWorker(
MbSmoothSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~SmoothSolid_GetMainName_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSmoothSolid * _underlying;
                
                 SimpleName  _result;
                

        int resultType;
  };


  class SmoothSolid_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          SmoothSolid_GetUseCount_AsyncWorker(
MbSmoothSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~SmoothSolid_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSmoothSolid * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class SmoothSolid_AddRef_AsyncWorker : public PromiseWorker {
      public:
          SmoothSolid_AddRef_AsyncWorker(
MbSmoothSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~SmoothSolid_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSmoothSolid * _underlying;

        int resultType;
  };



#endif
