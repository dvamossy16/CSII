#include <iostream>
#include <string>

using namespace std;

class Runner
{
private:
string firstname;
string lastname;
int pace;

public: 
Runner();
Runner(string newfirstname, string newlastname, int newpace);
string get_firstname();
string get_lastname();
int get_pace();
bool operator <(Runner& that);
static bool compare(Runner lhs, Runner rhs)
{ 
	return (lhs.pace < rhs.pace); 
}
};
