//
// Created by HARSHPREET SINGH on 03.11.2023.
//
#include <bits/stdc++.h>
using namespace std;

char arr[27] = {' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

vector<string> gen(string n){
    if(n.empty()) return {""};

    vector<string> res;

    if(n[0] != '0'){
        vector<string> perm = gen(n.substr(1));
        for(string i : perm){
            res.push_back(arr[n[0] - '0'] + i);
        }
    }

    if(n.size() >= 2 && (n[0] == '1' || (n[0] == '2' && n[1] <= '6'))){
        vector<string> perm = gen(n.substr(2));
        for(string i : perm){
            res.push_back(arr[stoi(n.substr(0,2))] + i);
        }
    }

    return res;
}

int main(){
    string num;
    cin >> num;
    vector<string> res = gen(num);
    for(string i : res){
        cout << i << endl;
    }
    return 0;
}