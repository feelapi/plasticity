// This is a generated file, modify: generate/templates/BooleanFlags.h

#ifndef BOOLEANFLAGS_H
#define BOOLEANFLAGS_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <op_boolean_flags.h>

#include "PromiseWorker.h"

class BooleanFlags : public
  Napi::ObjectWrap<BooleanFlags>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbBooleanFlags *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        BooleanFlags(const Napi::CallbackInfo& info);

         Napi::Value InitBoolean(const Napi::CallbackInfo& info);
         Napi::Value InitBoolean_async(const Napi::CallbackInfo& info);
         Napi::Value InitCutting(const Napi::CallbackInfo& info);
         Napi::Value InitCutting_async(const Napi::CallbackInfo& info);
         Napi::Value SetMergingFaces(const Napi::CallbackInfo& info);
         Napi::Value SetMergingFaces_async(const Napi::CallbackInfo& info);
         Napi::Value SetMergingEdges(const Napi::CallbackInfo& info);
         Napi::Value SetMergingEdges_async(const Napi::CallbackInfo& info);
        Napi::Value Id(const Napi::CallbackInfo& info);

    MbBooleanFlags * _underlying;



  private:

};


  class BooleanFlags_InitBoolean_AsyncWorker : public PromiseWorker {
      public:
          BooleanFlags_InitBoolean_AsyncWorker(
MbBooleanFlags * _underlying,            Napi::Promise::Deferred const &d,
                                 bool  _closed,
                                 bool  _allowNonIntersecting = false);
          virtual ~BooleanFlags_InitBoolean_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbBooleanFlags * _underlying;                         bool  _closed;
                         bool  _allowNonIntersecting= false;


        int resultType;
  };


  class BooleanFlags_InitCutting_AsyncWorker : public PromiseWorker {
      public:
          BooleanFlags_InitCutting_AsyncWorker(
MbBooleanFlags * _underlying,            Napi::Promise::Deferred const &d,
                                 bool  _closed,
                                 bool  _allowNonIntersecting = false);
          virtual ~BooleanFlags_InitCutting_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbBooleanFlags * _underlying;                         bool  _closed;
                         bool  _allowNonIntersecting= false;


        int resultType;
  };


  class BooleanFlags_SetMergingFaces_AsyncWorker : public PromiseWorker {
      public:
          BooleanFlags_SetMergingFaces_AsyncWorker(
MbBooleanFlags * _underlying,            Napi::Promise::Deferred const &d,
                                 bool  s);
          virtual ~BooleanFlags_SetMergingFaces_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbBooleanFlags * _underlying;                         bool  s;


        int resultType;
  };


  class BooleanFlags_SetMergingEdges_AsyncWorker : public PromiseWorker {
      public:
          BooleanFlags_SetMergingEdges_AsyncWorker(
MbBooleanFlags * _underlying,            Napi::Promise::Deferred const &d,
                                 bool  s);
          virtual ~BooleanFlags_SetMergingEdges_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbBooleanFlags * _underlying;                         bool  s;


        int resultType;
  };



#endif
