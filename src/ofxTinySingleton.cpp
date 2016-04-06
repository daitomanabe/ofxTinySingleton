//
//  ofxTinySingleton.cpp
//  ofxTinySingletonExample
//
//  Created by rzmpro14 on 4/6/16.
//
//

#include "ofxTinySingleton.h"

#include <list>
#include <mutex>

class finalizers_storage_type{
public:
    std::list<finalizers_singleton::FinalizerFunc> finalizer_list;
    std::mutex mutex;
    ~finalizers_storage_type(){
        for (std::list<finalizers_singleton::FinalizerFunc>::reverse_iterator w = finalizer_list.rbegin(); w != finalizer_list.rend(); ++w)
        {
            auto func = *w;
            func();
            *w = nullptr;
        }
    }
};


void finalizers_singleton::add(FinalizerFunc func){
    static finalizers_storage_type finalizers_storage;
    // std::lock_guard<std::mutex> guard(finalizers_storage.mutex);
    finalizers_storage.finalizer_list.push_back(func);
}