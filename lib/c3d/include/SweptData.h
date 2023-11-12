// This is a generated file, modify: generate/templates/SweptData.h

#ifndef SWEPTDATA_H
#define SWEPTDATA_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <op_swept_parameter.h>

#include "Placement3D.h"
#include "Contour.h"
#include "Curve3D.h"
#include "Contour3D.h"
#include "PromiseWorker.h"

class SweptData : public Napi::ObjectWrap<SweptData>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbSweptData *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    SweptData(const Napi::CallbackInfo &info);

    Napi::Value Id(const Napi::CallbackInfo &info);

    MbSweptData *_underlying;

  private:
};

#endif
