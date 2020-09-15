#include "MallardDuck.h"

MallardDuck::MallardDuck()
{
    quackBehavior = new Quack();
    flyBehavior = new FlyWithWings();
}

void MallardDuck::display() {
     cout << "I'm a MallardDuck" << endl;
}
