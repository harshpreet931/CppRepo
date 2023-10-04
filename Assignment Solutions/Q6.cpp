#include <iostream>
#include <unordered_map>

using namespace std;

int maxA(int nums[], int n){
    unordered_map<int,int> m; int len = 0; int count = 0;
    m[0] = -1;

    for(int i=0;i<n;i++){
        if(nums[i] == 0) count--;
        else count++;

        if(m.find(count)!=m.end()) len = max(len,i-m[count]);
        else m[count] = i;
    }
    return len;
}


int main(){
    int n; cin >> n; int nums[n]; for(int i=0;i<n;i++) cin >> nums[i];
    int res = maxA(nums,n);
    cout << res << endl;
    return 0;
}
