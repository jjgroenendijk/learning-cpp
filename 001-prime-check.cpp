/*

    Write a C++ program that takes an integer as input from the user.
    Implement a function (e.g., isPrime) that checks if the input number
    is a prime number or not. A prime number is a positive integer greater than 1 that is divisible only by 1 and itself.
    Display a message to inform the user whether the input number is prime or not.

*/

#include <iostream>

using namespace std;

bool isPrime(int input)
{
    for (int i = 2; i < input; i++)
    {
        if (input % i == 0)
        {
            return false;
            break;
        }
    }

    return true;
}

int main()
{
    int input;
    cout << "Enter a positive number: ";
    cin >> input;

    if (isPrime(input) == 1) // true
    {
        cout << "Prime: Yes" << endl;
    }
    else if (isPrime(input) == 0) // false
    {
        cout << "Prime: No" << endl;
    }
    else
    {
        cout << "Error!";
    }
}