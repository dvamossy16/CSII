//Homework1 EX02-05. It's been a great review
// Domonkos F Vamossy - CS172 ON

#include <iostream> 
#include <iomanip>
#include <cctype>
#include <cstdlib> 
#include <string>
#include <ctime> 
#include <climits>
using namespace std;
void ex02 ();
void ex03 ();
void ex04 ();
void ex05 ();
void ge(int num1, int num2);
void printarray (int values[], int size);
void arraycheck(int a[], int size);
void Address();
int twice(int n);
int sumf (int x, int y);
void increment(int &n);
int main ()
{
	ex02();
	ex03();
	ex04();
	ex05();
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
	std::cout << "Please enter the number of shares you have: " ;
	std::cin >> numberOfShares;
	if (numberOfShares < 100)
	{
		std::cout << "You have less than 100 shares" << endl;
	}
	else 
	{
		std::cout << "You have more than or you have exactly 100 shares" << endl;
	}
	int boxwidth, bookwidth;
	std::cout << "Please enter a box width: ";
	cin >> boxwidth;
	std::cout << "Please enter a book width: ";
	cin >> bookwidth;
	if (boxwidth % bookwidth == 0)
	{
		std::cout << "Boxwidth is divisible evenly by bookwidth" << endl; 
	}
	else {
		std::cout << "Boxwidth is not divisible evenly by bookwidth" << endl;
	}
	double shelflife, temperature;
	std::cout << "Please input the outside temperature: ";
	cin >> temperature;
	std::cout << "Please input the shelflife: ";
	cin >> shelflife;
	if (temperature > 90) {
		shelflife = shelflife - 4;
		std::cout << "Shelflife should be " << shelflife << endl;
	}
	else
	{
		std::cout << "Shelflife is " << shelflife << endl;
	}

}


void ge(int num1, int num2)
{
	if (num1 >= num2)
		std::cout << "X equals: "<< num1 << ", which is greater than or equal to " << num2 << endl;
	else
		std::cout << "X equals: "<< num1 << ", which is less than " << num2 << endl;
}


void ex03 () {
	double area;
	std::cout << "Please enter the area of a square: " ;
	cin >> area;
	double diagonal = sqrt(area) * sqrt (2);
	std::cout << "The diagonal of the square is " << diagonal << endl;
	char s;
	std::cout << "Do you want to continue? Please answer with y or n " << endl;
	cin >>s;
	if (s == 'y') {
		std::cout << "Yes" << endl;
	}
	else {
		std::cout << "No" << endl;
	}
	char ch1 ='\t';   //ch2 is defined as char type and assigned the tab character \t
	Address();    
	string empty;  //part 
}
void ex04()
{
int ans;
std::cout << "Enter an integer between 1 to 10 " << endl;
cin.clear();
cin >> ans;
while (ans>10 || ans < 1)  
{
cin >> ans;
}
int sum = 0;
int k=1;
while (k <= ans)
{
	sum = sum +(k*k*k);
	k = k+1;
}
std::cout << "The sum of the cubes of the first " << ans << " integers is " <<sum << endl;
int i=0;
do {
	std::cout << "*";
	i++;
}
while (i < ans);
cout << endl;
for (int j=0; j <= 40; j +=2) 
{
	std::cout << j << " ";
}
cout << endl;
cout << "Twice your integer is " << twice(ans) << endl;
int x = rand() % 100000;
int y = rand() % 100000;
cout << "The sum of two random integers is " << sumf (x,y) << endl;
increment(ans);
}
void ex05 ()
{
const int size =5;
int values[size];
std::cout << "Please enter up to 5 positive numbers. " << endl;
int total =0;
int product = 1;
for (int i=0; i < size; i++)
{
	cin >> values[i];
	total += values[i];
	product = product * values[i];
}
cout << endl;
cout << product << endl;
cout << total << endl;
printarray(values, size);  
arraycheck (values, size); 
int domi;
cout << "Isn't this program great???" << endl;
cin >> domi;
}

int twice (int n)
{
	return n*2;
}
int sumf (int x, int y)
{
return x+y;
}
void increment(int &n)
{
	n++;
	cout << "If we use the add function to your integer, we obtain " << n <<endl;
	}
void printarray (int values[], int size)
{
	cout << "The array contains the following values: " << endl;
	for (int i=0; i <size; i++)
	{
		cout << values[i] << " ";
	}
	cout << endl;
}
void arraycheck(int a[], int size)
{
	int n;
	cout << "Please input an integer" << endl;
	cin >> n;
	for (int i=0; i <size; i++)
	{
		if (a[i] == n)
		{
			cout <<"The number you input is in the array" << endl;
		}
		else
		{
			cout << "The number you input is not in the array" << endl;
		}
	}
}
void Address ()
{
string mailingAddress;
cout << "What is your mailing address?" << endl;
cin >> mailingAddress;
cout << "Your mailing address is " << mailingAddress << "." << endl;      
}