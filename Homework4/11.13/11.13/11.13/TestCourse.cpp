#include <iostream>
#include "Course.h"
using namespace std;

int main()
{
	Course course1("Data Structures", 3);
	
	course1.addStudent("Peter Jones");
	course1.addStudent("Brian Smith");
	course1.addStudent("Anne Kennedy");

	course1.dropStudent("Peter Jones");
	
	cout << "Number of students in course1: " << course1.getNumberOfStudents() << endl;
	string* students = course1.getStudents();
	for (int i=0; i<course1.getNumberOfStudents(); i++)
		cout << students[i] << ", ";
	system("pause");
	return 0;
}