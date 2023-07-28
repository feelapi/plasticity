// This is a generated file, modify: generate/templates/Rect.h

#ifndef RECT_H
#define RECT_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <mb_rect.h>

#include "PromiseWorker.h"

class Rect : public
  Napi::ObjectWrap<Rect>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbRect *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        Rect(const Napi::CallbackInfo& info);

         Napi::Value GetTop(const Napi::CallbackInfo& info);
         Napi::Value GetTop_async(const Napi::CallbackInfo& info);
         Napi::Value GetBottom(const Napi::CallbackInfo& info);
         Napi::Value GetBottom_async(const Napi::CallbackInfo& info);
         Napi::Value GetLeft(const Napi::CallbackInfo& info);
         Napi::Value GetLeft_async(const Napi::CallbackInfo& info);
         Napi::Value GetRight(const Napi::CallbackInfo& info);
         Napi::Value GetRight_async(const Napi::CallbackInfo& info);
        Napi::Value Id(const Napi::CallbackInfo& info);

    MbRect * _underlying;



  private:

};


  class Rect_GetTop_AsyncWorker : public PromiseWorker {
      public:
          Rect_GetTop_AsyncWorker(
MbRect * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Rect_GetTop_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbRect * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Rect_GetBottom_AsyncWorker : public PromiseWorker {
      public:
          Rect_GetBottom_AsyncWorker(
MbRect * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Rect_GetBottom_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbRect * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Rect_GetLeft_AsyncWorker : public PromiseWorker {
      public:
          Rect_GetLeft_AsyncWorker(
MbRect * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Rect_GetLeft_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbRect * _underlying;
                
                 double  _result;
                

        int resultType;
  };


  class Rect_GetRight_AsyncWorker : public PromiseWorker {
      public:
          Rect_GetRight_AsyncWorker(
MbRect * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Rect_GetRight_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbRect * _underlying;
                
                 double  _result;
                

        int resultType;
  };



#endif
