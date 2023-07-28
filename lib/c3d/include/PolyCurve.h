// This is a generated file, modify: generate/templates/PolyCurve.h

#ifndef POLYCURVE_H
#define POLYCURVE_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cur_polycurve.h>

#include "Curve.h"
#include "CartPoint.h"
#include "PromiseWorker.h"

class PolyCurve : public
  Napi::ObjectWrap<PolyCurve>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbPolyCurve *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        PolyCurve(const Napi::CallbackInfo& info);

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

    MbPolyCurve * _underlying;

    ~PolyCurve();


  private:

};


  class PolyCurve_GetPointsCount_AsyncWorker : public PromiseWorker {
      public:
          PolyCurve_GetPointsCount_AsyncWorker(
MbPolyCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~PolyCurve_GetPointsCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyCurve * _underlying;
                
                 size_t  _result;
                

        int resultType;
  };


  class PolyCurve_GetPoint_AsyncWorker : public PromiseWorker {
      public:
          PolyCurve_GetPoint_AsyncWorker(
MbPolyCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 ptrdiff_t  index);
          virtual ~PolyCurve_GetPoint_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyCurve * _underlying;                         ptrdiff_t  index;

                
                 MbCartPoint * pnt;
                

        int resultType;
  };


  class PolyCurve_AddPoint_AsyncWorker : public PromiseWorker {
      public:
          PolyCurve_AddPoint_AsyncWorker(
MbPolyCurve * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCartPoint & pnt);
          virtual ~PolyCurve_AddPoint_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyCurve * _underlying;                        const MbCartPoint & pnt;


        int resultType;
  };


  class PolyCurve_Inverse_AsyncWorker : public PromiseWorker {
      public:
          PolyCurve_Inverse_AsyncWorker(
MbPolyCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRegTransform * iReg = NULL);
          virtual ~PolyCurve_Inverse_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyCurve * _underlying;                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class PolyCurve_Trimmed_AsyncWorker : public PromiseWorker {
      public:
          PolyCurve_Trimmed_AsyncWorker(
MbPolyCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double  t1,
                                 double  t2,
                                 int  sense);
          virtual ~PolyCurve_Trimmed_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyCurve * _underlying;                         double  t1;
                         double  t2;
                         int  sense;

                
                 MbCurve * _result;
                

        int resultType;
  };


  class PolyCurve_IsStraight_AsyncWorker : public PromiseWorker {
      public:
          PolyCurve_IsStraight_AsyncWorker(
MbPolyCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 bool  ignoreParams = false);
          virtual ~PolyCurve_IsStraight_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyCurve * _underlying;                         bool  ignoreParams= false;

                
                 bool  _result;
                

        int resultType;
  };


  class PolyCurve_IsClosed_AsyncWorker : public PromiseWorker {
      public:
          PolyCurve_IsClosed_AsyncWorker(
MbPolyCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~PolyCurve_IsClosed_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyCurve * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class PolyCurve_IsBounded_AsyncWorker : public PromiseWorker {
      public:
          PolyCurve_IsBounded_AsyncWorker(
MbPolyCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~PolyCurve_IsBounded_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyCurve * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class PolyCurve_GetTMax_AsyncWorker : public PromiseWorker {
      public:
          PolyCurve_GetTMax_AsyncWorker(
MbPolyCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~PolyCurve_GetTMax_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyCurve * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class PolyCurve_GetTMin_AsyncWorker : public PromiseWorker {
      public:
          PolyCurve_GetTMin_AsyncWorker(
MbPolyCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~PolyCurve_GetTMin_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyCurve * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class PolyCurve_GetPeriod_AsyncWorker : public PromiseWorker {
      public:
          PolyCurve_GetPeriod_AsyncWorker(
MbPolyCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~PolyCurve_GetPeriod_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyCurve * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class PolyCurve_GetWeightCentre_AsyncWorker : public PromiseWorker {
      public:
          PolyCurve_GetWeightCentre_AsyncWorker(
MbPolyCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~PolyCurve_GetWeightCentre_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyCurve * _underlying;
                
                 MbCartPoint * point;
                

        int resultType;
  };


  class PolyCurve_GetLimitPoint_AsyncWorker : public PromiseWorker {
      public:
          PolyCurve_GetLimitPoint_AsyncWorker(
MbPolyCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 ptrdiff_t  number);
          virtual ~PolyCurve_GetLimitPoint_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyCurve * _underlying;                         ptrdiff_t  number;

                
                 MbCartPoint * point;
                

        int resultType;
  };


  class PolyCurve_PointOn_AsyncWorker : public PromiseWorker {
      public:
          PolyCurve_PointOn_AsyncWorker(
MbPolyCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~PolyCurve_PointOn_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyCurve * _underlying;                         double & t;

                
                 MbCartPoint * p;
                

        int resultType;
  };


  class PolyCurve__PointOn_AsyncWorker : public PromiseWorker {
      public:
          PolyCurve__PointOn_AsyncWorker(
MbPolyCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~PolyCurve__PointOn_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyCurve * _underlying;                         double & t;

                
                 MbCartPoint * p;
                

        int resultType;
  };


  class PolyCurve_Explore_AsyncWorker : public PromiseWorker {
      public:
          PolyCurve_Explore_AsyncWorker(
MbPolyCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t,
                                 bool  ext);
          virtual ~PolyCurve_Explore_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyCurve * _underlying;                         double & t;
                         bool  ext;

                
                 MbCartPoint * pnt;
                
                
                 MbVector * fir;
                
                
                 MbVector * sec;
                
                
                 MbVector * thir;
                

        int resultType;
  };


  class PolyCurve_FirstDer_AsyncWorker : public PromiseWorker {
      public:
          PolyCurve_FirstDer_AsyncWorker(
MbPolyCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~PolyCurve_FirstDer_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class PolyCurve__FirstDer_AsyncWorker : public PromiseWorker {
      public:
          PolyCurve__FirstDer_AsyncWorker(
MbPolyCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~PolyCurve__FirstDer_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class PolyCurve_SecondDer_AsyncWorker : public PromiseWorker {
      public:
          PolyCurve_SecondDer_AsyncWorker(
MbPolyCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~PolyCurve_SecondDer_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class PolyCurve__SecondDer_AsyncWorker : public PromiseWorker {
      public:
          PolyCurve__SecondDer_AsyncWorker(
MbPolyCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~PolyCurve__SecondDer_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class PolyCurve_Tangent_AsyncWorker : public PromiseWorker {
      public:
          PolyCurve_Tangent_AsyncWorker(
MbPolyCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~PolyCurve_Tangent_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class PolyCurve__Tangent_AsyncWorker : public PromiseWorker {
      public:
          PolyCurve__Tangent_AsyncWorker(
MbPolyCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~PolyCurve__Tangent_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class PolyCurve_Normal_AsyncWorker : public PromiseWorker {
      public:
          PolyCurve_Normal_AsyncWorker(
MbPolyCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~PolyCurve_Normal_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class PolyCurve__Normal_AsyncWorker : public PromiseWorker {
      public:
          PolyCurve__Normal_AsyncWorker(
MbPolyCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~PolyCurve__Normal_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class PolyCurve_PointRelative_AsyncWorker : public PromiseWorker {
      public:
          PolyCurve_PointRelative_AsyncWorker(
MbPolyCurve * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCartPoint & pnt,
                                 double  eps);
          virtual ~PolyCurve_PointRelative_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyCurve * _underlying;                        const MbCartPoint & pnt;
                         double  eps;

                
                 MbeItemLocation  _result;
                

        int resultType;
  };


  class PolyCurve_PointLocation_AsyncWorker : public PromiseWorker {
      public:
          PolyCurve_PointLocation_AsyncWorker(
MbPolyCurve * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCartPoint & pnt,
                                 double  eps);
          virtual ~PolyCurve_PointLocation_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyCurve * _underlying;                        const MbCartPoint & pnt;
                         double  eps;

                
                 MbeLocation  _result;
                

        int resultType;
  };


  class PolyCurve_IsA_AsyncWorker : public PromiseWorker {
      public:
          PolyCurve_IsA_AsyncWorker(
MbPolyCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~PolyCurve_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyCurve * _underlying;
                
                 MbePlaneType  _result;
                

        int resultType;
  };


  class PolyCurve_Type_AsyncWorker : public PromiseWorker {
      public:
          PolyCurve_Type_AsyncWorker(
MbPolyCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~PolyCurve_Type_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyCurve * _underlying;
                
                 MbePlaneType  _result;
                

        int resultType;
  };


  class PolyCurve_Family_AsyncWorker : public PromiseWorker {
      public:
          PolyCurve_Family_AsyncWorker(
MbPolyCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~PolyCurve_Family_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyCurve * _underlying;
                
                 MbePlaneType  _result;
                

        int resultType;
  };


  class PolyCurve_Move_AsyncWorker : public PromiseWorker {
      public:
          PolyCurve_Move_AsyncWorker(
MbPolyCurve * _underlying,            Napi::Promise::Deferred const &d,
                                const MbVector & to,
                                 MbRegTransform * iReg = NULL);
          virtual ~PolyCurve_Move_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyCurve * _underlying;                        const MbVector & to;
                         MbRegTransform * iReg= NULL;

                
                const MbSurface * newSurface;
                

        int resultType;
  };


  class PolyCurve_Transform_AsyncWorker : public PromiseWorker {
      public:
          PolyCurve_Transform_AsyncWorker(
MbPolyCurve * _underlying,            Napi::Promise::Deferred const &d,
                                const MbMatrix & matr,
                                 MbRegTransform * iReg = NULL,
                                const MbSurface * newSurface = NULL);
          virtual ~PolyCurve_Transform_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyCurve * _underlying;                        const MbMatrix & matr;
                         MbRegTransform * iReg= NULL;
                        const MbSurface * newSurface= NULL;


        int resultType;
  };


  class PolyCurve_Duplicate_AsyncWorker : public PromiseWorker {
      public:
          PolyCurve_Duplicate_AsyncWorker(
MbPolyCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRegDuplicate * dup = NULL);
          virtual ~PolyCurve_Duplicate_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyCurve * _underlying;                         MbRegDuplicate * dup= NULL;

                
                 MbPlaneItem * _result;
                

        int resultType;
  };


  class PolyCurve_AddYourGabaritTo_AsyncWorker : public PromiseWorker {
      public:
          PolyCurve_AddYourGabaritTo_AsyncWorker(
MbPolyCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRect & rect);
          virtual ~PolyCurve_AddYourGabaritTo_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyCurve * _underlying;                         MbRect & rect;


        int resultType;
  };


  class PolyCurve_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          PolyCurve_GetUseCount_AsyncWorker(
MbPolyCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~PolyCurve_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyCurve * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class PolyCurve_AddRef_AsyncWorker : public PromiseWorker {
      public:
          PolyCurve_AddRef_AsyncWorker(
MbPolyCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~PolyCurve_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyCurve * _underlying;

        int resultType;
  };



#endif
