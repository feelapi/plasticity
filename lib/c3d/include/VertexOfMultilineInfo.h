// This is a generated file, modify: generate/templates/VertexOfMultilineInfo.h

#ifndef VERTEXOFMULTILINEINFO_H
#define VERTEXOFMULTILINEINFO_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <multiline.h>

#include "PromiseWorker.h"

class VertexOfMultilineInfo : public
  Napi::ObjectWrap<VertexOfMultilineInfo>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, StVertexOfMultilineInfo *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        VertexOfMultilineInfo(const Napi::CallbackInfo& info);

        Napi::Value Id(const Napi::CallbackInfo& info);

    StVertexOfMultilineInfo * _underlying;



  private:

};



#endif
