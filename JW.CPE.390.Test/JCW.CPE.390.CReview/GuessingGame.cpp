#include <iostream>
using namespace std;

int main() {

    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    cout << "Welcome to the number guessing game! You have three guesses! \n";
    while(secretNum != guess && outOfGuesses == false) {
        if(guessCount < guessLimit) {
        cout << "Enter your guess: \n";
        cin >> guess;
        guessCount++;
        } else {
            outOfGuesses = true;
        }

    }
    if(outOfGuesses) {
        cout << "Loser!";
    } else {
    cout << "Congrats, you win!";
    }

    return 0;
}