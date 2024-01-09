#include "Student.h"

Student::Student() : name(""), age(0), id(0) {}

Student::Student(const string& name, int age, int studentId) : name(name), age(age), id(studentId) {}

const string& Student::getName() const {
	return name;
}

int Student::getAge() const {
	return age;
}

int Student::getStudentId() const {
	return id;
}

void Student::setName(const string& name) {
	this->name = name;
}

void Student::setAge(int age) {
	this->age = age;
}

void Student::setStudentId(int studentId) {
	this->id = studentId;
}

void Student::display() const {
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Student ID: " << id << endl;
}
