#include <bits/stdc++.h>
using namespace std;

string rem(string str){
    if(str.length() < 2) return str;

    int i = 0;
    while(i<str.length()-1 && str[i] != str[i-1]){
        i++;
    }
    if(i == str.length() - 1) return str;

    int j = i+1;
    while(j<str.length() && str[j] == str[i]){
        j++;
    }

    return rem(str.substr(0,i) + str.substr(j));
}

int main(){
    string str = "aabbccddeeaadakkfdjks";
    cout << rem(str) << endl;
}
