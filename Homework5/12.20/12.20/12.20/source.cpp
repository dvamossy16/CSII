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
	int index = rand() % elements;
	T temp = v[i];
	v[i] = v[index];
	v[index] = temp;
}
}
int main ()
{

	vector<int> myvector;
	int temp2;
	for (int i=0; i < elements; i++)
	{
		cin >> temp2;
		myvector.push_back(temp2);
	}
	cout << endl;
	cout << "You have entered: " << myvector.size() << endl;

	shuffle(myvector);	
	for (int j=0; j < elements; j++)
	{
		
	cout << " " << myvector[j] << endl;
	}	
	system ("pause");
	return 0;
	}


