#include <iostream>
using namespace std;

int main(){
    int matrix[4][4] = {{1,5,9,10},{12,15,19,20},{25,26,29,31},{36,37,38,39}};
    int key = 29;

    int top = 0, bottom = 3, left = 0, right = 3;

    while(top<=bottom && right>=left){
        if(matrix[top][right]==key) {
            cout << "found : " << top << " and " << right;
            return 0;
        }
        else if(matrix[top][right]<key){
            top++;
        }
        else{
            right--;
        }
    }
    cout << "Not found";
    return 0;

}