#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main () 
{
int chars=0;
string filename;
cout << "Please enter a file you would like to open: " << endl;
cin >> filename;
ifstream input (filename.c_str());

if (input.fail())
{
	cout << " File does not exist" << endl;
	cout << "Exit program" << endl;
	return 0;
}

while(!input.eof())
{
    input.get();
    chars++;
 }
chars --; // adjustment
cout << "Number of characters: "<< chars << endl;
    return 0 ;
}