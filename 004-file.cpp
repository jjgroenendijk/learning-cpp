/*

    Write a program to do the following:

    Input a floating-point number with a fraction part of two digits.
    The program checks the input number (it should be between 5.1 and 10.2), if not, ask the user to re-enter the number.
    Calculate the square root of the number, then display the result (the fraction part should be 2 digits), include the C++ cmath header file.
    Repeat the steps (1 to 3) four times using a repeat loop.
    Write the input and calculated square root values (the fraction part should be 2 digits) separated by a comma to a text file result.txt using ofstream, see ofstream code example. Every pair of an input and a calculated value in a separated line

*/

#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    // open file
    ofstream file("result.txt");

    // check if opening file succeeded 
    if (!file.is_open())
    {
        cout << "Error opening file" << endl;
        exit(1);
    }

    // Variables
    float number[4], rounded_number[4], sqrt_number[4];

    // repeat 4 times
    for (int i = 0; i < 4; i++)
    {
        while (number[i] < 5.1 || number[i] > 10.2)
        {
            cout << "Please enter a number between 5.1 and 10.2: ";
            cin >> number[i];
        }

        //sqrt_number[i] = (sqrt(number[i]));

        rounded_number[i] = round( (sqrt(number[i]) ) * 100) / 100;

        cout << rounded_number[i] << endl;

        // Write result to file
        file << number[i] << ", " << rounded_number[i] << endl;
    }

    // close file
    file.close();

    return 0;
}