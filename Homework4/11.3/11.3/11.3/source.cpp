#include <iostream>
using namespace std;

int* doubleCapacity(const int *list, int size)
{
	int newsize = size *2;
	int *p = new int[newsize];
	for (int i = 0; i < size; i++)
	{
		p[i] = list[i];
	}
	return p;
}

int main()
{
	cout << "Enter the size of the array: ";
	int size;
	cin >> size;
	int *list = new int[size];
	int *p = doubleCapacity(list, size);
	delete [] list;
	delete [] p;
	system ("pause");
	return 0;
}