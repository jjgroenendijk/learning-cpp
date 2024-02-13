#include <iostream>

int main() {
    int x = 5, y = 7, z = 12;

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "z: " << z << std::endl;

    std::cout << "&x: " << &x << std::endl;
    std::cout << "$y: " << &y << std::endl;
    std::cout << "$z: " << &z << std::endl;

    int *pa, *pb, *pc;

    //pa = x;
    pb = &y;
    //*pb = &z;
    
    std::cout << "pa: " << pa << std::endl;
    std::cout << "pb: " << *pb << std::endl;
    std::cout << "*pc: " << *pc << std::endl;

    int d = 5;
    int &e = d;

    std::cout << "d: " << d << std::endl;
    std::cout << "e: " << e << std::endl;

    //int &e = 4;

    std::cout << "d: " << d << std::endl;
    std::cout << "e: " << e << std::endl;

    return 0;
}