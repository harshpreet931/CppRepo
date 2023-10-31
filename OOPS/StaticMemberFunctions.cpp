// member functions which are not allowed to change the value of data members.

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
    void display() const{ // can display the variables but, can't change them. I.e read only.
        cout << name << endl;
        cout << age << endl;
    }
};

int main(){
    Emp e("abc",123);
    e.display();
    return 0;
}
