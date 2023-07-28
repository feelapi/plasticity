// This is a generated file, modify: generate/templates/RegDuplicate.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/RegDuplicate.h"

#include "tool_mutex.h"

Napi::Object RegDuplicate::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "RegDuplicate", {
        InstanceMethod<&RegDuplicate::IsReg>("IsReg"),
        InstanceMethod<&RegDuplicate::IsReg_async>("IsReg_async"),
        InstanceMethod<&RegDuplicate::SetReg>("SetReg"),
        InstanceMethod<&RegDuplicate::SetReg_async>("SetReg_async"),
            InstanceMethod<&RegDuplicate::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("RegDuplicate", func);


    return exports;
}

RegDuplicate::RegDuplicate(const Napi::CallbackInfo& info) : Napi::ObjectWrap<RegDuplicate>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        Napi::Error::New(env, "RegDuplicate cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object RegDuplicate::NewInstance(Napi::Env env, MbRegDuplicate *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("RegDuplicate");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    RegDuplicate *unwrapped = RegDuplicate::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function RegDuplicate::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("RegDuplicate");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

        Napi::Value RegDuplicate::IsReg(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(RefItem::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "RefItem srcItem is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                     MbRefItem * cpyItem = NULL;


                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'srcItem'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class RefItem *srcItem_ = RefItem::Unwrap(info[0].ToObject());
        
        const MbRefItem * srcItem =srcItem_->_underlying;
        



 bool  _result = _underlying->IsReg
(
        srcItem
,        cpyItem

);



        Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

        _toReturn.Set(Napi::String::New(env, "_result"), _to);
            if (cpyItem != NULL) {
        _to = RefItem::NewInstance(env, (MbRefItem *)cpyItem);
    } else {
        _to = env.Null();
    }

        _toReturn.Set(Napi::String::New(env, "cpyItem"), _to);
            return _toReturn;


        }

    Napi::Value RegDuplicate::IsReg_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(RefItem::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "RefItem srcItem is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'srcItem'"));
                return deferred.Promise();
        }
        const class RefItem *srcItem_ = RefItem::Unwrap(info[0].ToObject());
        
        const MbRefItem * srcItem =srcItem_->_underlying;
        

        RegDuplicate_IsReg_AsyncWorker* asyncWorker = new RegDuplicate_IsReg_AsyncWorker(
_underlying,            deferred
,
                
                srcItem        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value RegDuplicate::SetReg(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(RefItem::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "RefItem srcItem is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(RefItem::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "RefItem cpyItem is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'srcItem'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class RefItem *srcItem_ = RefItem::Unwrap(info[0].ToObject());
        
        const MbRefItem * srcItem =srcItem_->_underlying;
        

                if (info[1].IsNull() || info[1].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'cpyItem'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class RefItem *cpyItem_ = RefItem::Unwrap(info[1].ToObject());
        
         MbRefItem * cpyItem =cpyItem_->_underlying;
        



_underlying->SetReg
(
        srcItem
,        cpyItem

);



    return env.Undefined();


        }

    Napi::Value RegDuplicate::SetReg_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(RefItem::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "RefItem srcItem is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              (info[1].IsObject() && info[1].ToObject().InstanceOf(RefItem::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "RefItem cpyItem is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'srcItem'"));
                return deferred.Promise();
        }
        const class RefItem *srcItem_ = RefItem::Unwrap(info[0].ToObject());
        
        const MbRefItem * srcItem =srcItem_->_underlying;
        

                        if (info[1].IsNull() || info[1].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'cpyItem'"));
                return deferred.Promise();
        }
        const class RefItem *cpyItem_ = RefItem::Unwrap(info[1].ToObject());
        
         MbRefItem * cpyItem =cpyItem_->_underlying;
        

        RegDuplicate_SetReg_AsyncWorker* asyncWorker = new RegDuplicate_SetReg_AsyncWorker(
_underlying,            deferred
,
                
                srcItem,
                
                cpyItem        );
        asyncWorker->Queue();
        return deferred.Promise();
    }



    Napi::Value RegDuplicate::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }


    RegDuplicate_IsReg_AsyncWorker::RegDuplicate_IsReg_AsyncWorker(
MbRegDuplicate * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbRefItem * srcItem    )
        :_underlying(_underlying),PromiseWorker(d),
                        srcItem(srcItem)
{};

    void RegDuplicate_IsReg_AsyncWorker::Execute() {
        EnterParallelRegion();

                 MbRefItem * cpyItem = NULL;


        
         bool  _result = _underlying->IsReg(
                        srcItem
,                        cpyItem
        );


                this->_result = _result;
                this->cpyItem = cpyItem;

        
        ExitParallelRegion();
    }

    void RegDuplicate_IsReg_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            Napi::Object _toReturn = Napi::Object::New(env);

                 bool  _result = this->_result;
                    _to = Napi::Boolean::New(env, _result);

                _toReturn.Set(Napi::String::New(env, "_result"), _to);
                 MbRefItem * cpyItem = this->cpyItem;
                    if (cpyItem != NULL) {
        _to = RefItem::NewInstance(env, (MbRefItem *)cpyItem);
    } else {
        _to = env.Null();
    }

                _toReturn.Set(Napi::String::New(env, "cpyItem"), _to);

            deferred.Resolve(_toReturn);
    }

    void RegDuplicate_IsReg_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    RegDuplicate_SetReg_AsyncWorker::RegDuplicate_SetReg_AsyncWorker(
MbRegDuplicate * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbRefItem * srcItem,
                         MbRefItem * cpyItem    )
        :_underlying(_underlying),PromiseWorker(d),
                        srcItem(srcItem)
,
                        cpyItem(cpyItem)
{};

    void RegDuplicate_SetReg_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetReg(
                        srcItem
,                        cpyItem
        );



        
        ExitParallelRegion();
    }

    void RegDuplicate_SetReg_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void RegDuplicate_SetReg_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

