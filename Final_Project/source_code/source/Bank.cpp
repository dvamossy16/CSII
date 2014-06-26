#include "Bank.h"

ostream& operator<<(ostream& os, const Account& acc) {
	os << acc.id << ";" << acc.name << ";" << acc.balance << endl;
	return os;
}

istream& operator>>(istream& is, Account& acc) {
	is >> acc.id;
	is.ignore(1);
	acc.name = "";
	char c;
	is.get(c);
	while (!is.eof() && c != ';') {
		acc.name += c;
		is.get(c);
	};
	is >> acc.balance;
	return is;
}

void Bank::addAccount(Account* acc) {
	accounts.push_back(acc);
}

string Bank::getName(int id) {
	for (vector<Account*>::iterator it = accounts.begin(); it != accounts.end(); ++it) {
		if ((*it)->id == id) {
			return (*it)->name;
		}
	}
	return "";
}

double Bank::getBalance(int id) {
	for (vector<Account*>::iterator it = accounts.begin(); it != accounts.end(); ++it) {
		if ((*it)->id == id) {
			return (*it)->balance;
		}
	}
	return -1;
}

bool Bank::transaction(int id, double amount) {
	for (vector<Account*>::iterator it = accounts.begin(); it != accounts.end(); ++it) {
		if ((*it)->id == id) {
			(*it)->balance += amount;
			return true;
		}
	}
	return false;
}

void Bank::printAccount(int id) {
	for (vector<Account*>::iterator it = accounts.begin(); it != accounts.end(); ++it) {
		if ((*it)->id == id) {
			cout << *(*it);
			return;
		}
	}
}

Bank::~Bank() {
	for (vector<Account*>::iterator it = accounts.begin(); it != accounts.end(); ++it) {
			delete (*it);
	}
}

ostream& operator<<(ostream& os, const Bank& bank) {
	for (vector<Account*>::const_iterator it = bank.accounts.begin(); it != bank.accounts.end(); ++it) {
		os << *(*it);
	}
	return os;
}

istream& operator>>(istream& is, Bank& bank) {
	for (vector<Account*>::iterator it = bank.accounts.begin(); it != bank.accounts.end(); ++it) {
			delete (*it);
	}
	bank.accounts.clear();
	Account acc;
	while (is >> acc) {
		bank.accounts.push_back(new Account(acc));
	}
	return is;
}