//
// Created by HARSHPREET SINGH on 1/12/2023.
//
#include <iostream>
using namespace std;
class Book {
private:
    int pageCount;
public:
    Book(int pages){
        pageCount = pages;
    }
    operator int() const {
        return pageCount;
    }
};
int main() {
    Book book1(300);
    Book book2(450);
    cout << "Pages in Book 1: " << int(book1) << endl; // Should output 300
    cout << "Pages in Book 2: " << int(book2) << endl; // Should output 450
    return 0;
}