// This is a generated file, modify: generate/templates/FilletSolid.h

#ifndef FILLETSOLID_H
#define FILLETSOLID_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cr_fillet_solid.h>

#include "SmoothSolid.h"
#include "PromiseWorker.h"

class FilletSolid : public
  Napi::ObjectWrap<FilletSolid>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbFilletSolid *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        FilletSolid(const Napi::CallbackInfo& info);

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

    MbFilletSolid * _underlying;

    ~FilletSolid();


  private:

};


  class FilletSolid_GetParameters_AsyncWorker : public PromiseWorker {
      public:
          FilletSolid_GetParameters_AsyncWorker(
MbFilletSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~FilletSolid_GetParameters_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbFilletSolid * _underlying;
                
                 SmoothValues * params;
                

        int resultType;
  };


  class FilletSolid_SetParameters_AsyncWorker : public PromiseWorker {
      public:
          FilletSolid_SetParameters_AsyncWorker(
MbFilletSolid * _underlying,            Napi::Promise::Deferred const &d,
                                const SmoothValues & params);
          virtual ~FilletSolid_SetParameters_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbFilletSolid * _underlying;                        const SmoothValues & params;


        int resultType;
  };


  class FilletSolid_IsA_AsyncWorker : public PromiseWorker {
      public:
          FilletSolid_IsA_AsyncWorker(
MbFilletSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~FilletSolid_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbFilletSolid * _underlying;
                
                 MbeCreatorType  _result;
                

        int resultType;
  };


  class FilletSolid_Type_AsyncWorker : public PromiseWorker {
      public:
          FilletSolid_Type_AsyncWorker(
MbFilletSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~FilletSolid_Type_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbFilletSolid * _underlying;
                
                 MbeCreatorType  _result;
                

        int resultType;
  };


  class FilletSolid_GetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          FilletSolid_GetBasisPoints_AsyncWorker(
MbFilletSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~FilletSolid_GetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbFilletSolid * _underlying;
                
                 MbControlData3D * cd;
                

        int resultType;
  };


  class FilletSolid_SetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          FilletSolid_SetBasisPoints_AsyncWorker(
MbFilletSolid * _underlying,            Napi::Promise::Deferred const &d,
                                const MbControlData3D & cd);
          virtual ~FilletSolid_SetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbFilletSolid * _underlying;                        const MbControlData3D & cd;


        int resultType;
  };


  class FilletSolid_GetBasisItems_AsyncWorker : public PromiseWorker {
      public:
          FilletSolid_GetBasisItems_AsyncWorker(
MbFilletSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~FilletSolid_GetBasisItems_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbFilletSolid * _underlying;
                
                 RPArray<MbSpaceItem> * items;
                

        int resultType;
  };


  class FilletSolid_GetCreatorsCount_AsyncWorker : public PromiseWorker {
      public:
          FilletSolid_GetCreatorsCount_AsyncWorker(
MbFilletSolid * _underlying,            Napi::Promise::Deferred const &d,
                                 MbeCreatorType  ct);
          virtual ~FilletSolid_GetCreatorsCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbFilletSolid * _underlying;                         MbeCreatorType  ct;

                
                 size_t  _result;
                

        int resultType;
  };


  class FilletSolid_GetYourNameMaker_AsyncWorker : public PromiseWorker {
      public:
          FilletSolid_GetYourNameMaker_AsyncWorker(
MbFilletSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~FilletSolid_GetYourNameMaker_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbFilletSolid * _underlying;
                
                const MbSNameMaker * _result;
                

        int resultType;
  };


  class FilletSolid_GetStatus_AsyncWorker : public PromiseWorker {
      public:
          FilletSolid_GetStatus_AsyncWorker(
MbFilletSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~FilletSolid_GetStatus_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbFilletSolid * _underlying;
                
                 MbeProcessState  _result;
                

        int resultType;
  };


  class FilletSolid_SetStatus_AsyncWorker : public PromiseWorker {
      public:
          FilletSolid_SetStatus_AsyncWorker(
MbFilletSolid * _underlying,            Napi::Promise::Deferred const &d,
                                 MbeProcessState  l);
          virtual ~FilletSolid_SetStatus_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbFilletSolid * _underlying;                         MbeProcessState  l;


        int resultType;
  };


  class FilletSolid_CreateShell_AsyncWorker : public PromiseWorker {
      public:
          FilletSolid_CreateShell_AsyncWorker(
MbFilletSolid * _underlying,            Napi::Promise::Deferred const &d,
                                 MbFaceShell * shell,
                                 MbeCopyMode  sameShell);
          virtual ~FilletSolid_CreateShell_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbFilletSolid * _underlying;                         MbFaceShell * shell;
                         MbeCopyMode  sameShell;

                
                 bool  success;
                
                
                 RPArray<MbSpaceItem> * items;
                

        int resultType;
  };


  class FilletSolid_GetMainName_AsyncWorker : public PromiseWorker {
      public:
          FilletSolid_GetMainName_AsyncWorker(
MbFilletSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~FilletSolid_GetMainName_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbFilletSolid * _underlying;
                
                 SimpleName  _result;
                

        int resultType;
  };


  class FilletSolid_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          FilletSolid_GetUseCount_AsyncWorker(
MbFilletSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~FilletSolid_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbFilletSolid * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class FilletSolid_AddRef_AsyncWorker : public PromiseWorker {
      public:
          FilletSolid_AddRef_AsyncWorker(
MbFilletSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~FilletSolid_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbFilletSolid * _underlying;

        int resultType;
  };



#endif
