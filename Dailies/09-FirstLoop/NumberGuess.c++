#include <iostream>
#include <cstdlib> // provides rand(), srand()
#include <ctime>   // provides time()

using namespace std;

int main()
{
    // This program is a guessing game, but the user only gets one guess.
    string welcome = "I'm thinking of a number between 1 and 100.";
    string prompt = "Enter your guess: ";
    string winner = "Congratulations, you win!";
    string loser = "Sorry, that wasn't it.";

    srand(time(0)); // set up the random number generator
    int lucky_number = 1 + rand() % 100;

    cout << welcome << endl;
    cout << prompt << endl;
    int guess;
    cin >> guess;

    if (guess == lucky_number)
    {
        cout << winner << endl;
    }
    else
    {
        cout << loser << endl;
    }

    return 0;
}