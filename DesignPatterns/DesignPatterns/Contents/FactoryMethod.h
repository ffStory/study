//
//  FactoryMethod.h
//  DesignPatterns
//
//  Created by lilithgames on 2021/5/1.
//  Copyright © 2021 lilithgames. All rights reserved.
//
/**
 简单工厂模式
 先定义产品和工厂通用接口
 每个产品类对应一个工厂类
 
 获得产品自己不创建，通过创建对应产品工厂获得对应产品
 */

#ifndef FactoryMethod_h
#define FactoryMethod_h

class Product {
public:
    virtual ~Product() {}
    virtual std::string Operation() const = 0;
};

class ProductA : public Product {
public:
    std::string Operation() const override {
        return "{Result of the ConcreteProduct1}";
    }
};
class ProductB : public Product {
public:
    std::string Operation() const override {
        return "{Result of the ConcreteProduct2}";
    }
};

class SimpleFatory {
 public:
    virtual Product* GetProduct() const = 0;
};

class SimpleFatoryA : public SimpleFatory {
public:
    Product* GetProduct() const override {
      return new ProductA();
    }
};

class SimpleFatoryB : public SimpleFatory {
public:
    Product* GetProduct() const override {
      return new ProductB();
    }
};
#endif /* FactoryMethod_h */
