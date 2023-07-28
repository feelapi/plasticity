// This is a generated file, modify: generate/templates/Model.cc

#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::ostringstream

#include "../include/Model.h"

#include "tool_mutex.h"

Napi::Object Model::Init(const Napi::Env env, Napi::Object exports) {
    Napi::Function func = DefineClass(env, "Model", {
        InstanceMethod<&Model::AddItem>("AddItem"),
        InstanceMethod<&Model::AddItem_async>("AddItem_async"),
        InstanceMethod<&Model::ItemsCount>("ItemsCount"),
        InstanceMethod<&Model::ItemsCount_async>("ItemsCount_async"),
        InstanceMethod<&Model::GetItems>("GetItems"),
        InstanceMethod<&Model::GetItems_async>("GetItems_async"),
        InstanceMethod<&Model::DetachItem>("DetachItem"),
        InstanceMethod<&Model::DetachItem_async>("DetachItem_async"),
        InstanceMethod<&Model::DeleteItem>("DeleteItem"),
        InstanceMethod<&Model::DeleteItem_async>("DeleteItem_async"),
        InstanceMethod<&Model::GetItemByName>("GetItemByName"),
        InstanceMethod<&Model::GetItemByName_async>("GetItemByName_async"),
        InstanceMethod<&Model::NearestMesh>("NearestMesh"),
        InstanceMethod<&Model::NearestMesh_async>("NearestMesh_async"),
        InstanceMethod<&Model::GetUseCount>("GetUseCount"),
        InstanceMethod<&Model::GetUseCount_async>("GetUseCount_async"),
        InstanceMethod<&Model::AddRef>("AddRef"),
        InstanceMethod<&Model::AddRef_async>("AddRef_async"),
        InstanceMethod<&Model::SetStyle>("SetStyle"),
        InstanceMethod<&Model::SetStyle_async>("SetStyle_async"),
        InstanceMethod<&Model::GetStyle>("GetStyle"),
        InstanceMethod<&Model::GetStyle_async>("GetStyle_async"),
        InstanceMethod<&Model::SetColor>("SetColor"),
        InstanceMethod<&Model::SetColor_async>("SetColor_async"),
        InstanceMethod<&Model::GetColor>("GetColor"),
        InstanceMethod<&Model::GetColor_async>("GetColor_async"),
        InstanceMethod<&Model::AttributesConvert>("AttributesConvert"),
        InstanceMethod<&Model::AttributesConvert_async>("AttributesConvert_async"),
        InstanceMethod<&Model::GetCreatorsCount>("GetCreatorsCount"),
        InstanceMethod<&Model::GetCreatorsCount_async>("GetCreatorsCount_async"),
        InstanceMethod<&Model::GetCreator>("GetCreator"),
        InstanceMethod<&Model::GetCreator_async>("GetCreator_async"),
        InstanceMethod<&Model::SetCreator>("SetCreator"),
        InstanceMethod<&Model::SetCreator_async>("SetCreator_async"),
        InstanceMethod<&Model::DetachCreator>("DetachCreator"),
        InstanceMethod<&Model::DetachCreator_async>("DetachCreator_async"),
        InstanceMethod<&Model::AddCreator>("AddCreator"),
        InstanceMethod<&Model::AddCreator_async>("AddCreator_async"),
        InstanceMethod<&Model::GetCreators>("GetCreators"),
        InstanceMethod<&Model::GetCreators_async>("GetCreators_async"),
        InstanceMethod<&Model::DeleteCreator>("DeleteCreator"),
        InstanceMethod<&Model::DeleteCreator_async>("DeleteCreator_async"),
        InstanceMethod<&Model::GetActiveCreatorsCount>("GetActiveCreatorsCount"),
        InstanceMethod<&Model::GetActiveCreatorsCount_async>("GetActiveCreatorsCount_async"),
            InstanceMethod<&Model::Id>("Id"),

    });
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Persistent(func);
    exports.Set("Model", func);

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

Model::Model(const Napi::CallbackInfo& info) : Napi::ObjectWrap<Model>(info) {
    Napi::Env env = info.Env();
    if (info.Length() == 1 && info[0].IsString() && info[0].ToString().Utf8Value() == "__skip_js_init__") return;
        if (info.Length() == 0        

        ) {

                MbModel *underlying = new MbModel();
                if (underlying == NULL) {
                    Napi::Error::New(env, "Invalid construction").ThrowAsJavaScriptException();
                    return;
                }
underlying->AddRef();            this->_underlying = underlying;
        } else {
            Napi::Error::New(env, "No matching constructor").ThrowAsJavaScriptException();
            return;
        }
}

Napi::Object Model::NewInstance(Napi::Env env, MbModel *underlying) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Model");
    Napi::Function f = value.As<Napi::Function>();
    Napi::FunctionReference* constructor = new Napi::FunctionReference();
    *constructor = Napi::Weak(f);
    Napi::Object inst = constructor->New({Napi::String::New(env, "__skip_js_init__")});
    Model *unwrapped = Model::Unwrap(inst);
underlying->AddRef();    unwrapped->_underlying = underlying;

    return inst;
}

