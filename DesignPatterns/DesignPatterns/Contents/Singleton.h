//
//  Singleton.h
//  DesignPatterns
//
//  Created by lilithgames on 2021/5/1.
//  Copyright © 2021 lilithgames. All rights reserved.
//

#ifndef Singleton_h
#define Singleton_h

/**
 单例模式
 保证一个类只有一个实例， 并提供一个访问该实例的全局函数
 
 在类中添加一个私有静态成员变量用于保存单例实例。
 声明一个公有静态构建方法用于获取单例实例。
 将类的构造函数设为私有。 类的静态方法仍能调用构造函数， 但是其他对象不能调用。
 */

class Singleton
{
private:
    //私有构造函数，防止外部new 对象
    Singleton()
    {
    }
    //定义静态类成员变量
    static Singleton* singleton_;

public:

    //删除拷贝构造
    Singleton(Singleton &other) = delete;

    //删除赋值
    void operator=(const Singleton &) = delete;

    //静态函数，提供访问接口
    static Singleton *GetInstance(){
        if(singleton_==nullptr){
            singleton_ = new Singleton();
        }
        return singleton_;
    }

};
Singleton* Singleton::singleton_= nullptr;;


#endif /* Singleton_h */
