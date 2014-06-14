#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib> 
#include "Babynames.h"

using namespace std;
 
int main ( )
{
 Babyname babyname;
 string inputName, boyName, girlName;
 ifstream babyFile;
 char another = 'y';
 int rank;
 while (another =='y')
 {
  babyFile.open("babynames2010.txt");
  // verify that it opened
  if (babyFile.fail( ))
  {
   cout << "Can't open babynames2010.txt\n";
   exit(1);
  } 
 
  cout << "Enter the name to search for: ";
  cin >> inputName; 
 
  while (babyFile >> rank)
  {
   babyFile >> boyName;
   babyFile >> girlName;
   if (inputName == boyName)
   {
    cout << inputName << " is ranked "
     << babyname.getrank() << " in popularity among boys.\n";
   }
  }
  babyFile.close();
  babyFile.clear();
  cout << "Try another name? ";
  cin >> another;
 }
 system("pause");
 return 0;
}