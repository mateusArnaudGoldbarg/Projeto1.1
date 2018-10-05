#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"
#include "point.h"

class Retangulo: public Poligono
{
private:
    float x;
    float y;
    float l;
    float h;

public:

    Retangulo(float a,float b, float larg,float altura);

    Retangulo();
    ~Retangulo();

    void setX(float ax);

    void setY(float ay);

    void setL(float al);

    void setH(float ah);

    float getX();

    float getY();

    float getL();

    float getH();
};

#endif // RETANGULO_H
