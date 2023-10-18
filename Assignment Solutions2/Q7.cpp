#include <iostream>
using namespace std;

void toh(int n, char source, char target, char helper) {
    if (n > 0) {
        toh(n - 1, source, helper, target);
        cout << "Moving ring " << n << " from " << source << " to " << target << endl;
        toh(n - 1, helper, target, source);
    }
}

int main() {
    int n; cin >> n; toh(n, 'A', 'B', 'C'); return 0;
}
