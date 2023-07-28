// This is a generated file, modify: generate/templates/Axis3D.h

#ifndef AXIS3D_H
#define AXIS3D_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <mb_axis3d.h>

#include "Placement3D.h"
#include "CartPoint3D.h"
#include "PromiseWorker.h"

class Axis3D : public
  Napi::ObjectWrap<Axis3D>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbAxis3D *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        Axis3D(const Napi::CallbackInfo& info);

         Napi::Value Rotate(const Napi::CallbackInfo& info);
         Napi::Value Rotate_async(const Napi::CallbackInfo& info);
         Napi::Value Move(const Napi::CallbackInfo& info);
         Napi::Value Move_async(const Napi::CallbackInfo& info);
         Napi::Value GetOrigin(const Napi::CallbackInfo& info);
         Napi::Value GetOrigin_async(const Napi::CallbackInfo& info);
         Napi::Value GetAxisZ(const Napi::CallbackInfo& info);
         Napi::Value GetAxisZ_async(const Napi::CallbackInfo& info);
        Napi::Value Id(const Napi::CallbackInfo& info);

    MbAxis3D * _underlying;



  private:

};


  class Axis3D_Rotate_AsyncWorker : public PromiseWorker {
      public:
          Axis3D_Rotate_AsyncWorker(
MbAxis3D * _underlying,            Napi::Promise::Deferred const &d,
                                const MbAxis3D & axis,
                                 double  angle);
          virtual ~Axis3D_Rotate_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbAxis3D * _underlying;                        const MbAxis3D & axis;
                         double  angle;


        int resultType;
  };


  class Axis3D_Move_AsyncWorker : public PromiseWorker {
      public:
          Axis3D_Move_AsyncWorker(
MbAxis3D * _underlying,            Napi::Promise::Deferred const &d,
                                const MbVector3D & to);
          virtual ~Axis3D_Move_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbAxis3D * _underlying;                        const MbVector3D & to;


        int resultType;
  };


  class Axis3D_GetOrigin_AsyncWorker : public PromiseWorker {
      public:
          Axis3D_GetOrigin_AsyncWorker(
MbAxis3D * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Axis3D_GetOrigin_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbAxis3D * _underlying;
                
                const MbCartPoint3D * _result;
                

        int resultType;
  };


  class Axis3D_GetAxisZ_AsyncWorker : public PromiseWorker {
      public:
          Axis3D_GetAxisZ_AsyncWorker(
MbAxis3D * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Axis3D_GetAxisZ_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbAxis3D * _underlying;
                
                const MbVector3D * _result;
                

        int resultType;
  };



#endif
