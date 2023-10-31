#include <bits/stdc++.h>
using namespace std;

class bA{
    int bal;
public:
    bA(int a){
        bal = a;
    }
    void display() const{
        cout << bal << endl;
    }
    void with(int a){
        bal-=a;
    }
    void dep(int a){
        bal+=a;
    }
};

int main(){
    bA b(342);
    b.display();9
    b.with(100);
    b.display();
    b.dep(200);
    b.display();

    return 0;
}