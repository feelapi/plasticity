// This is a generated file, modify: generate/templates/Edge.h

#ifndef EDGE_H
#define EDGE_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <topology.h>

#include "TopologyItem.h"
#include "CartPoint3D.h"
#include "PromiseWorker.h"

class Edge : public
  Napi::ObjectWrap<Edge>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbEdge *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        Edge(const Napi::CallbackInfo& info);

         Napi::Value Point(const Napi::CallbackInfo& info);
         Napi::Value Point_async(const Napi::CallbackInfo& info);
         Napi::Value GetBegPoint(const Napi::CallbackInfo& info);
         Napi::Value GetBegPoint_async(const Napi::CallbackInfo& info);
         Napi::Value GetEndPoint(const Napi::CallbackInfo& info);
         Napi::Value GetEndPoint_async(const Napi::CallbackInfo& info);
         Napi::Value PointProjection(const Napi::CallbackInfo& info);
         Napi::Value PointProjection_async(const Napi::CallbackInfo& info);
         Napi::Value Reverse(const Napi::CallbackInfo& info);
         Napi::Value Reverse_async(const Napi::CallbackInfo& info);
         Napi::Value Tangent(const Napi::CallbackInfo& info);
         Napi::Value Tangent_async(const Napi::CallbackInfo& info);
         Napi::Value GetBegTangent(const Napi::CallbackInfo& info);
         Napi::Value GetBegTangent_async(const Napi::CallbackInfo& info);
         Napi::Value GetEndTangent(const Napi::CallbackInfo& info);
         Napi::Value GetEndTangent_async(const Napi::CallbackInfo& info);
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

    MbEdge * _underlying;

    ~Edge();


  private:

};


  class Edge_Point_AsyncWorker : public PromiseWorker {
      public:
          Edge_Point_AsyncWorker(
MbEdge * _underlying,            Napi::Promise::Deferred const &d,
                                 double  t);
          virtual ~Edge_Point_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbEdge * _underlying;                         double  t;

                
                 MbCartPoint3D * p;
                

        int resultType;
  };


  class Edge_GetBegPoint_AsyncWorker : public PromiseWorker {
      public:
          Edge_GetBegPoint_AsyncWorker(
MbEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Edge_GetBegPoint_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbEdge * _underlying;
                
                 MbCartPoint3D * p;
                

        int resultType;
  };


  class Edge_GetEndPoint_AsyncWorker : public PromiseWorker {
      public:
          Edge_GetEndPoint_AsyncWorker(
MbEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Edge_GetEndPoint_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbEdge * _underlying;
                
                 MbCartPoint3D * p;
                

        int resultType;
  };


  class Edge_PointProjection_AsyncWorker : public PromiseWorker {
      public:
          Edge_PointProjection_AsyncWorker(
MbEdge * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCartPoint3D & p);
          virtual ~Edge_PointProjection_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbEdge * _underlying;                        const MbCartPoint3D & p;

                
                 double  _result;
                

        int resultType;
  };


  class Edge_Reverse_AsyncWorker : public PromiseWorker {
      public:
          Edge_Reverse_AsyncWorker(
MbEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Edge_Reverse_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbEdge * _underlying;

        int resultType;
  };


  class Edge_Tangent_AsyncWorker : public PromiseWorker {
      public:
          Edge_Tangent_AsyncWorker(
MbEdge * _underlying,            Napi::Promise::Deferred const &d,
                                 double  t);
          virtual ~Edge_Tangent_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbEdge * _underlying;                         double  t;

                
                 MbVector3D * tan;
                

        int resultType;
  };


  class Edge_GetBegTangent_AsyncWorker : public PromiseWorker {
      public:
          Edge_GetBegTangent_AsyncWorker(
MbEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Edge_GetBegTangent_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbEdge * _underlying;
                
                 MbVector3D * tan;
                

        int resultType;
  };


  class Edge_GetEndTangent_AsyncWorker : public PromiseWorker {
      public:
          Edge_GetEndTangent_AsyncWorker(
MbEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Edge_GetEndTangent_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbEdge * _underlying;
                
                 MbVector3D * tan;
                

        int resultType;
  };


  class Edge_IsA_AsyncWorker : public PromiseWorker {
      public:
          Edge_IsA_AsyncWorker(
MbEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Edge_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbEdge * _underlying;
                
                 MbeTopologyType  _result;
                

        int resultType;
  };


  class Edge_GetName_AsyncWorker : public PromiseWorker {
      public:
          Edge_GetName_AsyncWorker(
MbEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Edge_GetName_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbEdge * _underlying;
                
                const MbName * _result;
                

        int resultType;
  };


  class Edge_GetMainName_AsyncWorker : public PromiseWorker {
      public:
          Edge_GetMainName_AsyncWorker(
MbEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Edge_GetMainName_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbEdge * _underlying;
                
                 SimpleName  _result;
                

        int resultType;
  };


  class Edge_GetFirstName_AsyncWorker : public PromiseWorker {
      public:
          Edge_GetFirstName_AsyncWorker(
MbEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Edge_GetFirstName_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbEdge * _underlying;
                
                 SimpleName  _result;
                

        int resultType;
  };


  class Edge_GetNameHash_AsyncWorker : public PromiseWorker {
      public:
          Edge_GetNameHash_AsyncWorker(
MbEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Edge_GetNameHash_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbEdge * _underlying;
                
                 SimpleName  _result;
                

        int resultType;
  };


  class Edge_AddYourGabaritTo_AsyncWorker : public PromiseWorker {
      public:
          Edge_AddYourGabaritTo_AsyncWorker(
MbEdge * _underlying,            Napi::Promise::Deferred const &d,
                                 MbCube & cube);
          virtual ~Edge_AddYourGabaritTo_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbEdge * _underlying;                         MbCube & cube;


        int resultType;
  };


  class Edge_CalculateMesh_AsyncWorker : public PromiseWorker {
      public:
          Edge_CalculateMesh_AsyncWorker(
MbEdge * _underlying,            Napi::Promise::Deferred const &d,
                                const MbStepData & stepData,
                                const MbFormNote & note);
          virtual ~Edge_CalculateMesh_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbEdge * _underlying;                        const MbStepData & stepData;
                        const MbFormNote & note;

                
                 MbMesh * mesh;
                

        int resultType;
  };


  class Edge_GetOwnChanged_AsyncWorker : public PromiseWorker {
      public:
          Edge_GetOwnChanged_AsyncWorker(
MbEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Edge_GetOwnChanged_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbEdge * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class Edge_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          Edge_GetUseCount_AsyncWorker(
MbEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Edge_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbEdge * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class Edge_AddRef_AsyncWorker : public PromiseWorker {
      public:
          Edge_AddRef_AsyncWorker(
MbEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Edge_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbEdge * _underlying;

        int resultType;
  };


  class Edge_SetStyle_AsyncWorker : public PromiseWorker {
      public:
          Edge_SetStyle_AsyncWorker(
MbEdge * _underlying,            Napi::Promise::Deferred const &d,
                                 int  s);
          virtual ~Edge_SetStyle_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbEdge * _underlying;                         int  s;


        int resultType;
  };


  class Edge_GetStyle_AsyncWorker : public PromiseWorker {
      public:
          Edge_GetStyle_AsyncWorker(
MbEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Edge_GetStyle_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbEdge * _underlying;
                
                 int  _result;
                

        int resultType;
  };


  class Edge_SetColor_AsyncWorker : public PromiseWorker {
      public:
          Edge_SetColor_AsyncWorker(
MbEdge * _underlying,            Napi::Promise::Deferred const &d,
                                 uint32  c);
          virtual ~Edge_SetColor_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbEdge * _underlying;                         uint32  c;


        int resultType;
  };


  class Edge_GetColor_AsyncWorker : public PromiseWorker {
      public:
          Edge_GetColor_AsyncWorker(
MbEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Edge_GetColor_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbEdge * _underlying;
                
                 uint32  _result;
                

        int resultType;
  };


  class Edge_AttributesConvert_AsyncWorker : public PromiseWorker {
      public:
          Edge_AttributesConvert_AsyncWorker(
MbEdge * _underlying,            Napi::Promise::Deferred const &d,
                                 MbGrid & other);
          virtual ~Edge_AttributesConvert_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbEdge * _underlying;                         MbGrid & other;


        int resultType;
  };



#endif
