#include <iostream>
#include <string>
#include "Runner.h"

using namespace std;

string Runner::get_firstname()
{
	return firstname;
}

string Runner::get_lastname()
{
	return lastname;
}

int Runner::get_pace()
{
	return pace;
}

bool Runner::operator <(Runner& that)
{
	return get_pace() < that.get_pace();
}


Runner::Runner()
{
}

Runner::Runner(string newfirstname, string newlastname, int newpace)
{
	firstname = newfirstname;
	lastname = newlastname;
	pace = newpace;
}