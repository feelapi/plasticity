// This is a generated file, modify: generate/templates/ContourGraph.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/ContourGraph.h"
#include "../include/Error.h"

#include "tool_mutex.h"

Napi::Object ContourGraph::Init(Napi::Env env, Napi::Object exports)
{
    Napi::Object object = Napi::Object::New(env);

    object.Set("OuterContoursBuilder", Napi::Function::New<&ContourGraph::OuterContoursBuilder>(env));
    object.Set("OuterContoursBuilder_async", Napi::Function::New<&ContourGraph::OuterContoursBuilder_async>(env));
    object.Set("RemoveContourGaps", Napi::Function::New<&ContourGraph::RemoveContourGaps>(env));
    object.Set("RemoveContourGaps_async", Napi::Function::New<&ContourGraph::RemoveContourGaps_async>(env));

    exports.Set("ContourGraph", object);

    return exports;
}

Napi::Value ContourGraph::OuterContoursBuilder(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsArray()))
    {
        Napi::Error::New(env, "Array curveList is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    PArray<MbContour> *contours = new PArray<MbContour>;

    RPArray<MbCurve> curveList;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        const Napi::Array curveList_ = Napi::Array(env, info[0]);
        curveList = RPArray<MbCurve>(curveList_.Length(), 1);

        for (size_t i = 0; i < curveList_.Length(); i++)
        {
            if (curveList_[i].IsNull() || curveList_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!curveList_[i].IsObject() || !curveList_[i].ToObject().InstanceOf(Curve::GetConstructor(env)))
            {
                Napi::Error::New(env, "Curve curveList is required.").ThrowAsJavaScriptException();
                return env.Undefined();
            }
            else
            {
                curveList.Add(Curve::Unwrap(curveList_[i].ToObject())->_underlying);
            }
        }
    }

    double accuracy = info[1].ToNumber().DoubleValue();

    bool strict = info[2].ToBoolean();

    int version = info[3].ToNumber().Int64Value();

    ProgressIndicator *progInd = NULL;
    if (!(info[4].IsNull() || info[4].IsUndefined()))
    {
        ProgressIndicator *progInd_ = ProgressIndicator::Unwrap(info[4].ToObject());
        progInd = progInd_;
    }

    MpGraph *graph = ::OuterContoursBuilder(
        curveList, *contours, info.Length() == 1 || info[1].IsNull() ? METRIC_ACCURACY : accuracy,
        info.Length() == 2 || info[2].IsNull() ? false : strict,
        info.Length() == 3 || info[3].IsNull() ? Math::DefaultMathVersion() : version,
        info.Length() == 4 || info[4].IsNull() ? NULL : progInd

    );

    Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

    if (graph != NULL)
    {
        _to = Graph::NewInstance(env, (MpGraph *)graph);
    }
    else
    {
        _to = env.Null();
    }

    _toReturn.Set(Napi::String::New(env, "graph"), _to);
    Napi::Array arr_contours = Napi::Array::New(env);
    for (size_t i = 0; i < contours->Count(); i++)
    {
        arr_contours[i] = Contour::NewInstance(env,

                                               (*contours)[i]

        );
    }
    _to = arr_contours;

    _toReturn.Set(Napi::String::New(env, "contours"), _to);
    return _toReturn;
}

