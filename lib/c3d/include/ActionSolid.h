// This is a generated file, modify: generate/templates/ActionSolid.h

#ifndef ACTIONSOLID_H
#define ACTIONSOLID_H

#include <napi.h>
#include <vector>

#include <action_solid.h>

#include "CartPoint3D.h"
#include "Surface.h"
#include "SNameMaker.h"
#include "Solid.h"
#include "_SmoothValues.h"
#include "Face.h"
#include "CurveEdge.h"
#include "BooleanFlags.h"
#include "Placement3D.h"
#include "Contour.h"
#include "MergingFlags.h"
#include "_LoftedValues.h"
#include "SweptData.h"
#include "_ExtrusionValues.h"
#include "EdgeFunction.h"
#include "ShellCuttingParams.h"
#include "_SweptValues.h"
#include "_RevolutionValues.h"
#include "_EvolutionValues.h"
#include "_DuplicationValues.h"
#include "_HoleValues.h"

#include "PromiseWorker.h"

class ActionSolid : public Napi::ObjectWrap<ActionSolid>
{
  public:
    static Napi::Object Init(Napi::Env env, Napi::Object exports);

    static Napi::Value ElementarySolid(const Napi::CallbackInfo &info);
    static Napi::Value ElementarySolid_async(const Napi::CallbackInfo &info);
    static Napi::Value FilletSolid(const Napi::CallbackInfo &info);
    static Napi::Value FilletSolid_async(const Napi::CallbackInfo &info);
    static Napi::Value ChamferSolid(const Napi::CallbackInfo &info);
    static Napi::Value ChamferSolid_async(const Napi::CallbackInfo &info);
    static Napi::Value BooleanResult(const Napi::CallbackInfo &info);
    static Napi::Value BooleanResult_async(const Napi::CallbackInfo &info);
    static Napi::Value UnionResult(const Napi::CallbackInfo &info);
    static Napi::Value UnionResult_async(const Napi::CallbackInfo &info);
    static Napi::Value DraftSolid(const Napi::CallbackInfo &info);
    static Napi::Value DraftSolid_async(const Napi::CallbackInfo &info);
    static Napi::Value SolidCutting(const Napi::CallbackInfo &info);
    static Napi::Value SolidCutting_async(const Napi::CallbackInfo &info);
    static Napi::Value SplitSolid(const Napi::CallbackInfo &info);
    static Napi::Value SplitSolid_async(const Napi::CallbackInfo &info);
    static Napi::Value SplitSolidBySpaceItem(const Napi::CallbackInfo &info);
    static Napi::Value SplitSolidBySpaceItem_async(const Napi::CallbackInfo &info);
    static Napi::Value DetachParts(const Napi::CallbackInfo &info);
    static Napi::Value DetachParts_async(const Napi::CallbackInfo &info);
    static Napi::Value LoftedSolid(const Napi::CallbackInfo &info);
    static Napi::Value LoftedSolid_async(const Napi::CallbackInfo &info);
    static Napi::Value ExtrusionSolid(const Napi::CallbackInfo &info);
    static Napi::Value ExtrusionSolid_async(const Napi::CallbackInfo &info);
    static Napi::Value ExtrusionResult(const Napi::CallbackInfo &info);
    static Napi::Value ExtrusionResult_async(const Napi::CallbackInfo &info);
    static Napi::Value SymmetrySolid(const Napi::CallbackInfo &info);
    static Napi::Value SymmetrySolid_async(const Napi::CallbackInfo &info);
    static Napi::Value MirrorSolid(const Napi::CallbackInfo &info);
    static Napi::Value MirrorSolid_async(const Napi::CallbackInfo &info);
    static Napi::Value ThinSolid(const Napi::CallbackInfo &info);
    static Napi::Value ThinSolid_async(const Napi::CallbackInfo &info);
    static Napi::Value RevolutionSolid(const Napi::CallbackInfo &info);
    static Napi::Value RevolutionSolid_async(const Napi::CallbackInfo &info);
    static Napi::Value EvolutionSolid(const Napi::CallbackInfo &info);
    static Napi::Value EvolutionSolid_async(const Napi::CallbackInfo &info);
    static Napi::Value DuplicationSolid(const Napi::CallbackInfo &info);
    static Napi::Value DuplicationSolid_async(const Napi::CallbackInfo &info);
    static Napi::Value HoleSolid(const Napi::CallbackInfo &info);
    static Napi::Value HoleSolid_async(const Napi::CallbackInfo &info);
};

