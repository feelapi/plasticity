// This is a generated file, modify: generate/templates/Rect2D.h

#ifndef RECT2D_H
#define RECT2D_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <mb_rect2d.h>

#include "PromiseWorker.h"

class Rect2D : public
  Napi::ObjectWrap<Rect2D>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbRect2D *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        Rect2D(const Napi::CallbackInfo& info);

        Napi::Value Id(const Napi::CallbackInfo& info);

    MbRect2D * _underlying;



  private:

};



#endif
