#include <iostream>

using namespace std;

int main()
{
    double numOfNums = 0;
    double average = 0;
    double temp = 0;

    cout << "How many numbers do you want to enter?" << endl;
    cin >> numOfNums;

    for (int i = 0; i < numOfNums; i++)
    {
        cout << "Enter a number" << endl;
        cin >> temp;
        average += temp;
    }

    average /= numOfNums;

    cout << "The average of those numbers is " << average << endl;;
    return 0;
}