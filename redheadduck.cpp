#include "redheadduck.h"

RedheadDuck::RedheadDuck()
{
    quackBehavior = new Quack();
    flyBehavior = new FlyWithWings();
}

void RedheadDuck::display() {
     cout << "I'm a redhead duck" << endl;
}

