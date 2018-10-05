#include <iostream>
#include "point.h"
#include "poligono.h"
#include "retangulo.h"
#include <cmath>

using namespace std;

int main()
{
    Point p(-1,2.5);
    Retangulo ret(0,0,4,3);
    ret.imprime_poligono();
    cout<<"Area do retangulo :"<<ret.area_poligono()<<endl;
    ret.translada(-3,4);
    cout<<"Area do retangulo :"<<ret.area_poligono()<<endl;
    ret.rotaciona(30,p);
    ret.imprime_poligono();
    return 0;
}

