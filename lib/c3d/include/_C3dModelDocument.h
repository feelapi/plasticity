// This is a generated file, modify: generate/templates/_C3dModelDocument.h

#ifndef _C3DMODELDOCUMENT_H
#define _C3DMODELDOCUMENT_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <conv_model_document.h>

#include "PromiseWorker.h"

class _C3dModelDocument : public
  Napi::ObjectWrap<_C3dModelDocument>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, C3dModelDocument *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        _C3dModelDocument(const Napi::CallbackInfo& info);

        Napi::Value Id(const Napi::CallbackInfo& info);

    C3dModelDocument * _underlying;



  private:

};



#endif
