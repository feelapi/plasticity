// This is a generated file, modify: generate/templates/_SlotValues.h

#ifndef _SLOTVALUES_H
#define _SLOTVALUES_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <op_shell_parameter.h>

#include "_HoleValues.h"
#include "PromiseWorker.h"

class _SlotValues : public Napi::ObjectWrap<_SlotValues>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, SlotValues *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    _SlotValues(const Napi::CallbackInfo &info);

    Napi::Value SetSurface(const Napi::CallbackInfo &info);
    Napi::Value SetSurface_async(const Napi::CallbackInfo &info);
    Napi::Value SetPhantom(const Napi::CallbackInfo &info);
    Napi::Value SetPhantom_async(const Napi::CallbackInfo &info);
    Napi::Value Id(const Napi::CallbackInfo &info);

    SlotValues *_underlying;

  private:
    Napi::Value GetValue_length(const Napi::CallbackInfo &info);
    void SetValue_length(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_width(const Napi::CallbackInfo &info);
    void SetValue_width(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_depth(const Napi::CallbackInfo &info);
    void SetValue_depth(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_bottomWidth(const Napi::CallbackInfo &info);
    void SetValue_bottomWidth(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_bottomDepth(const Napi::CallbackInfo &info);
    void SetValue_bottomDepth(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_floorRadius(const Napi::CallbackInfo &info);
    void SetValue_floorRadius(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_tailAngle(const Napi::CallbackInfo &info);
    void SetValue_tailAngle(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_type(const Napi::CallbackInfo &info);
    void SetValue_type(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_placeAngle(const Napi::CallbackInfo &info);
    void SetValue_placeAngle(const Napi::CallbackInfo &info, const Napi::Value &value);
    Napi::Value GetValue_azimuthAngle(const Napi::CallbackInfo &info);
    void SetValue_azimuthAngle(const Napi::CallbackInfo &info, const Napi::Value &value);
};

class _SlotValues_SetSurface_AsyncWorker : public PromiseWorker
{
  public:
    _SlotValues_SetSurface_AsyncWorker(SlotValues *_underlying, Napi::Promise::Deferred const &d, MbSurface *s);
    virtual ~_SlotValues_SetSurface_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    SlotValues *_underlying;
    MbSurface *s;

    int resultType;
};

class _SlotValues_SetPhantom_AsyncWorker : public PromiseWorker
{
  public:
    _SlotValues_SetPhantom_AsyncWorker(SlotValues *_underlying, Napi::Promise::Deferred const &d, bool s);
    virtual ~_SlotValues_SetPhantom_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    SlotValues *_underlying;
    bool s;

    int resultType;
};

#endif
