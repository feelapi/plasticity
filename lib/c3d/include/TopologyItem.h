// This is a generated file, modify: generate/templates/TopologyItem.h

#ifndef TOPOLOGYITEM_H
#define TOPOLOGYITEM_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <topology_item.h>

#include "TopItem.h"
#include "AttributeContainer.h"
#include "Name.h"
#include "Cube.h"
#include "StepData.h"
#include "FormNote.h"
#include "Mesh.h"
#include "PromiseWorker.h"

class TopologyItem : public
  Napi::ObjectWrap<TopologyItem>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbTopologyItem *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        TopologyItem(const Napi::CallbackInfo& info);

         Napi::Value IsA(const Napi::CallbackInfo& info);
         Napi::Value IsA_async(const Napi::CallbackInfo& info);
         Napi::Value GetName(const Napi::CallbackInfo& info);
         Napi::Value GetName_async(const Napi::CallbackInfo& info);
         Napi::Value GetMainName(const Napi::CallbackInfo& info);
         Napi::Value GetMainName_async(const Napi::CallbackInfo& info);
         Napi::Value GetFirstName(const Napi::CallbackInfo& info);
         Napi::Value GetFirstName_async(const Napi::CallbackInfo& info);
         Napi::Value GetNameHash(const Napi::CallbackInfo& info);
         Napi::Value GetNameHash_async(const Napi::CallbackInfo& info);
         Napi::Value AddYourGabaritTo(const Napi::CallbackInfo& info);
         Napi::Value AddYourGabaritTo_async(const Napi::CallbackInfo& info);
         Napi::Value Cast(const Napi::CallbackInfo& info);
         Napi::Value Cast_async(const Napi::CallbackInfo& info);
         Napi::Value CalculateMesh(const Napi::CallbackInfo& info);
         Napi::Value CalculateMesh_async(const Napi::CallbackInfo& info);
         Napi::Value GetOwnChanged(const Napi::CallbackInfo& info);
         Napi::Value GetOwnChanged_async(const Napi::CallbackInfo& info);
         Napi::Value GetUseCount(const Napi::CallbackInfo& info);
         Napi::Value GetUseCount_async(const Napi::CallbackInfo& info);
         Napi::Value AddRef(const Napi::CallbackInfo& info);
         Napi::Value AddRef_async(const Napi::CallbackInfo& info);
         Napi::Value SetStyle(const Napi::CallbackInfo& info);
         Napi::Value SetStyle_async(const Napi::CallbackInfo& info);
         Napi::Value GetStyle(const Napi::CallbackInfo& info);
         Napi::Value GetStyle_async(const Napi::CallbackInfo& info);
         Napi::Value SetColor(const Napi::CallbackInfo& info);
         Napi::Value SetColor_async(const Napi::CallbackInfo& info);
         Napi::Value GetColor(const Napi::CallbackInfo& info);
         Napi::Value GetColor_async(const Napi::CallbackInfo& info);
         Napi::Value AttributesConvert(const Napi::CallbackInfo& info);
         Napi::Value AttributesConvert_async(const Napi::CallbackInfo& info);
        Napi::Value Id(const Napi::CallbackInfo& info);

    MbTopologyItem * _underlying;

    ~TopologyItem();


  private:

};


  class TopologyItem_IsA_AsyncWorker : public PromiseWorker {
      public:
          TopologyItem_IsA_AsyncWorker(
MbTopologyItem * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~TopologyItem_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTopologyItem * _underlying;
                
                 MbeTopologyType  _result;
                

        int resultType;
  };


  class TopologyItem_GetName_AsyncWorker : public PromiseWorker {
      public:
          TopologyItem_GetName_AsyncWorker(
MbTopologyItem * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~TopologyItem_GetName_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTopologyItem * _underlying;
                
                const MbName * _result;
                

        int resultType;
  };


  class TopologyItem_GetMainName_AsyncWorker : public PromiseWorker {
      public:
          TopologyItem_GetMainName_AsyncWorker(
MbTopologyItem * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~TopologyItem_GetMainName_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTopologyItem * _underlying;
                
                 SimpleName  _result;
                

        int resultType;
  };


  class TopologyItem_GetFirstName_AsyncWorker : public PromiseWorker {
      public:
          TopologyItem_GetFirstName_AsyncWorker(
MbTopologyItem * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~TopologyItem_GetFirstName_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTopologyItem * _underlying;
                
                 SimpleName  _result;
                

        int resultType;
  };


  class TopologyItem_GetNameHash_AsyncWorker : public PromiseWorker {
      public:
          TopologyItem_GetNameHash_AsyncWorker(
MbTopologyItem * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~TopologyItem_GetNameHash_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTopologyItem * _underlying;
                
                 SimpleName  _result;
                

        int resultType;
  };


  class TopologyItem_AddYourGabaritTo_AsyncWorker : public PromiseWorker {
      public:
          TopologyItem_AddYourGabaritTo_AsyncWorker(
MbTopologyItem * _underlying,            Napi::Promise::Deferred const &d,
                                 MbCube & cube);
          virtual ~TopologyItem_AddYourGabaritTo_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTopologyItem * _underlying;                         MbCube & cube;


        int resultType;
  };


  class TopologyItem_CalculateMesh_AsyncWorker : public PromiseWorker {
      public:
          TopologyItem_CalculateMesh_AsyncWorker(
MbTopologyItem * _underlying,            Napi::Promise::Deferred const &d,
                                const MbStepData & stepData,
                                const MbFormNote & note);
          virtual ~TopologyItem_CalculateMesh_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTopologyItem * _underlying;                        const MbStepData & stepData;
                        const MbFormNote & note;

                
                 MbMesh * mesh;
                

        int resultType;
  };


  class TopologyItem_GetOwnChanged_AsyncWorker : public PromiseWorker {
      public:
          TopologyItem_GetOwnChanged_AsyncWorker(
MbTopologyItem * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~TopologyItem_GetOwnChanged_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTopologyItem * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class TopologyItem_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          TopologyItem_GetUseCount_AsyncWorker(
MbTopologyItem * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~TopologyItem_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTopologyItem * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class TopologyItem_AddRef_AsyncWorker : public PromiseWorker {
      public:
          TopologyItem_AddRef_AsyncWorker(
MbTopologyItem * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~TopologyItem_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTopologyItem * _underlying;

        int resultType;
  };


  class TopologyItem_SetStyle_AsyncWorker : public PromiseWorker {
      public:
          TopologyItem_SetStyle_AsyncWorker(
MbTopologyItem * _underlying,            Napi::Promise::Deferred const &d,
                                 int  s);
          virtual ~TopologyItem_SetStyle_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTopologyItem * _underlying;                         int  s;


        int resultType;
  };


  class TopologyItem_GetStyle_AsyncWorker : public PromiseWorker {
      public:
          TopologyItem_GetStyle_AsyncWorker(
MbTopologyItem * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~TopologyItem_GetStyle_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTopologyItem * _underlying;
                
                 int  _result;
                

        int resultType;
  };


  class TopologyItem_SetColor_AsyncWorker : public PromiseWorker {
      public:
          TopologyItem_SetColor_AsyncWorker(
MbTopologyItem * _underlying,            Napi::Promise::Deferred const &d,
                                 uint32  c);
          virtual ~TopologyItem_SetColor_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTopologyItem * _underlying;                         uint32  c;


        int resultType;
  };


  class TopologyItem_GetColor_AsyncWorker : public PromiseWorker {
      public:
          TopologyItem_GetColor_AsyncWorker(
MbTopologyItem * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~TopologyItem_GetColor_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTopologyItem * _underlying;
                
                 uint32  _result;
                

        int resultType;
  };


  class TopologyItem_AttributesConvert_AsyncWorker : public PromiseWorker {
      public:
          TopologyItem_AttributesConvert_AsyncWorker(
MbTopologyItem * _underlying,            Napi::Promise::Deferred const &d,
                                 MbGrid & other);
          virtual ~TopologyItem_AttributesConvert_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTopologyItem * _underlying;                         MbGrid & other;


        int resultType;
  };



#endif
