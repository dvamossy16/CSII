#ifndef Vector_H_INCLUDED_
#define Vector_H_INCLUDED_

#include <iostream>

using namespace std;

class Vector
{
private:
	int *vec;
	int vsize, maxsize;
	void alloc_new();
	
public:
	Vector();
	Vector(int);
	~Vector();
	void push_back(int);
	void pop_back(int);
	int size();
	int at(int i);
	bool empty() const;
	void clear();
	void swap(Vector &v2, Vector &v1);

};

#endif






