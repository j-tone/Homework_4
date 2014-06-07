#include <iostream>
#include "Course.h"
using namespace std;

int main()
{
	Course course1("Data Structures", 3);
	Course course2("Database Systems", 3);

	course1.addStudent("Peter Jones");
	course1.addStudent("Brian Smith");
	course1.addStudent("Anne Kennedy");
	course1.addStudent("Mr T");

	course2.addStudent("Peter Jones");
	course2.addStudent("Steve Smith");

	cout << "Number of students in course1: " << course1.getNumberOfStudents() << endl;
	string* students = course1.getStudents();
	for (int i = 0; i < course1.getNumberOfStudents(); i++)
		cout << students[i] << ", ";

	cout << "\n\nNumber of students in course2: " << course2.getNumberOfStudents() << endl;
	students = course2.getStudents();
	for (int i = 0; i < course2.getNumberOfStudents(); i++)
		cout << students[i] << ", ";

	course1.dropStudent("Mr T");

	cout << "\n\nNumber of students in course1: " << course1.getNumberOfStudents() << endl;
	students = course1.getStudents();
	for (int i = 0; i < course1.getNumberOfStudents(); i++)
		cout << students[i] << ", ";

	course1.deep_copy();
	course1.clear();
	
	cout << endl;
	return 0;
}