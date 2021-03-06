#ifndef Transaction_H_INCLUDED_
#define Transaction_H_INCLUDED_

#include <iostream>
#include <vector>
#include <ctime>
#include <string>

using namespace std;

class Transaction 
{
private:
	char type;
	string Date;
	double amount;
	double balance;
	string description;
	
public:
	Transaction(char type, double amount, double balance, string description);
	double getAmount();
	double getBalance();
	string getDescription();
	void setAmount(double newAmount);
	void setBalance(double newBalance);
	void setDescription(string newDescription);
	void write();
};

#endif