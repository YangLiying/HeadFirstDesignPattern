#include"FlyBehavior.h"
#include"QuackBehavior.h"

class Duck{
protected:
    FlyBehavior* flyBehavior;
    QuackBehavior* quackBehavior;
public:
    virtual void display();
    void performFly();
    void performQuack();
    void swim();
};

class MallardDuck:public Duck
{
public:
    MallardDuck();
    virtual void display();
    void otherDisplay();
};
