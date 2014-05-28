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
	
	void input ();
	void solvePositiveRoot();
	void solveNegativeRoot();
	void getDiscriminant();
	void printResults();
	void getA(double);
	void getB(double);
	void getC(double);
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
	getA(_a);
	cout << "Please enter a value for b: " << endl;
	cin >> _b;
	getB(_b);
	cout << "Please enter a value for c: " << endl;
	cin >> _c;
	getC(_c);
}
QuadraticEquation::QuadraticEquation()
{
	input();
	getDiscriminant();
	printResults();
}
QuadraticEquation::QuadraticEquation(double _a, double _b, double _c)
{
	getA(_a);
	getB(_b);
	getC(_c);
	getDiscriminant();
	printResults();
}
void QuadraticEquation::getDiscriminant()
{
	discriminant = (b*b)+(-4*a*c);
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
	if (discriminant>0)
	{
		solvePositiveRoot();
		solveNegativeRoot();
		cout << "When y = 0, x = " << r1 << " or " << r2 << endl;
	}
	else if (discriminant == 0)
	{
		solvePositiveRoot();
		cout <<"When y = 0, x = " << r1 << endl;
	}
	else 
	{
		cout << "The equation has no real roots" << endl;
	}
}
void QuadraticEquation:: getA(double input)
{
	a = input;
}
void QuadraticEquation:: getB(double input)
{
	b = input;
}
void QuadraticEquation:: getC(double input)
{
	c = input;
}



	
	