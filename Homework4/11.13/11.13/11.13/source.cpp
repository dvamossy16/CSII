#include <iostream>
#include "Course.h"
using namespace std;

Course::Course(const string& courseName, int capacity)
{
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
}
Course::~Course()
{
	delete [] students;
}
string Course::getCourseName() const
{
	return courseName;
}
void Course::addStudent(const string& name)
{
	students[numberOfStudents] = name;
	numberOfStudents++;
}
void Course::dropStudent(const string& name) {
	bool found = false;
	int pos = 0;
	for (int i = 0; i < numberOfStudents; i++) {
		if (name == students[i]) {
			found = true;
			pos = i;
			break;
		}
	}
	if (!found) {
		return;
	} else {
		for (int j = (pos + 1); j < numberOfStudents; j++) {
			students[j-1] = students[j];
		}
		numberOfStudents--;
	}
}

  

string* Course::getStudents() const
{
	return students;
}
int Course::getNumberOfStudents() const
{
	return numberOfStudents;
}

void Course::extendCapacity()
{
	int newsize = capacity*2;
	string *p = new string[newsize];
	for (int i = 0; i < numberOfStudents; i++)
	{
		p[i] = students[i];
	}
	delete []students;
	capacity = newsize;
	students = p;
}

void Course::clear()
{
	delete []students;
	numberOfStudents=0;
}

Course::Course(const Course& other)
{
	numberOfStudents = other.numberOfStudents;
	courseName = other.courseName;
	capacity = other.capacity;
	students = new string[capacity];
	for (int i = 0; i < numberOfStudents; i++) {
	students[i] = other.students[i];
}

}