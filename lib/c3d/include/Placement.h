// This is a generated file, modify: generate/templates/Placement.h

#ifndef PLACEMENT_H
#define PLACEMENT_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <mb_placement.h>

#include "CartPoint.h"
#include "Vector.h"
#include "PromiseWorker.h"

class Placement : public Napi::ObjectWrap<Placement>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbPlacement *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    Placement(const Napi::CallbackInfo &info);

    Napi::Value Id(const Napi::CallbackInfo &info);

    MbPlacement *_underlying;

  private:
};

#endif
