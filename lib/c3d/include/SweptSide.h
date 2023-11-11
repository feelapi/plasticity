// This is a generated file, modify: generate/templates/SweptSide.h

#ifndef SWEPTSIDE_H
#define SWEPTSIDE_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <op_swept_parameter.h>

#include "PromiseWorker.h"

class SweptSide : public Napi::ObjectWrap<SweptSide>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbSweptSide raw);
    static Napi::Function GetConstructor(Napi::Env env);
    SweptSide(const Napi::CallbackInfo &info);

    MbSweptSide _underlying;

  private:
    Napi::Value GetValue_way(const Napi::CallbackInfo &info);
    void SetValue_way(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_rake(const Napi::CallbackInfo &info);
    void SetValue_rake(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_distance(const Napi::CallbackInfo &info);
    void SetValue_distance(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_scalarValue(const Napi::CallbackInfo &info);
    void SetValue_scalarValue(const Napi::CallbackInfo &info, const Napi::Value &value);
};

#endif