class ActionSolid_ElementarySolid_AsyncWorker : public PromiseWorker
{
  public:
    ActionSolid_ElementarySolid_AsyncWorker(Napi::Promise::Deferred const &d, const SArray<MbCartPoint3D> &points,
                                            ElementaryShellType solidType, const MbSNameMaker &names);
    virtual ~ActionSolid_ElementarySolid_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    const SArray<MbCartPoint3D> &points;
    ElementaryShellType solidType;
    const MbSNameMaker &names;

    MbSolid *result;

    int resultType;
};

class ActionSolid_FilletSolid_AsyncWorker : public PromiseWorker
{
  public:
    ActionSolid_FilletSolid_AsyncWorker(Napi::Promise::Deferred const &d, MbSolid &solid, MbeCopyMode sameShell,
                                        SArray<MbEdgeFunction> &initCurves, RPArray<MbFace> &initBounds,
                                        const SmoothValues &params, const MbSNameMaker &names);
    virtual ~ActionSolid_FilletSolid_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid &solid;
    MbeCopyMode sameShell;
    SArray<MbEdgeFunction> &initCurves;
    RPArray<MbFace> &initBounds;
    const SmoothValues &params;
    const MbSNameMaker &names;

    MbSolid *result;

    int resultType;
};

class ActionSolid_ChamferSolid_AsyncWorker : public PromiseWorker
{
  public:
    ActionSolid_ChamferSolid_AsyncWorker(Napi::Promise::Deferred const &d, MbSolid &solid, MbeCopyMode sameShell,
                                         RPArray<MbCurveEdge> &edges, const SmoothValues &params,
                                         const MbSNameMaker &names);
    virtual ~ActionSolid_ChamferSolid_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid &solid;
    MbeCopyMode sameShell;
    RPArray<MbCurveEdge> &edges;
    const SmoothValues &params;
    const MbSNameMaker &names;

    MbSolid *result;

    int resultType;
};

class ActionSolid_BooleanResult_AsyncWorker : public PromiseWorker
{
  public:
    ActionSolid_BooleanResult_AsyncWorker(Napi::Promise::Deferred const &d, MbSolid &solid1, MbeCopyMode sameShell1,
                                          MbSolid &solid2, MbeCopyMode sameShell2, OperationType oType,
                                          const MbBooleanFlags &flags, const MbSNameMaker &operNames);
    virtual ~ActionSolid_BooleanResult_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid &solid1;
    MbeCopyMode sameShell1;
    MbSolid &solid2;
    MbeCopyMode sameShell2;
    OperationType oType;
    const MbBooleanFlags &flags;
    const MbSNameMaker &operNames;

    MbSolid *result;

    int resultType;
};

class ActionSolid_UnionResult_AsyncWorker : public PromiseWorker
{
  public:
    ActionSolid_UnionResult_AsyncWorker(Napi::Promise::Deferred const &d, MbSolid *solid, MbeCopyMode sameShell,
                                        RPArray<MbSolid> &solids, MbeCopyMode sameShells, OperationType oType,
                                        bool checkIntersect, const MbMergingFlags &mergeFlags,
                                        const MbSNameMaker &names, bool isArray);
    virtual ~ActionSolid_UnionResult_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *solid;
    MbeCopyMode sameShell;
    RPArray<MbSolid> &solids;
    MbeCopyMode sameShells;
    OperationType oType;
    bool checkIntersect;
    const MbMergingFlags &mergeFlags;
    const MbSNameMaker &names;
    bool isArray;

    MbSolid *result;

    RPArray<MbSolid> *notGluedSolids;

    int resultType;
};

class ActionSolid_DraftSolid_AsyncWorker : public PromiseWorker
{
  public:
    ActionSolid_DraftSolid_AsyncWorker(Napi::Promise::Deferred const &d, MbSolid &solid, MbeCopyMode sameShell,
                                       const MbPlacement3D &neutralPlace, double angle, const RPArray<MbFace> &faces,
                                       MbeFacePropagation fp, bool reverse, const MbSNameMaker &names);
    virtual ~ActionSolid_DraftSolid_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid &solid;
    MbeCopyMode sameShell;
    const MbPlacement3D &neutralPlace;
    double angle;
    const RPArray<MbFace> &faces;
    MbeFacePropagation fp;
    bool reverse;
    const MbSNameMaker &names;

    MbSolid *result;

    int resultType;
};

class ActionSolid_SolidCutting_AsyncWorker : public PromiseWorker
{
  public:
    ActionSolid_SolidCutting_AsyncWorker(Napi::Promise::Deferred const &d, MbSolid &solid, MbeCopyMode sameShell,
                                         const MbShellCuttingParams &cuttingParams);
    virtual ~ActionSolid_SolidCutting_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid &solid;
    MbeCopyMode sameShell;
    const MbShellCuttingParams &cuttingParams;

    RPArray<MbSolid> *results;

    int resultType;
};

