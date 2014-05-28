#include"MyInteger.h" 
#include <math.h>
#include<cmath>

using namespace std;

bool MyInteger::isPrime() const
{ 
MyInteger mi(value);
int num = mi.getValue(); 
for(int i = 2; i <= sqrt((double) num); i++) 
{
if(num % i == 0) 
{
	return false; 
}
else 
{
return true; 
}
}
} 

bool MyInteger::equals(int n) const
{ 
return value == n; 
} 

bool MyInteger::equals(const MyInteger& myInt) 
{ 
return myInt.getValue() == value; 
} 

bool MyInteger::isPrime(int n)
{ 
MyInteger mi(n); 
return mi.isPrime(n); 
} 

bool MyInteger::isPrime(const MyInteger& myInt) 
{ 
return myInt.isPrime(); 
} 

int MyInteger::parseInt(const string&) 
{ 
	string str;
return atoi(str.c_str()); 
} 

