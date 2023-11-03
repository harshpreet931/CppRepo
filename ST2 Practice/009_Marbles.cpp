//
// Created by HARSHPREET SINGH on 01.11.2023.
//
#include <bits/stdc++.h>
using namespace std;

void properMethodDutchNationalFlag(vector<int>& marbles){
    int low = 0, mid = 0, high = marbles.size() - 1;
    while(mid <= high){
        if(marbles[mid] == 0){
            swap(marbles[low],marbles[mid]);
            low++; mid++;
        }
        else if(marbles[mid] == 1){
            mid++;
        }
        else{
            swap(marbles[mid],marbles[high]);
            high--;
        }
    }
}

int main(){
    vector<int> marbles = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
    // see the proper way to solve this is using a Variation of Dutch National Flag but...  You can cheese this using just a normal sort.
    properMethodDutchNationalFlag(marbles);
    for(int i : marbles) cout << i << " "; cout << endl;

    // cheese way just 3 lines without input.
    vector<int> marbles2 = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
    sort(marbles2.begin(),marbles2.end());
    for(int i : marbles2) cout << i << " "; cout << endl;
}
