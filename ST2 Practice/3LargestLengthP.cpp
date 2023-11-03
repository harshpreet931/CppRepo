#include <iostream>
#include <algorithm>
using namespace std;

void lar(string names[], int size){
    if(size < 3) return;

    sort(names, names + size, [](const string& a, const string& b){
        return a.length() > b.length();
    });

    cout << names[2] << endl;
}

int main(){
    int size1;
    cout << "Enter the size of contestants1 array: ";
    cin >> size1;

    string contestants1[size1];
    cout << "Enter " << size1 << " strings for contestants1 array:" << endl;
    for(int i = 0; i < size1; i++){
        cin >> contestants1[i];
    }

    lar(contestants1, size1);
}
