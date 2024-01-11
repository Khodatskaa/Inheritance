#include "String.h"
#define _CRT_SECURE_NO_WARNINGS

String::String() : data(nullptr) {}

String::String(const char* str) {
	if (str != nullptr) {
		data = new char[strlen(str) + 1];
		strcpy(data, str);   // strcpy - copy string
	}
	else {
		data = nullptr;
	}
}

String::String(const String& other) {
	if (other.data != nullptr) {
		data = new char[strlen(other.data) + 1];
		strcpy(data, other.data);
	}
	else {
		data = nullptr;
	}
}

String::~String() {
	delete[] data;
}

String& String::operator=(const String& other) {
	if (this != &other) {
		delete[] data;
		if (other.data != nullptr) {
			data = new char[strlen(other.data) + 1];
			strcpy(data, other.data);
		}
		else {
			data = nullptr;
		}
	}
	return *this;
}

String String::operator+(const String& other) const {
	String result;
	if (data != nullptr && other.data != nullptr) {
		result.data = new char[strlen(data) + strlen(other.data) + 1];
		strcpy(result.data, data);
		strcat(result.data, other.data);  // strcat - concatenate strings
	}
	else if (data != nullptr) {
		result.data = new char[strlen(data) + 1];
		strcpy(result.data, data);
	}
	else if (other.data != nullptr) {
		result.data = new char[strlen(other.data) + 1];
		strcpy(result.data, other.data);  
	}
	else {
		result.data = nullptr;
	}
	return result;
}

String& String::operator+=(const String& other) {
	*this = *this + other;
	return *this;
}

bool String::operator==(const String& other) const {
	return strcmp(data, other.data) == 0;    // strcmp returns 0 if the strings are equal
}

bool String::operator!=(const String& other) const {
	return !(*this == other);
}

size_t String::length() const {
	return strlen(data);
}

void String::clear() {
	delete[] data;
	data = nullptr;
}
