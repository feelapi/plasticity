// This is a generated file, modify: generate/templates/Item.h

#ifndef ITEM_H
#define ITEM_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <model_item.h>

#include "ProgressIndicator.h"
#include "Mesh.h"
#include "StepData.h"
#include "FormNote.h"
#include "RegDuplicate.h"
#include "AttributeContainer.h"
#include "SpaceItem.h"
#include "Transactions.h"
#include "Creator.h"
#include "ControlData3D.h"
#include "PromiseWorker.h"

class Item : public
  Napi::ObjectWrap<Item>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbItem *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        Item(const Napi::CallbackInfo& info);

         Napi::Value CreateMesh(const Napi::CallbackInfo& info);
         Napi::Value CreateMesh_async(const Napi::CallbackInfo& info);
         Napi::Value CalculateMesh(const Napi::CallbackInfo& info);
         Napi::Value CalculateMesh_async(const Napi::CallbackInfo& info);
         Napi::Value GetItemName(const Napi::CallbackInfo& info);
         Napi::Value GetItemName_async(const Napi::CallbackInfo& info);
         Napi::Value SetItemName(const Napi::CallbackInfo& info);
         Napi::Value SetItemName_async(const Napi::CallbackInfo& info);
         Napi::Value Cast(const Napi::CallbackInfo& info);
         Napi::Value Cast_async(const Napi::CallbackInfo& info);
         Napi::Value RebuildItem(const Napi::CallbackInfo& info);
         Napi::Value RebuildItem_async(const Napi::CallbackInfo& info);
         Napi::Value GetItemByPath(const Napi::CallbackInfo& info);
         Napi::Value GetItemByPath_async(const Napi::CallbackInfo& info);
         Napi::Value IsA(const Napi::CallbackInfo& info);
         Napi::Value IsA_async(const Napi::CallbackInfo& info);
         Napi::Value Type(const Napi::CallbackInfo& info);
         Napi::Value Type_async(const Napi::CallbackInfo& info);
         Napi::Value Family(const Napi::CallbackInfo& info);
         Napi::Value Family_async(const Napi::CallbackInfo& info);
         Napi::Value Transform(const Napi::CallbackInfo& info);
         Napi::Value Transform_async(const Napi::CallbackInfo& info);
         Napi::Value Move(const Napi::CallbackInfo& info);
         Napi::Value Move_async(const Napi::CallbackInfo& info);
         Napi::Value Rotate(const Napi::CallbackInfo& info);
         Napi::Value Rotate_async(const Napi::CallbackInfo& info);
         Napi::Value Refresh(const Napi::CallbackInfo& info);
         Napi::Value Refresh_async(const Napi::CallbackInfo& info);
         Napi::Value Duplicate(const Napi::CallbackInfo& info);
         Napi::Value Duplicate_async(const Napi::CallbackInfo& info);
         Napi::Value AddYourGabaritTo(const Napi::CallbackInfo& info);
         Napi::Value AddYourGabaritTo_async(const Napi::CallbackInfo& info);
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

    MbItem * _underlying;

    ~Item();


  private:

};


  class Item_CreateMesh_AsyncWorker : public PromiseWorker {
      public:
          Item_CreateMesh_AsyncWorker(
MbItem * _underlying,            Napi::Promise::Deferred const &d,
                                const MbStepData & stepData,
                                const MbFormNote & note,
                                 MbRegDuplicate * iReg = NULL);
          virtual ~Item_CreateMesh_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbItem * _underlying;                        const MbStepData & stepData;
                        const MbFormNote & note;
                         MbRegDuplicate * iReg= NULL;

                
                 MbItem * _result;
                

        int resultType;
  };


  class Item_CalculateMesh_AsyncWorker : public PromiseWorker {
      public:
          Item_CalculateMesh_AsyncWorker(
MbItem * _underlying,            Napi::Promise::Deferred const &d,
                                const MbStepData & stepData,
                                const MbFormNote & note);
          virtual ~Item_CalculateMesh_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbItem * _underlying;                        const MbStepData & stepData;
                        const MbFormNote & note;

                
                 MbMesh * mesh;
                

        int resultType;
  };


  class Item_GetItemName_AsyncWorker : public PromiseWorker {
      public:
          Item_GetItemName_AsyncWorker(
MbItem * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Item_GetItemName_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbItem * _underlying;
                
                 SimpleName  _result;
                

        int resultType;
  };


  class Item_SetItemName_AsyncWorker : public PromiseWorker {
      public:
          Item_SetItemName_AsyncWorker(
MbItem * _underlying,            Napi::Promise::Deferred const &d,
                                 SimpleName  name);
          virtual ~Item_SetItemName_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbItem * _underlying;                         SimpleName  name;


        int resultType;
  };


  class Item_RebuildItem_AsyncWorker : public PromiseWorker {
      public:
          Item_RebuildItem_AsyncWorker(
MbItem * _underlying,            Napi::Promise::Deferred const &d,
                                 MbeCopyMode  sameShell,
                                 ProgressIndicator * progInd = NULL);
          virtual ~Item_RebuildItem_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbItem * _underlying;                         MbeCopyMode  sameShell;
                         ProgressIndicator * progInd= NULL;

                
                 RPArray<MbSpaceItem> * items;
                

        int resultType;
  };


  class Item_GetItemByPath_AsyncWorker : public PromiseWorker {
      public:
          Item_GetItemByPath_AsyncWorker(
MbItem * _underlying,            Napi::Promise::Deferred const &d,
                                const MbPath & path,
                                 size_t  ind,
                                 MbMatrix3D & from,
                                 size_t  currInd = 0);
          virtual ~Item_GetItemByPath_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbItem * _underlying;                        const MbPath & path;
                         size_t  ind;
                         MbMatrix3D & from;
                         size_t  currInd= 0;

                
                const MbItem * _result;
                

        int resultType;
  };


  class Item_IsA_AsyncWorker : public PromiseWorker {
      public:
          Item_IsA_AsyncWorker(
MbItem * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Item_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbItem * _underlying;
                
                 MbeSpaceType  _result;
                

        int resultType;
  };


  class Item_Type_AsyncWorker : public PromiseWorker {
      public:
          Item_Type_AsyncWorker(
MbItem * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Item_Type_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbItem * _underlying;
                
                 MbeSpaceType  _result;
                

        int resultType;
  };


  class Item_Family_AsyncWorker : public PromiseWorker {
      public:
          Item_Family_AsyncWorker(
MbItem * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Item_Family_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbItem * _underlying;
                
                 MbeSpaceType  _result;
                

        int resultType;
  };


  class Item_Transform_AsyncWorker : public PromiseWorker {
      public:
          Item_Transform_AsyncWorker(
MbItem * _underlying,            Napi::Promise::Deferred const &d,
                                const MbMatrix3D & mat,
                                 MbRegTransform * iReg = NULL);
          virtual ~Item_Transform_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbItem * _underlying;                        const MbMatrix3D & mat;
                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class Item_Move_AsyncWorker : public PromiseWorker {
      public:
          Item_Move_AsyncWorker(
MbItem * _underlying,            Napi::Promise::Deferred const &d,
                                const MbVector3D & v,
                                 MbRegTransform * iReg = NULL);
          virtual ~Item_Move_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbItem * _underlying;                        const MbVector3D & v;
                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class Item_Rotate_AsyncWorker : public PromiseWorker {
      public:
          Item_Rotate_AsyncWorker(
MbItem * _underlying,            Napi::Promise::Deferred const &d,
                                const MbAxis3D & axis,
                                 double  angle,
                                 MbRegTransform * iReg = NULL);
          virtual ~Item_Rotate_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbItem * _underlying;                        const MbAxis3D & axis;
                         double  angle;
                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class Item_Refresh_AsyncWorker : public PromiseWorker {
      public:
          Item_Refresh_AsyncWorker(
MbItem * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Item_Refresh_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbItem * _underlying;

        int resultType;
  };


  class Item_Duplicate_AsyncWorker : public PromiseWorker {
      public:
          Item_Duplicate_AsyncWorker(
MbItem * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRegDuplicate * iReg = NULL);
          virtual ~Item_Duplicate_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbItem * _underlying;                         MbRegDuplicate * iReg= NULL;

                
                 MbSpaceItem * _result;
                

        int resultType;
  };


  class Item_AddYourGabaritTo_AsyncWorker : public PromiseWorker {
      public:
          Item_AddYourGabaritTo_AsyncWorker(
MbItem * _underlying,            Napi::Promise::Deferred const &d,
                                 MbCube & cube);
          virtual ~Item_AddYourGabaritTo_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbItem * _underlying;                         MbCube & cube;


        int resultType;
  };


  class Item_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          Item_GetUseCount_AsyncWorker(
MbItem * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Item_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbItem * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class Item_AddRef_AsyncWorker : public PromiseWorker {
      public:
          Item_AddRef_AsyncWorker(
MbItem * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Item_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbItem * _underlying;

        int resultType;
  };


  class Item_SetStyle_AsyncWorker : public PromiseWorker {
      public:
          Item_SetStyle_AsyncWorker(
MbItem * _underlying,            Napi::Promise::Deferred const &d,
                                 int  s);
          virtual ~Item_SetStyle_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbItem * _underlying;                         int  s;


        int resultType;
  };


  class Item_GetStyle_AsyncWorker : public PromiseWorker {
      public:
          Item_GetStyle_AsyncWorker(
MbItem * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Item_GetStyle_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbItem * _underlying;
                
                 int  _result;
                

        int resultType;
  };


  class Item_SetColor_AsyncWorker : public PromiseWorker {
      public:
          Item_SetColor_AsyncWorker(
MbItem * _underlying,            Napi::Promise::Deferred const &d,
                                 uint32  c);
          virtual ~Item_SetColor_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbItem * _underlying;                         uint32  c;


        int resultType;
  };


  class Item_GetColor_AsyncWorker : public PromiseWorker {
      public:
          Item_GetColor_AsyncWorker(
MbItem * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Item_GetColor_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbItem * _underlying;
                
                 uint32  _result;
                

        int resultType;
  };


  class Item_AttributesConvert_AsyncWorker : public PromiseWorker {
      public:
          Item_AttributesConvert_AsyncWorker(
MbItem * _underlying,            Napi::Promise::Deferred const &d,
                                 MbGrid & other);
          virtual ~Item_AttributesConvert_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbItem * _underlying;                         MbGrid & other;


        int resultType;
  };


  class Item_GetCreatorsCount_AsyncWorker : public PromiseWorker {
      public:
          Item_GetCreatorsCount_AsyncWorker(
MbItem * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Item_GetCreatorsCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbItem * _underlying;
                
                 size_t  _result;
                

        int resultType;
  };


  class Item_GetCreator_AsyncWorker : public PromiseWorker {
      public:
          Item_GetCreator_AsyncWorker(
MbItem * _underlying,            Napi::Promise::Deferred const &d,
                                 size_t  ind);
          virtual ~Item_GetCreator_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbItem * _underlying;                         size_t  ind;

                
                const MbCreator * _result;
                

        int resultType;
  };


  class Item_SetCreator_AsyncWorker : public PromiseWorker {
      public:
          Item_SetCreator_AsyncWorker(
MbItem * _underlying,            Napi::Promise::Deferred const &d,
                                 size_t  ind);
          virtual ~Item_SetCreator_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbItem * _underlying;                         size_t  ind;

                
                 MbCreator * _result;
                

        int resultType;
  };


  class Item_DetachCreator_AsyncWorker : public PromiseWorker {
      public:
          Item_DetachCreator_AsyncWorker(
MbItem * _underlying,            Napi::Promise::Deferred const &d,
                                 size_t  ind);
          virtual ~Item_DetachCreator_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbItem * _underlying;                         size_t  ind;

                
                 MbCreator * _result;
                

        int resultType;
  };


  class Item_AddCreator_AsyncWorker : public PromiseWorker {
      public:
          Item_AddCreator_AsyncWorker(
MbItem * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCreator * creator,
                                 bool  addSame = false);
          virtual ~Item_AddCreator_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbItem * _underlying;                        const MbCreator * creator;
                         bool  addSame= false;

                
                 bool  _result;
                

        int resultType;
  };


  class Item_GetCreators_AsyncWorker : public PromiseWorker {
      public:
          Item_GetCreators_AsyncWorker(
MbItem * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Item_GetCreators_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbItem * _underlying;
                
                 RPArray<MbCreator> * creators;
                

        int resultType;
  };


  class Item_DeleteCreator_AsyncWorker : public PromiseWorker {
      public:
          Item_DeleteCreator_AsyncWorker(
MbItem * _underlying,            Napi::Promise::Deferred const &d,
                                 size_t  ind);
          virtual ~Item_DeleteCreator_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbItem * _underlying;                         size_t  ind;

                
                 bool  _result;
                

        int resultType;
  };


  class Item_GetActiveCreatorsCount_AsyncWorker : public PromiseWorker {
      public:
          Item_GetActiveCreatorsCount_AsyncWorker(
MbItem * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Item_GetActiveCreatorsCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbItem * _underlying;
                
                 size_t  _result;
                

        int resultType;
  };



#endif
