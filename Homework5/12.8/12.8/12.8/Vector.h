#ifndef Vector_H_INCLUDED_
#define Vector_H_INCLUDED_

#include <iostream>

using namespace std;

template<typename T>
class Vector
{
private:
	T *vec;
	int vsize, maxsize;
	void alloc_new();
	
public:
	Vector();
	Vector(int);
	~Vector();
	void push_back(const T&);
	void pop_back();
	int size();
	int at(int i);
	bool empty() const;
	void clear();
	void swap(Vector &v2, Vector &v1);

};

#endif






