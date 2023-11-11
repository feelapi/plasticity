// This is a generated file, modify: generate/templates/SurfaceOffsetCurveParams.h

#ifndef SURFACEOFFSETCURVEPARAMS_H
#define SURFACEOFFSETCURVEPARAMS_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <op_curve_parameter.h>

#include "Face.h"
#include "Axis3D.h"
#include "SNameMaker.h"
#include "PromiseWorker.h"

class SurfaceOffsetCurveParams : public Napi::ObjectWrap<SurfaceOffsetCurveParams>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbSurfaceOffsetCurveParams *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    SurfaceOffsetCurveParams(const Napi::CallbackInfo &info);

    Napi::Value Id(const Napi::CallbackInfo &info);

    MbSurfaceOffsetCurveParams *_underlying;

  private:
};

#endif
