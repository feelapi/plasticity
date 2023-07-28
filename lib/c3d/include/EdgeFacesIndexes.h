// This is a generated file, modify: generate/templates/EdgeFacesIndexes.h

#ifndef EDGEFACESINDEXES_H
#define EDGEFACESINDEXES_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <op_binding_data.h>

#include "PromiseWorker.h"

class EdgeFacesIndexes : public
  Napi::ObjectWrap<EdgeFacesIndexes>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbEdgeFacesIndexes *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        EdgeFacesIndexes(const Napi::CallbackInfo& info);

        Napi::Value Id(const Napi::CallbackInfo& info);

    MbEdgeFacesIndexes * _underlying;



  private:
        Napi::Value GetValue_edgeIndex(const Napi::CallbackInfo &info);
        void SetValue_edgeIndex(const Napi::CallbackInfo &info, const Napi::Value &value);
        Napi::Value GetValue_facePIndex(const Napi::CallbackInfo &info);
        void SetValue_facePIndex(const Napi::CallbackInfo &info, const Napi::Value &value);
        Napi::Value GetValue_faceMIndex(const Napi::CallbackInfo &info);
        void SetValue_faceMIndex(const Napi::CallbackInfo &info, const Napi::Value &value);
        Napi::Value GetValue_itemName(const Napi::CallbackInfo &info);
        void SetValue_itemName(const Napi::CallbackInfo &info, const Napi::Value &value);

};



#endif
