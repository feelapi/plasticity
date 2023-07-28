// This is a generated file, modify: generate/templates/AutoRegDuplicate.h

#ifndef AUTOREGDUPLICATE_H
#define AUTOREGDUPLICATE_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <item_registrator.h>

#include "PromiseWorker.h"

class AutoRegDuplicate : public
  Napi::ObjectWrap<AutoRegDuplicate>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbAutoRegDuplicate *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        AutoRegDuplicate(const Napi::CallbackInfo& info);

        Napi::Value Id(const Napi::CallbackInfo& info);

    MbAutoRegDuplicate * _underlying;



  private:

};



#endif
