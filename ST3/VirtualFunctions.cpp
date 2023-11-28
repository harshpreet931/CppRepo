//
// Created by HARSHPREET SINGH on 28/11/2023.
//
#include <iostream>
using namespace std;

class A{
public:
     virtual void display(){ // virtual binds it to the runtime
         cout << "Class A" << endl;
     } // not a pure virtual function

     virtual void disp() = 0; // pure virtual function
// pure virtual function will make an abstract class
// abstract class is where it has alteast 1 pure virtual function
};

class B : public A{
public:
    void display(){
        cout << "Class B" << endl;
    }
    void disp(){
        cout << "OVERRIDE" <<endl;
    }
};

class C : public B{
public:
    void display(){
        cout << "Class C" << endl;
    }
};
int main(){
    A* aptr;
    C obj;
    aptr = &obj;
    aptr->display();

    A*ptr = new C();
    (*ptr).display();

    A*ptr2 = new B();
    (*ptr2).display();

    delete aptr;
    delete ptr;
    delete ptr2;
    aptr = NULL;
    ptr = NULL;
    ptr2 = NULL;

    return 0;
}