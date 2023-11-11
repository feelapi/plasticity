// This is a generated file, modify: generate/templates/Conversion.h

#ifndef CONVERSION_H
#define CONVERSION_H

#include <napi.h>
#include <vector>

#include <conv_model_exchange.h>

#include "Model.h"
#include "_ConvConvertorProperty3D.h"
#include "ProgressIndicator.h"

#include "PromiseWorker.h"

class Conversion : public Napi::ObjectWrap<Conversion>
{
  public:
    static Napi::Object Init(Napi::Env env, Napi::Object exports);

    static Napi::Value ImportFromFile(const Napi::CallbackInfo &info);
    static Napi::Value ImportFromFile_async(const Napi::CallbackInfo &info);
    static Napi::Value ExportIntoFile(const Napi::CallbackInfo &info);
    static Napi::Value ExportIntoFile_async(const Napi::CallbackInfo &info);
};

class Conversion_ImportFromFile_AsyncWorker : public PromiseWorker
{
  public:
    Conversion_ImportFromFile_AsyncWorker(Napi::Promise::Deferred const &d, const c3d::path_string &fileName,
                                          ConvConvertorProperty3D *prop = NULL, ProgressIndicator *indicator = NULL);
    virtual ~Conversion_ImportFromFile_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    const c3d::path_string fileName;
    ConvConvertorProperty3D *prop = NULL;
    ProgressIndicator *indicator = NULL;

    MbeConvResType result;

    MbModel *model;

    int resultType;
};

class Conversion_ExportIntoFile_AsyncWorker : public PromiseWorker
{
  public:
    Conversion_ExportIntoFile_AsyncWorker(Napi::Promise::Deferred const &d, MbModel &model,
                                          const c3d::path_string &fileName, ConvConvertorProperty3D *prop = NULL,
                                          ProgressIndicator *indicator = NULL);
    virtual ~Conversion_ExportIntoFile_AsyncWorker(){};

    void Execute() override;
    void Resolve(Napi::Promise::Deferred const &deferred) override;
    void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

  private:
    MbModel &model;
    const c3d::path_string fileName;
    ConvConvertorProperty3D *prop = NULL;
    ProgressIndicator *indicator = NULL;

    MbeConvResType _result;

    int resultType;
};

#endif
