#include <bits/stdc++.h>
using namespace std;

class Student{
    char name[100];
    int rollno;

public:
    void set(char name2[], int rollno2);

    string get_name();
    int get_rollno();
};

void Student::set(char n[],int r){
    strcpy(name,n);
    rollno = r;
}

string Student::get_name() {
    return name;
}
// membership label. :: scope resolution operator
int Student::get_rollno() {
    return rollno;
}

int main() {
    Student s1;
    char name[100] = "Behal";
    s1.set(name, 386);
    cout << s1.get_name() << endl;
    cout << s1.get_rollno() << endl;
}
