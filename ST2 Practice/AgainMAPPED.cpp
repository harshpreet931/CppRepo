//
// Created by HARSHPREET SINGH on 04.11.2023.
//
#include <bits/stdc++.h>
using namespace std;

char mapping[27] = {' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

vector<string> gen(string num){
    if(num.empty()) return {""};

    vector<string> res;
    if(num[0] != '0'){
        vector<string> smol = gen(num.substr(1));
        for(string i : smol){
            res.push_back(mapping[num[0] - '0'] + i);
        }
    }
    if(num.size() >= 2 && (num[0] == '1' || (num[0] == '2' && num[1] <= '6'))){
        vector<string> smol = gen(num.substr(2));
        for(string i : smol){
            res.push_back(mapping[stoi(num.substr(0,2))] + i);
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