// This is a generated file, modify: generate/templates/Rect1D.h

#ifndef RECT1D_H
#define RECT1D_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <mb_rect1d.h>

#include "PromiseWorker.h"

class Rect1D : public Napi::ObjectWrap<Rect1D>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbRect1D *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    Rect1D(const Napi::CallbackInfo &info);

    Napi::Value Id(const Napi::CallbackInfo &info);

    MbRect1D *_underlying;

  private:
};

#endif
