#ifndef RECTANGLE2D_H
#define RECTANGLE2D_H
#include <iostream>
using namespace std;


class Rectangle2D
{
public:
 Rectangle2D();
 Rectangle2D(double, double, double, double);
 ~Rectangle2D();
 Rectangle2D(Rectangle2D &);
 double getX() const;
 double getY() const;
 double getWidth() const;
 double getHeight() const;
 void setX(double);
 void setY(double);
 void setWidth(double);
 void setHeight(double);
 double getArea();
 double getPerimeter();
 bool contains(double, double);
 bool contains(Rectangle2D &);
 bool overlaps(Rectangle2D &);

private:
 double x, y, width, height;
};



#endif 