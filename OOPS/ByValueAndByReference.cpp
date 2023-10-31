//
// Created by HARSHPREET SINGH on 20.10.2023.
//

#include <bits/stdc++.h>
using namespace std;
class Emp{
public:
    int id;
    char name[100];
    Emp(char * n, int i){
        id = i;
        strcpy(name,n);
    }
    void display(){
        cout << "id:" << id << endl;
        cout << "name:" << name << endl;
    }
};

void change1(Emp e){
    e.id = 1234;
    strcpy(e.name,"abc");
}

void change2(Emp& e){
    e.id = 8888;
    strcpy(e.name,"def");
}

void change3(Emp* e){
    (*e).id = 200;
    strcpy((*e).name,"WAIFU");
}

int main(){
    Emp e("Harshpreet Singh",1);
    e.display(); cout << endl;
    change1(e);
    e.display(); cout << endl;
    change2(e);
    e.display(); cout << endl;
    change3(&e);
    e.display(); cout << endl;
}
