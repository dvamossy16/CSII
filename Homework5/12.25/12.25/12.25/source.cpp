#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include "Account.h"
#include "Transaction.h"

using namespace std;

int main()
{
	Account myAccount = Account("George", 1122, 1000.00);
	myAccount.deposit(30.00);
	myAccount.deposit(40.00);
	myAccount.deposit(50.00);
	myAccount.withdraw(5.00);
	myAccount.withdraw(4.00);
	myAccount.withdraw(2.00);
	void printout();
	system ("pause");
		return 0;
}