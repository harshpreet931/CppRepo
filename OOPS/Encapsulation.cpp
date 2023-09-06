#include <iostream>
using namespace std;

class Car{
    public:
    int price = 100;
    
    private:
    int price2 = 1000;

    public:
    void set_price(int x){
        if(x>50){
            price = 50;
        }
        else{
            price -= x;
        }
    }
    int get_price(){
        return price;
    }
};

int main(){
    Car x;
    x.price = 0;
    printf("%d\n",x.price);

    // printf("%d",x.price2); will not work cause of private!

    x.set_price(20);
    printf("%d",x.get_price());


}