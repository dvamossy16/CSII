#include <iostream>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

const int elements = 10;

template <typename T>
void shuffle(vector<T> & v)
{
srand (time(0));
for (int i=0; i < elements; i++)
{
	T index = rand() % elements;
	T temp = vector[i];
	vector[i] = vector[index];
	vector[index] = temp;
}
}
int main ()
{

	vector<int> myvector(elements);
	int temp2;
	for (int i=0; i < 9; i++)
	{
		cin >> temp2;
		myvector.push_back(temp2);
	}
	cout << "You have entered: " << myvector.size() << endl;
	
	for (int j=0; j < 10; j++)
	{
		shuffle(myvector);
	cout << " " << myvector[j] << endl;
	}	
	system ("pause");
	return 0;
	}


