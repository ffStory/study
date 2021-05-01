//
//  Proxy.h
//  DesignPatterns
//
//  Created by lilithgames on 2021/5/1.
//  Copyright © 2021 lilithgames. All rights reserved.
//

#ifndef Proxy_h
#define Proxy_h
/**
 代理模式
 特点就是 委托类和代理类实现相同的接口
 */

class Action {
public:
    virtual void Request() const = 0;
};

class RealAction : public Action {
public:
    virtual void Request() const{
        
    }
};

class Proxy : public Subject {

private:
    RealAction *real_action_;

    bool CheckAccess() const {
      std::cout << "Proxy: Checking access prior to firing a real request.\n";
      return true;
    }
    void LogAccess() const {
      std::cout << "Proxy: Logging the time of request.\n";
    }

public:
    Proxy(RealAction *real_subject) {
        real_action_ = real_subject;
    }
    
    void Request() const {
        if (this->CheckAccess()) {
            this->real_action_->Request();
            this->LogAccess();
        }
    }
};
#endif /* Proxy_h */
