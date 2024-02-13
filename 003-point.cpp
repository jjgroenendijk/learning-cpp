#include <iostream>
#include "003-point.h"

using namespace std;

void writeOutput() {
    cout << "Hello from writeOutput" << endl;
}

int point::getX() {
    return x;
}

int point::getY() {
    return y;
}

void point::setX(int xin) {
    x = xin;
}

void point::setY(int yin) {
    y = yin;
}

void point::print() const {
    std::cout << "(" << x << "," << y << ")" << std::endl;
}

point::point() {
    x = 0;
    y = 0;
}

point::point(int xin, int yin) {
    x = xin;
    y = yin;
}

float point::distanceTo(const point p) const {
    float dx = p.x - x;
    float dy = p.y - y;
    return sqrt(dx * dx + dy * dy);
}
