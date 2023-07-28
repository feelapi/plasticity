// This is a generated file, modify: generate/templates/ShellCuttingParams.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/ShellCuttingParams.h"

#include "tool_mutex.h"

Napi::Object ShellCuttingParams::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "ShellCuttingParams", {
        InstanceMethod<&ShellCuttingParams::SetSurfaceProlongType>("SetSurfaceProlongType"),
        InstanceMethod<&ShellCuttingParams::SetSurfaceProlongType_async>("SetSurfaceProlongType_async"),
        InstanceMethod<&ShellCuttingParams::AddSurfaceProlongType>("AddSurfaceProlongType"),
        InstanceMethod<&ShellCuttingParams::AddSurfaceProlongType_async>("AddSurfaceProlongType_async"),
            InstanceMethod<&ShellCuttingParams::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("ShellCuttingParams", func);


    return exports;
}

ShellCuttingParams::ShellCuttingParams(const Napi::CallbackInfo& info) : Napi::ObjectWrap<ShellCuttingParams>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        if (info.Length() == 7&&                ((
                info[0].IsObject() &&
                    info[0].ToObject().InstanceOf(Placement3D::GetConstructor(env))
        )   
)
 &&         ((
                info[1].IsObject() &&
                    info[1].ToObject().InstanceOf(Contour::GetConstructor(env))
        )   
)
 &&         ((
                info[2].IsBoolean()
        )   
)
 &&         ((
                info[3].IsObject() &&
                    info[3].ToObject().InstanceOf(Vector3D::GetConstructor(env))
        )   
)
 &&         ((
                info[4].IsObject() &&
                    info[4].ToObject().InstanceOf(MergingFlags::GetConstructor(env))
        )   
)
 &&         ((
                info[5].IsBoolean()
        )   
)
 &&         ((
                info[6].IsObject() &&
                    info[6].ToObject().InstanceOf(SNameMaker::GetConstructor(env))
        )   
)


        ) {
                    if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'place'").ThrowAsJavaScriptException();
                return;
        }
        const class Placement3D *place_ = Placement3D::Unwrap(info[0].ToObject());
        
        const MbPlacement3D & place =*place_->_underlying;
        

                    if (info[1].IsNull() || info[1].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'contour'").ThrowAsJavaScriptException();
                return;
        }
        const class Contour *contour_ = Contour::Unwrap(info[1].ToObject());
        
        const MbContour & contour =*contour_->_underlying;
        

                 bool sameContour = info[2].ToBoolean();

                    if (info[3].IsNull() || info[3].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'dir'").ThrowAsJavaScriptException();
                return;
        }
        const class Vector3D *dir_ = Vector3D::Unwrap(info[3].ToObject());
        
        const MbVector3D & dir =*dir_->_underlying;
        

                    if (info[4].IsNull() || info[4].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'mergingFlags'").ThrowAsJavaScriptException();
                return;
        }
        const class MergingFlags *mergingFlags_ = MergingFlags::Unwrap(info[4].ToObject());
        
        const MbMergingFlags & mergingFlags =*mergingFlags_->_underlying;
        

                 bool cutAsClosed = info[5].ToBoolean();

                    if (info[6].IsNull() || info[6].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'snMaker'").ThrowAsJavaScriptException();
                return;
        }
        const class SNameMaker *snMaker_ = SNameMaker::Unwrap(info[6].ToObject());
        
        const MbSNameMaker & snMaker =*snMaker_->_underlying;
        


                MbShellCuttingParams *underlying = new MbShellCuttingParams(place,contour,sameContour,dir,mergingFlags,cutAsClosed,snMaker);
                if (underlying == NULL) {
                    Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
                    return;
                }
            this->_underlying = underlying;
        } else if (info.Length() == 8&&                ((
                info[0].IsObject() &&
                    info[0].ToObject().InstanceOf(Placement3D::GetConstructor(env))
        )   
)
 &&         ((
                info[1].IsObject() &&
                    info[1].ToObject().InstanceOf(Contour::GetConstructor(env))
        )   
)
 &&         ((
                info[2].IsBoolean()
        )   
)
 &&         ((
                info[3].IsObject() &&
                    info[3].ToObject().InstanceOf(Vector3D::GetConstructor(env))
        )   
)
 &&         ((
                info[4].IsNumber()
        )   
)
 &&         ((
                info[5].IsObject() &&
                    info[5].ToObject().InstanceOf(MergingFlags::GetConstructor(env))
        )   
)
 &&         ((
                info[6].IsBoolean()
        )   
)
 &&         ((
                info[7].IsObject() &&
                    info[7].ToObject().InstanceOf(SNameMaker::GetConstructor(env))
        )   
)


        ) {
                    if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'place'").ThrowAsJavaScriptException();
                return;
        }
        const class Placement3D *place_ = Placement3D::Unwrap(info[0].ToObject());
        
        const MbPlacement3D & place =*place_->_underlying;
        

                    if (info[1].IsNull() || info[1].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'contour'").ThrowAsJavaScriptException();
                return;
        }
        const class Contour *contour_ = Contour::Unwrap(info[1].ToObject());
        
        const MbContour & contour =*contour_->_underlying;
        

                 bool sameContour = info[2].ToBoolean();

                    if (info[3].IsNull() || info[3].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'dir'").ThrowAsJavaScriptException();
                return;
        }
        const class Vector3D *dir_ = Vector3D::Unwrap(info[3].ToObject());
        
        const MbVector3D & dir =*dir_->_underlying;
        

                 int part = info[4].ToNumber().Int64Value();

                    if (info[5].IsNull() || info[5].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'mergingFlags'").ThrowAsJavaScriptException();
                return;
        }
        const class MergingFlags *mergingFlags_ = MergingFlags::Unwrap(info[5].ToObject());
        
        const MbMergingFlags & mergingFlags =*mergingFlags_->_underlying;
        

                 bool cutAsClosed = info[6].ToBoolean();

                    if (info[7].IsNull() || info[7].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'snMaker'").ThrowAsJavaScriptException();
                return;
        }
        const class SNameMaker *snMaker_ = SNameMaker::Unwrap(info[7].ToObject());
        
        const MbSNameMaker & snMaker =*snMaker_->_underlying;
        


                MbShellCuttingParams *underlying = new MbShellCuttingParams(place,contour,sameContour,dir,part,mergingFlags,cutAsClosed,snMaker);
                if (underlying == NULL) {
                    Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
                    return;
                }
            this->_underlying = underlying;
        } else if (info.Length() == 5&&                ((
                info[0].IsObject() &&
                    info[0].ToObject().InstanceOf(Surface::GetConstructor(env))
        )   
)
 &&         ((
                info[1].IsBoolean()
        )   
)
 &&         ((
                info[2].IsObject() &&
                    info[2].ToObject().InstanceOf(MergingFlags::GetConstructor(env))
        )   
)
 &&         ((
                info[3].IsBoolean()
        )   
)
 &&         ((
                info[4].IsObject() &&
                    info[4].ToObject().InstanceOf(SNameMaker::GetConstructor(env))
        )   
)


        ) {
                    if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'surface'").ThrowAsJavaScriptException();
                return;
        }
        const class Surface *surface_ = Surface::Unwrap(info[0].ToObject());
        
        const MbSurface & surface =*surface_->_underlying;
        

                 bool sameSurface = info[1].ToBoolean();

                    if (info[2].IsNull() || info[2].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'mergingFlags'").ThrowAsJavaScriptException();
                return;
        }
        const class MergingFlags *mergingFlags_ = MergingFlags::Unwrap(info[2].ToObject());
        
        const MbMergingFlags & mergingFlags =*mergingFlags_->_underlying;
        

                 bool cutAsClosed = info[3].ToBoolean();

                    if (info[4].IsNull() || info[4].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'snMaker'").ThrowAsJavaScriptException();
                return;
        }
        const class SNameMaker *snMaker_ = SNameMaker::Unwrap(info[4].ToObject());
        
        const MbSNameMaker & snMaker =*snMaker_->_underlying;
        


                MbShellCuttingParams *underlying = new MbShellCuttingParams(surface,sameSurface,mergingFlags,cutAsClosed,snMaker);
                if (underlying == NULL) {
                    Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
                    return;
                }
            this->_underlying = underlying;
        } else if (info.Length() == 6&&                ((
                info[0].IsObject() &&
                    info[0].ToObject().InstanceOf(Surface::GetConstructor(env))
        )   
)
 &&         ((
                info[1].IsBoolean()
        )   
)
 &&         ((
                info[2].IsNumber()
        )   
)
 &&         ((
                info[3].IsObject() &&
                    info[3].ToObject().InstanceOf(MergingFlags::GetConstructor(env))
        )   
)
 &&         ((
                info[4].IsBoolean()
        )   
)
 &&         ((
                info[5].IsObject() &&
                    info[5].ToObject().InstanceOf(SNameMaker::GetConstructor(env))
        )   
)


        ) {
                    if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'surface'").ThrowAsJavaScriptException();
                return;
        }
        const class Surface *surface_ = Surface::Unwrap(info[0].ToObject());
        
        const MbSurface & surface =*surface_->_underlying;
        

                 bool sameSurface = info[1].ToBoolean();

                 int part = info[2].ToNumber().Int64Value();

                    if (info[3].IsNull() || info[3].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'mergingFlags'").ThrowAsJavaScriptException();
                return;
        }
        const class MergingFlags *mergingFlags_ = MergingFlags::Unwrap(info[3].ToObject());
        
        const MbMergingFlags & mergingFlags =*mergingFlags_->_underlying;
        

                 bool cutAsClosed = info[4].ToBoolean();

                    if (info[5].IsNull() || info[5].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'snMaker'").ThrowAsJavaScriptException();
                return;
        }
        const class SNameMaker *snMaker_ = SNameMaker::Unwrap(info[5].ToObject());
        
        const MbSNameMaker & snMaker =*snMaker_->_underlying;
        


                MbShellCuttingParams *underlying = new MbShellCuttingParams(surface,sameSurface,part,mergingFlags,cutAsClosed,snMaker);
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