Napi::Value ContourGraph::OuterContoursBuilder_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsArray()))
    {
        deferred.Reject(Napi::String::New(env, "Array curveList is required."));
        return deferred.Promise();
    }

    RPArray<MbCurve> *curveList;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        const Napi::Array curveList_ = Napi::Array(env, info[0]);
        curveList = new RPArray<MbCurve>(curveList_.Length(), 1);

        for (size_t i = 0; i < curveList_.Length(); i++)
        {
            if (curveList_[i].IsNull() || curveList_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!curveList_[i].IsObject() || !curveList_[i].ToObject().InstanceOf(Curve::GetConstructor(env)))
            {
                deferred.Reject(Napi::String::New(env, "Curve curveList is required."));
                return deferred.Promise();
            }
            else
            {
                curveList->Add(Curve::Unwrap(curveList_[i].ToObject())->_underlying);
            }
        }
    }

    double accuracy = info[1].ToNumber().DoubleValue();

    bool strict = info[2].ToBoolean();

    int version = info[3].ToNumber().Int64Value();

    ProgressIndicator *progInd = NULL;
    if (!(info[4].IsNull() || info[4].IsUndefined()))
    {
        ProgressIndicator *progInd_ = ProgressIndicator::Unwrap(info[4].ToObject());
        progInd = progInd_;
    }

    ContourGraph_OuterContoursBuilder_AsyncWorker *asyncWorker =
        new ContourGraph_OuterContoursBuilder_AsyncWorker(deferred, *curveList,

                                                          accuracy,

                                                          strict,

                                                          version,

                                                          progInd);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ContourGraph::RemoveContourGaps(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Contour::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Contour contour is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        Napi::Error::New(env, "number accuracy is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 || !(info[2].IsBoolean()))
    {
        Napi::Error::New(env, "boolean canInsert is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 3 || !(info[3].IsBoolean()))
    {
        Napi::Error::New(env, "boolean canReplace is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'contour'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Contour *contour_ = Contour::Unwrap(info[0].ToObject());

    MbContour &contour = *contour_->_underlying;

    double accuracy = info[1].ToNumber().DoubleValue();

    bool canInsert = info[2].ToBoolean();

    bool canReplace = info[3].ToBoolean();

    bool _result = ::RemoveContourGaps(contour, accuracy, canInsert, canReplace

    );

    Napi::Value _to;

    _to = Napi::Boolean::New(env, _result);

    return _to;
}

Napi::Value ContourGraph::RemoveContourGaps_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Contour::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Contour contour is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsNumber()))
    {
        deferred.Reject(Napi::String::New(env, "number accuracy is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 || !(info[2].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean canInsert is required."));
        return deferred.Promise();
    }
    if (info.Length() == 3 || !(info[3].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean canReplace is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'contour'"));
        return deferred.Promise();
    }
    const class Contour *contour_ = Contour::Unwrap(info[0].ToObject());

    MbContour &contour = *contour_->_underlying;

    double accuracy = info[1].ToNumber().DoubleValue();

    bool canInsert = info[2].ToBoolean();

    bool canReplace = info[3].ToBoolean();

    ContourGraph_RemoveContourGaps_AsyncWorker *asyncWorker =
        new ContourGraph_RemoveContourGaps_AsyncWorker(deferred,

                                                       contour,

                                                       accuracy,

                                                       canInsert,

                                                       canReplace);
    asyncWorker->Queue();
    return deferred.Promise();
}

ContourGraph_OuterContoursBuilder_AsyncWorker::ContourGraph_OuterContoursBuilder_AsyncWorker(
    Napi::Promise::Deferred const &d, const RPArray<MbCurve> &curveList, double accuracy, bool strict, VERSION version,
    ProgressIndicator *progInd)
    : PromiseWorker(d), curveList(curveList), accuracy(accuracy), strict(strict), version(version), progInd(progInd){};

void ContourGraph_OuterContoursBuilder_AsyncWorker::Execute()
{
    EnterParallelRegion();

    PArray<MbContour> *contours = new PArray<MbContour>;

    MpGraph *graph = ::OuterContoursBuilder(curveList, *contours, accuracy, strict, version, progInd);

    this->graph = graph;
    this->contours = contours;

    ExitParallelRegion();
}

void ContourGraph_OuterContoursBuilder_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    Napi::Object _toReturn = Napi::Object::New(env);

    MpGraph *graph = this->graph;
    if (graph != NULL)
    {
        _to = Graph::NewInstance(env, (MpGraph *)graph);
    }
    else
    {
        _to = env.Null();
    }

    _toReturn.Set(Napi::String::New(env, "graph"), _to);
    PArray<MbContour> *contours = this->contours;
    Napi::Array arr_contours = Napi::Array::New(env);
    for (size_t i = 0; i < contours->Count(); i++)
    {
        arr_contours[i] = Contour::NewInstance(env,

                                               (*contours)[i]

        );
    }
    _to = arr_contours;

    _toReturn.Set(Napi::String::New(env, "contours"), _to);

    deferred.Resolve(_toReturn);
}

void ContourGraph_OuterContoursBuilder_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                           Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ContourGraph_RemoveContourGaps_AsyncWorker::ContourGraph_RemoveContourGaps_AsyncWorker(Napi::Promise::Deferred const &d,
                                                                                       MbContour &contour,
                                                                                       double accuracy, bool canInsert,
                                                                                       bool canReplace)
    : PromiseWorker(d), contour(contour), accuracy(accuracy), canInsert(canInsert), canReplace(canReplace){};

void ContourGraph_RemoveContourGaps_AsyncWorker::Execute()
{
    EnterParallelRegion();

    bool _result = ::RemoveContourGaps(contour, accuracy, canInsert, canReplace);

    this->_result = _result;

    ExitParallelRegion();
}

void ContourGraph_RemoveContourGaps_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    bool _result = this->_result;
    _to = Napi::Boolean::New(env, _result);

    deferred.Resolve(_to);
}

void ContourGraph_RemoveContourGaps_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                        Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
