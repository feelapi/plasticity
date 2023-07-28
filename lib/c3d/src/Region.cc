// This is a generated file, modify: generate/templates/Region.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/Region.h"

#include "tool_mutex.h"

Napi::Object Region::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "Region", {
        InstanceMethod<&Region::DetachContours>("DetachContours"),
        InstanceMethod<&Region::DetachContours_async>("DetachContours_async"),
        InstanceMethod<&Region::GetContoursCount>("GetContoursCount"),
        InstanceMethod<&Region::GetContoursCount_async>("GetContoursCount_async"),
        InstanceMethod<&Region::SetContour>("SetContour"),
        InstanceMethod<&Region::SetContour_async>("SetContour_async"),
        InstanceMethod<&Region::GetContour>("GetContour"),
        InstanceMethod<&Region::GetContour_async>("GetContour_async"),
        InstanceMethod<&Region::GetOutContour>("GetOutContour"),
        InstanceMethod<&Region::GetOutContour_async>("GetOutContour_async"),
        InstanceMethod<&Region::SetCorrect>("SetCorrect"),
        InstanceMethod<&Region::SetCorrect_async>("SetCorrect_async"),
        InstanceMethod<&Region::IsA>("IsA"),
        InstanceMethod<&Region::IsA_async>("IsA_async"),
        InstanceMethod<&Region::Type>("Type"),
        InstanceMethod<&Region::Type_async>("Type_async"),
        InstanceMethod<&Region::Family>("Family"),
        InstanceMethod<&Region::Family_async>("Family_async"),
        InstanceMethod<&Region::Move>("Move"),
        InstanceMethod<&Region::Move_async>("Move_async"),
        InstanceMethod<&Region::Transform>("Transform"),
        InstanceMethod<&Region::Transform_async>("Transform_async"),
        InstanceMethod<&Region::Duplicate>("Duplicate"),
        InstanceMethod<&Region::Duplicate_async>("Duplicate_async"),
        InstanceMethod<&Region::AddYourGabaritTo>("AddYourGabaritTo"),
        InstanceMethod<&Region::AddYourGabaritTo_async>("AddYourGabaritTo_async"),
        InstanceMethod<&Region::GetUseCount>("GetUseCount"),
        InstanceMethod<&Region::GetUseCount_async>("GetUseCount_async"),
        InstanceMethod<&Region::AddRef>("AddRef"),
        InstanceMethod<&Region::AddRef_async>("AddRef_async"),
            InstanceMethod<&Region::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Region", func);

    Napi::Object global = env.Global();
    Napi::Object Object = global.Get("Object").ToObject();
    Napi::Function setPrototypeOf = Napi::Function(env, Object.Get("setPrototypeOf"));
    Napi::Value prototype = func.Get("prototype");

    Napi::Function superFunc = PlaneItem::GetConstructor(env);
    Napi::FunctionReference* superConstructor = new Napi::FunctionReference();
    *superConstructor = Napi::Persistent(superFunc);

    Napi::Value superPrototype = superFunc.Get("prototype");
    setPrototypeOf.Call({prototype, superPrototype});
    setPrototypeOf.Call({func, superFunc});

    return exports;
}

