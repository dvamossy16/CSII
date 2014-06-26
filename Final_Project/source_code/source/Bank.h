#ifndef BANK_H_INCLUDED
#define BANK_H_INCLUDED

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Account
{
public:
	int id;
	string name;
	double balance;
	Account(int id, string name, double balance): id(id), name(name), balance(balance) {}
	Account() {}
};

ostream& operator<<(ostream&, const Account&);
istream& operator>>(istream&, Account&);

class Bank
{
	vector<Account*> accounts;
public:
	void addAccount(Account*);
	string getName(int);
	double getBalance(int);
	void printAccount(int);
	bool transaction(int, double);
	~Bank();
	friend ostream& operator<<(ostream&, const Bank&);
	friend istream& operator>>(istream&, Bank&);
};

#endif