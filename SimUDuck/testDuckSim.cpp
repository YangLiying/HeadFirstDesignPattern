#include"Duck.h"

int main()
{
    Duck* mallard = new MallardDuck();
    mallard->performQuack();
    mallard->performFly();
    mallard->display();

    return 0;
}
