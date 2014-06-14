#include <string>
#include <iostream>

using namespace std;
class Complex{
public:
 Complex();
 Complex(double r);
 Complex(double r, double i);
 Complex(const Complex &obj);
 Complex add(const Complex& c);
 Complex sub(const Complex& c);
 Complex mult(const Complex& c);//Multiplication: z1. z2 = (x1x2 - y1y2) + i(x1y2 + x2y1)
 Complex div(const Complex& c);
 double abs();
 string toString();
 void print();
 double getReal() const;
 double getImag() const;
 void setReal(double r);
 void setImag(double i);
 Complex operator+(const Complex& that);
 Complex operator-(const Complex& that);
 Complex operator*(const Complex& that);
 Complex operator/(const Complex& that);
 Complex& operator+=(const Complex& that);
 Complex& operator-=(const Complex& that);
 Complex& operator*=(const Complex& that);
 Complex& operator/=(const Complex& that);
 double operator[](int i);
 Complex operator+();
 Complex operator-();
 Complex& operator++();
 Complex operator++(int);
 Complex operator--(int);
 Complex& operator--();
 friend Complex operator+(double d, const Complex& c);
 friend Complex operator-(double d, const Complex& c);
 friend Complex operator*(double d, const Complex& c);
 friend Complex operator/(double d, const Complex& c);
 friend ostream& operator<<(ostream& os, const Complex& c);
 friend istream& operator>>(istream& is, Complex& c);

private:
 double real, imag;
};

void reset(double,double, Complex&, Complex&);
