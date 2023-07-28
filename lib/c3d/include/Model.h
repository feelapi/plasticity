// This is a generated file, modify: generate/templates/Model.h

#ifndef MODEL_H
#define MODEL_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <model.h>

#include "Item.h"
#include "Path.h"
#include "Matrix3D.h"
#include "ModelAddon.h"
#include "Transactions.h"
#include "Axis3D.h"
#include "PromiseWorker.h"

class Model : public
  Napi::ObjectWrap<Model>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbModel *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        Model(const Napi::CallbackInfo& info);

         Napi::Value AddItem(const Napi::CallbackInfo& info);
         Napi::Value AddItem_async(const Napi::CallbackInfo& info);
         Napi::Value ItemsCount(const Napi::CallbackInfo& info);
         Napi::Value ItemsCount_async(const Napi::CallbackInfo& info);
         Napi::Value GetItems(const Napi::CallbackInfo& info);
         Napi::Value GetItems_async(const Napi::CallbackInfo& info);
         Napi::Value DetachItem(const Napi::CallbackInfo& info);
         Napi::Value DetachItem_async(const Napi::CallbackInfo& info);
         Napi::Value DeleteItem(const Napi::CallbackInfo& info);
         Napi::Value DeleteItem_async(const Napi::CallbackInfo& info);
         Napi::Value GetItemByName(const Napi::CallbackInfo& info);
         Napi::Value GetItemByName_async(const Napi::CallbackInfo& info);
         Napi::Value NearestMesh(const Napi::CallbackInfo& info);
         Napi::Value NearestMesh_async(const Napi::CallbackInfo& info);
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
         Napi::Value GetCreatorsCount(const Napi::CallbackInfo& info);
         Napi::Value GetCreatorsCount_async(const Napi::CallbackInfo& info);
         Napi::Value GetCreator(const Napi::CallbackInfo& info);
         Napi::Value GetCreator_async(const Napi::CallbackInfo& info);
         Napi::Value SetCreator(const Napi::CallbackInfo& info);
         Napi::Value SetCreator_async(const Napi::CallbackInfo& info);
         Napi::Value DetachCreator(const Napi::CallbackInfo& info);
         Napi::Value DetachCreator_async(const Napi::CallbackInfo& info);
         Napi::Value AddCreator(const Napi::CallbackInfo& info);
         Napi::Value AddCreator_async(const Napi::CallbackInfo& info);
         Napi::Value GetCreators(const Napi::CallbackInfo& info);
         Napi::Value GetCreators_async(const Napi::CallbackInfo& info);
         Napi::Value DeleteCreator(const Napi::CallbackInfo& info);
         Napi::Value DeleteCreator_async(const Napi::CallbackInfo& info);
         Napi::Value GetActiveCreatorsCount(const Napi::CallbackInfo& info);
         Napi::Value GetActiveCreatorsCount_async(const Napi::CallbackInfo& info);
        Napi::Value Id(const Napi::CallbackInfo& info);

    MbModel * _underlying;

    ~Model();


  private:

};


  class Model_AddItem_AsyncWorker : public PromiseWorker {
      public:
          Model_AddItem_AsyncWorker(
MbModel * _underlying,            Napi::Promise::Deferred const &d,
                                 MbItem & item,
                                 SimpleName  n = c3d::UNDEFINED_SNAME);
          virtual ~Model_AddItem_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbModel * _underlying;                         MbItem & item;
                         SimpleName  n= c3d::UNDEFINED_SNAME;

                
                 MbItem * _result;
                

        int resultType;
  };


  class Model_ItemsCount_AsyncWorker : public PromiseWorker {
      public:
          Model_ItemsCount_AsyncWorker(
MbModel * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Model_ItemsCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbModel * _underlying;
                
                 size_t  _result;
                

        int resultType;
  };


  class Model_GetItems_AsyncWorker : public PromiseWorker {
      public:
          Model_GetItems_AsyncWorker(
MbModel * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Model_GetItems_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbModel * _underlying;
                
                 RPArray<MbItem> * items;
                

        int resultType;
  };


  class Model_DetachItem_AsyncWorker : public PromiseWorker {
      public:
          Model_DetachItem_AsyncWorker(
MbModel * _underlying,            Napi::Promise::Deferred const &d,
                                 MbItem * item,
                                 bool  resetName = true);
          virtual ~Model_DetachItem_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbModel * _underlying;                         MbItem * item;
                         bool  resetName= true;

                
                 bool  _result;
                

        int resultType;
  };


  class Model_DeleteItem_AsyncWorker : public PromiseWorker {
      public:
          Model_DeleteItem_AsyncWorker(
MbModel * _underlying,            Napi::Promise::Deferred const &d,
                                 MbItem * item,
                                 bool  resetName = true);
          virtual ~Model_DeleteItem_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbModel * _underlying;                         MbItem * item;
                         bool  resetName= true;


        int resultType;
  };


  class Model_GetItemByName_AsyncWorker : public PromiseWorker {
      public:
          Model_GetItemByName_AsyncWorker(
MbModel * _underlying,            Napi::Promise::Deferred const &d,
                                 SimpleName  n);
          virtual ~Model_GetItemByName_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbModel * _underlying;                         SimpleName  n;

                
                const MbItem * item;
                
                
                 MbPath * path;
                
                
                 MbMatrix3D * from;
                

        int resultType;
  };


  class Model_NearestMesh_AsyncWorker : public PromiseWorker {
      public:
          Model_NearestMesh_AsyncWorker(
MbModel * _underlying,            Napi::Promise::Deferred const &d,
                                 MbeSpaceType  sType,
                                 MbeTopologyType  tType,
                                 MbePlaneType  pType,
                                const MbAxis3D & axis,
                                 double  maxDistance,
                                 bool  gridPriority);
          virtual ~Model_NearestMesh_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbModel * _underlying;                         MbeSpaceType  sType;
                         MbeTopologyType  tType;
                         MbePlaneType  pType;
                        const MbAxis3D & axis;
                         double  maxDistance;
                         bool  gridPriority;

                
                 bool  success;
                
                
                 MbItem * find;
                
                
                 SimpleName  findName;
                
                
                 MbRefItem * element;
                
                
                 SimpleName  elementName;
                
                
                 MbPath * path;
                
                
                 MbMatrix3D * from;
                

        int resultType;
  };


  class Model_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          Model_GetUseCount_AsyncWorker(
MbModel * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Model_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbModel * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class Model_AddRef_AsyncWorker : public PromiseWorker {
      public:
          Model_AddRef_AsyncWorker(
MbModel * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Model_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbModel * _underlying;

        int resultType;
  };


  class Model_SetStyle_AsyncWorker : public PromiseWorker {
      public:
          Model_SetStyle_AsyncWorker(
MbModel * _underlying,            Napi::Promise::Deferred const &d,
                                 int  s);
          virtual ~Model_SetStyle_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbModel * _underlying;                         int  s;


        int resultType;
  };


  class Model_GetStyle_AsyncWorker : public PromiseWorker {
      public:
          Model_GetStyle_AsyncWorker(
MbModel * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Model_GetStyle_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbModel * _underlying;
                
                 int  _result;
                

        int resultType;
  };


  class Model_SetColor_AsyncWorker : public PromiseWorker {
      public:
          Model_SetColor_AsyncWorker(
MbModel * _underlying,            Napi::Promise::Deferred const &d,
                                 uint32  c);
          virtual ~Model_SetColor_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbModel * _underlying;                         uint32  c;


        int resultType;
  };


  class Model_GetColor_AsyncWorker : public PromiseWorker {
      public:
          Model_GetColor_AsyncWorker(
MbModel * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Model_GetColor_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbModel * _underlying;
                
                 uint32  _result;
                

        int resultType;
  };


  class Model_AttributesConvert_AsyncWorker : public PromiseWorker {
      public:
          Model_AttributesConvert_AsyncWorker(
MbModel * _underlying,            Napi::Promise::Deferred const &d,
                                 MbGrid & other);
          virtual ~Model_AttributesConvert_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbModel * _underlying;                         MbGrid & other;


        int resultType;
  };


  class Model_GetCreatorsCount_AsyncWorker : public PromiseWorker {
      public:
          Model_GetCreatorsCount_AsyncWorker(
MbModel * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Model_GetCreatorsCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbModel * _underlying;
                
                 size_t  _result;
                

        int resultType;
  };


  class Model_GetCreator_AsyncWorker : public PromiseWorker {
      public:
          Model_GetCreator_AsyncWorker(
MbModel * _underlying,            Napi::Promise::Deferred const &d,
                                 size_t  ind);
          virtual ~Model_GetCreator_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbModel * _underlying;                         size_t  ind;

                
                const MbCreator * _result;
                

        int resultType;
  };


  class Model_SetCreator_AsyncWorker : public PromiseWorker {
      public:
          Model_SetCreator_AsyncWorker(
MbModel * _underlying,            Napi::Promise::Deferred const &d,
                                 size_t  ind);
          virtual ~Model_SetCreator_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbModel * _underlying;                         size_t  ind;

                
                 MbCreator * _result;
                

        int resultType;
  };


  class Model_DetachCreator_AsyncWorker : public PromiseWorker {
      public:
          Model_DetachCreator_AsyncWorker(
MbModel * _underlying,            Napi::Promise::Deferred const &d,
                                 size_t  ind);
          virtual ~Model_DetachCreator_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbModel * _underlying;                         size_t  ind;

                
                 MbCreator * _result;
                

        int resultType;
  };


  class Model_AddCreator_AsyncWorker : public PromiseWorker {
      public:
          Model_AddCreator_AsyncWorker(
MbModel * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCreator * creator,
                                 bool  addSame = false);
          virtual ~Model_AddCreator_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbModel * _underlying;                        const MbCreator * creator;
                         bool  addSame= false;

                
                 bool  _result;
                

        int resultType;
  };


  class Model_GetCreators_AsyncWorker : public PromiseWorker {
      public:
          Model_GetCreators_AsyncWorker(
MbModel * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Model_GetCreators_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbModel * _underlying;
                
                 RPArray<MbCreator> * creators;
                

        int resultType;
  };


  class Model_DeleteCreator_AsyncWorker : public PromiseWorker {
      public:
          Model_DeleteCreator_AsyncWorker(
MbModel * _underlying,            Napi::Promise::Deferred const &d,
                                 size_t  ind);
          virtual ~Model_DeleteCreator_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbModel * _underlying;                         size_t  ind;

                
                 bool  _result;
                

        int resultType;
  };


  class Model_GetActiveCreatorsCount_AsyncWorker : public PromiseWorker {
      public:
          Model_GetActiveCreatorsCount_AsyncWorker(
MbModel * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Model_GetActiveCreatorsCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbModel * _underlying;
                
                 size_t  _result;
                

        int resultType;
  };



#endif
