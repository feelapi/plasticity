// This is a generated file, modify: generate/templates/FormNote.h

#ifndef FORMNOTE_H
#define FORMNOTE_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <mb_data.h>

#include "PromiseWorker.h"

class FormNote : public Napi::ObjectWrap<FormNote>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbFormNote *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    FormNote(const Napi::CallbackInfo &info);

    Napi::Value Wire(const Napi::CallbackInfo &info);
    Napi::Value Wire_async(const Napi::CallbackInfo &info);
    Napi::Value Grid(const Napi::CallbackInfo &info);
    Napi::Value Grid_async(const Napi::CallbackInfo &info);
    Napi::Value Seam(const Napi::CallbackInfo &info);
    Napi::Value Seam_async(const Napi::CallbackInfo &info);
    Napi::Value Quad(const Napi::CallbackInfo &info);
    Napi::Value Quad_async(const Napi::CallbackInfo &info);
    Napi::Value Fair(const Napi::CallbackInfo &info);
    Napi::Value Fair_async(const Napi::CallbackInfo &info);
    Napi::Value Id(const Napi::CallbackInfo &info);

    MbFormNote *_underlying;

  private:
};

class FormNote_Wire_AsyncWorker : public PromiseWorker
{
  public:
    FormNote_Wire_AsyncWorker(MbFormNote *_underlying, Napi::Promise::Deferred const &d);
    virtual ~FormNote_Wire_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFormNote *_underlying;

    bool _result;

    int resultType;
};

class FormNote_Grid_AsyncWorker : public PromiseWorker
{
  public:
    FormNote_Grid_AsyncWorker(MbFormNote *_underlying, Napi::Promise::Deferred const &d);
    virtual ~FormNote_Grid_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFormNote *_underlying;

    bool _result;

    int resultType;
};

class FormNote_Seam_AsyncWorker : public PromiseWorker
{
  public:
    FormNote_Seam_AsyncWorker(MbFormNote *_underlying, Napi::Promise::Deferred const &d);
    virtual ~FormNote_Seam_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFormNote *_underlying;

    bool _result;

    int resultType;
};

class FormNote_Quad_AsyncWorker : public PromiseWorker
{
  public:
    FormNote_Quad_AsyncWorker(MbFormNote *_underlying, Napi::Promise::Deferred const &d);
    virtual ~FormNote_Quad_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFormNote *_underlying;

    bool _result;

    int resultType;
};

class FormNote_Fair_AsyncWorker : public PromiseWorker
{
  public:
    FormNote_Fair_AsyncWorker(MbFormNote *_underlying, Napi::Promise::Deferred const &d);
    virtual ~FormNote_Fair_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFormNote *_underlying;

    bool _result;

    int resultType;
};

#endif
