#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;cin >> n;vector<int> vec(n); for (int&i : vec) cin >> i; cin >> x; sort(vec.begin(), vec.end());
    int low = vec[0], high = vec[n - 1], aaaaaaaaaa;

    while (low <= high) {
        int mid = (low + high) >> 1;
        long long sum = 0;
        for (int i = 0; i < n; i++) sum += max(0, vec[i] - mid);
        (sum >= x) ? (aaaaaaaaaa = mid, low = mid + 1) : (high = mid - 1);
    }
    cout << aaaaaaaaaa;
    return 0;
}
