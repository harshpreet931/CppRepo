//
// Created by HARSHPREET SINGH on 1/12/2023.
//
#include<iostream>
using namespace std;

class Time{
public:
    int sec, min, hrs;

    time(int seconds, int minutes, int hours) {
        this->min = minutes;
        this->sec = seconds;
        this->hrs = hours;
    }

    void display() {
        cout << "hours: " << hrs << endl << "minutes: " << min << endl << "seconds: " << sec << endl;
    }

    time operator+(time& temp) {
        time result = *this;
        result.sec += temp.sec;
        result.min += temp.min + (result.sec / 60);
        result.hrs += temp.hrs + (result.min / 60);
        result.min = result.min % 60;
        result.sec = result.sec % 60;
        return  result;
    }
};

int main() {
    Time t1(10, 10, 10);
    Time t2(12, 13, 14);
    Time t3 = t1 + t2;
    t3.display();

    return 0;
}