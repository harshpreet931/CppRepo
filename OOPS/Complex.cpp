#include <iostream>
using namespace std;

class cmp{
    int real;
    int img;
public:
    // Constructor to initialize real and imaginary parts
    cmp(int r, int i){
        real = r;
        img = i;
    }

    // Display the complex number
    void display(){
        cout << real << " + " << img << "i" << endl;
    }

    // Friend function to add two complex numbers
    friend cmp add(cmp c1, cmp c2);

    // Friend function to multiply two complex numbers
    friend cmp multiply(cmp c1, cmp c2);
};

// Friend function definition to add two complex numbers
cmp add(cmp c1, cmp c2){
    int nr = c1.real + c2.real;
    int ni = c1.img + c2.img;
    return cmp(nr, ni);
}

// Friend function definition to multiply two complex numbers
cmp multiply(cmp c1, cmp c2){
    int nr = c1.real * c2.real - c1.img * c2.img;
    int ni = c1.real * c2.img + c1.img * c2.real;
    return cmp(nr, ni);
}

int main(){
    cmp c1(2, 3);
    cmp c2(1, 4);

    cmp result_add = add(c1, c2);
    cmp result_multiply = multiply(c1, c2);

    cout << "Result of addition: ";
    result_add.display();

    cout << "Result of multiplication: ";
    result_multiply.display();

    return 0;
}
