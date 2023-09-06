#include <stdio.h>

// function overloading
// kinda polymorphism
void sum(int a,int b){
    printf("%d\n",a+b);
}

void sum(int a,double b){
    printf("%f\n", a+b);
}

int main(){
    int a = 10 , b = 50;
    sum(a,b);
    sum(105,29.2);
}