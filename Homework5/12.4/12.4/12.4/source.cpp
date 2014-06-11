#include <iostream>
#include <string>

using namespace std;

template <typename T>
bool isSorted (const T list[], int size)
{
	for (int i=1; i<size; i++)
	{
		if (list[i-1] > list[i])
		{
			return false;
		}
	}
	return true;
}

int main () {
	int list1[] = {1,2,3,4,5};
	double list2[] = {1.5, 2.3, 1.8, 3.7, 1.1, 6.7, 3.5, 2.2};
	string list3[] = { "Domi", "Mr. Domi", "Domi Domi", "Roger Federer"};
	cout << " " << isSorted<int>(list1,5) << endl;
	cout << " " << isSorted<double>(list2,8) << endl;
	cout << " " << isSorted<string>(list3,4) << endl;
	system ("pause");
	return 0;
}