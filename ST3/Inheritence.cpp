//
// Created by HARSHPREET SINGH on 16.11.2023.
//
#include <bits/stdc++.h>
using namespace std;

class Employee{
public:
    int id;
    char name[100];
};

class Manager : public Employee{
public:
    int salary;
    char dept[100];

    void set_data(int empId, char *empN, int sal, char * dep){
        id = empId;
        strcpy(name, empN);
        salary = sal;
        strcpy(dept,dep);
    }

    void get_data(){
        cout << "id : " << id << endl;
        cout << "name : " << name << endl;
        cout << "salary : " << salary << endl;
        cout << "department : " << dept << endl;
    }
};

int main(){
    Manager m1;
    m1.set_data(1,"WAIFU",1000,"software");
    m1.get_data();
    cout << m1.id << endl;
    return 0;
}

// VIMP
// public if base class then all inheritance will become public, protected, private when inheritance accessibility is given
// protected then, protected, protected, private
// private then, - - - not possible whatever the accessibility is given in the class