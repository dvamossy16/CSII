#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib> 
#include "Babynames.h"

const int size = 1000;
using namespace std;
int main()
{
	    Babyname babyname(int year,  char gender, string name, int rank);
		int rank;
		string name;
		string male = "";
		string female = "";
		string line = " ";
		ifstream infile;
		bool male_found = false, female_found = false;

		cout << "Enter the year: ";
		int year;
		cin >> year;
		cout <<"Enter the gender: ";
		char gender;
		cin >> gender;
		cout <<"Enter the name: ";
		cin >> name;

		infile.open ("babynames2010.txt");

		if (infile.fail())
		{
			cout << "Can't open babynames2010.txt\n";
			exit(1);
		} 
		for (int i =0; i< size; i++)
			{
			infile >> rank >> male>> female;
			getline(infile,line);
			
			if(name == male)
			{
				male_found=true;
			}
			else if (name == female) {
				female_found=true;
			}
		
		if(male_found == true && female_found != true)
		{
			cout << name << " is ranked #" << rank << " in popularity among boys.\n";
			break;
		}
		else if (male_found != true && female_found == true)
		{
			cout << name << " is ranked #" << rank << " in popularity among girls.\n";
			break;
		}
		else if (male_found == true && female_found == true)
		{
			cout << name << " is ranked " << rank << " in popularity among boys.\n";
			cout << name << " is ranked " << rank << " in popularity among girls.\n";
			break;
		}
		}
		if (male_found != true && female_found != true)
		{
			cout << name << " is not ranked. " << endl;
		}
		infile.close();
		infile.clear();
		system("pause");
		return 0;
}