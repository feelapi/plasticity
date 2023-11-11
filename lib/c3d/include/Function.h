// This is a generated file, modify: generate/templates/Function.h

#ifndef FUNCTION_H
#define FUNCTION_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <function.h>

#include "PromiseWorker.h"

class Function : public Napi::ObjectWrap<Function>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbFunction *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    Function(const Napi::CallbackInfo &info);

    Napi::Value Id(const Napi::CallbackInfo &info);

    MbFunction *_underlying;

  private:
};

#endif
