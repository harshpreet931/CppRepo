#include <iostream>
using namespace std;

void perm(char *in, int i){
    // base case
    if(in[i] == '\0'){
        cout << in << endl;
        return;
    }

    // recursive case
    for(int j = i;in[j]!='\0';j++){
        swap(in[j],in[i]);
        perm(in,i+1);
        swap(in[j],in[i]);
    }
}

int main(){
    char in[100];
    cin >> in;
    perm(in,0);
    return 0;
}