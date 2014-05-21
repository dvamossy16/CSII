#include <iostream> 
using namespace std; 
void ex02 ();
void ge(int num1, int num2);
int main ()
{
	ex02();
	return 0;
}
void ex02()
{
	bool hasPassedTest = true;
	int x,y;
	x = rand() % 100000;
	y = rand() % 100000;
	ge (x,y);
	double numberOfShares;
	cout << "Please enter the number of shares you have: " ;
	cin >> numberOfShares;
	if (numberOfShares < 100)
	{
		cout << "You have less than 100 shares" << endl;
	}
	else 
	{
		cout << "You have more than or you have exactly 100 shares" << endl;
	}
	int boxwidth, bookwidth;
	cout << "Please enter a box width: ";
	cin >> boxwidth;
	cout << "Please enter a book width: ";
	cin >> bookwidth;
	if (boxwidth % bookwidth == 0)
	{
		cout << "Boxwidth is divisible evenly by bookwidth" << endl; 
	}
	else {
		cout << "Boxwidth is not divisible evenly by bookwidth" << endl;
	}
	double shelflife, temperature;
	cout << "Please input the outside temperature: ";
	cin >> temperature;
	cout << "Please input the shelflife: ";
	cin >> shelflife;
	if (temperature > 90) {
		shelflife = shelflife - 4;
		cout << "Shelflife should be " << shelflife << endl;
	}
	else
	{
		cout << "Shelflife is " << shelflife << endl;
	}

}


void ge(int num1, int num2)
{
	if (num1 >= num2)
		cout << "X equals: "<< num1 << ", which is greater than or equal to " << num2 << endl;
	else
		cout << "X equals: "<< num1 << ", which is less than " << num2 << endl;
}


