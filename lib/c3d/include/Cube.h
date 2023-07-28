// This is a generated file, modify: generate/templates/Cube.h

#ifndef CUBE_H
#define CUBE_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <mb_cube.h>

#include "CartPoint3D.h"
#include "Matrix3D.h"
#include "Placement3D.h"
#include "Rect.h"
#include "PromiseWorker.h"

class Cube : public
  Napi::ObjectWrap<Cube>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbCube *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        Cube(const Napi::CallbackInfo& info);

         Napi::Value CalculateMatrix(const Napi::CallbackInfo& info);
         Napi::Value CalculateMatrix_async(const Napi::CallbackInfo& info);
         Napi::Value ProjectionRect(const Napi::CallbackInfo& info);
         Napi::Value ProjectionRect_async(const Napi::CallbackInfo& info);
         Napi::Value Intersect(const Napi::CallbackInfo& info);
         Napi::Value Intersect_async(const Napi::CallbackInfo& info);
        Napi::Value Id(const Napi::CallbackInfo& info);

    MbCube * _underlying;



  private:
        Napi::Value GetValue_pmin(const Napi::CallbackInfo &info);
        void SetValue_pmin(const Napi::CallbackInfo &info, const Napi::Value &value);
        Napi::Value GetValue_pmax(const Napi::CallbackInfo &info);
        void SetValue_pmax(const Napi::CallbackInfo &info, const Napi::Value &value);

};


  class Cube_CalculateMatrix_AsyncWorker : public PromiseWorker {
      public:
          Cube_CalculateMatrix_AsyncWorker(
MbCube * _underlying,            Napi::Promise::Deferred const &d,
                                 size_t  pIndex,
                                const MbCartPoint3D & point,
                                const MbCartPoint3D & fixedPoint,
                                 bool  useFixed,
                                 bool  isotropy);
          virtual ~Cube_CalculateMatrix_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCube * _underlying;                         size_t  pIndex;
                        const MbCartPoint3D & point;
                        const MbCartPoint3D & fixedPoint;
                         bool  useFixed;
                         bool  isotropy;

                
                 bool  _result;
                
                
                 MbMatrix3D * matrix;
                

        int resultType;
  };


  class Cube_ProjectionRect_AsyncWorker : public PromiseWorker {
      public:
          Cube_ProjectionRect_AsyncWorker(
MbCube * _underlying,            Napi::Promise::Deferred const &d,
                                const MbPlacement3D & place);
          virtual ~Cube_ProjectionRect_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCube * _underlying;                        const MbPlacement3D & place;

                
                 MbRect * rect;
                

        int resultType;
  };


  class Cube_Intersect_AsyncWorker : public PromiseWorker {
      public:
          Cube_Intersect_AsyncWorker(
MbCube * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCube & other,
                                 double  eps = c3d::MIN_RADIUS);
          virtual ~Cube_Intersect_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbCube * _underlying;                        const MbCube & other;
                         double  eps= c3d::MIN_RADIUS;

                
                 bool  _result;
                

        int resultType;
  };



#endif
