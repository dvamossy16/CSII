#include "Rectangle2D.h"
#include <iostream>
using namespace std;

//First Constructor
Rectangle2D::Rectangle2D()
{
 x = 0;
 y = 0;
 width = 1;
 height = 1;
}
//Second Constructor // A new rectangle with new coordinates, height and width is created.
Rectangle2D::Rectangle2D(double newX, double newY, double newWidth, double newHeight)
{
 x = newX;
 y = newY;
 width = newWidth;
 height = newHeight;
}
//Get Function for X
double Rectangle2D::getX() const
{
 return x;
}
//Get Function for Y
double Rectangle2D::getY() const
{
 return y;
}
//Get Function for Width
double Rectangle2D::getWidth() const
{
 return width;
}
//Get Function for Height
double Rectangle2D::getHeight() const
{
 return height;
}
//Set Function for X
void Rectangle2D::setX(double newX)
{
 x = newX;
}
//Set Function for Y
void Rectangle2D::setY(double newY)
{
 y = newY;
}
//Set a new width
void Rectangle2D::setWidth(double newWidth)
{
 width = newWidth;
}
//Set a new height
void Rectangle2D::setHeight(double newHeight)
{
 height = newHeight;
}
//Get the Area based on parameters
double Rectangle2D::getArea()
{
 return width * height;
}
//Get the Perimeter based on parameters
double Rectangle2D::getPerimeter()
{
 return 2 * (width + height);
}
// to check if the given rectangle contains the point x, y inside it or not
bool Rectangle2D::contains(double x, double y)
{

 if(x <= this->x + width / 2 && x >= this->x - width / 2)

  if(y <= this->y + height / 2 && y >= this->y - height / 2)
   // it returns true if the above statements are satisfied
   return true;
 
 return false;
}
// to check if the given rectangle contains the other rectangle inside it or not
bool Rectangle2D::contains(Rectangle2D &r)
{
 if((this->x + width / 2) >= (r.getX() + r.getWidth() / 2) && (this->x - width / 2) <= (r.getX() - r.getWidth() / 2))
  if((this->y + height / 2) >= (r.getY() + r.getHeight() / 2) && (this->y - height / 2) <= (r.getY() - r.getHeight() / 2))
   return true;
 return false;
}
// to check if the given rectangle overlaps the other rectangle or not
bool Rectangle2D::overlaps(Rectangle2D &r)
{
 if((this->x + width / 2) <= (r.getX() + r.getWidth() / 2) && (this->x - width / 2) >= (r.getX() - r.getWidth() / 2))
  if((this->y + height / 2) <= (r.getY() + r.getHeight() / 2) && (this->y - height / 2) >= (r.getY() - r.getHeight() / 2))
   return true;
 if((this->x + width / 2) >= (r.getX() + r.getWidth() / 2) && (this->x - width / 2) <= (r.getX() + r.getWidth() / 2))
  return true;
 if((this->x + width / 2) >= (r.getX() - r.getWidth() / 2) && (this->x - width / 2) <= (r.getX() - r.getWidth() / 2))
  return true;
 if((this->y + height / 2) >= (r.getY() + r.getHeight() / 2) && (this->y - height / 2) <= (r.getY() - r.getHeight() / 2))
  return true;
 if((this->y + height / 2) >= (r.getY() - r.getHeight() / 2) && (this->y - height / 2) <= (r.getY() - r.getHeight() / 2))
  return true;
 return false;
}