#include <iostream>
#include <cmath> // For mathematical functions

using namespace std;

// Function to calculate the area of a square
int areaOfASquare(int side) {
    return side * side;
}

// Function to calculate the area of a rectangle
int areaOfARectangle(int length, int width) {
    return length * width;
}

// Function to calculate the area of a triangle
float areaOfATrirangle(float base, float height) {
    return 0.5 * base * height;
}

int main() {
    int number;
    cout << "Please enter the area of the shape to calculate" << endl;
    cout << "1. Square" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "4.Quit the program" <<endl;
    cout << "Enter selection: ";
    cin >> number;

    switch (number) {
        case 1: {
            int side;
            cout << "Enter the side length of the square: ";
            cin >> side;
            cout << "Area of the square is: " << areaOfASquare(side) << endl;
            break;
        }
        case 2: {
            int length, width;
            cout << "Enter the length and width of the rectangle: ";
            cin >> length >> width;
            cout << "Area of the rectangle is: " << areaOfARectangle(length, width) << endl;
            break;
        }
        case 3: {
            float base, height;
            cout << "Enter the base and height of the triangle: ";
            cin >> base >> height;
            cout << "Area of the triangle is: " << areaOfATrirangle(base, height) << endl;
            break;
        }
        case 4:{
            quick_exit(0);
        }
        default:
            cout << "Your input was: "<< number <<" which is invalid input" << endl;
    }while(number >=5){
        cout << "Please enter a valid input!!!" <<endl;
        cin >> number;
    }

    return 0;
}
