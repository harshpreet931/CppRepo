#include <bits/stdc++.h>
using namespace std;

int compare(const void *a, const void * b){
    return( *(int *)a - *(int *)b );
}

void fourSum(int a[], int n, int x) {
    int l, r;
    set<vector<int>> result;

    qsort(a, n, sizeof(a[0]), compare);

    for (int i = 0; i < n - 3; i++) {
        for (int j = i + 1; j < n - 2; j++) {
            l = j + 1;
            r = n - 1;

            while (l < r) {
                if (a[i] + a[j] + a[l] + a[r] == x) {
                    vector<int> temp = {a[i], a[j], a[l], a[r]};
                    result.insert(temp);
                    l++;
                    r--;
                } else if (a[i] + a[j] + a[l] + a[r] < x) {
                    l++;
                } else {
                    r--;
                }
            }
        }
    }
    for (const vector<int>& v : result) {
        for (int num : v) {
            cout << num << " ";
        }
        cout << endl;
    }
}
int main(){
    int n; cin >> n; int arr[1000]; for(int i=0;i<n;i++) cin >> arr[i]; int target; cin >> target;
    fourSum(arr,n,target);
    return 0;
}