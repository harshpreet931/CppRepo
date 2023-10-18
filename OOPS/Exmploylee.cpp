#include <bits/stdc++.h>
using namespace std;

class Emp{
public:
    int empid; char name[100]; static int count;

    void set(int id, char * n){
        count++;
        empid = id;
        strcpy(name,n);
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
    Emp e1,e2;
    e1.set(1,"WAIFU1");
    e2.set(2,"WAIFU2");
    cout << Emp::getcount << endl;
}