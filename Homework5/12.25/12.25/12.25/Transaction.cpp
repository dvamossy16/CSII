#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "Account.h"
#include "Transaction.h"

using namespace std;

Transaction::Transaction(char type, double amount, double balance, string description)
{
	this->type = type;
	this->amount = amount;
	this->balance = balance;
	this->description = description;
	time_t t = time(0);
	struct tm* now = localtime(&t);
	char buf[128];
	strftime(buf, 128, "%Y-%m-%d %H:%M:%S", now);
	Date = buf;
}

double Transaction::getAmount()
{
		return amount;
}
double Transaction::getBalance()
{
		return balance;
}
string Transaction::getDescription()
{
		return description;
}
void Transaction::setAmount(double newAmount) 
{
		amount = newAmount;
}
void Transaction::setBalance(double newBalance) 
{
		balance = newBalance;
}
void Transaction::setDescription(string newDescription)
{
		description = newDescription;
}
void Transaction::write()
{


