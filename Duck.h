#ifndef DUCK_H
#define DUCK_H

#include <iostream>
using namespace std;

class Duck {
public:
       void quack();
       void swim();
       void fly();
       virtual void display() = 0;
};

#endif
