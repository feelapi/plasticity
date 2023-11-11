// This is a generated file, modify: generate/templates/ContourGraph.h

#ifndef CONTOURGRAPH_H
#define CONTOURGRAPH_H

#include <napi.h>
#include <vector>

#include <contour_graph.h>

#include "Curve.h"
#include "Contour.h"
#include "ProgressIndicator.h"
#include "Graph.h"

#include "PromiseWorker.h"

class ContourGraph : public Napi::ObjectWrap<ContourGraph>
{
  public:
    static Napi::Object Init(Napi::Env env, Napi::Object exports);

    static Napi::Value OuterContoursBuilder(const Napi::CallbackInfo &info);
    static Napi::Value OuterContoursBuilder_async(const Napi::CallbackInfo &info);
    static Napi::Value RemoveContourGaps(const Napi::CallbackInfo &info);
    static Napi::Value RemoveContourGaps_async(const Napi::CallbackInfo &info);
};

class ContourGraph_OuterContoursBuilder_AsyncWorker : public PromiseWorker
{
  public:
    ContourGraph_OuterContoursBuilder_AsyncWorker(Napi::Promise::Deferred const &d, const RPArray<MbCurve> &curveList,
                                                  double accuracy = METRIC_ACCURACY, bool strict = false,
                                                  VERSION version = Math::DefaultMathVersion(),
                                                  ProgressIndicator *progInd = NULL);
    virtual ~ContourGraph_OuterContoursBuilder_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    const RPArray<MbCurve> &curveList;
    double accuracy = METRIC_ACCURACY;
    bool strict = false;
    VERSION version = Math::DefaultMathVersion();
    ProgressIndicator *progInd = NULL;

    MpGraph *graph;

    PArray<MbContour> *contours;

    int resultType;
};

class ContourGraph_RemoveContourGaps_AsyncWorker : public PromiseWorker
{
  public:
    ContourGraph_RemoveContourGaps_AsyncWorker(Napi::Promise::Deferred const &d, MbContour &contour, double accuracy,
                                               bool canInsert, bool canReplace);
    virtual ~ContourGraph_RemoveContourGaps_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbContour &contour;
    double accuracy;
    bool canInsert;
    bool canReplace;

    bool _result;

    int resultType;
};

#endif
