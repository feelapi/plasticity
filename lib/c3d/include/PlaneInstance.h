// This is a generated file, modify: generate/templates/PlaneInstance.h

#ifndef PLANEINSTANCE_H
#define PLANEINSTANCE_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <plane_instance.h>

#include "Item.h"
#include "PlaneItem.h"
#include "Placement3D.h"
#include "PromiseWorker.h"

class PlaneInstance : public
  Napi::ObjectWrap<PlaneInstance>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbPlaneInstance *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        PlaneInstance(const Napi::CallbackInfo& info);

         Napi::Value GetPlacement(const Napi::CallbackInfo& info);
         Napi::Value GetPlacement_async(const Napi::CallbackInfo& info);
         Napi::Value PlaneItemsCount(const Napi::CallbackInfo& info);
         Napi::Value PlaneItemsCount_async(const Napi::CallbackInfo& info);
         Napi::Value GetPlaneItem(const Napi::CallbackInfo& info);
         Napi::Value GetPlaneItem_async(const Napi::CallbackInfo& info);
         Napi::Value CreateMesh(const Napi::CallbackInfo& info);
         Napi::Value CreateMesh_async(const Napi::CallbackInfo& info);
         Napi::Value CalculateMesh(const Napi::CallbackInfo& info);
         Napi::Value CalculateMesh_async(const Napi::CallbackInfo& info);
         Napi::Value GetItemName(const Napi::CallbackInfo& info);
         Napi::Value GetItemName_async(const Napi::CallbackInfo& info);
         Napi::Value SetItemName(const Napi::CallbackInfo& info);
         Napi::Value SetItemName_async(const Napi::CallbackInfo& info);
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

    MbPlaneInstance * _underlying;

    ~PlaneInstance();


  private:

};


  class PlaneInstance_GetPlacement_AsyncWorker : public PromiseWorker {
      public:
          PlaneInstance_GetPlacement_AsyncWorker(
MbPlaneInstance * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~PlaneInstance_GetPlacement_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlaneInstance * _underlying;
                
                const MbPlacement3D * _result;
                

        int resultType;
  };


  class PlaneInstance_PlaneItemsCount_AsyncWorker : public PromiseWorker {
      public:
          PlaneInstance_PlaneItemsCount_AsyncWorker(
MbPlaneInstance * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~PlaneInstance_PlaneItemsCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlaneInstance * _underlying;
                
                 size_t  _result;
                

        int resultType;
  };


  class PlaneInstance_GetPlaneItem_AsyncWorker : public PromiseWorker {
      public:
          PlaneInstance_GetPlaneItem_AsyncWorker(
MbPlaneInstance * _underlying,            Napi::Promise::Deferred const &d,
                                 size_t  ind = 0);
          virtual ~PlaneInstance_GetPlaneItem_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlaneInstance * _underlying;                         size_t  ind= 0;

                
                const MbPlaneItem * _result;
                

        int resultType;
  };


  class PlaneInstance_CreateMesh_AsyncWorker : public PromiseWorker {
      public:
          PlaneInstance_CreateMesh_AsyncWorker(
MbPlaneInstance * _underlying,            Napi::Promise::Deferred const &d,
                                const MbStepData & stepData,
                                const MbFormNote & note,
                                 MbRegDuplicate * iReg = NULL);
          virtual ~PlaneInstance_CreateMesh_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlaneInstance * _underlying;                        const MbStepData & stepData;
                        const MbFormNote & note;
                         MbRegDuplicate * iReg= NULL;

                
                 MbItem * _result;
                

        int resultType;
  };


  class PlaneInstance_CalculateMesh_AsyncWorker : public PromiseWorker {
      public:
          PlaneInstance_CalculateMesh_AsyncWorker(
MbPlaneInstance * _underlying,            Napi::Promise::Deferred const &d,
                                const MbStepData & stepData,
                                const MbFormNote & note);
          virtual ~PlaneInstance_CalculateMesh_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlaneInstance * _underlying;                        const MbStepData & stepData;
                        const MbFormNote & note;

                
                 MbMesh * mesh;
                

        int resultType;
  };


  class PlaneInstance_GetItemName_AsyncWorker : public PromiseWorker {
      public:
          PlaneInstance_GetItemName_AsyncWorker(
MbPlaneInstance * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~PlaneInstance_GetItemName_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlaneInstance * _underlying;
                
                 SimpleName  _result;
                

        int resultType;
  };


  class PlaneInstance_SetItemName_AsyncWorker : public PromiseWorker {
      public:
          PlaneInstance_SetItemName_AsyncWorker(
MbPlaneInstance * _underlying,            Napi::Promise::Deferred const &d,
                                 SimpleName  name);
          virtual ~PlaneInstance_SetItemName_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlaneInstance * _underlying;                         SimpleName  name;


        int resultType;
  };


  class PlaneInstance_RebuildItem_AsyncWorker : public PromiseWorker {
      public:
          PlaneInstance_RebuildItem_AsyncWorker(
MbPlaneInstance * _underlying,            Napi::Promise::Deferred const &d,
                                 MbeCopyMode  sameShell,
                                 ProgressIndicator * progInd = NULL);
          virtual ~PlaneInstance_RebuildItem_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlaneInstance * _underlying;                         MbeCopyMode  sameShell;
                         ProgressIndicator * progInd= NULL;

                
                 RPArray<MbSpaceItem> * items;
                

        int resultType;
  };


  class PlaneInstance_GetItemByPath_AsyncWorker : public PromiseWorker {
      public:
          PlaneInstance_GetItemByPath_AsyncWorker(
MbPlaneInstance * _underlying,            Napi::Promise::Deferred const &d,
                                const MbPath & path,
                                 size_t  ind,
                                 MbMatrix3D & from,
                                 size_t  currInd = 0);
          virtual ~PlaneInstance_GetItemByPath_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlaneInstance * _underlying;                        const MbPath & path;
                         size_t  ind;
                         MbMatrix3D & from;
                         size_t  currInd= 0;

                
                const MbItem * _result;
                

        int resultType;
  };


  class PlaneInstance_IsA_AsyncWorker : public PromiseWorker {
      public:
          PlaneInstance_IsA_AsyncWorker(
MbPlaneInstance * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~PlaneInstance_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlaneInstance * _underlying;
                
                 MbeSpaceType  _result;
                

        int resultType;
  };


  class PlaneInstance_Type_AsyncWorker : public PromiseWorker {
      public:
          PlaneInstance_Type_AsyncWorker(
MbPlaneInstance * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~PlaneInstance_Type_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlaneInstance * _underlying;
                
                 MbeSpaceType  _result;
                

        int resultType;
  };


  class PlaneInstance_Family_AsyncWorker : public PromiseWorker {
      public:
          PlaneInstance_Family_AsyncWorker(
MbPlaneInstance * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~PlaneInstance_Family_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlaneInstance * _underlying;
                
                 MbeSpaceType  _result;
                

        int resultType;
  };


  class PlaneInstance_Transform_AsyncWorker : public PromiseWorker {
      public:
          PlaneInstance_Transform_AsyncWorker(
MbPlaneInstance * _underlying,            Napi::Promise::Deferred const &d,
                                const MbMatrix3D & mat,
                                 MbRegTransform * iReg = NULL);
          virtual ~PlaneInstance_Transform_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlaneInstance * _underlying;                        const MbMatrix3D & mat;
                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class PlaneInstance_Move_AsyncWorker : public PromiseWorker {
      public:
          PlaneInstance_Move_AsyncWorker(
MbPlaneInstance * _underlying,            Napi::Promise::Deferred const &d,
                                const MbVector3D & v,
                                 MbRegTransform * iReg = NULL);
          virtual ~PlaneInstance_Move_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlaneInstance * _underlying;                        const MbVector3D & v;
                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class PlaneInstance_Rotate_AsyncWorker : public PromiseWorker {
      public:
          PlaneInstance_Rotate_AsyncWorker(
MbPlaneInstance * _underlying,            Napi::Promise::Deferred const &d,
                                const MbAxis3D & axis,
                                 double  angle,
                                 MbRegTransform * iReg = NULL);
          virtual ~PlaneInstance_Rotate_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlaneInstance * _underlying;                        const MbAxis3D & axis;
                         double  angle;
                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class PlaneInstance_Refresh_AsyncWorker : public PromiseWorker {
      public:
          PlaneInstance_Refresh_AsyncWorker(
MbPlaneInstance * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~PlaneInstance_Refresh_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlaneInstance * _underlying;

        int resultType;
  };


  class PlaneInstance_Duplicate_AsyncWorker : public PromiseWorker {
      public:
          PlaneInstance_Duplicate_AsyncWorker(
MbPlaneInstance * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRegDuplicate * iReg = NULL);
          virtual ~PlaneInstance_Duplicate_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlaneInstance * _underlying;                         MbRegDuplicate * iReg= NULL;

                
                 MbSpaceItem * _result;
                

        int resultType;
  };


  class PlaneInstance_AddYourGabaritTo_AsyncWorker : public PromiseWorker {
      public:
          PlaneInstance_AddYourGabaritTo_AsyncWorker(
MbPlaneInstance * _underlying,            Napi::Promise::Deferred const &d,
                                 MbCube & cube);
          virtual ~PlaneInstance_AddYourGabaritTo_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlaneInstance * _underlying;                         MbCube & cube;


        int resultType;
  };


  class PlaneInstance_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          PlaneInstance_GetUseCount_AsyncWorker(
MbPlaneInstance * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~PlaneInstance_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlaneInstance * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class PlaneInstance_AddRef_AsyncWorker : public PromiseWorker {
      public:
          PlaneInstance_AddRef_AsyncWorker(
MbPlaneInstance * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~PlaneInstance_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlaneInstance * _underlying;

        int resultType;
  };


  class PlaneInstance_SetStyle_AsyncWorker : public PromiseWorker {
      public:
          PlaneInstance_SetStyle_AsyncWorker(
MbPlaneInstance * _underlying,            Napi::Promise::Deferred const &d,
                                 int  s);
          virtual ~PlaneInstance_SetStyle_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlaneInstance * _underlying;                         int  s;


        int resultType;
  };


  class PlaneInstance_GetStyle_AsyncWorker : public PromiseWorker {
      public:
          PlaneInstance_GetStyle_AsyncWorker(
MbPlaneInstance * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~PlaneInstance_GetStyle_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlaneInstance * _underlying;
                
                 int  _result;
                

        int resultType;
  };


  class PlaneInstance_SetColor_AsyncWorker : public PromiseWorker {
      public:
          PlaneInstance_SetColor_AsyncWorker(
MbPlaneInstance * _underlying,            Napi::Promise::Deferred const &d,
                                 uint32  c);
          virtual ~PlaneInstance_SetColor_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlaneInstance * _underlying;                         uint32  c;


        int resultType;
  };


  class PlaneInstance_GetColor_AsyncWorker : public PromiseWorker {
      public:
          PlaneInstance_GetColor_AsyncWorker(
MbPlaneInstance * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~PlaneInstance_GetColor_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlaneInstance * _underlying;
                
                 uint32  _result;
                

        int resultType;
  };


  class PlaneInstance_AttributesConvert_AsyncWorker : public PromiseWorker {
      public:
          PlaneInstance_AttributesConvert_AsyncWorker(
MbPlaneInstance * _underlying,            Napi::Promise::Deferred const &d,
                                 MbGrid & other);
          virtual ~PlaneInstance_AttributesConvert_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlaneInstance * _underlying;                         MbGrid & other;


        int resultType;
  };


  class PlaneInstance_GetCreatorsCount_AsyncWorker : public PromiseWorker {
      public:
          PlaneInstance_GetCreatorsCount_AsyncWorker(
MbPlaneInstance * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~PlaneInstance_GetCreatorsCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlaneInstance * _underlying;
                
                 size_t  _result;
                

        int resultType;
  };


  class PlaneInstance_GetCreator_AsyncWorker : public PromiseWorker {
      public:
          PlaneInstance_GetCreator_AsyncWorker(
MbPlaneInstance * _underlying,            Napi::Promise::Deferred const &d,
                                 size_t  ind);
          virtual ~PlaneInstance_GetCreator_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlaneInstance * _underlying;                         size_t  ind;

                
                const MbCreator * _result;
                

        int resultType;
  };


  class PlaneInstance_SetCreator_AsyncWorker : public PromiseWorker {
      public:
          PlaneInstance_SetCreator_AsyncWorker(
MbPlaneInstance * _underlying,            Napi::Promise::Deferred const &d,
                                 size_t  ind);
          virtual ~PlaneInstance_SetCreator_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlaneInstance * _underlying;                         size_t  ind;

                
                 MbCreator * _result;
                

        int resultType;
  };


  class PlaneInstance_DetachCreator_AsyncWorker : public PromiseWorker {
      public:
          PlaneInstance_DetachCreator_AsyncWorker(
MbPlaneInstance * _underlying,            Napi::Promise::Deferred const &d,
                                 size_t  ind);
          virtual ~PlaneInstance_DetachCreator_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlaneInstance * _underlying;                         size_t  ind;

                
                 MbCreator * _result;
                

        int resultType;
  };


  class PlaneInstance_AddCreator_AsyncWorker : public PromiseWorker {
      public:
          PlaneInstance_AddCreator_AsyncWorker(
MbPlaneInstance * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCreator * creator,
                                 bool  addSame = false);
          virtual ~PlaneInstance_AddCreator_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlaneInstance * _underlying;                        const MbCreator * creator;
                         bool  addSame= false;

                
                 bool  _result;
                

        int resultType;
  };


  class PlaneInstance_GetCreators_AsyncWorker : public PromiseWorker {
      public:
          PlaneInstance_GetCreators_AsyncWorker(
MbPlaneInstance * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~PlaneInstance_GetCreators_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlaneInstance * _underlying;
                
                 RPArray<MbCreator> * creators;
                

        int resultType;
  };


  class PlaneInstance_DeleteCreator_AsyncWorker : public PromiseWorker {
      public:
          PlaneInstance_DeleteCreator_AsyncWorker(
MbPlaneInstance * _underlying,            Napi::Promise::Deferred const &d,
                                 size_t  ind);
          virtual ~PlaneInstance_DeleteCreator_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlaneInstance * _underlying;                         size_t  ind;

                
                 bool  _result;
                

        int resultType;
  };


  class PlaneInstance_GetActiveCreatorsCount_AsyncWorker : public PromiseWorker {
      public:
          PlaneInstance_GetActiveCreatorsCount_AsyncWorker(
MbPlaneInstance * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~PlaneInstance_GetActiveCreatorsCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbPlaneInstance * _underlying;
                
                 size_t  _result;
                

        int resultType;
  };



#endif
