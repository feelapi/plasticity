// This is a generated file, modify: generate/templates/CartPoint.h

#ifndef CARTPOINT_H
#define CARTPOINT_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <mb_cart_point.h>

#include "PromiseWorker.h"

class CartPoint : public
  Napi::ObjectWrap<CartPoint>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbCartPoint *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        CartPoint(const Napi::CallbackInfo& info);

        Napi::Value Id(const Napi::CallbackInfo& info);

    MbCartPoint * _underlying;



  private:
        Napi::Value GetValue_x(const Napi::CallbackInfo &info);
        void SetValue_x(const Napi::CallbackInfo &info, const Napi::Value &value);
        Napi::Value GetValue_y(const Napi::CallbackInfo &info);
        void SetValue_y(const Napi::CallbackInfo &info, const Napi::Value &value);

};



#endif
