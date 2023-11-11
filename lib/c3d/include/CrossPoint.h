// This is a generated file, modify: generate/templates/CrossPoint.h

#ifndef CROSSPOINT_H
#define CROSSPOINT_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <mb_cross_point.h>

#include "CartPoint.h"
#include "Curve.h"
#include "PointOnCurve.h"
#include "PromiseWorker.h"

class CrossPoint : public Napi::ObjectWrap<CrossPoint>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbCrossPoint raw);
    static Napi::Function GetConstructor(Napi::Env env);
    CrossPoint(const Napi::CallbackInfo &info);

    MbCrossPoint _underlying;

  private:
    Napi::Value GetValue_p(const Napi::CallbackInfo &info);
    void SetValue_p(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_on1(const Napi::CallbackInfo &info);
    void SetValue_on1(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_on2(const Napi::CallbackInfo &info);
    void SetValue_on2(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_form(const Napi::CallbackInfo &info);
    void SetValue_form(const Napi::CallbackInfo &info, const Napi::Value &value);
};

#endif
