#include <iostream>
#include "Vector.h"

using namespace std;

Vector::Vector()
{
	maxsize = 10;
	vec = new int[maxsize];
	vsize = 0;
}
Vector::Vector (int i)
{
	maxsize = i;
	vec = new int[maxsize];
	vsize = 0;
}

Vector::~Vector()
{
	delete[] vec;
}
void Vector::push_back(int i)
{
	if (vsize+1>maxsize)
		alloc_new();
	vec[vsize]=i;
	vsize++;
}
int Vector::at(int i)
{
	if (i<vsize)
		return vec[i];
	throw 10;
}
void Vector::alloc_new()
{
	maxsize = vsize*2;
	int* temp = new int[maxsize];
	for (int i=0; i<vsize;i++)
		temp[i]=vec[i];
	delete[] vec;
	vec = temp;
}
int Vector::size()
{
	return vsize;
}

void Vector::pop_back(int i)
{
	if (vsize >0)
	{
		vsize --;
	}
	else {
		cout << "Vector size cannot be less than 0. " << endl;
	}
}
void Vector::clear()
{
	vsize = 0;
}
bool Vector::empty() const
{
	return vsize == 0;
}

void swap (Vector<T> &v2, Vector<T> &v1)
{
	Vector temp;
	v2 = temp;
	v1 = v2;
	temp = v1;
}

int main ()
{
	Vector myvector;
	int tmp;
	while(1)
	{
		cin >> tmp;
		if (tmp ==-1)
			break;
		myvector.push_back(tmp);
	}
	cout << "You have entered: " << myvector.size() << endl;
	Vector myvector2;
	while(1)
	{
		cin >> tmp;
		if (tmp ==-1)
			break;
		myvector2.push_back(tmp);
	}
	cout << "You have entered: " << myvector2.size() << endl;
	system ("pause");
	return 0;
}

