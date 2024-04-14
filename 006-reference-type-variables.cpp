/*

This is an extension to C++ Assignment 1.3 Truth table logic expression

    Create a new function that has three bool reference variables in the parameter list:

void inputLogicValues(bool &b1, bool &b2, bool &b3);

These three (output) values must be imported in this function with cin. The function must write informative texts to cout within this context that requests that the user provides input. Call this function a few times after the entered values have been processed through the previously created logicFunction(). This function will, therefore, be called outside the function inputLogicValues()!

    Call this new function before calling logicFunction() showing the value of the logical expression after the entered boolean values.  

*/

#include <iostream>

using namespace std;

bool logicFunction(bool b1, bool b2, bool b3)
{
    return ((b1 && b2) || !b3);
}

void inputLogicValues(bool &b1, bool &b2, bool &b3)
{
        cout << "Enter three boolean values (0 or 1):" << endl;
        cin >> b1 >> b2 >> b3;
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

    bool q, r, s;
    inputLogicValues(q, r, s);
    bool result = logicFunction(q, r, s);
    cout << "The result of the logic function is: " << result << endl;

    return 0;
}
