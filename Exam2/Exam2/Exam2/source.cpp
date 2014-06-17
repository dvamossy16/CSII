#include <iostream>
#include <fstream>
#include <string>
#include "Runner.h"
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	string filename = "C:\\Users\\dvamo_000\\Desktop\\registrants.txt";
	ifstream input(filename.c_str());

	if (input.fail())
	{
		cout << "Could not open file " << endl;
		return 0;
	}
	vector <Runner> runners;
	string firstname, lastname;
	int pace;

	while (!input.eof()) 
	{		
		input >> firstname >> lastname >> pace;
		Runner runner (firstname, lastname, pace);
		runners.push_back(runner);
	}

	// now sort the vector - there must be a better way
	sort(runners.begin(), runners.end(), Runner::compare);

	ofstream output;

	for (int i = 0; i < runners.size(); i++)
	{
	if (pace < 360 && pace > 0)
	{
		output.open("white.txt",  ios::out | ios::app);
		output << firstname << lastname << pace;
	}
	else if (pace > 361 && pace < 420)
	{
		output.open("C:\\Users\\dvamo_000\\Desktop\\yellow.txt",  ios::out | ios::app);
		output << firstname << lastname << pace;
	}
	else if (pace > 421 && pace < 480)
	{
		output.open("C:\\Users\\dvamo_000\\Desktop\\green.txt", ios::out | ios::app);
		output << firstname << lastname << pace;
	}
	else if (pace > 481 && pace < 540)
	{
		output.open("C:\\Users\\dvamo_000\\Desktop\\orange.txt",  ios::out | ios::app);
		output << firstname << lastname << pace;
	}
	else if (pace > 541 && pace < 600)
	{
		output.open("C:\\Users\\dvamo_000\\Desktop\\blue.txt", ios::out | ios::app);
		output << firstname << lastname << pace;
	}
	else if (pace > 601 && pace < 720)
	{
		output.open("C:\\Users\\dvamo_000\\Desktop\\lilac.txt",  ios::out | ios::app);
		output << firstname << lastname << pace;
	}
	else if (pace > 721 && pace < 1200)
	{
		output.open("C:\\Users\\dvamo_000\\Desktop\\red.txt",  ios::out | ios::app);
		output << firstname << lastname << pace;
	}
	}
	input.close();
	output.close();

	cout << "\nCopy Done" << endl;
	system("pause");

	return 0;
}


