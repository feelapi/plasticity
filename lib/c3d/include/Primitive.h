// This is a generated file, modify: generate/templates/Primitive.h

#ifndef PRIMITIVE_H
#define PRIMITIVE_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <mesh_primitive.h>

#include "RefItem.h"
#include "AttributeContainer.h"
#include "PromiseWorker.h"

class Primitive : public Napi::ObjectWrap<Primitive>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbPrimitive *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    Primitive(const Napi::CallbackInfo &info);

    Napi::Value SetItem(const Napi::CallbackInfo &info);
    Napi::Value SetItem_async(const Napi::CallbackInfo &info);
    Napi::Value SetPrimitiveName(const Napi::CallbackInfo &info);
    Napi::Value SetPrimitiveName_async(const Napi::CallbackInfo &info);
    Napi::Value SetPrimitiveType(const Napi::CallbackInfo &info);
    Napi::Value SetPrimitiveType_async(const Napi::CallbackInfo &info);
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

    MbPrimitive *_underlying;

    ~Primitive();

  private:
};

class Primitive_SetItem_AsyncWorker : public PromiseWorker
{
  public:
    Primitive_SetItem_AsyncWorker(MbPrimitive *_underlying, Napi::Promise::Deferred const &d, const MbRefItem *g);
    virtual ~Primitive_SetItem_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPrimitive *_underlying;
    const MbRefItem *g;

    int resultType;
};

class Primitive_SetPrimitiveName_AsyncWorker : public PromiseWorker
{
  public:
    Primitive_SetPrimitiveName_AsyncWorker(MbPrimitive *_underlying, Napi::Promise::Deferred const &d, SimpleName n);
    virtual ~Primitive_SetPrimitiveName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPrimitive *_underlying;
    SimpleName n;

    int resultType;
};

class Primitive_SetPrimitiveType_AsyncWorker : public PromiseWorker
{
  public:
    Primitive_SetPrimitiveType_AsyncWorker(MbPrimitive *_underlying, Napi::Promise::Deferred const &d, MbeRefType t);
    virtual ~Primitive_SetPrimitiveType_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPrimitive *_underlying;
    MbeRefType t;

    int resultType;
};

class Primitive_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    Primitive_GetUseCount_AsyncWorker(MbPrimitive *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Primitive_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPrimitive *_underlying;

    refcount_t _result;

    int resultType;
};

class Primitive_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    Primitive_AddRef_AsyncWorker(MbPrimitive *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Primitive_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPrimitive *_underlying;

    int resultType;
};

class Primitive_SetStyle_AsyncWorker : public PromiseWorker
{
  public:
    Primitive_SetStyle_AsyncWorker(MbPrimitive *_underlying, Napi::Promise::Deferred const &d, int s);
    virtual ~Primitive_SetStyle_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPrimitive *_underlying;
    int s;

    int resultType;
};

class Primitive_GetStyle_AsyncWorker : public PromiseWorker
{
  public:
    Primitive_GetStyle_AsyncWorker(MbPrimitive *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Primitive_GetStyle_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPrimitive *_underlying;

    int _result;

    int resultType;
};

class Primitive_SetColor_AsyncWorker : public PromiseWorker
{
  public:
    Primitive_SetColor_AsyncWorker(MbPrimitive *_underlying, Napi::Promise::Deferred const &d, uint32 c);
    virtual ~Primitive_SetColor_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPrimitive *_underlying;
    uint32 c;

    int resultType;
};

class Primitive_GetColor_AsyncWorker : public PromiseWorker
{
  public:
    Primitive_GetColor_AsyncWorker(MbPrimitive *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Primitive_GetColor_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPrimitive *_underlying;

    uint32 _result;

    int resultType;
};

class Primitive_AttributesConvert_AsyncWorker : public PromiseWorker
{
  public:
    Primitive_AttributesConvert_AsyncWorker(MbPrimitive *_underlying, Napi::Promise::Deferred const &d, MbGrid &other);
    virtual ~Primitive_AttributesConvert_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbPrimitive *_underlying;
    MbGrid &other;

    int resultType;
};

#endif
