// This is a generated file, modify: generate/templates/SweptData.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/SweptData.h"

#include "tool_mutex.h"

Napi::Object SweptData::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "SweptData", {
            InstanceMethod<&SweptData::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("SweptData", func);


    return exports;
}

SweptData::SweptData(const Napi::CallbackInfo& info) : Napi::ObjectWrap<SweptData>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        if (info.Length() == 0        

        ) {

                MbSweptData *underlying = new MbSweptData();
                if (underlying == NULL) {
                    Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
                    return;
                }
            this->_underlying = underlying;
        } else if (info.Length() == 2&&                ((
                info[0].IsObject() &&
                    info[0].ToObject().InstanceOf(Placement3D::GetConstructor(env))
        )   
)
 &&         ((
                info[1].IsObject() &&
                    info[1].ToObject().InstanceOf(Contour::GetConstructor(env))
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
        
         MbContour & contour =*contour_->_underlying;
        


                MbSweptData *underlying = new MbSweptData(place,contour);
                if (underlying == NULL) {
                    Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
                    return;
                }
            this->_underlying = underlying;
        } else if (info.Length() == 2&&                ((
                info[0].IsObject() &&
                    info[0].ToObject().InstanceOf(Surface::GetConstructor(env))
        )   
)
 &&         ((
                info[1].IsArray()
        )   
)


        ) {
                    if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'surface'").ThrowAsJavaScriptException();
                return;
        }
        const class Surface *surface_ = Surface::Unwrap(info[0].ToObject());
        
         MbSurface & surface =*surface_->_underlying;
        

                    RPArray<MbContour>  contours;
if (!(info[1].IsNull() || info[1].IsUndefined())) {
    const Napi::Array contours_ = Napi::Array(env, info[1]);
        contours =  RPArray<MbContour>(contours_.Length(), 1);

    for (size_t i = 0; i < contours_.Length(); i++) {
        if (contours_[i].IsNull() || contours_[i].IsUndefined()) {
            std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i << "]. This is probably a mistake, so skipping\n";
            continue;
        }
            if (!contours_[i].IsObject() || !contours_[i].ToObject().InstanceOf(Contour::GetConstructor(env))) {
                    Napi::Error::New(env, "Contour contours is required.").ThrowAsJavaScriptException();
                    return;
            } else {
                contours.Add(Contour::Unwrap(contours_[i].ToObject())->_underlying);
            }
    }
}



                MbSweptData *underlying = new MbSweptData(surface,contours);
                if (underlying == NULL) {
                    Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
                    return;
                }
            this->_underlying = underlying;
        } else if (info.Length() == 1&&                ((
                info[0].IsObject() &&
                    info[0].ToObject().InstanceOf(Curve3D::GetConstructor(env))
        )   
)


        ) {
                    if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'curve3d'").ThrowAsJavaScriptException();
                return;
        }
        const class Curve3D *curve3d_ = Curve3D::Unwrap(info[0].ToObject());
        
         MbCurve3D & curve3d =*curve3d_->_underlying;
        


                MbSweptData *underlying = new MbSweptData(curve3d);
                if (underlying == NULL) {
                    Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
                    return;
                }
            this->_underlying = underlying;
        } else if (info.Length() == 1&&                ((
                info[0].IsArray()
        )   
)


        ) {
                    RPArray<MbContour3D>  contours3d;
if (!(info[0].IsNull() || info[0].IsUndefined())) {
    const Napi::Array contours3d_ = Napi::Array(env, info[0]);
        contours3d =  RPArray<MbContour3D>(contours3d_.Length(), 1);

    for (size_t i = 0; i < contours3d_.Length(); i++) {
        if (contours3d_[i].IsNull() || contours3d_[i].IsUndefined()) {
            std::cerr << __FILE__ << ":" << __LINE__ << " warning: Passed an array with a null element at [" << i << "]. This is probably a mistake, so skipping\n";
            continue;
        }
            if (!contours3d_[i].IsObject() || !contours3d_[i].ToObject().InstanceOf(Contour3D::GetConstructor(env))) {
                    Napi::Error::New(env, "Contour3D contours3d is required.").ThrowAsJavaScriptException();
                    return;
            } else {
                contours3d.Add(Contour3D::Unwrap(contours3d_[i].ToObject())->_underlying);
            }
    }
}



                MbSweptData *underlying = new MbSweptData(contours3d);
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

Napi::Object SweptData::NewInstance(Napi::Env env, MbSweptData *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("SweptData");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    SweptData *unwrapped = SweptData::Unwrap(inst);
    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function SweptData::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("SweptData");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}




    Napi::Value SweptData::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }



