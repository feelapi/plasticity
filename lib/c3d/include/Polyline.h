// This is a generated file, modify: generate/templates/Polyline.h

#ifndef POLYLINE_H
#define POLYLINE_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cur_polyline.h>

#include "PolyCurve.h"
#include "PromiseWorker.h"

class Polyline : public
  Napi::ObjectWrap<Polyline>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbPolyline *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        Polyline(const Napi::CallbackInfo& info);

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

    MbPolyline * _underlying;

    ~Polyline();


  private:

};


  class Polyline_GetPointsCount_AsyncWorker : public PromiseWorker {
      public:
          Polyline_GetPointsCount_AsyncWorker(
MbPolyline * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Polyline_GetPointsCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyline * _underlying;
                
                 size_t  _result;
                

        int resultType;
  };


  class Polyline_GetPoint_AsyncWorker : public PromiseWorker {
      public:
          Polyline_GetPoint_AsyncWorker(
MbPolyline * _underlying,            Napi::Promise::Deferred const &d,
                                 ptrdiff_t  index);
          virtual ~Polyline_GetPoint_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyline * _underlying;                         ptrdiff_t  index;

                
                 MbCartPoint * pnt;
                

        int resultType;
  };


  class Polyline_AddPoint_AsyncWorker : public PromiseWorker {
      public:
          Polyline_AddPoint_AsyncWorker(
MbPolyline * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCartPoint & pnt);
          virtual ~Polyline_AddPoint_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyline * _underlying;                        const MbCartPoint & pnt;


        int resultType;
  };


  class Polyline_Inverse_AsyncWorker : public PromiseWorker {
      public:
          Polyline_Inverse_AsyncWorker(
MbPolyline * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRegTransform * iReg = NULL);
          virtual ~Polyline_Inverse_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyline * _underlying;                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class Polyline_Trimmed_AsyncWorker : public PromiseWorker {
      public:
          Polyline_Trimmed_AsyncWorker(
MbPolyline * _underlying,            Napi::Promise::Deferred const &d,
                                 double  t1,
                                 double  t2,
                                 int  sense);
          virtual ~Polyline_Trimmed_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyline * _underlying;                         double  t1;
                         double  t2;
                         int  sense;

                
                 MbCurve * _result;
                

        int resultType;
  };


  class Polyline_IsStraight_AsyncWorker : public PromiseWorker {
      public:
          Polyline_IsStraight_AsyncWorker(
MbPolyline * _underlying,            Napi::Promise::Deferred const &d,
                                 bool  ignoreParams = false);
          virtual ~Polyline_IsStraight_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyline * _underlying;                         bool  ignoreParams= false;

                
                 bool  _result;
                

        int resultType;
  };


  class Polyline_IsClosed_AsyncWorker : public PromiseWorker {
      public:
          Polyline_IsClosed_AsyncWorker(
MbPolyline * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Polyline_IsClosed_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyline * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class Polyline_IsBounded_AsyncWorker : public PromiseWorker {
      public:
          Polyline_IsBounded_AsyncWorker(
MbPolyline * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Polyline_IsBounded_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyline * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class Polyline_GetTMax_AsyncWorker : public PromiseWorker {
      public:
          Polyline_GetTMax_AsyncWorker(
MbPolyline * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Polyline_GetTMax_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyline * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Polyline_GetTMin_AsyncWorker : public PromiseWorker {
      public:
          Polyline_GetTMin_AsyncWorker(
MbPolyline * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Polyline_GetTMin_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyline * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Polyline_GetPeriod_AsyncWorker : public PromiseWorker {
      public:
          Polyline_GetPeriod_AsyncWorker(
MbPolyline * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Polyline_GetPeriod_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyline * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Polyline_GetWeightCentre_AsyncWorker : public PromiseWorker {
      public:
          Polyline_GetWeightCentre_AsyncWorker(
MbPolyline * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Polyline_GetWeightCentre_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyline * _underlying;
                
                 MbCartPoint * point;
                

        int resultType;
  };


  class Polyline_GetLimitPoint_AsyncWorker : public PromiseWorker {
      public:
          Polyline_GetLimitPoint_AsyncWorker(
MbPolyline * _underlying,            Napi::Promise::Deferred const &d,
                                 ptrdiff_t  number);
          virtual ~Polyline_GetLimitPoint_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyline * _underlying;                         ptrdiff_t  number;

                
                 MbCartPoint * point;
                

        int resultType;
  };


  class Polyline_PointOn_AsyncWorker : public PromiseWorker {
      public:
          Polyline_PointOn_AsyncWorker(
MbPolyline * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~Polyline_PointOn_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyline * _underlying;                         double & t;

                
                 MbCartPoint * p;
                

        int resultType;
  };


  class Polyline__PointOn_AsyncWorker : public PromiseWorker {
      public:
          Polyline__PointOn_AsyncWorker(
MbPolyline * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~Polyline__PointOn_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyline * _underlying;                         double & t;

                
                 MbCartPoint * p;
                

        int resultType;
  };


  class Polyline_Explore_AsyncWorker : public PromiseWorker {
      public:
          Polyline_Explore_AsyncWorker(
MbPolyline * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t,
                                 bool  ext);
          virtual ~Polyline_Explore_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyline * _underlying;                         double & t;
                         bool  ext;

                
                 MbCartPoint * pnt;
                
                
                 MbVector * fir;
                
                
                 MbVector * sec;
                
                
                 MbVector * thir;
                

        int resultType;
  };


  class Polyline_FirstDer_AsyncWorker : public PromiseWorker {
      public:
          Polyline_FirstDer_AsyncWorker(
MbPolyline * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~Polyline_FirstDer_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyline * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class Polyline__FirstDer_AsyncWorker : public PromiseWorker {
      public:
          Polyline__FirstDer_AsyncWorker(
MbPolyline * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~Polyline__FirstDer_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyline * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class Polyline_SecondDer_AsyncWorker : public PromiseWorker {
      public:
          Polyline_SecondDer_AsyncWorker(
MbPolyline * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~Polyline_SecondDer_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyline * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class Polyline__SecondDer_AsyncWorker : public PromiseWorker {
      public:
          Polyline__SecondDer_AsyncWorker(
MbPolyline * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~Polyline__SecondDer_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyline * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class Polyline_Tangent_AsyncWorker : public PromiseWorker {
      public:
          Polyline_Tangent_AsyncWorker(
MbPolyline * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~Polyline_Tangent_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyline * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class Polyline__Tangent_AsyncWorker : public PromiseWorker {
      public:
          Polyline__Tangent_AsyncWorker(
MbPolyline * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~Polyline__Tangent_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyline * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class Polyline_Normal_AsyncWorker : public PromiseWorker {
      public:
          Polyline_Normal_AsyncWorker(
MbPolyline * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~Polyline_Normal_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyline * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class Polyline__Normal_AsyncWorker : public PromiseWorker {
      public:
          Polyline__Normal_AsyncWorker(
MbPolyline * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~Polyline__Normal_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyline * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class Polyline_PointRelative_AsyncWorker : public PromiseWorker {
      public:
          Polyline_PointRelative_AsyncWorker(
MbPolyline * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCartPoint & pnt,
                                 double  eps);
          virtual ~Polyline_PointRelative_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyline * _underlying;                        const MbCartPoint & pnt;
                         double  eps;

                
                 MbeItemLocation  _result;
                

        int resultType;
  };


  class Polyline_PointLocation_AsyncWorker : public PromiseWorker {
      public:
          Polyline_PointLocation_AsyncWorker(
MbPolyline * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCartPoint & pnt,
                                 double  eps);
          virtual ~Polyline_PointLocation_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyline * _underlying;                        const MbCartPoint & pnt;
                         double  eps;

                
                 MbeLocation  _result;
                

        int resultType;
  };


  class Polyline_IsA_AsyncWorker : public PromiseWorker {
      public:
          Polyline_IsA_AsyncWorker(
MbPolyline * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Polyline_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyline * _underlying;
                
                 MbePlaneType  _result;
                

        int resultType;
  };


  class Polyline_Type_AsyncWorker : public PromiseWorker {
      public:
          Polyline_Type_AsyncWorker(
MbPolyline * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Polyline_Type_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyline * _underlying;
                
                 MbePlaneType  _result;
                

        int resultType;
  };


  class Polyline_Family_AsyncWorker : public PromiseWorker {
      public:
          Polyline_Family_AsyncWorker(
MbPolyline * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Polyline_Family_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyline * _underlying;
                
                 MbePlaneType  _result;
                

        int resultType;
  };


  class Polyline_Move_AsyncWorker : public PromiseWorker {
      public:
          Polyline_Move_AsyncWorker(
MbPolyline * _underlying,            Napi::Promise::Deferred const &d,
                                const MbVector & to,
                                 MbRegTransform * iReg = NULL);
          virtual ~Polyline_Move_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyline * _underlying;                        const MbVector & to;
                         MbRegTransform * iReg= NULL;

                
                const MbSurface * newSurface;
                

        int resultType;
  };


  class Polyline_Transform_AsyncWorker : public PromiseWorker {
      public:
          Polyline_Transform_AsyncWorker(
MbPolyline * _underlying,            Napi::Promise::Deferred const &d,
                                const MbMatrix & matr,
                                 MbRegTransform * iReg = NULL,
                                const MbSurface * newSurface = NULL);
          virtual ~Polyline_Transform_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyline * _underlying;                        const MbMatrix & matr;
                         MbRegTransform * iReg= NULL;
                        const MbSurface * newSurface= NULL;


        int resultType;
  };


  class Polyline_Duplicate_AsyncWorker : public PromiseWorker {
      public:
          Polyline_Duplicate_AsyncWorker(
MbPolyline * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRegDuplicate * dup = NULL);
          virtual ~Polyline_Duplicate_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyline * _underlying;                         MbRegDuplicate * dup= NULL;

                
                 MbPlaneItem * _result;
                

        int resultType;
  };


  class Polyline_AddYourGabaritTo_AsyncWorker : public PromiseWorker {
      public:
          Polyline_AddYourGabaritTo_AsyncWorker(
MbPolyline * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRect & rect);
          virtual ~Polyline_AddYourGabaritTo_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyline * _underlying;                         MbRect & rect;


        int resultType;
  };


  class Polyline_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          Polyline_GetUseCount_AsyncWorker(
MbPolyline * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Polyline_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyline * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class Polyline_AddRef_AsyncWorker : public PromiseWorker {
      public:
          Polyline_AddRef_AsyncWorker(
MbPolyline * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Polyline_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolyline * _underlying;

        int resultType;
  };



#endif
