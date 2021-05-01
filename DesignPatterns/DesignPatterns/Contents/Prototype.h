//
//  Prototype.h
//  DesignPatterns
//
//  Created by lilithgames on 2021/5/1.
//  Copyright © 2021 lilithgames. All rights reserved.
//

#ifndef Prototype_h
#define Prototype_h
using namespace std;
/**
 原型模式
 克 隆一个已有的类的实例
 如何涉及的深拷贝。记得自己实现拷贝构造、赋值运算符重载、析构函数
 */

class Prototype {
public:
    Prototype() {}
    virtual ~Prototype() {}
    virtual Prototype *Clone() const = 0;
    virtual void print() = 0;
};

class PrototypeTest : public Prototype {
public:
    PrototypeTest(int v){
        value = v;
    }
    PrototypeTest(const PrototypeTest& obj){
        value = obj.value;
    }
    PrototypeTest *Clone() const override {
        return new PrototypeTest(*this);
    }
    
    void print() override{
        cout<<"value:" << value<<endl;
    }
private:
    int value;
};

#endif /* Prototype_h */
