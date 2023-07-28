// This is a generated file, modify: generate/templates/_ModifyValues.h

#ifndef _MODIFYVALUES_H
#define _MODIFYVALUES_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <op_shell_parameter.h>

#include "Vector3D.h"
#include "PromiseWorker.h"

class _ModifyValues : public
  Napi::ObjectWrap<_ModifyValues>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, ModifyValues *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        _ModifyValues(const Napi::CallbackInfo& info);

        Napi::Value Id(const Napi::CallbackInfo& info);

    ModifyValues * _underlying;



  private:
        Napi::Value GetValue_way(const Napi::CallbackInfo &info);
        void SetValue_way(const Napi::CallbackInfo &info, const Napi::Value &value);
        Napi::Value GetValue_direction(const Napi::CallbackInfo &info);
        void SetValue_direction(const Napi::CallbackInfo &info, const Napi::Value &value);

};



#endif
