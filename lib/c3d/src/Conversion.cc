// This is a generated file, modify: generate/templates/Conversion.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/Conversion.h"
#include "../include/Error.h"

#include "tool_mutex.h"

Napi::Object Conversion::Init(Napi::Env env, Napi::Object exports) {
    Napi::Object object = Napi::Object::New(env);

    object.Set("ImportFromFile", Napi::Function::New<&Conversion::ImportFromFile>(env));
    object.Set("ImportFromFile_async", Napi::Function::New<&Conversion::ImportFromFile_async>(env));
    object.Set("ExportIntoFile", Napi::Function::New<&Conversion::ExportIntoFile>(env));
    object.Set("ExportIntoFile_async", Napi::Function::New<&Conversion::ExportIntoFile_async>(env));

    exports.Set("Conversion", object);

    return exports;
}

        Napi::Value Conversion::ImportFromFile(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsString()
)) {
                    Napi::Error::New(env, "string fileName is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    MbModel *model = new MbModel;


            const c3d::path_string fileName = c3d::StdToPathstring(info[0].ToString());

                    ConvConvertorProperty3D * prop = NULL;
        if (!(info[1].IsNull() || info[1].IsUndefined())) {
            _ConvConvertorProperty3D *prop_ = _ConvConvertorProperty3D::Unwrap(info[1].ToObject());
                prop =   prop_->_underlying;
        }

                    ProgressIndicator * indicator = NULL;
        if (!(info[2].IsNull() || info[2].IsUndefined())) {
            ProgressIndicator *indicator_ = ProgressIndicator::Unwrap(info[2].ToObject());
                indicator =   indicator_;
        }



 MbeConvResType  result = c3d::ImportFromFile
(
        *model
,        fileName
,        info.Length() == 1 || info[1].IsNull() ? NULL : prop
,        info.Length() == 2 || info[2].IsNull() ? NULL : indicator

);



        Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

            _to = Napi::Number::New(env, result);

        _toReturn.Set(Napi::String::New(env, "result"), _to);
            if (model != NULL) {
        _to = Model::NewInstance(env, (MbModel *)model);
    } else {
        _to = env.Null();
    }

        _toReturn.Set(Napi::String::New(env, "model"), _to);
            return _toReturn;


        }

    Napi::Value Conversion::ImportFromFile_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsString()
)) {
                    deferred.Reject(Napi::String::New(env, "string fileName is required."));
                    return deferred.Promise();
            }


                    const c3d::path_string fileName = c3d::StdToPathstring(info[0].ToString());

                            ConvConvertorProperty3D * prop = NULL;
        if (!(info[1].IsNull() || info[1].IsUndefined())) {
            _ConvConvertorProperty3D *prop_ = _ConvConvertorProperty3D::Unwrap(info[1].ToObject());
                prop =   prop_->_underlying;
        }

                            ProgressIndicator * indicator = NULL;
        if (!(info[2].IsNull() || info[2].IsUndefined())) {
            ProgressIndicator *indicator_ = ProgressIndicator::Unwrap(info[2].ToObject());
                indicator =   indicator_;
        }

        Conversion_ImportFromFile_AsyncWorker* asyncWorker = new Conversion_ImportFromFile_AsyncWorker(
            deferred
,
                
                fileName,
                
                prop,
                
                indicator        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Conversion::ExportIntoFile(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Model::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Model model is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsString()
)) {
                    Napi::Error::New(env, "string fileName is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'model'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Model *model_ = Model::Unwrap(info[0].ToObject());
        
         MbModel & model =*model_->_underlying;
        

            const c3d::path_string fileName = c3d::StdToPathstring(info[1].ToString());

                    ConvConvertorProperty3D * prop = NULL;
        if (!(info[2].IsNull() || info[2].IsUndefined())) {
            _ConvConvertorProperty3D *prop_ = _ConvConvertorProperty3D::Unwrap(info[2].ToObject());
                prop =   prop_->_underlying;
        }

                    ProgressIndicator * indicator = NULL;
        if (!(info[3].IsNull() || info[3].IsUndefined())) {
            ProgressIndicator *indicator_ = ProgressIndicator::Unwrap(info[3].ToObject());
                indicator =   indicator_;
        }



 MbeConvResType  _result = c3d::ExportIntoFile
(
        model
,        fileName
,        info.Length() == 2 || info[2].IsNull() ? NULL : prop
,        info.Length() == 3 || info[3].IsNull() ? NULL : indicator

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Conversion::ExportIntoFile_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Model::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Model model is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsString()
)) {
                    deferred.Reject(Napi::String::New(env, "string fileName is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'model'"));
                return deferred.Promise();
        }
        const class Model *model_ = Model::Unwrap(info[0].ToObject());
        
         MbModel & model =*model_->_underlying;
        

                    const c3d::path_string fileName = c3d::StdToPathstring(info[1].ToString());

                            ConvConvertorProperty3D * prop = NULL;
        if (!(info[2].IsNull() || info[2].IsUndefined())) {
            _ConvConvertorProperty3D *prop_ = _ConvConvertorProperty3D::Unwrap(info[2].ToObject());
                prop =   prop_->_underlying;
        }

                            ProgressIndicator * indicator = NULL;
        if (!(info[3].IsNull() || info[3].IsUndefined())) {
            ProgressIndicator *indicator_ = ProgressIndicator::Unwrap(info[3].ToObject());
                indicator =   indicator_;
        }

        Conversion_ExportIntoFile_AsyncWorker* asyncWorker = new Conversion_ExportIntoFile_AsyncWorker(
            deferred
,
                
                model,
                
                fileName,
                
                prop,
                
                indicator        );
        asyncWorker->Queue();
        return deferred.Promise();
    }


    Conversion_ImportFromFile_AsyncWorker::Conversion_ImportFromFile_AsyncWorker(
        Napi::Promise::Deferred const &d
,
                        const c3d::path_string & fileName,
                         ConvConvertorProperty3D * prop,
                         ProgressIndicator * indicator    )
        :PromiseWorker(d),
                        fileName(fileName)
