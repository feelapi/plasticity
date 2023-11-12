// This is a generated file, modify: generate/templates/Grid.h

#ifndef GRID_H
#define GRID_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <mesh_primitive.h>

#include "Primitive.h"
#include "StepData.h"
#include "Cube.h"
#include "FloatPoint3D.h"
#include "PromiseWorker.h"

class Grid : public Napi::ObjectWrap<Grid>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbGrid *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    Grid(const Napi::CallbackInfo &info);

    Napi::Value SetStepData(const Napi::CallbackInfo &info);
    Napi::Value SetStepData_async(const Napi::CallbackInfo &info);
    Napi::Value IsSearchTreeReady(const Napi::CallbackInfo &info);
    Napi::Value IsSearchTreeReady_async(const Napi::CallbackInfo &info);
    Napi::Value CreateSearchTree(const Napi::CallbackInfo &info);
    Napi::Value CreateSearchTree_async(const Napi::CallbackInfo &info);
    Napi::Value DeleteSearchTree(const Napi::CallbackInfo &info);
    Napi::Value DeleteSearchTree_async(const Napi::CallbackInfo &info);
    Napi::Value GetCube(const Napi::CallbackInfo &info);
    Napi::Value GetCube_async(const Napi::CallbackInfo &info);
    Napi::Value CreateGridTopology(const Napi::CallbackInfo &info);
    Napi::Value CreateGridTopology_async(const Napi::CallbackInfo &info);
    Napi::Value IsGridTopologyReady(const Napi::CallbackInfo &info);
    Napi::Value IsGridTopologyReady_async(const Napi::CallbackInfo &info);
    Napi::Value GetBuffers(const Napi::CallbackInfo &info);
    Napi::Value GetBuffers_async(const Napi::CallbackInfo &info);
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

    MbGrid *_underlying;

    ~Grid();

  private:
};

class Grid_SetStepData_AsyncWorker : public PromiseWorker
{
  public:
    Grid_SetStepData_AsyncWorker(MbGrid *_underlying, Napi::Promise::Deferred const &d, const MbStepData &stData);
    virtual ~Grid_SetStepData_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbGrid *_underlying;
    const MbStepData &stData;

    int resultType;
};

class Grid_IsSearchTreeReady_AsyncWorker : public PromiseWorker
{
  public:
    Grid_IsSearchTreeReady_AsyncWorker(MbGrid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Grid_IsSearchTreeReady_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbGrid *_underlying;

    bool _result;

    int resultType;
};

class Grid_CreateSearchTree_AsyncWorker : public PromiseWorker
{
  public:
    Grid_CreateSearchTree_AsyncWorker(MbGrid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Grid_CreateSearchTree_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbGrid *_underlying;

    bool _result;

    int resultType;
};

class Grid_DeleteSearchTree_AsyncWorker : public PromiseWorker
{
  public:
    Grid_DeleteSearchTree_AsyncWorker(MbGrid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Grid_DeleteSearchTree_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbGrid *_underlying;

    int resultType;
};

class Grid_GetCube_AsyncWorker : public PromiseWorker
{
  public:
    Grid_GetCube_AsyncWorker(MbGrid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Grid_GetCube_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbGrid *_underlying;

    const MbCube *_result;

    int resultType;
};

class Grid_CreateGridTopology_AsyncWorker : public PromiseWorker
{
  public:
    Grid_CreateGridTopology_AsyncWorker(MbGrid *_underlying, Napi::Promise::Deferred const &d, bool keepExisting);
    virtual ~Grid_CreateGridTopology_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbGrid *_underlying;
    bool keepExisting;

    int resultType;
};

class Grid_IsGridTopologyReady_AsyncWorker : public PromiseWorker
{
  public:
    Grid_IsGridTopologyReady_AsyncWorker(MbGrid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Grid_IsGridTopologyReady_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbGrid *_underlying;

    bool _result;

    int resultType;
};

class Grid_SetItem_AsyncWorker : public PromiseWorker
{
  public:
    Grid_SetItem_AsyncWorker(MbGrid *_underlying, Napi::Promise::Deferred const &d, const MbRefItem *g);
    virtual ~Grid_SetItem_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbGrid *_underlying;
    const MbRefItem *g;

    int resultType;
};

class Grid_SetPrimitiveName_AsyncWorker : public PromiseWorker
{
  public:
    Grid_SetPrimitiveName_AsyncWorker(MbGrid *_underlying, Napi::Promise::Deferred const &d, SimpleName n);
    virtual ~Grid_SetPrimitiveName_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbGrid *_underlying;
    SimpleName n;

    int resultType;
};

class Grid_SetPrimitiveType_AsyncWorker : public PromiseWorker
{
  public:
    Grid_SetPrimitiveType_AsyncWorker(MbGrid *_underlying, Napi::Promise::Deferred const &d, MbeRefType t);
    virtual ~Grid_SetPrimitiveType_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbGrid *_underlying;
    MbeRefType t;

    int resultType;
};

class Grid_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    Grid_GetUseCount_AsyncWorker(MbGrid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Grid_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbGrid *_underlying;

    refcount_t _result;

    int resultType;
};

class Grid_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    Grid_AddRef_AsyncWorker(MbGrid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Grid_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbGrid *_underlying;

    int resultType;
};

class Grid_SetStyle_AsyncWorker : public PromiseWorker
{
  public:
    Grid_SetStyle_AsyncWorker(MbGrid *_underlying, Napi::Promise::Deferred const &d, int s);
    virtual ~Grid_SetStyle_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbGrid *_underlying;
    int s;

    int resultType;
};

class Grid_GetStyle_AsyncWorker : public PromiseWorker
{
  public:
    Grid_GetStyle_AsyncWorker(MbGrid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Grid_GetStyle_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbGrid *_underlying;

    int _result;

    int resultType;
};

class Grid_SetColor_AsyncWorker : public PromiseWorker
{
  public:
    Grid_SetColor_AsyncWorker(MbGrid *_underlying, Napi::Promise::Deferred const &d, uint32 c);
    virtual ~Grid_SetColor_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbGrid *_underlying;
    uint32 c;

    int resultType;
};

class Grid_GetColor_AsyncWorker : public PromiseWorker
{
  public:
    Grid_GetColor_AsyncWorker(MbGrid *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Grid_GetColor_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbGrid *_underlying;

    uint32 _result;

    int resultType;
};

class Grid_AttributesConvert_AsyncWorker : public PromiseWorker
{
  public:
    Grid_AttributesConvert_AsyncWorker(MbGrid *_underlying, Napi::Promise::Deferred const &d, MbGrid &other);
    virtual ~Grid_AttributesConvert_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbGrid *_underlying;
    MbGrid &other;

    int resultType;
};

#endif
