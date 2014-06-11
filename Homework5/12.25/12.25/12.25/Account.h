#ifndef Account_H_INCLUDED_
#define Account_H_INCLUDED_

#include <iostream>
#include <string>
#include <vector>
#include "Transaction.h"

using namespace std;

class Account 
{
private:
	int id;
	double balance;
	static double annualInterestRate;
	string name;
	vector<Transaction> transaction;


public:
	Account();
	Account(const Account&);
	int getID();
	double getBalance();
	double getAnnualInterestRate();
	void setID(int newID);
	void setBalance(double newBalance);
	void setAnnualInterestRate(double newAnnualInterestRate);
	double getMonthlyInterestRate();
	double withdraw(double amount);
	double deposit(double amount);
};



#endif