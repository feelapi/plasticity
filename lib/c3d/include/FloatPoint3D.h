// This is a generated file, modify: generate/templates/FloatPoint3D.h

#ifndef FLOATPOINT3D_H
#define FLOATPOINT3D_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <mesh_float_point3d.h>

#include "PromiseWorker.h"

class FloatPoint3D : public
  Napi::ObjectWrap<FloatPoint3D>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbFloatPoint3D *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        FloatPoint3D(const Napi::CallbackInfo& info);

        Napi::Value Id(const Napi::CallbackInfo& info);

    MbFloatPoint3D * _underlying;



  private:
        Napi::Value GetValue_x(const Napi::CallbackInfo &info);
        void SetValue_x(const Napi::CallbackInfo &info, const Napi::Value &value);
        Napi::Value GetValue_y(const Napi::CallbackInfo &info);
        void SetValue_y(const Napi::CallbackInfo &info, const Napi::Value &value);
        Napi::Value GetValue_z(const Napi::CallbackInfo &info);
        void SetValue_z(const Napi::CallbackInfo &info, const Napi::Value &value);

};



#endif
