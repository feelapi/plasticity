// This is a generated file, modify: generate/templates/Vertex.h

#ifndef VERTEX_H
#define VERTEX_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <topology.h>

#include "TopologyItem.h"
#include "PromiseWorker.h"

class Vertex : public Napi::ObjectWrap<Vertex>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbVertex *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    Vertex(const Napi::CallbackInfo &info);

    Napi::Value IsA(const Napi::CallbackInfo &info);
    Napi::Value IsA_async(const Napi::CallbackInfo &info);
    Napi::Value GetName(const Napi::CallbackInfo &info);
    Napi::Value GetName_async(const Napi::CallbackInfo &info);
    Napi::Value GetMainName(const Napi::CallbackInfo &info);
    Napi::Value GetMainName_async(const Napi::CallbackInfo &info);
    Napi::Value GetFirstName(const Napi::CallbackInfo &info);
    Napi::Value GetFirstName_async(const Napi::CallbackInfo &info);
    Napi::Value GetNameHash(const Napi::CallbackInfo &info);
    Napi::Value GetNameHash_async(const Napi::CallbackInfo &info);
    Napi::Value AddYourGabaritTo(const Napi::CallbackInfo &info);
    Napi::Value AddYourGabaritTo_async(const Napi::CallbackInfo &info);
    Napi::Value CalculateMesh(const Napi::CallbackInfo &info);
    Napi::Value CalculateMesh_async(const Napi::CallbackInfo &info);
    Napi::Value GetOwnChanged(const Napi::CallbackInfo &info);
    Napi::Value GetOwnChanged_async(const Napi::CallbackInfo &info);
    Napi::Value GetUseCount(const Napi::CallbackInfo &info);
    Napi::Value GetUseCount_async(const Napi::CallbackInfo &info);
    Napi::Value AddRef(const Napi::CallbackInfo &info);
    Napi::Value AddRef_async(const Napi::CallbackInfo &info);
    Napi::Value SetStyle(const Napi::CallbackInfo &info);
    Napi::Value SetStyle_async(const Napi::CallbackInfo &info);
    Napi::Value GetStyle(const Napi::CallbackInfo &info);
    Napi::Value GetStyle_async(const Napi::CallbackInfo &info);
    Napi::Value SetColor(const Napi::CallbackInfo &info);
    Napi::Value SetColor_async(const Napi::CallbackInfo &info);
    Napi::Value GetColor(const Napi::CallbackInfo &info);
    Napi::Value GetColor_async(const Napi::CallbackInfo &info);
    Napi::Value AttributesConvert(const Napi::CallbackInfo &info);
    Napi::Value AttributesConvert_async(const Napi::CallbackInfo &info);
    Napi::Value Id(const Napi::CallbackInfo &info);

    MbVertex *_underlying;

    ~Vertex();

  private:
};

class Vertex_IsA_AsyncWorker : public PromiseWorker
{
  public:
    Vertex_IsA_AsyncWorker(MbVertex *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Vertex_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbVertex *_underlying;

    MbeTopologyType _result;

    int resultType;
};

class Vertex_GetName_AsyncWorker : public PromiseWorker
{
  public:
    Vertex_GetName_AsyncWorker(MbVertex *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Vertex_GetName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbVertex *_underlying;

    const MbName *_result;

    int resultType;
};

class Vertex_GetMainName_AsyncWorker : public PromiseWorker
{
  public:
    Vertex_GetMainName_AsyncWorker(MbVertex *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Vertex_GetMainName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbVertex *_underlying;

    SimpleName _result;

    int resultType;
};

class Vertex_GetFirstName_AsyncWorker : public PromiseWorker
{
  public:
    Vertex_GetFirstName_AsyncWorker(MbVertex *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Vertex_GetFirstName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbVertex *_underlying;

    SimpleName _result;

    int resultType;
};

class Vertex_GetNameHash_AsyncWorker : public PromiseWorker
{
  public:
    Vertex_GetNameHash_AsyncWorker(MbVertex *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Vertex_GetNameHash_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbVertex *_underlying;

    SimpleName _result;

    int resultType;
};

class Vertex_AddYourGabaritTo_AsyncWorker : public PromiseWorker
{
  public:
    Vertex_AddYourGabaritTo_AsyncWorker(MbVertex *_underlying, Napi::Promise::Deferred const &d, MbCube &cube);
    virtual ~Vertex_AddYourGabaritTo_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbVertex *_underlying;
    MbCube &cube;

    int resultType;
};

class Vertex_CalculateMesh_AsyncWorker : public PromiseWorker
{
  public:
    Vertex_CalculateMesh_AsyncWorker(MbVertex *_underlying, Napi::Promise::Deferred const &d,
                                     const MbStepData &stepData, const MbFormNote &note);
    virtual ~Vertex_CalculateMesh_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbVertex *_underlying;
    const MbStepData &stepData;
    const MbFormNote &note;

    MbMesh *mesh;

    int resultType;
};

class Vertex_GetOwnChanged_AsyncWorker : public PromiseWorker
{
  public:
    Vertex_GetOwnChanged_AsyncWorker(MbVertex *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Vertex_GetOwnChanged_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbVertex *_underlying;

    bool _result;

    int resultType;
};

class Vertex_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    Vertex_GetUseCount_AsyncWorker(MbVertex *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Vertex_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbVertex *_underlying;

    refcount_t _result;

    int resultType;
};

class Vertex_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    Vertex_AddRef_AsyncWorker(MbVertex *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Vertex_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbVertex *_underlying;

    int resultType;
};

class Vertex_SetStyle_AsyncWorker : public PromiseWorker
{
  public:
    Vertex_SetStyle_AsyncWorker(MbVertex *_underlying, Napi::Promise::Deferred const &d, int s);
    virtual ~Vertex_SetStyle_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbVertex *_underlying;
    int s;

    int resultType;
};

class Vertex_GetStyle_AsyncWorker : public PromiseWorker
{
  public:
    Vertex_GetStyle_AsyncWorker(MbVertex *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Vertex_GetStyle_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbVertex *_underlying;

    int _result;

    int resultType;
};

class Vertex_SetColor_AsyncWorker : public PromiseWorker
{
  public:
    Vertex_SetColor_AsyncWorker(MbVertex *_underlying, Napi::Promise::Deferred const &d, uint32 c);
    virtual ~Vertex_SetColor_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbVertex *_underlying;
    uint32 c;

    int resultType;
};

class Vertex_GetColor_AsyncWorker : public PromiseWorker
{
  public:
    Vertex_GetColor_AsyncWorker(MbVertex *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Vertex_GetColor_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbVertex *_underlying;

    uint32 _result;

    int resultType;
};

class Vertex_AttributesConvert_AsyncWorker : public PromiseWorker
{
  public:
    Vertex_AttributesConvert_AsyncWorker(MbVertex *_underlying, Napi::Promise::Deferred const &d, MbGrid &other);
    virtual ~Vertex_AttributesConvert_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbVertex *_underlying;
    MbGrid &other;

    int resultType;
};

#endif
