// This is a generated file, modify: generate/templates/TriFace.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/TriFace.h"
#include "../include/Error.h"

#include "tool_mutex.h"

Napi::Object TriFace::Init(Napi::Env env, Napi::Object exports) {
    Napi::Object object = Napi::Object::New(env);

    object.Set("CalculateGrid", Napi::Function::New<&TriFace::CalculateGrid>(env));
    object.Set("CalculateGrid_async", Napi::Function::New<&TriFace::CalculateGrid_async>(env));

    exports.Set("TriFace", object);

    return exports;
}

        Napi::Value TriFace::CalculateGrid(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Face::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Face face is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(StepData::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "StepData stepData is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 2 || !(
              (info[2].IsObject() && info[2].ToObject().InstanceOf(Grid::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Grid grid is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'face'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Face *face_ = Face::Unwrap(info[0].ToObject());
        
        const MbFace & face =*face_->_underlying;
        

                if (info[1].IsNull() || info[1].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'stepData'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class StepData *stepData_ = StepData::Unwrap(info[1].ToObject());
        
        const MbStepData & stepData =*stepData_->_underlying;
        

                if (info[2].IsNull() || info[2].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'grid'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Grid *grid_ = Grid::Unwrap(info[2].ToObject());
        
         MbGrid & grid =*grid_->_underlying;
        

             bool dualSeams = info[3].ToBoolean();

             bool quad = info[4].ToBoolean();

             bool fair = info[5].ToBoolean();



::CalculateGrid
(
        face
,        stepData
,        grid
,        info.Length() == 3 || info[3].IsNull() ? true : dualSeams
,        info.Length() == 4 || info[4].IsNull() ? false : quad
,        info.Length() == 5 || info[5].IsNull() ? false : fair

);



    return env.Undefined();


        }

    Napi::Value TriFace::CalculateGrid_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Face::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Face face is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(StepData::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "StepData stepData is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 2 || !(
              (info[2].IsObject() && info[2].ToObject().InstanceOf(Grid::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Grid grid is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'face'"));
                return deferred.Promise();
        }
        const class Face *face_ = Face::Unwrap(info[0].ToObject());
        
        const MbFace & face =*face_->_underlying;
        

                        if (info[1].IsNull() || info[1].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'stepData'"));
                return deferred.Promise();
        }
        const class StepData *stepData_ = StepData::Unwrap(info[1].ToObject());
        
        const MbStepData & stepData =*stepData_->_underlying;
        

                        if (info[2].IsNull() || info[2].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'grid'"));
                return deferred.Promise();
        }
        const class Grid *grid_ = Grid::Unwrap(info[2].ToObject());
        
         MbGrid & grid =*grid_->_underlying;
        

                     bool dualSeams = info[3].ToBoolean();

                     bool quad = info[4].ToBoolean();

                     bool fair = info[5].ToBoolean();

        TriFace_CalculateGrid_AsyncWorker* asyncWorker = new TriFace_CalculateGrid_AsyncWorker(
            deferred
,
                
                face,
                
                stepData,
                
                grid,
                
                dualSeams,
                
                quad,
                
                fair        );
        asyncWorker->Queue();
        return deferred.Promise();
    }


    TriFace_CalculateGrid_AsyncWorker::TriFace_CalculateGrid_AsyncWorker(
        Napi::Promise::Deferred const &d
,
                        const MbFace & face,
                        const MbStepData & stepData,
                         MbGrid & grid,
                         bool  dualSeams,
                         bool  quad,
                         bool  fair    )
        :PromiseWorker(d),
                        face(face)
,
                        stepData(stepData)
,
                        grid(grid)
,
                        dualSeams(dualSeams)
,
                        quad(quad)
,
                        fair(fair)
{};

    void TriFace_CalculateGrid_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        ::CalculateGrid(
                        face
,                        stepData
,                        grid
,                        dualSeams
,                        quad
,                        fair
        );



        
        ExitParallelRegion();
    }

    void TriFace_CalculateGrid_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void TriFace_CalculateGrid_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

