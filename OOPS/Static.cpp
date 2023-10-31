#include <bits/stdc++.h>
using namespace std;


class Emp{
    char name[100];
    int age;
public:
    Emp(char * n, int a){
        strcpy(name,n);
        age = a;
    }
    void display() const{
        cout << name << endl;
        cout << age << endl;
    }
    void display(){
        cout << name << endl;
        cout << age << endl;
    }
};

int main(){
    const Emp e2("a",123);
    e2.age = 12;

    e2.display();
    e2.display1();
    return 0;
}
