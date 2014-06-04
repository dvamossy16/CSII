#include <iostream>

using namespace std;

int main ()
{
	int *x;

	cout << "How many numbers woud you like to input? ";
	int count;
	cin >> count;

	x = new int[count];

	for (int i=0; i<count; i++) {
		cout << "Enter a number: " << endl;
		cin >> x[i];
	}
int sum = 0;
int average;
int greater = 0;
for (int i=0; i<count; i++) {
	sum = sum + x[i];
	average = sum / count;
}
for (int i = 0; i<count; i++) {
if (x[i]>average) {
	greater++;
}
}
cout << "The average is: " << average << endl;
cout << "There are " << greater << " numbers greater than the average. " << endl;
system ("pause");
	delete [] x;
	return 0;
}
