// This is a generated file, modify: generate/templates/FaceShell.h

#ifndef FACESHELL_H
#define FACESHELL_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <topology_faceset.h>

#include "TopItem.h"
#include "CurveEdge.h"
#include "EdgeFunction.h"
#include "Function.h"
#include "EdgeFacesIndexes.h"
#include "ShellHistory.h"
#include "RegDuplicate.h"
#include "Function.h"
#include "Curve3D.h"
#include "PromiseWorker.h"

class FaceShell : public Napi::ObjectWrap<FaceShell>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbFaceShell *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    FaceShell(const Napi::CallbackInfo &info);

    Napi::Value GetBoundaryEdges(const Napi::CallbackInfo &info);
    Napi::Value GetBoundaryEdges_async(const Napi::CallbackInfo &info);
    Napi::Value GetFaces(const Napi::CallbackInfo &info);
    Napi::Value GetFaces_async(const Napi::CallbackInfo &info);
    Napi::Value FindFacesIndexByEdges(const Napi::CallbackInfo &info);
    Napi::Value FindFacesIndexByEdges_async(const Napi::CallbackInfo &info);
    Napi::Value FindEdgesByFacesIndex(const Napi::CallbackInfo &info);
    Napi::Value FindEdgesByFacesIndex_async(const Napi::CallbackInfo &info);
    Napi::Value Copy(const Napi::CallbackInfo &info);
    Napi::Value Copy_async(const Napi::CallbackInfo &info);
    Napi::Value GetEdge(const Napi::CallbackInfo &info);
    Napi::Value GetEdge_async(const Napi::CallbackInfo &info);
    Napi::Value SetOwnChangedThrough(const Napi::CallbackInfo &info);
    Napi::Value SetOwnChangedThrough_async(const Napi::CallbackInfo &info);
    Napi::Value GetUseCount(const Napi::CallbackInfo &info);
    Napi::Value GetUseCount_async(const Napi::CallbackInfo &info);
    Napi::Value AddRef(const Napi::CallbackInfo &info);
    Napi::Value AddRef_async(const Napi::CallbackInfo &info);
    Napi::Value Id(const Napi::CallbackInfo &info);

    MbFaceShell *_underlying;

    ~FaceShell();

  private:
};

class FaceShell_GetBoundaryEdges_AsyncWorker : public PromiseWorker
{
  public:
    FaceShell_GetBoundaryEdges_AsyncWorker(MbFaceShell *_underlying, Napi::Promise::Deferred const &d);
    virtual ~FaceShell_GetBoundaryEdges_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFaceShell *_underlying;

    RPArray<MbCurveEdge> *edges;

    int resultType;
};

class FaceShell_GetFaces_AsyncWorker : public PromiseWorker
{
  public:
    FaceShell_GetFaces_AsyncWorker(MbFaceShell *_underlying, Napi::Promise::Deferred const &d);
    virtual ~FaceShell_GetFaces_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFaceShell *_underlying;

    RPArray<MbFace> *faces;

    int resultType;
};

class FaceShell_FindFacesIndexByEdges_AsyncWorker : public PromiseWorker
{
  public:
    FaceShell_FindFacesIndexByEdges_AsyncWorker(MbFaceShell *_underlying, Napi::Promise::Deferred const &d,
                                                const SArray<MbEdgeFunction> &init);
    virtual ~FaceShell_FindFacesIndexByEdges_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFaceShell *_underlying;
    const SArray<MbEdgeFunction> &init;

    RPArray<MbFunction> *functions;

    RPArray<MbCurve3D> *slideways;

    SArray<MbEdgeFacesIndexes> *indexes;

    int resultType;
};

class FaceShell_FindEdgesByFacesIndex_AsyncWorker : public PromiseWorker
{
  public:
    FaceShell_FindEdgesByFacesIndex_AsyncWorker(MbFaceShell *_underlying, Napi::Promise::Deferred const &d,
                                                const SArray<MbEdgeFacesIndexes> &indexes,
                                                RPArray<MbFunction> &initFunctions, RPArray<MbCurve3D> &initSlideways);
    virtual ~FaceShell_FindEdgesByFacesIndex_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFaceShell *_underlying;
    const SArray<MbEdgeFacesIndexes> &indexes;
    RPArray<MbFunction> &initFunctions;
    RPArray<MbCurve3D> &initSlideways;

    RPArray<MbFunction> *functions;

    RPArray<MbCurve3D> *slideways;

    RPArray<MbCurveEdge> *initCurves;

    int resultType;
};

class FaceShell_Copy_AsyncWorker : public PromiseWorker
{
  public:
    FaceShell_Copy_AsyncWorker(MbFaceShell *_underlying, Napi::Promise::Deferred const &d, MbeCopyMode sameShell,
                               MbShellHistory *history = NULL, MbRegDuplicate *iReg = NULL);
    virtual ~FaceShell_Copy_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFaceShell *_underlying;
    MbeCopyMode sameShell;
    MbShellHistory *history = NULL;
    MbRegDuplicate *iReg = NULL;

    MbFaceShell *_result;

    int resultType;
};

class FaceShell_GetEdge_AsyncWorker : public PromiseWorker
{
  public:
    FaceShell_GetEdge_AsyncWorker(MbFaceShell *_underlying, Napi::Promise::Deferred const &d, size_t index);
    virtual ~FaceShell_GetEdge_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFaceShell *_underlying;
    size_t index;

    MbCurveEdge *_result;

    int resultType;
};

class FaceShell_SetOwnChangedThrough_AsyncWorker : public PromiseWorker
{
  public:
    FaceShell_SetOwnChangedThrough_AsyncWorker(MbFaceShell *_underlying, Napi::Promise::Deferred const &d,
                                               MbeChangedType n);
    virtual ~FaceShell_SetOwnChangedThrough_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFaceShell *_underlying;
    MbeChangedType n;

    int resultType;
};

class FaceShell_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    FaceShell_GetUseCount_AsyncWorker(MbFaceShell *_underlying, Napi::Promise::Deferred const &d);
    virtual ~FaceShell_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFaceShell *_underlying;

    refcount_t _result;

    int resultType;
};

class FaceShell_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    FaceShell_AddRef_AsyncWorker(MbFaceShell *_underlying, Napi::Promise::Deferred const &d);
    virtual ~FaceShell_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbFaceShell *_underlying;

    int resultType;
};

#endif
