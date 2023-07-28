// This is a generated file, modify: generate/templates/Matrix.h

#ifndef MATRIX_H
#define MATRIX_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <mb_matrix.h>

#include "Placement.h"
#include "PromiseWorker.h"

class Matrix : public
  Napi::ObjectWrap<Matrix>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbMatrix *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        Matrix(const Napi::CallbackInfo& info);

         Napi::Value Scale(const Napi::CallbackInfo& info);
         Napi::Value Scale_async(const Napi::CallbackInfo& info);
         Napi::Value ScaleX(const Napi::CallbackInfo& info);
         Napi::Value ScaleX_async(const Napi::CallbackInfo& info);
         Napi::Value ScaleY(const Napi::CallbackInfo& info);
         Napi::Value ScaleY_async(const Napi::CallbackInfo& info);
        Napi::Value Id(const Napi::CallbackInfo& info);

    MbMatrix * _underlying;



  private:

};


  class Matrix_Scale_AsyncWorker : public PromiseWorker {
      public:
          Matrix_Scale_AsyncWorker(
MbMatrix * _underlying,            Napi::Promise::Deferred const &d,
                                 double  s);
          virtual ~Matrix_Scale_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbMatrix * _underlying;                         double  s;


        int resultType;
  };


  class Matrix_ScaleX_AsyncWorker : public PromiseWorker {
      public:
          Matrix_ScaleX_AsyncWorker(
MbMatrix * _underlying,            Napi::Promise::Deferred const &d,
                                 double  s);
          virtual ~Matrix_ScaleX_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbMatrix * _underlying;                         double  s;


        int resultType;
  };


  class Matrix_ScaleY_AsyncWorker : public PromiseWorker {
      public:
          Matrix_ScaleY_AsyncWorker(
MbMatrix * _underlying,            Napi::Promise::Deferred const &d,
                                 double  s);
          virtual ~Matrix_ScaleY_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbMatrix * _underlying;                         double  s;


        int resultType;
  };



#endif
