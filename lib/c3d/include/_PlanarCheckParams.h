// This is a generated file, modify: generate/templates/_PlanarCheckParams.h

#ifndef _PLANARCHECKPARAMS_H
#define _PLANARCHECKPARAMS_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <mb_data.h>

#include "PromiseWorker.h"

class _PlanarCheckParams : public
  Napi::ObjectWrap<_PlanarCheckParams>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, PlanarCheckParams *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        _PlanarCheckParams(const Napi::CallbackInfo& info);

        Napi::Value Id(const Napi::CallbackInfo& info);

    PlanarCheckParams * _underlying;



  private:

};



#endif
