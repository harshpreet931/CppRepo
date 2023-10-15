#include <bits/stdc++.h>
using namespace std;

class Student{
    char name[100];
    int rollno;

public:
    void set(char name2[], int rollno2){
        strcpy(name,name2);
        rollno = rollno2;
    }

    string get_name(){
        return name;
    }
    int get_rollno(){
        return rollno;
    }
};

int main() {
    Student s1;
    char name[100] = "Behal";
    s1.set(name, 386);
    cout << s1.get_name() << endl;
    cout << s1.get_rollno() << endl;
}
