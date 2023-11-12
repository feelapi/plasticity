// This is a generated file, modify: generate/templates/ActionSurface.h

#ifndef ACTIONSURFACE_H
#define ACTIONSURFACE_H

#include <napi.h>
#include <vector>

#include <action_surface.h>

#include "CartPoint3D.h"
#include "Surface.h"
#include "Curve3D.h"
#include "Vector3D.h"

#include "PromiseWorker.h"

class ActionSurface : public Napi::ObjectWrap<ActionSurface>
{
  public:
    static Napi::Object Init(Napi::Env env, Napi::Object exports);

    static Napi::Value ElementarySurface(const Napi::CallbackInfo &info);
    static Napi::Value ElementarySurface_async(const Napi::CallbackInfo &info);
    static Napi::Value ExtrusionSurface(const Napi::CallbackInfo &info);
    static Napi::Value ExtrusionSurface_async(const Napi::CallbackInfo &info);
};

class ActionSurface_ElementarySurface_AsyncWorker : public PromiseWorker
{
  public:
    ActionSurface_ElementarySurface_AsyncWorker(Napi::Promise::Deferred const &d, const MbCartPoint3D &point0,
                                                const MbCartPoint3D &point1, const MbCartPoint3D &point2,
                                                MbeSpaceType surfaceType);
    virtual ~ActionSurface_ElementarySurface_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    const MbCartPoint3D &point0;
    const MbCartPoint3D &point1;
    const MbCartPoint3D &point2;
    MbeSpaceType surfaceType;

    MbSurface *result;

    int resultType;
};

class ActionSurface_ExtrusionSurface_AsyncWorker : public PromiseWorker
{
  public:
    ActionSurface_ExtrusionSurface_AsyncWorker(Napi::Promise::Deferred const &d, const MbCurve3D &curve,
                                               const MbVector3D &direction, bool simplify);
    virtual ~ActionSurface_ExtrusionSurface_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    const MbCurve3D &curve;
    const MbVector3D &direction;
    bool simplify;

    MbSurface *result;

    int resultType;
};

#endif
