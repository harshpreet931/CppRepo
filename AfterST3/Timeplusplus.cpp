#include <iostream>
using namespace std;

class Time24 {
private:
    int hours;
    int minutes;
public:
    Time24(int h, int m){
        hours = h;
        minutes = m;
    }

    Time24 operator++() {
        minutes = (minutes + 1) % 60;
        if (minutes == 0) {
            hours = (hours + 1) % 24;
        }
        return *this;
    }

    Time24 operator--() {
        minutes = (minutes - 1 + 60) % 60;
        if (minutes == 59) {
            hours = (hours - 1 + 24) % 24;
        }
        return *this;
    }

    void print12HourFormat() {
        int hour12 = hours % 12;
        string period = (hours < 12) ? "AM" : "PM";
        if (hour12 == 0)
            hour12 = 12;

        cout << "Time in 12-hour format: " << hour12 << ":" << (minutes < 10 ? "0" : "") << minutes << " " << period << endl;
    }
};

int main() {
    int h, m;
    cout << "Enter time in 24-hour format (hours minutes): ";
    cin >> h >> m;

    Time24 time(h, m);

    ++time;
    time.print12HourFormat();

    ++time;
    time.print12HourFormat();

    --time;
    time.print12HourFormat();

    return 0;
}
