// This is a generated file, modify: generate/templates/Direction.h

#ifndef DIRECTION_H
#define DIRECTION_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <mb_vector.h>

#include "PromiseWorker.h"

class Direction : public Napi::ObjectWrap<Direction>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbDirection *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    Direction(const Napi::CallbackInfo &info);

    Napi::Value Id(const Napi::CallbackInfo &info);

    MbDirection *_underlying;

  private:
};

#endif
