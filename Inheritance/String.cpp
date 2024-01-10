#include "String.h"

String::String() : data(new char[1]) {
    data[0] = '\0';
}

String::String(const char* str) : data(new char[strlen(str) + 1]) {
    strcpy(data, str);
}

String::String(const String& other) : data(new char[other.length() + 1]) {
    strcpy(data, other.data);
}

String::~String() {
    delete[] data;
}

String& String::operator=(const String& other) {
    if (this != &other) {
        delete[] data;
        data = new char[other.length() + 1];
        strcpy(data, other.data);
    }
    return *this;
}

String String::operator+(const String& other) const {
    String result;
    delete[] result.data;
    result.data = new char[length() + other.length() + 1];
    strcpy(result.data, data);
    strcat(result.data, other.data);
    return result;
}

String& String::operator+=(const String& other) {
    *this = *this + other;
    return *this;
}

bool String::operator==(const String& other) const {
    return strcmp(data, other.data) == 0;
}

bool String::operator!=(const String& other) const {
    return !(*this == other);
}

size_t String::length() const {
    return strlen(data);
}

void String::clear() {
    delete[] data;
    data = new char[1];
    data[0] = '\0';
}
