// This is a generated file, modify: generate/templates/RegTransform.h

#ifndef REGTRANSFORM_H
#define REGTRANSFORM_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <item_registrator.h>

#include "PromiseWorker.h"

class RegTransform : public
  Napi::ObjectWrap<RegTransform>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbRegTransform *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        RegTransform(const Napi::CallbackInfo& info);

        Napi::Value Id(const Napi::CallbackInfo& info);

    MbRegTransform * _underlying;



  private:

};



#endif
