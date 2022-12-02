//
// Created by Haoyu Wu on 12/2/22.
//

#ifndef STRING_STRING_H
#define STRING_STRING_H

# include <iostream>
# include <cstring>

using namespace std;

class String {
public:
    // constructor
    String(const char* cstr = 0);

    // copy constructor
    String(const String& str);

    // copy assignment operator
    String& operator = (const String& str);

    // destructor
    ~String();

    char* get_c_str() const { return data; }

private:
    char* data;
};

inline String::String(const char *cstr) {
    if (strlen(cstr)) {
        data = new char[strlen(cstr) + 1];
        strcpy(data, cstr);
    } else {
        data = new char[1];
        *data = '\0';
    }
}

inline String::String(const String &str) {
    data = new char[strlen(str.data) + 1];
    strcpy(data, str.data);
}

inline String& String::operator = (const String& str) {
    if (this == &str) {
        return *this;
    }

    delete[] data;
    data = new char[strlen(str.data) + 1];
    strcpy(data, str.data);
    return *this;
}

inline String::~String() {
    delete[] data;
}

ostream& operator << (ostream& os, const String& str) {
    os << str.get_c_str();
    return os;
}

#endif //STRING_STRING_H
