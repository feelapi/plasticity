// This is a generated file, modify: generate/templates/FloatAxis3D.h

#ifndef FLOATAXIS3D_H
#define FLOATAXIS3D_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <mesh_float_point3d.h>

#include "Axis3D.h"
#include "PromiseWorker.h"

class FloatAxis3D : public
  Napi::ObjectWrap<FloatAxis3D>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbFloatAxis3D *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        FloatAxis3D(const Napi::CallbackInfo& info);

        Napi::Value Id(const Napi::CallbackInfo& info);

    MbFloatAxis3D * _underlying;



  private:

};



#endif
