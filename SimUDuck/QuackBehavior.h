class QuackBehavior
{
public:
    virtual void quack()=0;
};

class Quack:public QuackBehavior
{
public:
    virtual void quack();
};

class MuteQuack:public QuackBehavior
{
public:
    virtual void quack();
};

class Squeak:public QuackBehavior
{
public:
    virtual void quack();
};

