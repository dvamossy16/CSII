#include <iostream>
#include <cstring>
#include <string>
#include "Babynames.h"

using namespace std;

int Babyname::getyear()
{
	return year;
}
int Babyname::getrank()
{
	return rank;
}
char Babyname::getgender()
{
	return gender;
}
string Babyname::getname()
{
	return name;
}

Babyname::Babyname(int year, char gender, string name, int rank)
{
	this->year = year;
	this->gender = gender;
	this->name = name;
	this->rank = rank;
}
Babyname::Babyname()
{
}