// This is a generated file, modify: generate/templates/Vector.h

#ifndef VECTOR_H
#define VECTOR_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <mb_vector.h>

#include "PromiseWorker.h"

class Vector : public Napi::ObjectWrap<Vector>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbVector *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    Vector(const Napi::CallbackInfo &info);

    Napi::Value Id(const Napi::CallbackInfo &info);

    MbVector *_underlying;

  private:
    Napi::Value GetValue_x(const Napi::CallbackInfo &info);
    void SetValue_x(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_y(const Napi::CallbackInfo &info);
    void SetValue_y(const Napi::CallbackInfo &info, const Napi::Value &value);
};

#endif
