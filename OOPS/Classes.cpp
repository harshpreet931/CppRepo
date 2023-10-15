#include <iostream>
using namespace std;

class Car{
    int engine;
    int price;
public:
    void set(int e,int p){
        engine = e;
        price = p;
    }
    int get_engine(){
        return engine;
    }
    int get_price(){
        return price;
    }
    void moving(){
        cout << "Car is moving" << endl;
    }
};

int main(){
    Car c1;
    c1.set(10,20);
    cout << c1.get_engine() << endl;
    cout << c1.get_price() << endl;
    c1.moving();

}
