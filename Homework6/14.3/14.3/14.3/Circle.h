
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
public:
	Circle();
	Circle(double);
	double getArea();
	double getRadius();
	void setRadius(double);
	bool operator<(Circle& that);
private:
	double radius;
};

#endif 