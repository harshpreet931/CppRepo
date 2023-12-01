//
// Created by HARSHPREET SINGH on 30/11/2023.
//
#include <iostream>
#include <string>

using namespace std;

class StringManipulator {
private:
    string str;

public:
    StringManipulator(string s){
        str = s;
    }

    bool operator>(StringManipulator other){
        return str > other.str;
    }

    bool operator<(StringManipulator other){
        return str < other.str;
    }

    bool operator==(StringManipulator other){
        return str == other.str;
    }
};

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    StringManipulator sm1(str1);
    StringManipulator sm2(str2);

    string g,s,e;
    (sm1 > sm2) ? g = "true" : g = "false";
    (sm1 < sm2) ? s = "true" : s = "false";
    (sm1 == sm2) ? e = "true" : e = "false";
    cout << "String1 > String2: " << g << endl;
    cout << "String1 < String2: " << s << endl;
    cout << "String1 == String2: " << e << endl;

    return 0;
}
