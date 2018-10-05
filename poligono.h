#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"

class Poligono{

private:
    Point vert[100];
    int n=0;
public:

    Poligono(Point p[100],int quant);

    Poligono();

    ~Poligono();

    void setV(Point p);

    int getV();

    float area_poligono();

    void translada(float a,float b);

    void rotaciona(double teta,Point x);

    void imprime_poligono();

};

#endif // POLIGONO_H
