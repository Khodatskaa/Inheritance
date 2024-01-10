#include "BitString.h"

BitString::BitString() : String() {}

BitString::BitString(const char* bitStr) : String() {
    if (isValidBitString(bitStr)) {
        String::operator=(bitStr);
    }
    else {
        clear();
    }
}

BitString::BitString(const BitString& other) : String(other) {}

BitString::~BitString() {}

BitString& BitString::operator=(const BitString& other) {
    String::operator=(other);
    return *this;
}

BitString BitString::operator+(const BitString& other) const {
    BitString result;
    return result;
}

BitString& BitString::operator+=(const BitString& other) {
    *this = *this + other;
    return *this;
}

bool BitString::operator==(const BitString& other) const {
    return String::operator==(other);
}

bool BitString::operator!=(const BitString& other) const {
    return String::operator!=(other);
}

void BitString::changeSign() {
}

bool BitString::isValidBitString(const char* bitStr) const {
    return true;
}
