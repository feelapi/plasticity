// This is a generated file, modify: generate/templates/Arc.h

#ifndef ARC_H
#define ARC_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cur_arc.h>

#include "Curve.h"
#include "PromiseWorker.h"

class Arc : public
  Napi::ObjectWrap<Arc>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbArc *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        Arc(const Napi::CallbackInfo& info);

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

    MbArc * _underlying;

    ~Arc();


  private:

};


  class Arc_Inverse_AsyncWorker : public PromiseWorker {
      public:
          Arc_Inverse_AsyncWorker(
MbArc * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRegTransform * iReg = NULL);
          virtual ~Arc_Inverse_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbArc * _underlying;                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class Arc_Trimmed_AsyncWorker : public PromiseWorker {
      public:
          Arc_Trimmed_AsyncWorker(
MbArc * _underlying,            Napi::Promise::Deferred const &d,
                                 double  t1,
                                 double  t2,
                                 int  sense);
          virtual ~Arc_Trimmed_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbArc * _underlying;                         double  t1;
                         double  t2;
                         int  sense;

                
                 MbCurve * _result;
                

        int resultType;
  };


  class Arc_IsStraight_AsyncWorker : public PromiseWorker {
      public:
          Arc_IsStraight_AsyncWorker(
MbArc * _underlying,            Napi::Promise::Deferred const &d,
                                 bool  ignoreParams = false);
          virtual ~Arc_IsStraight_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbArc * _underlying;                         bool  ignoreParams= false;

                
                 bool  _result;
                

        int resultType;
  };


  class Arc_IsClosed_AsyncWorker : public PromiseWorker {
      public:
          Arc_IsClosed_AsyncWorker(
MbArc * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Arc_IsClosed_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbArc * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class Arc_IsBounded_AsyncWorker : public PromiseWorker {
      public:
          Arc_IsBounded_AsyncWorker(
MbArc * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Arc_IsBounded_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbArc * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class Arc_GetTMax_AsyncWorker : public PromiseWorker {
      public:
          Arc_GetTMax_AsyncWorker(
MbArc * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Arc_GetTMax_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbArc * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Arc_GetTMin_AsyncWorker : public PromiseWorker {
      public:
          Arc_GetTMin_AsyncWorker(
MbArc * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Arc_GetTMin_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbArc * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Arc_GetPeriod_AsyncWorker : public PromiseWorker {
      public:
          Arc_GetPeriod_AsyncWorker(
MbArc * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Arc_GetPeriod_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbArc * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Arc_GetWeightCentre_AsyncWorker : public PromiseWorker {
      public:
          Arc_GetWeightCentre_AsyncWorker(
MbArc * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Arc_GetWeightCentre_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbArc * _underlying;
                
                 MbCartPoint * point;
                

        int resultType;
  };


  class Arc_GetLimitPoint_AsyncWorker : public PromiseWorker {
      public:
          Arc_GetLimitPoint_AsyncWorker(
MbArc * _underlying,            Napi::Promise::Deferred const &d,
                                 ptrdiff_t  number);
          virtual ~Arc_GetLimitPoint_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbArc * _underlying;                         ptrdiff_t  number;

                
                 MbCartPoint * point;
                

        int resultType;
  };


  class Arc_PointOn_AsyncWorker : public PromiseWorker {
      public:
          Arc_PointOn_AsyncWorker(
MbArc * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~Arc_PointOn_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbArc * _underlying;                         double & t;

                
                 MbCartPoint * p;
                

        int resultType;
  };


  class Arc__PointOn_AsyncWorker : public PromiseWorker {
      public:
          Arc__PointOn_AsyncWorker(
MbArc * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~Arc__PointOn_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbArc * _underlying;                         double & t;

                
                 MbCartPoint * p;
                

        int resultType;
  };


  class Arc_Explore_AsyncWorker : public PromiseWorker {
      public:
          Arc_Explore_AsyncWorker(
MbArc * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t,
                                 bool  ext);
          virtual ~Arc_Explore_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbArc * _underlying;                         double & t;
                         bool  ext;

                
                 MbCartPoint * pnt;
                
                
                 MbVector * fir;
                
                
                 MbVector * sec;
                
                
                 MbVector * thir;
                

        int resultType;
  };


  class Arc_FirstDer_AsyncWorker : public PromiseWorker {
      public:
          Arc_FirstDer_AsyncWorker(
MbArc * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~Arc_FirstDer_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbArc * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class Arc__FirstDer_AsyncWorker : public PromiseWorker {
      public:
          Arc__FirstDer_AsyncWorker(
MbArc * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~Arc__FirstDer_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbArc * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class Arc_SecondDer_AsyncWorker : public PromiseWorker {
      public:
          Arc_SecondDer_AsyncWorker(
MbArc * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~Arc_SecondDer_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbArc * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class Arc__SecondDer_AsyncWorker : public PromiseWorker {
      public:
          Arc__SecondDer_AsyncWorker(
MbArc * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~Arc__SecondDer_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbArc * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class Arc_Tangent_AsyncWorker : public PromiseWorker {
      public:
          Arc_Tangent_AsyncWorker(
MbArc * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~Arc_Tangent_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbArc * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class Arc__Tangent_AsyncWorker : public PromiseWorker {
      public:
          Arc__Tangent_AsyncWorker(
MbArc * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~Arc__Tangent_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbArc * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class Arc_Normal_AsyncWorker : public PromiseWorker {
      public:
          Arc_Normal_AsyncWorker(
MbArc * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~Arc_Normal_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbArc * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class Arc__Normal_AsyncWorker : public PromiseWorker {
      public:
          Arc__Normal_AsyncWorker(
MbArc * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~Arc__Normal_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbArc * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class Arc_PointRelative_AsyncWorker : public PromiseWorker {
      public:
          Arc_PointRelative_AsyncWorker(
MbArc * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCartPoint & pnt,
                                 double  eps);
          virtual ~Arc_PointRelative_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbArc * _underlying;                        const MbCartPoint & pnt;
                         double  eps;

                
                 MbeItemLocation  _result;
                

        int resultType;
  };


  class Arc_PointLocation_AsyncWorker : public PromiseWorker {
      public:
          Arc_PointLocation_AsyncWorker(
MbArc * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCartPoint & pnt,
                                 double  eps);
          virtual ~Arc_PointLocation_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbArc * _underlying;                        const MbCartPoint & pnt;
                         double  eps;

                
                 MbeLocation  _result;
                

        int resultType;
  };


  class Arc_IsA_AsyncWorker : public PromiseWorker {
      public:
          Arc_IsA_AsyncWorker(
MbArc * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Arc_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbArc * _underlying;
                
                 MbePlaneType  _result;
                

        int resultType;
  };


  class Arc_Type_AsyncWorker : public PromiseWorker {
      public:
          Arc_Type_AsyncWorker(
MbArc * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Arc_Type_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbArc * _underlying;
                
                 MbePlaneType  _result;
                

        int resultType;
  };


  class Arc_Family_AsyncWorker : public PromiseWorker {
      public:
          Arc_Family_AsyncWorker(
MbArc * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Arc_Family_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbArc * _underlying;
                
                 MbePlaneType  _result;
                

        int resultType;
  };


  class Arc_Move_AsyncWorker : public PromiseWorker {
      public:
          Arc_Move_AsyncWorker(
MbArc * _underlying,            Napi::Promise::Deferred const &d,
                                const MbVector & to,
                                 MbRegTransform * iReg = NULL);
          virtual ~Arc_Move_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbArc * _underlying;                        const MbVector & to;
                         MbRegTransform * iReg= NULL;

                
                const MbSurface * newSurface;
                

        int resultType;
  };


  class Arc_Transform_AsyncWorker : public PromiseWorker {
      public:
          Arc_Transform_AsyncWorker(
MbArc * _underlying,            Napi::Promise::Deferred const &d,
                                const MbMatrix & matr,
                                 MbRegTransform * iReg = NULL,
                                const MbSurface * newSurface = NULL);
          virtual ~Arc_Transform_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbArc * _underlying;                        const MbMatrix & matr;
                         MbRegTransform * iReg= NULL;
                        const MbSurface * newSurface= NULL;


        int resultType;
  };


  class Arc_Duplicate_AsyncWorker : public PromiseWorker {
      public:
          Arc_Duplicate_AsyncWorker(
MbArc * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRegDuplicate * dup = NULL);
          virtual ~Arc_Duplicate_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbArc * _underlying;                         MbRegDuplicate * dup= NULL;

                
                 MbPlaneItem * _result;
                

        int resultType;
  };


  class Arc_AddYourGabaritTo_AsyncWorker : public PromiseWorker {
      public:
          Arc_AddYourGabaritTo_AsyncWorker(
MbArc * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRect & rect);
          virtual ~Arc_AddYourGabaritTo_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbArc * _underlying;                         MbRect & rect;


        int resultType;
  };


  class Arc_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          Arc_GetUseCount_AsyncWorker(
MbArc * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Arc_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbArc * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class Arc_AddRef_AsyncWorker : public PromiseWorker {
      public:
          Arc_AddRef_AsyncWorker(
MbArc * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Arc_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbArc * _underlying;

        int resultType;
  };



#endif
