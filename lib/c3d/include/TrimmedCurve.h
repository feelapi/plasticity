// This is a generated file, modify: generate/templates/TrimmedCurve.h

#ifndef TRIMMEDCURVE_H
#define TRIMMEDCURVE_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cur_trimmed_curve.h>

#include "Curve.h"
#include "PromiseWorker.h"

class TrimmedCurve : public
  Napi::ObjectWrap<TrimmedCurve>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbTrimmedCurve *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        TrimmedCurve(const Napi::CallbackInfo& info);

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

    MbTrimmedCurve * _underlying;

    ~TrimmedCurve();


  private:

};


  class TrimmedCurve_Inverse_AsyncWorker : public PromiseWorker {
      public:
          TrimmedCurve_Inverse_AsyncWorker(
MbTrimmedCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRegTransform * iReg = NULL);
          virtual ~TrimmedCurve_Inverse_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTrimmedCurve * _underlying;                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class TrimmedCurve_Trimmed_AsyncWorker : public PromiseWorker {
      public:
          TrimmedCurve_Trimmed_AsyncWorker(
MbTrimmedCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double  t1,
                                 double  t2,
                                 int  sense);
          virtual ~TrimmedCurve_Trimmed_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTrimmedCurve * _underlying;                         double  t1;
                         double  t2;
                         int  sense;

                
                 MbCurve * _result;
                

        int resultType;
  };


  class TrimmedCurve_IsStraight_AsyncWorker : public PromiseWorker {
      public:
          TrimmedCurve_IsStraight_AsyncWorker(
MbTrimmedCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 bool  ignoreParams = false);
          virtual ~TrimmedCurve_IsStraight_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTrimmedCurve * _underlying;                         bool  ignoreParams= false;

                
                 bool  _result;
                

        int resultType;
  };


  class TrimmedCurve_IsClosed_AsyncWorker : public PromiseWorker {
      public:
          TrimmedCurve_IsClosed_AsyncWorker(
MbTrimmedCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~TrimmedCurve_IsClosed_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTrimmedCurve * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class TrimmedCurve_IsBounded_AsyncWorker : public PromiseWorker {
      public:
          TrimmedCurve_IsBounded_AsyncWorker(
MbTrimmedCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~TrimmedCurve_IsBounded_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTrimmedCurve * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class TrimmedCurve_GetTMax_AsyncWorker : public PromiseWorker {
      public:
          TrimmedCurve_GetTMax_AsyncWorker(
MbTrimmedCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~TrimmedCurve_GetTMax_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTrimmedCurve * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class TrimmedCurve_GetTMin_AsyncWorker : public PromiseWorker {
      public:
          TrimmedCurve_GetTMin_AsyncWorker(
MbTrimmedCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~TrimmedCurve_GetTMin_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTrimmedCurve * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class TrimmedCurve_GetPeriod_AsyncWorker : public PromiseWorker {
      public:
          TrimmedCurve_GetPeriod_AsyncWorker(
MbTrimmedCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~TrimmedCurve_GetPeriod_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTrimmedCurve * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class TrimmedCurve_GetWeightCentre_AsyncWorker : public PromiseWorker {
      public:
          TrimmedCurve_GetWeightCentre_AsyncWorker(
MbTrimmedCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~TrimmedCurve_GetWeightCentre_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTrimmedCurve * _underlying;
                
                 MbCartPoint * point;
                

        int resultType;
  };


  class TrimmedCurve_GetLimitPoint_AsyncWorker : public PromiseWorker {
      public:
          TrimmedCurve_GetLimitPoint_AsyncWorker(
MbTrimmedCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 ptrdiff_t  number);
          virtual ~TrimmedCurve_GetLimitPoint_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTrimmedCurve * _underlying;                         ptrdiff_t  number;

                
                 MbCartPoint * point;
                

        int resultType;
  };


  class TrimmedCurve_PointOn_AsyncWorker : public PromiseWorker {
      public:
          TrimmedCurve_PointOn_AsyncWorker(
MbTrimmedCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~TrimmedCurve_PointOn_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTrimmedCurve * _underlying;                         double & t;

                
                 MbCartPoint * p;
                

        int resultType;
  };


  class TrimmedCurve__PointOn_AsyncWorker : public PromiseWorker {
      public:
          TrimmedCurve__PointOn_AsyncWorker(
MbTrimmedCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~TrimmedCurve__PointOn_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTrimmedCurve * _underlying;                         double & t;

                
                 MbCartPoint * p;
                

        int resultType;
  };


  class TrimmedCurve_Explore_AsyncWorker : public PromiseWorker {
      public:
          TrimmedCurve_Explore_AsyncWorker(
MbTrimmedCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t,
                                 bool  ext);
          virtual ~TrimmedCurve_Explore_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTrimmedCurve * _underlying;                         double & t;
                         bool  ext;

                
                 MbCartPoint * pnt;
                
                
                 MbVector * fir;
                
                
                 MbVector * sec;
                
                
                 MbVector * thir;
                

        int resultType;
  };


  class TrimmedCurve_FirstDer_AsyncWorker : public PromiseWorker {
      public:
          TrimmedCurve_FirstDer_AsyncWorker(
MbTrimmedCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~TrimmedCurve_FirstDer_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTrimmedCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class TrimmedCurve__FirstDer_AsyncWorker : public PromiseWorker {
      public:
          TrimmedCurve__FirstDer_AsyncWorker(
MbTrimmedCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~TrimmedCurve__FirstDer_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTrimmedCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class TrimmedCurve_SecondDer_AsyncWorker : public PromiseWorker {
      public:
          TrimmedCurve_SecondDer_AsyncWorker(
MbTrimmedCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~TrimmedCurve_SecondDer_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTrimmedCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class TrimmedCurve__SecondDer_AsyncWorker : public PromiseWorker {
      public:
          TrimmedCurve__SecondDer_AsyncWorker(
MbTrimmedCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~TrimmedCurve__SecondDer_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTrimmedCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class TrimmedCurve_Tangent_AsyncWorker : public PromiseWorker {
      public:
          TrimmedCurve_Tangent_AsyncWorker(
MbTrimmedCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~TrimmedCurve_Tangent_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTrimmedCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class TrimmedCurve__Tangent_AsyncWorker : public PromiseWorker {
      public:
          TrimmedCurve__Tangent_AsyncWorker(
MbTrimmedCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~TrimmedCurve__Tangent_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTrimmedCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class TrimmedCurve_Normal_AsyncWorker : public PromiseWorker {
      public:
          TrimmedCurve_Normal_AsyncWorker(
MbTrimmedCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~TrimmedCurve_Normal_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTrimmedCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class TrimmedCurve__Normal_AsyncWorker : public PromiseWorker {
      public:
          TrimmedCurve__Normal_AsyncWorker(
MbTrimmedCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~TrimmedCurve__Normal_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTrimmedCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class TrimmedCurve_PointRelative_AsyncWorker : public PromiseWorker {
      public:
          TrimmedCurve_PointRelative_AsyncWorker(
MbTrimmedCurve * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCartPoint & pnt,
                                 double  eps);
          virtual ~TrimmedCurve_PointRelative_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTrimmedCurve * _underlying;                        const MbCartPoint & pnt;
                         double  eps;

                
                 MbeItemLocation  _result;
                

        int resultType;
  };


  class TrimmedCurve_PointLocation_AsyncWorker : public PromiseWorker {
      public:
          TrimmedCurve_PointLocation_AsyncWorker(
MbTrimmedCurve * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCartPoint & pnt,
                                 double  eps);
          virtual ~TrimmedCurve_PointLocation_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTrimmedCurve * _underlying;                        const MbCartPoint & pnt;
                         double  eps;

                
                 MbeLocation  _result;
                

        int resultType;
  };


  class TrimmedCurve_IsA_AsyncWorker : public PromiseWorker {
      public:
          TrimmedCurve_IsA_AsyncWorker(
MbTrimmedCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~TrimmedCurve_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTrimmedCurve * _underlying;
                
                 MbePlaneType  _result;
                

        int resultType;
  };


  class TrimmedCurve_Type_AsyncWorker : public PromiseWorker {
      public:
          TrimmedCurve_Type_AsyncWorker(
MbTrimmedCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~TrimmedCurve_Type_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTrimmedCurve * _underlying;
                
                 MbePlaneType  _result;
                

        int resultType;
  };


  class TrimmedCurve_Family_AsyncWorker : public PromiseWorker {
      public:
          TrimmedCurve_Family_AsyncWorker(
MbTrimmedCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~TrimmedCurve_Family_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTrimmedCurve * _underlying;
                
                 MbePlaneType  _result;
                

        int resultType;
  };


  class TrimmedCurve_Move_AsyncWorker : public PromiseWorker {
      public:
          TrimmedCurve_Move_AsyncWorker(
MbTrimmedCurve * _underlying,            Napi::Promise::Deferred const &d,
                                const MbVector & to,
                                 MbRegTransform * iReg = NULL);
          virtual ~TrimmedCurve_Move_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTrimmedCurve * _underlying;                        const MbVector & to;
                         MbRegTransform * iReg= NULL;

                
                const MbSurface * newSurface;
                

        int resultType;
  };


  class TrimmedCurve_Transform_AsyncWorker : public PromiseWorker {
      public:
          TrimmedCurve_Transform_AsyncWorker(
MbTrimmedCurve * _underlying,            Napi::Promise::Deferred const &d,
                                const MbMatrix & matr,
                                 MbRegTransform * iReg = NULL,
                                const MbSurface * newSurface = NULL);
          virtual ~TrimmedCurve_Transform_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTrimmedCurve * _underlying;                        const MbMatrix & matr;
                         MbRegTransform * iReg= NULL;
                        const MbSurface * newSurface= NULL;


        int resultType;
  };


  class TrimmedCurve_Duplicate_AsyncWorker : public PromiseWorker {
      public:
          TrimmedCurve_Duplicate_AsyncWorker(
MbTrimmedCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRegDuplicate * dup = NULL);
          virtual ~TrimmedCurve_Duplicate_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTrimmedCurve * _underlying;                         MbRegDuplicate * dup= NULL;

                
                 MbPlaneItem * _result;
                

        int resultType;
  };


  class TrimmedCurve_AddYourGabaritTo_AsyncWorker : public PromiseWorker {
      public:
          TrimmedCurve_AddYourGabaritTo_AsyncWorker(
MbTrimmedCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRect & rect);
          virtual ~TrimmedCurve_AddYourGabaritTo_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTrimmedCurve * _underlying;                         MbRect & rect;


        int resultType;
  };


  class TrimmedCurve_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          TrimmedCurve_GetUseCount_AsyncWorker(
MbTrimmedCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~TrimmedCurve_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTrimmedCurve * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class TrimmedCurve_AddRef_AsyncWorker : public PromiseWorker {
      public:
          TrimmedCurve_AddRef_AsyncWorker(
MbTrimmedCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~TrimmedCurve_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTrimmedCurve * _underlying;

        int resultType;
  };



#endif
