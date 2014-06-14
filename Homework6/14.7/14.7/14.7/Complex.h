#include <string>
#include <iostream>

using namespace std;
class Complex{
public:
 Complex();
 Complex(double r);
 Complex(double r, double i);
 Complex(Complex &obj);
 Complex add(Complex c);
 Complex sub(Complex c);
 Complex mult(Complex c);//Multiplication: z1. z2 = (x1x2 - y1y2) + i(x1y2 + x2y1)
 Complex div(Complex c);
 Complex abs(Complex c);
 string toString();
 void print();
 double getReal() const;
 double getImag() const;
 void setReal(double r);
 void setImag(double i);
 Complex Complex::operator+(Complex& that);
 Complex Complex::operator-(Complex& that);
 Complex Complex::operator*(Complex& that);
 Complex Complex::operator/(Complex& that);
 Complex Complex::operator+=(Complex& that);
 Complex Complex::operator-=(Complex& that);
 Complex Complex::operator*=(Complex& that);
 Complex Complex::operator/=(Complex& that);
 Complex Complex::operator[](Complex& that);
 Complex Complex::operator+()();
 Complex Complex::operator-()();
 Complex Complex::operator++();
 Complex Complex::operator++(int);
 Complex Complex::operator--(int);
 Complex Complex::operator--();

private:
 double real, imag;
};

void reset(double,double, Complex&, Complex&);