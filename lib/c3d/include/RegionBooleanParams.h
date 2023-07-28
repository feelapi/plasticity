// This is a generated file, modify: generate/templates/RegionBooleanParams.h

#ifndef REGIONBOOLEANPARAMS_H
#define REGIONBOOLEANPARAMS_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <region.h>

#include "PromiseWorker.h"

class RegionBooleanParams : public
  Napi::ObjectWrap<RegionBooleanParams>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbRegionBooleanParams *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        RegionBooleanParams(const Napi::CallbackInfo& info);

        Napi::Value Id(const Napi::CallbackInfo& info);

    MbRegionBooleanParams * _underlying;



  private:

};



#endif
