//
// Created by HARSHPREET SINGH on 30/11/2023.
//
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Book {
private:
    string title;
    string author;
    int publicationYear;

public:
    // Constructor
    Book(string t, string a, int year){
        title = t;
        author = a;
        publicationYear = year;
        cout << "Book Created: " << title << endl;
        cout << "Book author: " << author << endl;
    }

    // Destructor
    ~Book() {
        cout << "Destruction of Book: " << title << endl;
    }
};

int main() {
    string bookTitle, authorName;
    int year;

    // Input
    getline(cin, bookTitle);
    getline(cin, authorName);
    cin >> year;
    cin.ignore(); // Ignore newline character

    // Creating object of Book class
    Book bookObj(bookTitle, authorName, year);

    return 0;
}
