#include <iostream>

using namespace std;

int smallest(const int* array, int size) {
	if (size <= 0) // this should never happen
		return 0;
	if (size == 1)
		return *array;
	int rest = smallest(array + 1, size -1);
	if (rest < *array)
		return rest;
	else
		return *array;
}

int main() {
	int test[8] = {1,2,4,5,10,100,2,-22};
	int s = smallest(test, 8);
	cout << "The smallest number is: " << s << endl;
	system("pause");
	return 0;
}