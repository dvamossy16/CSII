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
	delete[] list;
	return p;
}

int main()
{
	cout << "Enter the size of the array: ";
	int size;
	cin >> size;
	int *list = new int[size];
	int doubleSize = size * 2;
	doubleCapacity(list, doubleSize);
	cout << "The new size of the array is " << doubleSize << endl;
	system ("pause");
	return 0;
}