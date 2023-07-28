// This is a generated file, modify: generate/templates/_LoftedValues.h

#ifndef _LOFTEDVALUES_H
#define _LOFTEDVALUES_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <op_swept_parameter.h>

#include "_SweptValues.h"
#include "PromiseWorker.h"

class _LoftedValues : public
  Napi::ObjectWrap<_LoftedValues>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, LoftedValues *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        _LoftedValues(const Napi::CallbackInfo& info);

         Napi::Value CheckSelfInt(const Napi::CallbackInfo& info);
         Napi::Value CheckSelfInt_async(const Napi::CallbackInfo& info);
         Napi::Value SetCheckSelfInt(const Napi::CallbackInfo& info);
         Napi::Value SetCheckSelfInt_async(const Napi::CallbackInfo& info);
        Napi::Value Id(const Napi::CallbackInfo& info);

    LoftedValues * _underlying;



  private:
        Napi::Value GetValue_closed(const Napi::CallbackInfo &info);
        void SetValue_closed(const Napi::CallbackInfo &info, const Napi::Value &value);
        Napi::Value GetValue_derFactor1(const Napi::CallbackInfo &info);
        void SetValue_derFactor1(const Napi::CallbackInfo &info, const Napi::Value &value);
        Napi::Value GetValue_derFactor2(const Napi::CallbackInfo &info);
        void SetValue_derFactor2(const Napi::CallbackInfo &info, const Napi::Value &value);
        Napi::Value GetValue_thickness1(const Napi::CallbackInfo &info);
        void SetValue_thickness1(const Napi::CallbackInfo &info, const Napi::Value &value);
        Napi::Value GetValue_thickness2(const Napi::CallbackInfo &info);
        void SetValue_thickness2(const Napi::CallbackInfo &info, const Napi::Value &value);
        Napi::Value GetValue_shellClosed(const Napi::CallbackInfo &info);
        void SetValue_shellClosed(const Napi::CallbackInfo &info, const Napi::Value &value);

};


  class _LoftedValues_CheckSelfInt_AsyncWorker : public PromiseWorker {
      public:
          _LoftedValues_CheckSelfInt_AsyncWorker(
LoftedValues * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~_LoftedValues_CheckSelfInt_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
LoftedValues * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class _LoftedValues_SetCheckSelfInt_AsyncWorker : public PromiseWorker {
      public:
          _LoftedValues_SetCheckSelfInt_AsyncWorker(
LoftedValues * _underlying,            Napi::Promise::Deferred const &d,
                                 bool  c);
          virtual ~_LoftedValues_SetCheckSelfInt_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
LoftedValues * _underlying;                         bool  c;


        int resultType;
  };



#endif
