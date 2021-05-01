//
//  AbstractFactory.h
//  DesignPatterns
//
//  Created by lilithgames on 2021/5/1.
//  Copyright © 2021 lilithgames. All rights reserved.
//

#ifndef AbstractFactory_h
#define AbstractFactory_h

//时代
class AbstractAge {
public:
    virtual ~AbstractAge(){};
    virtual void printAge() const = 0;
};

class AncientAge: public AbstractAge{
public:
    void printAge() const override {
        std::cout<<"古代时期"<<std::endl;
    }
};

class ModernAge: public AbstractAge{
public:
    void printAge() const override {
        std::cout<<"现代时期"<<std::endl;
    }
};

//交通
class AbstractVehicle {
public:
    virtual ~AbstractVehicle(){};
    virtual void printVehicle() const = 0;
};

class CarVehicle: public AbstractVehicle{
public:
    void printVehicle() const override {
        std::cout<<"车辆"<<std::endl;
    }
};

class ShipVehicle: public AbstractVehicle{
public:
    void printVehicle() const override {
      std::cout<<"船舶"<<std::endl;
    }
};

class AbstractFactory {
public:
    virtual AbstractAge *CreateFactoryAge() const = 0;
    virtual AbstractVehicle *CreateFactoryehicle() const = 0;
};

//古代车辆
class AncientCar: public AbstractFactory {
public:
    AbstractAge *CreateFactoryAge() const override{
        return new AncientAge();
    }
    
    AbstractVehicle *CreateFactoryehicle() const override{
        return new CarVehicle();
    }
};

//现代车辆
class ModernCar: public AbstractFactory {
public:
    AbstractAge *CreateFactoryAge() const override{
        return new ModernAge();
    }
    
    AbstractVehicle *CreateFactoryehicle() const override{
        return new CarVehicle();
    }
};

//现代船舶
class AncientShip: public AbstractFactory {
public:
    AbstractAge *CreateFactoryAge() const override{
        return new AncientAge();
    }
    
    AbstractVehicle *CreateFactoryehicle() const override{
        return new ShipVehicle();
    }
};

//现代船舶
class ModernShip: public AbstractFactory {
public:
    AbstractAge *CreateFactoryAge() const override{
        return new ModernAge();
    }
    
    AbstractVehicle *CreateFactoryehicle() const override{
        return new ShipVehicle();
    }
};

#endif /* AbstractFactory_h */
