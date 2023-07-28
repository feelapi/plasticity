// This is a generated file, modify: generate/templates/Line.h

#ifndef LINE_H
#define LINE_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cur_line.h>

#include "Curve.h"
#include "CartPoint.h"
#include "PromiseWorker.h"

class Line : public
  Napi::ObjectWrap<Line>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbLine *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        Line(const Napi::CallbackInfo& info);

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

    MbLine * _underlying;

    ~Line();


  private:

};


  class Line_Inverse_AsyncWorker : public PromiseWorker {
      public:
          Line_Inverse_AsyncWorker(
MbLine * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRegTransform * iReg = NULL);
          virtual ~Line_Inverse_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLine * _underlying;                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class Line_Trimmed_AsyncWorker : public PromiseWorker {
      public:
          Line_Trimmed_AsyncWorker(
MbLine * _underlying,            Napi::Promise::Deferred const &d,
                                 double  t1,
                                 double  t2,
                                 int  sense);
          virtual ~Line_Trimmed_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLine * _underlying;                         double  t1;
                         double  t2;
                         int  sense;

                
                 MbCurve * _result;
                

        int resultType;
  };


  class Line_IsStraight_AsyncWorker : public PromiseWorker {
      public:
          Line_IsStraight_AsyncWorker(
MbLine * _underlying,            Napi::Promise::Deferred const &d,
                                 bool  ignoreParams = false);
          virtual ~Line_IsStraight_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLine * _underlying;                         bool  ignoreParams= false;

                
                 bool  _result;
                

        int resultType;
  };


  class Line_IsClosed_AsyncWorker : public PromiseWorker {
      public:
          Line_IsClosed_AsyncWorker(
MbLine * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Line_IsClosed_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLine * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class Line_IsBounded_AsyncWorker : public PromiseWorker {
      public:
          Line_IsBounded_AsyncWorker(
MbLine * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Line_IsBounded_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLine * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class Line_GetTMax_AsyncWorker : public PromiseWorker {
      public:
          Line_GetTMax_AsyncWorker(
MbLine * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Line_GetTMax_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLine * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Line_GetTMin_AsyncWorker : public PromiseWorker {
      public:
          Line_GetTMin_AsyncWorker(
MbLine * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Line_GetTMin_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLine * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Line_GetPeriod_AsyncWorker : public PromiseWorker {
      public:
          Line_GetPeriod_AsyncWorker(
MbLine * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Line_GetPeriod_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLine * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Line_GetWeightCentre_AsyncWorker : public PromiseWorker {
      public:
          Line_GetWeightCentre_AsyncWorker(
MbLine * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Line_GetWeightCentre_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLine * _underlying;
                
                 MbCartPoint * point;
                

        int resultType;
  };


  class Line_GetLimitPoint_AsyncWorker : public PromiseWorker {
      public:
          Line_GetLimitPoint_AsyncWorker(
MbLine * _underlying,            Napi::Promise::Deferred const &d,
                                 ptrdiff_t  number);
          virtual ~Line_GetLimitPoint_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLine * _underlying;                         ptrdiff_t  number;

                
                 MbCartPoint * point;
                

        int resultType;
  };


  class Line_PointOn_AsyncWorker : public PromiseWorker {
      public:
          Line_PointOn_AsyncWorker(
MbLine * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~Line_PointOn_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLine * _underlying;                         double & t;

                
                 MbCartPoint * p;
                

        int resultType;
  };


  class Line__PointOn_AsyncWorker : public PromiseWorker {
      public:
          Line__PointOn_AsyncWorker(
MbLine * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~Line__PointOn_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLine * _underlying;                         double & t;

                
                 MbCartPoint * p;
                

        int resultType;
  };


  class Line_Explore_AsyncWorker : public PromiseWorker {
      public:
          Line_Explore_AsyncWorker(
MbLine * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t,
                                 bool  ext);
          virtual ~Line_Explore_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLine * _underlying;                         double & t;
                         bool  ext;

                
                 MbCartPoint * pnt;
                
                
                 MbVector * fir;
                
                
                 MbVector * sec;
                
                
                 MbVector * thir;
                

        int resultType;
  };


  class Line_FirstDer_AsyncWorker : public PromiseWorker {
      public:
          Line_FirstDer_AsyncWorker(
MbLine * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~Line_FirstDer_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLine * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class Line__FirstDer_AsyncWorker : public PromiseWorker {
      public:
          Line__FirstDer_AsyncWorker(
MbLine * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~Line__FirstDer_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLine * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class Line_SecondDer_AsyncWorker : public PromiseWorker {
      public:
          Line_SecondDer_AsyncWorker(
MbLine * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~Line_SecondDer_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLine * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class Line__SecondDer_AsyncWorker : public PromiseWorker {
      public:
          Line__SecondDer_AsyncWorker(
MbLine * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~Line__SecondDer_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLine * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class Line_Tangent_AsyncWorker : public PromiseWorker {
      public:
          Line_Tangent_AsyncWorker(
MbLine * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~Line_Tangent_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLine * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class Line__Tangent_AsyncWorker : public PromiseWorker {
      public:
          Line__Tangent_AsyncWorker(
MbLine * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~Line__Tangent_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLine * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class Line_Normal_AsyncWorker : public PromiseWorker {
      public:
          Line_Normal_AsyncWorker(
MbLine * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~Line_Normal_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLine * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class Line__Normal_AsyncWorker : public PromiseWorker {
      public:
          Line__Normal_AsyncWorker(
MbLine * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~Line__Normal_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLine * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class Line_PointRelative_AsyncWorker : public PromiseWorker {
      public:
          Line_PointRelative_AsyncWorker(
MbLine * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCartPoint & pnt,
                                 double  eps);
          virtual ~Line_PointRelative_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLine * _underlying;                        const MbCartPoint & pnt;
                         double  eps;

                
                 MbeItemLocation  _result;
                

        int resultType;
  };


  class Line_PointLocation_AsyncWorker : public PromiseWorker {
      public:
          Line_PointLocation_AsyncWorker(
MbLine * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCartPoint & pnt,
                                 double  eps);
          virtual ~Line_PointLocation_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLine * _underlying;                        const MbCartPoint & pnt;
                         double  eps;

                
                 MbeLocation  _result;
                

        int resultType;
  };


  class Line_IsA_AsyncWorker : public PromiseWorker {
      public:
          Line_IsA_AsyncWorker(
MbLine * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Line_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLine * _underlying;
                
                 MbePlaneType  _result;
                

        int resultType;
  };


  class Line_Type_AsyncWorker : public PromiseWorker {
      public:
          Line_Type_AsyncWorker(
MbLine * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Line_Type_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLine * _underlying;
                
                 MbePlaneType  _result;
                

        int resultType;
  };


  class Line_Family_AsyncWorker : public PromiseWorker {
      public:
          Line_Family_AsyncWorker(
MbLine * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Line_Family_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLine * _underlying;
                
                 MbePlaneType  _result;
                

        int resultType;
  };


  class Line_Move_AsyncWorker : public PromiseWorker {
      public:
          Line_Move_AsyncWorker(
MbLine * _underlying,            Napi::Promise::Deferred const &d,
                                const MbVector & to,
                                 MbRegTransform * iReg = NULL);
          virtual ~Line_Move_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLine * _underlying;                        const MbVector & to;
                         MbRegTransform * iReg= NULL;

                
                const MbSurface * newSurface;
                

        int resultType;
  };


  class Line_Transform_AsyncWorker : public PromiseWorker {
      public:
          Line_Transform_AsyncWorker(
MbLine * _underlying,            Napi::Promise::Deferred const &d,
                                const MbMatrix & matr,
                                 MbRegTransform * iReg = NULL,
                                const MbSurface * newSurface = NULL);
          virtual ~Line_Transform_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLine * _underlying;                        const MbMatrix & matr;
                         MbRegTransform * iReg= NULL;
                        const MbSurface * newSurface= NULL;


        int resultType;
  };


  class Line_Duplicate_AsyncWorker : public PromiseWorker {
      public:
          Line_Duplicate_AsyncWorker(
MbLine * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRegDuplicate * dup = NULL);
          virtual ~Line_Duplicate_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLine * _underlying;                         MbRegDuplicate * dup= NULL;

                
                 MbPlaneItem * _result;
                

        int resultType;
  };


  class Line_AddYourGabaritTo_AsyncWorker : public PromiseWorker {
      public:
          Line_AddYourGabaritTo_AsyncWorker(
MbLine * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRect & rect);
          virtual ~Line_AddYourGabaritTo_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLine * _underlying;                         MbRect & rect;


        int resultType;
  };


  class Line_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          Line_GetUseCount_AsyncWorker(
MbLine * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Line_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLine * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class Line_AddRef_AsyncWorker : public PromiseWorker {
      public:
          Line_AddRef_AsyncWorker(
MbLine * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Line_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbLine * _underlying;

        int resultType;
  };



#endif
