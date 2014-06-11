#include <iostream>
#include <string>
#include <cstring>

using namespace std;

template <typename T>
int linearSearch (const T list[], T key, int arraySize)
{
	for (int i=0; i<arraySize; i++)
	{
		if (key == list[i])
			return i;
	}
	return -1;
}

int main () 
{
	int list1[] = {1, 4, 4, 2, 5, -3, 6, 2};
	double list2[] = {1.5, 2.3, 1.8, 3.7, 1.1, 6.7, 3.5, 2.2};
	string list3[] = { "Domi", "Mr. Domi", "Domi Domi", "Roger Federer"};
	linearSearch<int>(list1, 4, 8);
	linearSearch<double>(list2,4,8);
	linearSearch<string>(list3,"Domi",4);

	cout << " " << linearSearch<int>(list1, 4, 8) << endl;
	cout << " " << linearSearch<double>(list2,4,8) << endl;
	cout << " " << linearSearch<string>(list3,"Roger Federer",4) << endl;

	system ("pause");
	return 0;
}