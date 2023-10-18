#include <bits/stdc++.h>
using namespace std;

int convert(string str, int idx = 0) {
    if (idx == str.length() - 1) {
        return str[idx] - '0';
    } else {
        return (str[idx] - '0') * pow(10, str.length() - idx - 1) + convert(str, idx + 1);
    }
}

int main() {
    string str; cin >> str;cout << convert(str);
    return 0;
}
