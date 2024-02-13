#include <iostream>
#include <string>
using std::cout;

int main() {
    cout << "What is your name?\n";

    std::string name;

    std::cin >> name;

    cout << "Hi " << name << "!\n";

    return 0;
}