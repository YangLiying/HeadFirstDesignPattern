#include<iostream>
#include"QuackBehavior.h"
using namespace std;

void Quack::quack()
{
    cout<<"Quack"<<endl;
}

void MuteQuack::quack()
{
    cout <<"<< Silence >>" << endl;
}

void Squeak::quack()
{
    cout << "Squeak"<<endl;
}
