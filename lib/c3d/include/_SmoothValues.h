// This is a generated file, modify: generate/templates/_SmoothValues.h

#ifndef _SMOOTHVALUES_H
#define _SMOOTHVALUES_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <op_shell_parameter.h>

#include "Vector3D.h"
#include "PromiseWorker.h"

class _SmoothValues : public Napi::ObjectWrap<_SmoothValues>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, SmoothValues *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    _SmoothValues(const Napi::CallbackInfo &info);

    Napi::Value Id(const Napi::CallbackInfo &info);

    SmoothValues *_underlying;

  private:
    Napi::Value GetValue_distance1(const Napi::CallbackInfo &info);
    void SetValue_distance1(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_distance2(const Napi::CallbackInfo &info);
    void SetValue_distance2(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_conic(const Napi::CallbackInfo &info);
    void SetValue_conic(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_begLength(const Napi::CallbackInfo &info);
    void SetValue_begLength(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_endLength(const Napi::CallbackInfo &info);
    void SetValue_endLength(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_form(const Napi::CallbackInfo &info);
    void SetValue_form(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_smoothCorner(const Napi::CallbackInfo &info);
    void SetValue_smoothCorner(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_prolong(const Napi::CallbackInfo &info);
    void SetValue_prolong(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_keepCant(const Napi::CallbackInfo &info);
    void SetValue_keepCant(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_strict(const Napi::CallbackInfo &info);
    void SetValue_strict(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_equable(const Napi::CallbackInfo &info);
    void SetValue_equable(const Napi::CallbackInfo &info, const Napi::Value &value);
};

#endif
