// This is a generated file, modify: generate/templates/ControlData3D.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/ControlData3D.h"

#include "tool_mutex.h"

Napi::Object ControlData3D::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "ControlData3D", {
        InstanceMethod<&ControlData3D::Count>("Count"),
        InstanceMethod<&ControlData3D::Count_async>("Count_async"),
        InstanceMethod<&ControlData3D::GetPoint>("GetPoint"),
        InstanceMethod<&ControlData3D::GetPoint_async>("GetPoint_async"),
        InstanceMethod<&ControlData3D::SetPoint>("SetPoint"),
        InstanceMethod<&ControlData3D::SetPoint_async>("SetPoint_async"),
        InstanceMethod<&ControlData3D::TotalCount>("TotalCount"),
        InstanceMethod<&ControlData3D::TotalCount_async>("TotalCount_async"),
        InstanceMethod<&ControlData3D::ShareCount>("ShareCount"),
        InstanceMethod<&ControlData3D::ShareCount_async>("ShareCount_async"),
        InstanceMethod<&ControlData3D::ResetIndex>("ResetIndex"),
        InstanceMethod<&ControlData3D::ResetIndex_async>("ResetIndex_async"),
            InstanceMethod<&ControlData3D::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("ControlData3D", func);


    return exports;
}

ControlData3D::ControlData3D(const Napi::CallbackInfo& info) : Napi::ObjectWrap<ControlData3D>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        Napi::Error::New(env, "ControlData3D cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object ControlData3D::NewInstance(Napi::Env env, MbControlData3D *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("ControlData3D");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    ControlData3D *unwrapped = ControlData3D::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function ControlData3D::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("ControlData3D");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

        Napi::Value ControlData3D::Count(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 size_t  _result = _underlying->Count
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value ControlData3D::Count_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ControlData3D_Count_AsyncWorker* asyncWorker = new ControlData3D_Count_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ControlData3D::GetPoint(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number i is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    MbCartPoint3D *p = new MbCartPoint3D;


             size_t i = info[0].ToNumber().Int64Value();



 bool  _result = _underlying->GetPoint
(
        i
,        *p

);


if (_result) {

    Napi::Value _to;

            if (p != NULL) {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)p);
    } else {
        _to = env.Null();
    }

            return _to;

} else {
    std::ostringstream msg;
    msg << "Operation GetPoint failed";
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value ControlData3D::GetPoint_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number i is required."));
                    return deferred.Promise();
            }


                     size_t i = info[0].ToNumber().Int64Value();

        ControlData3D_GetPoint_AsyncWorker* asyncWorker = new ControlData3D_GetPoint_AsyncWorker(
_underlying,            deferred
,
                
                i        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ControlData3D::SetPoint(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number i is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "CartPoint3D p is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

             size_t i = info[0].ToNumber().Int64Value();

                if (info[1].IsNull() || info[1].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'p'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class CartPoint3D *p_ = CartPoint3D::Unwrap(info[1].ToObject());
        
         MbCartPoint3D & p =*p_->_underlying;
        



 bool  _result = _underlying->SetPoint
(
        i
,        p

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value ControlData3D::SetPoint_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number i is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(CartPoint3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "CartPoint3D p is required."));
                    return deferred.Promise();
            }


                     size_t i = info[0].ToNumber().Int64Value();

                        if (info[1].IsNull() || info[1].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'p'"));
                return deferred.Promise();
        }
        const class CartPoint3D *p_ = CartPoint3D::Unwrap(info[1].ToObject());
        
         MbCartPoint3D & p =*p_->_underlying;
        

        ControlData3D_SetPoint_AsyncWorker* asyncWorker = new ControlData3D_SetPoint_AsyncWorker(
_underlying,            deferred
,
                
                i,
                
                p        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ControlData3D::TotalCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 size_t  _result = _underlying->TotalCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value ControlData3D::TotalCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ControlData3D_TotalCount_AsyncWorker* asyncWorker = new ControlData3D_TotalCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ControlData3D::ShareCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 size_t  _result = _underlying->ShareCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value ControlData3D::ShareCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ControlData3D_ShareCount_AsyncWorker* asyncWorker = new ControlData3D_ShareCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ControlData3D::ResetIndex(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->ResetIndex
(

);



    return env.Undefined();


        }

    Napi::Value ControlData3D::ResetIndex_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        ControlData3D_ResetIndex_AsyncWorker* asyncWorker = new ControlData3D_ResetIndex_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }



    Napi::Value ControlData3D::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }


    ControlData3D_Count_AsyncWorker::ControlData3D_Count_AsyncWorker(
MbControlData3D * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ControlData3D_Count_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         size_t  _result = _underlying->Count(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void ControlData3D_Count_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             size_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void ControlData3D_Count_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ControlData3D_GetPoint_AsyncWorker::ControlData3D_GetPoint_AsyncWorker(
MbControlData3D * _underlying,        Napi::Promise::Deferred const &d
,
                         size_t  i    )
        :_underlying(_underlying),PromiseWorker(d),
                        i(i)
{};

    void ControlData3D_GetPoint_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbCartPoint3D *p = new MbCartPoint3D;


        
         bool  _result = _underlying->GetPoint(
                        i
,                        *p
        );

        if (_result) {

                this->p = p;

                } else {
            std::ostringstream msg;
            msg << "Operation GetPoint failed";
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void ControlData3D_GetPoint_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbCartPoint3D * p = this->p;
                if (p != NULL) {
        _to = CartPoint3D::NewInstance(env, (MbCartPoint3D *)p);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void ControlData3D_GetPoint_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ControlData3D_SetPoint_AsyncWorker::ControlData3D_SetPoint_AsyncWorker(
MbControlData3D * _underlying,        Napi::Promise::Deferred const &d
,
                         size_t  i,
                         MbCartPoint3D & p    )
        :_underlying(_underlying),PromiseWorker(d),
                        i(i)
,
                        p(p)
{};

    void ControlData3D_SetPoint_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->SetPoint(
                        i
,                        p
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void ControlData3D_SetPoint_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void ControlData3D_SetPoint_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ControlData3D_TotalCount_AsyncWorker::ControlData3D_TotalCount_AsyncWorker(
MbControlData3D * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ControlData3D_TotalCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         size_t  _result = _underlying->TotalCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void ControlData3D_TotalCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             size_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void ControlData3D_TotalCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ControlData3D_ShareCount_AsyncWorker::ControlData3D_ShareCount_AsyncWorker(
MbControlData3D * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ControlData3D_ShareCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         size_t  _result = _underlying->ShareCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void ControlData3D_ShareCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             size_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void ControlData3D_ShareCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ControlData3D_ResetIndex_AsyncWorker::ControlData3D_ResetIndex_AsyncWorker(
MbControlData3D * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void ControlData3D_ResetIndex_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->ResetIndex(
        );



        
        ExitParallelRegion();
    }

    void ControlData3D_ResetIndex_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void ControlData3D_ResetIndex_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

