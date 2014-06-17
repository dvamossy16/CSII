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
	// read in the runners and push them onto the vector
	while (!input.eof()) 
	{		
		input >> firstname >> lastname >> pace;
		Runner runner (firstname, lastname, pace);
		runners.push_back(runner);
	}

	// using inbuilt algorithm + overloaded operators to sort it
	sort(runners.begin(), runners.end(), Runner::compare);

	for (unsigned int i = 0; i < runners.size(); i++)     // test whether it really sorts it according to pace
	{
		cout << "\t";
		runners.at(i).write();
	}

	ofstream output;

	for (unsigned int i = 0; i < runners.size(); i++)
	{
	if (pace < 360 && pace > 0)
	{
		output.open("white.txt");
		output << firstname << lastname << pace << endl;
	}
	else if (pace > 361 && pace < 420)
	{
		output.open("yellow.txt");
		output << firstname << lastname << pace << endl;
	}
	else if (pace > 421 && pace < 480)
	{
		output.open("green.txt");
		output << firstname << lastname << pace << endl;
	}
	else if (pace > 481 && pace < 540)
	{
		output.open("orange.txt");
		output << firstname << lastname << pace << endl;
	}
	else if (pace > 541 && pace < 600)
	{
		output.open("blue.txt");
		output << firstname << lastname << pace << endl;
	}
	else if (pace > 601 && pace < 720)
	{
		output.open("lilac.txt");
		output << firstname << lastname << pace << endl;
	}
	else if (pace > 721 && pace < 1200)
	{
		output.open("red.txt");
		output << firstname << lastname << pace << endl;
	}
	}
	input.close();
	output.close();

	cout << "\nCopy Done" << endl;
	system("pause");

	return 0;
}


