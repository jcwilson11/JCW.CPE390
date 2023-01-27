#include <iostream>
using namespace std;

//a class is a blueprint for a new data type
//an object is an instance of the blueprint (an example)
// class book lists the blueprnit of data types to make it a book
class Book {
    public:
        string title;
        string author;
        int pages;
};

int main() {
    
    Book book1; //calls the same way as a data type (int, string, etc)
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    Book book2; //calls the same way as a data type (int, string, etc)
    book2.title = "Percy Jackson";
    book2.author = "Rick Riordan";
    book2.pages = 700;

    cout << book1.pages << endl;
    cout << book2.title;

   



    return 0;
}