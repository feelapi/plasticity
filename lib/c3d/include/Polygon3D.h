// This is a generated file, modify: generate/templates/Polygon3D.h

#ifndef POLYGON3D_H
#define POLYGON3D_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <mesh_primitive.h>

#include "Primitive.h"
#include "StepData.h"
#include "Cube.h"
#include "PromiseWorker.h"

class Polygon3D : public
  Napi::ObjectWrap<Polygon3D>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbPolygon3D *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        Polygon3D(const Napi::CallbackInfo& info);

         Napi::Value SetItem(const Napi::CallbackInfo& info);
         Napi::Value SetItem_async(const Napi::CallbackInfo& info);
         Napi::Value SetPrimitiveName(const Napi::CallbackInfo& info);
         Napi::Value SetPrimitiveName_async(const Napi::CallbackInfo& info);
         Napi::Value SetPrimitiveType(const Napi::CallbackInfo& info);
         Napi::Value SetPrimitiveType_async(const Napi::CallbackInfo& info);
         Napi::Value GetUseCount(const Napi::CallbackInfo& info);
         Napi::Value GetUseCount_async(const Napi::CallbackInfo& info);
         Napi::Value AddRef(const Napi::CallbackInfo& info);
         Napi::Value AddRef_async(const Napi::CallbackInfo& info);
         Napi::Value SetStyle(const Napi::CallbackInfo& info);
         Napi::Value SetStyle_async(const Napi::CallbackInfo& info);
         Napi::Value GetStyle(const Napi::CallbackInfo& info);
         Napi::Value GetStyle_async(const Napi::CallbackInfo& info);
         Napi::Value SetColor(const Napi::CallbackInfo& info);
         Napi::Value SetColor_async(const Napi::CallbackInfo& info);
         Napi::Value GetColor(const Napi::CallbackInfo& info);
         Napi::Value GetColor_async(const Napi::CallbackInfo& info);
         Napi::Value AttributesConvert(const Napi::CallbackInfo& info);
         Napi::Value AttributesConvert_async(const Napi::CallbackInfo& info);
        Napi::Value Id(const Napi::CallbackInfo& info);

    MbPolygon3D * _underlying;

    ~Polygon3D();


  private:

};


  class Polygon3D_SetItem_AsyncWorker : public PromiseWorker {
      public:
          Polygon3D_SetItem_AsyncWorker(
MbPolygon3D * _underlying,            Napi::Promise::Deferred const &d,
                                const MbRefItem * g);
          virtual ~Polygon3D_SetItem_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolygon3D * _underlying;                        const MbRefItem * g;


        int resultType;
  };


  class Polygon3D_SetPrimitiveName_AsyncWorker : public PromiseWorker {
      public:
          Polygon3D_SetPrimitiveName_AsyncWorker(
MbPolygon3D * _underlying,            Napi::Promise::Deferred const &d,
                                 SimpleName  n);
          virtual ~Polygon3D_SetPrimitiveName_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolygon3D * _underlying;                         SimpleName  n;


        int resultType;
  };


  class Polygon3D_SetPrimitiveType_AsyncWorker : public PromiseWorker {
      public:
          Polygon3D_SetPrimitiveType_AsyncWorker(
MbPolygon3D * _underlying,            Napi::Promise::Deferred const &d,
                                 MbeRefType  t);
          virtual ~Polygon3D_SetPrimitiveType_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolygon3D * _underlying;                         MbeRefType  t;


        int resultType;
  };


  class Polygon3D_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          Polygon3D_GetUseCount_AsyncWorker(
MbPolygon3D * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Polygon3D_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolygon3D * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class Polygon3D_AddRef_AsyncWorker : public PromiseWorker {
      public:
          Polygon3D_AddRef_AsyncWorker(
MbPolygon3D * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Polygon3D_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolygon3D * _underlying;

        int resultType;
  };


  class Polygon3D_SetStyle_AsyncWorker : public PromiseWorker {
      public:
          Polygon3D_SetStyle_AsyncWorker(
MbPolygon3D * _underlying,            Napi::Promise::Deferred const &d,
                                 int  s);
          virtual ~Polygon3D_SetStyle_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolygon3D * _underlying;                         int  s;


        int resultType;
  };


  class Polygon3D_GetStyle_AsyncWorker : public PromiseWorker {
      public:
          Polygon3D_GetStyle_AsyncWorker(
MbPolygon3D * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Polygon3D_GetStyle_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolygon3D * _underlying;
                
                 int  _result;
                

        int resultType;
  };


  class Polygon3D_SetColor_AsyncWorker : public PromiseWorker {
      public:
          Polygon3D_SetColor_AsyncWorker(
MbPolygon3D * _underlying,            Napi::Promise::Deferred const &d,
                                 uint32  c);
          virtual ~Polygon3D_SetColor_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolygon3D * _underlying;                         uint32  c;


        int resultType;
  };


  class Polygon3D_GetColor_AsyncWorker : public PromiseWorker {
      public:
          Polygon3D_GetColor_AsyncWorker(
MbPolygon3D * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Polygon3D_GetColor_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolygon3D * _underlying;
                
                 uint32  _result;
                

        int resultType;
  };


  class Polygon3D_AttributesConvert_AsyncWorker : public PromiseWorker {
      public:
          Polygon3D_AttributesConvert_AsyncWorker(
MbPolygon3D * _underlying,            Napi::Promise::Deferred const &d,
                                 MbGrid & other);
          virtual ~Polygon3D_AttributesConvert_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPolygon3D * _underlying;                         MbGrid & other;


        int resultType;
  };



#endif
