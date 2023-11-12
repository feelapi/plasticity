// This is a generated file, modify: generate/templates/Multiline.h

#ifndef MULTILINE_H
#define MULTILINE_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <multiline.h>

#include "PlaneItem.h"
#include "Contour.h"
#include "VertexOfMultilineInfo.h"
#include "MLTipParams.h"
#include "ContourWithBreaks.h"
#include "PromiseWorker.h"

class Multiline : public Napi::ObjectWrap<Multiline>
{
  public:
    static Napi::Object Init(const Napi::Env env, Napi::Object exports);
    static Napi::Object NewInstance(const Napi::Env env, MbMultiline *raw);
    static Napi::Function GetConstructor(Napi::Env env);
    Multiline(const Napi::CallbackInfo &info);

    Napi::Value GetBegTipCurve(const Napi::CallbackInfo &info);
    Napi::Value GetBegTipCurve_async(const Napi::CallbackInfo &info);
    Napi::Value GetEndTipCurve(const Napi::CallbackInfo &info);
    Napi::Value GetEndTipCurve_async(const Napi::CallbackInfo &info);
    Napi::Value GetCurvesCount(const Napi::CallbackInfo &info);
    Napi::Value GetCurvesCount_async(const Napi::CallbackInfo &info);
    Napi::Value GetCurve(const Napi::CallbackInfo &info);
    Napi::Value GetCurve_async(const Napi::CallbackInfo &info);
    Napi::Value IsA(const Napi::CallbackInfo &info);
    Napi::Value IsA_async(const Napi::CallbackInfo &info);
    Napi::Value Type(const Napi::CallbackInfo &info);
    Napi::Value Type_async(const Napi::CallbackInfo &info);
    Napi::Value Family(const Napi::CallbackInfo &info);
    Napi::Value Family_async(const Napi::CallbackInfo &info);
    Napi::Value Move(const Napi::CallbackInfo &info);
    Napi::Value Move_async(const Napi::CallbackInfo &info);
    Napi::Value Transform(const Napi::CallbackInfo &info);
    Napi::Value Transform_async(const Napi::CallbackInfo &info);
    Napi::Value Duplicate(const Napi::CallbackInfo &info);
    Napi::Value Duplicate_async(const Napi::CallbackInfo &info);
    Napi::Value AddYourGabaritTo(const Napi::CallbackInfo &info);
    Napi::Value AddYourGabaritTo_async(const Napi::CallbackInfo &info);
    Napi::Value GetUseCount(const Napi::CallbackInfo &info);
    Napi::Value GetUseCount_async(const Napi::CallbackInfo &info);
    Napi::Value AddRef(const Napi::CallbackInfo &info);
    Napi::Value AddRef_async(const Napi::CallbackInfo &info);
    Napi::Value Id(const Napi::CallbackInfo &info);

    MbMultiline *_underlying;

    ~Multiline();

  private:
};

class Multiline_GetBegTipCurve_AsyncWorker : public PromiseWorker
{
  public:
    Multiline_GetBegTipCurve_AsyncWorker(MbMultiline *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Multiline_GetBegTipCurve_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMultiline *_underlying;

    const MbContour *_result;

    int resultType;
};

class Multiline_GetEndTipCurve_AsyncWorker : public PromiseWorker
{
  public:
    Multiline_GetEndTipCurve_AsyncWorker(MbMultiline *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Multiline_GetEndTipCurve_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMultiline *_underlying;

    const MbContour *_result;

    int resultType;
};

class Multiline_GetCurvesCount_AsyncWorker : public PromiseWorker
{
  public:
    Multiline_GetCurvesCount_AsyncWorker(MbMultiline *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Multiline_GetCurvesCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMultiline *_underlying;

    size_t _result;

    int resultType;
};

class Multiline_GetCurve_AsyncWorker : public PromiseWorker
{
  public:
    Multiline_GetCurve_AsyncWorker(MbMultiline *_underlying, Napi::Promise::Deferred const &d, size_t i);
    virtual ~Multiline_GetCurve_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMultiline *_underlying;
    size_t i;

    const MbContourWithBreaks *_result;

    int resultType;
};

class Multiline_IsA_AsyncWorker : public PromiseWorker
{
  public:
    Multiline_IsA_AsyncWorker(MbMultiline *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Multiline_IsA_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMultiline *_underlying;

    MbePlaneType _result;

    int resultType;
};

class Multiline_Type_AsyncWorker : public PromiseWorker
{
  public:
    Multiline_Type_AsyncWorker(MbMultiline *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Multiline_Type_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMultiline *_underlying;

    MbePlaneType _result;

    int resultType;
};

class Multiline_Family_AsyncWorker : public PromiseWorker
{
  public:
    Multiline_Family_AsyncWorker(MbMultiline *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Multiline_Family_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMultiline *_underlying;

    MbePlaneType _result;

    int resultType;
};

class Multiline_Move_AsyncWorker : public PromiseWorker
{
  public:
    Multiline_Move_AsyncWorker(MbMultiline *_underlying, Napi::Promise::Deferred const &d, const MbVector &to,
                               MbRegTransform *iReg = NULL);
    virtual ~Multiline_Move_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMultiline *_underlying;
    const MbVector &to;
    MbRegTransform *iReg = NULL;

    const MbSurface *newSurface;

    int resultType;
};

class Multiline_Transform_AsyncWorker : public PromiseWorker
{
  public:
    Multiline_Transform_AsyncWorker(MbMultiline *_underlying, Napi::Promise::Deferred const &d, const MbMatrix &matr,
                                    MbRegTransform *iReg = NULL, const MbSurface *newSurface = NULL);
    virtual ~Multiline_Transform_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMultiline *_underlying;
    const MbMatrix &matr;
    MbRegTransform *iReg = NULL;
    const MbSurface *newSurface = NULL;

    int resultType;
};

class Multiline_Duplicate_AsyncWorker : public PromiseWorker
{
  public:
    Multiline_Duplicate_AsyncWorker(MbMultiline *_underlying, Napi::Promise::Deferred const &d,
                                    MbRegDuplicate *dup = NULL);
    virtual ~Multiline_Duplicate_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMultiline *_underlying;
    MbRegDuplicate *dup = NULL;

    MbPlaneItem *_result;

    int resultType;
};

class Multiline_AddYourGabaritTo_AsyncWorker : public PromiseWorker
{
  public:
    Multiline_AddYourGabaritTo_AsyncWorker(MbMultiline *_underlying, Napi::Promise::Deferred const &d, MbRect &rect);
    virtual ~Multiline_AddYourGabaritTo_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMultiline *_underlying;
    MbRect &rect;

    int resultType;
};

class Multiline_GetUseCount_AsyncWorker : public PromiseWorker
{
  public:
    Multiline_GetUseCount_AsyncWorker(MbMultiline *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Multiline_GetUseCount_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMultiline *_underlying;

    refcount_t _result;

    int resultType;
};

class Multiline_AddRef_AsyncWorker : public PromiseWorker
{
  public:
    Multiline_AddRef_AsyncWorker(MbMultiline *_underlying, Napi::Promise::Deferred const &d);
    virtual ~Multiline_AddRef_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbMultiline *_underlying;

    int resultType;
};

#endif
