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

	input.close();

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
	if (runners.at(i).get_pace() < 360 && runners.at(i).get_pace() > 0)
	{
		output.open("white.txt");
		output << runners.at(i).get_firstname() << runners.at(i).get_lastname() << runners.at(i).get_pace() << endl;
		continue;
	}
	else if (runners.at(i).get_pace() > 361 && runners.at(i).get_pace() < 420)
	{
		output.open("yellow.txt");
		output << runners.at(i).get_firstname() << runners.at(i).get_lastname() << runners.at(i).get_pace() << endl;
		continue;
	}
	else if (runners.at(i).get_pace() > 421 && runners.at(i).get_pace() < 480)
	{
		output.open("green.txt");
		output << runners.at(i).get_firstname() << runners.at(i).get_lastname() << runners.at(i).get_pace() << endl;
		continue;
	}
	else if (runners.at(i).get_pace() > 481 && runners.at(i).get_pace() < 540)
	{
		output.open("orange.txt");
		output << runners.at(i).get_firstname() << runners.at(i).get_lastname() << runners.at(i).get_pace() << endl;
		continue;
	}
	else if (runners.at(i).get_pace() > 541 && runners.at(i).get_pace() < 600)
	{
		output.open("blue.txt");
		output << runners.at(i).get_firstname() << runners.at(i).get_lastname() << runners.at(i).get_pace() << endl;
		continue;
	}
	else if (runners.at(i).get_pace() > 601 && runners.at(i).get_pace() < 720)
	{
		output.open("lilac.txt");
		output << runners.at(i).get_firstname() << runners.at(i).get_lastname() << runners.at(i).get_pace() << endl;
		continue;
	}
	else if (runners.at(i).get_pace() > 721 && runners.at(i).get_pace() < 1200)
	{
		output.open("red.txt");
		output << runners.at(i).get_firstname() << runners.at(i).get_lastname() << runners.at(i).get_pace() << endl;
		continue;
	}
	}
	output.close();

	cout << "\nCopy Done" << endl;
	system("pause");

	return 0;
}


