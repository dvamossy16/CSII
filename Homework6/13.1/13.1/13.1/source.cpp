#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;
const int MAX_SIZE = 100;
int size = 100;
int main() {

    ofstream output;
    output.open("EXCERCISE13_1.txt");  
    int list[MAX_SIZE];
    cout << "Enter 100 integers: " << endl;
    cin >> size;
    for (int i = 0; i < MAX_SIZE; i++)
    {
    cout<<i+1<<". ";
    cin >> list[i];
    output << list[i] << endl;
     }
  output.close();
  cout << "Done" << endl << endl;
  system("pause");
  return 0;
}
