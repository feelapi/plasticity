// This is a generated file, modify: generate/templates/ActionShell.h

#ifndef ACTIONSHELL_H
#define ACTIONSHELL_H

#include <napi.h>
#include <vector>

#include <action_shell.h>

#include "Solid.h"
#include "Face.h"
#include "CurveEdge.h"
#include "SNameMaker.h"
#include "_ExtensionValues.h"
#include "_SweptValues.h"

#include "PromiseWorker.h"

class ActionShell : public Napi::ObjectWrap<ActionShell>
{
  public:
    static Napi::Object Init(Napi::Env env, Napi::Object exports);

    static Napi::Value ExtensionShell(const Napi::CallbackInfo &info);
    static Napi::Value ExtensionShell_async(const Napi::CallbackInfo &info);
    static Napi::Value OffsetShell(const Napi::CallbackInfo &info);
    static Napi::Value OffsetShell_async(const Napi::CallbackInfo &info);
};

class ActionShell_ExtensionShell_AsyncWorker : public PromiseWorker
{
  public:
    ActionShell_ExtensionShell_AsyncWorker(Napi::Promise::Deferred const &d, MbSolid &solid, MbeCopyMode sameShell,
                                           MbFace &face, const RPArray<MbCurveEdge> &edges,
                                           const ExtensionValues &params, const MbSNameMaker &operNames);
    virtual ~ActionShell_ExtensionShell_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid &solid;
    MbeCopyMode sameShell;
    MbFace &face;
    const RPArray<MbCurveEdge> &edges;
    const ExtensionValues &params;
    const MbSNameMaker &operNames;

    MbSolid *result;

    int resultType;
};

class ActionShell_OffsetShell_AsyncWorker : public PromiseWorker
{
  public:
    ActionShell_OffsetShell_AsyncWorker(Napi::Promise::Deferred const &d, MbSolid &solid, MbeCopyMode sameShell,
                                        RPArray<MbFace> &initFaces, bool checkFacesConnection, SweptValues &p,
                                        const MbSNameMaker &operNames, bool copyFaceAttrs);
    virtual ~ActionShell_OffsetShell_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid &solid;
    MbeCopyMode sameShell;
    RPArray<MbFace> &initFaces;
    bool checkFacesConnection;
    SweptValues &p;
    const MbSNameMaker &operNames;
    bool copyFaceAttrs;

    MbSolid *result;

    int resultType;
};

#endif