,
                        prop(prop)
,
                        indicator(indicator)
{};

    void Conversion_ImportFromFile_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbModel *model = new MbModel;


        
         MbeConvResType  result = ::c3d::ImportFromFile(
                        *model
,                        fileName
,                        prop
,                        indicator
        );


                this->result = result;
                this->model = model;

        
        ExitParallelRegion();
    }

    void Conversion_ImportFromFile_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            Napi::Object _toReturn = Napi::Object::New(env);

                 MbeConvResType  result = this->result;
                    _to = Napi::Number::New(env, result);

                _toReturn.Set(Napi::String::New(env, "result"), _to);
                 MbModel * model = this->model;
                    if (model != NULL) {
        _to = Model::NewInstance(env, (MbModel *)model);
    } else {
        _to = env.Null();
    }

                _toReturn.Set(Napi::String::New(env, "model"), _to);

            deferred.Resolve(_toReturn);
    }

    void Conversion_ImportFromFile_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Conversion_ExportIntoFile_AsyncWorker::Conversion_ExportIntoFile_AsyncWorker(
        Napi::Promise::Deferred const &d
,
                         MbModel & model,
                        const c3d::path_string & fileName,
                         ConvConvertorProperty3D * prop,
                         ProgressIndicator * indicator    )
        :PromiseWorker(d),
                        model(model)
,
                        fileName(fileName)
,
                        prop(prop)
,
                        indicator(indicator)
{};

    void Conversion_ExportIntoFile_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbeConvResType  _result = ::c3d::ExportIntoFile(
                        model
,                        fileName
,                        prop
,                        indicator
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Conversion_ExportIntoFile_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbeConvResType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Conversion_ExportIntoFile_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

