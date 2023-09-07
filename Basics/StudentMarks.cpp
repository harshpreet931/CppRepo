#include <iostream>
using namespace std;

int main(){
    int marks;
    cin >> marks;

    if(marks > 80) cout << "excellent" << endl;
    else if(marks > 30) cout << "pass" << endl;
    else cout << "FAIL" << endl;

    // int i = 0;
    // switch(marks){
    //     case 30:
    //     cout << "pass";
    //     break;
    //     case 80:
    //     cout << "EXcellent";
    //     break;
    //     default:
    //     cout << "fail";
    //     break;
    // } doesn't work obviously

}