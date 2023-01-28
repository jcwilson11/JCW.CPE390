#include <iostream>
using namespace std;


//Getters and Setters allow you to control the access to the diff elements in created classes
class Movie {
    private: 
        string rating;
    public: //public means that any other program can access the elements
        string title;
        string director;
    
    Movie(string aTitle, string aDirector, string aRating) {
        title = aTitle;
        director = aDirector;
        setRating(aRating);
    }
    void setRating(string aRating) {
        if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR") {
            rating = aRating;
        } else {
            rating = "NR";
        }
    }

    string getRating() {
        return rating;
    }
};

int main() {
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");

    avengers.setRating("Dog");

    cout << avengers.getRating() << endl;

    return 0;
}
