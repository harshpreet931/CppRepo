#include <iostream>
using namespace std;

int main(){
    int ccount = 0;
    int scount = 0;
    char ch;
    while(cin >> ch){

        if('A'<=ch && ch<='Z') ccount++;
        if('a'<=ch && ch<='z') scount++;
    }

    cout << ccount << scount;
}