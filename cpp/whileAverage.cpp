#include <iostream>

using namespace std;

int main()
{
    double numOfNums = 0;
    double average = 0;
    double temp = 0;
    int counter = 0;

    cout << "How many numbers do you want to enter?" << endl;
    cin >> numOfNums;

    while(counter < numOfNums) {
        cout << "Enter a number" << endl;
        cin >> temp;
        average += temp;
        counter++;
    }

    average /= numOfNums;

    cout << "The average of those numbers is " << average << endl;
    return 0;
}