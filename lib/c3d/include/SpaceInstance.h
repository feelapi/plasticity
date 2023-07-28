// This is a generated file, modify: generate/templates/SpaceInstance.h

#ifndef SPACEINSTANCE_H
#define SPACEINSTANCE_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <space_instance.h>

#include "Item.h"
#include "Surface.h"
#include "Curve3D.h"
#include "PromiseWorker.h"

class SpaceInstance : public
  Napi::ObjectWrap<SpaceInstance>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbSpaceInstance *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        SpaceInstance(const Napi::CallbackInfo& info);

         Napi::Value GetSpaceItem(const Napi::CallbackInfo& info);
         Napi::Value GetSpaceItem_async(const Napi::CallbackInfo& info);
         Napi::Value GetBasisPoints(const Napi::CallbackInfo& info);
         Napi::Value GetBasisPoints_async(const Napi::CallbackInfo& info);
         Napi::Value SetBasisPoints(const Napi::CallbackInfo& info);
         Napi::Value SetBasisPoints_async(const Napi::CallbackInfo& info);
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

    MbSpaceInstance * _underlying;

    ~SpaceInstance();


  private:

};


  class SpaceInstance_GetSpaceItem_AsyncWorker : public PromiseWorker {
      public:
          SpaceInstance_GetSpaceItem_AsyncWorker(
MbSpaceInstance * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~SpaceInstance_GetSpaceItem_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpaceInstance * _underlying;
                
                const MbSpaceItem * _result;
                

        int resultType;
  };


  class SpaceInstance_GetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          SpaceInstance_GetBasisPoints_AsyncWorker(
MbSpaceInstance * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~SpaceInstance_GetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpaceInstance * _underlying;
                
                 MbControlData3D * cd;
                

        int resultType;
  };


  class SpaceInstance_SetBasisPoints_AsyncWorker : public PromiseWorker {
      public:
          SpaceInstance_SetBasisPoints_AsyncWorker(
MbSpaceInstance * _underlying,            Napi::Promise::Deferred const &d,
                                const MbControlData3D & cd);
          virtual ~SpaceInstance_SetBasisPoints_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpaceInstance * _underlying;                        const MbControlData3D & cd;


        int resultType;
  };


  class SpaceInstance_CreateMesh_AsyncWorker : public PromiseWorker {
      public:
          SpaceInstance_CreateMesh_AsyncWorker(
MbSpaceInstance * _underlying,            Napi::Promise::Deferred const &d,
                                const MbStepData & stepData,
                                const MbFormNote & note,
                                 MbRegDuplicate * iReg = NULL);
          virtual ~SpaceInstance_CreateMesh_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpaceInstance * _underlying;                        const MbStepData & stepData;
                        const MbFormNote & note;
                         MbRegDuplicate * iReg= NULL;

                
                 MbItem * _result;
                

        int resultType;
  };


  class SpaceInstance_CalculateMesh_AsyncWorker : public PromiseWorker {
      public:
          SpaceInstance_CalculateMesh_AsyncWorker(
MbSpaceInstance * _underlying,            Napi::Promise::Deferred const &d,
                                const MbStepData & stepData,
                                const MbFormNote & note);
          virtual ~SpaceInstance_CalculateMesh_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpaceInstance * _underlying;                        const MbStepData & stepData;
                        const MbFormNote & note;

                
                 MbMesh * mesh;
                

        int resultType;
  };


  class SpaceInstance_GetItemName_AsyncWorker : public PromiseWorker {
      public:
          SpaceInstance_GetItemName_AsyncWorker(
MbSpaceInstance * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~SpaceInstance_GetItemName_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpaceInstance * _underlying;
                
                 SimpleName  _result;
                

        int resultType;
  };


  class SpaceInstance_SetItemName_AsyncWorker : public PromiseWorker {
      public:
          SpaceInstance_SetItemName_AsyncWorker(
MbSpaceInstance * _underlying,            Napi::Promise::Deferred const &d,
                                 SimpleName  name);
          virtual ~SpaceInstance_SetItemName_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpaceInstance * _underlying;                         SimpleName  name;


        int resultType;
  };


  class SpaceInstance_RebuildItem_AsyncWorker : public PromiseWorker {
      public:
          SpaceInstance_RebuildItem_AsyncWorker(
MbSpaceInstance * _underlying,            Napi::Promise::Deferred const &d,
                                 MbeCopyMode  sameShell,
                                 ProgressIndicator * progInd = NULL);
          virtual ~SpaceInstance_RebuildItem_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpaceInstance * _underlying;                         MbeCopyMode  sameShell;
                         ProgressIndicator * progInd= NULL;

                
                 RPArray<MbSpaceItem> * items;
                

        int resultType;
  };


  class SpaceInstance_GetItemByPath_AsyncWorker : public PromiseWorker {
      public:
          SpaceInstance_GetItemByPath_AsyncWorker(
MbSpaceInstance * _underlying,            Napi::Promise::Deferred const &d,
                                const MbPath & path,
                                 size_t  ind,
                                 MbMatrix3D & from,
                                 size_t  currInd = 0);
          virtual ~SpaceInstance_GetItemByPath_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpaceInstance * _underlying;                        const MbPath & path;
                         size_t  ind;
                         MbMatrix3D & from;
                         size_t  currInd= 0;

                
                const MbItem * _result;
                

        int resultType;
  };


  class SpaceInstance_IsA_AsyncWorker : public PromiseWorker {
      public:
          SpaceInstance_IsA_AsyncWorker(
MbSpaceInstance * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~SpaceInstance_IsA_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpaceInstance * _underlying;
                
                 MbeSpaceType  _result;
                

        int resultType;
  };


  class SpaceInstance_Type_AsyncWorker : public PromiseWorker {
      public:
          SpaceInstance_Type_AsyncWorker(
MbSpaceInstance * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~SpaceInstance_Type_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpaceInstance * _underlying;
                
                 MbeSpaceType  _result;
                

        int resultType;
  };


  class SpaceInstance_Family_AsyncWorker : public PromiseWorker {
      public:
          SpaceInstance_Family_AsyncWorker(
MbSpaceInstance * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~SpaceInstance_Family_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpaceInstance * _underlying;
                
                 MbeSpaceType  _result;
                

        int resultType;
  };


  class SpaceInstance_Transform_AsyncWorker : public PromiseWorker {
      public:
          SpaceInstance_Transform_AsyncWorker(
MbSpaceInstance * _underlying,            Napi::Promise::Deferred const &d,
                                const MbMatrix3D & mat,
                                 MbRegTransform * iReg = NULL);
          virtual ~SpaceInstance_Transform_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpaceInstance * _underlying;                        const MbMatrix3D & mat;
                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class SpaceInstance_Move_AsyncWorker : public PromiseWorker {
      public:
          SpaceInstance_Move_AsyncWorker(
MbSpaceInstance * _underlying,            Napi::Promise::Deferred const &d,
                                const MbVector3D & v,
                                 MbRegTransform * iReg = NULL);
          virtual ~SpaceInstance_Move_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpaceInstance * _underlying;                        const MbVector3D & v;
                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class SpaceInstance_Rotate_AsyncWorker : public PromiseWorker {
      public:
          SpaceInstance_Rotate_AsyncWorker(
MbSpaceInstance * _underlying,            Napi::Promise::Deferred const &d,
                                const MbAxis3D & axis,
                                 double  angle,
                                 MbRegTransform * iReg = NULL);
          virtual ~SpaceInstance_Rotate_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpaceInstance * _underlying;                        const MbAxis3D & axis;
                         double  angle;
                         MbRegTransform * iReg= NULL;


        int resultType;
  };


  class SpaceInstance_Refresh_AsyncWorker : public PromiseWorker {
      public:
          SpaceInstance_Refresh_AsyncWorker(
MbSpaceInstance * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~SpaceInstance_Refresh_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpaceInstance * _underlying;

        int resultType;
  };


  class SpaceInstance_Duplicate_AsyncWorker : public PromiseWorker {
      public:
          SpaceInstance_Duplicate_AsyncWorker(
MbSpaceInstance * _underlying,            Napi::Promise::Deferred const &d,
                                 MbRegDuplicate * iReg = NULL);
          virtual ~SpaceInstance_Duplicate_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpaceInstance * _underlying;                         MbRegDuplicate * iReg= NULL;

                
                 MbSpaceItem * _result;
                

        int resultType;
  };


  class SpaceInstance_AddYourGabaritTo_AsyncWorker : public PromiseWorker {
      public:
          SpaceInstance_AddYourGabaritTo_AsyncWorker(
MbSpaceInstance * _underlying,            Napi::Promise::Deferred const &d,
                                 MbCube & cube);
          virtual ~SpaceInstance_AddYourGabaritTo_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpaceInstance * _underlying;                         MbCube & cube;


        int resultType;
  };


  class SpaceInstance_GetUseCount_AsyncWorker : public PromiseWorker {
      public:
          SpaceInstance_GetUseCount_AsyncWorker(
MbSpaceInstance * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~SpaceInstance_GetUseCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpaceInstance * _underlying;
                
                 refcount_t  _result;
                

        int resultType;
  };


  class SpaceInstance_AddRef_AsyncWorker : public PromiseWorker {
      public:
          SpaceInstance_AddRef_AsyncWorker(
MbSpaceInstance * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~SpaceInstance_AddRef_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpaceInstance * _underlying;

        int resultType;
  };


  class SpaceInstance_SetStyle_AsyncWorker : public PromiseWorker {
      public:
          SpaceInstance_SetStyle_AsyncWorker(
MbSpaceInstance * _underlying,            Napi::Promise::Deferred const &d,
                                 int  s);
          virtual ~SpaceInstance_SetStyle_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpaceInstance * _underlying;                         int  s;


        int resultType;
  };


  class SpaceInstance_GetStyle_AsyncWorker : public PromiseWorker {
      public:
          SpaceInstance_GetStyle_AsyncWorker(
MbSpaceInstance * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~SpaceInstance_GetStyle_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpaceInstance * _underlying;
                
                 int  _result;
                

        int resultType;
  };


  class SpaceInstance_SetColor_AsyncWorker : public PromiseWorker {
      public:
          SpaceInstance_SetColor_AsyncWorker(
MbSpaceInstance * _underlying,            Napi::Promise::Deferred const &d,
                                 uint32  c);
          virtual ~SpaceInstance_SetColor_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpaceInstance * _underlying;                         uint32  c;


        int resultType;
  };


  class SpaceInstance_GetColor_AsyncWorker : public PromiseWorker {
      public:
          SpaceInstance_GetColor_AsyncWorker(
MbSpaceInstance * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~SpaceInstance_GetColor_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpaceInstance * _underlying;
                
                 uint32  _result;
                

        int resultType;
  };


  class SpaceInstance_AttributesConvert_AsyncWorker : public PromiseWorker {
      public:
          SpaceInstance_AttributesConvert_AsyncWorker(
MbSpaceInstance * _underlying,            Napi::Promise::Deferred const &d,
                                 MbGrid & other);
          virtual ~SpaceInstance_AttributesConvert_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpaceInstance * _underlying;                         MbGrid & other;


        int resultType;
  };


  class SpaceInstance_GetCreatorsCount_AsyncWorker : public PromiseWorker {
      public:
          SpaceInstance_GetCreatorsCount_AsyncWorker(
MbSpaceInstance * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~SpaceInstance_GetCreatorsCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpaceInstance * _underlying;
                
                 size_t  _result;
                

        int resultType;
  };


  class SpaceInstance_GetCreator_AsyncWorker : public PromiseWorker {
      public:
          SpaceInstance_GetCreator_AsyncWorker(
MbSpaceInstance * _underlying,            Napi::Promise::Deferred const &d,
                                 size_t  ind);
          virtual ~SpaceInstance_GetCreator_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpaceInstance * _underlying;                         size_t  ind;

                
                const MbCreator * _result;
                

        int resultType;
  };


  class SpaceInstance_SetCreator_AsyncWorker : public PromiseWorker {
      public:
          SpaceInstance_SetCreator_AsyncWorker(
MbSpaceInstance * _underlying,            Napi::Promise::Deferred const &d,
                                 size_t  ind);
          virtual ~SpaceInstance_SetCreator_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpaceInstance * _underlying;                         size_t  ind;

                
                 MbCreator * _result;
                

        int resultType;
  };


  class SpaceInstance_DetachCreator_AsyncWorker : public PromiseWorker {
      public:
          SpaceInstance_DetachCreator_AsyncWorker(
MbSpaceInstance * _underlying,            Napi::Promise::Deferred const &d,
                                 size_t  ind);
          virtual ~SpaceInstance_DetachCreator_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpaceInstance * _underlying;                         size_t  ind;

                
                 MbCreator * _result;
                

        int resultType;
  };


  class SpaceInstance_AddCreator_AsyncWorker : public PromiseWorker {
      public:
          SpaceInstance_AddCreator_AsyncWorker(
MbSpaceInstance * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCreator * creator,
                                 bool  addSame = false);
          virtual ~SpaceInstance_AddCreator_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpaceInstance * _underlying;                        const MbCreator * creator;
                         bool  addSame= false;

                
                 bool  _result;
                

        int resultType;
  };


  class SpaceInstance_GetCreators_AsyncWorker : public PromiseWorker {
      public:
          SpaceInstance_GetCreators_AsyncWorker(
MbSpaceInstance * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~SpaceInstance_GetCreators_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpaceInstance * _underlying;
                
                 RPArray<MbCreator> * creators;
                

        int resultType;
  };


  class SpaceInstance_DeleteCreator_AsyncWorker : public PromiseWorker {
      public:
          SpaceInstance_DeleteCreator_AsyncWorker(
MbSpaceInstance * _underlying,            Napi::Promise::Deferred const &d,
                                 size_t  ind);
          virtual ~SpaceInstance_DeleteCreator_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpaceInstance * _underlying;                         size_t  ind;

                
                 bool  _result;
                

        int resultType;
  };


  class SpaceInstance_GetActiveCreatorsCount_AsyncWorker : public PromiseWorker {
      public:
          SpaceInstance_GetActiveCreatorsCount_AsyncWorker(
MbSpaceInstance * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~SpaceInstance_GetActiveCreatorsCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbSpaceInstance * _underlying;
                
                 size_t  _result;
                

        int resultType;
  };



#endif
