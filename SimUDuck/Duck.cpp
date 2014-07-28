#include <iostream>
#include "Duck.h"
using namespace std;

void Duck::performFly()
{
    flyBehavior->fly();
}

void Duck::performQuack()
{
    quackBehavior->quack();
}

void Duck::display()
{
    cout << "I'm a virtual duck" << endl;
}

void Duck::swim()
{
    cout<<"All ducks float, even decoys!"<<endl;
}

MallardDuck::MallardDuck()
{
    quackBehavior = new Quack();
    flyBehavior = new FlyWithWings();
}

void MallardDuck:: display()
{
    cout << "I'm a real Mallard duck" <<endl;
}

void MallardDuck::otherDisplay()
{
    cout << "otherDisplay" << endl;
}
