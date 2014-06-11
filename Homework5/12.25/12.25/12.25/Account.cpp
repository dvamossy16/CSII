#include <iostream>
#include <string>
#include <vector>
#include "Account.h"

using namespace std;

Account::Account(const Account&)
{
		this->annualInterestRate = annualInterestRate;
		this->balance = balance;
		this->id = id;
		this->name = name;
}
Account::Account()
	{ 
		id = 0;
		balance = 0;
		annualInterestRate=0;
	}

int Account::getID()
{
		return id;
}
double Account::getBalance()
{
		return balance;
}
double Account::getAnnualInterestRate()
{
		return annualInterestRate;
}
void Account::setID(int newID) 
{
		id = newID;
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
		return balance -= amount;
		Transaction transaction('W', amount, balance, "withdrawal made");
		return balance;	
}	
double Account::deposit(double amount) 
{
		return balance += amount;
		Transaction transaction('D', amount, balance, "deposit made");
		return balance;	
}
