#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int id;
    vector<int> grades;

    Student(string name, int id, const vector<int> grades) : name(name), id(id), grades(grades) {}

    void displayInfo() {
        cout << name << endl;
        cout << id << endl;
        for (int grade : grades) {
            cout << grade << " ";
        }
        cout << endl;
    }

    friend class GradeBook;
};

class GradeBook {
public:
    int getAverageGrade(const Student& student) {
        int sum = 0;
        for (int grade : student.grades) {
            sum += grade;
        }
        return sum/5;
    }
};

int main() {
    vector<int> gd = {1, 2, 3, 4, 5};
    Student s1("Harsh", 123, gd);
    GradeBook g1;
    s1.displayInfo();
    cout << g1.getAverageGrade(s1) << endl;
    return 0;
}
