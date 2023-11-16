#include<iostream>
using namespace std;

void mapped(char *in, char *out, int i, int j, int len){
    // base case
    if(i == len){
        out[j] = '\0';
        cout << out << endl;
        return;
    }

    int num = in[i]-'1';
    char c = char(num+'A');
    out[j] = c;
    mapped(in, out, i+1, j+1, len);
    if(i+1 < len){
        int num = (in[i]-'0')*10+(in[i+1]-'0');
        if(num <= 26){
            num = num-1;
            char c = char(num+'A');
            out[j] = c;
            mapped(in, out, i+2, j+1, len);
        }
    }
}

int main(){
    char in[4] = "123";
    char out[4];
    int len = 3; // Length of input string
    mapped(in, out, 0, 0, len);
    return 0;
}
