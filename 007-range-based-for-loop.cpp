/*

    Assignment 2.2: std::array class and range based for loop

    Create a new C++ project with QtCreator.

    Write a program that includes the followings:

    Create an std::array object containing 10 integers.
    Show all the values in the array using cout in a range based for loop.
    Calculate the average value of all values in the array using a range based for loop.
    Calculate the maximum value of all values in the array using a range based for loop.
    Create a new array of the same type and assign all values of the first array by the copy constructor. Show all the values in the new array using cout in a range-based for loop.

*/

#include <iostream>
#include <array>

using namespace std;

int main()
{
    // Create an std::array object containing 10 integers.
    std::array<int, 10> array01 = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    // Show all the values in the array using cout in a range based for loop.
    cout << "Array01: ";

    for (int i : array01)
    {
        cout << i << " ";
    }

    cout << endl;

    // Calculate the average value of all values in the array using a range based for loop.
    int sum = 0, average = 0;

    for (int i : array01)
    {
        sum += i;
    }

    average = sum / array01.size();
    cout << "Average: " << average << endl;

    // Calculate the maximum value of all values in the array using a range based for loop.
    int max = array01[0];

    for (int y : array01)
    {

        if (y > max)
        {
            max = y;
        }

    }

    cout << "Max: " << max << endl;

    // Create a new array of the same type and assign all values of the first array by the copy constructor. 

    std::array<int, 10> array02 = array01;

    // Show all the values in the new array using cout in a range-based for loop.

    cout << "Array02: ";

    for (int i : array02)
    {
        cout << i << " ";
    }
    
    return 0;
}