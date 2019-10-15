#include <iostream>

using namespace std;

int main()
{
    string INPUT_QUESTION = "Enter a number\n";
    
    double average;
    double numOfNums = 0;
    double sum = 0;
    double input = 0;

    cout << "This program finds the average of all the numbers you want to input" << endl;
    cout << "Enter 0 to stop inputting numbers" << endl;
    
    cout << INPUT_QUESTION;
    cin >> input;

do {
    
    sum += input;
    cout << INPUT_QUESTION;
    cin >> input;
    numOfNums++;

}   while (input != 0);

    average = sum / numOfNums;

    cout << "Your average is " << average << endl;

    return 0;
}