//
// Created by HARSHPREET SINGH on 27/11/2023.
//
#include <iostream>
using namespace std;

class Time{
public:
    int hr,min;
    Time(int mins){
        hr = mins/60;
        min = mins%60;
    }
    void diplay(){
        cout << hr << " : " << min << endl;
    }

    Time(int hrs, int mins){
        hr = hrs;
        min = mins;
    }

    operator int(){
        return hr * 60 + min;
    }
};

int main(){
    int min; cin >> min;
    Time obj(min);
    obj.diplay();

    //----------------------
    cout << "\n";
    Time obj2(1,40);
    int result = obj2;
    cout << result;
    return 0;
}
