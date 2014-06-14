#include <iostream>
#include <cstring>
#include <string>
#include "Babynames.h"

using namespace std;

int Babyname::getYear()
{
	return year;
}
int Babyname::getRank()
{
	return rank;
}
char Babyname::getGender()
{
	return gender;
}
string Babyname::getName()
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