// This is a generated file, modify: generate/templates/Primitive.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/Primitive.h"

#include "tool_mutex.h"

Napi::Object Primitive::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "Primitive", {
        InstanceMethod<&Primitive::SetItem>("SetItem"),
        InstanceMethod<&Primitive::SetItem_async>("SetItem_async"),
        InstanceMethod<&Primitive::SetPrimitiveName>("SetPrimitiveName"),
        InstanceMethod<&Primitive::SetPrimitiveName_async>("SetPrimitiveName_async"),
        InstanceMethod<&Primitive::SetPrimitiveType>("SetPrimitiveType"),
        InstanceMethod<&Primitive::SetPrimitiveType_async>("SetPrimitiveType_async"),
        InstanceMethod<&Primitive::GetUseCount>("GetUseCount"),
        InstanceMethod<&Primitive::GetUseCount_async>("GetUseCount_async"),
        InstanceMethod<&Primitive::AddRef>("AddRef"),
        InstanceMethod<&Primitive::AddRef_async>("AddRef_async"),
        InstanceMethod<&Primitive::SetStyle>("SetStyle"),
        InstanceMethod<&Primitive::SetStyle_async>("SetStyle_async"),
        InstanceMethod<&Primitive::GetStyle>("GetStyle"),
        InstanceMethod<&Primitive::GetStyle_async>("GetStyle_async"),
        InstanceMethod<&Primitive::SetColor>("SetColor"),
        InstanceMethod<&Primitive::SetColor_async>("SetColor_async"),
        InstanceMethod<&Primitive::GetColor>("GetColor"),
        InstanceMethod<&Primitive::GetColor_async>("GetColor_async"),
        InstanceMethod<&Primitive::AttributesConvert>("AttributesConvert"),
        InstanceMethod<&Primitive::AttributesConvert_async>("AttributesConvert_async"),
            InstanceMethod<&Primitive::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Primitive", func);

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

Primitive::Primitive(const Napi::CallbackInfo& info) : Napi::ObjectWrap<Primitive>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        Napi::Error::New(env, "Primitive cannot be instantiated directly").ThrowAsJavaScriptException();
}

Napi::Object Primitive::NewInstance(Napi::Env env, MbPrimitive *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Primitive");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Primitive *unwrapped = Primitive::Unwrap(inst);
underlying->AddRef();    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Primitive::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Primitive");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

        Napi::Value Primitive::SetItem(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(RefItem::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "RefItem g is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'g'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class RefItem *g_ = RefItem::Unwrap(info[0].ToObject());
        
        const MbRefItem * g =g_->_underlying;
        



_underlying->SetItem
(
        g

);



    return env.Undefined();


        }

    Napi::Value Primitive::SetItem_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(RefItem::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "RefItem g is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'g'"));
                return deferred.Promise();
        }
        const class RefItem *g_ = RefItem::Unwrap(info[0].ToObject());
        
        const MbRefItem * g =g_->_underlying;
        

        Primitive_SetItem_AsyncWorker* asyncWorker = new Primitive_SetItem_AsyncWorker(
_underlying,            deferred
,
                
                g        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Primitive::SetPrimitiveName(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "SimpleName n is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

             int n = info[0].ToNumber().Int64Value();



_underlying->SetPrimitiveName
(
        n

);



    return env.Undefined();


        }

    Napi::Value Primitive::SetPrimitiveName_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "SimpleName n is required."));
                    return deferred.Promise();
            }


                     int n = info[0].ToNumber().Int64Value();

        Primitive_SetPrimitiveName_AsyncWorker* asyncWorker = new Primitive_SetPrimitiveName_AsyncWorker(
_underlying,            deferred
,
                
                n        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Primitive::SetPrimitiveType(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "RefType t is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

            const MbeRefType t = static_cast<MbeRefType>(info[0].ToNumber().Uint32Value());



_underlying->SetPrimitiveType
(
        t

);



    return env.Undefined();


        }

    Napi::Value Primitive::SetPrimitiveType_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "RefType t is required."));
                    return deferred.Promise();
            }


                    const MbeRefType t = static_cast<MbeRefType>(info[0].ToNumber().Uint32Value());

        Primitive_SetPrimitiveType_AsyncWorker* asyncWorker = new Primitive_SetPrimitiveType_AsyncWorker(
_underlying,            deferred
,
                
                t        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Primitive::GetUseCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 refcount_t  _result = _underlying->GetUseCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Primitive::GetUseCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Primitive_GetUseCount_AsyncWorker* asyncWorker = new Primitive_GetUseCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Primitive::AddRef(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->AddRef
(

);



    return env.Undefined();


        }

    Napi::Value Primitive::AddRef_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Primitive_AddRef_AsyncWorker* asyncWorker = new Primitive_AddRef_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Primitive::SetStyle(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "int s is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

             int s = info[0].ToNumber().Int64Value();



_underlying->SetStyle
(
        s

);



    return env.Undefined();


        }

    Napi::Value Primitive::SetStyle_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "int s is required."));
                    return deferred.Promise();
            }


                     int s = info[0].ToNumber().Int64Value();

        Primitive_SetStyle_AsyncWorker* asyncWorker = new Primitive_SetStyle_AsyncWorker(
_underlying,            deferred
,
                
                s        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Primitive::GetStyle(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 int  _result = _underlying->GetStyle
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Primitive::GetStyle_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Primitive_GetStyle_AsyncWorker* asyncWorker = new Primitive_GetStyle_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Primitive::SetColor(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "uint32 c is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

             int c = info[0].ToNumber().Int64Value();



_underlying->SetColor
(
        c

);



    return env.Undefined();


        }

    Napi::Value Primitive::SetColor_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "uint32 c is required."));
                    return deferred.Promise();
            }


                     int c = info[0].ToNumber().Int64Value();

        Primitive_SetColor_AsyncWorker* asyncWorker = new Primitive_SetColor_AsyncWorker(
_underlying,            deferred
,
                
                c        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Primitive::GetColor(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 uint32  _result = _underlying->GetColor
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Primitive::GetColor_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Primitive_GetColor_AsyncWorker* asyncWorker = new Primitive_GetColor_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Primitive::AttributesConvert(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Grid::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Grid other is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'other'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Grid *other_ = Grid::Unwrap(info[0].ToObject());
        
         MbGrid & other =*other_->_underlying;
        



_underlying->AttributesConvert
(
        other

);



    return env.Undefined();


        }

    Napi::Value Primitive::AttributesConvert_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Grid::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Grid other is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'other'"));
                return deferred.Promise();
        }
        const class Grid *other_ = Grid::Unwrap(info[0].ToObject());
        
         MbGrid & other =*other_->_underlying;
        

        Primitive_AttributesConvert_AsyncWorker* asyncWorker = new Primitive_AttributesConvert_AsyncWorker(
_underlying,            deferred
,
                
                other        );
        asyncWorker->Queue();
        return deferred.Promise();
    }



    Napi::Value Primitive::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }

