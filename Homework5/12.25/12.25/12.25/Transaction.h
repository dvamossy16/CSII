#ifndef Transaction_H_INCLUDED_
#define Transaction_H_INCLUDED_

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Transaction 
{
private:
	char type;
	double amount;
	double balance;
	string description;
	
public:
	Transaction(char type, double amount, double balance, string description)
	{
		this->type = type;
		this->amount = amount;
		this->balance = balance;
		this->description = description;
	}
};

#endif