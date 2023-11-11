// This is a generated file, modify: generate/templates/PointOnCurve.h

#ifndef POINTONCURVE_H
#define POINTONCURVE_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <mb_cross_point.h>

#include "Curve.h"
#include "PromiseWorker.h"

class PointOnCurve : public Napi::ObjectWrap<PointOnCurve>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbPointOnCurve<MbCurve> raw);
    static Napi::Function GetConstructor(Napi::Env env);
    PointOnCurve(const Napi::CallbackInfo &info);

    MbPointOnCurve<MbCurve> _underlying;

  private:
    Napi::Value GetValue_t(const Napi::CallbackInfo &info);
    void SetValue_t(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_curve(const Napi::CallbackInfo &info);
    void SetValue_curve(const Napi::CallbackInfo &info, const Napi::Value &value);
};

#endif
