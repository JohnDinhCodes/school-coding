#include <iostream>

using namespace std;

int main() {

    // INITIAL VARIABLES
    int compareNum0, compareNum1, result;

    // PROGRAM DESCRIPTION
    cout << "This program evaluates two numbers and finds the smaller one!" << endl; 
    
    // ASSIGNS NUMBER TO compareNum0
    cout << "Please enter your first number" << endl;
    cin >> compareNum0;

    // ASSIGNS NUMBER TO compareNum1;
    cout << "Now enter your second number" << endl;
    cin >> compareNum1;

    // IF STATEMENT THAT COMPARES THE NUMBERS
    if ( compareNum0 < compareNum1 ) {
        result = compareNum0;
    } else if ( compareNum1 < compareNum0 ) {
        result = compareNum1;
    } else {
        cout << compareNum0 << " and " << compareNum1 << " have the same value!" << endl;
        return 0; // PREVENTS cout BELOW FROM RUNNING BY ENDING PROGRAM
    }

    // OUTPUTS RESULT VARIABLE (The Smaller Number)
    cout << result << " is the smaller number!" << endl;
    return 0;
}