// This is a generated file, modify: generate/templates/CharacterCurve.h

#ifndef CHARACTERCURVE_H
#define CHARACTERCURVE_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <cur_character_curve.h>

#include "Curve.h"
#include "Function.h"
#include "PromiseWorker.h"

class CharacterCurve : public
  Napi::ObjectWrap<CharacterCurve>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbCharacterCurve *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        CharacterCurve(const Napi::CallbackInfo& info);

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

    MbCharacterCurve * _underlying;

    ~CharacterCurve();


  private:

};


  class CharacterCurve_Inverse_AsyncWorker : public PromiseWorker {
      public:
          CharacterCurve_Inverse_AsyncWorker(
MbCharacterCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRegTransform * iReg = NULL);
          virtual ~CharacterCurve_Inverse_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCharacterCurve * _underlying;                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class CharacterCurve_Trimmed_AsyncWorker : public PromiseWorker {
      public:
          CharacterCurve_Trimmed_AsyncWorker(
MbCharacterCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double  t1,
                                 double  t2,
                                 int  sense);
          virtual ~CharacterCurve_Trimmed_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCharacterCurve * _underlying;                         double  t1;
                         double  t2;
                         int  sense;

                
                 MbCurve * _result;
                

        int resultType;
  };


  class CharacterCurve_IsStraight_AsyncWorker : public PromiseWorker {
      public:
          CharacterCurve_IsStraight_AsyncWorker(
MbCharacterCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 bool  ignoreParams = false);
          virtual ~CharacterCurve_IsStraight_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCharacterCurve * _underlying;                         bool  ignoreParams= false;

                
                 bool  _result;
                

        int resultType;
  };


  class CharacterCurve_IsClosed_AsyncWorker : public PromiseWorker {
      public:
          CharacterCurve_IsClosed_AsyncWorker(
MbCharacterCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CharacterCurve_IsClosed_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCharacterCurve * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class CharacterCurve_IsBounded_AsyncWorker : public PromiseWorker {
      public:
          CharacterCurve_IsBounded_AsyncWorker(
MbCharacterCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CharacterCurve_IsBounded_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCharacterCurve * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class CharacterCurve_GetTMax_AsyncWorker : public PromiseWorker {
      public:
          CharacterCurve_GetTMax_AsyncWorker(
MbCharacterCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CharacterCurve_GetTMax_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCharacterCurve * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class CharacterCurve_GetTMin_AsyncWorker : public PromiseWorker {
      public:
          CharacterCurve_GetTMin_AsyncWorker(
MbCharacterCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CharacterCurve_GetTMin_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCharacterCurve * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class CharacterCurve_GetPeriod_AsyncWorker : public PromiseWorker {
      public:
          CharacterCurve_GetPeriod_AsyncWorker(
MbCharacterCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CharacterCurve_GetPeriod_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCharacterCurve * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class CharacterCurve_GetWeightCentre_AsyncWorker : public PromiseWorker {
      public:
          CharacterCurve_GetWeightCentre_AsyncWorker(
MbCharacterCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CharacterCurve_GetWeightCentre_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCharacterCurve * _underlying;
                
                 MbCartPoint * point;
                

        int resultType;
  };


  class CharacterCurve_GetLimitPoint_AsyncWorker : public PromiseWorker {
      public:
          CharacterCurve_GetLimitPoint_AsyncWorker(
MbCharacterCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 ptrdiff_t  number);
          virtual ~CharacterCurve_GetLimitPoint_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCharacterCurve * _underlying;                         ptrdiff_t  number;

                
                 MbCartPoint * point;
                

        int resultType;
  };


  class CharacterCurve_PointOn_AsyncWorker : public PromiseWorker {
      public:
          CharacterCurve_PointOn_AsyncWorker(
MbCharacterCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~CharacterCurve_PointOn_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCharacterCurve * _underlying;                         double & t;

                
                 MbCartPoint * p;
                

        int resultType;
  };


  class CharacterCurve__PointOn_AsyncWorker : public PromiseWorker {
      public:
          CharacterCurve__PointOn_AsyncWorker(
MbCharacterCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~CharacterCurve__PointOn_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCharacterCurve * _underlying;                         double & t;

                
                 MbCartPoint * p;
                

        int resultType;
  };


  class CharacterCurve_Explore_AsyncWorker : public PromiseWorker {
      public:
          CharacterCurve_Explore_AsyncWorker(
MbCharacterCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t,
                                 bool  ext);
          virtual ~CharacterCurve_Explore_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCharacterCurve * _underlying;                         double & t;
                         bool  ext;

                
                 MbCartPoint * pnt;
                
                
                 MbVector * fir;
                
                
                 MbVector * sec;
                
                
                 MbVector * thir;
                

        int resultType;
  };


  class CharacterCurve_FirstDer_AsyncWorker : public PromiseWorker {
      public:
          CharacterCurve_FirstDer_AsyncWorker(
MbCharacterCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~CharacterCurve_FirstDer_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCharacterCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class CharacterCurve__FirstDer_AsyncWorker : public PromiseWorker {
      public:
          CharacterCurve__FirstDer_AsyncWorker(
MbCharacterCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~CharacterCurve__FirstDer_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCharacterCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class CharacterCurve_SecondDer_AsyncWorker : public PromiseWorker {
      public:
          CharacterCurve_SecondDer_AsyncWorker(
MbCharacterCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~CharacterCurve_SecondDer_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCharacterCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class CharacterCurve__SecondDer_AsyncWorker : public PromiseWorker {
      public:
          CharacterCurve__SecondDer_AsyncWorker(
MbCharacterCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~CharacterCurve__SecondDer_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCharacterCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class CharacterCurve_Tangent_AsyncWorker : public PromiseWorker {
      public:
          CharacterCurve_Tangent_AsyncWorker(
MbCharacterCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~CharacterCurve_Tangent_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCharacterCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class CharacterCurve__Tangent_AsyncWorker : public PromiseWorker {
      public:
          CharacterCurve__Tangent_AsyncWorker(
MbCharacterCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~CharacterCurve__Tangent_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCharacterCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class CharacterCurve_Normal_AsyncWorker : public PromiseWorker {
      public:
          CharacterCurve_Normal_AsyncWorker(
MbCharacterCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~CharacterCurve_Normal_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCharacterCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class CharacterCurve__Normal_AsyncWorker : public PromiseWorker {
      public:
          CharacterCurve__Normal_AsyncWorker(
MbCharacterCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 double & t);
          virtual ~CharacterCurve__Normal_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCharacterCurve * _underlying;                         double & t;

                
                 MbVector * v;
                

        int resultType;
  };


  class CharacterCurve_PointRelative_AsyncWorker : public PromiseWorker {
      public:
          CharacterCurve_PointRelative_AsyncWorker(
MbCharacterCurve * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCartPoint & pnt,
                                 double  eps);
          virtual ~CharacterCurve_PointRelative_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCharacterCurve * _underlying;                        const MbCartPoint & pnt;
                         double  eps;

                
                 MbeItemLocation  _result;
                

        int resultType;
  };


  class CharacterCurve_PointLocation_AsyncWorker : public PromiseWorker {
      public:
          CharacterCurve_PointLocation_AsyncWorker(
MbCharacterCurve * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCartPoint & pnt,
                                 double  eps);
          virtual ~CharacterCurve_PointLocation_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCharacterCurve * _underlying;                        const MbCartPoint & pnt;
                         double  eps;

                
                 MbeLocation  _result;
                

        int resultType;
  };


  class CharacterCurve_IsA_AsyncWorker : public PromiseWorker {
      public:
          CharacterCurve_IsA_AsyncWorker(
MbCharacterCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CharacterCurve_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCharacterCurve * _underlying;
                
                 MbePlaneType  _result;
                

        int resultType;
  };


  class CharacterCurve_Type_AsyncWorker : public PromiseWorker {
      public:
          CharacterCurve_Type_AsyncWorker(
MbCharacterCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CharacterCurve_Type_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCharacterCurve * _underlying;
                
                 MbePlaneType  _result;
                

        int resultType;
  };


  class CharacterCurve_Family_AsyncWorker : public PromiseWorker {
      public:
          CharacterCurve_Family_AsyncWorker(
MbCharacterCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CharacterCurve_Family_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCharacterCurve * _underlying;
                
                 MbePlaneType  _result;
                

        int resultType;
  };


  class CharacterCurve_Move_AsyncWorker : public PromiseWorker {
      public:
          CharacterCurve_Move_AsyncWorker(
MbCharacterCurve * _underlying,            Napi::Promise::Deferred const &d,
                                const MbVector & to,
                                 MbRegTransform * iReg = NULL);
          virtual ~CharacterCurve_Move_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCharacterCurve * _underlying;                        const MbVector & to;
                         MbRegTransform * iReg= NULL;

                
                const MbSurface * newSurface;
                

        int resultType;
  };


  class CharacterCurve_Transform_AsyncWorker : public PromiseWorker {
      public:
          CharacterCurve_Transform_AsyncWorker(
MbCharacterCurve * _underlying,            Napi::Promise::Deferred const &d,
                                const MbMatrix & matr,
                                 MbRegTransform * iReg = NULL,
                                const MbSurface * newSurface = NULL);
          virtual ~CharacterCurve_Transform_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCharacterCurve * _underlying;                        const MbMatrix & matr;
                         MbRegTransform * iReg= NULL;
                        const MbSurface * newSurface= NULL;


        int resultType;
  };


  class CharacterCurve_Duplicate_AsyncWorker : public PromiseWorker {
      public:
          CharacterCurve_Duplicate_AsyncWorker(
MbCharacterCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRegDuplicate * dup = NULL);
          virtual ~CharacterCurve_Duplicate_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCharacterCurve * _underlying;                         MbRegDuplicate * dup= NULL;

                
                 MbPlaneItem * _result;
                

        int resultType;
  };


  class CharacterCurve_AddYourGabaritTo_AsyncWorker : public PromiseWorker {
      public:
          CharacterCurve_AddYourGabaritTo_AsyncWorker(
MbCharacterCurve * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRect & rect);
          virtual ~CharacterCurve_AddYourGabaritTo_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCharacterCurve * _underlying;                         MbRect & rect;


        int resultType;
  };


  class CharacterCurve_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          CharacterCurve_GetUseCount_AsyncWorker(
MbCharacterCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CharacterCurve_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCharacterCurve * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class CharacterCurve_AddRef_AsyncWorker : public PromiseWorker {
      public:
          CharacterCurve_AddRef_AsyncWorker(
MbCharacterCurve * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~CharacterCurve_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCharacterCurve * _underlying;

        int resultType;
  };



#endif
