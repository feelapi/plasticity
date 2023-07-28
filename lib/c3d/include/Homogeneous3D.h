// This is a generated file, modify: generate/templates/Homogeneous3D.h

#ifndef HOMOGENEOUS3D_H
#define HOMOGENEOUS3D_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <mb_homogeneous3d.h>

#include "PromiseWorker.h"

class Homogeneous3D : public
  Napi::ObjectWrap<Homogeneous3D>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbHomogeneous3D *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        Homogeneous3D(const Napi::CallbackInfo& info);

        Napi::Value Id(const Napi::CallbackInfo& info);

    MbHomogeneous3D * _underlying;



  private:

};



#endif