Region::Region(const Napi::CallbackInfo& info) : Napi::ObjectWrap<Region>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        Napi::Error::New(env, "Region cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object Region::NewInstance(Napi::Env env, MbRegion *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Region");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Region *unwrapped = Region::Unwrap(inst);
underlying->AddRef();    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Region::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Region");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

        Napi::Value Region::DetachContours(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                    RPArray<MbContour> *dstContours = new RPArray<MbContour>;




_underlying->DetachContours
(
        *dstContours

);



    Napi::Value _to;

            Napi::Array arr_dstContours = Napi::Array::New(env);
    for (size_t i = 0; i < dstContours->Count(); i++) {
            arr_dstContours[i] = Contour::NewInstance(env,
                
                    (*dstContours)[i]
                
            );
    }
    _to = arr_dstContours;

            return _to;


        }

    Napi::Value Region::DetachContours_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Region_DetachContours_AsyncWorker* asyncWorker = new Region_DetachContours_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Region::GetContoursCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 size_t  _result = _underlying->GetContoursCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Region::GetContoursCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Region_GetContoursCount_AsyncWorker* asyncWorker = new Region_GetContoursCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Region::SetContour(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number k is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

             size_t k = info[0].ToNumber().Int64Value();



 MbContour * _result = _underlying->SetContour
(
        k

);



    Napi::Value _to;

            if (_result != NULL) {
        _to = Contour::NewInstance(env, (MbContour *)_result);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value Region::SetContour_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number k is required."));
                    return deferred.Promise();
            }


                     size_t k = info[0].ToNumber().Int64Value();

        Region_SetContour_AsyncWorker* asyncWorker = new Region_SetContour_AsyncWorker(
_underlying,            deferred
,
                
                k        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Region::GetContour(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number k is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

             size_t k = info[0].ToNumber().Int64Value();



const MbContour * _result = _underlying->GetContour
(
        k

);



    Napi::Value _to;

            if (_result != NULL) {
        _to = Contour::NewInstance(env, (MbContour *)_result);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value Region::GetContour_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number k is required."));
                    return deferred.Promise();
            }


                     size_t k = info[0].ToNumber().Int64Value();

        Region_GetContour_AsyncWorker* asyncWorker = new Region_GetContour_AsyncWorker(
_underlying,            deferred
,
                
                k        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Region::GetOutContour(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



const MbContour * _result = _underlying->GetOutContour
(

);



    Napi::Value _to;

            if (_result != NULL) {
        _to = Contour::NewInstance(env, (MbContour *)_result);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value Region::GetOutContour_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Region_GetOutContour_AsyncWorker* asyncWorker = new Region_GetOutContour_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Region::SetCorrect(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->SetCorrect
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value Region::SetCorrect_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Region_SetCorrect_AsyncWorker* asyncWorker = new Region_SetCorrect_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Region::IsA(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbePlaneType  _result = _underlying->IsA
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Region::IsA_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Region_IsA_AsyncWorker* asyncWorker = new Region_IsA_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Region::Type(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbePlaneType  _result = _underlying->Type
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Region::Type_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Region_Type_AsyncWorker* asyncWorker = new Region_Type_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Region::Family(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbePlaneType  _result = _underlying->Family
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Region::Family_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Region_Family_AsyncWorker* asyncWorker = new Region_Family_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Region::Move(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Vector::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Vector to is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    const MbSurface * newSurface = NULL;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'to'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Vector *to_ = Vector::Unwrap(info[0].ToObject());
        
        const MbVector & to =*to_->_underlying;
        

                    MbRegTransform * iReg = NULL;
        if (!(info[1].IsNull() || info[1].IsUndefined())) {
            RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
                iReg =   iReg_->_underlying;
        }



_underlying->Move
(
        to
,        info.Length() == 1 || info[1].IsNull() ? NULL : iReg
,        info.Length() == 2 || info[2].IsNull() ? NULL : newSurface

);



    Napi::Value _to;

            if (newSurface != NULL) {
        _to = Surface::NewInstance(env, (MbSurface *)newSurface);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value Region::Move_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Vector::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Vector to is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'to'"));
                return deferred.Promise();
        }
        const class Vector *to_ = Vector::Unwrap(info[0].ToObject());
        
        const MbVector & to =*to_->_underlying;
        

                            MbRegTransform * iReg = NULL;
        if (!(info[1].IsNull() || info[1].IsUndefined())) {
            RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
                iReg =   iReg_->_underlying;
        }

        Region_Move_AsyncWorker* asyncWorker = new Region_Move_AsyncWorker(
_underlying,            deferred
,
                
                to,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Region::Transform(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Matrix::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Matrix matr is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'matr'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Matrix *matr_ = Matrix::Unwrap(info[0].ToObject());
        
        const MbMatrix & matr =*matr_->_underlying;
        

                    MbRegTransform * iReg = NULL;
        if (!(info[1].IsNull() || info[1].IsUndefined())) {
            RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
                iReg =   iReg_->_underlying;
        }

                    MbSurface * newSurface = NULL;
        if (!(info[2].IsNull() || info[2].IsUndefined())) {
            Surface *newSurface_ = Surface::Unwrap(info[2].ToObject());
                newSurface =   newSurface_->_underlying;
        }



_underlying->Transform
(
        matr
,        info.Length() == 1 || info[1].IsNull() ? NULL : iReg
,        info.Length() == 2 || info[2].IsNull() ? NULL : newSurface

);



    return env.Undefined();


        }

    Napi::Value Region::Transform_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Matrix::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Matrix matr is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'matr'"));
                return deferred.Promise();
        }
        const class Matrix *matr_ = Matrix::Unwrap(info[0].ToObject());
        
        const MbMatrix & matr =*matr_->_underlying;
        

                            MbRegTransform * iReg = NULL;
        if (!(info[1].IsNull() || info[1].IsUndefined())) {
            RegTransform *iReg_ = RegTransform::Unwrap(info[1].ToObject());
                iReg =   iReg_->_underlying;
        }

                            MbSurface * newSurface = NULL;
        if (!(info[2].IsNull() || info[2].IsUndefined())) {
            Surface *newSurface_ = Surface::Unwrap(info[2].ToObject());
                newSurface =   newSurface_->_underlying;
        }

        Region_Transform_AsyncWorker* asyncWorker = new Region_Transform_AsyncWorker(
_underlying,            deferred
,
                
                matr,
                
                iReg,
                
                newSurface        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Region::Duplicate(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            

                    MbRegDuplicate * dup = NULL;
        if (!(info[0].IsNull() || info[0].IsUndefined())) {
            RegDuplicate *dup_ = RegDuplicate::Unwrap(info[0].ToObject());
                dup =   dup_->_underlying;
        }



 MbPlaneItem & _result = _underlying->Duplicate
(
        info.Length() == 0 || info[0].IsNull() ? NULL : dup

);



    Napi::Value _to;

            _to = PlaneItem::NewInstance(env, (MbPlaneItem *)&(_result));

            return _to;


        }

    Napi::Value Region::Duplicate_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                            MbRegDuplicate * dup = NULL;
        if (!(info[0].IsNull() || info[0].IsUndefined())) {
            RegDuplicate *dup_ = RegDuplicate::Unwrap(info[0].ToObject());
                dup =   dup_->_underlying;
        }

        Region_Duplicate_AsyncWorker* asyncWorker = new Region_Duplicate_AsyncWorker(
_underlying,            deferred
,
                
                dup        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Region::AddYourGabaritTo(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Rect::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Rect rect is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'rect'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Rect *rect_ = Rect::Unwrap(info[0].ToObject());
        
         MbRect & rect =*rect_->_underlying;
        



_underlying->AddYourGabaritTo
(
        rect

);



    return env.Undefined();


        }

    Napi::Value Region::AddYourGabaritTo_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Rect::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Rect rect is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'rect'"));
                return deferred.Promise();
        }
        const class Rect *rect_ = Rect::Unwrap(info[0].ToObject());
        
         MbRect & rect =*rect_->_underlying;
        

        Region_AddYourGabaritTo_AsyncWorker* asyncWorker = new Region_AddYourGabaritTo_AsyncWorker(
_underlying,            deferred
,
                
                rect        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Region::GetUseCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 refcount_t  _result = _underlying->GetUseCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Region::GetUseCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Region_GetUseCount_AsyncWorker* asyncWorker = new Region_GetUseCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Region::AddRef(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->AddRef
(

);



    return env.Undefined();


        }

    Napi::Value Region::AddRef_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Region_AddRef_AsyncWorker* asyncWorker = new Region_AddRef_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }



    Napi::Value Region::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }

Region::~Region() {
    // std::cout << "calling ::DeleteItem on Region for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

    Region_DetachContours_AsyncWorker::Region_DetachContours_AsyncWorker(
MbRegion * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Region_DetachContours_AsyncWorker::Execute() {
        EnterParallelRegion();

                RPArray<MbContour> *dstContours = new RPArray<MbContour>;


        
        _underlying->DetachContours(
                        *dstContours
        );


                this->dstContours = dstContours;

        
        ExitParallelRegion();
    }

    void Region_DetachContours_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             RPArray<MbContour> * dstContours = this->dstContours;
                Napi::Array arr_dstContours = Napi::Array::New(env);
    for (size_t i = 0; i < dstContours->Count(); i++) {
            arr_dstContours[i] = Contour::NewInstance(env,
                
                    (*dstContours)[i]
                
            );
    }
    _to = arr_dstContours;

            deferred.Resolve(_to);
    }

    void Region_DetachContours_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Region_GetContoursCount_AsyncWorker::Region_GetContoursCount_AsyncWorker(
MbRegion * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Region_GetContoursCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         size_t  _result = _underlying->GetContoursCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Region_GetContoursCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             size_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Region_GetContoursCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Region_SetContour_AsyncWorker::Region_SetContour_AsyncWorker(
MbRegion * _underlying,        Napi::Promise::Deferred const &d
,
                         size_t  k    )
        :_underlying(_underlying),PromiseWorker(d),
                        k(k)
{};

    void Region_SetContour_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbContour * _result = _underlying->SetContour(
                        k
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Region_SetContour_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbContour * _result = this->_result;
                if (_result != NULL) {
        _to = Contour::NewInstance(env, (MbContour *)_result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void Region_SetContour_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Region_GetContour_AsyncWorker::Region_GetContour_AsyncWorker(
MbRegion * _underlying,        Napi::Promise::Deferred const &d
,
                         size_t  k    )
        :_underlying(_underlying),PromiseWorker(d),
                        k(k)
{};

    void Region_GetContour_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        const MbContour * _result = _underlying->GetContour(
                        k
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Region_GetContour_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            const MbContour * _result = this->_result;
                if (_result != NULL) {
        _to = Contour::NewInstance(env, (MbContour *)_result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void Region_GetContour_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Region_GetOutContour_AsyncWorker::Region_GetOutContour_AsyncWorker(
MbRegion * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Region_GetOutContour_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        const MbContour * _result = _underlying->GetOutContour(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Region_GetOutContour_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            const MbContour * _result = this->_result;
                if (_result != NULL) {
        _to = Contour::NewInstance(env, (MbContour *)_result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void Region_GetOutContour_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Region_SetCorrect_AsyncWorker::Region_SetCorrect_AsyncWorker(
MbRegion * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Region_SetCorrect_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->SetCorrect(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Region_SetCorrect_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void Region_SetCorrect_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Region_IsA_AsyncWorker::Region_IsA_AsyncWorker(
MbRegion * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Region_IsA_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbePlaneType  _result = _underlying->IsA(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Region_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbePlaneType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Region_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Region_Type_AsyncWorker::Region_Type_AsyncWorker(
MbRegion * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Region_Type_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbePlaneType  _result = _underlying->Type(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Region_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbePlaneType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Region_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Region_Family_AsyncWorker::Region_Family_AsyncWorker(
MbRegion * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Region_Family_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbePlaneType  _result = _underlying->Family(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Region_Family_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbePlaneType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Region_Family_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Region_Move_AsyncWorker::Region_Move_AsyncWorker(
MbRegion * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbVector & to,
                         MbRegTransform * iReg    )
        :_underlying(_underlying),PromiseWorker(d),
                        to(to)
,
                        iReg(iReg)
{};

    void Region_Move_AsyncWorker::Execute() {
        EnterParallelRegion();

                const MbSurface * newSurface = NULL;


        
        _underlying->Move(
                        to
,                        iReg
,                        newSurface
        );


                this->newSurface = newSurface;

        
        ExitParallelRegion();
    }

    void Region_Move_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            const MbSurface * newSurface = this->newSurface;
                if (newSurface != NULL) {
        _to = Surface::NewInstance(env, (MbSurface *)newSurface);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void Region_Move_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Region_Transform_AsyncWorker::Region_Transform_AsyncWorker(
MbRegion * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbMatrix & matr,
                         MbRegTransform * iReg,
                        const MbSurface * newSurface    )
        :_underlying(_underlying),PromiseWorker(d),
                        matr(matr)
,
                        iReg(iReg)
,
                        newSurface(newSurface)
{};

    void Region_Transform_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Transform(
                        matr
,                        iReg
,                        newSurface
        );



        
        ExitParallelRegion();
    }

    void Region_Transform_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Region_Transform_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Region_Duplicate_AsyncWorker::Region_Duplicate_AsyncWorker(
MbRegion * _underlying,        Napi::Promise::Deferred const &d
,
                         MbRegDuplicate * dup    )
        :_underlying(_underlying),PromiseWorker(d),
                        dup(dup)
{};

    void Region_Duplicate_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbPlaneItem & _result = _underlying->Duplicate(
                        dup
        );


                this->_result = (MbPlaneItem *)&(_result);

        
        ExitParallelRegion();
    }

    void Region_Duplicate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbPlaneItem * _result = this->_result;
                _to = PlaneItem::NewInstance(env, (MbPlaneItem *)&(_result));

            deferred.Resolve(_to);
    }

    void Region_Duplicate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Region_AddYourGabaritTo_AsyncWorker::Region_AddYourGabaritTo_AsyncWorker(
MbRegion * _underlying,        Napi::Promise::Deferred const &d
,
                         MbRect & rect    )
        :_underlying(_underlying),PromiseWorker(d),
                        rect(rect)
{};

    void Region_AddYourGabaritTo_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddYourGabaritTo(
                        rect
        );



        
        ExitParallelRegion();
    }

    void Region_AddYourGabaritTo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Region_AddYourGabaritTo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Region_GetUseCount_AsyncWorker::Region_GetUseCount_AsyncWorker(
MbRegion * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Region_GetUseCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         refcount_t  _result = _underlying->GetUseCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Region_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             refcount_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Region_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Region_AddRef_AsyncWorker::Region_AddRef_AsyncWorker(
MbRegion * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Region_AddRef_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddRef(
        );



        
        ExitParallelRegion();
    }

    void Region_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Region_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

