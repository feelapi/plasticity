// This is a generated file, modify: generate/templates/_SweptValues.h

#ifndef _SWEPTVALUES_H
#define _SWEPTVALUES_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <op_swept_parameter.h>

#include "PromiseWorker.h"

class _SweptValues : public
  Napi::ObjectWrap<_SweptValues>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, SweptValues *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        _SweptValues(const Napi::CallbackInfo& info);

         Napi::Value CheckSelfInt(const Napi::CallbackInfo& info);
         Napi::Value CheckSelfInt_async(const Napi::CallbackInfo& info);
         Napi::Value SetCheckSelfInt(const Napi::CallbackInfo& info);
         Napi::Value SetCheckSelfInt_async(const Napi::CallbackInfo& info);
        Napi::Value Id(const Napi::CallbackInfo& info);

    SweptValues * _underlying;



  private:
        Napi::Value GetValue_thickness1(const Napi::CallbackInfo &info);
        void SetValue_thickness1(const Napi::CallbackInfo &info, const Napi::Value &value);
        Napi::Value GetValue_thickness2(const Napi::CallbackInfo &info);
        void SetValue_thickness2(const Napi::CallbackInfo &info, const Napi::Value &value);
        Napi::Value GetValue_shellClosed(const Napi::CallbackInfo &info);
        void SetValue_shellClosed(const Napi::CallbackInfo &info, const Napi::Value &value);

};


  class _SweptValues_CheckSelfInt_AsyncWorker : public PromiseWorker {
      public:
          _SweptValues_CheckSelfInt_AsyncWorker(
SweptValues * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~_SweptValues_CheckSelfInt_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
SweptValues * _underlying;
                
                 bool  _result;
                

        int resultType;
  };


  class _SweptValues_SetCheckSelfInt_AsyncWorker : public PromiseWorker {
      public:
          _SweptValues_SetCheckSelfInt_AsyncWorker(
SweptValues * _underlying,            Napi::Promise::Deferred const &d,
                                 bool  c);
          virtual ~_SweptValues_SetCheckSelfInt_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
SweptValues * _underlying;                         bool  c;


        int resultType;
  };



#endif
