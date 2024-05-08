#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
    // Create an instance of Rectangle
    Rectangle rect;

    // Prompt user to enter length and width
    float length, width;
    cout << "Enter length of the rectangle: ";
    cin >> length;
    cout << "Enter width of the rectangle: ";
    cin >> width;

    // Set length and width of the rectangle
    rect.setLength(length);
    rect.setWidth(width);

    // Calculate and output area of the rectangle
    cout << "Area of the rectangle: " << rect.calculateArea() << endl;

    return 0;
}
