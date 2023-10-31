#include <iostream>
using namespace std;

class complex{
    int real;
    int img;
public:
    complex(int r,int i){
        real = r;
        img = i;
    }
    void display(){
        cout << real << " + " << img << "i" << endl;
    }
    friend complex add(complex c1, complex c2);
};

complex add(complex c1, complex c2){
    int nr = c1.real + c2.real;
    int ni = c1.img + c2.img;
    return complex(nr, ni);
}

int main(){
    complex c1(2, 3);
    complex c2(1, 4);

    complex result_add = add(c1, c2);

    cout << "Result of addition: ";
    result_add.display();


    return 0;
}
