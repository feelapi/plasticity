// This is a generated file, modify: generate/templates/Action.h

#ifndef ACTION_H
#define ACTION_H

#include <napi.h>
#include <vector>

#include <action.h>

#include "Solid.h"
#include "Matrix3D.h"
#include "ShellsIntersectionData.h"
#include "Face.h"
#include "Cube.h"
#include "ShellsDistanceData.h"

#include "PromiseWorker.h"

class Action : public
  Napi::ObjectWrap<Action>
{
  public:
        static Napi::Object Init(Napi::Env env, Napi::Object exports);

        static Napi::Value IsSolidsIntersectionFast(const Napi::CallbackInfo& info);
        static Napi::Value IsSolidsIntersectionFast_async(const Napi::CallbackInfo& info);
        static Napi::Value IsSolidsIntersection(const Napi::CallbackInfo& info);
        static Napi::Value IsSolidsIntersection_async(const Napi::CallbackInfo& info);
        static Napi::Value MinimumSolidsDistance(const Napi::CallbackInfo& info);
        static Napi::Value MinimumSolidsDistance_async(const Napi::CallbackInfo& info);
        static Napi::Value FindFilletFaces(const Napi::CallbackInfo& info);
        static Napi::Value FindFilletFaces_async(const Napi::CallbackInfo& info);
        static Napi::Value GetDistanceToCube(const Napi::CallbackInfo& info);
        static Napi::Value GetDistanceToCube_async(const Napi::CallbackInfo& info);
};


  class Action_IsSolidsIntersectionFast_AsyncWorker : public PromiseWorker {
      public:
          Action_IsSolidsIntersectionFast_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                const MbSolid & solid1,
                                const MbSolid & solid2,
                                const MbSNameMaker & names);
          virtual ~Action_IsSolidsIntersectionFast_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                        const MbSolid & solid1;
                        const MbSolid & solid2;
                        const MbSNameMaker & names;

                
                 bool  _result;
                

        int resultType;
  };


  class Action_IsSolidsIntersection_AsyncWorker : public PromiseWorker {
      public:
          Action_IsSolidsIntersection_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                const MbSolid & solid1,
                                const MbMatrix3D & matr1,
                                const MbSolid & solid2,
                                const MbMatrix3D & matr2,
                                 bool  checkTangent,
                                 bool  getIntersectionSolids,
                                 bool  checkTouchPoints);
          virtual ~Action_IsSolidsIntersection_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                        const MbSolid & solid1;
                        const MbMatrix3D & matr1;
                        const MbSolid & solid2;
                        const MbMatrix3D & matr2;
                         bool  checkTangent;
                         bool  getIntersectionSolids;
                         bool  checkTouchPoints;

                
                 bool  isIntersection;
                
                
                 RPArray<MbShellsIntersectionData> * intData;
                

        int resultType;
  };


  class Action_MinimumSolidsDistance_AsyncWorker : public PromiseWorker {
      public:
          Action_MinimumSolidsDistance_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                const MbSolid & solid1,
                                const MbMatrix3D & matr1,
                                 bool  isMultipleUseSolid1,
                                const MbSolid & solid2,
                                const MbMatrix3D & matr2,
                                 bool  isMultipleUseSolid2,
                                 double  lowerLimitDistance,
                                 bool  tillFirstLowerLimit);
          virtual ~Action_MinimumSolidsDistance_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                        const MbSolid & solid1;
                        const MbMatrix3D & matr1;
                         bool  isMultipleUseSolid1;
                        const MbSolid & solid2;
                        const MbMatrix3D & matr2;
                         bool  isMultipleUseSolid2;
                         double  lowerLimitDistance;
                         bool  tillFirstLowerLimit;

                
                 bool  hasDistance;
                
                
                 std::vector<MbShellsDistanceData> * shellsDistanceData;
                

        int resultType;
  };


  class Action_FindFilletFaces_AsyncWorker : public PromiseWorker {
      public:
          Action_FindFilletFaces_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                const RPArray<MbFace> & faces,
                                 double  accuracy);
          virtual ~Action_FindFilletFaces_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                        const RPArray<MbFace> & faces;
                         double  accuracy;

                
                 RPArray<MbFace> * filletFaces;
                

        int resultType;
  };


  class Action_GetDistanceToCube_AsyncWorker : public PromiseWorker {
      public:
          Action_GetDistanceToCube_AsyncWorker(
            Napi::Promise::Deferred const &d,
                                const MbPlacement3D & pl,
                                const MbFaceShell * shell,
                                 bool  findMax = true);
          virtual ~Action_GetDistanceToCube_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
                        const MbPlacement3D & pl;
                        const MbFaceShell * shell;
                         bool  findMax= true;

                
                 bool  isFound;
                
                
                 double  dPlus;
                
                
                 double  dMinus;
                

        int resultType;
  };



#endif
