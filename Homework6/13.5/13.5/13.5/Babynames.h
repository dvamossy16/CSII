#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class Babyname
{
private:
	int year, rank;
	char gender;
	string name;
public:
	Babyname(int year, char gender, string name, int rank);
	Babyname();
	int getyear();
	int getrank();
	char getgender();
	string getname();

};