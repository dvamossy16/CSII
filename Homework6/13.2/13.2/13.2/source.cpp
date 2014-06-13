#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main () 
{
string line;
int sum=0;
string filename;
cout << "Please enter a file you would like to open: " << endl;
cin >> filename;
ifstream input (filename.c_str());

if (input.fail())
	cout << filename << "does not exist" << endl;
else
	while(!input.eof())
{
getline(input,line);
    int numofChars= line.length();
    sum=numofChars+sum;
}
cout << "Number of characters: "<< sum << endl;
    return 0 ;
}