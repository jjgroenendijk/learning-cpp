/*

Write a program to show the truth table of the following expression

(a  &&  b) || !c

The program should meet the following requirements:

    Use a function with the following prototype to calculate the above-mentioned logic expression:

bool logicFunction(bool b1, bool b2, bool b3);

    Output/display must take place in the main() function.
    Two tables should be created and shown by an output stream; one with noboolalpha and the other with boolalpha formatting. Ensure the columns have a fixed width.

*/

#include <iostream>

using namespace std;

bool logicFunction(bool b1, bool b2, bool b3)
{
    return ((b1 && b2) || !b3);
}

int main()
{
    bool a[8][3] = {{false, false, false}, {false, false, true}, {false, true, false}, {false, true, true}, {true, false, false}, {true, false, true}, {true, true, false}, {true, true, true}};

    cout << "Truth table" << endl;

    cout << "A  B  C  Result" << endl;

    for (int i = 0; i < 8; i++)
    {
        // print the values for a, b and c
        cout << a[i][0] << "  " << a[i][1] << "  " << a[i][2] << "  ";

        // print the result of the logic function
        cout << logicFunction(a[i][0], a[i][1], a[i][2]) << endl;
    }

    cout << endl << endl;

    cout << "Truth table" << endl;
    cout << "A" << "\t" << "B" << "\t" << "C" << "\t" << "Result" << endl;

    for (int i = 0; i < 8; i++)
    {
        cout.flags(ios::boolalpha);

        // print the values for a, b and c
        cout << boolalpha << a[i][0] <<  "\t" << a[i][1] << "\t" << a[i][2] << "\t";

        // print the result of the logic function
        cout << logicFunction(a[i][0], a[i][1], a[i][2]) << endl;
    }

    return 0;
}
