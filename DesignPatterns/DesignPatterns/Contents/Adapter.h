//
//  Adapter.hpp
//  DesignPatterns
//
//  Created by WF on 2021/5/2.
//  Copyright © 2021 lilithgames. All rights reserved.
//
/**
 适配器模式
 适配器可担任两个对象间的封装器， 它会接收对于一个对象的调用， 并将其转换为另一个对象可识别的格式和接口。
 作为一个中间商，把一个对象的参数改为d另一个对象接口的吻合参数
 */

#ifndef Adapter_h
#define Adapter_h

#include <stdio.h>

class Target {
public:
    virtual ~Target() = default;

    virtual std::string Request() const {
      return "Target: The default target's behavior.";
    }
};

class Adaptee {
public:
    std::string SpecificRequest() const {
      return "Adaptee: ";
    }
};

//适配器
class Adapter : public Target {
private:
    Adaptee *adaptee_;

public:
    Adapter(Adaptee *adaptee) : adaptee_(adaptee) {}
    
    std::string Request() const override {
        std::string to_reverse = this->adaptee_->SpecificRequest();
        return "Adapter: (TRANSLATED) " + to_reverse;
    }
};

#endif /* Adapter_h */
