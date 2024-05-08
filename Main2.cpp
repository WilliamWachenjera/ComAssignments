#include <iostream>
#include "rectangle.h"

int main() {
    // Create an instance of Rectangle using default constructor
    Rectangle rect1;

    // Prompt user to enter length and width for rect1
    float length1, width1;
    std::cout << "Enter length of the first rectangle: ";
    std::cin >> length1;
    std::cout << "Enter width of the first rectangle: ";
    std::cin >> width1;

    // Set length and width of the first rectangle
    rect1.setLength(length1);
    rect1.setWidth(width1);

    // Calculate and output area of the first rectangle
    std::cout << "Area of the first rectangle: " << rect1.calculateArea() << std::endl;

    // Create another instance of Rectangle using overloaded constructor
    float length2, width2;
    std::cout << "Enter length of the second rectangle: ";
    std::cin >> length2;
    std::cout << "Enter width of the second rectangle: ";
    std::cin >> width2;

    Rectangle rect2(length2, width2);

    // Calculate and output area of the second rectangle
    std::cout << "Area of the second rectangle: " << rect2.calculateArea() << std::endl;

    return 0;
}
