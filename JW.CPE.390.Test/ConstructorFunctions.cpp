#include <iostream>
using namespace std;

//a constructor is a function that will be called whenevr we create a book object
class Book {
    public:
        string title;
        string author;
        int pages;
        
        Book(string aTitle, string aAuthor, int aPages) { //storing the paramters in the constructor saves work and code for later. Now when making a new book, only onm line is needed and all the variables can be stored in the parentheses of the new book
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }

        Book() {  //a class can have multiple constructors. to call this one, no parameters are needed in the parentheses
            title = "no title";
            author = "no author";
            pages = 0;
        }
        
        /*
        //string name ill print out whatever name parameter we put in the parentheses of each new book added
        Book(string name) { //a constructor. Ran everytime we create a new book
            cout << name << endl;
        }
        */

};

int main() {
    Book book1("Harry Potter", "JK Rowling", 500); //calls the same way as a data type (int, string, etc)
    Book book2("Percy Jackson", "Rick Riordan", 700 ); //calls the same way as a data type (int, string, etc)
    Book book3;

    cout << book1.title << endl;
    cout << book3.title;
   
   
   
   
    /*
    Book book1("Harry Potter"); //calls the same way as a data type (int, string, etc)
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    Book book2("Percy Jacksoon"); //calls the same way as a data type (int, string, etc)
    book2.title = "Percy Jackson";
    book2.author = "Rick Riordan";
    book2.pages = 700;

    cout << book1.pages << endl;
    cout << book2.title;
    */

   



    return 0;
}