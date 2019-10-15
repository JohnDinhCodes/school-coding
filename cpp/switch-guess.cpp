// Write a C++ program that uses a switch statement, call it guess, 
// ask user to guess a number 1 - 4, and tell him if he guessed correct otherwise display a message

#include <iostream>

using namespace std;

int main()
{
    string TRY_AGAIN = "\nTry again?";
    
    int guessInput;
    int answer = 4;
    while (guessInput != answer) {

        cout << "Guess a number between 1 - 4" << endl;
        cin >> guessInput;

        switch (guessInput) {
            case 1: cout << "Not even close!" << TRY_AGAIN << endl;
            break;

            case 2: cout << "A little far off there." << TRY_AGAIN << endl;
            break;

            case 3: cout << "So close!" << TRY_AGAIN << endl;
            break;

            case 4: cout << "You guessed the right number!";
            break;
        }
    }

    return 0;
}