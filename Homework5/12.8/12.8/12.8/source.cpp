#include <iostream>
#include "Vector.h"

using namespace std;

template <typename T>
Vector<T>::Vector()
{
	maxsize = 10;
	vec = new T[maxsize];
	vsize = 0;
}
template <typename T>
Vector<T>::Vector (int i)
{
	maxsize = i;
	vec = new T[maxsize];
	vsize = 0;
}

template <typename T>
Vector<T>::~Vector()
{
	delete[] vec;
}
template <typename T>
void Vector<T>::push_back(const T& i)
{
	if (vsize+1>maxsize)
		alloc_new();
	vec[vsize]=i;
	vsize++;
}
template <typename T>
T Vector<T>::at(int i)
{
	if (i<vsize)
		return vec[i];
	throw 10;
}
template <typename T>
void Vector<T>::alloc_new()
{
	maxsize = vsize*2;
	T* temp = new int[maxsize];
	for (int i=0; i<vsize;i++)
		temp[i]=vec[i];
	delete[] vec;
	vec = temp;
}
template <typename T>
int Vector<T>::size()
{
	return vsize;
}

template <typename T>
void Vector<T>::pop_back()
{
	if (vsize >0)
	{
		vsize --;
	}
	else {
		cout << "Vector size cannot be less than 0. " << endl;
	}
}
template <typename T>
void Vector<T>::clear()
{
	vsize = 0;
}
template <typename T>

bool Vector<T>::empty() const
{
	return vsize == 0;
}

template <typename T>
void Vector<T>::swap(Vector<T> &v2, Vector<T> &v1)
{
	Vector temp;
	v2 = temp;
	v1 = v2;
	temp = v1;
}

int main ()
{
	Vector<int> myvector;
	int tmp;
	while(1)
	{
		cin >> tmp;
		if (tmp ==-1)
			break;
		myvector.push_back(tmp);
	}
	cout << "You have entered: " << myvector.size() << endl;
	Vector<int> myvector2;
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

