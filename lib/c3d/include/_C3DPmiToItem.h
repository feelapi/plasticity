// This is a generated file, modify: generate/templates/_C3DPmiToItem.h

#ifndef _C3DPMITOITEM_H
#define _C3DPMITOITEM_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <conv_model_document.h>

#include "PromiseWorker.h"

class _C3DPmiToItem : public Napi::ObjectWrap<_C3DPmiToItem>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, C3DPmiToItem *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    _C3DPmiToItem(const Napi::CallbackInfo &info);

    Napi::Value Id(const Napi::CallbackInfo &info);

    C3DPmiToItem *_underlying;

  private:
};

#endif
