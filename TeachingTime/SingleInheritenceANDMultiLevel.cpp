//
// Created by HARSHPREET SINGH on 23.11.2023.
//
#include <iostream>
#include <cstring>
using namespace std;

class School{ // parent class - base class
public:
    char principal[100];
    char address[100];
};

class Class10 : public School{ // child - derived class
public:
    int noOfStudents;
    char classTeacher[100];
    Class10(){

    }
    Class10(int n, char * cT, char * pri, char * add){
        noOfStudents = n;
        strcpy(classTeacher,cT);
        strcpy(principal,pri);
        strcpy(address,add);
    }

    void diplay(){
        cout << noOfStudents << " " << classTeacher << " " << principal << " " << address << endl;
    }

};

class Student : public Class10{ // MultiLevel Inheritence
public:
    int rollno;
    char name[100];
    Student(int r, char * na, int n, char * ct, char * pri, char * add){
        rollno = r;
        strcpy(name,na);
        noOfStudents = n;
        strcpy(classTeacher,ct);
        strcpy(principal,pri);
        strcpy(address,add);
    }

    void diplay(){
        cout << rollno  <<" " << name << " " << noOfStudents << " " << classTeacher << " " << principal << " " << address << endl;
    }
};

int main(){
    Class10 c1(30, "ABC", "XYZ", "LMNO ROAD");
    c1.diplay();
    Student s1(1, "ACB", 10, "asdjkla","sadkjl","ajlsdka");
    s1.diplay();
    return 0;
}


