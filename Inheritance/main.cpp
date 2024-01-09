// main.cpp

#include "student.h"
#include "aspirant.h"
#include <iostream>

int main() {
	Student student("John", 20, 123);
	student.display();
	cout << endl;

	Aspirant aspirant("Mary", 25, 456, "Computer Science");
	aspirant.display();
	cout << endl;

	return 0;
}
