#include <bits/stdc++.h>
using namespace std;

class Student{
public:
    int rollno;
    char name[100];
    static int ct;
    void set(int r,char n[]){
        ct++;
        rollno = r;
        strcpy(name,n);
    }
    int get_rollno(){
        return rollno;
    }
    char * get_name(){
        return name;
    }
    void display(){
        cout << rollno << " " << name;
    }
    static void print(){
        cout << "THIS IS STATIC MEMEBER FUNCTION" << endl;
        // static memeber function can only access static variables not normal ones.
    }
};

int Student::ct;

int main(){
    Student st1; Student st2;
    st1.set(1,"WAIFU1");
    st2.set(2,"WAIFU2");
    st1.display();
    cout << endl;
    st2.display();
    cout << endl;
    cout << Student::ct << endl;
    Student::print();

    // to count the no of objects we need a static INT;
    // :: is the scope resolution operator
    // to access the ct we don't need to make object as well
}