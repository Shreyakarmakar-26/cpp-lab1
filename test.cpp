#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // seed random number
    int number = rand() % 100 + 1; // random number between 1-100
    int guess;
    int tries = 0;

    cout << "🎯 Welcome to the Number Guessing Game!\n";
    cout << "I'm thinking of a number between 1 and 100.\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        tries++;

        if (guess > number) {
            cout << "Too high! Try again.\n";
        } else if (guess < number) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "🎉 Correct! You guessed it in " << tries << " tries.\n";
        }
    } while (guess != number);

    return 0;
}
