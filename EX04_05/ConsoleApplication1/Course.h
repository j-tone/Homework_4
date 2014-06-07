#ifndef COURSE_H
#define COURSE_H

#include <string>
using namespace std;

class Course{
private:
	string courseName;
	string* students;
	string* students_storage;
	int numberOfStudents;
	int capacity;

public:
	Course(const string &coursename, int capacity);
	~Course();
	string getCourseName() const;
	void addStudent(const string &name);
	void dropStudent(const string &name);
	string* getStudents() const;
	int getNumberOfStudents() const;
	string* clear();
	void deep_copy();
};

#endif