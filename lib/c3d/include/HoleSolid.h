// This is a generated file, modify: generate/templates/HoleSolid.h

#ifndef HOLESOLID_H
#define HOLESOLID_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cr_hole_solid.h>

#include "CurveSweptSolid.h"
#include "PromiseWorker.h"

class HoleSolid : public
  Napi::ObjectWrap<HoleSolid>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbHoleSolid *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        HoleSolid(const Napi::CallbackInfo& info);

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

    MbHoleSolid * _underlying;

    ~HoleSolid();


  private:

};


  class HoleSolid_IsA_AsyncWorker : public PromiseWorker {
      public:
          HoleSolid_IsA_AsyncWorker(
MbHoleSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~HoleSolid_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbHoleSolid * _underlying;
                
                 MbeCreatorType  _result;
                

        int resultType;
  };


  class HoleSolid_Type_AsyncWorker : public PromiseWorker {
      public:
          HoleSolid_Type_AsyncWorker(
MbHoleSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~HoleSolid_Type_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbHoleSolid * _underlying;
                
                 MbeCreatorType  _result;
                

        int resultType;
  };


  class HoleSolid_GetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          HoleSolid_GetBasisPoints_AsyncWorker(
MbHoleSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~HoleSolid_GetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbHoleSolid * _underlying;
                
                 MbControlData3D * cd;
                

        int resultType;
  };


  class HoleSolid_SetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          HoleSolid_SetBasisPoints_AsyncWorker(
MbHoleSolid * _underlying,            Napi::Promise::Deferred const &d,
                                const MbControlData3D & cd);
          virtual ~HoleSolid_SetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbHoleSolid * _underlying;                        const MbControlData3D & cd;


        int resultType;
  };


  class HoleSolid_GetBasisItems_AsyncWorker : public PromiseWorker {
      public:
          HoleSolid_GetBasisItems_AsyncWorker(
MbHoleSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~HoleSolid_GetBasisItems_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbHoleSolid * _underlying;
                
                 RPArray<MbSpaceItem> * items;
                

        int resultType;
  };


  class HoleSolid_GetCreatorsCount_AsyncWorker : public PromiseWorker {
      public:
          HoleSolid_GetCreatorsCount_AsyncWorker(
MbHoleSolid * _underlying,            Napi::Promise::Deferred const &d,
                                 MbeCreatorType  ct);
          virtual ~HoleSolid_GetCreatorsCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbHoleSolid * _underlying;                         MbeCreatorType  ct;

                
                 size_t  _result;
                

        int resultType;
  };


  class HoleSolid_GetYourNameMaker_AsyncWorker : public PromiseWorker {
      public:
          HoleSolid_GetYourNameMaker_AsyncWorker(
MbHoleSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~HoleSolid_GetYourNameMaker_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbHoleSolid * _underlying;
                
                const MbSNameMaker * _result;
                

        int resultType;
  };


  class HoleSolid_GetStatus_AsyncWorker : public PromiseWorker {
      public:
          HoleSolid_GetStatus_AsyncWorker(
MbHoleSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~HoleSolid_GetStatus_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbHoleSolid * _underlying;
                
                 MbeProcessState  _result;
                

        int resultType;
  };


  class HoleSolid_SetStatus_AsyncWorker : public PromiseWorker {
      public:
          HoleSolid_SetStatus_AsyncWorker(
MbHoleSolid * _underlying,            Napi::Promise::Deferred const &d,
                                 MbeProcessState  l);
          virtual ~HoleSolid_SetStatus_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbHoleSolid * _underlying;                         MbeProcessState  l;


        int resultType;
  };


  class HoleSolid_CreateShell_AsyncWorker : public PromiseWorker {
      public:
          HoleSolid_CreateShell_AsyncWorker(
MbHoleSolid * _underlying,            Napi::Promise::Deferred const &d,
                                 MbFaceShell * shell,
                                 MbeCopyMode  sameShell);
          virtual ~HoleSolid_CreateShell_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbHoleSolid * _underlying;                         MbFaceShell * shell;
                         MbeCopyMode  sameShell;

                
                 bool  success;
                
                
                 RPArray<MbSpaceItem> * items;
                

        int resultType;
  };


  class HoleSolid_GetMainName_AsyncWorker : public PromiseWorker {
      public:
          HoleSolid_GetMainName_AsyncWorker(
MbHoleSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~HoleSolid_GetMainName_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbHoleSolid * _underlying;
                
                 SimpleName  _result;
                

        int resultType;
  };


  class HoleSolid_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          HoleSolid_GetUseCount_AsyncWorker(
MbHoleSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~HoleSolid_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbHoleSolid * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class HoleSolid_AddRef_AsyncWorker : public PromiseWorker {
      public:
          HoleSolid_AddRef_AsyncWorker(
MbHoleSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~HoleSolid_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbHoleSolid * _underlying;

        int resultType;
  };



#endif
