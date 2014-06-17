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
		input >> firstname;  // i have no clue whats going on here
		runners.push_back(firstname); 
		input >> lastname;
		runners.push_back(lastname); 
		input >> pace;
		runners.push_back(pace);
	}

	// now sort the vector - there must be a better way
	sort(runners.begin(), runners.end(), Runner::compare);

	ofstream output;

	if (runners.pace < 360 && runners.pace > 0)
	{
		output.open("white.txt");
		output << firstname << lastname << pace;
	}
	else if (runners.pace > 361 && runners.pace < 420)
	{
		output.open("yellow.txt");
		output << firstname << lastname << pace;
	}
	else if (runners.pace > 421 && runners.pace < 480)
	{
		output.open("green.txt");
		output << firstname << lastname << pace;
	}
	else if (runners.pace > 481 && runners.pace < 540)
	{
		output.open("orange.txt");
		output << firstname << lastname << pace;
	}
	else if (runners.pace > 541 && runners.pace < 600)
	{
		output.open("blue.txt");
		output << firstname << lastname << pace;
	}
	else if (runners.pace > 601 && runners.pace < 720)
	{
		output.open("lilac.txt");
		output << firstname << lastname << pace;
	}
	else if (runners.pace > 721 && runners.pace < 1200)
	{
		output.open("red.txt");
		output << firstname << lastname << pace;
	}
	input.close();
	output.close();

	cout << "\nCopy Done" << endl;
	system("pause");

	return 0;
}


