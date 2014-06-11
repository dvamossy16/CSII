#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include "Account.h"
#include "Transaction.h"

using namespace std;

Account::Account(string name, int id, double balance)
{
	this->name = name;
	this->id = id;
	this->balance = balance;
}
Account::Account()
	{ 
		id = 0;
		balance = 0;
		annualInterestRate=0;
	}
double Account::annualInterestRate = 0.05;

int Account::getID()
{
		return id;
}
double Account::getBalance()
{
		return balance;
}
string Account::getName()
{
	return name;
}
double Account::getAnnualInterestRate()
{
		return annualInterestRate;
}
void Account::setID(int newID) 
{
		id = newID;
}
void Account::setName(string newName)
{
	name = newName
}
void Account::setBalance(double newBalance) 
{
		balance = newBalance;
}
void Account::setAnnualInterestRate(double newAnnualInterestRate)
{
		annualInterestRate = newAnnualInterestRate;
}
double Account::getMonthlyInterestRate()
{
		return annualInterestRate/12;
}
double Account::withdraw(double amount) 
{
		Transaction transaction('W', amount, balance, "withdrawal made");
		transactions.push_back(transaction);
		return balance-=amount;	
}	
double Account::deposit(double amount) 
{
		Transaction transaction('D', amount, balance, "deposit made");
		transactions.push_back(transaction);
		return balance += amount;
}
