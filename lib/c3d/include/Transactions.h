// This is a generated file, modify: generate/templates/Transactions.h

#ifndef TRANSACTIONS_H
#define TRANSACTIONS_H

#include <napi.h>
#include <node_api.h>
#include <vector>

#include <creator_transaction.h>

#include "Creator.h"
#include "SpaceItem.h"
#include "PromiseWorker.h"

class Transactions : public
  Napi::ObjectWrap<Transactions>
{
  public:
        static Napi::Object Init(const Napi::Env env, Napi::Object exports);
        static Napi::Object NewInstance(const Napi::Env env, MbTransactions *raw);
        static Napi::Function GetConstructor(Napi::Env env);
        Transactions(const Napi::CallbackInfo& info);

         Napi::Value GetCreatorsCount(const Napi::CallbackInfo& info);
         Napi::Value GetCreatorsCount_async(const Napi::CallbackInfo& info);
         Napi::Value GetCreator(const Napi::CallbackInfo& info);
         Napi::Value GetCreator_async(const Napi::CallbackInfo& info);
         Napi::Value SetCreator(const Napi::CallbackInfo& info);
         Napi::Value SetCreator_async(const Napi::CallbackInfo& info);
         Napi::Value DetachCreator(const Napi::CallbackInfo& info);
         Napi::Value DetachCreator_async(const Napi::CallbackInfo& info);
         Napi::Value AddCreator(const Napi::CallbackInfo& info);
         Napi::Value AddCreator_async(const Napi::CallbackInfo& info);
         Napi::Value GetCreators(const Napi::CallbackInfo& info);
         Napi::Value GetCreators_async(const Napi::CallbackInfo& info);
         Napi::Value DeleteCreator(const Napi::CallbackInfo& info);
         Napi::Value DeleteCreator_async(const Napi::CallbackInfo& info);
         Napi::Value GetActiveCreatorsCount(const Napi::CallbackInfo& info);
         Napi::Value GetActiveCreatorsCount_async(const Napi::CallbackInfo& info);
        Napi::Value Id(const Napi::CallbackInfo& info);

    MbTransactions * _underlying;



  private:

};


  class Transactions_GetCreatorsCount_AsyncWorker : public PromiseWorker {
      public:
          Transactions_GetCreatorsCount_AsyncWorker(
MbTransactions * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Transactions_GetCreatorsCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTransactions * _underlying;
                
                 size_t  _result;
                

        int resultType;
  };


  class Transactions_GetCreator_AsyncWorker : public PromiseWorker {
      public:
          Transactions_GetCreator_AsyncWorker(
MbTransactions * _underlying,            Napi::Promise::Deferred const &d,
                                 size_t  ind);
          virtual ~Transactions_GetCreator_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTransactions * _underlying;                         size_t  ind;

                
                const MbCreator * _result;
                

        int resultType;
  };


  class Transactions_SetCreator_AsyncWorker : public PromiseWorker {
      public:
          Transactions_SetCreator_AsyncWorker(
MbTransactions * _underlying,            Napi::Promise::Deferred const &d,
                                 size_t  ind);
          virtual ~Transactions_SetCreator_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTransactions * _underlying;                         size_t  ind;

                
                 MbCreator * _result;
                

        int resultType;
  };


  class Transactions_DetachCreator_AsyncWorker : public PromiseWorker {
      public:
          Transactions_DetachCreator_AsyncWorker(
MbTransactions * _underlying,            Napi::Promise::Deferred const &d,
                                 size_t  ind);
          virtual ~Transactions_DetachCreator_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTransactions * _underlying;                         size_t  ind;

                
                 MbCreator * _result;
                

        int resultType;
  };


  class Transactions_AddCreator_AsyncWorker : public PromiseWorker {
      public:
          Transactions_AddCreator_AsyncWorker(
MbTransactions * _underlying,            Napi::Promise::Deferred const &d,
                                const MbCreator * creator,
                                 bool  addSame = false);
          virtual ~Transactions_AddCreator_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTransactions * _underlying;                        const MbCreator * creator;
                         bool  addSame= false;

                
                 bool  _result;
                

        int resultType;
  };


  class Transactions_GetCreators_AsyncWorker : public PromiseWorker {
      public:
          Transactions_GetCreators_AsyncWorker(
MbTransactions * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Transactions_GetCreators_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTransactions * _underlying;
                
                 RPArray<MbCreator> * creators;
                

        int resultType;
  };


  class Transactions_DeleteCreator_AsyncWorker : public PromiseWorker {
      public:
          Transactions_DeleteCreator_AsyncWorker(
MbTransactions * _underlying,            Napi::Promise::Deferred const &d,
                                 size_t  ind);
          virtual ~Transactions_DeleteCreator_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTransactions * _underlying;                         size_t  ind;

                
                 bool  _result;
                

        int resultType;
  };


  class Transactions_GetActiveCreatorsCount_AsyncWorker : public PromiseWorker {
      public:
          Transactions_GetActiveCreatorsCount_AsyncWorker(
MbTransactions * _underlying,            Napi::Promise::Deferred const &d);
          virtual ~Transactions_GetActiveCreatorsCount_AsyncWorker() {};

          void Execute() override;
          void Resolve(Napi::Promise::Deferred const &deferred) override;
          void Reject(Napi::Promise::Deferred const &deferred, Napi::Error const &error) override;

      private:
MbTransactions * _underlying;
                
                 size_t  _result;
                

        int resultType;
  };



#endif
