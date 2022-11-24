#include <iostream>
#include "linea.h"
using namespace std;
int NUM_LINEAS=0;
int main()
{
    Punto p1(2,3);
    Punto p2(5,8);
    cout <<p1.toString()<<"\n"<< p2.toString();
    cout << "1750807602\n ALEXANDRO MENDOZA\ncorreo amendozap2@est.ups.edu.ec\n fecha: 24/11/2022\n!";
    Linea l(Punto p1,Punto p2);
    //11653cout << l.t_string();
    return 0;
}
