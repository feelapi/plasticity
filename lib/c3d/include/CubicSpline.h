// This is a generated file, modify: generate/templates/CubicSpline.h

#ifndef CUBICSPLINE_H
#define CUBICSPLINE_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cur_cubic_spline.h>

#include "PolyCurve.h"
#include "PromiseWorker.h"

class CubicSpline : public
  Napi::ObjectWrap<CubicSpline>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbCubicSpline *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        CubicSpline(const Napi::CallbackInfo& info);

         Napi::Value GetPointsCount(const Napi::CallbackInfo& info);
         Napi::Value GetPointsCount_async(const Napi::CallbackInfo& info);
         Napi::Value GetPoint(const Napi::CallbackInfo& info);
         Napi::Value GetPoint_async(const Napi::CallbackInfo& info);
         Napi::Value AddPoint(const Napi::CallbackInfo& info);
         Napi::Value AddPoint_async(const Napi::CallbackInfo& info);
         Napi::Value Inverse(const Napi::CallbackInfo& info);
         Napi::Value Inverse_async(const Napi::CallbackInfo& info);
         Napi::Value Trimmed(const Napi::CallbackInfo& info);
         Napi::Value Trimmed_async(const Napi::CallbackInfo& info);
         Napi::Value IsStraight(const Napi::CallbackInfo& info);
         Napi::Value IsStraight_async(const Napi::CallbackInfo& info);
         Napi::Value IsClosed(const Napi::CallbackInfo& info);
         Napi::Value IsClosed_async(const Napi::CallbackInfo& info);
         Napi::Value IsBounded(const Napi::CallbackInfo& info);
         Napi::Value IsBounded_async(const Napi::CallbackInfo& info);
         Napi::Value GetTMax(const Napi::CallbackInfo& info);
         Napi::Value GetTMax_async(const Napi::CallbackInfo& info);
         Napi::Value GetTMin(const Napi::CallbackInfo& info);
         Napi::Value GetTMin_async(const Napi::CallbackInfo& info);
         Napi::Value GetPeriod(const Napi::CallbackInfo& info);
         Napi::Value GetPeriod_async(const Napi::CallbackInfo& info);
         Napi::Value GetWeightCentre(const Napi::CallbackInfo& info);
         Napi::Value GetWeightCentre_async(const Napi::CallbackInfo& info);
         Napi::Value GetLimitPoint(const Napi::CallbackInfo& info);
         Napi::Value GetLimitPoint_async(const Napi::CallbackInfo& info);
         Napi::Value PointOn(const Napi::CallbackInfo& info);
         Napi::Value PointOn_async(const Napi::CallbackInfo& info);
         Napi::Value _PointOn(const Napi::CallbackInfo& info);
         Napi::Value _PointOn_async(const Napi::CallbackInfo& info);
         Napi::Value Explore(const Napi::CallbackInfo& info);
         Napi::Value Explore_async(const Napi::CallbackInfo& info);
         Napi::Value FirstDer(const Napi::CallbackInfo& info);
         Napi::Value FirstDer_async(const Napi::CallbackInfo& info);
         Napi::Value _FirstDer(const Napi::CallbackInfo& info);
         Napi::Value _FirstDer_async(const Napi::CallbackInfo& info);
         Napi::Value SecondDer(const Napi::CallbackInfo& info);
         Napi::Value SecondDer_async(const Napi::CallbackInfo& info);
         Napi::Value _SecondDer(const Napi::CallbackInfo& info);
         Napi::Value _SecondDer_async(const Napi::CallbackInfo& info);
         Napi::Value Tangent(const Napi::CallbackInfo& info);
         Napi::Value Tangent_async(const Napi::CallbackInfo& info);
         Napi::Value _Tangent(const Napi::CallbackInfo& info);
         Napi::Value _Tangent_async(const Napi::CallbackInfo& info);
         Napi::Value Normal(const Napi::CallbackInfo& info);
         Napi::Value Normal_async(const Napi::CallbackInfo& info);
         Napi::Value _Normal(const Napi::CallbackInfo& info);
         Napi::Value _Normal_async(const Napi::CallbackInfo& info);
         Napi::Value PointRelative(const Napi::CallbackInfo& info);
         Napi::Value PointRelative_async(const Napi::CallbackInfo& info);
         Napi::Value PointLocation(const Napi::CallbackInfo& info);
         Napi::Value PointLocation_async(const Napi::CallbackInfo& info);
         Napi::Value IsA(const Napi::CallbackInfo& info);
         Napi::Value IsA_async(const Napi::CallbackInfo& info);
         Napi::Value Type(const Napi::CallbackInfo& info);
         Napi::Value Type_async(const Napi::CallbackInfo& info);
         Napi::Value Family(const Napi::CallbackInfo& info);
         Napi::Value Family_async(const Napi::CallbackInfo& info);
         Napi::Value Move(const Napi::CallbackInfo& info);
         Napi::Value Move_async(const Napi::CallbackInfo& info);
         Napi::Value Transform(const Napi::CallbackInfo& info);
         Napi::Value Transform_async(const Napi::CallbackInfo& info);
         Napi::Value Duplicate(const Napi::CallbackInfo& info);
         Napi::Value Duplicate_async(const Napi::CallbackInfo& info);
         Napi::Value AddYourGabaritTo(const Napi::CallbackInfo& info);
         Napi::Value AddYourGabaritTo_async(const Napi::CallbackInfo& info);
         Napi::Value GetUseCount(const Napi::CallbackInfo& info);
         Napi::Value GetUseCount_async(const Napi::CallbackInfo& info);
         Napi::Value AddRef(const Napi::CallbackInfo& info);
         Napi::Value AddRef_async(const Napi::CallbackInfo& info);
        Napi::Value Id(const Napi::CallbackInfo& info);

    MbCubicSpline * _underlying;

    ~CubicSpline();


  private:

};


  class CubicSpline_GetPointsCount_AsyncWorker : public PromiseWorker {
      public:
          CubicSpline_GetPointsCount_AsyncWorker(
MbCubicSpline * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CubicSpline_GetPointsCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCubicSpline * _underlying;
                
                 size_t  _result;
                

        int resultType;
  };


  class CubicSpline_GetPoint_AsyncWorker : public PromiseWorker {
      public:
          CubicSpline_GetPoint_AsyncWorker(
MbCubicSpline * _underlying,            Napi::Promise::Deferred const &d,
                                 ptrdiff_t  index);
          virtual ~CubicSpline_GetPoint_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCubicSpline * _underlying;                         ptrdiff_t  index;

                
                 MbCartPoint * pnt;
                

        int resultType;
  };


  class CubicSpline_AddPoint_AsyncWorker : public PromiseWorker {
      public:
          CubicSpline_AddPoint_AsyncWorker(
MbCubicSpline * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCartPoint & pnt);
          virtual ~CubicSpline_AddPoint_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCubicSpline * _underlying;                        const MbCartPoint & pnt;


        int resultType;
  };


  class CubicSpline_Inverse_AsyncWorker : public PromiseWorker {
      public:
          CubicSpline_Inverse_AsyncWorker(
MbCubicSpline * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRegTransform * iReg = NULL);
          virtual ~CubicSpline_Inverse_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCubicSpline * _underlying;                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class CubicSpline_Trimmed_AsyncWorker : public PromiseWorker {
      public:
          CubicSpline_Trimmed_AsyncWorker(
MbCubicSpline * _underlying,            Napi::Promise::Deferred const &d,
                                 double  t1,
                                 double  t2,
                                 int  sense);
          virtual ~CubicSpline_Trimmed_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCubicSpline * _underlying;                         double  t1;
                         double  t2;
                         int  sense;

                
                 MbCurve * _result;
                

        int resultType;
  };


  class CubicSpline_IsStraight_AsyncWorker : public PromiseWorker {
      public:
          CubicSpline_IsStraight_AsyncWorker(
MbCubicSpline * _underlying,            Napi::Promise::Deferred const &d,
                                 bool  ignoreParams = false);
          virtual ~CubicSpline_IsStraight_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCubicSpline * _underlying;                         bool  ignoreParams= false;

                
                 bool  _result;
                

        int resultType;
  };


  class CubicSpline_IsClosed_AsyncWorker : public PromiseWorker {
      public:
          CubicSpline_IsClosed_AsyncWorker(
MbCubicSpline * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CubicSpline_IsClosed_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCubicSpline * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class CubicSpline_IsBounded_AsyncWorker : public PromiseWorker {
      public:
          CubicSpline_IsBounded_AsyncWorker(
MbCubicSpline * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CubicSpline_IsBounded_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCubicSpline * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class CubicSpline_GetTMax_AsyncWorker : public PromiseWorker {
      public:
          CubicSpline_GetTMax_AsyncWorker(
MbCubicSpline * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CubicSpline_GetTMax_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCubicSpline * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class CubicSpline_GetTMin_AsyncWorker : public PromiseWorker {
      public:
          CubicSpline_GetTMin_AsyncWorker(
MbCubicSpline * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CubicSpline_GetTMin_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCubicSpline * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class CubicSpline_GetPeriod_AsyncWorker : public PromiseWorker {
      public:
          CubicSpline_GetPeriod_AsyncWorker(
MbCubicSpline * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CubicSpline_GetPeriod_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCubicSpline * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class CubicSpline_GetWeightCentre_AsyncWorker : public PromiseWorker {
      public:
          CubicSpline_GetWeightCentre_AsyncWorker(
MbCubicSpline * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CubicSpline_GetWeightCentre_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCubicSpline * _underlying;
                
                 MbCartPoint * point;
                

        int resultType;
  };


  class CubicSpline_GetLimitPoint_AsyncWorker : public PromiseWorker {
      public:
          CubicSpline_GetLimitPoint_AsyncWorker(
MbCubicSpline * _underlying,            Napi::Promise::Deferred const &d,
                                 ptrdiff_t  number);
          virtual ~CubicSpline_GetLimitPoint_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCubicSpline * _underlying;                         ptrdiff_t  number;

                
                 MbCartPoint * point;
                

        int resultType;
  };


  class CubicSpline_PointOn_AsyncWorker : public PromiseWorker {
      public:
          CubicSpline_PointOn_AsyncWorker(
MbCubicSpline * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~CubicSpline_PointOn_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCubicSpline * _underlying;                         double & t;

                
                 MbCartPoint * p;
                

        int resultType;
  };


  class CubicSpline__PointOn_AsyncWorker : public PromiseWorker {
      public:
          CubicSpline__PointOn_AsyncWorker(
MbCubicSpline * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~CubicSpline__PointOn_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCubicSpline * _underlying;                         double & t;

                
                 MbCartPoint * p;
                

        int resultType;
  };


  class CubicSpline_Explore_AsyncWorker : public PromiseWorker {
      public:
          CubicSpline_Explore_AsyncWorker(
MbCubicSpline * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t,
                                 bool  ext);
          virtual ~CubicSpline_Explore_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCubicSpline * _underlying;                         double & t;
                         bool  ext;

                
                 MbCartPoint * pnt;
                
                
                 MbVector * fir;
                
                
                 MbVector * sec;
                
                
                 MbVector * thir;
                

        int resultType;
  };


  class CubicSpline_FirstDer_AsyncWorker : public PromiseWorker {
      public:
          CubicSpline_FirstDer_AsyncWorker(
MbCubicSpline * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~CubicSpline_FirstDer_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCubicSpline * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class CubicSpline__FirstDer_AsyncWorker : public PromiseWorker {
      public:
          CubicSpline__FirstDer_AsyncWorker(
MbCubicSpline * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~CubicSpline__FirstDer_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCubicSpline * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class CubicSpline_SecondDer_AsyncWorker : public PromiseWorker {
      public:
          CubicSpline_SecondDer_AsyncWorker(
MbCubicSpline * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~CubicSpline_SecondDer_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCubicSpline * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class CubicSpline__SecondDer_AsyncWorker : public PromiseWorker {
      public:
          CubicSpline__SecondDer_AsyncWorker(
MbCubicSpline * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~CubicSpline__SecondDer_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCubicSpline * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class CubicSpline_Tangent_AsyncWorker : public PromiseWorker {
      public:
          CubicSpline_Tangent_AsyncWorker(
MbCubicSpline * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~CubicSpline_Tangent_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCubicSpline * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class CubicSpline__Tangent_AsyncWorker : public PromiseWorker {
      public:
          CubicSpline__Tangent_AsyncWorker(
MbCubicSpline * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~CubicSpline__Tangent_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCubicSpline * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class CubicSpline_Normal_AsyncWorker : public PromiseWorker {
      public:
          CubicSpline_Normal_AsyncWorker(
MbCubicSpline * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~CubicSpline_Normal_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCubicSpline * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class CubicSpline__Normal_AsyncWorker : public PromiseWorker {
      public:
          CubicSpline__Normal_AsyncWorker(
MbCubicSpline * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~CubicSpline__Normal_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCubicSpline * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class CubicSpline_PointRelative_AsyncWorker : public PromiseWorker {
      public:
          CubicSpline_PointRelative_AsyncWorker(
MbCubicSpline * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCartPoint & pnt,
                                 double  eps);
          virtual ~CubicSpline_PointRelative_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCubicSpline * _underlying;                        const MbCartPoint & pnt;
                         double  eps;

                
                 MbeItemLocation  _result;
                

        int resultType;
  };


  class CubicSpline_PointLocation_AsyncWorker : public PromiseWorker {
      public:
          CubicSpline_PointLocation_AsyncWorker(
MbCubicSpline * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCartPoint & pnt,
                                 double  eps);
          virtual ~CubicSpline_PointLocation_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCubicSpline * _underlying;                        const MbCartPoint & pnt;
                         double  eps;

                
                 MbeLocation  _result;
                

        int resultType;
  };


  class CubicSpline_IsA_AsyncWorker : public PromiseWorker {
      public:
          CubicSpline_IsA_AsyncWorker(
MbCubicSpline * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CubicSpline_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCubicSpline * _underlying;
                
                 MbePlaneType  _result;
                

        int resultType;
  };


  class CubicSpline_Type_AsyncWorker : public PromiseWorker {
      public:
          CubicSpline_Type_AsyncWorker(
MbCubicSpline * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CubicSpline_Type_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCubicSpline * _underlying;
                
                 MbePlaneType  _result;
                

        int resultType;
  };


  class CubicSpline_Family_AsyncWorker : public PromiseWorker {
      public:
          CubicSpline_Family_AsyncWorker(
MbCubicSpline * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CubicSpline_Family_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCubicSpline * _underlying;
                
                 MbePlaneType  _result;
                

        int resultType;
  };


  class CubicSpline_Move_AsyncWorker : public PromiseWorker {
      public:
          CubicSpline_Move_AsyncWorker(
MbCubicSpline * _underlying,            Napi::Promise::Deferred const &d,
                                const MbVector & to,
                                 MbRegTransform * iReg = NULL);
          virtual ~CubicSpline_Move_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCubicSpline * _underlying;                        const MbVector & to;
                         MbRegTransform * iReg= NULL;

                
                const MbSurface * newSurface;
                

        int resultType;
  };


  class CubicSpline_Transform_AsyncWorker : public PromiseWorker {
      public:
          CubicSpline_Transform_AsyncWorker(
MbCubicSpline * _underlying,            Napi::Promise::Deferred const &d,
                                const MbMatrix & matr,
                                 MbRegTransform * iReg = NULL,
                                const MbSurface * newSurface = NULL);
          virtual ~CubicSpline_Transform_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCubicSpline * _underlying;                        const MbMatrix & matr;
                         MbRegTransform * iReg= NULL;
                        const MbSurface * newSurface= NULL;


        int resultType;
  };


  class CubicSpline_Duplicate_AsyncWorker : public PromiseWorker {
      public:
          CubicSpline_Duplicate_AsyncWorker(
MbCubicSpline * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRegDuplicate * dup = NULL);
          virtual ~CubicSpline_Duplicate_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCubicSpline * _underlying;                         MbRegDuplicate * dup= NULL;

                
                 MbPlaneItem * _result;
                

        int resultType;
  };


  class CubicSpline_AddYourGabaritTo_AsyncWorker : public PromiseWorker {
      public:
          CubicSpline_AddYourGabaritTo_AsyncWorker(
MbCubicSpline * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRect & rect);
          virtual ~CubicSpline_AddYourGabaritTo_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCubicSpline * _underlying;                         MbRect & rect;


        int resultType;
  };


  class CubicSpline_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          CubicSpline_GetUseCount_AsyncWorker(
MbCubicSpline * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CubicSpline_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCubicSpline * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class CubicSpline_AddRef_AsyncWorker : public PromiseWorker {
      public:
          CubicSpline_AddRef_AsyncWorker(
MbCubicSpline * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CubicSpline_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCubicSpline * _underlying;

        int resultType;
  };



#endif
