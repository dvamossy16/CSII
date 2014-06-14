#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib> 

void read();

using namespace std;
int main()
{
	cout << "Enter the year: ";
	int year;
	cin >> year;
	cout <<"Enter the gender: ";
	char gender;
	cin >> gender;
	read();
	system("pause");
	return 0;

}

void read() 
{
	for (int i = 0; i < 10; i++) 
	{
		string filename;
		if (i == 9) 
			filename = "babynames2010.txt";
		else
		{
			filename += "babynames200";
			filename += static_cast<char>((i + 1) + '0');
			filename += ".txt";
		}

		ifstream input(filename.c_str());
		input.open("babynames2010.txt");
		if (input.fail())
		{
			cout << "Could not open file " << endl;
			exit (1);
		}
		string male, female;
		string line = " ";
		int dummy, rank;
		bool male_found = false, female_found = false;
		string name;
		cout << "Enter the name: ";
		cin >> name;
		while (!input.eof() && male_found != true && female_found != true) 
		{
			input >> rank; 
			input >> male;
			input >> dummy; // Skip the number of boy's name
			input >> female;
			input >> dummy; // Skip the number of girl's name
			getline(input,line);
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
			cout << " not ranked. " << endl;
		}

		input.close();
		input.clear();
	}
}