Napi::Function Model::GetConstructor(Napi::Env env) {
    Napi::Object obj = env.GetInstanceData<Napi::ObjectReference>()->Value();
    Napi::Value value = obj.Get("Model");
    Napi::Function f = value.As<Napi::Function>();
    return f;
}

        Napi::Value Model::AddItem(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Item::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Item item is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'item'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Item *item_ = Item::Unwrap(info[0].ToObject());
        
         MbItem & item =*item_->_underlying;
        

             int n = info[1].ToNumber().Int64Value();



 MbItem * _result = _underlying->AddItem
(
        item
,        info.Length() == 1 || info[1].IsNull() ? c3d::UNDEFINED_SNAME : n

);



    Napi::Value _to;

            if (_result != NULL) {
        _to = Item::NewInstance(env, (MbItem *)_result);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value Model::AddItem_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Item::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Item item is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'item'"));
                return deferred.Promise();
        }
        const class Item *item_ = Item::Unwrap(info[0].ToObject());
        
         MbItem & item =*item_->_underlying;
        

                     int n = info[1].ToNumber().Int64Value();

        Model_AddItem_AsyncWorker* asyncWorker = new Model_AddItem_AsyncWorker(
_underlying,            deferred
,
                
                item,
                
                n        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Model::ItemsCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 size_t  _result = _underlying->ItemsCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Model::ItemsCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Model_ItemsCount_AsyncWorker* asyncWorker = new Model_ItemsCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Model::GetItems(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                    RPArray<MbItem> *items = new RPArray<MbItem>;




_underlying->GetItems
(
        *items

);



    Napi::Value _to;

            Napi::Array arr_items = Napi::Array::New(env);
    for (size_t i = 0; i < items->Count(); i++) {
            arr_items[i] = Item::NewInstance(env,
                
                    (*items)[i]
                
            );
    }
    _to = arr_items;

            return _to;


        }

    Napi::Value Model::GetItems_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Model_GetItems_AsyncWorker* asyncWorker = new Model_GetItems_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Model::DetachItem(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Item::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Item item is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'item'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Item *item_ = Item::Unwrap(info[0].ToObject());
        
         MbItem * item =item_->_underlying;
        

             bool resetName = info[1].ToBoolean();



 bool  _result = _underlying->DetachItem
(
        item
,        info.Length() == 1 || info[1].IsNull() ? true : resetName

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value Model::DetachItem_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Item::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Item item is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'item'"));
                return deferred.Promise();
        }
        const class Item *item_ = Item::Unwrap(info[0].ToObject());
        
         MbItem * item =item_->_underlying;
        

                     bool resetName = info[1].ToBoolean();

        Model_DetachItem_AsyncWorker* asyncWorker = new Model_DetachItem_AsyncWorker(
_underlying,            deferred
,
                
                item,
                
                resetName        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Model::DeleteItem(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Item::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Item item is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'item'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Item *item_ = Item::Unwrap(info[0].ToObject());
        
         MbItem * item =item_->_underlying;
        

             bool resetName = info[1].ToBoolean();



_underlying->DeleteItem
(
        item
,        info.Length() == 1 || info[1].IsNull() ? true : resetName

);



    return env.Undefined();


        }

    Napi::Value Model::DeleteItem_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Item::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Item item is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'item'"));
                return deferred.Promise();
        }
        const class Item *item_ = Item::Unwrap(info[0].ToObject());
        
         MbItem * item =item_->_underlying;
        

                     bool resetName = info[1].ToBoolean();

        Model_DeleteItem_AsyncWorker* asyncWorker = new Model_DeleteItem_AsyncWorker(
_underlying,            deferred
,
                
                item,
                
                resetName        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Model::GetItemByName(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "SimpleName n is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                    MbPath *path = new MbPath;
        MbMatrix3D *from = new MbMatrix3D;


             int n = info[0].ToNumber().Int64Value();



const MbItem * item = _underlying->GetItemByName
(
        n
,        *path
,        *from

);



        Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

            if (item != NULL) {
        _to = Item::NewInstance(env, (MbItem *)item);
    } else {
        _to = env.Null();
    }

        _toReturn.Set(Napi::String::New(env, "item"), _to);
            if (path != NULL) {
        _to = Path::NewInstance(env, (MbPath *)path);
    } else {
        _to = env.Null();
    }

        _toReturn.Set(Napi::String::New(env, "path"), _to);
            if (from != NULL) {
        _to = Matrix3D::NewInstance(env, (MbMatrix3D *)from);
    } else {
        _to = env.Null();
    }

        _toReturn.Set(Napi::String::New(env, "from"), _to);
            return _toReturn;


        }

    Napi::Value Model::GetItemByName_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "SimpleName n is required."));
                    return deferred.Promise();
            }


                     int n = info[0].ToNumber().Int64Value();

        Model_GetItemByName_AsyncWorker* asyncWorker = new Model_GetItemByName_AsyncWorker(
_underlying,            deferred
,
                
                n        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Model::NearestMesh(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "SpaceType sType is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    Napi::Error::New(env, "TopologyType tType is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 2 || !(
              info[2].IsNumber()
)) {
                    Napi::Error::New(env, "PlaneType pType is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 3 || !(
              (info[3].IsObject() && info[3].ToObject().InstanceOf(Axis3D::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Axis3D axis is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 4 || !(
              info[4].IsNumber()
)) {
                    Napi::Error::New(env, "number maxDistance is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }
            if (info.Length() == 5 || !(
              info[5].IsBoolean()
)) {
                    Napi::Error::New(env, "boolean gridPriority is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

                     MbItem * find = NULL;
        SimpleName findName;
         MbRefItem * element = NULL;
        SimpleName elementName;
        MbPath *path = new MbPath;
        MbMatrix3D *from = new MbMatrix3D;


            const MbeSpaceType sType = static_cast<MbeSpaceType>(info[0].ToNumber().Uint32Value());

            const MbeTopologyType tType = static_cast<MbeTopologyType>(info[1].ToNumber().Uint32Value());

            const MbePlaneType pType = static_cast<MbePlaneType>(info[2].ToNumber().Uint32Value());

                if (info[3].IsNull() || info[3].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'axis'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Axis3D *axis_ = Axis3D::Unwrap(info[3].ToObject());
        
        const MbAxis3D & axis =*axis_->_underlying;
        

             double maxDistance = info[4].ToNumber().DoubleValue();

             bool gridPriority = info[5].ToBoolean();



 bool  success = _underlying->NearestMesh
(
        sType
,        tType
,        pType
,        axis
,        maxDistance
,        gridPriority
,        find
,        findName
,        element
,        elementName
,        *path
,        *from

);



        Napi::Object _toReturn = Napi::Object::New(env);
    Napi::Value _to;

            _to = Napi::Boolean::New(env, success);

        _toReturn.Set(Napi::String::New(env, "success"), _to);
            if (find != NULL) {
        _to = Item::NewInstance(env, (MbItem *)find);
    } else {
        _to = env.Null();
    }

        _toReturn.Set(Napi::String::New(env, "find"), _to);
            _to = Napi::Number::New(env, findName);

        _toReturn.Set(Napi::String::New(env, "findName"), _to);
            if (element != NULL) {
        _to = RefItem::NewInstance(env, (MbRefItem *)element);
    } else {
        _to = env.Null();
    }

        _toReturn.Set(Napi::String::New(env, "element"), _to);
            _to = Napi::Number::New(env, elementName);

        _toReturn.Set(Napi::String::New(env, "elementName"), _to);
            if (path != NULL) {
        _to = Path::NewInstance(env, (MbPath *)path);
    } else {
        _to = env.Null();
    }

        _toReturn.Set(Napi::String::New(env, "path"), _to);
            if (from != NULL) {
        _to = Matrix3D::NewInstance(env, (MbMatrix3D *)from);
    } else {
        _to = env.Null();
    }

        _toReturn.Set(Napi::String::New(env, "from"), _to);
            return _toReturn;


        }

    Napi::Value Model::NearestMesh_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "SpaceType sType is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 1 || !(
              info[1].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "TopologyType tType is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 2 || !(
              info[2].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "PlaneType pType is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 3 || !(
              (info[3].IsObject() && info[3].ToObject().InstanceOf(Axis3D::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Axis3D axis is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 4 || !(
              info[4].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number maxDistance is required."));
                    return deferred.Promise();
            }
            if (info.Length() == 5 || !(
              info[5].IsBoolean()
)) {
                    deferred.Reject(Napi::String::New(env, "boolean gridPriority is required."));
                    return deferred.Promise();
            }


                    const MbeSpaceType sType = static_cast<MbeSpaceType>(info[0].ToNumber().Uint32Value());

                    const MbeTopologyType tType = static_cast<MbeTopologyType>(info[1].ToNumber().Uint32Value());

                    const MbePlaneType pType = static_cast<MbePlaneType>(info[2].ToNumber().Uint32Value());

                        if (info[3].IsNull() || info[3].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'axis'"));
                return deferred.Promise();
        }
        const class Axis3D *axis_ = Axis3D::Unwrap(info[3].ToObject());
        
        const MbAxis3D & axis =*axis_->_underlying;
        

                     double maxDistance = info[4].ToNumber().DoubleValue();

                     bool gridPriority = info[5].ToBoolean();

        Model_NearestMesh_AsyncWorker* asyncWorker = new Model_NearestMesh_AsyncWorker(
_underlying,            deferred
,
                
                sType,
                
                tType,
                
                pType,
                
                axis,
                
                maxDistance,
                
                gridPriority        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Model::GetUseCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 refcount_t  _result = _underlying->GetUseCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Model::GetUseCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Model_GetUseCount_AsyncWorker* asyncWorker = new Model_GetUseCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Model::AddRef(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



_underlying->AddRef
(

);



    return env.Undefined();


        }

    Napi::Value Model::AddRef_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Model_AddRef_AsyncWorker* asyncWorker = new Model_AddRef_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Model::SetStyle(const Napi::CallbackInfo& info) {
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

    Napi::Value Model::SetStyle_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "int s is required."));
                    return deferred.Promise();
            }


                     int s = info[0].ToNumber().Int64Value();

        Model_SetStyle_AsyncWorker* asyncWorker = new Model_SetStyle_AsyncWorker(
_underlying,            deferred
,
                
                s        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Model::GetStyle(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 int  _result = _underlying->GetStyle
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Model::GetStyle_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Model_GetStyle_AsyncWorker* asyncWorker = new Model_GetStyle_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Model::SetColor(const Napi::CallbackInfo& info) {
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

    Napi::Value Model::SetColor_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "uint32 c is required."));
                    return deferred.Promise();
            }


                     int c = info[0].ToNumber().Int64Value();

        Model_SetColor_AsyncWorker* asyncWorker = new Model_SetColor_AsyncWorker(
_underlying,            deferred
,
                
                c        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Model::GetColor(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 uint32  _result = _underlying->GetColor
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Model::GetColor_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Model_GetColor_AsyncWorker* asyncWorker = new Model_GetColor_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Model::AttributesConvert(const Napi::CallbackInfo& info) {
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

    Napi::Value Model::AttributesConvert_async(const Napi::CallbackInfo& info) {
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
        

        Model_AttributesConvert_AsyncWorker* asyncWorker = new Model_AttributesConvert_AsyncWorker(
_underlying,            deferred
,
                
                other        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Model::GetCreatorsCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 size_t  _result = _underlying->GetCreatorsCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Model::GetCreatorsCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Model_GetCreatorsCount_AsyncWorker* asyncWorker = new Model_GetCreatorsCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Model::GetCreator(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number ind is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

             size_t ind = info[0].ToNumber().Int64Value();



const MbCreator * _result = _underlying->GetCreator
(
        ind

);



    Napi::Value _to;

            if (_result != NULL) {
        _to = Creator::NewInstance(env, (MbCreator *)_result);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value Model::GetCreator_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number ind is required."));
                    return deferred.Promise();
            }


                     size_t ind = info[0].ToNumber().Int64Value();

        Model_GetCreator_AsyncWorker* asyncWorker = new Model_GetCreator_AsyncWorker(
_underlying,            deferred
,
                
                ind        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Model::SetCreator(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number ind is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

             size_t ind = info[0].ToNumber().Int64Value();



 MbCreator * _result = _underlying->SetCreator
(
        ind

);



    Napi::Value _to;

            if (_result != NULL) {
        _to = Creator::NewInstance(env, (MbCreator *)_result);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value Model::SetCreator_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number ind is required."));
                    return deferred.Promise();
            }


                     size_t ind = info[0].ToNumber().Int64Value();

        Model_SetCreator_AsyncWorker* asyncWorker = new Model_SetCreator_AsyncWorker(
_underlying,            deferred
,
                
                ind        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Model::DetachCreator(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number ind is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

             size_t ind = info[0].ToNumber().Int64Value();



 MbCreator * _result = _underlying->DetachCreator
(
        ind

);



    Napi::Value _to;

            if (_result != NULL) {
        _to = Creator::NewInstance(env, (MbCreator *)_result);
    } else {
        _to = env.Null();
    }

            return _to;


        }

    Napi::Value Model::DetachCreator_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number ind is required."));
                    return deferred.Promise();
            }


                     size_t ind = info[0].ToNumber().Int64Value();

        Model_DetachCreator_AsyncWorker* asyncWorker = new Model_DetachCreator_AsyncWorker(
_underlying,            deferred
,
                
                ind        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Model::AddCreator(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Creator::GetConstructor(env)))
)) {
                    Napi::Error::New(env, "Creator creator is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

                if (info[0].IsNull() || info[0].IsUndefined()) {
                Napi::Error::New(env, "Passed null for non-optional parameter 'creator'").ThrowAsJavaScriptException();
                return env.Undefined();
        }
        const class Creator *creator_ = Creator::Unwrap(info[0].ToObject());
        
        const MbCreator * creator =creator_->_underlying;
        

             bool addSame = info[1].ToBoolean();



 bool  _result = _underlying->AddCreator
(
        creator
,        info.Length() == 1 || info[1].IsNull() ? false : addSame

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value Model::AddCreator_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              (info[0].IsObject() && info[0].ToObject().InstanceOf(Creator::GetConstructor(env)))
)) {
                    deferred.Reject(Napi::String::New(env, "Creator creator is required."));
                    return deferred.Promise();
            }


                        if (info[0].IsNull() || info[0].IsUndefined()) {
                deferred.Reject(Napi::String::New(env, "Passed null for non-optional parameter 'creator'"));
                return deferred.Promise();
        }
        const class Creator *creator_ = Creator::Unwrap(info[0].ToObject());
        
        const MbCreator * creator =creator_->_underlying;
        

                     bool addSame = info[1].ToBoolean();

        Model_AddCreator_AsyncWorker* asyncWorker = new Model_AddCreator_AsyncWorker(
_underlying,            deferred
,
                
                creator,
                
                addSame        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Model::GetCreators(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
                    RPArray<MbCreator> *creators = new RPArray<MbCreator>;




 bool  _result = _underlying->GetCreators
(
        *creators

);


if (_result) {

    Napi::Value _to;

            Napi::Array arr_creators = Napi::Array::New(env);
    for (size_t i = 0; i < creators->Count(); i++) {
            arr_creators[i] = Creator::NewInstance(env,
                
                    (*creators)[i]
                
            );
    }
    _to = arr_creators;

            return _to;

} else {
    std::ostringstream msg;
    msg << "Operation GetCreators failed";
    Napi::Error error = Napi::Error::New(env, msg.str());
    error.Set("isC3dError", true);
    error.ThrowAsJavaScriptException();
    return env.Undefined();
}

        }

    Napi::Value Model::GetCreators_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Model_GetCreators_AsyncWorker* asyncWorker = new Model_GetCreators_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Model::DeleteCreator(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
                        if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    Napi::Error::New(env, "number ind is required.").ThrowAsJavaScriptException();
                    return env.Undefined();
            }

            

             size_t ind = info[0].ToNumber().Int64Value();



 bool  _result = _underlying->DeleteCreator
(
        ind

);



    Napi::Value _to;

            _to = Napi::Boolean::New(env, _result);

            return _to;


        }

    Napi::Value Model::DeleteCreator_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
                    if (info.Length() == 0 || !(
              info[0].IsNumber()
)) {
                    deferred.Reject(Napi::String::New(env, "number ind is required."));
                    return deferred.Promise();
            }


                     size_t ind = info[0].ToNumber().Int64Value();

        Model_DeleteCreator_AsyncWorker* asyncWorker = new Model_DeleteCreator_AsyncWorker(
_underlying,            deferred
,
                
                ind        );
        asyncWorker->Queue();
        return deferred.Promise();
    }
        Napi::Value Model::GetActiveCreatorsCount(const Napi::CallbackInfo& info) {
            Napi::Env env = info.Env();
            
            



 size_t  _result = _underlying->GetActiveCreatorsCount
(

);



    Napi::Value _to;

            _to = Napi::Number::New(env, _result);

            return _to;


        }

    Napi::Value Model::GetActiveCreatorsCount_async(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        Napi::Promise::Deferred deferred = Napi::Promise::Deferred::New(env);
        

        Model_GetActiveCreatorsCount_AsyncWorker* asyncWorker = new Model_GetActiveCreatorsCount_AsyncWorker(
_underlying,            deferred
        );
        asyncWorker->Queue();
        return deferred.Promise();
    }



    Napi::Value Model::Id(const Napi::CallbackInfo &info) {
        Napi::Env env = info.Env();
        return Napi::BigInt::New(env, (uint64_t)(uintptr_t)_underlying);
    }

Model::~Model() {
    // std::cout << "calling ::DeleteItem on Model for " << this->_underlying->GetUseCount() << "\n";
    ::DeleteItem(this->_underlying);
}

    Model_AddItem_AsyncWorker::Model_AddItem_AsyncWorker(
MbModel * _underlying,        Napi::Promise::Deferred const &d
,
                         MbItem & item,
                         SimpleName  n    )
        :_underlying(_underlying),PromiseWorker(d),
                        item(item)
,
                        n(n)
{};

    void Model_AddItem_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbItem * _result = _underlying->AddItem(
                        item
,                        n
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Model_AddItem_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbItem * _result = this->_result;
                if (_result != NULL) {
        _to = Item::NewInstance(env, (MbItem *)_result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void Model_AddItem_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Model_ItemsCount_AsyncWorker::Model_ItemsCount_AsyncWorker(
MbModel * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Model_ItemsCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         size_t  _result = _underlying->ItemsCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Model_ItemsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             size_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Model_ItemsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Model_GetItems_AsyncWorker::Model_GetItems_AsyncWorker(
MbModel * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Model_GetItems_AsyncWorker::Execute() {
        EnterParallelRegion();

                RPArray<MbItem> *items = new RPArray<MbItem>;


        
        _underlying->GetItems(
                        *items
        );


                this->items = items;

        
        ExitParallelRegion();
    }

    void Model_GetItems_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             RPArray<MbItem> * items = this->items;
                Napi::Array arr_items = Napi::Array::New(env);
    for (size_t i = 0; i < items->Count(); i++) {
            arr_items[i] = Item::NewInstance(env,
                
                    (*items)[i]
                
            );
    }
    _to = arr_items;

            deferred.Resolve(_to);
    }

    void Model_GetItems_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Model_DetachItem_AsyncWorker::Model_DetachItem_AsyncWorker(
MbModel * _underlying,        Napi::Promise::Deferred const &d
,
                         MbItem * item,
                         bool  resetName    )
        :_underlying(_underlying),PromiseWorker(d),
                        item(item)
,
                        resetName(resetName)
{};

    void Model_DetachItem_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->DetachItem(
                        item
,                        resetName
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Model_DetachItem_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void Model_DetachItem_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Model_DeleteItem_AsyncWorker::Model_DeleteItem_AsyncWorker(
MbModel * _underlying,        Napi::Promise::Deferred const &d
,
                         MbItem * item,
                         bool  resetName    )
        :_underlying(_underlying),PromiseWorker(d),
                        item(item)
,
                        resetName(resetName)
{};

    void Model_DeleteItem_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->DeleteItem(
                        item
,                        resetName
        );



        
        ExitParallelRegion();
    }

    void Model_DeleteItem_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Model_DeleteItem_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Model_GetItemByName_AsyncWorker::Model_GetItemByName_AsyncWorker(
MbModel * _underlying,        Napi::Promise::Deferred const &d
,
                         SimpleName  n    )
        :_underlying(_underlying),PromiseWorker(d),
                        n(n)
{};

    void Model_GetItemByName_AsyncWorker::Execute() {
        EnterParallelRegion();

                MbPath *path = new MbPath;
        MbMatrix3D *from = new MbMatrix3D;


        
        const MbItem * item = _underlying->GetItemByName(
                        n
,                        *path
,                        *from
        );


                this->item = item;
                this->path = path;
                this->from = from;

        
        ExitParallelRegion();
    }

    void Model_GetItemByName_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            Napi::Object _toReturn = Napi::Object::New(env);

                const MbItem * item = this->item;
                    if (item != NULL) {
        _to = Item::NewInstance(env, (MbItem *)item);
    } else {
        _to = env.Null();
    }

                _toReturn.Set(Napi::String::New(env, "item"), _to);
                 MbPath * path = this->path;
                    if (path != NULL) {
        _to = Path::NewInstance(env, (MbPath *)path);
    } else {
        _to = env.Null();
    }

                _toReturn.Set(Napi::String::New(env, "path"), _to);
                 MbMatrix3D * from = this->from;
                    if (from != NULL) {
        _to = Matrix3D::NewInstance(env, (MbMatrix3D *)from);
    } else {
        _to = env.Null();
    }

                _toReturn.Set(Napi::String::New(env, "from"), _to);

            deferred.Resolve(_toReturn);
    }

    void Model_GetItemByName_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Model_NearestMesh_AsyncWorker::Model_NearestMesh_AsyncWorker(
MbModel * _underlying,        Napi::Promise::Deferred const &d
,
                         MbeSpaceType  sType,
                         MbeTopologyType  tType,
                         MbePlaneType  pType,
                        const MbAxis3D & axis,
                         double  maxDistance,
                         bool  gridPriority    )
        :_underlying(_underlying),PromiseWorker(d),
                        sType(sType)
,
                        tType(tType)
,
                        pType(pType)
,
                        axis(axis)
,
                        maxDistance(maxDistance)
,
                        gridPriority(gridPriority)
{};

    void Model_NearestMesh_AsyncWorker::Execute() {
        EnterParallelRegion();

                 MbItem * find = NULL;
        SimpleName findName;
         MbRefItem * element = NULL;
        SimpleName elementName;
        MbPath *path = new MbPath;
        MbMatrix3D *from = new MbMatrix3D;


        
         bool  success = _underlying->NearestMesh(
                        sType
,                        tType
,                        pType
,                        axis
,                        maxDistance
,                        gridPriority
,                        find
,                        findName
,                        element
,                        elementName
,                        *path
,                        *from
        );


                this->success = success;
                this->find = find;
                this->findName = findName;
                this->element = element;
                this->elementName = elementName;
                this->path = path;
                this->from = from;

        
        ExitParallelRegion();
    }

    void Model_NearestMesh_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            Napi::Object _toReturn = Napi::Object::New(env);

                 bool  success = this->success;
                    _to = Napi::Boolean::New(env, success);

                _toReturn.Set(Napi::String::New(env, "success"), _to);
                 MbItem * find = this->find;
                    if (find != NULL) {
        _to = Item::NewInstance(env, (MbItem *)find);
    } else {
        _to = env.Null();
    }

                _toReturn.Set(Napi::String::New(env, "find"), _to);
                 SimpleName  findName = this->findName;
                    _to = Napi::Number::New(env, findName);

                _toReturn.Set(Napi::String::New(env, "findName"), _to);
                 MbRefItem * element = this->element;
                    if (element != NULL) {
        _to = RefItem::NewInstance(env, (MbRefItem *)element);
    } else {
        _to = env.Null();
    }

                _toReturn.Set(Napi::String::New(env, "element"), _to);
                 SimpleName  elementName = this->elementName;
                    _to = Napi::Number::New(env, elementName);

                _toReturn.Set(Napi::String::New(env, "elementName"), _to);
                 MbPath * path = this->path;
                    if (path != NULL) {
        _to = Path::NewInstance(env, (MbPath *)path);
    } else {
        _to = env.Null();
    }

                _toReturn.Set(Napi::String::New(env, "path"), _to);
                 MbMatrix3D * from = this->from;
                    if (from != NULL) {
        _to = Matrix3D::NewInstance(env, (MbMatrix3D *)from);
    } else {
        _to = env.Null();
    }

                _toReturn.Set(Napi::String::New(env, "from"), _to);

            deferred.Resolve(_toReturn);
    }

    void Model_NearestMesh_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Model_GetUseCount_AsyncWorker::Model_GetUseCount_AsyncWorker(
MbModel * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Model_GetUseCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         refcount_t  _result = _underlying->GetUseCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Model_GetUseCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             refcount_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Model_GetUseCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Model_AddRef_AsyncWorker::Model_AddRef_AsyncWorker(
MbModel * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Model_AddRef_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AddRef(
        );



        
        ExitParallelRegion();
    }

    void Model_AddRef_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Model_AddRef_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Model_SetStyle_AsyncWorker::Model_SetStyle_AsyncWorker(
MbModel * _underlying,        Napi::Promise::Deferred const &d
,
                         int  s    )
        :_underlying(_underlying),PromiseWorker(d),
                        s(s)
{};

    void Model_SetStyle_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetStyle(
                        s
        );



        
        ExitParallelRegion();
    }

    void Model_SetStyle_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Model_SetStyle_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Model_GetStyle_AsyncWorker::Model_GetStyle_AsyncWorker(
MbModel * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Model_GetStyle_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         int  _result = _underlying->GetStyle(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Model_GetStyle_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             int  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Model_GetStyle_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Model_SetColor_AsyncWorker::Model_SetColor_AsyncWorker(
MbModel * _underlying,        Napi::Promise::Deferred const &d
,
                         uint32  c    )
        :_underlying(_underlying),PromiseWorker(d),
                        c(c)
{};

    void Model_SetColor_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->SetColor(
                        c
        );



        
        ExitParallelRegion();
    }

    void Model_SetColor_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Model_SetColor_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Model_GetColor_AsyncWorker::Model_GetColor_AsyncWorker(
MbModel * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Model_GetColor_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         uint32  _result = _underlying->GetColor(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Model_GetColor_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             uint32  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Model_GetColor_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Model_AttributesConvert_AsyncWorker::Model_AttributesConvert_AsyncWorker(
MbModel * _underlying,        Napi::Promise::Deferred const &d
,
                         MbGrid & other    )
        :_underlying(_underlying),PromiseWorker(d),
                        other(other)
{};

    void Model_AttributesConvert_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        _underlying->AttributesConvert(
                        other
        );



        
        ExitParallelRegion();
    }

    void Model_AttributesConvert_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            deferred.Resolve(env.Undefined());
    }

    void Model_AttributesConvert_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Model_GetCreatorsCount_AsyncWorker::Model_GetCreatorsCount_AsyncWorker(
MbModel * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Model_GetCreatorsCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         size_t  _result = _underlying->GetCreatorsCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Model_GetCreatorsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             size_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Model_GetCreatorsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Model_GetCreator_AsyncWorker::Model_GetCreator_AsyncWorker(
MbModel * _underlying,        Napi::Promise::Deferred const &d
,
                         size_t  ind    )
        :_underlying(_underlying),PromiseWorker(d),
                        ind(ind)
{};

    void Model_GetCreator_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
        const MbCreator * _result = _underlying->GetCreator(
                        ind
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Model_GetCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
            const MbCreator * _result = this->_result;
                if (_result != NULL) {
        _to = Creator::NewInstance(env, (MbCreator *)_result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void Model_GetCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Model_SetCreator_AsyncWorker::Model_SetCreator_AsyncWorker(
MbModel * _underlying,        Napi::Promise::Deferred const &d
,
                         size_t  ind    )
        :_underlying(_underlying),PromiseWorker(d),
                        ind(ind)
{};

    void Model_SetCreator_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbCreator * _result = _underlying->SetCreator(
                        ind
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Model_SetCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbCreator * _result = this->_result;
                if (_result != NULL) {
        _to = Creator::NewInstance(env, (MbCreator *)_result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void Model_SetCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Model_DetachCreator_AsyncWorker::Model_DetachCreator_AsyncWorker(
MbModel * _underlying,        Napi::Promise::Deferred const &d
,
                         size_t  ind    )
        :_underlying(_underlying),PromiseWorker(d),
                        ind(ind)
{};

    void Model_DetachCreator_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         MbCreator * _result = _underlying->DetachCreator(
                        ind
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Model_DetachCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             MbCreator * _result = this->_result;
                if (_result != NULL) {
        _to = Creator::NewInstance(env, (MbCreator *)_result);
    } else {
        _to = env.Null();
    }

            deferred.Resolve(_to);
    }

    void Model_DetachCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Model_AddCreator_AsyncWorker::Model_AddCreator_AsyncWorker(
MbModel * _underlying,        Napi::Promise::Deferred const &d
,
                        const MbCreator * creator,
                         bool  addSame    )
        :_underlying(_underlying),PromiseWorker(d),
                        creator(creator)
,
                        addSame(addSame)
{};

    void Model_AddCreator_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->AddCreator(
                        creator
,                        addSame
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Model_AddCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void Model_AddCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Model_GetCreators_AsyncWorker::Model_GetCreators_AsyncWorker(
MbModel * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Model_GetCreators_AsyncWorker::Execute() {
        EnterParallelRegion();

                RPArray<MbCreator> *creators = new RPArray<MbCreator>;


        
         bool  _result = _underlying->GetCreators(
                        *creators
        );

        if (_result) {

                this->creators = creators;

                } else {
            std::ostringstream msg;
            msg << "Operation GetCreators failed";
            SetError(msg.str());
        }

        ExitParallelRegion();
    }

    void Model_GetCreators_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             RPArray<MbCreator> * creators = this->creators;
                Napi::Array arr_creators = Napi::Array::New(env);
    for (size_t i = 0; i < creators->Count(); i++) {
            arr_creators[i] = Creator::NewInstance(env,
                
                    (*creators)[i]
                
            );
    }
    _to = arr_creators;

            deferred.Resolve(_to);
    }

    void Model_GetCreators_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Model_DeleteCreator_AsyncWorker::Model_DeleteCreator_AsyncWorker(
MbModel * _underlying,        Napi::Promise::Deferred const &d
,
                         size_t  ind    )
        :_underlying(_underlying),PromiseWorker(d),
                        ind(ind)
{};

    void Model_DeleteCreator_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         bool  _result = _underlying->DeleteCreator(
                        ind
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Model_DeleteCreator_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             bool  _result = this->_result;
                _to = Napi::Boolean::New(env, _result);

            deferred.Resolve(_to);
    }

    void Model_DeleteCreator_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }
    Model_GetActiveCreatorsCount_AsyncWorker::Model_GetActiveCreatorsCount_AsyncWorker(
MbModel * _underlying,        Napi::Promise::Deferred const &d
    )
        :_underlying(_underlying),PromiseWorker(d){};

    void Model_GetActiveCreatorsCount_AsyncWorker::Execute() {
        EnterParallelRegion();

        

        
         size_t  _result = _underlying->GetActiveCreatorsCount(
        );


                this->_result = _result;

        
        ExitParallelRegion();
    }

    void Model_GetActiveCreatorsCount_AsyncWorker::Resolve(Napi::Promise::Deferred const &deferred) {
        Napi::Env env = deferred.Env();
            Napi::Value _to;
             size_t  _result = this->_result;
                _to = Napi::Number::New(env, _result);

            deferred.Resolve(_to);
    }

    void Model_GetActiveCreatorsCount_AsyncWorker::Reject(Napi::Promise::Deferred const &deferred, Napi::Error const & error) {
        Napi::Env env = deferred.Env();
        error.Value().Set("code", Napi::Number::New(env, this->resultType));
        error.Value()["isC3dError"] = true;
        deferred.Reject(error.Value());
    }

