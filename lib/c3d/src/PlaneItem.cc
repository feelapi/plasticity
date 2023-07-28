// This is a generated file, modify: generate/templates/PlaneItem.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/PlaneItem.h"

#include "tool_mutex.h"

Napi::Object PlaneItem::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "PlaneItem", {
        InstanceMethod<&PlaneItem::IsA>("IsA"),
        InstanceMethod<&PlaneItem::IsA_async>("IsA_async"),
        InstanceMethod<&PlaneItem::Type>("Type"),
        InstanceMethod<&PlaneItem::Type_async>("Type_async"),
        InstanceMethod<&PlaneItem::Family>("Family"),
        InstanceMethod<&PlaneItem::Family_async>("Family_async"),
        InstanceMethod<&PlaneItem::Cast>("Cast"),
        InstanceMethod<&PlaneItem::Cast_async>("Cast_async"),
        InstanceMethod<&PlaneItem::Move>("Move"),
        InstanceMethod<&PlaneItem::Move_async>("Move_async"),
        InstanceMethod<&PlaneItem::Transform>("Transform"),
        InstanceMethod<&PlaneItem::Transform_async>("Transform_async"),
        InstanceMethod<&PlaneItem::Duplicate>("Duplicate"),
        InstanceMethod<&PlaneItem::Duplicate_async>("Duplicate_async"),
        InstanceMethod<&PlaneItem::AddYourGabaritTo>("AddYourGabaritTo"),
        InstanceMethod<&PlaneItem::AddYourGabaritTo_async>("AddYourGabaritTo_async"),
        InstanceMethod<&PlaneItem::GetUseCount>("GetUseCount"),
        InstanceMethod<&PlaneItem::GetUseCount_async>("GetUseCount_async"),
        InstanceMethod<&PlaneItem::AddRef>("AddRef"),
        InstanceMethod<&PlaneItem::AddRef_async>("AddRef_async"),
            InstanceMethod<&PlaneItem::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("PlaneItem", func);

    Napi::Object global = env.Global();
    Napi::Object Object = global.Get("Object").ToObject();
    Napi::Function setPrototypeOf = Napi::Function(env, Object.Get("setPrototypeOf"));
    Napi::Value prototype = func.Get("prototype");

    Napi::Function superFunc = RefItem::GetConstructor(env);
    Napi::FunctionReference* superConstructor = new Napi::FunctionReference();
    *superConstructor = Napi::Persistent(superFunc);

    Napi::Value superPrototype = superFunc.Get("prototype");
    setPrototypeOf.Call({prototype, superPrototype});
    setPrototypeOf.Call({func, superFunc});

    return exports;
}

