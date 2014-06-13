#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib> 
 
int main ( )
{
 using namespace std; 
 
 string inputName, boyName, girlName;
 ifstream babyFile;
 int rank;
 char another = 'y';
  
 while (another =='y')
 {
  babyFile.open("babynames2004.txt");
  // verify that it opened
  if (babyFile.fail( ))
  {
   cout << "Can't open babynames2004.txt\n";
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
     << rank << " in popularity among boys.\n";
   }
  }
  babyFile.close();
  babyFile.clear();
  cout << "Try another name? ";
  cin >> another;
 }
 return 0;
}