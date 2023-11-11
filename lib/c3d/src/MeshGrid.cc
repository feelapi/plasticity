// This is a generated file, modify: generate/templates/MeshGrid.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/MeshGrid.h"
#include "../include/Error.h"

#include "tool_mutex.h"

Napi::Object MeshGrid::Init(Napi::Env env, Napi::Object exports)
{
    Napi::Object object = Napi::Object::New(env);

    object.Set("LineGridIntersect", Napi::Function::New<&MeshGrid::LineGridIntersect>(env));
    object.Set("LineGridIntersect_async", Napi::Function::New<&MeshGrid::LineGridIntersect_async>(env));

    exports.Set("MeshGrid", object);

    return exports;
}

Napi::Value MeshGrid::LineGridIntersect(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Grid::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Grid grid is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 ||
        !((info[1].IsObject() && info[1].ToObject().InstanceOf(FloatAxis3D::GetConstructor(env)))))
    {
        Napi::Error::New(env, "FloatAxis3D line is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbFloatPoint3D *crossPoint = new MbFloatPoint3D;
    float tRes;

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'grid'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Grid *grid_ = Grid::Unwrap(info[0].ToObject());

    const MbGrid &grid = *grid_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'line'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class FloatAxis3D *line_ = FloatAxis3D::Unwrap(info[1].ToObject());

    const MbFloatAxis3D &line = *line_->_underlying;

    bool intersected = ::LineGridIntersect(grid, line, *crossPoint, tRes

    );

    Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

    _to = Napi::Boolean::New(env, intersected);

    _toReturn.Set(Napi::String::New(env, "intersected"), _to);
    if (crossPoint != NULL)
    {
        _to = FloatPoint3D::NewInstance(env, (MbFloatPoint3D *)crossPoint);
    }
    else
    {
        _to = env.Null();
    }

    _toReturn.Set(Napi::String::New(env, "crossPoint"), _to);
    _to = Napi::Number::New(env, tRes);

    _toReturn.Set(Napi::String::New(env, "tRes"), _to);
    return _toReturn;
}

Napi::Value MeshGrid::LineGridIntersect_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Grid::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Grid grid is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 ||
        !((info[1].IsObject() && info[1].ToObject().InstanceOf(FloatAxis3D::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "FloatAxis3D line is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'grid'"));
        return deferred.Promise();
    }
    const class Grid *grid_ = Grid::Unwrap(info[0].ToObject());

    const MbGrid &grid = *grid_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'line'"));
        return deferred.Promise();
    }
    const class FloatAxis3D *line_ = FloatAxis3D::Unwrap(info[1].ToObject());

    const MbFloatAxis3D &line = *line_->_underlying;

    MeshGrid_LineGridIntersect_AsyncWorker *asyncWorker = new MeshGrid_LineGridIntersect_AsyncWorker(deferred,

                                                                                                     grid,

                                                                                                     line);
    asyncWorker->Queue();
    return deferred.Promise();
}

MeshGrid_LineGridIntersect_AsyncWorker::MeshGrid_LineGridIntersect_AsyncWorker(Napi::Promise::Deferred const &d,
                                                                               const MbGrid &grid,
                                                                               const MbFloatAxis3D &line)
    : PromiseWorker(d), grid(grid), line(line){};

void MeshGrid_LineGridIntersect_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbFloatPoint3D *crossPoint = new MbFloatPoint3D;
    float tRes;

    bool intersected = ::LineGridIntersect(grid, line, *crossPoint, tRes);

    this->intersected = intersected;
    this->crossPoint = crossPoint;
    this->tRes = tRes;

    ExitParallelRegion();
}

void MeshGrid_LineGridIntersect_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    Napi::Object _toReturn = Napi::Object::New(env);

    bool intersected = this->intersected;
    _to = Napi::Boolean::New(env, intersected);

    _toReturn.Set(Napi::String::New(env, "intersected"), _to);
    const MbFloatPoint3D *crossPoint = this->crossPoint;
    if (crossPoint != NULL)
    {
        _to = FloatPoint3D::NewInstance(env, (MbFloatPoint3D *)crossPoint);
    }
    else
    {
        _to = env.Null();
    }

    _toReturn.Set(Napi::String::New(env, "crossPoint"), _to);
    float tRes = this->tRes;
    _to = Napi::Number::New(env, tRes);

    _toReturn.Set(Napi::String::New(env, "tRes"), _to);

    deferred.Resolve(_toReturn);
}

void MeshGrid_LineGridIntersect_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
