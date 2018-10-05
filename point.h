#ifndef POINT_H
#define POINT_H



class Point{
public:
    float x;
    float y;
public:

    Point(float a=0,float b=0);
    ~Point();


    void setX(float a);

    void setY(float b);

    void setXY(float a,float b);

    float getX();

    float getY();

    Point add(Point p1);

    Point sub(Point p1);

    float norma();

    void translada(float a, float b);

    void imprime();
};

#endif // POINT_H
