#ifndef String_h
#define String_h

#include <cstring>
#include <iostream>
using namespace std;

class String {
public:
    String();
    String(const char* str);
    String(const String& other);
    ~String();

    String& operator=(const String& other);
    String operator+(const String& other) const;
    String& operator+=(const String& other);
    bool operator==(const String& other) const;
    bool operator!=(const String& other) const;

    size_t length() const;
    void clear();

private:
    char* data;
};

#endif 
