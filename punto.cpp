#include "punto.h"

int Punto::getX() const
{
    return x;
}

int Punto::getY() const
{
    return y;
}

string Punto::toString()
{
return "X: " + to_string(getX()) + "Y: " + to_string(getY()) + "\n\n";
}

Punto::Punto()
{

}
