// This is a generated file, modify: generate/templates/OrientedEdge.h

#ifndef ORIENTEDEDGE_H
#define ORIENTEDEDGE_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <topology.h>

#include "CurveEdge.h"
#include "PromiseWorker.h"

class OrientedEdge : public Napi::ObjectWrap<OrientedEdge>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbOrientedEdge *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    OrientedEdge(const Napi::CallbackInfo &info);

    Napi::Value GetCurveEdge(const Napi::CallbackInfo &info);
    Napi::Value GetCurveEdge_async(const Napi::CallbackInfo &info);
    Napi::Value Id(const Napi::CallbackInfo &info);

    MbOrientedEdge *_underlying;

  private:
};

class OrientedEdge_GetCurveEdge_AsyncWorker : public PromiseWorker
{
  public:
    OrientedEdge_GetCurveEdge_AsyncWorker(MbOrientedEdge *_underlying, Napi::Promise::Deferred const &d);
    virtual ~OrientedEdge_GetCurveEdge_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbOrientedEdge *_underlying;

    MbCurveEdge *_result;

    int resultType;
};

#endif
