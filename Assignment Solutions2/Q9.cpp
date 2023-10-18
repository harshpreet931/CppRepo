#include <bits/stdc++.h>
using namespace std;

char m[27] = {' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

vector<string> p(string n) {
    if (n.empty()) return {""}; vector<string> f;
    if (n[0] != '0') {vector<string> r = p(n.substr(1)); for (const string& s : r) f.push_back(m[n[0] - '0'] + s);}
    if (n.size() >= 2 && (n[0] == '1' || (n[0] == '2' && n[1] <= '6'))) {vector<string> r = p(n.substr(2)); for (const string& s : r) f.push_back(m[stoi(n.substr(0, 2))] + s);}
    return f;
}

int main() {
    string n; cin >> n; vector<string> r = p(n); sort(r.begin(), r.end()); for (const string& s : r) cout << s << endl;
    return 0;
}
