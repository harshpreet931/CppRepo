//
// Created by HARSHPREET SINGH on 21.11.2023.
//
#include <iostream>
#include <cstring>
using namespace std;

//class Khushi{
//    char surname[100];
//    int rollno;
//    int age;
//
//public:
//    Khushi(char * sur, int rno, int a){
//        strcpy(surname, sur);
//        rollno = rno;
//        age = a;
//    }
//
//    void display(){
//        cout << surname << " " << rollno << " " << age << endl;
//    }
//};

class Section{
    char name[100]; // 100 bytes --> 1 char == 1 byte
    int size; // 4 bytes
    char teacher[100]; // 100 bytes

public:
    Section(char * n, int s, char * t){
        strcpy(name,n);
        size = s;
        strcpy(teacher,t);
    }

    ~Section(){
        delete[] name;
        delete[] teacher;
    }

    void display(){
        cout << "NAME :" << name << " " << "SIZE : " << " " << size << "Teacher : " << teacher << endl;
    }
};

int main(){
//    char surname[100]; cin >> surname; int age; int rollno; cin >> age >> rollno;
//    Khushi k1(surname, rollno, age);
//    k1.display();
//

    Section s1("G7",80,"ABCD");
    s1.display();
    Section s2("G9",80,"AOISJDaklD");
    s2.display();
    return 0;
}