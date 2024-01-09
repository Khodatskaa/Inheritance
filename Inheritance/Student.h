#ifndef Student_h
#define Student_h

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	string name;
	int age;
	int id;
public:
    Student(); 
    Student(const string& name, int age, int studentId);

    const string& getName() const;
    int getAge() const;
    int getStudentId() const;

    void setName(const string& name);
    void setAge(int age);
    void setStudentId(int studentId);

    void display() const;
};


#endif 
