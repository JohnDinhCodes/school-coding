// Define

//     ; - lets the compiler know that it has reached the end of a command
// cin - takes input from the user
// cout - outputs data to the console
// iostream.h is a library that allows input and output functionality
// endl - ends the line on a string. It is equivalent to \n
// void main() - is the main function the c++ program looks for to run code that returns no value
 

// 1.Write a C++ program that inputs a decimal, a whole integer and a character and outputs them.

#include <iostream>

using namespace std;

int main()
{
    // 1.Write a C++ program that inputs a decimal, a whole integer and a character and outputs them.

    double decimal;
    int integer;
    char character;

    cout << "Enter a decimal" << endl;
    cin >> decimal;
    cout << "Enter an integer" << endl;
    cin >> integer;
    cout << "Enter a single character" << endl;
    cin >> character;

    cout << "Your decimal is: " << decimal << endl;
    cout << "Your integer is: " << integer << endl;
    cout << "Your character is: " << character << endl;

    return 0;
}
// 2. Tell what the following symbols mean, ==, <=, >=, !=.

//      == evaluates what is on the left to what is on the right of operator and returns true if they are equal to one another,
//     or false otherwise

//     <= evaluates if what is on the left is less than or equal to what is on the right and returns true if so,
//     else it returns false

//     >= evaluates if what is on the left is greater than or equal to what is on the right of the
//     operator and returns true if so,
//     false otherwise

//     != evaluates if what is on the left is not equal to what is on the right.If they are not equal,
//     the result is true, if they are equal, the result returns false

//     3. Write a C++ program that finds if a number input is divisible by 5 using an if statement.

#include <iostream>

using namespace std;

int main()
{
    // 3. Write a C++ program that finds if a number input is divisible by 5 using an if statement.

    int input;

    cout << "This program finds out if your number is divisible by 5!" << endl;

    cout << "Enter a number" << endl;

    cin >> input;

    if (input % 5 == 0)
    {
        cout << input << " is divisible by 5!";
    }
    else
    {
        cout << input << " is not divisble by 5!";
    }

    return 0;
}

// 4. Write a C++ program that would use a switch statement to guess a number between one and five.For each number guessed there should be a response.Example user guess 1, response close but no cigar

#include <iostream>

    using namespace std;

int main()
{
    string TRY_AGAIN = "\nTry again?";

    int guessInput;
    int answer = 4;

    while (guessInput != answer)
    {

        cout << "Guess a number between 1 - 4" << endl;
        cin >> guessInput;

        switch (guessInput)
        {
        case 1:
            cout << "Not even close!" << TRY_AGAIN << endl;
            break;

        case 2:
            cout << "A little far off there." << TRY_AGAIN << endl;
            break;

        case 3:
            cout << "So close!" << TRY_AGAIN << endl;
            break;

        case 4:
            cout << "You guessed the right number!";
            break;

        case 5:
            cout << "Close but no cigar!" << TRY_AGAIN << endl;
            break;
        }
    }

    return 0;
}

// 4.Name 3 looping structures in C++

// for loop
// while loop
// do while loop

// 5. Write a C++ program that prints out Hello world five times. .(Must use for loop)

#include <iostream>

using namespace std;

int main()
{
    // 5. Write a C++ program that prints out Hello world five times. .(Must use for loop)

    for (int i = 0; i < 5; i++)
    {
        cout << "Hello World" << endl;
    }

    return 0;
}

// 6. Write a C++ program that finds the product of all numbers input and ends when the user inputs a negative, use a while loop.

#include <iostream>

using namespace std;

int main()
{
    // 6. Write a C++ program that finds the product of all numbers input and ends when the user inputs a negative, use a while loop.

    int result = 1;
    int input;

    cout << "This program multiplies all the numbers you will list" << endl;
    cout << "Enter a negative number to end the program" << endl;

    while (input > 0)
    {
        cout << "Enter a number" << endl;
        cin >> input;
        if (input > 0)
        {
            result *= input;
        }
    }

    cout << "The product of all the numbers you entered is: " << result << endl;
}