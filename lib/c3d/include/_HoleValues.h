// This is a generated file, modify: generate/templates/_HoleValues.h

#ifndef _HOLEVALUES_H
#define _HOLEVALUES_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <op_shell_parameter.h>

#include "CartPoint3D.h"
#include "Vector3D.h"
#include "FaceShell.h"
#include "Face.h"
#include "Solid.h"
#include "Surface.h"
#include "PromiseWorker.h"

class _HoleValues : public
  Napi::ObjectWrap<_HoleValues>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, HoleValues *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        _HoleValues(const Napi::CallbackInfo& info);

         Napi::Value SetSurface(const Napi::CallbackInfo& info);
         Napi::Value SetSurface_async(const Napi::CallbackInfo& info);
         Napi::Value SetPhantom(const Napi::CallbackInfo& info);
         Napi::Value SetPhantom_async(const Napi::CallbackInfo& info);
        Napi::Value Id(const Napi::CallbackInfo& info);

    HoleValues * _underlying;



  private:
        Napi::Value GetValue_placeAngle(const Napi::CallbackInfo &info);
        void SetValue_placeAngle(const Napi::CallbackInfo &info, const Napi::Value &value);
        Napi::Value GetValue_azimuthAngle(const Napi::CallbackInfo &info);
        void SetValue_azimuthAngle(const Napi::CallbackInfo &info, const Napi::Value &value);

};


  class _HoleValues_SetSurface_AsyncWorker : public PromiseWorker {
      public:
          _HoleValues_SetSurface_AsyncWorker(
HoleValues * _underlying,            Napi::Promise::Deferred const &d,
                                 MbSurface * s);
          virtual ~_HoleValues_SetSurface_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
HoleValues * _underlying;                         MbSurface * s;


        int resultType;
  };


  class _HoleValues_SetPhantom_AsyncWorker : public PromiseWorker {
      public:
          _HoleValues_SetPhantom_AsyncWorker(
HoleValues * _underlying,            Napi::Promise::Deferred const &d,
                                 bool  s);
          virtual ~_HoleValues_SetPhantom_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
HoleValues * _underlying;                         bool  s;


        int resultType;
  };



#endif
