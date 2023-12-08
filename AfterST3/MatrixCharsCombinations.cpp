#include <bits/stdc++.h>
using namespace std;

void matrixAndComb(vector<vector<char>> v, int i, int m, int n, string str){

    if(i == m){
        cout<<str<<" ";
        return ;
    }

    for(int j=0; j<n; j++)
        matrixAndComb(v, i+1, m, n, str + v[i][j]);
}

int main()
{
    int m,n; cin>>m>>n;
    vector<vector<char> > v( m , vector<char> (n));
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
            cin>>v[i][j];
    }
    string str = "";
    matrixAndComb(v , 0, m, n, str);

    return 0;
}