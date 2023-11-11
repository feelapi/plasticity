// This is a generated file, modify: generate/templates/ActionRegion.cc

#include <iostream> // std::cout, std::ios
#include <sstream>  // std::ostringstream

#include "../include/ActionRegion.h"
#include "../include/Error.h"

#include "tool_mutex.h"

Napi::Object ActionRegion::Init(Napi::Env env, Napi::Object exports)
{
    Napi::Object object = Napi::Object::New(env);

    object.Set("GetCorrectRegions", Napi::Function::New<&ActionRegion::GetCorrectRegions>(env));
    object.Set("GetCorrectRegions_async", Napi::Function::New<&ActionRegion::GetCorrectRegions_async>(env));
    object.Set("MakeRegions", Napi::Function::New<&ActionRegion::MakeRegions>(env));
    object.Set("MakeRegions_async", Napi::Function::New<&ActionRegion::MakeRegions_async>(env));
    object.Set("CreateBooleanResultRegions", Napi::Function::New<&ActionRegion::CreateBooleanResultRegions>(env));
    object.Set("CreateBooleanResultRegions_async",
               Napi::Function::New<&ActionRegion::CreateBooleanResultRegions_async>(env));

    exports.Set("ActionRegion", object);

    return exports;
}

Napi::Value ActionRegion::GetCorrectRegions(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsArray()))
    {
        Napi::Error::New(env, "Array contours is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsBoolean()))
    {
        Napi::Error::New(env, "boolean sameContours is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    RPArray<MbRegion> *regions = new RPArray<MbRegion>;

    RPArray<MbContour> contours;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        const Napi::Array contours_ = Napi::Array(env, info[0]);
        contours = RPArray<MbContour>(contours_.Length(), 1);

        for (size_t i = 0; i < contours_.Length(); i++)
        {
            if (contours_[i].IsNull() || contours_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!contours_[i].IsObject() || !contours_[i].ToObject().InstanceOf(Contour::GetConstructor(env)))
            {
                Napi::Error::New(env, "Contour contours is required.").ThrowAsJavaScriptException();
                return env.Undefined();
            }
            else
            {
                contours.Add(Contour::Unwrap(contours_[i].ToObject())->_underlying);
            }
        }
    }

    bool sameContours = info[1].ToBoolean();

    ::GetCorrectRegions(contours, sameContours, *regions

    );

    Napi::Value _to;

    Napi::Array arr_regions = Napi::Array::New(env);
    for (size_t i = 0; i < regions->Count(); i++)
    {
        arr_regions[i] = Region::NewInstance(env,

                                             (*regions)[i]

        );
    }
    _to = arr_regions;

    return _to;
}

Napi::Value ActionRegion::GetCorrectRegions_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsArray()))
    {
        deferred.Reject(Napi::String::New(env, "Array contours is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean sameContours is required."));
        return deferred.Promise();
    }

    RPArray<MbContour> *contours;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        const Napi::Array contours_ = Napi::Array(env, info[0]);
        contours = new RPArray<MbContour>(contours_.Length(), 1);

        for (size_t i = 0; i < contours_.Length(); i++)
        {
            if (contours_[i].IsNull() || contours_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!contours_[i].IsObject() || !contours_[i].ToObject().InstanceOf(Contour::GetConstructor(env)))
            {
                deferred.Reject(Napi::String::New(env, "Contour contours is required."));
                return deferred.Promise();
            }
            else
            {
                contours->Add(Contour::Unwrap(contours_[i].ToObject())->_underlying);
            }
        }
    }

    bool sameContours = info[1].ToBoolean();

    ActionRegion_GetCorrectRegions_AsyncWorker *asyncWorker =
        new ActionRegion_GetCorrectRegions_AsyncWorker(deferred, *contours,

                                                       sameContours);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionRegion::MakeRegions(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !(info[0].IsArray()))
    {
        Napi::Error::New(env, "Array contours is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !(info[1].IsBoolean()))
    {
        Napi::Error::New(env, "boolean useSelfIntCntrs is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 || !(info[2].IsBoolean()))
    {
        Napi::Error::New(env, "boolean sameContours is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    RPArray<MbRegion> *regions = new RPArray<MbRegion>;

    RPArray<MbContour> contours;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        const Napi::Array contours_ = Napi::Array(env, info[0]);
        contours = RPArray<MbContour>(contours_.Length(), 1);

        for (size_t i = 0; i < contours_.Length(); i++)
        {
            if (contours_[i].IsNull() || contours_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!contours_[i].IsObject() || !contours_[i].ToObject().InstanceOf(Contour::GetConstructor(env)))
            {
                Napi::Error::New(env, "Contour contours is required.").ThrowAsJavaScriptException();
                return env.Undefined();
            }
            else
            {
                contours.Add(Contour::Unwrap(contours_[i].ToObject())->_underlying);
            }
        }
    }

    bool useSelfIntCntrs = info[1].ToBoolean();

    bool sameContours = info[2].ToBoolean();

    ::MakeRegions(contours, useSelfIntCntrs, sameContours, *regions

    );

    Napi::Value _to;

    Napi::Array arr_regions = Napi::Array::New(env);
    for (size_t i = 0; i < regions->Count(); i++)
    {
        arr_regions[i] = Region::NewInstance(env,

                                             (*regions)[i]

        );
    }
    _to = arr_regions;

    return _to;
}

Napi::Value ActionRegion::MakeRegions_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !(info[0].IsArray()))
    {
        deferred.Reject(Napi::String::New(env, "Array contours is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !(info[1].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean useSelfIntCntrs is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 || !(info[2].IsBoolean()))
    {
        deferred.Reject(Napi::String::New(env, "boolean sameContours is required."));
        return deferred.Promise();
    }

    RPArray<MbContour> *contours;
    if (!(info[0].IsNull() || info[0].IsUndefined()))
    {
        const Napi::Array contours_ = Napi::Array(env, info[0]);
        contours = new RPArray<MbContour>(contours_.Length(), 1);

        for (size_t i = 0; i < contours_.Length(); i++)
        {
            if (contours_[i].IsNull() || contours_[i].IsUndefined())
            {
                std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i
                          << "]. This is probably a mistake, so skipping\n";
                continue;
            }
            if (!contours_[i].IsObject() || !contours_[i].ToObject().InstanceOf(Contour::GetConstructor(env)))
            {
                deferred.Reject(Napi::String::New(env, "Contour contours is required."));
                return deferred.Promise();
            }
            else
            {
                contours->Add(Contour::Unwrap(contours_[i].ToObject())->_underlying);
            }
        }
    }

    bool useSelfIntCntrs = info[1].ToBoolean();

    bool sameContours = info[2].ToBoolean();

    ActionRegion_MakeRegions_AsyncWorker *asyncWorker = new ActionRegion_MakeRegions_AsyncWorker(deferred, *contours,

                                                                                                 useSelfIntCntrs,

                                                                                                 sameContours);
    asyncWorker->Queue();
    return deferred.Promise();
}
Napi::Value ActionRegion::CreateBooleanResultRegions(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Region::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Region region1 is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 1 || !((info[1].IsObject() && info[1].ToObject().InstanceOf(Region::GetConstructor(env)))))
    {
        Napi::Error::New(env, "Region region2 is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    if (info.Length() == 2 ||
        !((info[2].IsObject() && info[2].ToObject().InstanceOf(RegionBooleanParams::GetConstructor(env)))))
    {
        Napi::Error::New(env, "RegionBooleanParams operParams is required.").ThrowAsJavaScriptException();
        return env.Undefined();
    }

    RPArray<MbRegion> *regions = new RPArray<MbRegion>;
    MbResultType *resInfo = NULL;

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'region1'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Region *region1_ = Region::Unwrap(info[0].ToObject());

    MbRegion &region1 = *region1_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'region2'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class Region *region2_ = Region::Unwrap(info[1].ToObject());

    MbRegion &region2 = *region2_->_underlying;

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        Napi::Error::New(env, "Passed null for non-optional parameter 'operParams'").ThrowAsJavaScriptException();
        return env.Undefined();
    }
    const class RegionBooleanParams *operParams_ = RegionBooleanParams::Unwrap(info[2].ToObject());

    const MbRegionBooleanParams &operParams = *operParams_->_underlying;

    bool _result = ::CreateBooleanResultRegions(region1, region2, operParams, *regions,
                                                info.Length() == 3 || info[3].IsNull() ? NULL : resInfo

    );

    if (_result)
    {

        Napi::Object _toReturn = Napi::Object::New(env);
        Napi::Value _to;

        Napi::Array arr_regions = Napi::Array::New(env);
        for (size_t i = 0; i < regions->Count(); i++)
        {
            arr_regions[i] = Region::NewInstance(env,

                                                 (*regions)[i]

            );
        }
        _to = arr_regions;

        _toReturn.Set(Napi::String::New(env, "regions"), _to);
        _to = Napi::Number::New(env, *resInfo);

        _toReturn.Set(Napi::String::New(env, "resInfo"), _to);
        return _toReturn;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation CreateBooleanResultRegions failed";
        Napi::Error error = Napi::Error::New(env, msg.str());
        error.Set("isC3dError", true);
        error.ThrowAsJavaScriptException();
        return env.Undefined();
    }
}

Napi::Value ActionRegion::CreateBooleanResultRegions_async(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
    if (info.Length() == 0 || !((info[0].IsObject() && info[0].ToObject().InstanceOf(Region::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Region region1 is required."));
        return deferred.Promise();
    }
    if (info.Length() == 1 || !((info[1].IsObject() && info[1].ToObject().InstanceOf(Region::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "Region region2 is required."));
        return deferred.Promise();
    }
    if (info.Length() == 2 ||
        !((info[2].IsObject() && info[2].ToObject().InstanceOf(RegionBooleanParams::GetConstructor(env)))))
    {
        deferred.Reject(Napi::String::New(env, "RegionBooleanParams operParams is required."));
        return deferred.Promise();
    }

    if (info[0].IsNull() || info[0].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'region1'"));
        return deferred.Promise();
    }
    const class Region *region1_ = Region::Unwrap(info[0].ToObject());

    MbRegion &region1 = *region1_->_underlying;

    if (info[1].IsNull() || info[1].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'region2'"));
        return deferred.Promise();
    }
    const class Region *region2_ = Region::Unwrap(info[1].ToObject());

    MbRegion &region2 = *region2_->_underlying;

    if (info[2].IsNull() || info[2].IsUndefined())
    {
        deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'operParams'"));
        return deferred.Promise();
    }
    const class RegionBooleanParams *operParams_ = RegionBooleanParams::Unwrap(info[2].ToObject());

    const MbRegionBooleanParams &operParams = *operParams_->_underlying;

    ActionRegion_CreateBooleanResultRegions_AsyncWorker *asyncWorker =
        new ActionRegion_CreateBooleanResultRegions_AsyncWorker(deferred,

                                                                region1,

                                                                region2,

                                                                operParams);
    asyncWorker->Queue();
    return deferred.Promise();
}

ActionRegion_GetCorrectRegions_AsyncWorker::ActionRegion_GetCorrectRegions_AsyncWorker(
    Napi::Promise::Deferred const &d, const RPArray<MbContour> &contours, bool sameContours)
    : PromiseWorker(d), contours(contours), sameContours(sameContours){};

void ActionRegion_GetCorrectRegions_AsyncWorker::Execute()
{
    EnterParallelRegion();

    RPArray<MbRegion> *regions = new RPArray<MbRegion>;

    ::GetCorrectRegions(contours, sameContours, *regions);

    this->regions = regions;

    ExitParallelRegion();
}

void ActionRegion_GetCorrectRegions_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    RPArray<MbRegion> *regions = this->regions;
    Napi::Array arr_regions = Napi::Array::New(env);
    for (size_t i = 0; i < regions->Count(); i++)
    {
        arr_regions[i] = Region::NewInstance(env,

                                             (*regions)[i]

        );
    }
    _to = arr_regions;

    deferred.Resolve(_to);
}

void ActionRegion_GetCorrectRegions_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                        Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionRegion_MakeRegions_AsyncWorker::ActionRegion_MakeRegions_AsyncWorker(Napi::Promise::Deferred const &d,
                                                                           RPArray<MbContour> &contours,
                                                                           bool useSelfIntCntrs, bool sameContours)
    : PromiseWorker(d), contours(contours), useSelfIntCntrs(useSelfIntCntrs), sameContours(sameContours){};

void ActionRegion_MakeRegions_AsyncWorker::Execute()
{
    EnterParallelRegion();

    RPArray<MbRegion> *regions = new RPArray<MbRegion>;

    ::MakeRegions(contours, useSelfIntCntrs, sameContours, *regions);

    this->regions = regions;

    ExitParallelRegion();
}

void ActionRegion_MakeRegions_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    RPArray<MbRegion> *regions = this->regions;
    Napi::Array arr_regions = Napi::Array::New(env);
    for (size_t i = 0; i < regions->Count(); i++)
    {
        arr_regions[i] = Region::NewInstance(env,

                                             (*regions)[i]

        );
    }
    _to = arr_regions;

    deferred.Resolve(_to);
}

void ActionRegion_MakeRegions_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
ActionRegion_CreateBooleanResultRegions_AsyncWorker::ActionRegion_CreateBooleanResultRegions_AsyncWorker(
    Napi::Promise::Deferred const &d, MbRegion &region1, MbRegion &region2, const MbRegionBooleanParams &operParams)
    : PromiseWorker(d), region1(region1), region2(region2), operParams(operParams){};

void ActionRegion_CreateBooleanResultRegions_AsyncWorker::Execute()
{
    EnterParallelRegion();

    RPArray<MbRegion> *regions = new RPArray<MbRegion>;
    MbResultType *resInfo = NULL;

    bool _result = ::CreateBooleanResultRegions(region1, region2, operParams, *regions, resInfo);

    if (_result)
    {

        this->regions = regions;
        this->resInfo = resInfo;
    }
    else
    {
        std::ostringstream msg;
        msg << "Operation CreateBooleanResultRegions failed";
        SetError(msg.str());
    }

    ExitParallelRegion();
}

void ActionRegion_CreateBooleanResultRegions_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred)
{
    Napi::Env env = deferred.Env();
    Napi::Value _to;
    Napi::Object _toReturn = Napi::Object::New(env);

    RPArray<MbRegion> *regions = this->regions;
    Napi::Array arr_regions = Napi::Array::New(env);
    for (size_t i = 0; i < regions->Count(); i++)
    {
        arr_regions[i] = Region::NewInstance(env,

                                             (*regions)[i]

        );
    }
    _to = arr_regions;

    _toReturn.Set(Napi::String::New(env, "regions"), _to);
    MbResultType *resInfo = this->resInfo;
    _to = Napi::Number::New(env, *resInfo);

    _toReturn.Set(Napi::String::New(env, "resInfo"), _to);

    deferred.Resolve(_toReturn);
}

void ActionRegion_CreateBooleanResultRegions_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred,
                                                                 Napi::Error const &error)
{
    Napi::Env env = deferred.Env();
    error.Value().Set("code", Napi::Number::New(env, this->resultType));
    error.Value()["isC3dError"] = true;
    deferred.Reject(error.Value());
}
