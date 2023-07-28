// This is a generated file, modify: generate/templates/_ExtrusionValues.h

#ifndef _EXTRUSIONVALUES_H
#define _EXTRUSIONVALUES_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <op_swept_parameter.h>

#include "_SweptValuesAndSides.h"
#include "PromiseWorker.h"

class _ExtrusionValues : public
  Napi::ObjectWrap<_ExtrusionValues>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, ExtrusionValues raw);
        static Napi::Function GetConstructor(Napi::Env env);
        _ExtrusionValues(const Napi::CallbackInfo& info);

         Napi::Value CheckSelfInt(const Napi::CallbackInfo& info);
         Napi::Value CheckSelfInt_async(const Napi::CallbackInfo& info);
         Napi::Value SetCheckSelfInt(const Napi::CallbackInfo& info);
         Napi::Value SetCheckSelfInt_async(const Napi::CallbackInfo& info);

    ExtrusionValues  _underlying;



  private:
        Napi::Value GetValue_side1(const Napi::CallbackInfo &info);
        void SetValue_side1(const Napi::CallbackInfo &info, const Napi::Value &value);
        Napi::Value GetValue_side2(const Napi::CallbackInfo &info);
        void SetValue_side2(const Napi::CallbackInfo &info, const Napi::Value &value);
        Napi::Value GetValue_thickness1(const Napi::CallbackInfo &info);
        void SetValue_thickness1(const Napi::CallbackInfo &info, const Napi::Value &value);
        Napi::Value GetValue_thickness2(const Napi::CallbackInfo &info);
        void SetValue_thickness2(const Napi::CallbackInfo &info, const Napi::Value &value);
        Napi::Value GetValue_shellClosed(const Napi::CallbackInfo &info);
        void SetValue_shellClosed(const Napi::CallbackInfo &info, const Napi::Value &value);

};


  class _ExtrusionValues_CheckSelfInt_AsyncWorker : public PromiseWorker {
      public:
          _ExtrusionValues_CheckSelfInt_AsyncWorker(
ExtrusionValues  _underlying,            Napi::Promise::Deferred const &d);
          virtual ~_ExtrusionValues_CheckSelfInt_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
ExtrusionValues  _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class _ExtrusionValues_SetCheckSelfInt_AsyncWorker : public PromiseWorker {
      public:
          _ExtrusionValues_SetCheckSelfInt_AsyncWorker(
ExtrusionValues  _underlying,            Napi::Promise::Deferred const &d,
                                 bool  c);
          virtual ~_ExtrusionValues_SetCheckSelfInt_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
ExtrusionValues  _underlying;                         bool  c;


        int resultType;
  };



#endif
