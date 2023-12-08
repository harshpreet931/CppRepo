//
// Created by HARSHPREET SINGH on 5/12/2023.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> li;
    li.push_back(1);
    li.push_back(2);
    li.push_front(3);
    li.push_front(4);

    list<int> :: iterator it;
    for(it = li.begin(); it!=li.end();it++){
        cout << *it << endl;
    }

    for(auto i : li){
        cout << i << endl;
    }
    cout << "last : " << li.back() << endl;
    cout << "front : " << li.front() << endl;
    cout << li.empty() << endl;
    li.clear();
    cout << li.empty() << endl;
    return 0;
}