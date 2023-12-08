#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
//    string s;
//    getline(cin, s);
//
//    string res;
//    int len = 0;
//    int maxLen = 0;
//    int start = 0;
//
//    for (int i = 0; i <= s.length(); i++) {
//        if (s[i] == ' ' || i == s.length()) {
//            if (len > maxLen) {
//                res = s.substr(start, len);
//                maxLen = len;
//            }
//            start = i + 1;
//            len = 0;
//        } else {
//            len++;
//        }
//    }
//
//    cout << "Longest word: " << res << endl;
//    return 0;

//        string s;
//        getline(cin,s);
//        stringstream ss(s);
//        string word;
//        string longestWord = "";
//        while(ss >> word){
//            cout << word << endl;
//            if(word.size() > longestWord.size()){
//                longestWord = word;
//            }
//        }
//        cout << longestWord << endl;
//
//        string s;
//        getline(cin,s);
//        stringstream ss(s);
//        string word;
//        string lw;
//        while (ss >> word){
//            if(word.size() > lw.size()){
//                lw = word;
//            }
//        }

        // "Hello I am in library"

        string s; getline(cin ,s);
        stringstream stream(s);

        string word;
        string longestWord;
        while(stream >> word){
            if(word.size() > longestWord.size()){
                longestWord = word;
            }
        }
        cout << longestWord << endl;

}
