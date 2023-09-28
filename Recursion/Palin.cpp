// Determine whether a string is a palindrome or not
#include<iostream>
using namespace std;


bool palindrome(string s, int index, int length){
    if(index==length-index){
        return true;
    }
    cout<<s[index]<<" "<<s[length-index]<<endl;

    return((s[index]==s[length-index]) && palindrome(s,index+1,length) );

}

int main(){
    string s="aaaaaaaa";
    int index=0;
    int length=s.length();
    cout<<palindrome(s,index,length-1)<<endl;


    return 0;
}