#pragma once

#include <iostream>
using namespace std;

class Box{
    public:

        Box();

        Box(const double newLength, const double newBreadth, const double newHeight);

        ~Box();

        double getVolume();

        void setLength(double len);
        void setHeight(double hei);
        void setBreadth(double bre);

        Box operator+(const Box& b);

    private:
        double length;
        double breadth;
        double height;


};
