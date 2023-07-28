// This is a generated file, modify: generate/templates/EdgeSequence.h

#ifndef EDGESEQUENCE_H
#define EDGESEQUENCE_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <position_data.h>

#include "CurveEdge.h"
#include "PromiseWorker.h"

class EdgeSequence : public
  Napi::ObjectWrap<EdgeSequence>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbEdgeSequence *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        EdgeSequence(const Napi::CallbackInfo& info);

        Napi::Value Id(const Napi::CallbackInfo& info);

    MbEdgeSequence * _underlying;

    ~EdgeSequence();


  private:
        Napi::Value GetValue_closed(const Napi::CallbackInfo &info);
        void SetValue_closed(const Napi::CallbackInfo &info, const Napi::Value &value);

};



#endif
