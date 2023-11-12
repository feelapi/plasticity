// This is a generated file, modify: generate/templates/SpatialOffsetCurveParams.h

#ifndef SPATIALOFFSETCURVEPARAMS_H
#define SPATIALOFFSETCURVEPARAMS_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <op_curve_parameter.h>

#include "Vector3D.h"
#include "SNameMaker.h"
#include "PromiseWorker.h"

class SpatialOffsetCurveParams : public Napi::ObjectWrap<SpatialOffsetCurveParams>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbSpatialOffsetCurveParams *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    SpatialOffsetCurveParams(const Napi::CallbackInfo &info);

    Napi::Value Id(const Napi::CallbackInfo &info);

    MbSpatialOffsetCurveParams *_underlying;

  private:
};

#endif
