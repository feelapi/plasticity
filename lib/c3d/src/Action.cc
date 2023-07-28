// This is a generated file, modify: generate/templates/Action.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/Action.h"
#include "../include/Error.h"

#include "tool_mutex.h"

Napi::Object Action::Init(Napi::Env env, Napi::Object exports) {
    Napi::Object object = Napi::Object::New(env);

    object.Set("IsSolidsIntersectionFast", Napi::Function::New<&Action::IsSolidsIntersectionFast>(env));
    object.Set("IsSolidsIntersectionFast_async", Napi::Function::New<&Action::IsSolidsIntersectionFast_async>(env));
    object.Set("IsSolidsIntersection", Napi::Function::New<&Action::IsSolidsIntersection>(env));
    object.Set("IsSolidsIntersection_async", Napi::Function::New<&Action::IsSolidsIntersection_async>(env));
    object.Set("MinimumSolidsDistance", Napi::Function::New<&Action::MinimumSolidsDistance>(env));
    object.Set("MinimumSolidsDistance_async", Napi::Function::New<&Action::MinimumSolidsDistance_async>(env));
    object.Set("FindFilletFaces", Napi::Function::New<&Action::FindFilletFaces>(env));
    object.Set("FindFilletFaces_async", Napi::Function::New<&Action::FindFilletFaces_async>(env));
    object.Set("GetDistanceToCube", Napi::Function::New<&Action::GetDistanceToCube>(env));
    object.Set("GetDistanceToCube_async", Napi::Function::New<&Action::GetDistanceToCube_async>(env));

    exports.Set("Action", object);

    return exports;
}

        Napi::Value Action::IsSolidsIntersectionFast(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Solid::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Solid solid1 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(Solid::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Solid solid2 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 2 || !(
              (info[2].IsObject() && info[2].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "SNameMaker names is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'solid1'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Solid *solid1_ = Solid::Unwrap(info[0].ToObject());
        
        const MbSolid & solid1 =*solid1_->_underlying;
        

                if (info[1].IsNull() || info[1].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'solid2'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Solid *solid2_ = Solid::Unwrap(info[1].ToObject());
        
        const MbSolid & solid2 =*solid2_->_underlying;
        

                if (info[2].IsNull() || info[2].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'names'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class SNameMaker *names_ = SNameMaker::Unwrap(info[2].ToObject());
        
        const MbSNameMaker & names =*names_->_underlying;
        



 bool  _result = ::IsSolidsIntersection
(
        solid1
,        solid2
,        names

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value Action::IsSolidsIntersectionFast_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Solid::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Solid solid1 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(Solid::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Solid solid2 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 2 || !(
              (info[2].IsObject() && info[2].ToObject().InstanceOf(SNameMaker::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "SNameMaker names is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'solid1'"));
                return deferred.Promise();
        }
        const class Solid *solid1_ = Solid::Unwrap(info[0].ToObject());
        
        const MbSolid & solid1 =*solid1_->_underlying;
        

                        if (info[1].IsNull() || info[1].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'solid2'"));
                return deferred.Promise();
        }
        const class Solid *solid2_ = Solid::Unwrap(info[1].ToObject());
        
        const MbSolid & solid2 =*solid2_->_underlying;
        

                        if (info[2].IsNull() || info[2].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'names'"));
                return deferred.Promise();
        }
        const class SNameMaker *names_ = SNameMaker::Unwrap(info[2].ToObject());
        
        const MbSNameMaker & names =*names_->_underlying;
        

        Action_IsSolidsIntersectionFast_AsyncWorker* asyncWorker = new Action_IsSolidsIntersectionFast_AsyncWorker(
            deferred
,
                
                solid1,
                
                solid2,
                
                names        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Action::IsSolidsIntersection(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Solid::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Solid solid1 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(Matrix3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Matrix3D matr1 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 2 || !(
              (info[2].IsObject() && info[2].ToObject().InstanceOf(Solid::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Solid solid2 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 3 || !(
              (info[3].IsObject() && info[3].ToObject().InstanceOf(Matrix3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Matrix3D matr2 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 4 || !(
              info[4].IsBoolean()
)) {
                    Napi::Error::New(env, "boolean checkTangent is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 5 || !(
              info[5].IsBoolean()
)) {
                    Napi::Error::New(env, "boolean getIntersectionSolids is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 6 || !(
              info[6].IsBoolean()
)) {
                    Napi::Error::New(env, "boolean checkTouchPoints is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    RPArray<MbShellsIntersectionData> *intData = new RPArray<MbShellsIntersectionData>;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'solid1'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Solid *solid1_ = Solid::Unwrap(info[0].ToObject());
        
        const MbSolid & solid1 =*solid1_->_underlying;
        

                if (info[1].IsNull() || info[1].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'matr1'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Matrix3D *matr1_ = Matrix3D::Unwrap(info[1].ToObject());
        
        const MbMatrix3D & matr1 =*matr1_->_underlying;
        

                if (info[2].IsNull() || info[2].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'solid2'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Solid *solid2_ = Solid::Unwrap(info[2].ToObject());
        
        const MbSolid & solid2 =*solid2_->_underlying;
        

                if (info[3].IsNull() || info[3].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'matr2'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Matrix3D *matr2_ = Matrix3D::Unwrap(info[3].ToObject());
        
        const MbMatrix3D & matr2 =*matr2_->_underlying;
        

             bool checkTangent = info[4].ToBoolean();

             bool getIntersectionSolids = info[5].ToBoolean();

             bool checkTouchPoints = info[6].ToBoolean();



 bool  isIntersection = ::IsSolidsIntersection
(
        solid1
,        matr1
,        solid2
,        matr2
,        checkTangent
,        getIntersectionSolids
,        checkTouchPoints
,        *intData

);



        Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

            _to = Napi::Boolean::New(env, isIntersection);

        _toReturn.Set(Napi::String::New(env, "isIntersection"), _to);
            Napi::Array arr_intData = Napi::Array::New(env);
    for (size_t i = 0; i < intData->Count(); i++) {
            arr_intData[i] = ShellsIntersectionData::NewInstance(env,
                
                    (*intData)[i]
                
            );
    }
    _to = arr_intData;

        _toReturn.Set(Napi::String::New(env, "intData"), _to);
            return _toReturn;


        }

    Napi::Value Action::IsSolidsIntersection_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Solid::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Solid solid1 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(Matrix3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Matrix3D matr1 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 2 || !(
              (info[2].IsObject() && info[2].ToObject().InstanceOf(Solid::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Solid solid2 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 3 || !(
              (info[3].IsObject() && info[3].ToObject().InstanceOf(Matrix3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Matrix3D matr2 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 4 || !(
              info[4].IsBoolean()
)) {
                    deferred.Reject(Napi::String::New(env, "boolean checkTangent is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 5 || !(
              info[5].IsBoolean()
)) {
                    deferred.Reject(Napi::String::New(env, "boolean getIntersectionSolids is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 6 || !(
              info[6].IsBoolean()
)) {
                    deferred.Reject(Napi::String::New(env, "boolean checkTouchPoints is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'solid1'"));
                return deferred.Promise();
        }
        const class Solid *solid1_ = Solid::Unwrap(info[0].ToObject());
        
        const MbSolid & solid1 =*solid1_->_underlying;
        

                        if (info[1].IsNull() || info[1].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'matr1'"));
                return deferred.Promise();
        }
        const class Matrix3D *matr1_ = Matrix3D::Unwrap(info[1].ToObject());
        
        const MbMatrix3D & matr1 =*matr1_->_underlying;
        

                        if (info[2].IsNull() || info[2].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'solid2'"));
                return deferred.Promise();
        }
        const class Solid *solid2_ = Solid::Unwrap(info[2].ToObject());
        
        const MbSolid & solid2 =*solid2_->_underlying;
        

                        if (info[3].IsNull() || info[3].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'matr2'"));
                return deferred.Promise();
        }
        const class Matrix3D *matr2_ = Matrix3D::Unwrap(info[3].ToObject());
        
        const MbMatrix3D & matr2 =*matr2_->_underlying;
        

                     bool checkTangent = info[4].ToBoolean();

                     bool getIntersectionSolids = info[5].ToBoolean();

                     bool checkTouchPoints = info[6].ToBoolean();

        Action_IsSolidsIntersection_AsyncWorker* asyncWorker = new Action_IsSolidsIntersection_AsyncWorker(
            deferred
,
                
                solid1,
                
                matr1,
                
                solid2,
                
                matr2,
                
                checkTangent,
                
                getIntersectionSolids,
                
                checkTouchPoints        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Action::MinimumSolidsDistance(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Solid::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Solid solid1 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(Matrix3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Matrix3D matr1 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 2 || !(
              info[2].IsBoolean()
)) {
                    Napi::Error::New(env, "boolean isMultipleUseSolid1 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 3 || !(
              (info[3].IsObject() && info[3].ToObject().InstanceOf(Solid::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Solid solid2 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 4 || !(
              (info[4].IsObject() && info[4].ToObject().InstanceOf(Matrix3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Matrix3D matr2 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 5 || !(
              info[5].IsBoolean()
)) {
                    Napi::Error::New(env, "boolean isMultipleUseSolid2 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 6 || !(
              info[6].IsNumber()
)) {
                    Napi::Error::New(env, "number lowerLimitDistance is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 7 || !(
              info[7].IsBoolean()
)) {
                    Napi::Error::New(env, "boolean tillFirstLowerLimit is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    std::vector<MbShellsDistanceData> *shellsDistanceData = new std::vector<MbShellsDistanceData>;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'solid1'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Solid *solid1_ = Solid::Unwrap(info[0].ToObject());
        
        const MbSolid & solid1 =*solid1_->_underlying;
        

                if (info[1].IsNull() || info[1].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'matr1'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Matrix3D *matr1_ = Matrix3D::Unwrap(info[1].ToObject());
        
        const MbMatrix3D & matr1 =*matr1_->_underlying;
        

             bool isMultipleUseSolid1 = info[2].ToBoolean();

                if (info[3].IsNull() || info[3].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'solid2'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Solid *solid2_ = Solid::Unwrap(info[3].ToObject());
        
        const MbSolid & solid2 =*solid2_->_underlying;
        

                if (info[4].IsNull() || info[4].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'matr2'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Matrix3D *matr2_ = Matrix3D::Unwrap(info[4].ToObject());
        
        const MbMatrix3D & matr2 =*matr2_->_underlying;
        

             bool isMultipleUseSolid2 = info[5].ToBoolean();

             double lowerLimitDistance = info[6].ToNumber().DoubleValue();

             bool tillFirstLowerLimit = info[7].ToBoolean();



 bool  hasDistance = ::MinimumSolidsDistance
(
        solid1
,        matr1
,        isMultipleUseSolid1
,        solid2
,        matr2
,        isMultipleUseSolid2
,        lowerLimitDistance
,        tillFirstLowerLimit
,        *shellsDistanceData

);



        Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

            _to = Napi::Boolean::New(env, hasDistance);

        _toReturn.Set(Napi::String::New(env, "hasDistance"), _to);
            Napi::Array arr_shellsDistanceData = Napi::Array::New(env);
    for (size_t i = 0; i < shellsDistanceData->size(); i++) {
            arr_shellsDistanceData[i] = ShellsDistanceData::NewInstance(env,
                
                    (*shellsDistanceData)[i]
                
            );
    }
    _to = arr_shellsDistanceData;

        _toReturn.Set(Napi::String::New(env, "shellsDistanceData"), _to);
            return _toReturn;


        }

    Napi::Value Action::MinimumSolidsDistance_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Solid::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Solid solid1 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(Matrix3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Matrix3D matr1 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 2 || !(
              info[2].IsBoolean()
)) {
                    deferred.Reject(Napi::String::New(env, "boolean isMultipleUseSolid1 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 3 || !(
              (info[3].IsObject() && info[3].ToObject().InstanceOf(Solid::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Solid solid2 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 4 || !(
              (info[4].IsObject() && info[4].ToObject().InstanceOf(Matrix3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Matrix3D matr2 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 5 || !(
              info[5].IsBoolean()
)) {
                    deferred.Reject(Napi::String::New(env, "boolean isMultipleUseSolid2 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 6 || !(
              info[6].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number lowerLimitDistance is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 7 || !(
              info[7].IsBoolean()
)) {
                    deferred.Reject(Napi::String::New(env, "boolean tillFirstLowerLimit is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'solid1'"));
                return deferred.Promise();
        }
        const class Solid *solid1_ = Solid::Unwrap(info[0].ToObject());
        
        const MbSolid & solid1 =*solid1_->_underlying;
        

                        if (info[1].IsNull() || info[1].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'matr1'"));
                return deferred.Promise();
        }
        const class Matrix3D *matr1_ = Matrix3D::Unwrap(info[1].ToObject());
        
        const MbMatrix3D & matr1 =*matr1_->_underlying;
        

                     bool isMultipleUseSolid1 = info[2].ToBoolean();

                        if (info[3].IsNull() || info[3].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'solid2'"));
                return deferred.Promise();
        }
        const class Solid *solid2_ = Solid::Unwrap(info[3].ToObject());
        
        const MbSolid & solid2 =*solid2_->_underlying;
        

                        if (info[4].IsNull() || info[4].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'matr2'"));
                return deferred.Promise();
        }
        const class Matrix3D *matr2_ = Matrix3D::Unwrap(info[4].ToObject());
        
        const MbMatrix3D & matr2 =*matr2_->_underlying;
        

                     bool isMultipleUseSolid2 = info[5].ToBoolean();

                     double lowerLimitDistance = info[6].ToNumber().DoubleValue();

                     bool tillFirstLowerLimit = info[7].ToBoolean();

        Action_MinimumSolidsDistance_AsyncWorker* asyncWorker = new Action_MinimumSolidsDistance_AsyncWorker(
            deferred
,
                
                solid1,
                
                matr1,
                
                isMultipleUseSolid1,
                
                solid2,
                
                matr2,
                
                isMultipleUseSolid2,
                
                lowerLimitDistance,
                
                tillFirstLowerLimit        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Action::FindFilletFaces(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsArray()
)) {
                    Napi::Error::New(env, "Array faces is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    Napi::Error::New(env, "number accuracy is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    RPArray<MbFace> *filletFaces = new RPArray<MbFace>;


                RPArray<MbFace>  faces;
if (!(info[0].IsNull() || info[0].IsUndefined())) {
    const Napi::Array faces_ = Napi::Array(env, info[0]);
        faces =  RPArray<MbFace>(faces_.Length(), 1);

    for (size_t i = 0; i < faces_.Length(); i++) {
        if (faces_[i].IsNull() || faces_[i].IsUndefined()) {
            std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i << "]. This is probably a mistake, so skipping\n";
            continue;
        }
            if (!faces_[i].IsObject() || !faces_[i].ToObject().InstanceOf(Face::GetConstructor(env))) {
                    Napi::Error::New(env, "Face faces is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            } else {
                faces.Add(Face::Unwrap(faces_[i].ToObject())->_underlying);
            }
    }
}


             double accuracy = info[1].ToNumber().DoubleValue();



::FindFilletFaces
(
        faces
,        accuracy
,        *filletFaces

);



    Napi::Value _to;

            Napi::Array arr_filletFaces = Napi::Array::New(env);
    for (size_t i = 0; i < filletFaces->Count(); i++) {
            arr_filletFaces[i] = Face::NewInstance(env,
                
                    (*filletFaces)[i]
                
            );
    }
    _to = arr_filletFaces;

            return _to;


        }

    Napi::Value Action::FindFilletFaces_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsArray()
)) {
                    deferred.Reject(Napi::String::New(env, "Array faces is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number accuracy is required."));
                    return deferred.Promise();
            }


                        RPArray<MbFace> * faces;
if (!(info[0].IsNull() || info[0].IsUndefined())) {
    const Napi::Array faces_ = Napi::Array(env, info[0]);
        faces = new RPArray<MbFace>(faces_.Length(), 1);

    for (size_t i = 0; i < faces_.Length(); i++) {
        if (faces_[i].IsNull() || faces_[i].IsUndefined()) {
            std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i << "]. This is probably a mistake, so skipping\n";
            continue;
        }
            if (!faces_[i].IsObject() || !faces_[i].ToObject().InstanceOf(Face::GetConstructor(env))) {
                    deferred.Reject(Napi::String::New(env, "Face faces is required."));
                    return deferred.Promise();
            } else {
                faces->Add(Face::Unwrap(faces_[i].ToObject())->_underlying);
            }
    }
}


                     double accuracy = info[1].ToNumber().DoubleValue();

        Action_FindFilletFaces_AsyncWorker* asyncWorker = new Action_FindFilletFaces_AsyncWorker(
            deferred
,
                                *faces                ,
                
                accuracy        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Action::GetDistanceToCube(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Placement3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Placement3D pl is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(FaceShell::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "FaceShell shell is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    double dPlus;
        double dMinus;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'pl'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Placement3D *pl_ = Placement3D::Unwrap(info[0].ToObject());
        
        const MbPlacement3D & pl =*pl_->_underlying;
        

                if (info[1].IsNull() || info[1].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'shell'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class FaceShell *shell_ = FaceShell::Unwrap(info[1].ToObject());
        
        const MbFaceShell * shell =shell_->_underlying;
        

             bool findMax = info[2].ToBoolean();



 bool  isFound = ::GetDistanceToCube
(
        pl
,        shell
,        dPlus
,        dMinus
,        info.Length() == 2 || info[2].IsNull() ? true : findMax

);



        Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

            _to = Napi::Boolean::New(env, isFound);

        _toReturn.Set(Napi::String::New(env, "isFound"), _to);
            _to = Napi::Number::New(env, dPlus);

        _toReturn.Set(Napi::String::New(env, "dPlus"), _to);
            _to = Napi::Number::New(env, dMinus);

        _toReturn.Set(Napi::String::New(env, "dMinus"), _to);
            return _toReturn;


        }

    Napi::Value Action::GetDistanceToCube_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Placement3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Placement3D pl is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(FaceShell::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "FaceShell shell is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'pl'"));
                return deferred.Promise();
        }
        const class Placement3D *pl_ = Placement3D::Unwrap(info[0].ToObject());
        
        const MbPlacement3D & pl =*pl_->_underlying;
        

                        if (info[1].IsNull() || info[1].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'shell'"));
                return deferred.Promise();
        }
        const class FaceShell *shell_ = FaceShell::Unwrap(info[1].ToObject());
        
        const MbFaceShell * shell =shell_->_underlying;
        

                     bool findMax = info[2].ToBoolean();

        Action_GetDistanceToCube_AsyncWorker* asyncWorker = new Action_GetDistanceToCube_AsyncWorker(
            deferred
,
                
                pl,
                
                shell,
                
                findMax        );
        asyncWorker->Queue();
        return deferred.Promise();
    }


    Action_IsSolidsIntersectionFast_AsyncWorker::Action_IsSolidsIntersectionFast_AsyncWorker(
        Napi::Promise::Deferred const &d
,
                        const MbSolid & solid1,
                        const MbSolid & solid2,
                        const MbSNameMaker & names    )
        :PromiseWorker(d),
                        solid1(solid1)
,
                        solid2(solid2)
,
                        names(names)
{};

    void Action_IsSolidsIntersectionFast_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = ::IsSolidsIntersection(
                        solid1
,                        solid2
,                        names
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Action_IsSolidsIntersectionFast_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void Action_IsSolidsIntersectionFast_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Action_IsSolidsIntersection_AsyncWorker::Action_IsSolidsIntersection_AsyncWorker(
        Napi::Promise::Deferred const &d
,
                        const MbSolid & solid1,
                        const MbMatrix3D & matr1,
                        const MbSolid & solid2,
                        const MbMatrix3D & matr2,
                         bool  checkTangent,
                         bool  getIntersectionSolids,
                         bool  checkTouchPoints    )
        :PromiseWorker(d),
                        solid1(solid1)
,
                        matr1(matr1)
,
                        solid2(solid2)
,
                        matr2(matr2)
,
                        checkTangent(checkTangent)
,
                        getIntersectionSolids(getIntersectionSolids)
,
                        checkTouchPoints(checkTouchPoints)
{};

    void Action_IsSolidsIntersection_AsyncWorker::Execute() {
        EnterParallelRegion();

                RPArray<MbShellsIntersectionData> *intData = new RPArray<MbShellsIntersectionData>;


        
         bool  isIntersection = ::IsSolidsIntersection(
                        solid1
,                        matr1
,                        solid2
,                        matr2
,                        checkTangent
,                        getIntersectionSolids
,                        checkTouchPoints
,                        *intData
        );


                this->isIntersection = isIntersection;
                this->intData = intData;

        
        ExitParallelRegion();
    }

    void Action_IsSolidsIntersection_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            Napi::Object _toReturn = Napi::Object::New(env);

                 bool  isIntersection = this->isIntersection;
                    _to = Napi::Boolean::New(env, isIntersection);

                _toReturn.Set(Napi::String::New(env, "isIntersection"), _to);
                 RPArray<MbShellsIntersectionData> * intData = this->intData;
                    Napi::Array arr_intData = Napi::Array::New(env);
    for (size_t i = 0; i < intData->Count(); i++) {
            arr_intData[i] = ShellsIntersectionData::NewInstance(env,
                
                    (*intData)[i]
                
            );
    }
    _to = arr_intData;

                _toReturn.Set(Napi::String::New(env, "intData"), _to);

            deferred.Resolve(_toReturn);
    }

    void Action_IsSolidsIntersection_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Action_MinimumSolidsDistance_AsyncWorker::Action_MinimumSolidsDistance_AsyncWorker(
        Napi::Promise::Deferred const &d
,
                        const MbSolid & solid1,
                        const MbMatrix3D & matr1,
                         bool  isMultipleUseSolid1,
                        const MbSolid & solid2,
                        const MbMatrix3D & matr2,
                         bool  isMultipleUseSolid2,
                         double  lowerLimitDistance,
                         bool  tillFirstLowerLimit    )
        :PromiseWorker(d),
                        solid1(solid1)
,
                        matr1(matr1)
,
                        isMultipleUseSolid1(isMultipleUseSolid1)
,
                        solid2(solid2)
,
                        matr2(matr2)
,
                        isMultipleUseSolid2(isMultipleUseSolid2)
,
                        lowerLimitDistance(lowerLimitDistance)
,
                        tillFirstLowerLimit(tillFirstLowerLimit)
{};

    void Action_MinimumSolidsDistance_AsyncWorker::Execute() {
        EnterParallelRegion();

                std::vector<MbShellsDistanceData> *shellsDistanceData = new std::vector<MbShellsDistanceData>;


        
         bool  hasDistance = ::MinimumSolidsDistance(
                        solid1
,                        matr1
,                        isMultipleUseSolid1
,                        solid2
,                        matr2
,                        isMultipleUseSolid2
,                        lowerLimitDistance
,                        tillFirstLowerLimit
,                        *shellsDistanceData
        );


                this->hasDistance = hasDistance;
                this->shellsDistanceData = shellsDistanceData;

        
        ExitParallelRegion();
    }

    void Action_MinimumSolidsDistance_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            Napi::Object _toReturn = Napi::Object::New(env);

                 bool  hasDistance = this->hasDistance;
                    _to = Napi::Boolean::New(env, hasDistance);

                _toReturn.Set(Napi::String::New(env, "hasDistance"), _to);
                 std::vector<MbShellsDistanceData> * shellsDistanceData = this->shellsDistanceData;
                    Napi::Array arr_shellsDistanceData = Napi::Array::New(env);
    for (size_t i = 0; i < shellsDistanceData->size(); i++) {
            arr_shellsDistanceData[i] = ShellsDistanceData::NewInstance(env,
                
                    (*shellsDistanceData)[i]
                
            );
    }
    _to = arr_shellsDistanceData;

                _toReturn.Set(Napi::String::New(env, "shellsDistanceData"), _to);

            deferred.Resolve(_toReturn);
    }

    void Action_MinimumSolidsDistance_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Action_FindFilletFaces_AsyncWorker::Action_FindFilletFaces_AsyncWorker(
        Napi::Promise::Deferred const &d
,
                        const RPArray<MbFace> & faces,
                         double  accuracy    )
        :PromiseWorker(d),
                        faces(faces)
,
                        accuracy(accuracy)
{};

    void Action_FindFilletFaces_AsyncWorker::Execute() {
        EnterParallelRegion();

                RPArray<MbFace> *filletFaces = new RPArray<MbFace>;


        
        ::FindFilletFaces(
                        faces
,                        accuracy
,                        *filletFaces
        );


                this->filletFaces = filletFaces;

        
        ExitParallelRegion();
    }

    void Action_FindFilletFaces_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             RPArray<MbFace> * filletFaces = this->filletFaces;
                Napi::Array arr_filletFaces = Napi::Array::New(env);
    for (size_t i = 0; i < filletFaces->Count(); i++) {
            arr_filletFaces[i] = Face::NewInstance(env,
                
                    (*filletFaces)[i]
                
            );
    }
    _to = arr_filletFaces;

            deferred.Resolve(_to);
    }

    void Action_FindFilletFaces_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Action_GetDistanceToCube_AsyncWorker::Action_GetDistanceToCube_AsyncWorker(
        Napi::Promise::Deferred const &d
,
                        const MbPlacement3D & pl,
                        const MbFaceShell * shell,
                         bool  findMax    )
        :PromiseWorker(d),
                        pl(pl)
,
                        shell(shell)
,
                        findMax(findMax)
{};

    void Action_GetDistanceToCube_AsyncWorker::Execute() {
        EnterParallelRegion();

                double dPlus;
        double dMinus;


        
         bool  isFound = ::GetDistanceToCube(
                        pl
,                        shell
,                        dPlus
,                        dMinus
,                        findMax
        );


                this->isFound = isFound;
                this->dPlus = dPlus;
                this->dMinus = dMinus;

        
        ExitParallelRegion();
    }

    void Action_GetDistanceToCube_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            Napi::Object _toReturn = Napi::Object::New(env);

                 bool  isFound = this->isFound;
                    _to = Napi::Boolean::New(env, isFound);

                _toReturn.Set(Napi::String::New(env, "isFound"), _to);
                 double  dPlus = this->dPlus;
                    _to = Napi::Number::New(env, dPlus);

                _toReturn.Set(Napi::String::New(env, "dPlus"), _to);
                 double  dMinus = this->dMinus;
                    _to = Napi::Number::New(env, dMinus);

                _toReturn.Set(Napi::String::New(env, "dMinus"), _to);

            deferred.Resolve(_toReturn);
    }

    void Action_GetDistanceToCube_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

