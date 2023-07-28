// This is a generated file, modify: generate/templates/CurveTangent.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/CurveTangent.h"
#include "../include/Error.h"

#include "tool_mutex.h"

Napi::Object CurveTangent::Init(Napi::Env env, Napi::Object exports) {
    Napi::Object object = Napi::Object::New(env);

    object.Set("LinePointTangentCurve", Napi::Function::New<&CurveTangent::LinePointTangentCurve>(env));
    object.Set("LinePointTangentCurve_async", Napi::Function::New<&CurveTangent::LinePointTangentCurve_async>(env));
    object.Set("LineTangentTwoCurves", Napi::Function::New<&CurveTangent::LineTangentTwoCurves>(env));
    object.Set("LineTangentTwoCurves_async", Napi::Function::New<&CurveTangent::LineTangentTwoCurves_async>(env));

    exports.Set("CurveTangent", object);

    return exports;
}

        Napi::Value CurveTangent::LinePointTangentCurve(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "CartPoint pnt is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(Curve::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Curve pCurve is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    PArray<MbLine> *pLine = new PArray<MbLine>;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'pnt'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class CartPoint *pnt_ = CartPoint::Unwrap(info[0].ToObject());
        
        const MbCartPoint & pnt =*pnt_->_underlying;
        

                if (info[1].IsNull() || info[1].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'pCurve'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Curve *pCurve_ = Curve::Unwrap(info[1].ToObject());
        
        const MbCurve & pCurve =*pCurve_->_underlying;
        

             bool lineAsCurve = info[2].ToBoolean();



::LinePointTangentCurve
(
        pnt
,        pCurve
,        *pLine
,        info.Length() == 2 || info[2].IsNull() ? false : lineAsCurve

);



    Napi::Value _to;

            Napi::Array arr_pLine = Napi::Array::New(env);
    for (size_t i = 0; i < pLine->Count(); i++) {
            arr_pLine[i] = Line::NewInstance(env,
                
                    (*pLine)[i]
                
            );
    }
    _to = arr_pLine;

            return _to;


        }

    Napi::Value CurveTangent::LinePointTangentCurve_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(CartPoint::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "CartPoint pnt is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(Curve::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Curve pCurve is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'pnt'"));
                return deferred.Promise();
        }
        const class CartPoint *pnt_ = CartPoint::Unwrap(info[0].ToObject());
        
        const MbCartPoint & pnt =*pnt_->_underlying;
        

                        if (info[1].IsNull() || info[1].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'pCurve'"));
                return deferred.Promise();
        }
        const class Curve *pCurve_ = Curve::Unwrap(info[1].ToObject());
        
        const MbCurve & pCurve =*pCurve_->_underlying;
        

                     bool lineAsCurve = info[2].ToBoolean();

        CurveTangent_LinePointTangentCurve_AsyncWorker* asyncWorker = new CurveTangent_LinePointTangentCurve_AsyncWorker(
            deferred
,
                
                pnt,
                
                pCurve,
                
                lineAsCurve        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value CurveTangent::LineTangentTwoCurves(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Curve::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Curve pCurve1 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(Curve::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Curve pCurve2 is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    PArray<MbLine> *pLine = new PArray<MbLine>;
        SArray<MbCartPoint> *secondPoint = new SArray<MbCartPoint>;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'pCurve1'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Curve *pCurve1_ = Curve::Unwrap(info[0].ToObject());
        
        const MbCurve * pCurve1 =pCurve1_->_underlying;
        

                if (info[1].IsNull() || info[1].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'pCurve2'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Curve *pCurve2_ = Curve::Unwrap(info[1].ToObject());
        
        const MbCurve * pCurve2 =pCurve2_->_underlying;
        



::LineTangentTwoCurves
(
        pCurve1
,        pCurve2
,        pLine
,        secondPoint

);



        Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

            Napi::Array arr_pLine = Napi::Array::New(env);
    for (size_t i = 0; i < pLine->Count(); i++) {
            arr_pLine[i] = Line::NewInstance(env,
                
                    (*pLine)[i]
                
            );
    }
    _to = arr_pLine;

        _toReturn.Set(Napi::String::New(env, "pLine"), _to);
            Napi::Array arr_secondPoint = Napi::Array::New(env);
    for (size_t i = 0; i < secondPoint->Count(); i++) {
            arr_secondPoint[i] = CartPoint::NewInstance(env,
                
                    new MbCartPoint((*secondPoint)[i])
                
            );
    }
    _to = arr_secondPoint;

        _toReturn.Set(Napi::String::New(env, "secondPoint"), _to);
            return _toReturn;


        }

    Napi::Value CurveTangent::LineTangentTwoCurves_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Curve::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Curve pCurve1 is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(Curve::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Curve pCurve2 is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'pCurve1'"));
                return deferred.Promise();
        }
        const class Curve *pCurve1_ = Curve::Unwrap(info[0].ToObject());
        
        const MbCurve * pCurve1 =pCurve1_->_underlying;
        

                        if (info[1].IsNull() || info[1].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'pCurve2'"));
                return deferred.Promise();
        }
        const class Curve *pCurve2_ = Curve::Unwrap(info[1].ToObject());
        
        const MbCurve * pCurve2 =pCurve2_->_underlying;
        

        CurveTangent_LineTangentTwoCurves_AsyncWorker* asyncWorker = new CurveTangent_LineTangentTwoCurves_AsyncWorker(
            deferred
,
                
                pCurve1,
                
                pCurve2        );
        asyncWorker->Queue();
        return deferred.Promise();
    }


    CurveTangent_LinePointTangentCurve_AsyncWorker::CurveTangent_LinePointTangentCurve_AsyncWorker(
        Napi::Promise::Deferred const &d
,
                        const MbCartPoint & pnt,
                        const MbCurve & pCurve,
                         bool  lineAsCurve    )
        :PromiseWorker(d),
                        pnt(pnt)
,
                        pCurve(pCurve)
,
                        lineAsCurve(lineAsCurve)
{};

    void CurveTangent_LinePointTangentCurve_AsyncWorker::Execute() {
        EnterParallelRegion();

                PArray<MbLine> *pLine = new PArray<MbLine>;


        
        ::LinePointTangentCurve(
                        pnt
,                        pCurve
,                        *pLine
,                        lineAsCurve
        );


                this->pLine = pLine;

        
        ExitParallelRegion();
    }

    void CurveTangent_LinePointTangentCurve_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             PArray<MbLine> * pLine = this->pLine;
                Napi::Array arr_pLine = Napi::Array::New(env);
    for (size_t i = 0; i < pLine->Count(); i++) {
            arr_pLine[i] = Line::NewInstance(env,
                
                    (*pLine)[i]
                
            );
    }
    _to = arr_pLine;

            deferred.Resolve(_to);
    }

    void CurveTangent_LinePointTangentCurve_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    CurveTangent_LineTangentTwoCurves_AsyncWorker::CurveTangent_LineTangentTwoCurves_AsyncWorker(
        Napi::Promise::Deferred const &d
,
                        const MbCurve * pCurve1,
                        const MbCurve * pCurve2    )
        :PromiseWorker(d),
                        pCurve1(pCurve1)
,
                        pCurve2(pCurve2)
{};

    void CurveTangent_LineTangentTwoCurves_AsyncWorker::Execute() {
        EnterParallelRegion();

                PArray<MbLine> *pLine = new PArray<MbLine>;
        SArray<MbCartPoint> *secondPoint = new SArray<MbCartPoint>;


        
        ::LineTangentTwoCurves(
                        pCurve1
,                        pCurve2
,                        pLine
,                        secondPoint
        );


                this->pLine = pLine;
                this->secondPoint = secondPoint;

        
        ExitParallelRegion();
    }

    void CurveTangent_LineTangentTwoCurves_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            Napi::Object _toReturn = Napi::Object::New(env);

                 PArray<MbLine> * pLine = this->pLine;
                    Napi::Array arr_pLine = Napi::Array::New(env);
    for (size_t i = 0; i < pLine->Count(); i++) {
            arr_pLine[i] = Line::NewInstance(env,
                
                    (*pLine)[i]
                
            );
    }
    _to = arr_pLine;

                _toReturn.Set(Napi::String::New(env, "pLine"), _to);
                 SArray<MbCartPoint> * secondPoint = this->secondPoint;
                    Napi::Array arr_secondPoint = Napi::Array::New(env);
    for (size_t i = 0; i < secondPoint->Count(); i++) {
            arr_secondPoint[i] = CartPoint::NewInstance(env,
                
                    new MbCartPoint((*secondPoint)[i])
                
            );
    }
    _to = arr_secondPoint;

                _toReturn.Set(Napi::String::New(env, "secondPoint"), _to);

            deferred.Resolve(_toReturn);
    }

    void CurveTangent_LineTangentTwoCurves_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

