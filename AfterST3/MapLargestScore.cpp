#include <bits/stdc++.h>
using namespace std;

int main() {
//    multimap<string, int> mp;
//    mp.insert(make_pair("a", 10));
//    mp.insert(make_pair("b", 20));
//    mp.insert(make_pair("c", 30));
//
//    string largest_name;
//    int largest_value = 0;
//
//    for (auto it : mp) {
//        if (it.second > largest_value) {
//            largest_value = it.second;
//            largest_name = it.first;
//        }
//    }
//
//    cout << "Name: " << largest_name << endl;
//    cout << "Marks: " << largest_value << endl;

    string res; int max;
    int n; cin >> n;
    while(n-->0){
        int a; cin >> a;
        string ans; cin >> ans;
        if(a > max){
            res = ans;
            max = a;
        }
    }
    cout << res;
    return 0;
}