Napi::Object ShellCuttingParams::NewInstance(Napi::Env env, MbShellCuttingParams *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("ShellCuttingParams");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    ShellCuttingParams *unwrapped = ShellCuttingParams::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function ShellCuttingParams::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("ShellCuttingParams");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

        Napi::Value ShellCuttingParams::SetSurfaceProlongType(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "SurfaceProlongType pt is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

            const MbeSurfaceProlongType pt = static_cast<MbeSurfaceProlongType>(info[0].ToNumber().Uint32Value());



_underlying->SetSurfaceProlongType
(
        pt

);



    return env.Undefined();


        }

    Napi::Value ShellCuttingParams::SetSurfaceProlongType_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "SurfaceProlongType pt is required."));
                    return deferred.Promise();
            }


                    const MbeSurfaceProlongType pt = static_cast<MbeSurfaceProlongType>(info[0].ToNumber().Uint32Value());

        ShellCuttingParams_SetSurfaceProlongType_AsyncWorker* asyncWorker = new ShellCuttingParams_SetSurfaceProlongType_AsyncWorker(
_underlying,            deferred
,
                
                pt        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value ShellCuttingParams::AddSurfaceProlongType(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "SurfaceProlongType pt is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

            const MbeSurfaceProlongType pt = static_cast<MbeSurfaceProlongType>(info[0].ToNumber().Uint32Value());



_underlying->AddSurfaceProlongType
(
        pt

);



    return env.Undefined();


        }

    Napi::Value ShellCuttingParams::AddSurfaceProlongType_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "SurfaceProlongType pt is required."));
                    return deferred.Promise();
            }


                    const MbeSurfaceProlongType pt = static_cast<MbeSurfaceProlongType>(info[0].ToNumber().Uint32Value());

        ShellCuttingParams_AddSurfaceProlongType_AsyncWorker* asyncWorker = new ShellCuttingParams_AddSurfaceProlongType_AsyncWorker(
_underlying,            deferred
,
                
                pt        );
        asyncWorker->Queue();
        return deferred.Promise();
    }



    Napi::Value ShellCuttingParams::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }


    ShellCuttingParams_SetSurfaceProlongType_AsyncWorker::ShellCuttingParams_SetSurfaceProlongType_AsyncWorker(
MbShellCuttingParams * _underlying,        Napi::Promise::Deferred const &d
,
                         MbeSurfaceProlongType  pt    )
        :_underlying(_underlying),PromiseWorker(d),
                        pt(pt)
{};

    void ShellCuttingParams_SetSurfaceProlongType_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetSurfaceProlongType(
                        pt
        );



        
        ExitParallelRegion();
    }

    void ShellCuttingParams_SetSurfaceProlongType_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void ShellCuttingParams_SetSurfaceProlongType_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    ShellCuttingParams_AddSurfaceProlongType_AsyncWorker::ShellCuttingParams_AddSurfaceProlongType_AsyncWorker(
MbShellCuttingParams * _underlying,        Napi::Promise::Deferred const &d
,
                         MbeSurfaceProlongType  pt    )
        :_underlying(_underlying),PromiseWorker(d),
                        pt(pt)
{};

    void ShellCuttingParams_AddSurfaceProlongType_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddSurfaceProlongType(
                        pt
        );



        
        ExitParallelRegion();
    }

    void ShellCuttingParams_AddSurfaceProlongType_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void ShellCuttingParams_AddSurfaceProlongType_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

