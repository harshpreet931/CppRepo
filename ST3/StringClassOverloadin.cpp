#include <iostream>
#include <cstring>
using namespace std;

class String{
public:
    char * s;
    int len;

    String(char * ch){
        s = new char[strlen(ch) + 1];
        strcpy(s,ch);
    }

    void display(){
        cout << s << endl;
    }

    String operator+(String ch){
        char * newStr = new char[strlen(s) + strlen(ch.s) + 1];
        strcpy(newStr,s);
        strcat(newStr,ch.s);
        return String(newStr);
    }

};

int main(){
    char * arr = new char[100]; cin >> arr; char * arr2 = new char[100]; cin >> arr2;
    String s1(arr);
    String s2(arr2);
    String s3 = s1 + s2;
    s3.display();
    return 0;
}