#ifndef MAIN_H_INCLUDED
#include "Rectangle.h"
#include <iostream>
#define MAIN_H_INCLUDED
using namespace std;

int main(){
Rectangle Rectangle;
double userLength, userWidth;
cout << "Enter the lenghth of the rectangle: ";
cin >> userLength;
Rectangle.setLegth(userLength);

cout << "Enter the width of the rectangle: ";
cin >> userWidth;
Rectangle.setWidth(userWidth);

double area = Rectangle.calculateArea();
cout << "Area of the rectangle is: " << area << endl;
return 0;
}


#endif // MAIN_H_INCLUDED
