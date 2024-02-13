/*

    compile using:
    g++ 003-classes.cpp 003-point.cpp -o 003-classes



*/

#include <iostream>
#include "003-point.h"

using namespace std;

int main() {

    writeOutput();

    point p1;
    point p2(10, 20);
    point p3(15, 25);

    p1.print();
    p2.print();
    p3.print();

    cout << "Distance between p1 and p2: " << p1.distanceTo(p2) << endl;

    return 0;
}