// This is a generated file, modify: generate/templates/CurveSweptSolid.h

#ifndef CURVESWEPTSOLID_H
#define CURVESWEPTSOLID_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cr_swept_solid.h>

#include "Creator.h"
#include "PromiseWorker.h"

class CurveSweptSolid : public
  Napi::ObjectWrap<CurveSweptSolid>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbCurveSweptSolid *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        CurveSweptSolid(const Napi::CallbackInfo& info);

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

    MbCurveSweptSolid * _underlying;

    ~CurveSweptSolid();


  private:

};


  class CurveSweptSolid_IsA_AsyncWorker : public PromiseWorker {
      public:
          CurveSweptSolid_IsA_AsyncWorker(
MbCurveSweptSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveSweptSolid_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSweptSolid * _underlying;
                
                 MbeCreatorType  _result;
                

        int resultType;
  };


  class CurveSweptSolid_Type_AsyncWorker : public PromiseWorker {
      public:
          CurveSweptSolid_Type_AsyncWorker(
MbCurveSweptSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveSweptSolid_Type_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSweptSolid * _underlying;
                
                 MbeCreatorType  _result;
                

        int resultType;
  };


  class CurveSweptSolid_GetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          CurveSweptSolid_GetBasisPoints_AsyncWorker(
MbCurveSweptSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveSweptSolid_GetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSweptSolid * _underlying;
                
                 MbControlData3D * cd;
                

        int resultType;
  };


  class CurveSweptSolid_SetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          CurveSweptSolid_SetBasisPoints_AsyncWorker(
MbCurveSweptSolid * _underlying,            Napi::Promise::Deferred const &d,
                                const MbControlData3D & cd);
          virtual ~CurveSweptSolid_SetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSweptSolid * _underlying;                        const MbControlData3D & cd;


        int resultType;
  };


  class CurveSweptSolid_GetBasisItems_AsyncWorker : public PromiseWorker {
      public:
          CurveSweptSolid_GetBasisItems_AsyncWorker(
MbCurveSweptSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveSweptSolid_GetBasisItems_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSweptSolid * _underlying;
                
                 RPArray<MbSpaceItem> * items;
                

        int resultType;
  };


  class CurveSweptSolid_GetCreatorsCount_AsyncWorker : public PromiseWorker {
      public:
          CurveSweptSolid_GetCreatorsCount_AsyncWorker(
MbCurveSweptSolid * _underlying,            Napi::Promise::Deferred const &d,
                                 MbeCreatorType  ct);
          virtual ~CurveSweptSolid_GetCreatorsCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSweptSolid * _underlying;                         MbeCreatorType  ct;

                
                 size_t  _result;
                

        int resultType;
  };


  class CurveSweptSolid_GetYourNameMaker_AsyncWorker : public PromiseWorker {
      public:
          CurveSweptSolid_GetYourNameMaker_AsyncWorker(
MbCurveSweptSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveSweptSolid_GetYourNameMaker_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSweptSolid * _underlying;
                
                const MbSNameMaker * _result;
                

        int resultType;
  };


  class CurveSweptSolid_GetStatus_AsyncWorker : public PromiseWorker {
      public:
          CurveSweptSolid_GetStatus_AsyncWorker(
MbCurveSweptSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveSweptSolid_GetStatus_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSweptSolid * _underlying;
                
                 MbeProcessState  _result;
                

        int resultType;
  };


  class CurveSweptSolid_SetStatus_AsyncWorker : public PromiseWorker {
      public:
          CurveSweptSolid_SetStatus_AsyncWorker(
MbCurveSweptSolid * _underlying,            Napi::Promise::Deferred const &d,
                                 MbeProcessState  l);
          virtual ~CurveSweptSolid_SetStatus_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSweptSolid * _underlying;                         MbeProcessState  l;


        int resultType;
  };


  class CurveSweptSolid_CreateShell_AsyncWorker : public PromiseWorker {
      public:
          CurveSweptSolid_CreateShell_AsyncWorker(
MbCurveSweptSolid * _underlying,            Napi::Promise::Deferred const &d,
                                 MbFaceShell * shell,
                                 MbeCopyMode  sameShell);
          virtual ~CurveSweptSolid_CreateShell_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSweptSolid * _underlying;                         MbFaceShell * shell;
                         MbeCopyMode  sameShell;

                
                 bool  success;
                
                
                 RPArray<MbSpaceItem> * items;
                

        int resultType;
  };


  class CurveSweptSolid_GetMainName_AsyncWorker : public PromiseWorker {
      public:
          CurveSweptSolid_GetMainName_AsyncWorker(
MbCurveSweptSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveSweptSolid_GetMainName_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSweptSolid * _underlying;
                
                 SimpleName  _result;
                

        int resultType;
  };


  class CurveSweptSolid_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          CurveSweptSolid_GetUseCount_AsyncWorker(
MbCurveSweptSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveSweptSolid_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSweptSolid * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class CurveSweptSolid_AddRef_AsyncWorker : public PromiseWorker {
      public:
          CurveSweptSolid_AddRef_AsyncWorker(
MbCurveSweptSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveSweptSolid_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveSweptSolid * _underlying;

        int resultType;
  };



#endif
