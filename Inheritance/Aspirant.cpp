#include "Aspirant.h"

Aspirant::Aspirant() : Student(), thesisTopic("") {}

Aspirant::Aspirant(const string& name, int age, int studentId, const string& thesisTopic) : Student(name, age, studentId), thesisTopic(thesisTopic) {}

const string& Aspirant::getThesisTopic() const {
	return thesisTopic;
}

void Aspirant::setThesisTopic(const string& thesisTopic) {
	this->thesisTopic = thesisTopic;
}

void Aspirant::display() const {
	Student::display();
	cout << "Thesis topic: " << thesisTopic << endl;
}
