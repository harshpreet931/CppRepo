#include <bits/stdc++.h>
using namespace std;

void split(vector<int>& a, int i, int s1, int s2, vector<int>& g1, vector<int>& g2) {
    if (i == a.size()) {
        if (s1 == s2) {
            for (int n : g1) cout << n << " ";
            cout << "and ";
            for (int n : g2) cout << n << " ";
            cout << endl;
        }
        return;
    }
    g1.push_back(a[i]); split(a, i + 1, s1 + a[i], s2, g1, g2); g1.pop_back(); g2.push_back(a[i]); split(a, i + 1, s1, s2 + a[i], g1, g2); g2.pop_back();
}

int ways(vector<int>& a, int i, int s1, int s2) {
    if (i == a.size()) return s1 == s2 ? 1 : 0; int w = 0;
    w += ways(a, i + 1, s1 + a[i], s2); w += ways(a, i + 1, s1, s2 + a[i]); return w;
}

int main() {
    int n; cin >> n; vector<int> a(n); for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> g1, g2; int w = ways(a, 0, 0, 0); split(a, 0, 0, 0, g1, g2); cout << w << " ";
    return 0;
}
