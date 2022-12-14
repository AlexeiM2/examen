#include "linea.h"

float Linea::getD()
{
    d=sqrt(pow(p2->getX()-p1->getX(),2)+pow(p2->getY()-p1->getY(),2));
    return d;
}

Punto *Linea::getP1() const
{
    return p1;
}

Punto *Linea::getP2() const
{
    return p2;
}

string Linea::t_string()
{
    return "L"+to_string(NUM_LINEAS)+"[ "+
            p1->toString()+" - " + p2->toString() + "d= "
            + to_string(getD()) + ", m= " + to_string(getM());
}

float Linea::getM()
{
    m=(p2->getY()-p1->getY())/(p2->getX()-p1->getX());
    return m;
}

Linea::Linea()
{

}

Linea::Linea(Punto *p1, Punto *p2):p1(p1),p2(p2)
{
   Linea::NUM_LINEAS++;
}
