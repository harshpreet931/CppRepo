//
// Created by HARSHPREET SINGH on 02.11.2023.
//
#include <bits/stdc++.h>
using namespace std;

char mapping[27] = {' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

vector<string> gen(string number){
    // base case
    if(number.empty()) return {""};


    vector<string> cs;

    if(number[0] != '0'){
        vector<string> restCS = gen(number.substr(1));
        for(string i : restCS){
            cs.push_back(mapping[number[0] - '0'] + i);
        }
    }

    if(number.size() >= 2 && (number[0] == '1' || (number[0] == '2' && number[1] <= '6'))){
        vector<string> restCS = gen(number.substr(2));
        for(string i : restCS){
            cs.push_back(mapping[stoi(number.substr(0,2))] + i);
        }
    }

    return cs;

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