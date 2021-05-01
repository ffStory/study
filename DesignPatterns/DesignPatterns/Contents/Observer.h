//
//  Observer.h
//  DesignPatterns
//
//  Created by lilithgames on 2021/5/1.
//  Copyright © 2021 lilithgames. All rights reserved.
//

#ifndef Observer_h
#define Observer_h
#include <list>
#include <string>


class IObserver {
public:
    virtual ~IObserver(){};
    virtual void Update() = 0;
};

class ISubject {
public:
    virtual ~ISubject(){};
    virtual void Attach(IObserver *observer) = 0;
    virtual void Detach(IObserver *observer) = 0;
    virtual void Notify() = 0;
};

class Subject : public ISubject {
public:
    void Attach(IObserver *observer) override {
      list_observer_.push_back(observer);
    }
    
    void Detach(IObserver *observer) override {
      list_observer_.remove(observer);
    }
    
    void Notify() override {
      std::list<IObserver *>::iterator iterator = list_observer_.begin();
      while (iterator != list_observer_.end()) {
        (*iterator)->Update();
        ++iterator;
      }
    }
    void CreateMessage(std::string message = "Empty") {
      this->message_ = message;
      Notify();
    }
private:
    std::list<IObserver *> list_observer_;
    std::string message_;
};

class Observer : public IObserver {
public:
    Observer(Subject &subject) : subject_(subject) {
      this->subject_.Attach(this);
    }

  void Update() override {
      std::cout<<"update"<<std::endl;
  }
private:
    Subject &subject_;
};
#endif /* Observer_h */
