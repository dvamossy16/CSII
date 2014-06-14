
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include "Complex.h"
using namespace std;

Complex::Complex(){
 real = imag = 0;
}

Complex::Complex(double r){
 real = r;
 imag = 0;
}

Complex::Complex(double r, double i){
 real = r;
 imag = i;
}

Complex::Complex(const Complex& obj){
 real = obj.real;
 imag = obj.imag;
}

Complex Complex::add(const Complex& c){
 Complex sum;
 sum.real = real + c.real;
 sum.imag = imag + c.imag;
 return sum;
}
Complex Complex::sub(const Complex& c){
 Complex sub;
 sub.real = real - c.real;
 sub.imag = imag - c.imag;
 return sub;
}
Complex Complex::mult(const Complex& c){//real = x1, y1 = imag  c.real = x2, c.imag = y2
 Complex mult;//Multiplication: z1. z2 = (x1x2 - y1y2) + i(x1y2 + x2y1)
 mult.real = real*c.real - imag*c.imag;
 mult.imag = real*c.imag + c.real*imag;
 return mult;
}
Complex Complex::div(const Complex& c){
 Complex div;//a=real,b=imag,c=c.real,d=c.imag
 div.real = (real*c.real+imag*c.imag)/(c.real*c.real + c.imag*c.imag);
 div.imag = (imag*c.real-real*c.imag)/(c.real*c.real + c.imag*c.imag);
 return div;
}
double Complex::abs()
{
	return sqrt(real*real+imag*imag);
}
void Complex::print(){
 cout << '(' << real << ") + (" << imag << ")i" << endl;
}

void reset(double r1, double i1,Complex&a, Complex&c){
 a.setReal(r1);
 a.setImag(i1);
 c.setReal(0);
 c.setImag(0);
}

double Complex::getReal() const{
 return real;
}
double Complex::getImag() const{
 return imag;
}
void Complex::setReal(double r){
 real = r;
}
void Complex::setImag(double i)
{
 imag = i;
}
string Complex::toString()
{
stringstream ss;
if (imag == 0)
{
ss << real << " ";
return ss.str();
}
else {
ss << real << " + " << imag << "i";
return ss.str();
}
}

Complex Complex::operator+(const Complex& that) {
 return this->add(that);
}

Complex Complex::operator-(const Complex& that) {
 return this->sub(that);
}

Complex Complex::operator*(const Complex& that) {
 return this->mult(that);
}

Complex Complex::operator/(const Complex& that) {
 return this->div(that);
}

Complex& Complex::operator+=(const Complex& that) {
	*this = this->add(that);
	return *this;
}

Complex& Complex::operator-=(const Complex& that) {
	*this = this->sub(that);
	return *this;
}

Complex& Complex::operator*=(const Complex& that) {
	*this = this->mult(that);
	return *this;
}

Complex& Complex::operator/=(const Complex& that) {
	*this = this->div(that);
	return *this;
}

double Complex::operator[](int i) {
	if (i == 0)
		return real;
	else if (i == 1)
		return imag;
	else
		return 0;
}

Complex Complex::operator+() {
	return *this;
}

Complex Complex::operator-() {
	return Complex((-1)*real, (-1)*imag);
}

Complex& Complex::operator++() {
	real += 1;
	return *this;
}

Complex Complex::operator++(int) {
	Complex temp = *this;
	real += 1;
	return temp;
}

Complex Complex::operator--(int) {
	Complex temp = *this;
	real -= 1;
	return temp;
}

Complex& Complex::operator--() {
	real -= 1;
	return *this;
}

Complex operator+(double d, const Complex& c) {
	return Complex(c.real + d, c.imag);
}

Complex operator-(double d, const Complex& c) {
	return Complex(c.real - d, c.imag);
}

Complex operator*(double d, const Complex& c) {
	return Complex(c.real * d, c.imag * d);
}

Complex operator/(double d, const Complex& c) {
	return Complex(c.real / d, c.imag / d);
}

ostream& operator<<(ostream& os, const Complex& c) {
	os << c.real << " + " << c.imag << "i";
	return os;
}

istream& operator>>(istream& is, Complex& c) {
	is >> c.real >> c.imag;
	return is;
}
