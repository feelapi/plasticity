// This is a generated file, modify: generate/templates/_ConvConvertorProperty3D.h

#ifndef _CONVCONVERTORPROPERTY3D_H
#define _CONVCONVERTORPROPERTY3D_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <conv_exchange_settings.h>

#include "PromiseWorker.h"

class _ConvConvertorProperty3D : public
  Napi::ObjectWrap<_ConvConvertorProperty3D>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, ConvConvertorProperty3D *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        _ConvConvertorProperty3D(const Napi::CallbackInfo& info);

        Napi::Value Id(const Napi::CallbackInfo& info);

    ConvConvertorProperty3D * _underlying;



  private:
        Napi::Value GetValue_enableAutostitch(const Napi::CallbackInfo &info);
        void SetValue_enableAutostitch(const Napi::CallbackInfo &info, const Napi::Value &value);
        Napi::Value GetValue_joinSimilarFaces(const Napi::CallbackInfo &info);
        void SetValue_joinSimilarFaces(const Napi::CallbackInfo &info, const Napi::Value &value);
        Napi::Value GetValue_addRemovedFacesAsShells(const Napi::CallbackInfo &info);
        void SetValue_addRemovedFacesAsShells(const Napi::CallbackInfo &info, const Napi::Value &value);
        Napi::Value GetValue_lengthUnitsFactor(const Napi::CallbackInfo &info);
        void SetValue_lengthUnitsFactor(const Napi::CallbackInfo &info, const Napi::Value &value);
        Napi::Value GetValue_appUnitsFactor(const Napi::CallbackInfo &info);
        void SetValue_appUnitsFactor(const Napi::CallbackInfo &info, const Napi::Value &value);
        Napi::Value GetValue_auditEnabled(const Napi::CallbackInfo &info);
        void SetValue_auditEnabled(const Napi::CallbackInfo &info, const Napi::Value &value);

};



#endif
