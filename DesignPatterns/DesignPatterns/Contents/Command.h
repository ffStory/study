//
//  Command.h
//  DesignPatterns
//
//  Created by lilithgames on 2021/5/1.
//  Copyright © 2021 lilithgames. All rights reserved.
//

#ifndef Command_h
#define Command_h
/**
 命令模式
 将请求或简单操作转换为一个对象。将其放入队列中可以延迟运行
 UI和逻辑的分类。我不管Command的来源，我只管关系他的对象。
 这就是很多软件既有UI操作又提供命令行工具。
 */

class Command {
public:
    virtual ~Command() {
    }
    virtual void Execute() const = 0;
};

class StartCommand : public Command {
public:
  void Execute() const override {
      std::cout << "command start" <<std::endl;;
  }
};

class FinishCommand : public Command {
public:
  void Execute() const override {
      std::cout << "command finish" <<std::endl;;
  }
};

class Invoker{
private:
    Command *startC;
    Command *finishC;
public:
    ~Invoker(){
        delete startC;
        delete finishC;
    }
    void SetCommand(Command *sc, Command *fc){
        startC = sc;
        finishC = fc;
    }
    
    void Process(){
        startC->Execute();
        std::cout<<"do something"<<std::endl;
        finishC->Execute();
    }
};

#endif /* Command_h */
