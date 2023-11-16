#include <bits/stdc++.h>
using namespace std;

class String {
public:
    char* s;
    int length;

    String(char* ch) {
        s = new char[strlen(ch) + 1];
        strcpy(s, ch);
    }

    void display() {
        cout << s << endl;
    }

    String operator+(char* ch) {
        char* newStr = new char[strlen(s) + strlen(ch) + 1];
        strcpy(newStr, s);
        strcat(newStr, ch);
        return String(newStr);
    }

    bool operator<(String s1) {
        return strcmp(s, s1.s) < 0;
    }

    bool operator>(String s1) {
        return strcmp(s, s1.s) > 0;
    }

    bool operator==(String s1) {
        return strcmp(s, s1.s) == 0;
    }
};

int main() {
    String s1("number");
    char* s2 = "smol";
    String s3("WAIFU");

    String s4 = s1 + s2;
    s4.display();
    s1.display();
    cout << (s1 < s3) << endl;
    cout << (s1 > s3) << endl;
    cout << (s1 == s3) << endl;
}
