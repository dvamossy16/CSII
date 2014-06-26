#ifndef COMPANY_H_INCLUDED
#define COMPANY_H_INCLUDED

#include <string>
#include <vector>
#include <iostream>
#include "Bank.h"
using namespace std;

class Employee {
	public:
		int id;
		string name;
		int account_id;
		double salary;
		Employee() {}
		Employee(int id, string name, int account_id, double salary): id(id), name(name), account_id(account_id), salary(salary) {}
};

ostream& operator<<(ostream&, const Employee&);
istream& operator>>(istream&, Employee&);

class Company
{
	Bank* bank;
	vector<Employee> employees;
public:
	Company(Bank* bank): bank(bank) {}
	void addEmployee(const Employee&);
	void setSalary(int id, double salary);
	bool pay(int id);
	string getName(int id);
	double getSalary(int id);
	friend ostream& operator<<(ostream&, const Company&);
	friend istream& operator>>(istream&, Company&);
};

#endif