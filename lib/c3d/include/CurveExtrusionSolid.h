// This is a generated file, modify: generate/templates/CurveExtrusionSolid.h

#ifndef CURVEEXTRUSIONSOLID_H
#define CURVEEXTRUSIONSOLID_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cr_extrusion_solid.h>

#include "CurveSweptSolid.h"
#include "PromiseWorker.h"

class CurveExtrusionSolid : public
  Napi::ObjectWrap<CurveExtrusionSolid>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbCurveExtrusionSolid *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        CurveExtrusionSolid(const Napi::CallbackInfo& info);

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

    MbCurveExtrusionSolid * _underlying;

    ~CurveExtrusionSolid();


  private:

};


  class CurveExtrusionSolid_IsA_AsyncWorker : public PromiseWorker {
      public:
          CurveExtrusionSolid_IsA_AsyncWorker(
MbCurveExtrusionSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveExtrusionSolid_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveExtrusionSolid * _underlying;
                
                 MbeCreatorType  _result;
                

        int resultType;
  };


  class CurveExtrusionSolid_Type_AsyncWorker : public PromiseWorker {
      public:
          CurveExtrusionSolid_Type_AsyncWorker(
MbCurveExtrusionSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveExtrusionSolid_Type_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveExtrusionSolid * _underlying;
                
                 MbeCreatorType  _result;
                

        int resultType;
  };


  class CurveExtrusionSolid_GetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          CurveExtrusionSolid_GetBasisPoints_AsyncWorker(
MbCurveExtrusionSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveExtrusionSolid_GetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveExtrusionSolid * _underlying;
                
                 MbControlData3D * cd;
                

        int resultType;
  };


  class CurveExtrusionSolid_SetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          CurveExtrusionSolid_SetBasisPoints_AsyncWorker(
MbCurveExtrusionSolid * _underlying,            Napi::Promise::Deferred const &d,
                                const MbControlData3D & cd);
          virtual ~CurveExtrusionSolid_SetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveExtrusionSolid * _underlying;                        const MbControlData3D & cd;


        int resultType;
  };


  class CurveExtrusionSolid_GetBasisItems_AsyncWorker : public PromiseWorker {
      public:
          CurveExtrusionSolid_GetBasisItems_AsyncWorker(
MbCurveExtrusionSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveExtrusionSolid_GetBasisItems_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveExtrusionSolid * _underlying;
                
                 RPArray<MbSpaceItem> * items;
                

        int resultType;
  };


  class CurveExtrusionSolid_GetCreatorsCount_AsyncWorker : public PromiseWorker {
      public:
          CurveExtrusionSolid_GetCreatorsCount_AsyncWorker(
MbCurveExtrusionSolid * _underlying,            Napi::Promise::Deferred const &d,
                                 MbeCreatorType  ct);
          virtual ~CurveExtrusionSolid_GetCreatorsCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveExtrusionSolid * _underlying;                         MbeCreatorType  ct;

                
                 size_t  _result;
                

        int resultType;
  };


  class CurveExtrusionSolid_GetYourNameMaker_AsyncWorker : public PromiseWorker {
      public:
          CurveExtrusionSolid_GetYourNameMaker_AsyncWorker(
MbCurveExtrusionSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveExtrusionSolid_GetYourNameMaker_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveExtrusionSolid * _underlying;
                
                const MbSNameMaker * _result;
                

        int resultType;
  };


  class CurveExtrusionSolid_GetStatus_AsyncWorker : public PromiseWorker {
      public:
          CurveExtrusionSolid_GetStatus_AsyncWorker(
MbCurveExtrusionSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveExtrusionSolid_GetStatus_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveExtrusionSolid * _underlying;
                
                 MbeProcessState  _result;
                

        int resultType;
  };


  class CurveExtrusionSolid_SetStatus_AsyncWorker : public PromiseWorker {
      public:
          CurveExtrusionSolid_SetStatus_AsyncWorker(
MbCurveExtrusionSolid * _underlying,            Napi::Promise::Deferred const &d,
                                 MbeProcessState  l);
          virtual ~CurveExtrusionSolid_SetStatus_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveExtrusionSolid * _underlying;                         MbeProcessState  l;


        int resultType;
  };


  class CurveExtrusionSolid_CreateShell_AsyncWorker : public PromiseWorker {
      public:
          CurveExtrusionSolid_CreateShell_AsyncWorker(
MbCurveExtrusionSolid * _underlying,            Napi::Promise::Deferred const &d,
                                 MbFaceShell * shell,
                                 MbeCopyMode  sameShell);
          virtual ~CurveExtrusionSolid_CreateShell_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveExtrusionSolid * _underlying;                         MbFaceShell * shell;
                         MbeCopyMode  sameShell;

                
                 bool  success;
                
                
                 RPArray<MbSpaceItem> * items;
                

        int resultType;
  };


  class CurveExtrusionSolid_GetMainName_AsyncWorker : public PromiseWorker {
      public:
          CurveExtrusionSolid_GetMainName_AsyncWorker(
MbCurveExtrusionSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveExtrusionSolid_GetMainName_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveExtrusionSolid * _underlying;
                
                 SimpleName  _result;
                

        int resultType;
  };


  class CurveExtrusionSolid_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          CurveExtrusionSolid_GetUseCount_AsyncWorker(
MbCurveExtrusionSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveExtrusionSolid_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveExtrusionSolid * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class CurveExtrusionSolid_AddRef_AsyncWorker : public PromiseWorker {
      public:
          CurveExtrusionSolid_AddRef_AsyncWorker(
MbCurveExtrusionSolid * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveExtrusionSolid_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveExtrusionSolid * _underlying;

        int resultType;
  };



#endif
