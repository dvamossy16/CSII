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
	for (int i = 0; i < MAX_SIZE; i++) {
		output << rand() % 100000 << " ";
	}
	output.close();
	cout << "Done" << endl << endl;
	system("pause");
	return 0;
}
