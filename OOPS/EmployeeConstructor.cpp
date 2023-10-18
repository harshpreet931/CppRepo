#include <bits/stdc++.h>
using namespace std;

class Emp{
public:
    int empid;
    char name[100];
    static int count;

    // Default values
    Emp() {
        empid = 0;
        strcpy(name, "");
        count++;
    }

    // Parameterized values
    Emp(int id, char* n) {
        empid = id;
        strcpy(name, n);
        count++;
    }

    int getempid(){
        return empid;
    }

    char* getname(){
        return name;
    }

    void display(){
        cout << empid << " " << name << endl;
    }

    static int getcount(){
        return count;
    }
};

int Emp::count=0;

int main(){
    Emp e1(1, "WAIFU1");
    Emp e2(2, "WAIFU2");
    cout << Emp::getcount() << endl;
    e1.display();

}
