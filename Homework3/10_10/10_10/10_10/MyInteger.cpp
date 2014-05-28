#include"MyInteger.h" 
#include <math.h>
#include<cmath>

using namespace std;

bool MyInteger::isPrime() const
{ 
int num = value;
bool Prime;
for(int i = 2; i <= value; i++)
Prime = true;
for(int factor = 2; factor <= sqrt((double) num); factor++) 
if(num % factor == 0) 
{
	Prime = false;
	return false; 
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
return mi.isPrime(); 
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

