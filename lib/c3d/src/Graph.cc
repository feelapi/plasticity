// This is a generated file, modify: generate/templates/Graph.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/Graph.h"

#include "tool_mutex.h"

Napi::Object Graph::Init(const Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(env, "Graph",
                                      {
                                          InstanceMethod<&Graph::GetLoopsCount>("GetLoopsCount"),
                                          InstanceMethod<&Graph::GetLoopsCount_async>("GetLoopsCount_async"),
                                          InstanceMethod<&Graph::GetUsedCurves>("GetUsedCurves"),
                                          InstanceMethod<&Graph::GetUsedCurves_async>("GetUsedCurves_async"),
                                          InstanceMethod<&Graph::Id>("Id"),

                                      });
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Graph", func);

    return exports;
}

Graph::Graph(const Napi::CallbackInfo &info) : Napi::ObjectWrap<Graph>(info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__")
        return;
    Napi::Error::New(env, "Graph cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object Graph::NewInstance(Napi::Env env, MpGraph *underlying)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Graph");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference *constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Graph *unwrapped = Graph::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Graph::GetConstructor(Napi::Env env)
{
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Graph");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

Napi::Value Graph::GetLoopsCount(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    size_t _result = _underlying->GetLoopsCount(

    );

    Napi::Value _to;

    _to = Napi::Number::New(env, _result);

    return _to;
}

Napi::Value Graph::GetLoopsCount_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);

    Graph_GetLoopsCount_AsyncWorker *asyncWorker = new Graph_GetLoopsCount_AsyncWorker(_underlying, deferred);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value Graph::GetUsedCurves(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsArray()))
    {
        Napi::Error::New(env, "Array curveList is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    RPArray<MbCurve> *usedCurves = new RPArray<MbCurve>;

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

    _underlying->GetUsedCurves(curveList, *usedCurves

    );

    Napi::Value _to;

    Napi::Array arr_usedCurves = Napi::Array::New(env);
    for (size_t i = 0; i < usedCurves->Count(); i++)
    {
        arr_usedCurves[i] = Curve::NewInstance(env,

                                               (*usedCurves)[i]

        );
    }
    _to = arr_usedCurves;

    return _to;
}

Napi::Value Graph::GetUsedCurves_async(const Napi::CallbackInfo &info)
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

    Graph_GetUsedCurves_AsyncWorker *asyncWorker =
        new Graph_GetUsedCurves_AsyncWorker(_underlying, deferred, *curveList);
    asyncWorker->Queue();
    return deferred.Promise();
}

Napi::Value Graph::Id(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
}

Graph_GetLoopsCount_AsyncWorker::Graph_GetLoopsCount_AsyncWorker(MpGraph *_underlying, Napi::Promise::Deferred const &d)
    : _underlying(_underlying), PromiseWorker(d){};

void Graph_GetLoopsCount_AsyncWorker::Execute()
{
    EnterParallelRegion();

    size_t _result = _underlying->GetLoopsCount();

    this->_result = _result;

    ExitParallelRegion();
}

void Graph_GetLoopsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    size_t _result = this->_result;
    _to = Napi::Number::New(env, _result);

    deferred.Resolve(_to);
}

void Graph_GetLoopsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
Graph_GetUsedCurves_AsyncWorker::Graph_GetUsedCurves_AsyncWorker(MpGraph *_underlying, Napi::Promise::Deferred const &d,
                                                                 const RPArray<MbCurve> &curveList)
    : _underlying(_underlying), PromiseWorker(d), curveList(curveList){};

void Graph_GetUsedCurves_AsyncWorker::Execute()
{
    EnterParallelRegion();

    RPArray<MbCurve> *usedCurves = new RPArray<MbCurve>;

    _underlying->GetUsedCurves(curveList, *usedCurves);

    this->usedCurves = usedCurves;

    ExitParallelRegion();
}

void Graph_GetUsedCurves_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    RPArray<MbCurve> *usedCurves = this->usedCurves;
    Napi::Array arr_usedCurves = Napi::Array::New(env);
    for (size_t i = 0; i < usedCurves->Count(); i++)
    {
        arr_usedCurves[i] = Curve::NewInstance(env,

                                               (*usedCurves)[i]

        );
    }
    _to = arr_usedCurves;

    deferred.Resolve(_to);
}

void Graph_GetUsedCurves_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
