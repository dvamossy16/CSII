#include "MyInteger.h"
#include <iostream>

using namespace std;

void main() 
{ 
for(int i=0;i<100;i++)
{
MyInteger mi(i); 
cout<<i<<" isPrime: "<<boolalpha<<mi.isPrime()<<endl; 
cout<<i<<"isOdd: "<<boolalpha<<mi.isOdd()<<endl; 
cout<<i<<"isEven: "<<boolalpha<<mi.isEven()<<endl; 
} 
cin.get(); 
} 