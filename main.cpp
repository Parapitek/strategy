#include <QCoreApplication>
#include "Duck.h"
#include "redheadduck.h"
#include "rubberduck.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Duck *d1 = new RedheadDuck();
    d1->display();
    d1->performQuack();
    d1->performFly();

    return a.exec();
}
