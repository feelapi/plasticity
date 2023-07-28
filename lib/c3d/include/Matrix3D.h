// This is a generated file, modify: generate/templates/Matrix3D.h

#ifndef MATRIX3D_H
#define MATRIX3D_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <mb_matrix3d.h>

#include "CartPoint3D.h"
#include "Vector3D.h"
#include "Axis3D.h"
#include "Homogeneous3D.h"
#include "PromiseWorker.h"

class Matrix3D : public
  Napi::ObjectWrap<Matrix3D>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbMatrix3D *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        Matrix3D(const Napi::CallbackInfo& info);

         Napi::Value Scale(const Napi::CallbackInfo& info);
         Napi::Value Scale_async(const Napi::CallbackInfo& info);
         Napi::Value Rotate(const Napi::CallbackInfo& info);
         Napi::Value Rotate_async(const Napi::CallbackInfo& info);
         Napi::Value Symmetry(const Napi::CallbackInfo& info);
         Napi::Value Symmetry_async(const Napi::CallbackInfo& info);
         Napi::Value GetRow(const Napi::CallbackInfo& info);
         Napi::Value GetRow_async(const Napi::CallbackInfo& info);
         Napi::Value GetColumn(const Napi::CallbackInfo& info);
         Napi::Value GetColumn_async(const Napi::CallbackInfo& info);
         Napi::Value SetRow(const Napi::CallbackInfo& info);
         Napi::Value SetRow_async(const Napi::CallbackInfo& info);
         Napi::Value SetColumn(const Napi::CallbackInfo& info);
         Napi::Value SetColumn_async(const Napi::CallbackInfo& info);
         Napi::Value GetAxisX(const Napi::CallbackInfo& info);
         Napi::Value GetAxisX_async(const Napi::CallbackInfo& info);
         Napi::Value GetAxisY(const Napi::CallbackInfo& info);
         Napi::Value GetAxisY_async(const Napi::CallbackInfo& info);
         Napi::Value GetAxisZ(const Napi::CallbackInfo& info);
         Napi::Value GetAxisZ_async(const Napi::CallbackInfo& info);
         Napi::Value GetOrigin(const Napi::CallbackInfo& info);
         Napi::Value GetOrigin_async(const Napi::CallbackInfo& info);
         Napi::Value El(const Napi::CallbackInfo& info);
         Napi::Value El_async(const Napi::CallbackInfo& info);
         Napi::Value GetOffset(const Napi::CallbackInfo& info);
         Napi::Value GetOffset_async(const Napi::CallbackInfo& info);
         Napi::Value Div(const Napi::CallbackInfo& info);
         Napi::Value Div_async(const Napi::CallbackInfo& info);
         Napi::Value Adj(const Napi::CallbackInfo& info);
         Napi::Value Adj_async(const Napi::CallbackInfo& info);
         Napi::Value SetOffset(const Napi::CallbackInfo& info);
         Napi::Value SetOffset_async(const Napi::CallbackInfo& info);
        Napi::Value Id(const Napi::CallbackInfo& info);

    MbMatrix3D * _underlying;



  private:

};


  class Matrix3D_Scale_AsyncWorker : public PromiseWorker {
      public:
          Matrix3D_Scale_AsyncWorker(
MbMatrix3D * _underlying,            Napi::Promise::Deferred const &d,
                                 double  sx,
                                 double  sy,
                                 double  sz);
          virtual ~Matrix3D_Scale_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbMatrix3D * _underlying;                         double  sx;
                         double  sy;
                         double  sz;


        int resultType;
  };


  class Matrix3D_Rotate_AsyncWorker : public PromiseWorker {
      public:
          Matrix3D_Rotate_AsyncWorker(
MbMatrix3D * _underlying,            Napi::Promise::Deferred const &d,
                                const MbAxis3D & axis,
                                 double  angle);
          virtual ~Matrix3D_Rotate_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbMatrix3D * _underlying;                        const MbAxis3D & axis;
                         double  angle;

                
                 MbMatrix3D * _result;
                

        int resultType;
  };


  class Matrix3D_Symmetry_AsyncWorker : public PromiseWorker {
      public:
          Matrix3D_Symmetry_AsyncWorker(
MbMatrix3D * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCartPoint3D & origin,
                                 MbVector3D & normal);
          virtual ~Matrix3D_Symmetry_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbMatrix3D * _underlying;                        const MbCartPoint3D & origin;
                         MbVector3D & normal;


        int resultType;
  };


  class Matrix3D_GetRow_AsyncWorker : public PromiseWorker {
      public:
          Matrix3D_GetRow_AsyncWorker(
MbMatrix3D * _underlying,            Napi::Promise::Deferred const &d,
                                 size_t  i);
          virtual ~Matrix3D_GetRow_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbMatrix3D * _underlying;                         size_t  i;

                
                 MbVector3D * _result;
                

        int resultType;
  };


  class Matrix3D_GetColumn_AsyncWorker : public PromiseWorker {
      public:
          Matrix3D_GetColumn_AsyncWorker(
MbMatrix3D * _underlying,            Napi::Promise::Deferred const &d,
                                 size_t  i);
          virtual ~Matrix3D_GetColumn_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbMatrix3D * _underlying;                         size_t  i;

                
                 MbVector3D * _result;
                

        int resultType;
  };


  class Matrix3D_SetRow_AsyncWorker : public PromiseWorker {
      public:
          Matrix3D_SetRow_AsyncWorker(
MbMatrix3D * _underlying,            Napi::Promise::Deferred const &d,
                                 size_t  i,
                                 MbHomogeneous3D  h);
          virtual ~Matrix3D_SetRow_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbMatrix3D * _underlying;                         size_t  i;
                         MbHomogeneous3D  h;


        int resultType;
  };


  class Matrix3D_SetColumn_AsyncWorker : public PromiseWorker {
      public:
          Matrix3D_SetColumn_AsyncWorker(
MbMatrix3D * _underlying,            Napi::Promise::Deferred const &d,
                                 size_t  i,
                                 MbHomogeneous3D  h);
          virtual ~Matrix3D_SetColumn_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbMatrix3D * _underlying;                         size_t  i;
                         MbHomogeneous3D  h;


        int resultType;
  };


  class Matrix3D_GetAxisX_AsyncWorker : public PromiseWorker {
      public:
          Matrix3D_GetAxisX_AsyncWorker(
MbMatrix3D * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Matrix3D_GetAxisX_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbMatrix3D * _underlying;
                
                const MbVector3D * _result;
                

        int resultType;
  };


  class Matrix3D_GetAxisY_AsyncWorker : public PromiseWorker {
      public:
          Matrix3D_GetAxisY_AsyncWorker(
MbMatrix3D * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Matrix3D_GetAxisY_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbMatrix3D * _underlying;
                
                const MbVector3D * _result;
                

        int resultType;
  };


  class Matrix3D_GetAxisZ_AsyncWorker : public PromiseWorker {
      public:
          Matrix3D_GetAxisZ_AsyncWorker(
MbMatrix3D * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Matrix3D_GetAxisZ_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbMatrix3D * _underlying;
                
                const MbVector3D * _result;
                

        int resultType;
  };


  class Matrix3D_GetOrigin_AsyncWorker : public PromiseWorker {
      public:
          Matrix3D_GetOrigin_AsyncWorker(
MbMatrix3D * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Matrix3D_GetOrigin_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbMatrix3D * _underlying;
                
                const MbVector3D * _result;
                

        int resultType;
  };


  class Matrix3D_El_AsyncWorker : public PromiseWorker {
      public:
          Matrix3D_El_AsyncWorker(
MbMatrix3D * _underlying,            Napi::Promise::Deferred const &d,
                                 size_t  i,
                                 size_t  j);
          virtual ~Matrix3D_El_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbMatrix3D * _underlying;                         size_t  i;
                         size_t  j;

                
                 double  _result;
                

        int resultType;
  };


  class Matrix3D_GetOffset_AsyncWorker : public PromiseWorker {
      public:
          Matrix3D_GetOffset_AsyncWorker(
MbMatrix3D * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Matrix3D_GetOffset_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbMatrix3D * _underlying;
                
                 MbCartPoint3D * p;
                

        int resultType;
  };


  class Matrix3D_Div_AsyncWorker : public PromiseWorker {
      public:
          Matrix3D_Div_AsyncWorker(
MbMatrix3D * _underlying,            Napi::Promise::Deferred const &d,
                                 MbMatrix3D & from);
          virtual ~Matrix3D_Div_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbMatrix3D * _underlying;                         MbMatrix3D & from;

                
                 MbMatrix3D * _result;
                

        int resultType;
  };


  class Matrix3D_Adj_AsyncWorker : public PromiseWorker {
      public:
          Matrix3D_Adj_AsyncWorker(
MbMatrix3D * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Matrix3D_Adj_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbMatrix3D * _underlying;

        int resultType;
  };


  class Matrix3D_SetOffset_AsyncWorker : public PromiseWorker {
      public:
          Matrix3D_SetOffset_AsyncWorker(
MbMatrix3D * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCartPoint3D & p);
          virtual ~Matrix3D_SetOffset_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbMatrix3D * _underlying;                        const MbCartPoint3D & p;


        int resultType;
  };



#endif