class ActionSolid_SplitSolid_AsyncWorker : public PromiseWorker
{
  public:
    ActionSolid_SplitSolid_AsyncWorker(Napi::Promise::Deferred const &d, MbSolid &solid, MbeCopyMode sameShell,
                                       const MbPlacement3D &spPlace, MbeSenseValue spType,
                                       const RPArray<MbContour> &spContours, bool spSame, RPArray<MbFace> &selFaces,
                                       const MbMergingFlags &flags, const MbSNameMaker &names);
    virtual ~ActionSolid_SplitSolid_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid &solid;
    MbeCopyMode sameShell;
    const MbPlacement3D &spPlace;
    MbeSenseValue spType;
    const RPArray<MbContour> &spContours;
    bool spSame;
    RPArray<MbFace> &selFaces;
    const MbMergingFlags &flags;
    const MbSNameMaker &names;

    MbSolid *result;

    int resultType;
};

class ActionSolid_SplitSolidBySpaceItem_AsyncWorker : public PromiseWorker
{
  public:
    ActionSolid_SplitSolidBySpaceItem_AsyncWorker(Napi::Promise::Deferred const &d, MbSolid &solid,
                                                  MbeCopyMode sameShell, const RPArray<MbSpaceItem> &spItems,
                                                  bool spSame, RPArray<MbFace> &selFaces, const MbMergingFlags &flags,
                                                  const MbSNameMaker &names);
    virtual ~ActionSolid_SplitSolidBySpaceItem_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid &solid;
    MbeCopyMode sameShell;
    const RPArray<MbSpaceItem> &spItems;
    bool spSame;
    RPArray<MbFace> &selFaces;
    const MbMergingFlags &flags;
    const MbSNameMaker &names;

    MbSolid *result;

    int resultType;
};

class ActionSolid_DetachParts_AsyncWorker : public PromiseWorker
{
  public:
    ActionSolid_DetachParts_AsyncWorker(Napi::Promise::Deferred const &d, MbSolid &solid, bool sort,
                                        const MbSNameMaker &names);
    virtual ~ActionSolid_DetachParts_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid &solid;
    bool sort;
    const MbSNameMaker &names;

    size_t count;

    RPArray<MbSolid> *parts;

    int resultType;
};

class ActionSolid_LoftedSolid_AsyncWorker : public PromiseWorker
{
  public:
    ActionSolid_LoftedSolid_AsyncWorker(Napi::Promise::Deferred const &d, SArray<MbPlacement3D> &pl,
                                        RPArray<MbContour> &c, const MbCurve3D *spine, const LoftedValues &params,
                                        SArray<MbCartPoint3D> *ps, const MbSNameMaker &names,
                                        RPArray<MbSNameMaker> &ns);
    virtual ~ActionSolid_LoftedSolid_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    SArray<MbPlacement3D> &pl;
    RPArray<MbContour> &c;
    const MbCurve3D *spine;
    const LoftedValues &params;
    SArray<MbCartPoint3D> *ps;
    const MbSNameMaker &names;
    RPArray<MbSNameMaker> &ns;

    MbSolid *result;

    int resultType;
};

class ActionSolid_ExtrusionSolid_AsyncWorker : public PromiseWorker
{
  public:
    ActionSolid_ExtrusionSolid_AsyncWorker(Napi::Promise::Deferred const &d, const MbSweptData &sweptData,
                                           const MbVector3D &direction, const MbSolid *solid1, const MbSolid *solid2,
                                           bool checkIntersection, const ExtrusionValues &params,
                                           const MbSNameMaker &operNames, const RPArray<MbSNameMaker> &contoursNames);
    virtual ~ActionSolid_ExtrusionSolid_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    const MbSweptData &sweptData;
    const MbVector3D &direction;
    const MbSolid *solid1;
    const MbSolid *solid2;
    bool checkIntersection;
    const ExtrusionValues &params;
    const MbSNameMaker &operNames;
    const RPArray<MbSNameMaker> &contoursNames;

    MbSolid *result;

    int resultType;
};

class ActionSolid_ExtrusionResult_AsyncWorker : public PromiseWorker
{
  public:
    ActionSolid_ExtrusionResult_AsyncWorker(Napi::Promise::Deferred const &d, MbSolid &solid, MbeCopyMode sameShell,
                                            const MbSweptData &sweptData, const MbVector3D &direction,
                                            const ExtrusionValues &params, OperationType oType,
                                            const MbSNameMaker &operNames, const RPArray<MbSNameMaker> &contoursNames);
    virtual ~ActionSolid_ExtrusionResult_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid &solid;
    MbeCopyMode sameShell;
    const MbSweptData &sweptData;
    const MbVector3D &direction;
    const ExtrusionValues &params;
    OperationType oType;
    const MbSNameMaker &operNames;
    const RPArray<MbSNameMaker> &contoursNames;

