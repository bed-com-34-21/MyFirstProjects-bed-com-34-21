#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    float length, width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    Rectangle rectangle;
    rectangle.setLength(length);
    rectangle.setWidth(width);

    float area = rectangle.calculateArea();

    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}