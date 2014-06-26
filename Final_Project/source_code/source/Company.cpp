#include "Company.h"

ostream& operator<<(ostream& os, const Employee& employee) {
	os << employee.id << ";" << employee.name << ";" << employee.account_id << ";" << employee.salary << endl;
	return os;
}

istream& operator>>(istream& is, Employee& employee) {
	is >> employee.id;
	is.ignore(1);
	employee.name = "";
	char c;
	is.get(c);
	while (!is.eof() && c != ';') {
		employee.name += c;
		is.get(c);
	};
	is >> employee.account_id;
	is.ignore(1);
	is >> employee.salary;
	return is;
}

void Company::addEmployee(const Employee& employee) {
	employees.push_back(employee);
}

void Company::setSalary(int id, double salary) {
	for (vector<Employee>::iterator it = employees.begin(); it != employees.end(); ++it) {
		if (it->id == id) {
			it->salary = salary;
		}
	}
}

bool Company::pay(int id) {
	for (vector<Employee>::iterator it = employees.begin(); it != employees.end(); ++it) {
		if (it->id == id) {
			return bank->transaction(it->account_id, it->salary);
		}
	}
	return false;
}

string Company::getName(int id) {
	for (vector<Employee>::iterator it = employees.begin(); it != employees.end(); ++it) {
		if (it->id == id) {
			return it->name;
		}
	}
	return "";
}

double Company::getSalary(int id) {
	for (vector<Employee>::iterator it = employees.begin(); it != employees.end(); ++it) {
		if (it->id == id) {
			return it->salary;
		}
	}
	return -1;
}

ostream& operator<<(ostream& os, const Company& company) {
	for (vector<Employee>::const_iterator it = company.employees.begin(); it != company.employees.end(); ++it) {
		os << *it;
	}
	return os;
}

istream& operator>>(istream& is, Company& company) {
	company.employees.clear();
	Employee employee;
	while (is >> employee) {
		company.employees.push_back(employee);
	}
	return is;
}