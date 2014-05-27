#include <iostream>
#include <cmath>

using namespace std;

class QuadraticEquation {
	
public:
		QuadraticEquation();
		QuadraticEquation(double _a, double _b, double _c);
private:
	double a, b, c;
	double r1, r2;
	double discriminant;
	bool imaginary;

	void input ();
	void getA();
	void getB();
	void getC();
	void solvePositiveRoot();
	void solveNegativeRoot();
	void getDiscriminant();
	void printResults();
	void setA(double);
	void setB(double);
	void setC(double);
};

int main () {
	QuadraticEquation homework;
	system ("pause");
	return 0;
}

void QuadraticEquation::input()
{
	double _a, _b, _c;
	cout << "Please enter a value for a: " << endl;
	cin >> _a;
	cout << "Please enter a value for b: " << endl;
	cin >> _b;
	cout << "Please enter a value for c: " << endl;
	cin >> _c;
}
QuadraticEquation::QuadraticEquation()
{
	input();
	getDiscriminant();
	printResults();
}
QuadraticEquation::QuadraticEquation(double _a, double _b, double _c)
{
	setA(_a);
	setB(_b);
	setC(_c);
	getDiscriminant();
	printResults();
}
void QuadraticEquation::getDiscriminant()
{
	discriminant = (b*b)+(-4*a*c);
	if (discriminant >=0)
		imaginary = false;
	else {
		imaginary = true;
	}
}
void QuadraticEquation::solvePositiveRoot()
{
	r1 = (-b + sqrt(discriminant))/(2*a);
}
void QuadraticEquation::solveNegativeRoot()
{
	r2 = (-b - sqrt(discriminant))/(2*a);
}
void QuadraticEquation::printResults()
{
	if (imaginary == false)
	{
		solvePositiveRoot();
		solveNegativeRoot();
		cout << "When y = 0, x = " << r1 << " or " << r2 << endl;
	}
	else 
	{
		cout << "The equation has no real roots" << endl;
	}
}
void QuadraticEquation:: setA(double input)
{
	a = input;
}
void QuadraticEquation:: setB(double input)
{
	b = input;
}
void QuadraticEquation:: setC(double input)
{
	c = input;
}



	
	