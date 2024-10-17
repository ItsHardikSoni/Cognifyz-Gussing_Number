#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int guess;

    // Prompt the user to guess the number
    cout << "Guess the number (between 1 and 100): ";

    // Loop until the user guesses the correct number
    while (true) {
        cin >> guess;

        if (guess > randomNumber) {
            cout << "Lower! Try again: ";
        } else if (guess < randomNumber) {
            cout << "Higher! Try again: ";
        } else {
            cout << "Congratulations! You've guessed the number!" << endl;
            break;  // Exit the loop when the correct number is guessed
        }
    }

    return 0;
}
