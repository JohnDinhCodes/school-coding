#include <iostream>

using namespace std;

int main () {
    char userInput;

    cout << "Do you like c++?" << endl;
    cout << "Enter (Y) for yes\nEnter (N) for no" << endl;
    
    cin >> userInput;
    userInput = toupper(userInput);
    cout << "You entered " << userInput << endl;

    if ( userInput == 'Y') {

        cout << "So do I!" << endl;
        return 0;

    } else if ( userInput == 'N') {

        cout << "You may change your mind..." << endl;
        return 0;

    } else {

        cout << "You did not enter (Y)es or (N)o\n Make up your mind!" << endl;
        return 0;

    }

}