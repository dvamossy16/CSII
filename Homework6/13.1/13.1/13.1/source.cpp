#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;
const int MAX_SIZE = 100;
int main() {
	srand (time(NULL));
	ofstream output;
    output.open("EXCERCISE13_1.txt", ofstream::out | ofstream::app);
    int list[MAX_SIZE];
    cout << "The 100 integers are: " << endl;
    for (int i = 0; i < MAX_SIZE; i++)
    {
    cout<<i+1<<". ";
	list[i] = rand() % 100000;
	cout << list[i] << endl;
    output << list[i] << endl;
     }
  output.close();
  cout << "Done" << endl << endl;
  system("pause");
  return 0;
}
