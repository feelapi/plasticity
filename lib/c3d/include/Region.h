// This is a generated file, modify: generate/templates/Region.h

#ifndef REGION_H
#define REGION_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <region.h>

#include "PlaneItem.h"
#include "Contour.h"
#include "PromiseWorker.h"

class Region : public
  Napi::ObjectWrap<Region>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbRegion *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        Region(const Napi::CallbackInfo& info);

         Napi::Value DetachContours(const Napi::CallbackInfo& info);
         Napi::Value DetachContours_async(const Napi::CallbackInfo& info);
         Napi::Value GetContoursCount(const Napi::CallbackInfo& info);
         Napi::Value GetContoursCount_async(const Napi::CallbackInfo& info);
         Napi::Value SetContour(const Napi::CallbackInfo& info);
         Napi::Value SetContour_async(const Napi::CallbackInfo& info);
         Napi::Value GetContour(const Napi::CallbackInfo& info);
         Napi::Value GetContour_async(const Napi::CallbackInfo& info);
         Napi::Value GetOutContour(const Napi::CallbackInfo& info);
         Napi::Value GetOutContour_async(const Napi::CallbackInfo& info);
         Napi::Value SetCorrect(const Napi::CallbackInfo& info);
         Napi::Value SetCorrect_async(const Napi::CallbackInfo& info);
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

    MbRegion * _underlying;

    ~Region();


  private:

};


  class Region_DetachContours_AsyncWorker : public PromiseWorker {
      public:
          Region_DetachContours_AsyncWorker(
MbRegion * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Region_DetachContours_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbRegion * _underlying;
                
                 RPArray<MbContour> * dstContours;
                

        int resultType;
  };


  class Region_GetContoursCount_AsyncWorker : public PromiseWorker {
      public:
          Region_GetContoursCount_AsyncWorker(
MbRegion * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Region_GetContoursCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbRegion * _underlying;
                
                 size_t  _result;
                

        int resultType;
  };


  class Region_SetContour_AsyncWorker : public PromiseWorker {
      public:
          Region_SetContour_AsyncWorker(
MbRegion * _underlying,            Napi::Promise::Deferred const &d,
                                 size_t  k);
          virtual ~Region_SetContour_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbRegion * _underlying;                         size_t  k;

                
                 MbContour * _result;
                

        int resultType;
  };


  class Region_GetContour_AsyncWorker : public PromiseWorker {
      public:
          Region_GetContour_AsyncWorker(
MbRegion * _underlying,            Napi::Promise::Deferred const &d,
                                 size_t  k);
          virtual ~Region_GetContour_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbRegion * _underlying;                         size_t  k;

                
                const MbContour * _result;
                

        int resultType;
  };


  class Region_GetOutContour_AsyncWorker : public PromiseWorker {
      public:
          Region_GetOutContour_AsyncWorker(
MbRegion * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Region_GetOutContour_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbRegion * _underlying;
                
                const MbContour * _result;
                

        int resultType;
  };


  class Region_SetCorrect_AsyncWorker : public PromiseWorker {
      public:
          Region_SetCorrect_AsyncWorker(
MbRegion * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Region_SetCorrect_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbRegion * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class Region_IsA_AsyncWorker : public PromiseWorker {
      public:
          Region_IsA_AsyncWorker(
MbRegion * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Region_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbRegion * _underlying;
                
                 MbePlaneType  _result;
                

        int resultType;
  };


  class Region_Type_AsyncWorker : public PromiseWorker {
      public:
          Region_Type_AsyncWorker(
MbRegion * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Region_Type_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbRegion * _underlying;
                
                 MbePlaneType  _result;
                

        int resultType;
  };


  class Region_Family_AsyncWorker : public PromiseWorker {
      public:
          Region_Family_AsyncWorker(
MbRegion * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Region_Family_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbRegion * _underlying;
                
                 MbePlaneType  _result;
                

        int resultType;
  };


  class Region_Move_AsyncWorker : public PromiseWorker {
      public:
          Region_Move_AsyncWorker(
MbRegion * _underlying,            Napi::Promise::Deferred const &d,
                                const MbVector & to,
                                 MbRegTransform * iReg = NULL);
          virtual ~Region_Move_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbRegion * _underlying;                        const MbVector & to;
                         MbRegTransform * iReg= NULL;

                
                const MbSurface * newSurface;
                

        int resultType;
  };


  class Region_Transform_AsyncWorker : public PromiseWorker {
      public:
          Region_Transform_AsyncWorker(
MbRegion * _underlying,            Napi::Promise::Deferred const &d,
                                const MbMatrix & matr,
                                 MbRegTransform * iReg = NULL,
                                const MbSurface * newSurface = NULL);
          virtual ~Region_Transform_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbRegion * _underlying;                        const MbMatrix & matr;
                         MbRegTransform * iReg= NULL;
                        const MbSurface * newSurface= NULL;


        int resultType;
  };


  class Region_Duplicate_AsyncWorker : public PromiseWorker {
      public:
          Region_Duplicate_AsyncWorker(
MbRegion * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRegDuplicate * dup = NULL);
          virtual ~Region_Duplicate_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbRegion * _underlying;                         MbRegDuplicate * dup= NULL;

                
                 MbPlaneItem * _result;
                

        int resultType;
  };


  class Region_AddYourGabaritTo_AsyncWorker : public PromiseWorker {
      public:
          Region_AddYourGabaritTo_AsyncWorker(
MbRegion * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRect & rect);
          virtual ~Region_AddYourGabaritTo_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbRegion * _underlying;                         MbRect & rect;


        int resultType;
  };


  class Region_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          Region_GetUseCount_AsyncWorker(
MbRegion * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Region_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbRegion * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class Region_AddRef_AsyncWorker : public PromiseWorker {
      public:
          Region_AddRef_AsyncWorker(
MbRegion * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Region_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbRegion * _underlying;

        int resultType;
  };



#endif