Primitive::~Primitive() {
    // std::cout << "calling ::DeleteItem on Primitive for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

    Primitive_SetItem_AsyncWorker::Primitive_SetItem_AsyncWorker(
MbPrimitive * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbRefItem * g    )
        :_underlying(_underlying),PromiseWorker(d),
                        g(g)
{};

    void Primitive_SetItem_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetItem(
                        g
        );



        
        ExitParallelRegion();
    }

    void Primitive_SetItem_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Primitive_SetItem_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Primitive_SetPrimitiveName_AsyncWorker::Primitive_SetPrimitiveName_AsyncWorker(
MbPrimitive * _underlying,        Napi::Promise::Deferred const &d
,
                         SimpleName  n    )
        :_underlying(_underlying),PromiseWorker(d),
                        n(n)
{};

    void Primitive_SetPrimitiveName_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetPrimitiveName(
                        n
        );



        
        ExitParallelRegion();
    }

    void Primitive_SetPrimitiveName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Primitive_SetPrimitiveName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Primitive_SetPrimitiveType_AsyncWorker::Primitive_SetPrimitiveType_AsyncWorker(
MbPrimitive * _underlying,        Napi::Promise::Deferred const &d
,
                         MbeRefType  t    )
        :_underlying(_underlying),PromiseWorker(d),
                        t(t)
{};

    void Primitive_SetPrimitiveType_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetPrimitiveType(
                        t
        );



        
        ExitParallelRegion();
    }

    void Primitive_SetPrimitiveType_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Primitive_SetPrimitiveType_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Primitive_GetUseCount_AsyncWorker::Primitive_GetUseCount_AsyncWorker(
MbPrimitive * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Primitive_GetUseCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         refcount_t  _result = _underlying->GetUseCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Primitive_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             refcount_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Primitive_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Primitive_AddRef_AsyncWorker::Primitive_AddRef_AsyncWorker(
MbPrimitive * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Primitive_AddRef_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddRef(
        );



        
        ExitParallelRegion();
    }

    void Primitive_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Primitive_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Primitive_SetStyle_AsyncWorker::Primitive_SetStyle_AsyncWorker(
MbPrimitive * _underlying,        Napi::Promise::Deferred const &d
,
                         int  s    )
        :_underlying(_underlying),PromiseWorker(d),
                        s(s)
{};

    void Primitive_SetStyle_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetStyle(
                        s
        );



        
        ExitParallelRegion();
    }

    void Primitive_SetStyle_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Primitive_SetStyle_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Primitive_GetStyle_AsyncWorker::Primitive_GetStyle_AsyncWorker(
MbPrimitive * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Primitive_GetStyle_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         int  _result = _underlying->GetStyle(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Primitive_GetStyle_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             int  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Primitive_GetStyle_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Primitive_SetColor_AsyncWorker::Primitive_SetColor_AsyncWorker(
MbPrimitive * _underlying,        Napi::Promise::Deferred const &d
,
                         uint32  c    )
        :_underlying(_underlying),PromiseWorker(d),
                        c(c)
{};

    void Primitive_SetColor_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetColor(
                        c
        );



        
        ExitParallelRegion();
    }

    void Primitive_SetColor_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Primitive_SetColor_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Primitive_GetColor_AsyncWorker::Primitive_GetColor_AsyncWorker(
MbPrimitive * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Primitive_GetColor_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         uint32  _result = _underlying->GetColor(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Primitive_GetColor_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             uint32  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Primitive_GetColor_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Primitive_AttributesConvert_AsyncWorker::Primitive_AttributesConvert_AsyncWorker(
MbPrimitive * _underlying,        Napi::Promise::Deferred const &d
,
                         MbGrid & other    )
        :_underlying(_underlying),PromiseWorker(d),
                        other(other)
{};

    void Primitive_AttributesConvert_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AttributesConvert(
                        other
        );



        
        ExitParallelRegion();
    }

    void Primitive_AttributesConvert_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Primitive_AttributesConvert_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

