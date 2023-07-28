// This is a generated file, modify: generate/templates/CurveEdge.h

#ifndef CURVEEDGE_H
#define CURVEEDGE_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <topology.h>

#include "Edge.h"
#include "Vector3D.h"
#include "SurfaceIntersectionCurve.h"
#include "Face.h"
#include "PromiseWorker.h"

class CurveEdge : public
  Napi::ObjectWrap<CurveEdge>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbCurveEdge *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        CurveEdge(const Napi::CallbackInfo& info);

         Napi::Value EdgeNormal(const Napi::CallbackInfo& info);
         Napi::Value EdgeNormal_async(const Napi::CallbackInfo& info);
         Napi::Value GetIntersectionCurve(const Napi::CallbackInfo& info);
         Napi::Value GetIntersectionCurve_async(const Napi::CallbackInfo& info);
         Napi::Value GetFacePlus(const Napi::CallbackInfo& info);
         Napi::Value GetFacePlus_async(const Napi::CallbackInfo& info);
         Napi::Value GetFaceMinus(const Napi::CallbackInfo& info);
         Napi::Value GetFaceMinus_async(const Napi::CallbackInfo& info);
         Napi::Value IsSplit(const Napi::CallbackInfo& info);
         Napi::Value IsSplit_async(const Napi::CallbackInfo& info);
         Napi::Value GetSpaceCurve(const Napi::CallbackInfo& info);
         Napi::Value GetSpaceCurve_async(const Napi::CallbackInfo& info);
         Napi::Value MakeCurve(const Napi::CallbackInfo& info);
         Napi::Value MakeCurve_async(const Napi::CallbackInfo& info);
         Napi::Value IsSmooth(const Napi::CallbackInfo& info);
         Napi::Value IsSmooth_async(const Napi::CallbackInfo& info);
         Napi::Value IsSeam(const Napi::CallbackInfo& info);
         Napi::Value IsSeam_async(const Napi::CallbackInfo& info);
         Napi::Value IsPole(const Napi::CallbackInfo& info);
         Napi::Value IsPole_async(const Napi::CallbackInfo& info);
         Napi::Value FaceNormal(const Napi::CallbackInfo& info);
         Napi::Value FaceNormal_async(const Napi::CallbackInfo& info);
         Napi::Value VertexNormal(const Napi::CallbackInfo& info);
         Napi::Value VertexNormal_async(const Napi::CallbackInfo& info);
         Napi::Value GetProlongEdges(const Napi::CallbackInfo& info);
         Napi::Value GetProlongEdges_async(const Napi::CallbackInfo& info);
         Napi::Value FindOrientedEdge(const Napi::CallbackInfo& info);
         Napi::Value FindOrientedEdge_async(const Napi::CallbackInfo& info);
         Napi::Value FindOrientedEdgePlus(const Napi::CallbackInfo& info);
         Napi::Value FindOrientedEdgePlus_async(const Napi::CallbackInfo& info);
         Napi::Value FindOrientedEdgeMinus(const Napi::CallbackInfo& info);
         Napi::Value FindOrientedEdgeMinus_async(const Napi::CallbackInfo& info);
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

    MbCurveEdge * _underlying;

    ~CurveEdge();


  private:

};


  class CurveEdge_EdgeNormal_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_EdgeNormal_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d,
                                 double  t);
          virtual ~CurveEdge_EdgeNormal_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;                         double  t;

                
                 MbVector3D * p;
                

        int resultType;
  };


  class CurveEdge_GetIntersectionCurve_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_GetIntersectionCurve_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveEdge_GetIntersectionCurve_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;
                
                const MbSurfaceIntersectionCurve * _result;
                

        int resultType;
  };


  class CurveEdge_GetFacePlus_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_GetFacePlus_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveEdge_GetFacePlus_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;
                
                 MbFace * _result;
                

        int resultType;
  };


  class CurveEdge_GetFaceMinus_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_GetFaceMinus_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveEdge_GetFaceMinus_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;
                
                 MbFace * _result;
                

        int resultType;
  };


  class CurveEdge_IsSplit_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_IsSplit_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d,
                                 bool  strict = false);
          virtual ~CurveEdge_IsSplit_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;                         bool  strict= false;

                
                 bool  _result;
                

        int resultType;
  };


  class CurveEdge_GetSpaceCurve_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_GetSpaceCurve_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveEdge_GetSpaceCurve_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;
                
                const MbCurve3D * _result;
                

        int resultType;
  };


  class CurveEdge_MakeCurve_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_MakeCurve_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveEdge_MakeCurve_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;
                
                 MbCurve3D * _result;
                

        int resultType;
  };


  class CurveEdge_IsSmooth_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_IsSmooth_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveEdge_IsSmooth_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class CurveEdge_IsSeam_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_IsSeam_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveEdge_IsSeam_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class CurveEdge_IsPole_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_IsPole_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveEdge_IsPole_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class CurveEdge_FaceNormal_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_FaceNormal_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d,
                                 double  t,
                                 bool  plus);
          virtual ~CurveEdge_FaceNormal_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;                         double  t;
                         bool  plus;

                
                 MbVector3D * n;
                

        int resultType;
  };


  class CurveEdge_VertexNormal_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_VertexNormal_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d,
                                 bool  begin);
          virtual ~CurveEdge_VertexNormal_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;                         bool  begin;

                
                 MbVector3D * normal;
                

        int resultType;
  };


  class CurveEdge_GetProlongEdges_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_GetProlongEdges_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveEdge_GetProlongEdges_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;
                
                 bool  _result;
                
                
                 RPArray<MbCurveEdge> * edges;
                

        int resultType;
  };


  class CurveEdge_FindOrientedEdge_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_FindOrientedEdge_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d,
                                 bool  orient);
          virtual ~CurveEdge_FindOrientedEdge_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;                         bool  orient;

                
                 bool  success;
                
                
                const MbFace * face;
                
                
                 MbLoop * findLoop;
                
                
                 size_t  index;
                

        int resultType;
  };


  class CurveEdge_FindOrientedEdgePlus_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_FindOrientedEdgePlus_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveEdge_FindOrientedEdgePlus_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;
                
                 bool  success;
                
                
                 size_t  loopIndex;
                
                
                 MbLoop * findLoop;
                
                
                 size_t  index;
                

        int resultType;
  };


  class CurveEdge_FindOrientedEdgeMinus_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_FindOrientedEdgeMinus_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveEdge_FindOrientedEdgeMinus_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;
                
                 bool  success;
                
                
                 size_t  loopIndex;
                
                
                 MbLoop * findLoop;
                
                
                 size_t  index;
                

        int resultType;
  };


  class CurveEdge_Point_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_Point_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d,
                                 double  t);
          virtual ~CurveEdge_Point_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;                         double  t;

                
                 MbCartPoint3D * p;
                

        int resultType;
  };


  class CurveEdge_GetBegPoint_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_GetBegPoint_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveEdge_GetBegPoint_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;
                
                 MbCartPoint3D * p;
                

        int resultType;
  };


  class CurveEdge_GetEndPoint_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_GetEndPoint_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveEdge_GetEndPoint_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;
                
                 MbCartPoint3D * p;
                

        int resultType;
  };


  class CurveEdge_PointProjection_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_PointProjection_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCartPoint3D & p);
          virtual ~CurveEdge_PointProjection_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;                        const MbCartPoint3D & p;

                
                 double  _result;
                

        int resultType;
  };


  class CurveEdge_Reverse_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_Reverse_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveEdge_Reverse_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;

        int resultType;
  };


  class CurveEdge_Tangent_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_Tangent_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d,
                                 double  t);
          virtual ~CurveEdge_Tangent_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;                         double  t;

                
                 MbVector3D * tan;
                

        int resultType;
  };


  class CurveEdge_GetBegTangent_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_GetBegTangent_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveEdge_GetBegTangent_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;
                
                 MbVector3D * tan;
                

        int resultType;
  };


  class CurveEdge_GetEndTangent_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_GetEndTangent_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveEdge_GetEndTangent_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;
                
                 MbVector3D * tan;
                

        int resultType;
  };


  class CurveEdge_IsA_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_IsA_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveEdge_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;
                
                 MbeTopologyType  _result;
                

        int resultType;
  };


  class CurveEdge_GetName_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_GetName_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveEdge_GetName_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;
                
                const MbName * _result;
                

        int resultType;
  };


  class CurveEdge_GetMainName_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_GetMainName_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveEdge_GetMainName_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;
                
                 SimpleName  _result;
                

        int resultType;
  };


  class CurveEdge_GetFirstName_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_GetFirstName_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveEdge_GetFirstName_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;
                
                 SimpleName  _result;
                

        int resultType;
  };


  class CurveEdge_GetNameHash_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_GetNameHash_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveEdge_GetNameHash_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;
                
                 SimpleName  _result;
                

        int resultType;
  };


  class CurveEdge_AddYourGabaritTo_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_AddYourGabaritTo_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d,
                                 MbCube & cube);
          virtual ~CurveEdge_AddYourGabaritTo_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;                         MbCube & cube;


        int resultType;
  };


  class CurveEdge_CalculateMesh_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_CalculateMesh_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d,
                                const MbStepData & stepData,
                                const MbFormNote & note);
          virtual ~CurveEdge_CalculateMesh_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;                        const MbStepData & stepData;
                        const MbFormNote & note;

                
                 MbMesh * mesh;
                

        int resultType;
  };


  class CurveEdge_GetOwnChanged_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_GetOwnChanged_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveEdge_GetOwnChanged_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class CurveEdge_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_GetUseCount_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveEdge_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class CurveEdge_AddRef_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_AddRef_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveEdge_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;

        int resultType;
  };


  class CurveEdge_SetStyle_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_SetStyle_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d,
                                 int  s);
          virtual ~CurveEdge_SetStyle_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;                         int  s;


        int resultType;
  };


  class CurveEdge_GetStyle_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_GetStyle_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveEdge_GetStyle_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;
                
                 int  _result;
                

        int resultType;
  };


  class CurveEdge_SetColor_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_SetColor_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d,
                                 uint32  c);
          virtual ~CurveEdge_SetColor_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;                         uint32  c;


        int resultType;
  };


  class CurveEdge_GetColor_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_GetColor_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CurveEdge_GetColor_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;
                
                 uint32  _result;
                

        int resultType;
  };


  class CurveEdge_AttributesConvert_AsyncWorker : public PromiseWorker {
      public:
          CurveEdge_AttributesConvert_AsyncWorker(
MbCurveEdge * _underlying,            Napi::Promise::Deferred const &d,
                                 MbGrid & other);
          virtual ~CurveEdge_AttributesConvert_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCurveEdge * _underlying;                         MbGrid & other;


        int resultType;
  };



#endif
