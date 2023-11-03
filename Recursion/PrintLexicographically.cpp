//
// Created by HARSHPREET SINGH on 31.10.2023.
//
#include <bits/stdc++.h>
using namespace std;

void lex(int n){
    vector<string> s;

    for(int i=1;i<=n;i++){
        s.push_back(to_string(i));
    }
    sort(s.begin(),s.end());
    vector<int> ans;

    for(int i=0;i<n;i++) ans.push_back(stoi(s[i]));
    for(int i=0;i<n;i++) cout << ans[i] << " ";
}

//recursive way to solve
void helper(int temp, int n, vector<int>& sol){
    if(temp > n) return;
    sol.push_back(temp);
    helper(temp*10, n, sol);
    if(temp%10!=9){
        helper(temp+1,n,sol);
    }
}

void lexRECURSIVE(int n){
    vector<int> sol;
    helper(1,n,sol);
    for(int i=0;i<sol.size();i++){
        cout << sol[i] << " ";
    }
}

int main(){
    int n; cin >> n;
    lex(n);
    cout << endl;
    lexRECURSIVE(n);
    return 0;
}