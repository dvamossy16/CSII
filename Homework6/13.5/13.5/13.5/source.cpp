#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib> 
#include <vector>

const int size = 10000;

using namespace std;
int main()
{
	int rank, dummy;
	string name,male, female;
	string line = " ";
	bool male_found = false, female_found = false;

	cout << "Enter the year: ";
	int year;
	cin >> year;
	cout <<"Enter the gender: ";
	char gender;
	cin >> gender;
	cout <<"Enter the name: ";
	cin >> name;

	string filename;
	for (int i = 0; i < 10; i++) 
	{
		if (i == 9)
			filename = "babynames2010.txt";
		else
		{
			filename += "babynames200";
			filename += static_cast<char>((i + 1) + '0');
			filename += ".txt";
		}
	}

		ifstream infile(filename.c_str());
		if (infile.fail())
		{
			cout << "Can't open the file\n";
			exit(1);
		} 

	while (!infile.eof() && male_found != true && female_found != true) 
		{
		infile >> rank >> male >> dummy >> female >> dummy;
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


