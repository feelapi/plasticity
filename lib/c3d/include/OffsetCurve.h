// This is a generated file, modify: generate/templates/OffsetCurve.h

#ifndef OFFSETCURVE_H
#define OFFSETCURVE_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cur_offset_curve.h>

#include "Curve.h"
#include "PromiseWorker.h"

class OffsetCurve : public
  Napi::ObjectWrap<OffsetCurve>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbOffsetCurve *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        OffsetCurve(const Napi::CallbackInfo& info);

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

    MbOffsetCurve * _underlying;

    ~OffsetCurve();


  private:

};


  class OffsetCurve_Inverse_AsyncWorker : public PromiseWorker {
      public:
          OffsetCurve_Inverse_AsyncWorker(
MbOffsetCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRegTransform * iReg = NULL);
          virtual ~OffsetCurve_Inverse_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbOffsetCurve * _underlying;                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class OffsetCurve_Trimmed_AsyncWorker : public PromiseWorker {
      public:
          OffsetCurve_Trimmed_AsyncWorker(
MbOffsetCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double  t1,
                                 double  t2,
                                 int  sense);
          virtual ~OffsetCurve_Trimmed_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbOffsetCurve * _underlying;                         double  t1;
                         double  t2;
                         int  sense;

                
                 MbCurve * _result;
                

        int resultType;
  };


  class OffsetCurve_IsStraight_AsyncWorker : public PromiseWorker {
      public:
          OffsetCurve_IsStraight_AsyncWorker(
MbOffsetCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 bool  ignoreParams = false);
          virtual ~OffsetCurve_IsStraight_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbOffsetCurve * _underlying;                         bool  ignoreParams= false;

                
                 bool  _result;
                

        int resultType;
  };


  class OffsetCurve_IsClosed_AsyncWorker : public PromiseWorker {
      public:
          OffsetCurve_IsClosed_AsyncWorker(
MbOffsetCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~OffsetCurve_IsClosed_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbOffsetCurve * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class OffsetCurve_IsBounded_AsyncWorker : public PromiseWorker {
      public:
          OffsetCurve_IsBounded_AsyncWorker(
MbOffsetCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~OffsetCurve_IsBounded_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbOffsetCurve * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class OffsetCurve_GetTMax_AsyncWorker : public PromiseWorker {
      public:
          OffsetCurve_GetTMax_AsyncWorker(
MbOffsetCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~OffsetCurve_GetTMax_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbOffsetCurve * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class OffsetCurve_GetTMin_AsyncWorker : public PromiseWorker {
      public:
          OffsetCurve_GetTMin_AsyncWorker(
MbOffsetCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~OffsetCurve_GetTMin_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbOffsetCurve * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class OffsetCurve_GetPeriod_AsyncWorker : public PromiseWorker {
      public:
          OffsetCurve_GetPeriod_AsyncWorker(
MbOffsetCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~OffsetCurve_GetPeriod_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbOffsetCurve * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class OffsetCurve_GetWeightCentre_AsyncWorker : public PromiseWorker {
      public:
          OffsetCurve_GetWeightCentre_AsyncWorker(
MbOffsetCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~OffsetCurve_GetWeightCentre_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbOffsetCurve * _underlying;
                
                 MbCartPoint * point;
                

        int resultType;
  };


  class OffsetCurve_GetLimitPoint_AsyncWorker : public PromiseWorker {
      public:
          OffsetCurve_GetLimitPoint_AsyncWorker(
MbOffsetCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 ptrdiff_t  number);
          virtual ~OffsetCurve_GetLimitPoint_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbOffsetCurve * _underlying;                         ptrdiff_t  number;

                
                 MbCartPoint * point;
                

        int resultType;
  };


  class OffsetCurve_PointOn_AsyncWorker : public PromiseWorker {
      public:
          OffsetCurve_PointOn_AsyncWorker(
MbOffsetCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~OffsetCurve_PointOn_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbOffsetCurve * _underlying;                         double & t;

                
                 MbCartPoint * p;
                

        int resultType;
  };


  class OffsetCurve__PointOn_AsyncWorker : public PromiseWorker {
      public:
          OffsetCurve__PointOn_AsyncWorker(
MbOffsetCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~OffsetCurve__PointOn_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbOffsetCurve * _underlying;                         double & t;

                
                 MbCartPoint * p;
                

        int resultType;
  };


  class OffsetCurve_Explore_AsyncWorker : public PromiseWorker {
      public:
          OffsetCurve_Explore_AsyncWorker(
MbOffsetCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t,
                                 bool  ext);
          virtual ~OffsetCurve_Explore_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbOffsetCurve * _underlying;                         double & t;
                         bool  ext;

                
                 MbCartPoint * pnt;
                
                
                 MbVector * fir;
                
                
                 MbVector * sec;
                
                
                 MbVector * thir;
                

        int resultType;
  };


  class OffsetCurve_FirstDer_AsyncWorker : public PromiseWorker {
      public:
          OffsetCurve_FirstDer_AsyncWorker(
MbOffsetCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~OffsetCurve_FirstDer_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbOffsetCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class OffsetCurve__FirstDer_AsyncWorker : public PromiseWorker {
      public:
          OffsetCurve__FirstDer_AsyncWorker(
MbOffsetCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~OffsetCurve__FirstDer_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbOffsetCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class OffsetCurve_SecondDer_AsyncWorker : public PromiseWorker {
      public:
          OffsetCurve_SecondDer_AsyncWorker(
MbOffsetCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~OffsetCurve_SecondDer_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbOffsetCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class OffsetCurve__SecondDer_AsyncWorker : public PromiseWorker {
      public:
          OffsetCurve__SecondDer_AsyncWorker(
MbOffsetCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~OffsetCurve__SecondDer_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbOffsetCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class OffsetCurve_Tangent_AsyncWorker : public PromiseWorker {
      public:
          OffsetCurve_Tangent_AsyncWorker(
MbOffsetCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~OffsetCurve_Tangent_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbOffsetCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class OffsetCurve__Tangent_AsyncWorker : public PromiseWorker {
      public:
          OffsetCurve__Tangent_AsyncWorker(
MbOffsetCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~OffsetCurve__Tangent_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbOffsetCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class OffsetCurve_Normal_AsyncWorker : public PromiseWorker {
      public:
          OffsetCurve_Normal_AsyncWorker(
MbOffsetCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~OffsetCurve_Normal_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbOffsetCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class OffsetCurve__Normal_AsyncWorker : public PromiseWorker {
      public:
          OffsetCurve__Normal_AsyncWorker(
MbOffsetCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~OffsetCurve__Normal_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbOffsetCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class OffsetCurve_PointRelative_AsyncWorker : public PromiseWorker {
      public:
          OffsetCurve_PointRelative_AsyncWorker(
MbOffsetCurve * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCartPoint & pnt,
                                 double  eps);
          virtual ~OffsetCurve_PointRelative_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbOffsetCurve * _underlying;                        const MbCartPoint & pnt;
                         double  eps;

                
                 MbeItemLocation  _result;
                

        int resultType;
  };


  class OffsetCurve_PointLocation_AsyncWorker : public PromiseWorker {
      public:
          OffsetCurve_PointLocation_AsyncWorker(
MbOffsetCurve * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCartPoint & pnt,
                                 double  eps);
          virtual ~OffsetCurve_PointLocation_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbOffsetCurve * _underlying;                        const MbCartPoint & pnt;
                         double  eps;

                
                 MbeLocation  _result;
                

        int resultType;
  };


  class OffsetCurve_IsA_AsyncWorker : public PromiseWorker {
      public:
          OffsetCurve_IsA_AsyncWorker(
MbOffsetCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~OffsetCurve_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbOffsetCurve * _underlying;
                
                 MbePlaneType  _result;
                

        int resultType;
  };


  class OffsetCurve_Type_AsyncWorker : public PromiseWorker {
      public:
          OffsetCurve_Type_AsyncWorker(
MbOffsetCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~OffsetCurve_Type_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbOffsetCurve * _underlying;
                
                 MbePlaneType  _result;
                

        int resultType;
  };


  class OffsetCurve_Family_AsyncWorker : public PromiseWorker {
      public:
          OffsetCurve_Family_AsyncWorker(
MbOffsetCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~OffsetCurve_Family_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbOffsetCurve * _underlying;
                
                 MbePlaneType  _result;
                

        int resultType;
  };


  class OffsetCurve_Move_AsyncWorker : public PromiseWorker {
      public:
          OffsetCurve_Move_AsyncWorker(
MbOffsetCurve * _underlying,            Napi::Promise::Deferred const &d,
                                const MbVector & to,
                                 MbRegTransform * iReg = NULL);
          virtual ~OffsetCurve_Move_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbOffsetCurve * _underlying;                        const MbVector & to;
                         MbRegTransform * iReg= NULL;

                
                const MbSurface * newSurface;
                

        int resultType;
  };


  class OffsetCurve_Transform_AsyncWorker : public PromiseWorker {
      public:
          OffsetCurve_Transform_AsyncWorker(
MbOffsetCurve * _underlying,            Napi::Promise::Deferred const &d,
                                const MbMatrix & matr,
                                 MbRegTransform * iReg = NULL,
                                const MbSurface * newSurface = NULL);
          virtual ~OffsetCurve_Transform_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbOffsetCurve * _underlying;                        const MbMatrix & matr;
                         MbRegTransform * iReg= NULL;
                        const MbSurface * newSurface= NULL;


        int resultType;
  };


  class OffsetCurve_Duplicate_AsyncWorker : public PromiseWorker {
      public:
          OffsetCurve_Duplicate_AsyncWorker(
MbOffsetCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRegDuplicate * dup = NULL);
          virtual ~OffsetCurve_Duplicate_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbOffsetCurve * _underlying;                         MbRegDuplicate * dup= NULL;

                
                 MbPlaneItem * _result;
                

        int resultType;
  };


  class OffsetCurve_AddYourGabaritTo_AsyncWorker : public PromiseWorker {
      public:
          OffsetCurve_AddYourGabaritTo_AsyncWorker(
MbOffsetCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRect & rect);
          virtual ~OffsetCurve_AddYourGabaritTo_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbOffsetCurve * _underlying;                         MbRect & rect;


        int resultType;
  };


  class OffsetCurve_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          OffsetCurve_GetUseCount_AsyncWorker(
MbOffsetCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~OffsetCurve_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbOffsetCurve * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class OffsetCurve_AddRef_AsyncWorker : public PromiseWorker {
      public:
          OffsetCurve_AddRef_AsyncWorker(
MbOffsetCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~OffsetCurve_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbOffsetCurve * _underlying;

        int resultType;
  };



#endif
