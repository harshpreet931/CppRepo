//
// Created by HARSHPREET SINGH on 30/11/2023.
//
#include <iostream>
#include <cstring>

class MyString {
private:
    char* str;

public:
    MyString(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    bool operator>(const MyString& other) const {
        return (strcmp(str, other.str) > 0);
    }

    bool operator<(const MyString& other) const {
        return (strcmp(str, other.str) < 0);
    }
};

int main() {
    MyString str1("apple");
    MyString str2("banana");

    if (str1 > str2) {
        std::cout << "str1 is greater than str2" << std::endl;
    } else if (str1 < str2) {
        std::cout << "str1 is less than str2" << std::endl;
    } else {
        std::cout << "str1 is equal to str2" << std::endl;
    }

    return 0;
}