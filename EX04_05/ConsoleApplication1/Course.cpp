#include <iostream>
#include "Course.h"
using namespace std;

Course::Course(const string &courseName, int capacity){
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
}

Course::~Course(){
	delete[] students;
}

string Course::getCourseName() const{
	return courseName;
}

void Course::addStudent(const string &name){
	if (numberOfStudents == capacity){
		capacity++;
		string* tmp = new string[capacity];
		for (int i = 0; i < numberOfStudents; i++){
			tmp[i] = students[i];
		}
		students = tmp;
	}
	students[numberOfStudents] = name;
	numberOfStudents++;
}

void Course::dropStudent(const string &name){
	for (int i = 0; i < numberOfStudents; i++){
		if (students[i] == name){
			for (int j = i; j < numberOfStudents - 1; j++){
				students[j] = students[j + 1];
			}
			numberOfStudents--;
		}
	}
}

string* Course::getStudents() const{
	return students;
}

int Course::getNumberOfStudents() const{
	return numberOfStudents;
}

string* Course::clear(){
	delete[] students;
	string* students = NULL;
	return students;
}

void Course::deep_copy(){
	students_storage = new string[numberOfStudents];
	for (int i = 0; i < numberOfStudents; i++){
		students_storage[i] = students[i];
	}
}