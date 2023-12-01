//
// Created by HARSHPREET SINGH on 17.11.2023.
//
#include <iostream>
#include <string>
using namespace std;

template<typename T>
class Vector{
private:
    T * arr;
    int size;
    int capacity;
public:
    Vector(){
        size = 0;
        capacity = 2;
        arr = new T[capacity];
    }
    ~Vector(){
        delete[] arr;
    }

    void push_back(T value){
        if(size == capacity){
            capacity *= 2;
            T* newarr = new T[capacity];
            for(int i=0;i<size;i++){
                newarr[i] = arr[i];
            }
            delete[] arr;
            arr = newarr;
        }
        arr[size++] = value;
    }

    void pop_back(){
        if(size>0){
            size--;
        }
    }

    T operator[](int i){
        return arr[i];
    }

    int getsize(){
        return size;
    }
};


int main(){
    Vector <string>v1;
    v1.push_back("WAIFU1"); v1.push_back("WAIFU2"); v1.push_back("WAIFU3");
    for(int i=0; i<v1.getsize() ;i++) cout << v1[i] << " "; cout << endl;
    v1.pop_back();
    for(int i=0; i<v1.getsize() ;i++) cout << v1[i] << " "; cout << endl;
    return 0;
}