PlaneItem::PlaneItem(const Napi::CallbackInfo& info) : Napi::ObjectWrap<PlaneItem>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        Napi::Error::New(env, "PlaneItem cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object PlaneItem::NewInstance(Napi::Env env, MbPlaneItem *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("PlaneItem");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    PlaneItem *unwrapped = PlaneItem::Unwrap(inst);
underlying->AddRef();    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function PlaneItem::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("PlaneItem");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

        Napi::Value PlaneItem::IsA(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbePlaneType  _result = _underlying->IsA
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value PlaneItem::IsA_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PlaneItem_IsA_AsyncWorker* asyncWorker = new PlaneItem_IsA_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneItem::Type(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbePlaneType  _result = _underlying->Type
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value PlaneItem::Type_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PlaneItem_Type_AsyncWorker* asyncWorker = new PlaneItem_Type_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneItem::Family(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 MbePlaneType  _result = _underlying->Family
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value PlaneItem::Family_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PlaneItem_Family_AsyncWorker* asyncWorker = new PlaneItem_Family_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }

        Napi::Value PlaneItem::Move(const Napi::CallbackInfo& info) {
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

    Napi::Value PlaneItem::Move_async(const Napi::CallbackInfo& info) {
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

        PlaneItem_Move_AsyncWorker* asyncWorker = new PlaneItem_Move_AsyncWorker(
_underlying,            deferred
,
                
                to,
                
                iReg        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneItem::Transform(const Napi::CallbackInfo& info) {
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

    Napi::Value PlaneItem::Transform_async(const Napi::CallbackInfo& info) {
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

        PlaneItem_Transform_AsyncWorker* asyncWorker = new PlaneItem_Transform_AsyncWorker(
_underlying,            deferred
,
                
                matr,
                
                iReg,
                
                newSurface        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneItem::Duplicate(const Napi::CallbackInfo& info) {
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

    Napi::Value PlaneItem::Duplicate_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

                            MbRegDuplicate * dup = NULL;
        if (!(info[0].IsNull() || info[0].IsUndefined())) {
            RegDuplicate *dup_ = RegDuplicate::Unwrap(info[0].ToObject());
                dup =   dup_->_underlying;
        }

        PlaneItem_Duplicate_AsyncWorker* asyncWorker = new PlaneItem_Duplicate_AsyncWorker(
_underlying,            deferred
,
                
                dup        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneItem::AddYourGabaritTo(const Napi::CallbackInfo& info) {
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

    Napi::Value PlaneItem::AddYourGabaritTo_async(const Napi::CallbackInfo& info) {
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
        

        PlaneItem_AddYourGabaritTo_AsyncWorker* asyncWorker = new PlaneItem_AddYourGabaritTo_AsyncWorker(
_underlying,            deferred
,
                
                rect        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneItem::GetUseCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 refcount_t  _result = _underlying->GetUseCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value PlaneItem::GetUseCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PlaneItem_GetUseCount_AsyncWorker* asyncWorker = new PlaneItem_GetUseCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value PlaneItem::AddRef(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->AddRef
(

);



    return env.Undefined();


        }

    Napi::Value PlaneItem::AddRef_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        PlaneItem_AddRef_AsyncWorker* asyncWorker = new PlaneItem_AddRef_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }



    Napi::Value PlaneItem::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }

PlaneItem::~PlaneItem() {
    // std::cout << "calling ::DeleteItem on PlaneItem for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

    PlaneItem_IsA_AsyncWorker::PlaneItem_IsA_AsyncWorker(
MbPlaneItem * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PlaneItem_IsA_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbePlaneType  _result = _underlying->IsA(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PlaneItem_IsA_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbePlaneType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void PlaneItem_IsA_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneItem_Type_AsyncWorker::PlaneItem_Type_AsyncWorker(
MbPlaneItem * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PlaneItem_Type_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbePlaneType  _result = _underlying->Type(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PlaneItem_Type_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbePlaneType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void PlaneItem_Type_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneItem_Family_AsyncWorker::PlaneItem_Family_AsyncWorker(
MbPlaneItem * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PlaneItem_Family_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbePlaneType  _result = _underlying->Family(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PlaneItem_Family_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbePlaneType  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void PlaneItem_Family_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneItem_Move_AsyncWorker::PlaneItem_Move_AsyncWorker(
MbPlaneItem * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbVector & to,
                         MbRegTransform * iReg    )
        :_underlying(_underlying),PromiseWorker(d),
                        to(to)
,
                        iReg(iReg)
{};

    void PlaneItem_Move_AsyncWorker::Execute() {
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

    void PlaneItem_Move_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
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

    void PlaneItem_Move_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneItem_Transform_AsyncWorker::PlaneItem_Transform_AsyncWorker(
MbPlaneItem * _underlying,        Napi::Promise::Deferred const &d
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

    void PlaneItem_Transform_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->Transform(
                        matr
,                        iReg
,                        newSurface
        );



        
        ExitParallelRegion();
    }

    void PlaneItem_Transform_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void PlaneItem_Transform_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneItem_Duplicate_AsyncWorker::PlaneItem_Duplicate_AsyncWorker(
MbPlaneItem * _underlying,        Napi::Promise::Deferred const &d
,
                         MbRegDuplicate * dup    )
        :_underlying(_underlying),PromiseWorker(d),
                        dup(dup)
{};

    void PlaneItem_Duplicate_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbPlaneItem & _result = _underlying->Duplicate(
                        dup
        );


                this->_result = (MbPlaneItem *)&(_result);

        
        ExitParallelRegion();
    }

    void PlaneItem_Duplicate_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbPlaneItem * _result = this->_result;
                _to = PlaneItem::NewInstance(env, (MbPlaneItem *)&(_result));

            deferred.Resolve(_to);
    }

    void PlaneItem_Duplicate_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneItem_AddYourGabaritTo_AsyncWorker::PlaneItem_AddYourGabaritTo_AsyncWorker(
MbPlaneItem * _underlying,        Napi::Promise::Deferred const &d
,
                         MbRect & rect    )
        :_underlying(_underlying),PromiseWorker(d),
                        rect(rect)
{};

    void PlaneItem_AddYourGabaritTo_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddYourGabaritTo(
                        rect
        );



        
        ExitParallelRegion();
    }

    void PlaneItem_AddYourGabaritTo_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void PlaneItem_AddYourGabaritTo_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneItem_GetUseCount_AsyncWorker::PlaneItem_GetUseCount_AsyncWorker(
MbPlaneItem * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PlaneItem_GetUseCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         refcount_t  _result = _underlying->GetUseCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void PlaneItem_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             refcount_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void PlaneItem_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    PlaneItem_AddRef_AsyncWorker::PlaneItem_AddRef_AsyncWorker(
MbPlaneItem * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void PlaneItem_AddRef_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddRef(
        );



        
        ExitParallelRegion();
    }

    void PlaneItem_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void PlaneItem_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

