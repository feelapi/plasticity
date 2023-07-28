// This is a generated file, modify: generate/templates/FormNote.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/FormNote.h"

#include "tool_mutex.h"

Napi::Object FormNote::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "FormNote", {
        InstanceMethod<&FormNote::Wire>("Wire"),
        InstanceMethod<&FormNote::Wire_async>("Wire_async"),
        InstanceMethod<&FormNote::Grid>("Grid"),
        InstanceMethod<&FormNote::Grid_async>("Grid_async"),
        InstanceMethod<&FormNote::Seam>("Seam"),
        InstanceMethod<&FormNote::Seam_async>("Seam_async"),
        InstanceMethod<&FormNote::Quad>("Quad"),
        InstanceMethod<&FormNote::Quad_async>("Quad_async"),
        InstanceMethod<&FormNote::Fair>("Fair"),
        InstanceMethod<&FormNote::Fair_async>("Fair_async"),
            InstanceMethod<&FormNote::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("FormNote", func);


    return exports;
}

FormNote::FormNote(const Napi::CallbackInfo& info) : Napi::ObjectWrap<FormNote>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        if (info.Length() == 5&&                ((
                info[0].IsBoolean()
        )   
)
 &&         ((
                info[1].IsBoolean()
        )   
)
 &&         ((
                info[2].IsBoolean()
        )   
)
 &&         ((
                info[3].IsBoolean()
        )   
)
 &&         ((
                info[4].IsBoolean()
        )   
)


        ) {
                 bool wire = info[0].ToBoolean();

                 bool grid = info[1].ToBoolean();

                 bool seam = info[2].ToBoolean();

                 bool exact = info[3].ToBoolean();

                 bool quad = info[4].ToBoolean();


                MbFormNote *underlying = new MbFormNote(wire,grid,seam,exact,quad);
                if (underlying == NULL) {
                    Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
                    return;
                }
            this->_underlying = underlying;
        } else {
            Napi::Error::New(env, "No matching constructor").ThrowAsJavaScriptException();
            return;
        }
}

Napi::Object FormNote::NewInstance(Napi::Env env, MbFormNote *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("FormNote");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    FormNote *unwrapped = FormNote::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function FormNote::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("FormNote");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

        Napi::Value FormNote::Wire(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->Wire
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value FormNote::Wire_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        FormNote_Wire_AsyncWorker* asyncWorker = new FormNote_Wire_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value FormNote::Grid(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->Grid
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value FormNote::Grid_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        FormNote_Grid_AsyncWorker* asyncWorker = new FormNote_Grid_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value FormNote::Seam(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->Seam
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value FormNote::Seam_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        FormNote_Seam_AsyncWorker* asyncWorker = new FormNote_Seam_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value FormNote::Quad(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->Quad
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value FormNote::Quad_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        FormNote_Quad_AsyncWorker* asyncWorker = new FormNote_Quad_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value FormNote::Fair(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 bool  _result = _underlying->Fair
(

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value FormNote::Fair_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        FormNote_Fair_AsyncWorker* asyncWorker = new FormNote_Fair_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }



    Napi::Value FormNote::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }


    FormNote_Wire_AsyncWorker::FormNote_Wire_AsyncWorker(
MbFormNote * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void FormNote_Wire_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->Wire(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void FormNote_Wire_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void FormNote_Wire_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    FormNote_Grid_AsyncWorker::FormNote_Grid_AsyncWorker(
MbFormNote * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void FormNote_Grid_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->Grid(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void FormNote_Grid_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void FormNote_Grid_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    FormNote_Seam_AsyncWorker::FormNote_Seam_AsyncWorker(
MbFormNote * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void FormNote_Seam_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->Seam(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void FormNote_Seam_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void FormNote_Seam_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    FormNote_Quad_AsyncWorker::FormNote_Quad_AsyncWorker(
MbFormNote * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void FormNote_Quad_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->Quad(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void FormNote_Quad_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void FormNote_Quad_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    FormNote_Fair_AsyncWorker::FormNote_Fair_AsyncWorker(
MbFormNote * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void FormNote_Fair_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->Fair(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void FormNote_Fair_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void FormNote_Fair_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

