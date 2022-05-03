#include <QCoreApplication>
#include "lesson01_vector2d/vector2d.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Vector2d vector(1,1);
    return a.exec();
}
