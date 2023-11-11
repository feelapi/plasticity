// This is a generated file, modify: generate/templates/ActionMesh.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/ActionMesh.h"
#include "../include/Error.h"

#include "tool_mutex.h"

Napi::Object ActionMesh::Init(Napi::Env env, Napi::Object exports)
{
    Napi::Object object = Napi::Object::New(env);

    object.Set("CreateConvexPolyhedron", Napi::Function::New<&ActionMesh::CreateConvexPolyhedron>(env));
    object.Set("CreateConvexPolyhedron_async", Napi::Function::New<&ActionMesh::CreateConvexPolyhedron_async>(env));

    exports.Set("ActionMesh", object);

    return exports;
}

Napi::Value ActionMesh::CreateConvexPolyhedron(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsArray()))
    {
        Napi::Error::New(env, "Array points is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    MbMesh *result = NULL;

    SArray<MbFloatPoint3D> points;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        const Napi::Array points_ = Napi::Array(env, info[0]);
        points = SArray<MbFloatPoint3D>(points_.Length(), 1);

        for (size_t i = 0; i < points_.Length(); i++)
        {
            if (points_[i].IsNull() || points_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!points_[i].IsObject() || !points_[i].ToObject().InstanceOf(FloatPoint3D::GetConstructor(env)))
            {
                Napi::Error::New(env, "FloatPoint3D points is required.").ThrowAsJavaScriptException();
                return env.Undefined();
            }
            else
            {
                points.Add(*FloatPoint3D::Unwrap(points_[i].ToObject())->_underlying);
            }
        }
    }

    MbResultType _result = ::CreateConvexPolyhedron(points, result

    );

    if (_result == rt_Success)
    {

        Napi::Value _to;

        if (result != NULL)
        {
            _to = Mesh::NewInstance(env, (MbMesh *)result);
        }
        else
        {
            _to = env.Null();
        }

        return _to;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation CreateConvexPolyhedron failed with error: " << Error::GetSolidErrorResId(_result);
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("code", Napi::Number::New(env, _result));
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ActionMesh::CreateConvexPolyhedron_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsArray()))
    {
        deferred.Reject(Napi::String::New(env, "Array points is required."));
        return deferred.Promise();
    }

    SArray<MbFloatPoint3D> *points;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        const Napi::Array points_ = Napi::Array(env, info[0]);
        points = new SArray<MbFloatPoint3D>(points_.Length(), 1);

        for (size_t i = 0; i < points_.Length(); i++)
        {
            if (points_[i].IsNull() || points_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!points_[i].IsObject() || !points_[i].ToObject().InstanceOf(FloatPoint3D::GetConstructor(env)))
            {
                deferred.Reject(Napi::String::New(env, "FloatPoint3D points is required."));
                return deferred.Promise();
            }
            else
            {
                points->Add(*FloatPoint3D::Unwrap(points_[i].ToObject())->_underlying);
            }
        }
    }

    ActionMesh_CreateConvexPolyhedron_AsyncWorker *asyncWorker =
        new ActionMesh_CreateConvexPolyhedron_AsyncWorker(deferred, *points);
    asyncWorker->Queue();
    return deferred.Promise();
}

ActionMesh_CreateConvexPolyhedron_AsyncWorker::ActionMesh_CreateConvexPolyhedron_AsyncWorker(
    Napi::Promise::Deferred const &d, const SArray<MbFloatPoint3D> &points)
    : PromiseWorker(d), points(points){};

void ActionMesh_CreateConvexPolyhedron_AsyncWorker::Execute()
{
    EnterParallelRegion();

    MbMesh *result = NULL;

    MbResultType _result = ::CreateConvexPolyhedron(points, result);

    this->resultType = _result;
    if (_result == rt_Success)
    {

        this->result = result;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation CreateConvexPolyhedron failed with error: " << Error::GetSolidErrorResId(_result);
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ActionMesh_CreateConvexPolyhedron_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    MbMesh *result = this->result;
    if (result != NULL)
    {
        _to = Mesh::NewInstance(env, (MbMesh *)result);
    }
    else
    {
        _to = env.Null();
    }

    deferred.Resolve(_to);
}

void ActionMesh_CreateConvexPolyhedron_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                           Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
