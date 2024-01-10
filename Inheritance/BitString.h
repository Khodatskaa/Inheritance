#ifndef BitString_h
#define BitString_h

#include "String.h"

class BitString : public String {
public:
    BitString();
    BitString(const char* bitStr);
    BitString(const BitString& other);
    ~BitString();

    BitString& operator=(const BitString& other);
    BitString operator+(const BitString& other) const;
    BitString& operator+=(const BitString& other);
    bool operator==(const BitString& other) const;
    bool operator!=(const BitString& other) const;

    void changeSign();

private:
    bool isValidBitString(const char* bitStr) const;
};

#endif 
