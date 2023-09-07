#include <iostream>
using namespace std;

int main(){
    int bt;
    cin >> bt;
    switch(bt){
        case 1:
        cout << "button 1 is pressed";
        break;
        case 2:
        cout << "button 2 is pressed";
        break;
        default:
        cout << "no button is pressed";
        break;
    }
    return 0;
}