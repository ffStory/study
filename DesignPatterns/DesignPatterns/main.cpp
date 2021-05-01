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

int main(int argc, const char * argv[]) {

    testCommand();
    return 0;
}
