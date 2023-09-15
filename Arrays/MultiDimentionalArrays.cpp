//
// Created by HARSHPREET SINGH on 12.09.2023.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12}; // first is row then is column

//    for(auto & i : a){      you can take in input like this as well. just a different way ignore it.
//        for(int & j : i){
//            cin >> j;
//        }
//    }

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\n";
    for(int j = 0;j<4;j++){
        for(int i=0;i<3;i++){
            cout << a[i][j] << " ";
        }
        cout<<endl;
    }
    cout << "\n";
    for(int j = 0;j<4;j++){
        for(int i=0;i<3;i++){
            cout << a[i][j] << " ";
        }
        cout<<endl;
    }

    cout << "\n";
    for(int j = 0;j<4;j++){
        int len = 3;
        for(int i=0;i<3 && i%2==0;i++){
            cout << a[i][j];
        }
        cout << endl;
    }


}
