/*

    Write a C++ program that takes an integer as input from the user.
    Implement a function (e.g., calculateFactorial) that calculates the factorial
    of the input integer using a loop or recursion.
    Display the result to the user.

*/

#include <iostream>

using namespace std;

int main()
{
    int input, output, tmp;

    cout << "Enter a number: ";
    cin >> input;

    for (tmp = input; tmp > 0; tmp--)
    {
        output = output * tmp;
    }

    cout << "The factorial of " << input << " is " << output << endl;

    return 0;
}