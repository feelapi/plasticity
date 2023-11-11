// This is a generated file, modify: generate/templates/ActionRegion.h

#ifndef ACTIONREGION_H
#define ACTIONREGION_H

#include <napi.h>
#include <vector>

#include <region.h>

#include "Region.h"
#include "Contour.h"
#include "RegionBooleanParams.h"

#include "PromiseWorker.h"

class ActionRegion : public Napi::ObjectWrap<ActionRegion>
{
  public:
    static Napi::Object Init(Napi::Env env, Napi::Object exports);

    static Napi::Value GetCorrectRegions(const Napi::CallbackInfo &info);
    static Napi::Value GetCorrectRegions_async(const Napi::CallbackInfo &info);
    static Napi::Value MakeRegions(const Napi::CallbackInfo &info);
    static Napi::Value MakeRegions_async(const Napi::CallbackInfo &info);
    static Napi::Value CreateBooleanResultRegions(const Napi::CallbackInfo &info);
    static Napi::Value CreateBooleanResultRegions_async(const Napi::CallbackInfo &info);
};

class ActionRegion_GetCorrectRegions_AsyncWorker : public PromiseWorker
{
  public:
    ActionRegion_GetCorrectRegions_AsyncWorker(Napi::Promise::Deferred const &d, const RPArray<MbContour> &contours,
                                               bool sameContours);
    virtual ~ActionRegion_GetCorrectRegions_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    const RPArray<MbContour> &contours;
    bool sameContours;

    RPArray<MbRegion> *regions;

    int resultType;
};

class ActionRegion_MakeRegions_AsyncWorker : public PromiseWorker
{
  public:
    ActionRegion_MakeRegions_AsyncWorker(Napi::Promise::Deferred const &d, RPArray<MbContour> &contours,
                                         bool useSelfIntCntrs, bool sameContours);
    virtual ~ActionRegion_MakeRegions_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    RPArray<MbContour> &contours;
    bool useSelfIntCntrs;
    bool sameContours;

    RPArray<MbRegion> *regions;

    int resultType;
};

class ActionRegion_CreateBooleanResultRegions_AsyncWorker : public PromiseWorker
{
  public:
    ActionRegion_CreateBooleanResultRegions_AsyncWorker(Napi::Promise::Deferred const &d, MbRegion &region1,
                                                        MbRegion &region2, const MbRegionBooleanParams &operParams);
    virtual ~ActionRegion_CreateBooleanResultRegions_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbRegion &region1;
    MbRegion &region2;
    const MbRegionBooleanParams &operParams;

    RPArray<MbRegion> *regions;

    MbResultType *resInfo;

    int resultType;
};

#endif
