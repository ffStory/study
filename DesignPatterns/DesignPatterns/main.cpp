//
//  main.cpp
//  DesignPatterns
//
//  Created by lilithgames on 2021/5/1.
//  Copyright © 2021 lilithgames. All rights reserved.
//

#include <iostream>
#include "Singleton.h"
#include "Prototype.h"
#include "Command.h"
#include "Observer.h"
#include "Proxy.h"
#include "FactoryMethod.h"
#include "AbstractFactory.h"
#include "Adapter.h"
using namespace std;

void testSingleton(){
    Singleton *singleton = Singleton::GetInstance();
    Singleton *singleton2 = Singleton::GetInstance();
    cout<<singleton <<" "<< singleton2<<endl;
}

void testPrototype(){
    Prototype *p = new PrototypeTest(1);
    Prototype *p1 = p->Clone();
    p->print();
    p1->print();
    delete p;
    delete p1;
}

void testCommand(){
    Invoker* invoker = new Invoker();
    StartCommand *sc = new StartCommand();
    FinishCommand *fc = new FinishCommand();
    invoker->SetCommand(sc, fc);
    invoker->Process();
}
void testObserver(){
    Subject *subject = new Subject;
    Observer *observer1 = new Observer(*subject);
    Observer *observer2 = new Observer(*subject);
    Observer *observer3 = new Observer(*subject);

    subject->CreateMessage();
}

void testProxy(){
    RealAction *action = new RealAction();
    Proxy *proxy = new Proxy(action);
    proxy->Request();
    
    delete action;
    delete proxy;
}

void testFactoryMethod(){
    SimpleFatory *factoryA = new SimpleFatoryA();
    cout<< factoryA->GetProduct()->Operation() <<endl;;
    SimpleFatory* factoryB = new SimpleFatoryB();
    cout<< factoryB->GetProduct()->Operation() <<endl;;

    delete factoryA;
    delete factoryB;
}

void testAbstractFactory(){
    AncientShip *as = new AncientShip();
    as->CreateFactoryAge()->printAge();
    as->CreateFactoryehicle()->printVehicle();
    
    cout<<"------------"<<endl;
    
    AncientCar *ac = new AncientCar();
    ac->CreateFactoryAge()->printAge();
    ac->CreateFactoryehicle()->printVehicle();
    
     cout<<"------------"<<endl;
     
     ModernShip *ms = new ModernShip();
     ms->CreateFactoryAge()->printAge();
     ms->CreateFactoryehicle()->printVehicle();
    
     cout<<"------------"<<endl;
     
     ModernCar *mc = new ModernCar();
     mc->CreateFactoryAge()->printAge();
     mc->CreateFactoryehicle()->printVehicle();
}

void testAdapter(){
    Target *target = new Target;
    Adaptee *adaptee = new Adaptee;
    Adapter *adapter = new Adapter(adaptee);
    cout<<adapter->Request()<<endl;
}
int main(int argc, const char * argv[]) {
    testAdapter();
    return 0;
}
