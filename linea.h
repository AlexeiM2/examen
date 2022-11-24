#ifndef LINEA_H
#define LINEA_H

#include "punto.h"
#include <cmath>
class Linea : public Punto
{
private:
    float d;
    float m;
    static int NUM_LINEAS;
    Punto *p1;
    Punto *p2;
public:
    Linea();
    Linea(Punto *p1 ,Punto *p2 );
    float getD();
    Punto *getP1() const;
    Punto *getP2() const;
    string t_string();
    float getM();
};

#endif // LINEA_H
