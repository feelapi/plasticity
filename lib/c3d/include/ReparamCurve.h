// This is a generated file, modify: generate/templates/ReparamCurve.h

#ifndef REPARAMCURVE_H
#define REPARAMCURVE_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cur_reparam_curve.h>

#include "Curve.h"
#include "PromiseWorker.h"

class ReparamCurve : public
  Napi::ObjectWrap<ReparamCurve>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbReparamCurve *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        ReparamCurve(const Napi::CallbackInfo& info);

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

    MbReparamCurve * _underlying;

    ~ReparamCurve();


  private:

};


  class ReparamCurve_Inverse_AsyncWorker : public PromiseWorker {
      public:
          ReparamCurve_Inverse_AsyncWorker(
MbReparamCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRegTransform * iReg = NULL);
          virtual ~ReparamCurve_Inverse_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbReparamCurve * _underlying;                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class ReparamCurve_Trimmed_AsyncWorker : public PromiseWorker {
      public:
          ReparamCurve_Trimmed_AsyncWorker(
MbReparamCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double  t1,
                                 double  t2,
                                 int  sense);
          virtual ~ReparamCurve_Trimmed_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbReparamCurve * _underlying;                         double  t1;
                         double  t2;
                         int  sense;

                
                 MbCurve * _result;
                

        int resultType;
  };


  class ReparamCurve_IsStraight_AsyncWorker : public PromiseWorker {
      public:
          ReparamCurve_IsStraight_AsyncWorker(
MbReparamCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 bool  ignoreParams = false);
          virtual ~ReparamCurve_IsStraight_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbReparamCurve * _underlying;                         bool  ignoreParams= false;

                
                 bool  _result;
                

        int resultType;
  };


  class ReparamCurve_IsClosed_AsyncWorker : public PromiseWorker {
      public:
          ReparamCurve_IsClosed_AsyncWorker(
MbReparamCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ReparamCurve_IsClosed_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbReparamCurve * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class ReparamCurve_IsBounded_AsyncWorker : public PromiseWorker {
      public:
          ReparamCurve_IsBounded_AsyncWorker(
MbReparamCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ReparamCurve_IsBounded_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbReparamCurve * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class ReparamCurve_GetTMax_AsyncWorker : public PromiseWorker {
      public:
          ReparamCurve_GetTMax_AsyncWorker(
MbReparamCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ReparamCurve_GetTMax_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbReparamCurve * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class ReparamCurve_GetTMin_AsyncWorker : public PromiseWorker {
      public:
          ReparamCurve_GetTMin_AsyncWorker(
MbReparamCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ReparamCurve_GetTMin_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbReparamCurve * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class ReparamCurve_GetPeriod_AsyncWorker : public PromiseWorker {
      public:
          ReparamCurve_GetPeriod_AsyncWorker(
MbReparamCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ReparamCurve_GetPeriod_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbReparamCurve * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class ReparamCurve_GetWeightCentre_AsyncWorker : public PromiseWorker {
      public:
          ReparamCurve_GetWeightCentre_AsyncWorker(
MbReparamCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ReparamCurve_GetWeightCentre_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbReparamCurve * _underlying;
                
                 MbCartPoint * point;
                

        int resultType;
  };


  class ReparamCurve_GetLimitPoint_AsyncWorker : public PromiseWorker {
      public:
          ReparamCurve_GetLimitPoint_AsyncWorker(
MbReparamCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 ptrdiff_t  number);
          virtual ~ReparamCurve_GetLimitPoint_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbReparamCurve * _underlying;                         ptrdiff_t  number;

                
                 MbCartPoint * point;
                

        int resultType;
  };


  class ReparamCurve_PointOn_AsyncWorker : public PromiseWorker {
      public:
          ReparamCurve_PointOn_AsyncWorker(
MbReparamCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~ReparamCurve_PointOn_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbReparamCurve * _underlying;                         double & t;

                
                 MbCartPoint * p;
                

        int resultType;
  };


  class ReparamCurve__PointOn_AsyncWorker : public PromiseWorker {
      public:
          ReparamCurve__PointOn_AsyncWorker(
MbReparamCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~ReparamCurve__PointOn_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbReparamCurve * _underlying;                         double & t;

                
                 MbCartPoint * p;
                

        int resultType;
  };


  class ReparamCurve_Explore_AsyncWorker : public PromiseWorker {
      public:
          ReparamCurve_Explore_AsyncWorker(
MbReparamCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t,
                                 bool  ext);
          virtual ~ReparamCurve_Explore_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbReparamCurve * _underlying;                         double & t;
                         bool  ext;

                
                 MbCartPoint * pnt;
                
                
                 MbVector * fir;
                
                
                 MbVector * sec;
                
                
                 MbVector * thir;
                

        int resultType;
  };


  class ReparamCurve_FirstDer_AsyncWorker : public PromiseWorker {
      public:
          ReparamCurve_FirstDer_AsyncWorker(
MbReparamCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~ReparamCurve_FirstDer_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbReparamCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class ReparamCurve__FirstDer_AsyncWorker : public PromiseWorker {
      public:
          ReparamCurve__FirstDer_AsyncWorker(
MbReparamCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~ReparamCurve__FirstDer_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbReparamCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class ReparamCurve_SecondDer_AsyncWorker : public PromiseWorker {
      public:
          ReparamCurve_SecondDer_AsyncWorker(
MbReparamCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~ReparamCurve_SecondDer_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbReparamCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class ReparamCurve__SecondDer_AsyncWorker : public PromiseWorker {
      public:
          ReparamCurve__SecondDer_AsyncWorker(
MbReparamCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~ReparamCurve__SecondDer_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbReparamCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class ReparamCurve_Tangent_AsyncWorker : public PromiseWorker {
      public:
          ReparamCurve_Tangent_AsyncWorker(
MbReparamCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~ReparamCurve_Tangent_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbReparamCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class ReparamCurve__Tangent_AsyncWorker : public PromiseWorker {
      public:
          ReparamCurve__Tangent_AsyncWorker(
MbReparamCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~ReparamCurve__Tangent_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbReparamCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class ReparamCurve_Normal_AsyncWorker : public PromiseWorker {
      public:
          ReparamCurve_Normal_AsyncWorker(
MbReparamCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~ReparamCurve_Normal_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbReparamCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class ReparamCurve__Normal_AsyncWorker : public PromiseWorker {
      public:
          ReparamCurve__Normal_AsyncWorker(
MbReparamCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~ReparamCurve__Normal_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbReparamCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class ReparamCurve_PointRelative_AsyncWorker : public PromiseWorker {
      public:
          ReparamCurve_PointRelative_AsyncWorker(
MbReparamCurve * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCartPoint & pnt,
                                 double  eps);
          virtual ~ReparamCurve_PointRelative_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbReparamCurve * _underlying;                        const MbCartPoint & pnt;
                         double  eps;

                
                 MbeItemLocation  _result;
                

        int resultType;
  };


  class ReparamCurve_PointLocation_AsyncWorker : public PromiseWorker {
      public:
          ReparamCurve_PointLocation_AsyncWorker(
MbReparamCurve * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCartPoint & pnt,
                                 double  eps);
          virtual ~ReparamCurve_PointLocation_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbReparamCurve * _underlying;                        const MbCartPoint & pnt;
                         double  eps;

                
                 MbeLocation  _result;
                

        int resultType;
  };


  class ReparamCurve_IsA_AsyncWorker : public PromiseWorker {
      public:
          ReparamCurve_IsA_AsyncWorker(
MbReparamCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ReparamCurve_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbReparamCurve * _underlying;
                
                 MbePlaneType  _result;
                

        int resultType;
  };


  class ReparamCurve_Type_AsyncWorker : public PromiseWorker {
      public:
          ReparamCurve_Type_AsyncWorker(
MbReparamCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ReparamCurve_Type_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbReparamCurve * _underlying;
                
                 MbePlaneType  _result;
                

        int resultType;
  };


  class ReparamCurve_Family_AsyncWorker : public PromiseWorker {
      public:
          ReparamCurve_Family_AsyncWorker(
MbReparamCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ReparamCurve_Family_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbReparamCurve * _underlying;
                
                 MbePlaneType  _result;
                

        int resultType;
  };


  class ReparamCurve_Move_AsyncWorker : public PromiseWorker {
      public:
          ReparamCurve_Move_AsyncWorker(
MbReparamCurve * _underlying,            Napi::Promise::Deferred const &d,
                                const MbVector & to,
                                 MbRegTransform * iReg = NULL);
          virtual ~ReparamCurve_Move_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbReparamCurve * _underlying;                        const MbVector & to;
                         MbRegTransform * iReg= NULL;

                
                const MbSurface * newSurface;
                

        int resultType;
  };


  class ReparamCurve_Transform_AsyncWorker : public PromiseWorker {
      public:
          ReparamCurve_Transform_AsyncWorker(
MbReparamCurve * _underlying,            Napi::Promise::Deferred const &d,
                                const MbMatrix & matr,
                                 MbRegTransform * iReg = NULL,
                                const MbSurface * newSurface = NULL);
          virtual ~ReparamCurve_Transform_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbReparamCurve * _underlying;                        const MbMatrix & matr;
                         MbRegTransform * iReg= NULL;
                        const MbSurface * newSurface= NULL;


        int resultType;
  };


  class ReparamCurve_Duplicate_AsyncWorker : public PromiseWorker {
      public:
          ReparamCurve_Duplicate_AsyncWorker(
MbReparamCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRegDuplicate * dup = NULL);
          virtual ~ReparamCurve_Duplicate_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbReparamCurve * _underlying;                         MbRegDuplicate * dup= NULL;

                
                 MbPlaneItem * _result;
                

        int resultType;
  };


  class ReparamCurve_AddYourGabaritTo_AsyncWorker : public PromiseWorker {
      public:
          ReparamCurve_AddYourGabaritTo_AsyncWorker(
MbReparamCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRect & rect);
          virtual ~ReparamCurve_AddYourGabaritTo_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbReparamCurve * _underlying;                         MbRect & rect;


        int resultType;
  };


  class ReparamCurve_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          ReparamCurve_GetUseCount_AsyncWorker(
MbReparamCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ReparamCurve_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbReparamCurve * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class ReparamCurve_AddRef_AsyncWorker : public PromiseWorker {
      public:
          ReparamCurve_AddRef_AsyncWorker(
MbReparamCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~ReparamCurve_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbReparamCurve * _underlying;

        int resultType;
  };



#endif