    MbSolid *result;

    int resultType;
};

class ActionSolid_SymmetrySolid_AsyncWorker : public PromiseWorker
{
  public:
    ActionSolid_SymmetrySolid_AsyncWorker(Napi::Promise::Deferred const &d, MbSolid &solid, MbeCopyMode sameShell,
                                          const MbPlacement3D &place, const MbSNameMaker &names);
    virtual ~ActionSolid_SymmetrySolid_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid &solid;
    MbeCopyMode sameShell;
    const MbPlacement3D &place;
    const MbSNameMaker &names;

    MbSolid *result;

    int resultType;
};

class ActionSolid_MirrorSolid_AsyncWorker : public PromiseWorker
{
  public:
    ActionSolid_MirrorSolid_AsyncWorker(Napi::Promise::Deferred const &d, const MbSolid &solid,
                                        const MbPlacement3D &place, const MbSNameMaker &names);
    virtual ~ActionSolid_MirrorSolid_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    const MbSolid &solid;
    const MbPlacement3D &place;
    const MbSNameMaker &names;

    MbSolid *result;

    int resultType;
};

class ActionSolid_ThinSolid_AsyncWorker : public PromiseWorker
{
  public:
    ActionSolid_ThinSolid_AsyncWorker(Napi::Promise::Deferred const &d, MbSolid &solid, MbeCopyMode sameShell,
                                      RPArray<MbFace> &outFaces, RPArray<MbFace> &offFaces, SArray<double> &offDists,
                                      SweptValues &params, const MbSNameMaker &names, bool copyFaceAttrs);
    virtual ~ActionSolid_ThinSolid_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid &solid;
    MbeCopyMode sameShell;
    RPArray<MbFace> &outFaces;
    RPArray<MbFace> &offFaces;
    SArray<double> &offDists;
    SweptValues &params;
    const MbSNameMaker &names;
    bool copyFaceAttrs;

    MbSolid *result;

    int resultType;
};

class ActionSolid_RevolutionSolid_AsyncWorker : public PromiseWorker
{
  public:
    ActionSolid_RevolutionSolid_AsyncWorker(Napi::Promise::Deferred const &d, const MbSweptData &sweptData,
                                            const MbAxis3D &axis, const RevolutionValues &params,
                                            const MbSNameMaker &operNames, const RPArray<MbSNameMaker> &contoursNames);
    virtual ~ActionSolid_RevolutionSolid_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    const MbSweptData &sweptData;
    const MbAxis3D &axis;
    const RevolutionValues &params;
    const MbSNameMaker &operNames;
    const RPArray<MbSNameMaker> &contoursNames;

    MbSolid *result;

    int resultType;
};

class ActionSolid_EvolutionSolid_AsyncWorker : public PromiseWorker
{
  public:
    ActionSolid_EvolutionSolid_AsyncWorker(Napi::Promise::Deferred const &d, const MbSweptData &sweptData,
                                           const MbCurve3D &spine, const EvolutionValues &params,
                                           const MbSNameMaker &operNames, const RPArray<MbSNameMaker> &contoursNames,
                                           const MbSNameMaker &spineNames);
    virtual ~ActionSolid_EvolutionSolid_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    const MbSweptData &sweptData;
    const MbCurve3D &spine;
    const EvolutionValues &params;
    const MbSNameMaker &operNames;
    const RPArray<MbSNameMaker> &contoursNames;
    const MbSNameMaker &spineNames;

    MbSolid *result;

    int resultType;
};

class ActionSolid_DuplicationSolid_AsyncWorker : public PromiseWorker
{
  public:
    ActionSolid_DuplicationSolid_AsyncWorker(Napi::Promise::Deferred const &d, const MbSolid &solid,
                                             const DuplicationValues &params, const MbSNameMaker &names);
    virtual ~ActionSolid_DuplicationSolid_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    const MbSolid &solid;
    const DuplicationValues &params;
    const MbSNameMaker &names;

    MbSolid *result;

    int resultType;
};

class ActionSolid_HoleSolid_AsyncWorker : public PromiseWorker
{
  public:
    ActionSolid_HoleSolid_AsyncWorker(Napi::Promise::Deferred const &d, MbSolid *solid, MbeCopyMode sameShell,
                                      const MbPlacement3D &place, const HoleValues &params, const MbSNameMaker &names);
    virtual ~ActionSolid_HoleSolid_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbSolid *solid;
    MbeCopyMode sameShell;
    const MbPlacement3D &place;
    const HoleValues &params;
    const MbSNameMaker &names;

    MbSolid *result;

    int resultType;
};

#endif
