#include<string>
#include<iostream>
#include<math.h>

using namespace std;

class MyInteger 
{ 
private: 
int value; 
public: 
MyInteger(int val)
{
} 

int getValue() const
{
	return value;
} 
bool isEven() const
{
	if (value % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
} 
bool isOdd() const
{
	if (value % 2 == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
} 
bool isPrime() const; 

bool equals(int n) const; 
bool equals(const MyInteger& myInt); 

static bool isEven(int n)
{
	if (n % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}; 
static bool isOdd(int n)
{
	if (n % 2 == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}; 
static bool isPrime(int n); 

static bool isEven(const MyInteger& myInt)
{
	if (myInt.getValue()%2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
} 
static bool isOdd(const MyInteger& myInt)
{
	if (myInt.getValue()%2 == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
} 
static bool isPrime(const MyInteger& myInt); 

static int parseInt(const string&); 
};