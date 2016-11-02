//
//  ofxTinySingleton.hpp
//  ofxTinySingletonExample
//
//  Created by rzmpro14 on 4/6/16.
//  Thank you codementor
//

#ifndef ofxTinySingleton_hpp
#define ofxTinySingleton_hpp

#define $TS(Class) (ofxTinySingleton<Class>::get_instance())

#include <stdio.h>
#include <assert.h>
#include <mutex>
#include <memory>
#include <functional>


class finalizers_singleton
{
public:
    
    typedef std::function<void()> FinalizerFunc;    
    static void add(FinalizerFunc func);
    
};

template <typename ClassType>
class ofxTinySingleton final
{
public:
    static ClassType& get_instance()
    {
        static std::shared_ptr<ClassType> static_instance = std::make_shared<ClassType>();
        static ClassType* ptr = static_instance.get();
        static std::once_flag add_to_finalizers_flag;
        std::shared_ptr<ClassType>& local_instance_ref = static_instance;
        std::call_once(add_to_finalizers_flag, [&local_instance_ref](){
            auto func_lambda = [](std::shared_ptr<ClassType> instance){};
            std::function<void()> func = std::bind(func_lambda, local_instance_ref);
            finalizers_singleton::add(func);
            local_instance_ref.reset();
        });
        return *ptr;
    }
};

#endif /* ofxTinySingleton_hpp */
