// This is a generated file, modify: generate/templates/WireFrame.h

#ifndef WIREFRAME_H
#define WIREFRAME_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <wire_frame.h>

#include "Curve3D.h"
#include "PromiseWorker.h"

class WireFrame : public Napi::ObjectWrap<WireFrame>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbWireFrame *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    WireFrame(const Napi::CallbackInfo &info);

    Napi::Value GetCurves(const Napi::CallbackInfo &info);
    Napi::Value GetCurves_async(const Napi::CallbackInfo &info);
    Napi::Value Id(const Napi::CallbackInfo &info);

    MbWireFrame *_underlying;

  private:
};

class WireFrame_GetCurves_AsyncWorker : public PromiseWorker
{
  public:
    WireFrame_GetCurves_AsyncWorker(MbWireFrame *_underlying, Napi::Promise::Deferred const &d);
    virtual ~WireFrame_GetCurves_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbWireFrame *_underlying;

    RPArray<MbCurve3D> *curves;

    int resultType;
};

#endif
