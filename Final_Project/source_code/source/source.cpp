#include <iostream>
#include <fstream>
#include "Bank.h"
#include "Company.h"
using namespace std; 

int menu()
{
	int choice;
	cout << "Final Project: Bank" << endl;
	cout << "Prepared by Domi" << endl << endl;
	cout << "What would you like to work on? " << endl;
	cout << "1) Corporate Finance " << endl;
	cout << "2) Bank Account " << endl;
	cout << "3) Save state to file " << endl;
	cout << "4) Exit " << endl;
	cout << "==================" << endl;
	cout << "Your choice? Enter 1, 2, 3 or 4: ";
	cin >> choice;
	return choice;
}

int bank_menu()
{
	int choice;
	cout << "1) Get balance " << endl;
	cout << "2) Print all accounts " << endl;
	cout << "==================" << endl;
	cout << "Your choice? Enter 1 or 2: ";
	cin >> choice;
	return choice;
}

int company_menu()
{
	int choice;
	cout << "1) Print all employees " << endl;
	cout << "2) Set salary " << endl;
	cout << "3) Pay employee " << endl;
	cout << "==================" << endl;
	cout << "Your choice? Enter 1, 2 or 3: ";
	cin >> choice;
	return choice;
}

int main() {
	Bank bank;
	Company company(&bank);
	ifstream input;
	input.open("bank.txt", ios_base::in);
	if (input.fail()) {
		cout << "Cannot open bank.txt";
		return -1;
	}
	input >> bank;
	input.close();
	input.open("company.txt", ios_base::in);
	if (input.fail()) {
		cout << "Cannot open company.txt";
		return -1;
	}
	input >> company;
	input.close();
	char s;
	do
	{
		switch (menu())	{ 
		case 1:  //corporate finance
		switch (company_menu()) {
				{
				case 1:
					cout << company;
				break;
				case 2:
				{
					int id;
					double salary;
					cout << "Enter id: ";
					cin >> id;
					cout << "Enter salary: ";
					cin >> salary;
					company.setSalary(id, salary);
				}
				break;
				case 3:
				{
					int id;
					cout << "Enter id: ";
					cin >> id;
					string name = company.getName(id);
					double salary = company.getSalary(id);
					bool success = company.pay(id);
					if (success) {
						cout << "Payed " << salary << "$ to " << name << endl;
					} else {
						cout << "Invalid id " << endl;
					}
				}
				break;
			}
		}
		break;
		case 2: // bankaccount viewer
			switch (bank_menu()) {
				{
				case 1:
				{
					cout << "Enter id: ";
					int id;
					cin >> id;
					string name = bank.getName(id);
					double balance = bank.getBalance(id);
					if (name == "") {
						cout << "Invalid id!" << endl;
					} else {
						cout << "Name: " << name << ", balance: " << balance << "$" << endl;
					}
				}
				break;
				case 2:
					cout << bank;
				break;
			}
			}
		break;
		case 3:
		{
			ofstream output;
			output.open("bank.txt", ios_base::out);
			output << bank;
			output.close();
			output.open("company.txt", ios_base::out);
			output << company;
			output.close();
			cout << "Save successful" << endl;
		}
		break;
		case 4:
			cout << "Goodbye!" << endl;
			return 0;
		default:
			cout << " Invalid choice" << endl;   //in case wrong input
			return 0;
		}
		cout << "Do you want to continue? y or n: ";
		cin >> s;
		}	while ( s == 'y');
	system("pause");
	return 0;
}