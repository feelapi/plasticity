// This is a generated file, modify: generate/templates/MLTipParams.h

#ifndef MLTIPPARAMS_H
#define MLTIPPARAMS_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <multiline.h>

#include "PromiseWorker.h"

class MLTipParams : public Napi::ObjectWrap<MLTipParams>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, StMLTipParams *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    MLTipParams(const Napi::CallbackInfo &info);

    Napi::Value Id(const Napi::CallbackInfo &info);

    StMLTipParams *_underlying;

  private:
};

#endif
